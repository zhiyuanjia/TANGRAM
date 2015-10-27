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
* OUTLINED IN THE TANGRAM LICENSE AGREEMENT.TANGRAM TEAM 
* GRANTS TO YOU (ONE SOFTWARE DEVELOPER) THE LIMITED RIGHT TO USE 
* THIS SOFTWARE ON A SINGLE COMPUTER.
*
* CONTACT INFORMATION:
* mailto:sunhuizlz@yeah.net
*
********************************************************************************/
#pragma once
//#ifdef TANGRAM_64
//#else
BOOL HookApi();
BOOL UnHookApi();
BOOL HookCoCreateInstance(BOOL bHook);
BOOL HookCoRegisterClassObject(BOOL bHook);
//void Init2013_0();
//void UnInit2013_0();
//void Init2013();
//void Init2013_1();
//void Init2013_2();
//#endif