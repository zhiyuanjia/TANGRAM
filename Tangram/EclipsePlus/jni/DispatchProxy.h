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
#include <jni.h>
/* Header for class com_tangram_DispatchProxy */

#ifndef _Included_com_tangram_DispatchProxy
#define _Included_com_tangram_DispatchProxy
#ifdef __cplusplus
extern "C" {
#endif
	/*
	 * Class:     com_tangram_DispatchProxy
	 * Method:    MarshalIntoStream
	 * Signature: (Lcom/tangram/Dispatch;)V
	 */
	JNIEXPORT void JNICALL Java_com_tangram_DispatchProxy_MarshalIntoStream(JNIEnv *, jobject, jobject);

	/*
	 * Class:     com_tangram_DispatchProxy
	 * Method:    MarshalFromStream
	 * Signature: ()Lcom/tangram/Dispatch;
	 */
	JNIEXPORT jobject JNICALL Java_com_tangram_DispatchProxy_MarshalFromStream(JNIEnv *, jobject);

	/*
	 * Class:     com_tangram_DispatchProxy
	 * Method:    release
	 * Signature: ()V
	 */
	JNIEXPORT void JNICALL Java_com_tangram_DispatchProxy_release(JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
