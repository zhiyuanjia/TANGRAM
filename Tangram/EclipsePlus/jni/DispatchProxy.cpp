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
#include "ComThread.h"
#include "util.h"

extern "C"
{

	// extract a IStream from a jobject
	IStream *extractStream(JNIEnv *env, jobject arg)
	{
		jclass argClass = env->GetObjectClass(arg);
		jfieldID ajf = env->GetFieldID(argClass, "m_pStream", "J");
		jlong anum = env->GetLongField(arg, ajf);
		IStream *v = (IStream *)anum;
		return v;
	}

	JNIEXPORT void JNICALL Java_com_tangram_DispatchProxy_MarshalIntoStream
		(JNIEnv *env, jobject _this, jobject disp)
	{
		IDispatch *pIDispatch = extractDispatch(env, disp);
		if (!pIDispatch) return;
		IStream *ps; // this is the stream we will marshall into
		HRESULT hr = CoMarshalInterThreadInterfaceInStream(
			IID_IDispatch, pIDispatch, &ps);
		if (!SUCCEEDED(hr))
		{
			ThrowComFail(env, "Could not Marshal Dispatch into IStream", hr);
			return;
		}
		// store the stream pointer on the object
		jclass argClass = env->GetObjectClass(_this);
		jfieldID ajf = env->GetFieldID(argClass, "m_pStream", "J");
		env->SetLongField(_this, ajf, (jlong)ps);
	}

	JNIEXPORT jobject JNICALL Java_com_tangram_DispatchProxy_MarshalFromStream
		(JNIEnv *env, jobject _this)
	{
		IStream *ps = extractStream(env, _this);
		if (!ps)
		{
			ThrowComFail(env, "Could not get IStream from DispatchProxy", -1);
			return NULL;
		}
		IDispatch *pD;
		HRESULT hr = CoGetInterfaceAndReleaseStream(ps, IID_IDispatch, (void **)&pD);
		// zero out the stream pointer on the object
		// since the stream can only be read once
		jclass argClass = env->GetObjectClass(_this);
		jfieldID ajf = env->GetFieldID(argClass, "m_pStream", "J");
		env->SetLongField(_this, ajf, 0ll);

		if (!SUCCEEDED(hr))
		{
			ThrowComFail(env, "Could not Marshal Dispatch from IStream", hr);
			return NULL;
		}
		jclass autoClass = env->FindClass("com/tangram/Dispatch");
		jmethodID autoCons = env->GetMethodID(autoClass, "<init>", "(J)V");
		// construct a Dispatch object to return
		// I am copying the pointer to java
		if (pD) pD->AddRef();
		jobject newAuto = env->NewObject(autoClass, autoCons, pD);
		return newAuto;
	}

	JNIEXPORT void JNICALL Java_com_tangram_DispatchProxy_release
		(JNIEnv *env, jobject _this)
	{
		IStream *ps = extractStream(env, _this);
		if (ps) {
			ps->Release();
			jclass argClass = env->GetObjectClass(_this);
			jfieldID ajf = env->GetFieldID(argClass, "m_pStream", "J");
			env->SetLongField(_this, ajf, 0ll);
		}
	}

}
