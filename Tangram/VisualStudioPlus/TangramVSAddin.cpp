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

#include "../stdafx.h"
#include "TangramVSAddin.h"
//#include "../Tangram/VisualStudioPlus/ObjModel/ADDAUTO.H"

namespace TangramVisualStudioPlus
{
	namespace VisualStudioPlus
	{
		CTangramVSAddin::CTangramVSAddin()
		{
			m_pOutputWindowPane = NULL;
		}

		CTangramVSAddin::~CTangramVSAddin()
		{
		}

		IDispatch* CTangramVSAddin::GetOutputPane()
		{
			IDispatch* pRetDisp = NULL;
			CComBSTR bstrDTE(L"DTE");
			CComPtr<IDispatch> pDisp;
			if (theApp.m_pTangramCore)
			{
				theApp.m_pTangramCore->get_TangramExtender(bstrDTE, &pDisp);
				if (pDisp)
				{
					//pDisp.p->Release();
					CComQIPtr<DTE2> pDTE2(pDisp);
					CComPtr<VxDTE::Window> pWnd;
					pDTE2->get_MainWindow(&pWnd);
					long h = 0;
					if (pWnd)
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
							pRetDisp = pPane.p;
							pRetDisp->AddRef();
							m_pOutputWindowPane = pPane.Detach();
							//m_pOutputWindowPane->AddRef();
						}
					}
				}
			}

			return S_OK;
		}

		void CTangramVSAddin::PutTextToOutputPane(BSTR bstrMsg)
		{
			if (m_pOutputWindowPane)
			{
				m_pOutputWindowPane->OutputString(bstrMsg);
			}
		}

		void CTangramVSAddin::ClearOutputPane()
		{
			if (m_pOutputWindowPane)
			{
				m_pOutputWindowPane->Clear();
			}
		}

		HWND CTangramVSAddin::GetHWnd()
		{
			CComBSTR bstrDTE(L"DTE");
			CComPtr<IDispatch> pDisp;
			if (theApp.m_pTangramCore)
			{
				theApp.m_pTangramCore->get_TangramExtender(bstrDTE, &pDisp);
				if (pDisp)
				{
					CComQIPtr<DTE2> pDTE2(pDisp);
					CComPtr<VxDTE::Window> pWnd;
					pDTE2->get_MainWindow(&pWnd);
					if (pWnd)
					{
						long h = 0;
						pWnd->get_HWnd(&h);
						return (HWND)h;
					}
				}
			}

			return NULL;
		}

		CTangramVSIDEWnd::CTangramVSIDEWnd()
		{
			m_hClientWnd = NULL;
			m_pTangram = NULL;
			m_pFrame = NULL;
		}

		CTangramVSIDEWnd::~CTangramVSIDEWnd()
		{

		}

		void CTangramVSIDEWnd::OnFinalMessage(HWND hWnd)
		{
			CWindowImpl::OnFinalMessage(hWnd);
			delete this;
		}

		CTangramDSAddin::CTangramDSAddin()
		{
			m_dwCookie = 0;
		}

		CTangramDSAddin::~CTangramDSAddin()
		{
		}

		// This is called when the user first loads the add-in, and on start-up
		//  of each subsequent Developer Studio session
		STDMETHODIMP CTangramDSAddin::OnConnection(IApplication* pApp, VARIANT_BOOL bFirstTime,
			long dwCookie, VARIANT_BOOL* OnConnection)
		{
			m_strVSIDEXml = _T("VSIde.xml");
			//// Store info passed to us
			m_pVSApp.Attach(pApp);
			m_dwCookie = dwCookie;

			HWND hWnd = ::GetActiveWindow();
			HWND hDesktopWnd = ::GetDesktopWindow();
			HWND hDevStudioWnd = NULL;
			while (hWnd  &&  hWnd != hDesktopWnd)
			{
				hDevStudioWnd = hWnd;
				hWnd = ::GetParent(hWnd);
				TRACE(_T("%x\n"), hWnd);
			}
			CTangramVSIDEWnd* pMainWnd = new CTangramVSIDEWnd();
			pMainWnd->SubclassWindow(hDevStudioWnd);
			pMainWnd->m_hClientWnd = ::FindWindowEx(pMainWnd->m_hWnd, NULL, _T("MDIClient"), NULL);
			theApp.m_pTangramCore->CreateTangram((LONGLONG)pMainWnd->m_hWnd, &pMainWnd->m_pTangram);
			if (pMainWnd->m_pTangram)
			{
				pMainWnd->m_pTangram->put_External(m_pVSApp.p);
				pMainWnd->m_pTangram->CreateFrame(CComVariant(0), CComVariant((LONGLONG)pMainWnd->m_hClientWnd), CComBSTR(L"VSIDE"), &pMainWnd->m_pFrame);
				if (pMainWnd->m_pFrame)
				{
					CComPtr<ITangramNode> pNode;
					pMainWnd->m_pFrame->Extend(CComBSTR(L""), m_strVSIDEXml.AllocSysString(), &pNode);
				}
			}

			*OnConnection = VARIANT_TRUE;
			return S_OK;
		}

		// This is called on shut-down, and also when the user unloads the add-in
		STDMETHODIMP CTangramDSAddin::OnDisconnection(VARIANT_BOOL bLastTime)
		{
			if (m_pVSApp)
			{
				m_pVSApp.p->Release();
				m_pVSApp.Detach();
			}
			return S_OK;
		}

		CTangramVisualStudioAddin::CTangramVisualStudioAddin()
		{
			m_pMainWnd = NULL;
			CString strVer = theApp.GetFileVer();
			int nPos = strVer.Find(_T("."));
			strVer = strVer.Left(nPos);
			int nVer = _wtoi(strVer);
			CComVariant m_v;
			m_v.vt = VT_I4;
			m_v.lVal = (LONGLONG)(CTangramOfficePlusApp*)this;
			theApp.m_pHostCore->put_TangramVal(CComBSTR(L"OfficePlusApp"), m_v);
		}

		CTangramVisualStudioAddin::~CTangramVisualStudioAddin()
		{
			if (m_pDTE)
			{
				m_pDTE.p->Release();
				m_pDTE.Detach();
			}
		}

		HRESULT CTangramVisualStudioAddin::Tangram_Command(IDispatch* RibbonControl)
		{
			return S_OK;
		}

		HRESULT CTangramVisualStudioAddin::OnConnection(IDispatch* pHostApp, int ConnectMode)
		{
			if (m_strTemplateXml == _T(""))
			{
				CTangramXmlParse m_Parse;
				if (m_Parse.LoadXml(m_strConfigFile))
				{
					m_strDefaultTemplateXml = m_Parse[_T("DefaultTemplate")][_T("Tangrams")][_T("DocumentUI")].xml();
				}
			}
			pHostApp->QueryInterface(__uuidof(IDispatch), (LPVOID*)&m_pDTE);
			if (m_pDTE)
			{
				long h = 0;
				CComPtr<VxDTE::Window> pMainWnd;
				m_pDTE->get_MainWindow(&pMainWnd);
				if (pMainWnd)
				{
					pMainWnd->get_HWnd(&h);
					HWND hwnd = (HWND)h;
					//HWND hMainWnd = ::FindWindowEx(NULL, NULL, _T("wndclass_desked_gsk"), NULL);
					if(m_pMainWnd==NULL)
					{
						m_pMainWnd = new CTangramVSIDEWnd();
						m_pMainWnd->SubclassWindow(hwnd);
						m_pMainWnd->m_hClientWnd = ::FindWindowEx(hwnd, NULL, _T("MDIClient"), NULL);
						theApp.m_pTangramCore->CreateTangram((LONGLONG)h, &m_pMainWnd->m_pTangram);
						if (m_pMainWnd->m_pTangram)
						{
							m_pMainWnd->m_pTangram->put_External(m_pDTE.p);
							m_pMainWnd->m_pTangram->CreateFrame(CComVariant(0), CComVariant((LONGLONG)m_pMainWnd->m_hClientWnd), CComBSTR(L"VSIDE"), &m_pMainWnd->m_pFrame);
							if (m_pMainWnd->m_pFrame)
							{
								CComPtr<ITangramNode> pNode;
								m_pMainWnd->m_pFrame->Extend(CComBSTR(L""), m_strDefaultTemplateXml.AllocSysString(), &pNode);
							}
						}
					}
				}
			}
			return S_OK;
		}

		HRESULT CTangramVisualStudioAddin::OnDisconnection(int DisConnectMode)
		{
			m_pDTE.p->Release();
			m_pDTE.Detach();
			return S_OK;
		}

		HRESULT CTangramVisualStudioAddin::GetCustomAddinUI(BSTR RibbonID, BSTR* RibbonXml)
		{
			if (!RibbonXml)
				return E_POINTER;
			*RibbonXml = m_strRibbonXml.AllocSysString();
			return (*RibbonXml ? S_OK : E_OUTOFMEMORY);
		}

		void CTangramVisualStudioAddin::WindowCreated(LPCTSTR lpszClass, LPCTSTR strName, HWND hPWnd, HWND hWnd)
		{
			//CString strClassName = lpszClass;
			//if (strClassName == _T("wndclass_desked_gsk"))//ThunderRT6MDIForm,ThunderMDIForm
			//{
			//	int i = 0;
			//}
		}
	}
}

