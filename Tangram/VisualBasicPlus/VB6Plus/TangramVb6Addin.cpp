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
/*
Private Sub MDIForm_Load()
Set TangramCore = CreateObject("tangram.tangram")
Dim tangram As Object
Set tangram = TangramCore.CreateTangram(Me.hWnd)
Dim frameX As Object
Set frameX = tangram.CreateFrame(0, 0, "test")
frameX.Extend "", "d:\AppDoc1.APPXml"
End Sub
*/
#include "../../stdafx.h"
#include "TangramVB6Addin.h"
#ifndef _WIN64
namespace TangramVisualBasicPlus
{
	namespace VB6Plus
	{
		CTangramVBIDEWnd::CTangramVBIDEWnd()
		{
			m_hClientWnd = NULL;
			m_pTangram = NULL;
			m_pFrame = NULL;
		}

		CTangramVBIDEWnd::~CTangramVBIDEWnd()
		{

		}

		void CTangramVBIDEWnd::OnFinalMessage(HWND hWnd)
		{
			CWindowImpl::OnFinalMessage(hWnd);
			delete this;
		}

		CTangramVB6Addin::CTangramVB6Addin()
		{
			CString strVer = theApp.GetFileVer();
			int nPos = strVer.Find(_T("."));
			strVer = strVer.Left(nPos);
			int nVer = _wtoi(strVer);
			CComVariant m_v;
			m_v.vt = VT_I4;
			m_v.lVal = (LONGLONG)(CTangramAddinApp*)this;
			theApp.m_pHostCore->put_TangramVal(CComBSTR(L"TangramAddinApp"), m_v);
		}

		CTangramVB6Addin::~CTangramVB6Addin()
		{
			if (m_pVBE)
				m_pVBE.Detach();
		}

		HRESULT CTangramVB6Addin::Tangram_Command(IDispatch* RibbonControl)
		{
			return S_OK;
		}

		HRESULT CTangramVB6Addin::OnConnection(IDispatch* pHostApp, int ConnectMode)
		{
			if (m_strTemplateXml == _T(""))
			{
				CTangramXmlParse m_Parse;
				if (m_Parse.LoadXml(m_strConfigFile))
				{
					m_strDefaultTemplateXml = m_Parse[_T("DefaultTemplate")][_T("Tangrams")][_T("DocumentUI")].xml();
				}
			}
			pHostApp->QueryInterface(__uuidof(IDispatch), (LPVOID*)&m_pVBE);
			if (m_pVBE)
			{
				BSTR bstrCap = L"";
				CComPtr<VBIDE::Window> pMainWnd;
				m_pVBE->get_MainWindow(&pMainWnd);
				if (pMainWnd)
				{
					pMainWnd->get_Caption(&bstrCap);
					::SysFreeString(bstrCap);
					HWND hMainWnd = ::FindWindowEx(NULL, NULL, _T("wndclass_desked_gsk"), NULL);
					CTangramVBIDEWnd* pMainWindow = new CTangramVBIDEWnd();
					pMainWindow->SubclassWindow(hMainWnd);
					pMainWindow->m_hClientWnd = ::FindWindowEx(hMainWnd, NULL, _T("MDIClient"), NULL);
					theApp.m_pTangramCore->CreateTangram((LONGLONG)pMainWindow->m_hWnd, &pMainWindow->m_pTangram);
					if (pMainWindow->m_pTangram)
					{
						pMainWindow->m_pTangram->put_External(m_pVBE.p);
						pMainWindow->m_pTangram->CreateFrame(CComVariant(0), CComVariant((LONGLONG)pMainWindow->m_hClientWnd), CComBSTR(L"VBE"), &pMainWindow->m_pFrame);
						if (pMainWindow->m_pFrame)
						{
							CComPtr<ITangramNode> pNode;
							pMainWindow->m_pFrame->Extend(CComBSTR(L""), m_strDefaultTemplateXml.AllocSysString(), &pNode);
						}
					}
				}
			}
			return S_OK;
		}

		HRESULT CTangramVB6Addin::OnDisconnection(int DisConnectMode)
		{
			m_pVBE.p->Release();
			m_pVBE.Detach();
			return S_OK;
		}

		HRESULT CTangramVB6Addin::GetCustomAddinUI(BSTR RibbonID, BSTR* RibbonXml)
		{
			if (!RibbonXml)
				return E_POINTER;
			*RibbonXml = m_strRibbonXml.AllocSysString();
			return (*RibbonXml ? S_OK : E_OUTOFMEMORY);
		}

		void CTangramVB6Addin::WindowCreated(LPCTSTR lpszClass, LPCTSTR strName, HWND hPWnd, HWND hWnd)
		{
			CString strClassName = lpszClass;
			if (strClassName == _T("wndclass_desked_gsk"))//ThunderRT6MDIForm,ThunderMDIForm
			{
				int i = 0;
			}
		}
	}
}// namespace TangramVisualBasicPlus
#endif



