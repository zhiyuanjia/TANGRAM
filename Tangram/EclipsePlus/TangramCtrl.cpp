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

// TangramCtrl.cpp : Declaration of the CTangramCtrl 
#include "../stdafx.h"
#include "TangramCtrl.h"

namespace TangramEclipsePlus
{
	namespace EclipsePlus
	{
		// CTangramCtrl
		CTangramCtrl::CTangramCtrl()
		{
			m_bWindowOnly = TRUE;
			m_bSWTCtrl = FALSE;
			m_hHostWnd = NULL;
			m_hTangramWnd = NULL;
			m_pTangram = NULL;
			m_pFrame = NULL;
			m_strURL = _T("");
			m_pEclipseWnd = NULL;
			m_hDocWnd = NULL;
		}

		STDMETHODIMP CTangramCtrl::get_HWND(LONGLONG* pVal)
		{
			*pVal = (LONGLONG)m_hWnd;
			return S_OK;
		}

		LRESULT CTangramCtrl::OnCreate(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled*/)
		{
			LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
			m_hHostWnd = ::GetParent(m_hWnd);
			::GetClassName(m_hHostWnd, theApp.m_szBuffer, MAX_PATH);
			CString strClassName = CString(theApp.m_szBuffer);
			if (strClassName == theApp.m_strSWTClassName)
			{
				m_bSWTCtrl = TRUE;
				::SetWindowPos(m_hWnd, HWND_BOTTOM, 0, 0, 0, 0, SWP_HIDEWINDOW);
				CTangramEclipseSWTWnd* pWnd = new CTangramEclipseSWTWnd();
				pWnd->m_pHostCtrl = this;
				pWnd->SubclassWindow(m_hHostWnd);

				HWND hPParent = ::GetParent(m_hHostWnd);
				::GetClassName(hPParent, theApp.m_szBuffer, MAX_PATH);
				strClassName = CString(theApp.m_szBuffer);
				if (strClassName == theApp.m_strSWTClassName)
				{
					m_hTangramWnd = hPParent;
				}
				HWND hWnd = ::GetAncestor(m_hWnd, GA_ROOT);
				LRESULT lRes = ::SendMessage(hWnd, WM_TANGRAMDATA, 0, 0);
				if (lRes)
					m_pEclipseWnd = (CTangramEclipseWnd*)lRes;
				else
				{
					m_pEclipseWnd = new CComObject<CTangramEclipseWnd>;
					m_pEclipseWnd->SubclassWindow(hWnd);
				}
				(*m_pEclipseWnd)[m_hWnd] = this;
			}
			return lRes;
		}

		LRESULT CTangramCtrl::OnDestroy(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled*/)
		{
			if (m_hDocWnd)
			{
				::SendMessage(m_hDocWnd, WM_TANGRAMMSG, 0, 1);
			}
			LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
			return lRes;
		}

		STDMETHODIMP CTangramCtrl::put_SWTURL(BSTR newVal)
		{
			CString strURL = OLE2T(newVal);
			strURL.Trim();
			if (strURL == _T(""))
				return S_FALSE;
			if (m_pTangram&&m_pFrame&&m_strURL != _T(""))
			{
				HWND hWnd = ::CreateWindowEx(NULL, _T("Tangram Window Class"), _T(""), WS_CHILD, 0, 0, 0, 0, m_hWnd, NULL, theApp.m_hInstance, NULL);
				HWND hChildWnd = ::CreateWindowEx(NULL, _T("Tangram Window Class"), _T(""), WS_CHILD, 0, 0, 0, 0, hWnd, NULL, theApp.m_hInstance, NULL);
				if (hWnd&&hChildWnd)
				{
					m_pFrame->ModifyHost((LONGLONG)hChildWnd);
					if (::DestroyWindow(hWnd))
					{
						m_pFrame = NULL;
						m_pTangram = NULL;
					}
				}
			}
			if (m_pTangram)
			{
				theApp.m_pTangramCore->CreateTangram((LONGLONG)m_hTangramWnd, &m_pTangram);
				if (m_pTangram == NULL)
					return S_FALSE;
				m_pTangram->put_URL(newVal);
				m_strURL = OLE2T(newVal);
			}

			return S_OK;
		}

		STDMETHODIMP CTangramCtrl::get_TangramFrame(ITangramFrame** pVal)
		{
			if (m_bSWTCtrl&&m_pFrame)
				*pVal = m_pFrame;

			return S_OK;
		}

		STDMETHODIMP CTangramCtrl::SWTExtend(LONGLONG nHandle, BSTR bstrKey, BSTR bstrXml, ITangramNode** ppNode)
		{
			CString strKey = OLE2T(bstrKey);
			strKey.Trim();
			if (strKey == _T(""))
				return S_FALSE;
			
			strKey = OLE2T(bstrXml);
			strKey.Trim();
			if (strKey == _T(""))
				return S_FALSE;
			switch (nHandle)
			{
			case 0:
				{

					if (m_hHostWnd == NULL || m_hTangramWnd == NULL)
						return S_FALSE;
					if (m_pTangram == NULL)
					{
						theApp.m_pTangramCore->CreateTangram((LONGLONG)m_hTangramWnd, &m_pTangram);
						if (m_pTangram == NULL)
							return S_FALSE;
						if (m_pFrame == NULL)
						{
							m_pTangram->CreateFrame(CComVariant(0), CComVariant((LONGLONG)m_hHostWnd), CComBSTR(L"SWT"), &m_pFrame);
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
				break;
			case 1:
				{
					return m_pEclipseWnd->SWTExtend(bstrKey, bstrXml, ppNode);
				}
				break;
			default:
				if (m_pEclipseWnd)
				{
					HWND hWnd = (HWND)nHandle;
					map<HWND, CTangramCtrl*>::iterator it = m_pEclipseWnd->find(hWnd);
					if (it != m_pEclipseWnd->end())
					{
						CTangramCtrl* pCtrl = it->second;
						if (pCtrl)
						{
							return pCtrl->SWTExtend(0, bstrKey, bstrXml, ppNode);
						}
					}
				}
				break;
			}
			return S_FALSE;
		}

		STDMETHODIMP CTangramCtrl::GetCtrlText(LONGLONG nHandle, BSTR bstrNodeName, BSTR bstrCtrlName, BSTR* bstrVal)
		{
			switch (nHandle)
			{
			case 0:
				if (m_pFrame)
				{
					CString strName = OLE2T(bstrNodeName);
					CTangramFrame* _pFrame = (CTangramFrame*)m_pFrame;
					map<CString, CTangramNode*>::iterator it = _pFrame->m_mapNode.find(strName);
					if (it!=_pFrame->m_mapNode.end())
					{
						CTangramNode* pNode = it->second;
						if (pNode->m_nViewType == CLRCtrl)
						{
							CTangram* pTangram = _pFrame->m_pTangram;
							pTangram->GetCtrlValueByName(pNode->m_pDisp, bstrCtrlName, true, bstrVal);
						}
					}
				}
				break;
			case 1:
				return m_pEclipseWnd->GetCtrlText(bstrNodeName, bstrCtrlName, bstrVal);
				break;
			default:
				if (m_pEclipseWnd)
				{
					HWND hWnd = (HWND)nHandle;
					map<HWND, CTangramCtrl*>::iterator it = m_pEclipseWnd->find(hWnd);
					if (it != m_pEclipseWnd->end())
					{
						CTangramCtrl* pCtrl = it->second;
						if (pCtrl)
						{
							return pCtrl->GetCtrlText(0, bstrNodeName, bstrCtrlName, bstrVal);
						}
					}
				}
				break;
			}

			return S_OK;
		}
	}
}

