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

#include "stdafx.h"
#include "TangramVSIApp.h"
#include "CommonIncludes.h"

#pragma comment(lib,"Version.lib")
#pragma comment(lib,"Wininet.lib")
#pragma comment(lib,"Winmm.lib")

CTangramPackage::CTangramPackage() :
	m_dwEditorCookie(0),
	m_ToolWindow(GetVsSiteCache())
{
	theApp.m_pTangramPackage = this;
}

CTangramPackage::~CTangramPackage()
{
}

// This method will be called after IVsPackage::SetSite is called with a valid site
void CTangramPackage::PostSited(IVsPackageEnums::SetSiteResult /*result*/)
{
	if (m_dwEditorCookie == 0)
	{
		CComObject<CTangramEditorFactory> *pFactory = new CComObject<CTangramEditorFactory>;
		if (NULL == pFactory)
		{
			ERRHR(E_OUTOFMEMORY);
		}
		CComPtr<IVsEditorFactory> spIVsEditorFactory = static_cast<IVsEditorFactory*>(pFactory);

		// Register the editor factory
		CComPtr<IVsRegisterEditors> spIVsRegisterEditors;
		CHKHR(GetVsSiteCache().QueryService(SID_SVsRegisterEditors, &spIVsRegisterEditors));
		CHKHR(spIVsRegisterEditors->RegisterEditor(CLSID_TangramPackageEditorFactory, spIVsEditorFactory, &m_dwEditorCookie));
		CHKHR(GetVsSiteCache().QueryService(SID_SDTE, &theApp.m_pDTE));
		if (theApp.m_pDTE)
			theApp.InitInstance();
	}
}

void CTangramPackage::PreClosing()
{
	if (m_dwEditorCookie != 0)
	{
		if (theApp.m_pTangramCore)
		{
			theApp.m_pTangramCore.Detach();
			DWORD dw = 0;
			if (theApp.m_pTangramHelper)
				dw = theApp.m_pTangramHelper->Release();
		}
		CComPtr<IVsRegisterEditors> spIVsRegisterEditors;
		CHKHR(GetVsSiteCache().QueryService(SID_SVsRegisterEditors, &spIVsRegisterEditors));
		CHKHR(spIVsRegisterEditors->UnregisterEditor(m_dwEditorCookie));
	}
}
