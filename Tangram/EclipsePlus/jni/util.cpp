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
#include "Dispatch.h"
#include "util.h"

extern "C"
{

	void ThrowComFail(JNIEnv *env, const char* desc, jint hr)
	{
		jclass failClass = env->FindClass("com/tangram/ComFailException");
		// call the constructor that takes hr and message
		jmethodID failCons =
			env->GetMethodID(failClass, "<init>", "(ILjava/lang/String;)V");
		if (!desc) {
			desc = "Java/COM Error";
		}
		jstring js = env->NewStringUTF(desc);
		jthrowable fail = (jthrowable)env->NewObject(failClass, failCons, hr, js);
		env->Throw(fail);
	}

	void ThrowComFailUnicode(JNIEnv *env, const wchar_t* desc, jint hr)
	{
		if (!desc) {
			ThrowComFail(env, "Java/COM Error", hr);
		}
		jclass failClass = env->FindClass("com/tangram/ComFailException");
		// call the constructor that takes hr and message
		jmethodID failCons =
			env->GetMethodID(failClass, "<init>", "(ILjava/lang/String;)V");
		jstring js = env->NewString((const jchar *)desc, wcslen(desc));
		jthrowable fail = (jthrowable)env->NewObject(failClass, failCons, hr, js);
		env->Throw(fail);
	}

	// if env's are different throw on the 1st env
	int CheckEnv(JNIEnv *env1, JNIEnv *env2)
	{
		if (env1 != env2) {
			jclass failClass = env1->FindClass("com/tangram/WrongThreadException");
			// call the constructor that takes hr and message
			jmethodID failCons =
				env1->GetMethodID(failClass, "<init>", "()V");
			env1->ThrowNew(failClass, "Wrong Thread");
			return 0;
		}
		return 1;
	}

}
