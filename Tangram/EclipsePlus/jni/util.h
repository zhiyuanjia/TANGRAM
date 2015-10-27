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
#include <objbase.h>
extern "C" {
  VARIANT *extractVariant(JNIEnv *env, jobject arg);
  void ThrowComFail(JNIEnv *env, const char* desc, jint hr);
  void ThrowComFailUnicode(JNIEnv *env, const wchar_t* desc, jint hr);
  IDispatch *extractDispatch(JNIEnv *env, jobject arg);
  SAFEARRAY *extractSA(JNIEnv *env, jobject arg);
  void setSA(JNIEnv *env, jobject arg, SAFEARRAY *sa, int copy);
  SAFEARRAY *copySA(SAFEARRAY *psa);
}
