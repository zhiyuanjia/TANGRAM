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
/* Header for class DispatchEvents */

#ifndef _Included_DispatchEvents
#define _Included_DispatchEvents
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     com_tangram_DispatchEvents
 * Method:    init3
 * Signature: (Lcom/tangram/Dispatch;Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_tangram_DispatchEvents_init3(JNIEnv *, jobject, jobject, jobject, jstring, jstring);

/*
 * Class:     DispatchEvents
 * Method:    release
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_tangram_DispatchEvents_release(JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif


