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

// TangramSettings.cpp : CTangramSettingsDlg 的实现

#include "stdafx.h"
#include "Package.h"
#include "TangramVSIapp.h"
#include "TangramSettingsDlg.h"


// CTangramSettingsDlg
LRESULT CTangramSettingsDlg::OnInitDialog(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
{
	CAxDialogImpl<CTangramSettingsDlg>::OnInitDialog(uMsg, wParam, lParam, bHandled);
	if (theApp.IsUserAdministrator())
	{

	}
	else
	{
		theApp.m_pTangramPackage->ShowMsg(_T("Please restart Visual Studio with Administrator AUTHORITY!"));
	}
	bHandled = TRUE;
	return 1;  // 使系统设置焦点
}

LRESULT CTangramSettingsDlg::OnClickedOK(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled)
{
	EndDialog(wID);
	return 0;
}

LRESULT CTangramSettingsDlg::OnClickedCancel(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled)
{
	EndDialog(wID);
	return 0;
}
