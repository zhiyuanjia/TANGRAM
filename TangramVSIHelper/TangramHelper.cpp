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
// TangramHelper.cpp : CTangramHelper µÄÊµÏÖ

#include "stdafx.h"
#include "dllmain.h"
#include "TangramHelper.h"
#include "TangramForm.h"
#include "TangramMdiForm.h"

using namespace System;
using namespace System::Windows;
using namespace System::Reflection;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::IO;

using System::Runtime::InteropServices::Marshal;


// CTangramHelper

CTangramHelper::CTangramHelper()
{
	m_nIndex = 0;
	m_pHelperWnd = NULL;
	m_pOutputWindowPane = NULL;
	if (theApp.m_pTangramCore == NULL)
	{
		CComPtr<ITangramCore> pTangramCore;
		pTangramCore.CoCreateInstance(CComBSTR(L"Tangram.Tangram.1"));
		if(pTangramCore)
			theApp.m_pTangramCore = pTangramCore.Detach();
	}
}

STDMETHODIMP CTangramHelper::get_OutputPane(IDispatch** pVal)
{
	CComBSTR bstrDTE(L"DTE");
	CComPtr<IDispatch> pDisp;
	if (theApp.m_pTangramCore)
	{
		theApp.m_pTangramCore->get_TangramExtender(bstrDTE,&pDisp);
		if (pDisp)
		{
			//pDisp.p->Release();
			CComQIPtr<DTE2> pDTE2(pDisp);
			CComPtr<Window> pWnd;
			pDTE2->get_MainWindow(&pWnd);
			long h = 0;
			if(pWnd)
				pWnd->get_HWnd(&h);
			CComPtr<ToolWindows> pToolWindows;
			pDTE2->get_ToolWindows(&pToolWindows);
			if (pToolWindows)
			{
				CComPtr<VxDTE::OutputWindow> pOutWnd;
				pToolWindows->get_OutputWindow(&pOutWnd);
				if (pOutWnd)
				{
					CComPtr<OutputWindowPane> pPane;
					CComPtr<OutputWindowPanes> pPanes;
					pOutWnd->get_OutputWindowPanes(&pPanes);
					pPanes->Add(CComBSTR(L"Tangram"), &pPane);
					pPane->OutputString(CComBSTR(L"Welcome to Tangram!\r\n"));
					*pVal = pPane.p;
					(*pVal)->AddRef();
					m_pOutputWindowPane = pPane.Detach();
					//m_pOutputWindowPane->AddRef();
				}
			}
		}
	}

	return S_OK;
}


STDMETHODIMP CTangramHelper::PutTextToOutputPane(BSTR bstrMsg)
{
	if (m_pOutputWindowPane)
	{
		m_pOutputWindowPane->OutputString(bstrMsg);
	}

	return S_OK;
}


STDMETHODIMP CTangramHelper::ClearOutputPane()
{
	if (m_pOutputWindowPane)
	{
		m_pOutputWindowPane->Clear();
	}

	return S_OK;
}

STDMETHODIMP CTangramHelper::ShowXMLWithWindow(BSTR bstrID, BSTR bstrKey, BSTR bstrXml)
{
	CString strID = OLE2T(bstrID);
	strID.Trim();
	if (strID == _T(""))
		strID = _T("TangramMFCApp.Application.1");
	strID.MakeLower();
	CString _strKey = OLE2T(bstrKey);
	_strKey.Trim();
	_strKey.MakeLower();
	IDispatch* pDisp = NULL;
	std::map<CString, IDispatch*>::iterator it1 = theApp.m_mapAppDispDic.find(strID);
	if (it1 == theApp.m_mapAppDispDic.end())
	{
		CComPtr<IDispatch> pdisp;
		HRESULT hr = pdisp.CoCreateInstance(CComBSTR(strID));
		DWORD dw = ::GetLastError();
		if (pdisp)
		{
			pDisp = pdisp.Detach();
			theApp.m_mapAppDispDic[strID] = pDisp;
			CComQIPtr<ITangramVSHelper> pApp(pDisp);
			if (pApp)
			{
				ULONGLONG h = 0;
				pApp->get_HWND(&h);
				HWND hWnd = (HWND)h;
				if (::IsWindow(hWnd))
				{
					m_pHelperWnd = new CHelperWnd();
					m_pHelperWnd->m_strText = strID;
					m_pHelperWnd->m_pTangramHelper = this;
					m_pHelperWnd->Create(hWnd, NULL, strID, WS_CHILD);
				}
			}
		}
	}
	else
		pDisp = it1->second;

	CString strXml = OLE2T(bstrXml);
	map<CString, CString>::iterator it = theApp.m_strMapKey.find(strXml+_strKey);
	CString strKey = _T("");

	if (it == theApp.m_strMapKey.end())
	{
		m_nIndex++;
		strKey.Format(_T("tangram%p%s%s%d"), this, strID, _strKey, m_nIndex);
		theApp.m_strMapKey[strXml] = strKey;
	}
	else
		strKey = it->second;
	CComQIPtr<ITangramVSHelper> pApp(pDisp);
	if (pApp)
	{
		CComPtr<IDispatch> pNode;
		pApp->ExtendXml(bstrXml, CComBSTR(strKey), &pNode);
		CComQIPtr<ITangramNode>_pNode(pNode);
		if (_pNode)
		{
			HWND hWnd = ::GetParent(m_pHelperWnd->m_hWnd);
			if (::IsWindow(hWnd))
			{
				::BringWindowToTop(hWnd);
			}
		}
	}
	return S_OK;
}

STDMETHODIMP CTangramHelper::ShowCLRForm(BSTR bstrXml)
{
	TangramVSIHelper::TangramForm^ pForm = gcnew TangramVSIHelper::TangramForm();
	System::String^ strXml = BSTR2STRING(bstrXml);
	pForm->m_strTangramXML = strXml;
	pForm->ShowTangram();
	return S_OK;
}

STDMETHODIMP CTangramHelper::ShowCLRMDIForm(BSTR bstrXml)
{
	TangramVSIHelper::TangramMDIForm^ pForm = gcnew TangramVSIHelper::TangramMDIForm();
	System::String^ strXml = BSTR2STRING(bstrXml);
	pForm->m_strTangramXML = strXml;
	pForm->ShowTangram();
	return S_OK;
}

CHelperWnd::CHelperWnd() 
{
	m_pTangramHelper = NULL;
}

CHelperWnd::~CHelperWnd()
{
};

void CHelperWnd::OnFinalMessage(HWND hWnd)
{
	map<CString, IDispatch*>::iterator it = theApp.m_mapAppDispDic.find(m_strText);
	theApp.m_mapAppDispDic.erase(it);
	theApp.m_strMapKey.erase(theApp.m_strMapKey.begin(), theApp.m_strMapKey.end());
	CWindowImpl::OnFinalMessage(hWnd);
	delete this;
}

