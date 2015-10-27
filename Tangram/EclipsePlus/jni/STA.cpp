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

	JNIEXPORT void JNICALL Java_com_tangram_STA_doMessagePump(JNIEnv *env, jobject obj)
	{
		// store the current thread id so we can kill it
		jclass argClass = env->GetObjectClass(obj);
		jfieldID ajf = env->GetFieldID(argClass, "threadID", "I");
		jint threadID = (jint)GetCurrentThreadId();
		env->SetIntField(obj, ajf, threadID);

		MSG msg;

		ZeroMemory(&msg, sizeof(msg));
		msg.wParam = S_OK;

		while (GetMessage(&msg, NULL, 0, 0))
		{
			DispatchMessage(&msg);
		}
	}

	JNIEXPORT void JNICALL Java_com_tangram_STA_quitMessagePump(JNIEnv *env, jobject obj)
	{
		jclass argClass = env->GetObjectClass(obj);
		jfieldID ajf = env->GetFieldID(argClass, "threadID", "I");
		jint threadID = env->GetIntField(obj, ajf);
		PostThreadMessage((DWORD)threadID, WM_QUIT, 0, 0);
	}
}
