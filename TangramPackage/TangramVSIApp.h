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
#pragma once
#include "dte.h"
#include "dte80.h"

#include "TangramVSIHelper_i.h"
class CTangramPackage;

class CTangramApp :
	public CAtlDllModuleT<CTangramApp>
{
public:
	BOOL m_bSystem64;
	HWND m_hVSToolWnd;
	CString m_strPath;
	CString m_strExeName;
	CString m_strVersion;
	CString m_strModulePath;
	CString m_strAppDataPath;
	CString m_strProgramFilePath;
	CString m_strWindowSystemPath;

	IDispatch* m_pDTE;
	ITangramHelper* m_pTangramHelper;
	CTangramPackage* m_pTangramPackage;
	CComPtr<ITangramCore> m_pTangramCore;

	BOOL InitInstance();
	bool CheckUrl(CString&   url);
	BOOL IsUserAdministrator();
	DWORD ExecCmd(const CString cmd, const BOOL setCurrentDirectory);
};

extern CTangramApp theApp;
