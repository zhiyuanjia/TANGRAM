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
#ifndef _Included_EnumVariant
#define _Included_EnumVariant

#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif
	/*
	 * Class:     com_tangram_EnumVariant
	 * Method:    Next
	 * Signature: ([Lcom/tangram/Variant;)I
	 */
	JNIEXPORT jint JNICALL Java_com_tangram_EnumVariant_Next(JNIEnv *, jobject, jobjectArray);

	/*
	 * Class:     com_tangram_EnumVariant
	 * Method:    Release
	 * Signature: ()V
	 */
	JNIEXPORT void JNICALL Java_com_tangram_EnumVariant_release(JNIEnv *, jobject);

	/*
	 * Class:     com_tangram_EnumVariant
	 * Method:    Reset
	 * Signature: ()V
	 */
	JNIEXPORT void JNICALL Java_com_tangram_EnumVariant_Reset(JNIEnv *, jobject);

	/*
	 * Class:     com_tangram_EnumVariant
	 * Method:    Skip
	 * Signature: (I)V
	 */
	JNIEXPORT void JNICALL Java_com_tangram_EnumVariant_Skip(JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
