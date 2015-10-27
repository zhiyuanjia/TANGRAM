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

#include "../../stdafx.h"
#include "../../TangramApp.h"
#include "TangramAccessAddin.h"
//#include "AccessEvents.cpp"

namespace TangramOfficePlus
{
	namespace AccessPlus
	{
		CTangramAccessMDIClientWnd::CTangramAccessMDIClientWnd(void)
		{
		}

		CTangramAccessMDIClientWnd::~CTangramAccessMDIClientWnd(void)
		{
		}

		void CTangramAccessMDIClientWnd::OnFinalMessage(HWND hWnd)
		{
			// TODO: 在此添加专用代码和/或调用基类
			CWindowImpl::OnFinalMessage(hWnd);
		}

		CTangramAccessMainWnd::CTangramAccessMainWnd(void)
		{
		}

		CTangramAccessMainWnd::~CTangramAccessMainWnd(void) 
		{
		};

		void CTangramAccessMainWnd::OnFinalMessage(HWND hWnd)
		{
			CWindowImpl::OnFinalMessage(hWnd);
			delete this;
		}

		STDMETHODIMP CTangramAccessMainWnd::GetTangramAccessFormHelper(LONG hWnd, ITangramAccessFormHelper** ppFormHelper)
		{
			CTangramAccessAddin* pAddin = ((CTangramAccessAddin*)theApp.m_pHostCore);
			HWND h = (HWND)hWnd;
			map<HWND, CTangramAccessFormWnd*>::iterator it = pAddin->m_mapForms.find(h);
			if (it != pAddin->m_mapForms.end())
			{
				*ppFormHelper = it->second;
			}
			return S_OK;
		}

		LRESULT CTangramAccessMainWnd::OnWndCreated(UINT /*uMsg*/, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled*/)
		{
			if (wParam)
			{
				HWND hWnd = (HWND) wParam;
				((CTangramAccessAddin*)theApp.m_pHostCore)->GetAccessForm(hWnd);
			}
			return 0;
		}

		CTangramAccessAddin::CTangramAccessAddin()
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

		CTangramAccessAddin::~CTangramAccessAddin()
		{
		}

		HRESULT CTangramAccessAddin::Tangram_Command(IDispatch* RibbonControl)
		{
			return S_OK;
		}

		HRESULT CTangramAccessAddin::OnConnection(IDispatch* pHostApp, int ConnectMode)
		{
			if (m_strTemplateXml == _T(""))
			{
				CTangramXmlParse m_Parse;
				if (m_Parse.LoadXml(m_strConfigFile))
				{
					m_strTemplateSubmitXml = m_Parse[_T("SummitTemplate")].xml();
					m_strRibbonXml = m_Parse[_T("RibbonUI")][_T("customUI")].xml();
					m_strDefaultTemplateXml = m_Parse[_T("DefaultTemplate")][_T("Tangrams")].xml();
				}
			}
			pHostApp->QueryInterface(__uuidof(IDispatch), (LPVOID*)&m_pApplication);
			int nHandle = 0;
			m_pApplication->hWndAccessApp(&nHandle);
			HWND h = (HWND)nHandle;
			m_pMainWnd = new CComObject<CTangramAccessMainWnd>;
			m_pMainWnd->SubclassWindow(h);
			theApp.m_bEnableProcessFormTabKey = TRUE;
			theApp.m_pHostCore->put_TangramExtender(CComBSTR(L"TangramAccessApp"), (IDispatch*)m_pMainWnd);
			return S_OK;
		}

		HRESULT CTangramAccessAddin::OnDisconnection(int DisConnectMode)
		{
			theApp.m_pHostCore->put_TangramExtender(CComBSTR(L"TangramAccessApp"), NULL);
			if (m_mapForms.size())
			{
				map<HWND, CTangramAccessFormWnd*>::iterator it = m_mapForms.begin();
				for (it = m_mapForms.begin(); it != m_mapForms.end(); it++)
				{
					CTangramAccessFormWnd* pWnd = it->second;
					if (!::IsWindow(pWnd->m_hWnd))
					{
						pWnd->m_hWnd=NULL;
						delete pWnd;
					}
				}
			}
			m_mapForms.erase(m_mapForms.begin(), m_mapForms.end());
			m_pApplication.Detach();
			return S_OK;
		}

		HRESULT CTangramAccessAddin::GetCustomAddinUI(BSTR RibbonID, BSTR* RibbonXml)
		{
			if (!RibbonXml)
				return E_POINTER;
			*RibbonXml = m_strRibbonXml.AllocSysString();
			return (*RibbonXml ? S_OK : E_OUTOFMEMORY);
		}

		void CTangramAccessAddin::WindowCreated(LPCTSTR lpszClass, LPCTSTR strName, HWND hPWnd, HWND hWnd)
		{
			CString strClassName = lpszClass;
			if (strClassName == _T("OForm")|| strClassName == _T("OFormPopup"))
			{
				CTangramAccessFormWnd* pWnd = new CComObject<CTangramAccessFormWnd>;
				pWnd->m_hForm = hWnd;
				m_mapForms[hWnd] = pWnd;
				if(m_pMainWnd)
					::PostMessage(m_pMainWnd->m_hWnd, WM_TANGRAMMSG, (WPARAM)hWnd, 0);
				return;
			}
			//if (strClassName == _T("OFormSub"))
			//{
			//	map<HWND, CTangramAccessFormWnd*>::iterator it = m_mapForms.find(hPWnd);
			//	if (it != m_mapForms.end())
			//	{
			//		it->second->m_nIndex++;
			//		if (it->second->m_nIndex == 2)
			//		{
			//			it->second->m_hSubForm = (HWND)hWnd;
			//			if ((::GetWindowLong(it->second->m_hForm, GWL_EXSTYLE)&WS_EX_MDICHILD))
			//			{
			//				it->second->m_bMDIClient = TRUE;
			//			}

			//		}
			//	}
			//}
		}

		CTangramAccessFormWnd* CTangramAccessAddin::GetAccessForm(HWND hWnd)
		{
			CComPtr<MSAccess::Forms> m_pForms;
			if (m_pApplication)
			{
				m_pApplication->get_Forms(&m_pForms);
				if (m_pForms)
				{
					long nCount = 0;
					m_pForms->get_Count(&nCount);
					if (nCount)
					{
						for (int i = 0; i < nCount;i++)
						{
							CComPtr<MSAccess::_Form3> pForm;
							m_pForms->get_Item(CComVariant(i), &pForm);
							if (pForm)
							{
								long h = 0;
								pForm->get_Hwnd(&h);
								if (h == (long)hWnd)
								{
									map<HWND, CTangramAccessFormWnd*>::iterator it = m_mapForms.find(hWnd);
									if (it != m_mapForms.end())
									{
										it->second->SubclassWindow(hWnd);
									}
									break;
								}
							}
						}
					}
				}
			}
			return NULL;
		}

		CTangramAccessFormWnd::CTangramAccessFormWnd(void)
		{
			//m_nIndex = 0;
			m_bMDIClient = FALSE;
			m_hClient = NULL;
			m_pTangram = NULL;
			m_pFrame = NULL;
		}

		CTangramAccessFormWnd::~CTangramAccessFormWnd(void) 
		{
		}

		void CTangramAccessFormWnd::OnFinalMessage(HWND hWnd)
		{
			if (((CTangramAccessAddin*)theApp.m_pHostCore))
			{
				map<HWND, CTangramAccessFormWnd*>::iterator it = ((CTangramAccessAddin*)theApp.m_pHostCore)->m_mapForms.find(hWnd);
				if (it != ((CTangramAccessAddin*)theApp.m_pHostCore)->m_mapForms.end())
				{
					((CTangramAccessAddin*)theApp.m_pHostCore)->m_mapForms.erase(it);
				}
			}
			CWindowImpl::OnFinalMessage(hWnd);
			delete this;
		}

		STDMETHODIMP CTangramAccessFormWnd::Show(VARIANT_BOOL bShow)
		{
			if (m_pTangram == NULL)
				return S_OK;
			if (bShow)
			{
				HWND h = ::GetParent(m_hForm);
				m_pFrame->ModifyHost((LONGLONG)h);
			}
			else
			{
				m_pFrame->ModifyHost((LONGLONG)m_hChildClient);
			}

			return S_OK;
		}

		STDMETHODIMP CTangramAccessFormWnd::Extend(BSTR bstrKey, BSTR bstrXml, ITangramNode** ppNode)
		{
			CString strKey = OLE2T(bstrKey);
			strKey.Trim();
			if (strKey == _T(""))
				return S_FALSE;

			strKey = OLE2T(bstrXml);
			strKey.Trim();
			if (strKey == _T(""))
				return S_FALSE;

			if (m_pTangram == NULL/*&&m_bMDIClient == FALSE*/)
			{
				m_hClient = ::CreateWindowEx(NULL, L"Tangram Remote Helper Window", _T("Tangram Office Plus Addin Helper Window"), WS_CHILD, 0, 0, 0, 0, (HWND)m_hForm, NULL, theApp.m_hInstance, NULL);
				m_hChildClient = ::CreateWindowEx(NULL, L"Tangram Remote Helper Window", _T("Tangram Excel Helper Window"), WS_CHILD, 0, 0, 0, 0, (HWND)m_hClient, NULL, AfxGetInstanceHandle(), NULL);
				theApp.m_pTangramCore->CreateTangram((LONGLONG)m_hClient, &m_pTangram);
				if (m_pTangram == NULL)
					return S_FALSE;
				if (m_pFrame == NULL)
				{
					m_pTangram->CreateFrame(CComVariant(0), CComVariant((LONGLONG)m_hChildClient), CComBSTR(L"Default"), &m_pFrame);
					if (m_pFrame == NULL)
					{
						delete m_pTangram;
						m_pTangram = NULL;
					}
				}
			}

			HRESULT hr = m_pFrame->Extend(bstrKey, bstrXml, ppNode);
			return hr;
		}

		STDMETHODIMP CTangramAccessFormWnd::UnloadTangram()
		{
			if (m_pTangram)
			{
				m_pFrame->ModifyHost((LONGLONG)m_hChildClient);
				::DestroyWindow(m_hClient);
				m_hClient = ::CreateWindowEx(NULL, L"Tangram Remote Helper Window", _T("Tangram Office Plus Addin Helper Window"), WS_CHILD, 0, 0, 0, 0, (HWND)m_hForm, NULL, theApp.m_hInstance, NULL);
				m_hChildClient = ::CreateWindowEx(NULL, L"Tangram Remote Helper Window", _T("Tangram Excel Helper Window"), WS_CHILD, 0, 0, 0, 0, (HWND)m_hClient, NULL, AfxGetInstanceHandle(), NULL);
				m_pFrame = NULL;
				m_pTangram = NULL;
			}
			return S_OK;
		}

		LRESULT CTangramAccessFormWnd::OnGetMe(UINT /*uMsg*/, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled*/)
		{
			if(wParam==0&&lParam==0)
				return (LRESULT)this;
			//m_nIndex++;
			//if (m_nIndex == 2)
			//{
			//	m_hSubForm = (HWND)lParam;
			//	if ((::GetWindowLong(m_hWnd, GWL_EXSTYLE)&WS_EX_MDICHILD))
			//	{
			//		m_bMDIClient = TRUE;
			//	}
			//}
			return 0;
		}
	}
}

