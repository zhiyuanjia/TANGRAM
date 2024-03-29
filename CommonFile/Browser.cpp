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

#include "StdAfx.h"
#include "browser.h"



_ATL_FUNC_INFO StatusTextChange = { CC_STDCALL, VT_EMPTY, 1, VT_BSTR };
_ATL_FUNC_INFO ProgressChange = { CC_STDCALL, VT_EMPTY, 2, VT_I4, VT_I4 };
_ATL_FUNC_INFO CommandStateChange = { CC_STDCALL, VT_EMPTY, 2, VT_I4, VT_BOOL };
_ATL_FUNC_INFO DownloadBegin = { CC_STDCALL, VT_EMPTY, 0, NULL };
_ATL_FUNC_INFO DownloadComplete = { CC_STDCALL, VT_EMPTY, 0, NULL };
_ATL_FUNC_INFO TitleChange = { CC_STDCALL, VT_EMPTY, 1, VT_BSTR };
_ATL_FUNC_INFO PropertyChange = { CC_STDCALL, VT_EMPTY, 1, VT_BSTR };
_ATL_FUNC_INFO BeforeNavigate2 = { CC_STDCALL, VT_EMPTY, 7, VT_DISPATCH, VT_VARIANT | VT_BYREF, VT_VARIANT | VT_BYREF, VT_VARIANT | VT_BYREF, VT_VARIANT | VT_BYREF, VT_VARIANT | VT_BYREF, VT_BOOL | VT_BYREF };
_ATL_FUNC_INFO NewWindow2 = { CC_STDCALL, VT_EMPTY, 2, VT_DISPATCH | VT_BYREF, VT_BOOL | VT_BYREF };
_ATL_FUNC_INFO NavigateComplete2 = { CC_STDCALL, VT_EMPTY, 2, VT_DISPATCH, VT_VARIANT | VT_BYREF };
_ATL_FUNC_INFO DocumentComplete = { CC_STDCALL, VT_EMPTY, 2, VT_DISPATCH, VT_VARIANT | VT_BYREF };
//_ATL_FUNC_INFO OnQuit = { CC_STDCALL, VT_EMPTY, 0, NULL };
//_ATL_FUNC_INFO OnVisible = { CC_STDCALL, VT_EMPTY, 1, VT_BOOL };
//_ATL_FUNC_INFO OnToolBar = { CC_STDCALL, VT_EMPTY, 1, VT_BOOL };
//_ATL_FUNC_INFO OnMenuBar = { CC_STDCALL, VT_EMPTY, 1, VT_BOOL };
//_ATL_FUNC_INFO OnStatusBar = { CC_STDCALL, VT_EMPTY, 1, VT_BOOL };
//_ATL_FUNC_INFO OnFullScreen = { CC_STDCALL, VT_EMPTY, 1, VT_BOOL };
//_ATL_FUNC_INFO OnTheaterMode = { CC_STDCALL, VT_EMPTY, 1, VT_BOOL };
_ATL_FUNC_INFO WindowSetResizable = { CC_STDCALL, VT_EMPTY, 1, VT_BOOL };
_ATL_FUNC_INFO WindowSetLeft = { CC_STDCALL, VT_EMPTY, 1, VT_I4 };
_ATL_FUNC_INFO WindowSetTop = { CC_STDCALL, VT_EMPTY, 1, VT_I4 };
_ATL_FUNC_INFO WindowSetWidth = { CC_STDCALL, VT_EMPTY, 1, VT_I4 };
_ATL_FUNC_INFO WindowSetHeight = { CC_STDCALL, VT_EMPTY, 1, VT_I4 };
_ATL_FUNC_INFO WindowClosing = { CC_STDCALL, VT_EMPTY, 2, VT_BOOL, VT_BOOL | VT_BYREF };
_ATL_FUNC_INFO ClientToHostWindow = { CC_STDCALL, VT_EMPTY, 2, VT_I4 | VT_BYREF, VT_I4 | VT_BYREF };
_ATL_FUNC_INFO SetSecureLockIcon = { CC_STDCALL, VT_EMPTY, 1, VT_I4 };
_ATL_FUNC_INFO FileDownload = { CC_STDCALL, VT_EMPTY, 2, VT_BOOL, VT_BOOL | VT_BYREF };
_ATL_FUNC_INFO NavigateError = { CC_STDCALL, VT_EMPTY, 5, VT_DISPATCH, VT_VARIANT | VT_BYREF, VT_VARIANT | VT_BYREF, VT_VARIANT | VT_BYREF, VT_BOOL | VT_BYREF };
_ATL_FUNC_INFO PrintTemplateInstantiation = { CC_STDCALL, VT_EMPTY, 1, VT_DISPATCH };
_ATL_FUNC_INFO PrintTemplateTeardown = { CC_STDCALL, VT_EMPTY, 1, VT_DISPATCH };
_ATL_FUNC_INFO UpdatePageStatus = { CC_STDCALL, VT_EMPTY, 3, VT_DISPATCH, VT_VARIANT | VT_BYREF, VT_VARIANT | VT_BYREF };
_ATL_FUNC_INFO PrivacyImpactedStateChange = { CC_STDCALL, VT_EMPTY, 1, VT_BOOL };
_ATL_FUNC_INFO NewWindow3 = { CC_STDCALL, VT_EMPTY, 5, VT_DISPATCH | VT_BYREF, VT_BOOL | VT_BYREF, VT_UI4, VT_BSTR, VT_BSTR };
_ATL_FUNC_INFO SetPhishingFilterStatus = { CC_STDCALL, VT_EMPTY, 1, VT_I4 };
_ATL_FUNC_INFO WindowStateChanged = { CC_STDCALL, VT_EMPTY, 2, VT_UI4, VT_UI4 };
_ATL_FUNC_INFO NewProcess = { CC_STDCALL, VT_EMPTY, 3, VT_I4, VT_DISPATCH, VT_BOOL | VT_BYREF };
_ATL_FUNC_INFO ThirdPartyUrlBlocked = { CC_STDCALL, VT_EMPTY, 2, VT_VARIANT | VT_BYREF, VT_UI4 };
_ATL_FUNC_INFO RedirectXDomainBlocked = { CC_STDCALL, VT_EMPTY, 5, VT_DISPATCH, VT_VARIANT | VT_BYREF, VT_VARIANT | VT_BYREF, VT_VARIANT | VT_BYREF, VT_VARIANT | VT_BYREF };
_ATL_FUNC_INFO BeforeScriptExecute = { CC_STDCALL, VT_EMPTY, 1, VT_DISPATCH };
_ATL_FUNC_INFO WebWorkerStarted = { CC_STDCALL, VT_EMPTY, 2, VT_UI4, VT_BSTR };
_ATL_FUNC_INFO WebWorkerFinsihed = { CC_STDCALL, VT_EMPTY, 1, VT_UI4 };

CWebbrowserEvent::CWebbrowserEvent()
{
}
