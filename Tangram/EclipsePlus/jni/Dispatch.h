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
/* Header for class Dispatch */

#ifndef _Included_Dispatch
#define _Included_Dispatch
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_tangram_Dispatch
 * Method:    QueryInterface
 * Signature: (Ljava/lang/String;)Lcom/tangram/Dispatch;
 */
JNIEXPORT jobject JNICALL Java_com_tangram_Dispatch_QueryInterface
  (JNIEnv *, jobject, jstring);

/*
 * Class:     Dispatch
 * Method:    createInstance
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_tangram_Dispatch_createInstanceNative
  (JNIEnv *, jobject, jstring);

/*
 * Class:     Dispatch
 * Method:    getActiveInstance
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_tangram_Dispatch_getActiveInstanceNative
  (JNIEnv *, jobject, jstring);

/*
 * Class:     Dispatch
 * Method:    coCreateInstance
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_tangram_Dispatch_coCreateInstanceNative
  (JNIEnv *, jobject, jstring);

/*
 * Class:     Dispatch
 * Method:    release
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_tangram_Dispatch_release
  (JNIEnv *, jobject);

/*
 * Class:     Dispatch
 * Method:    getIDsOfNames
 * Signature: (Ljava/lang/Object;I[Ljava/lang/String;)[I
 */
JNIEXPORT jintArray JNICALL Java_com_tangram_Dispatch_getIDsOfNames
  (JNIEnv *, jclass, jobject, jint, jobjectArray);

/*
 * Class:     Dispatch
 * Method:    invokev
 * Signature: (Ljava/lang/Object;Ljava/lang/String;III[LVariant;[I)LVariant;
 */
JNIEXPORT jobject JNICALL Java_com_tangram_Dispatch_invokev
  (JNIEnv *, jclass, jobject, jstring, jint, jint, jint, jobjectArray, jintArray);

/*
 * Class:     Dispatch
 * Method:    wait
 * Signature: (Ljava/lang/Object;I;)I
 */
JNIEXPORT jint JNICALL Java_com_tangram_Dispatch_hasExited
	(JNIEnv *, jclass, jobject, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
