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

// dllmain.cpp : Implementation of DllMain.

#include "stdafx.h"
#include "resource.h"
#include "dllmain.h"
#include "TangramCoreEvents.cpp"

CTangramCLRApp theApp;
CTangramCLRApp::CTangramCLRApp()
{
	ATLTRACE(_T("Loading CTangramCLRApp :%p\n"), this);
	m_pTangramCoreCLREvent = NULL;
}

CTangramCLRApp::~CTangramCLRApp()
{
	m_pTangramCoreCLREvent = NULL;
	ATLTRACE(_T("Release CTangramCLRApp :%p\n"), this);
}

CTangramNodeEvent::CTangramNodeEvent()
{
	m_pTangramNodeCLREvent = NULL;
	m_pTangramNode = NULL;
}

CTangramNodeEvent::~CTangramNodeEvent()
{

}
