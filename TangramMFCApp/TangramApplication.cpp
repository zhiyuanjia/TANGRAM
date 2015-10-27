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

// TangramApplication.cpp : CTangramApplication µÄÊµÏÖ

#include "stdafx.h"
#include "TangramApplication.h"
#include "TangramMFCApp.h"
#include "MainFrm.h"
#include "TangramMFCView.h"

// CTangramApplication

CTangramApplication::CTangramApplication()
{
	m_pFrame = NULL;
}

CTangramApplication::~CTangramApplication()
{
}

ULONG CTangramApplication::InternalRelease()
{
	if (theApp.m_pMainWnd ==NULL||::IsWindow(theApp.m_pMainWnd->m_hWnd) == FALSE)
		return 0;
	return 1;
}

HRESULT WINAPI CTangramApplication::UpdateRegistry(BOOL bRegister)
{
	return theApp.UpdateRegistryFromResource(IDR_TANGRAMAPPLICATION, bRegister);
}

HRESULT WINAPI CTangramApplication::CreateInstance(void* pv, REFIID riid, LPVOID* ppv)
{
	if(theApp.m_pTangramApplication==NULL)
		theApp.m_pTangramApplication = new CComObject<CTangramApplication>;
	*ppv = theApp.m_pTangramApplication;
	return S_OK;
}

STDMETHODIMP CTangramApplication::ExtendXml(BSTR bstrXml, BSTR bstrKey, IDispatch** ppNode)
{
	AFX_MANAGE_STATE(AfxGetAppModuleState());
	CMainFrame* pMainWnd = (CMainFrame*)theApp.m_pMainWnd;
	if (theApp.m_pTangram == NULL)
	{
		theApp.m_pTangramCore->CreateTangram((LONGLONG)pMainWnd->m_hWnd, &theApp.m_pTangram);
	}
	if (theApp.m_pTangram)
	{
		if (m_pFrame==NULL&&pMainWnd->m_pTangramMFCView&&::IsWindow(pMainWnd->m_pTangramMFCView->m_hWnd))
		{
			theApp.m_pTangram->CreateFrame(CComVariant(0), CComVariant((LONGLONG)::GetWindow(pMainWnd->m_pTangramMFCView->m_hWnd,GW_CHILD)), CComBSTR(L"tangram"), &m_pFrame);
		}
		if (m_pFrame)
		{
			CString strXml = OLE2T(bstrXml);
			strXml.Trim();
			map<CString, CString>::iterator it = theApp.m_strMapKey.find(strXml);
			if (it == theApp.m_strMapKey.end())
			{
				theApp.m_strMapKey[strXml] = OLE2T(bstrKey);
				m_pFrame->Extend(bstrKey, bstrXml, (ITangramNode**)ppNode);
			}
			else
				m_pFrame->Extend(CComBSTR(it->second), bstrXml, (ITangramNode**)ppNode);
		}
	}
	pMainWnd->BringWindowToTop();
	pMainWnd->SetFocus();
	return S_OK;
}

STDMETHODIMP CTangramApplication::get_HWND(ULONGLONG* pVal)
{
	AFX_MANAGE_STATE(AfxGetAppModuleState());
	*pVal = (LONGLONG)theApp.m_pMainWnd->m_hWnd;
	return S_OK;
}


STDMETHODIMP CTangramApplication::get_TangramCore(IDispatch** pVal)
{
	AFX_MANAGE_STATE(AfxGetAppModuleState());

	*pVal = theApp.m_pTangramCore;

	return S_OK;
}
