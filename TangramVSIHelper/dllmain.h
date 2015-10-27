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

// dllmain.h: Ä£¿éÀàimplementation file¡£
#include "Tangram.h"
#include "TangramVSIHelper_i.h"
class CTangramApp : public ATL::CAtlDllModuleT< CTangramApp >
{
public :
	map<CString, CString> m_strMapKey;
	map<CString, IDispatch*> m_mapAppDispDic;
	ITangramCore* m_pTangramCore;
	DECLARE_LIBID(LIBID_TangramVSIHelperLib)
};

extern class CTangramApp theApp;
