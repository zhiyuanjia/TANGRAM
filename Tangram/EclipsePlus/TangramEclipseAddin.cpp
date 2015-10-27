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
#include "TangramCtrl.h"
#include "TangramEclipseAddin.h"

namespace TangramEclipsePlus
{
	namespace EclipsePlus
	{
		CTangramEclipseAddin::CTangramEclipseAddin()
		{
			m_nIndex = 0;
			m_nCommandID = 0;
			m_pNewWnd = NULL;
			m_strURL = _T("");
			CMarkup m_xmlMarkup;
			if (bLoadConfig(&m_xmlMarkup))
			{
				if (bFindNode(&m_xmlMarkup, _T("Configuration")))
				{
					m_strURL = m_xmlMarkup.GetAttrib(_T("InitURL"));
					theApp.m_strSWTClassName = m_xmlMarkup.GetAttrib(_T("SWTClass"));
				}
			}
		}

		CTangramEclipseAddin::~CTangramEclipseAddin()
		{
		}

		bool CTangramEclipseAddin::bFindNode(CMarkup* pXml, LPCTSTR lpName)
		{
			bool bFound = false;
			pXml->FindElem();
			if (pXml->GetTagName().CollateNoCase(lpName) == 0)
				bFound = true;
			else
				bFound = _bFindNode(pXml, lpName);
			return bFound;
		}

		bool CTangramEclipseAddin::_bFindNode(CMarkup* pXml, LPCTSTR lpName)
		{
			bool bFound = false;
			while (pXml->FindChildElem())
			{
				pXml->IntoElem();
				if (pXml->GetTagName().CollateNoCase(lpName) == 0)
				{
					bFound = true;
				}
				else
				{
					bFound = _bFindNode(pXml, lpName);
				}

				if (bFound)
				{
					break;
				}
				pXml->OutOfElem();
			}
			return bFound;
		}

		bool CTangramEclipseAddin::bLoadConfig(CMarkup* pXml)
		{
			bool bRet = FALSE;

			TCHAR szFile[MAX_PATH] = { 0 };
			::GetModuleFileName(NULL, szFile, MAX_PATH);
			_tcscat(szFile, _T(".tangram"));
			return pXml->Load(szFile);
		}

		CTangramEclipseWnd::CTangramEclipseWnd(void)
		{
			m_nIndex = 0;
			m_bCreated = false;
			m_strURL = _T("");
		}

		CTangramEclipseWnd::~CTangramEclipseWnd(void) 
		{
		}

		void CTangramEclipseWnd::OnFinalMessage(HWND hWnd)
		{
			CWindowImpl::OnFinalMessage(hWnd);
			delete this;
		}

		STDMETHODIMP CTangramEclipseWnd::get_Handle(LONGLONG* pVal)
		{
			*pVal = (LONGLONG)m_hClient;
			return S_OK;
		}

		STDMETHODIMP CTangramEclipseWnd::SWTExtend(BSTR bstrKey, BSTR bstrXml, ITangramNode** ppNode)
		{
			CString strKey = OLE2T(bstrKey);
			strKey.Trim();

			if (m_hClient == NULL)
				return S_FALSE;
			if (m_pTangram == NULL)
			{
				theApp.m_pTangramCore->CreateTangram((LONGLONG)m_hWnd, &m_pTangram);
				if (m_pTangram == NULL)
					return S_FALSE;
				if (m_pFrame == NULL)
				{
					m_pTangram->CreateFrame(CComVariant(0), CComVariant((LONGLONG)m_hClient), CComBSTR(L"SWT"), &m_pFrame);
					if (m_pFrame == NULL)
					{
						delete m_pTangram;
						m_pTangram = NULL;
					}
				}
			}

			HRESULT hr = m_pFrame->Extend(bstrKey, bstrXml, ppNode);
			if (*ppNode)
			{
				m_pCurNode = *ppNode;
			}
			return hr;
		}

		STDMETHODIMP CTangramEclipseWnd::GetCtrlText(BSTR bstrNodeName, BSTR bstrCtrlName, BSTR* bstrVal)
		{
			if (m_pFrame)
			{
				CString strName = OLE2T(bstrNodeName);
				CTangramFrame* _pFrame = (CTangramFrame*)m_pFrame;
				map<CString, CTangramNode*>::iterator it = _pFrame->m_mapNode.find(strName);
				if (it != _pFrame->m_mapNode.end())
				{
					CTangramNode* pNode = it->second;
					if (pNode->m_nViewType == CLRCtrl)
					{
						CTangram* pTangram = _pFrame->m_pTangram;
						//pTangram->GetCtrlByName
					}
				}
			}
			return S_OK;
		}

		LRESULT CTangramEclipseWnd::OnCommand(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled*/)
		{
			((CTangramEclipseAddin*)theApp.m_pHostCore)->m_nCommandID = (long)wParam;
			LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
			return lRes;
		}

		LRESULT CTangramEclipseWnd::OnGetData(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled*/)
		{
			return (LRESULT)this;
		}

		LRESULT CTangramEclipseWnd::OnChildWndCreate(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled*/)
		{
			if (wParam)
			{
				HWND hWnd = (HWND)wParam;
				m_nIndex++;
				switch (m_nIndex)
				{
				case 1:
					{
						m_hClient = hWnd;
					}
					break;
				case 2:
					m_hTopBottom = hWnd;
					break;
				case 3:
					m_hBottom = hWnd;
					break;
				}
				if (m_nIndex>=3&& m_bCreated==false)
				{
					m_bCreated = true;
					::PostMessage(m_hWnd, WM_ECLIPSEMAINWNDCREATED, 0, 1);
				}
			}
			else
			{
				theApp.m_pTangramCore->CreateTangram((LONGLONG)m_hWnd, &m_pTangram);
				if (m_strURL == _T(""))
				{
					m_strURL = ((CTangramEclipseAddin*)theApp.m_pHostCore)->m_strURL;
				}
				if (m_strURL)
				{
					if (::PathFileExists(m_strURL))
					{
						m_pTangram->CreateFrame(CComVariant(0), CComVariant((LONGLONG)m_hClient), CComBSTR(L"Default"), &m_pFrame);
						ITangramNode* pNode = NULL;
						m_pFrame->Extend(CComBSTR(L"Default"), CComBSTR(m_strURL), &pNode);
					}
					else
					{
						m_pTangram->put_External(this);
						m_pTangram->put_URL(CComBSTR(m_strURL));
					}
				}
			}
			return 0;
		}

		CTangramEclipseSWTWnd::CTangramEclipseSWTWnd(void)
		{
			m_pHostCtrl = NULL;
		}

		CTangramEclipseSWTWnd::~CTangramEclipseSWTWnd(void)
		{
		}

		void CTangramEclipseSWTWnd::OnFinalMessage(HWND hWnd)
		{
			CWindowImpl::OnFinalMessage(hWnd);
			delete this;
		}

		LRESULT CTangramEclipseSWTWnd::OnSWTComponentNotify(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled*/)
		{
			if (m_pHostCtrl)
			{
				LPCTSTR lpstrExtenderID = (LPCTSTR)wParam;
				CString strXML = (LPCTSTR)lParam;
				CComPtr<IDispatch> pDisp;
				m_pHostCtrl->m_pTangram->get_Extender(CComBSTR(lpstrExtenderID),&pDisp);
				if (pDisp)
				{
					CComQIPtr<ITangramExtender> pTangramExtender(pDisp);
					if (pTangramExtender)
					{
						pTangramExtender->ProcessNotify(strXML.AllocSysString());
					}
				}
				else
				{

				}
			}
			return 0;
		}
	}
}






