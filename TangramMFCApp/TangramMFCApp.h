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

// TangramMFCApp.h : main header file for the TangramMFCApp application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols
#include "TangramMFCApp_i.h"


// CTangramMFCApp:
// See TangramMFCApp.cpp for the implementation of this class
//
class CTangramApplication;
class CTangramMFCApp : public CWinAppEx,
	public ATL::CAtlMfcModule
{
public:
	CTangramMFCApp();
	DECLARE_LIBID(LIBID_TangramMFCAppLib);

// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	ITangram* m_pTangram;
	CComPtr<ITangramCore> m_pTangramCore;
	CTangramApplication* m_pTangramApplication;
	map<CString, CString> m_strMapKey;
	// Implementation
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CTangramMFCApp theApp;
