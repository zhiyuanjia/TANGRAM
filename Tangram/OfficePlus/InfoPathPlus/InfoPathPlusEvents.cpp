/********************************************************************************
*					Tangram Library - version 8.0								*
*********************************************************************************
* Copyright (C) 2006-2013 by Tangram Team.   All Rights Reserved.					*
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
* http://www.lyncplus.net
* http://www.tangramdev.com
*
********************************************************************************/
#include "InfoPathPlusEvents.h"

namespace TangramOfficePlus
{
	namespace InfoPathPlus
	{
		namespace InfoPathPlusEvent
		{
			_ATL_FUNC_INFO WindowActivate = { CC_STDCALL,VT_EMPTY,2,VT_I4 | VT_BYREF,VT_I4 | VT_BYREF };
			_ATL_FUNC_INFO WindowDeactivate = { CC_STDCALL,VT_EMPTY,2,VT_I4 | VT_BYREF,VT_I4 | VT_BYREF };
			_ATL_FUNC_INFO WindowSize = { CC_STDCALL,VT_EMPTY,2,VT_I4 | VT_BYREF,VT_I4 | VT_BYREF };
			_ATL_FUNC_INFO XDocumentBeforeClose = { CC_STDCALL,VT_EMPTY,2,VT_I4 | VT_BYREF,VT_BOOL | VT_BYREF };
			_ATL_FUNC_INFO XDocumentBeforePrint = { CC_STDCALL,VT_EMPTY,2,VT_I4 | VT_BYREF,VT_BOOL | VT_BYREF };
			_ATL_FUNC_INFO XDocumentBeforeSave = { CC_STDCALL,VT_EMPTY,2,VT_I4 | VT_BYREF,VT_BOOL | VT_BYREF };
			_ATL_FUNC_INFO NewXDocument = { CC_STDCALL,VT_EMPTY,1,VT_I4 | VT_BYREF };
			_ATL_FUNC_INFO XDocumentOpen = { CC_STDCALL,VT_EMPTY,1,VT_I4 | VT_BYREF };
			_ATL_FUNC_INFO Quit = { CC_STDCALL,VT_EMPTY,0,NULL };
			_ATL_FUNC_INFO XDocumentChange = { CC_STDCALL,VT_EMPTY,0,NULL };
		}
	}
}
