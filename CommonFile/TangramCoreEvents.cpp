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
#include "TangramCoreEvents.h"


_ATL_FUNC_INFO ExtendComplete = {CC_STDCALL,VT_EMPTY,3,VT_I4,VT_BSTR,VT_I4|VT_BYREF};
_ATL_FUNC_INFO TangramNotify = {CC_STDCALL,VT_EMPTY,1,VT_BSTR};
_ATL_FUNC_INFO Initialize= { CC_STDCALL, VT_EMPTY, 2, VT_DISPATCH, VT_BSTR};
_ATL_FUNC_INFO Destroy = { CC_STDCALL, VT_EMPTY, 0, NULL };
_ATL_FUNC_INFO Close = { CC_STDCALL, VT_EMPTY, 0, NULL };
_ATL_FUNC_INFO NodeExtendComplete = { CC_STDCALL, VT_EMPTY, 0, NULL };
_ATL_FUNC_INFO NodeAddInCreated = {CC_STDCALL,VT_EMPTY,3,VT_DISPATCH,VT_BSTR,VT_BSTR};
_ATL_FUNC_INFO NodeAddInsCreated = {CC_STDCALL,VT_EMPTY,0,NULL};
