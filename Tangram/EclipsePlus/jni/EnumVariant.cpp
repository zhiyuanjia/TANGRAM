/********************************************************************************
*					Tangram Library - version 8.0								*
*********************************************************************************
* Copyright (C) 2002-2015 by Tangram Team.   All Rights Reserved.				*
*
* THIS SOURCE FILE IS THE PROPERTY OF TANGRAM TEAM AND IS NOT TO
* BE RE-DISTRIBUTED BY ANY MEANS WHATSOEVER WITHOUT THE EXPRESSED
* WRITTEN CONSENT OF TANGRAM TEAM.
*
* THIS SOURCE CODE CAN ONLY BE USED UNDER THE TERMS AND CONDITIONS
* OUTLINED IN THE GPL LICENSE AGREEMENT.TANGRAM TEAM
* GRANTS TO YOU (ONE SOFTWARE DEVELOPER) THE LIMITED RIGHT TO USE
* THIS SOFTWARE ON A SINGLE COMPUTER.
*
* CONTACT INFORMATION:
* mailto:sunhui@tangramfx.com
* http://www.tangramFX.com
*
*
********************************************************************************/
#include "..\Tangram\stdafx.h"
#include "Dispatch.h"
#include "util.h"

/**
 * An implementation of IEnumVariant based on code submitted by
 * Thomas Hallgren (mailto:Thomas.Hallgren@eoncompany.com)
 */
extern "C"
{

	// extract a IDispatch from a jobject
	IEnumVARIANT* extractEnumVariant(JNIEnv* env, jobject arg)
	{
		jfieldID FID_pIEnumVARIANT = 0;
		jclass clazz = env->GetObjectClass(arg);
		FID_pIEnumVARIANT = env->GetFieldID(clazz, "m_pIEnumVARIANT", "J");
		return (IEnumVARIANT*)env->GetLongField(arg, FID_pIEnumVARIANT);
	}

	JNIEXPORT jint JNICALL
		Java_com_tangram_EnumVariant_Next(JNIEnv* env, jobject _this, jobjectArray vars)
	{
		IEnumVARIANT* self = extractEnumVariant(env, _this);
		//printf("self=%x\n", self);
		if (self == NULL)
			return 0;

		ULONG count = (ULONG)env->GetArrayLength(vars);
		if (count == 0)
			return 0;

		VARIANT* sink = (VARIANT*)CoTaskMemAlloc(count * sizeof(VARIANT));
		// SF 3377279
		// Added initializing Variant used to retrieve the next value from IEnum
		// because some implemenations call VariantClear on it before setting a new value
		for (ULONG i = 0; i < count; ++i)
		{
			VariantInit(sink + i);
		}

		ULONG fetchCount = 0;

		HRESULT hr = self->Next(count, sink, &fetchCount);
		if (FAILED(hr))
		{
			CoTaskMemFree(sink);
			ThrowComFail(env, "IEnumVARIANT::Next", hr);
			return 0;
		}

		// prepare a new return value array
		//
		jclass    clazz = env->FindClass("com/tangram/Variant");
		jmethodID ctor = env->GetMethodID(clazz, "<init>", "()V");

		for (ULONG idx = 0; idx < fetchCount; ++idx)
		{
			// construct a variant to return
			//
			jobject newVariant = env->NewObject(clazz, ctor);
			VARIANT* v = extractVariant(env, newVariant);
			VariantCopy(v, sink + idx);
			env->SetObjectArrayElement(vars, idx, newVariant);
			env->DeleteLocalRef(newVariant);
			//Sourceforge-1674179 fix memory leak
			// Variants received while iterating IEnumVARIANT must be cleared when no longer needed
			// The variant has been copied so no longer needed
			VariantClear(sink);
		}
		CoTaskMemFree(sink);
		return (jint)fetchCount;
	}

	JNIEXPORT void JNICALL
		Java_com_tangram_EnumVariant_release(JNIEnv* env, jobject _this)
	{
		IEnumVARIANT* self = extractEnumVariant(env, _this);
		if (self != NULL)
		{
			self->Release();
			jfieldID FID_pIEnumVARIANT = 0;
			jclass clazz = env->GetObjectClass(_this);
			FID_pIEnumVARIANT = env->GetFieldID(clazz, "m_pIEnumVARIANT", "J");
			env->SetLongField(_this, FID_pIEnumVARIANT, 0ll);
		}
	}

	JNIEXPORT void JNICALL
		Java_com_tangram_EnumVariant_Reset(JNIEnv* env, jobject _this)
	{
		IEnumVARIANT* self = extractEnumVariant(env, _this);
		if (self == NULL)
			return;

		HRESULT hr = self->Reset();
		if (FAILED(hr))
			ThrowComFail(env, "IEnumVARIANT::Reset", hr);
	}

	JNIEXPORT void JNICALL
		Java_com_tangram_EnumVariant_Skip(JNIEnv* env, jobject _this, jint count)
	{
		IEnumVARIANT* self = extractEnumVariant(env, _this);
		if (self == NULL)
			return;

		HRESULT hr = self->Skip((ULONG)count);
		if (FAILED(hr))
			ThrowComFail(env, "IEnumVARIANT::Skip", hr);
	}

}
