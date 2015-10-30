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

// dllmain.h: 模块类的声明。
#include "TangramCLRProxy_i.h"
class CTangramProxy;
class CTangramCLRProxyModule : public ATL::CAtlDllModuleT< CTangramCLRProxyModule >
{
public :
	CTangramCLRProxyModule();
	~CTangramCLRProxyModule();
	CTangramProxy* m_pTangramProxy;
	DECLARE_LIBID(LIBID_TangramCLRProxyLib)
};

extern class CTangramCLRProxyModule _AtlModule;
