// This MFC Samples source code demonstrates using MFC Microsoft Office Fluent User Interface 
// (the "Fluent UI") and is provided only as referential material to supplement the 
// Microsoft Foundation Classes Reference and related electronic documentation 
// included with the MFC C++ library software.  
// License terms to copy, use or distribute the Fluent UI are available separately.  
// To learn more about our Fluent UI licensing program, please visit 
// http://go.microsoft.com/fwlink/?LinkId=238214.
//
// Copyright (C) Microsoft Corporation
// All rights reserved.

// TangramApp.h : main header file for the TangramApp application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols
#include "TangramApp_i.h"
#include "TangrmAppObject.h"

// CTangramApp:
// See TangramApp.cpp for the implementation of this class
//
//class CTangramAppObject;
class CTangramApp : public CWinAppEx,
	public ATL::CAtlMfcModule
{
public:
	CTangramApp();

	ITangram* m_pTangram;
	CComPtr<ITangramCore> m_pTangramCore;
	CTangrmAppObject* m_pTangramApplication;
	// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	DECLARE_LIBID(LIBID_TangramAppLib);
	// Implementation
	UINT  m_nAppLook;
	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CTangramApp theApp;
