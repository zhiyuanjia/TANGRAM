/********************************************************************************
*					Tangram Library - version 8.0								*
*********************************************************************************
* Copyright (C) 2002-2015 by Tangram Team.   All Rights Reserved.					*
*
* THIS SOURCE FILE IS THE PROPERTY OF TANGRAM TEAM AND IS NOT TO 
* BE RE-DISTRIBUTED BY ANY MEANS WHATSOEVER WITHOUT THE EXPRESSED 
* WRITTEN CONSENT OF TANGRAM TEAM.
*
* THIS SOURCE CODE CAN ONLY BE USED UNDER THE TERMS AND CONDITIONS 
* OUTLINED IN THE TANGRAM LICENSE AGREEMENT.TANGRAM TEAM 
* GRANTS TO YOU (ONE SOFTWARE DEVELOPER) THE LIMITED RIGHT TO USE 
* THIS SOFTWARE ON A SINGLE COMPUTER.
*
* CONTACT INFORMATION:
* mailto:sunhuizlz@yeah.net
* http://www.lyncplus.net
* http://www.tangramdev.com
*
********************************************************************************/

#include "../../stdafx.h"
#include "../../TangramApp.h"
#include "WordPlusDoc.h"
#include "TangramWordAddin.h"

namespace TangramOfficePlus
{
	namespace WordPlus
	{
		CTangramWordPlusDoc::CTangramWordPlusDoc(void)
		{
			m_pTaskPaneTangram = NULL;
			m_pTaskPaneFrame = NULL;
			m_pDoc				= NULL;
			m_pFrame			= NULL;
			m_pTangram			= NULL;
			m_strTaskPaneXml	= _T("");
		}

		CTangramWordPlusDoc::~CTangramWordPlusDoc(void)
		{
		}

		CTangramWordPlusDocWnd::CTangramWordPlusDocWnd(void)
		{
			m_pWordAddin		= (CTangramWordAddin*)theApp.m_pHostCore;
			m_hDocWnd			= NULL;
			m_pWordPlusDoc		= NULL;
			m_hTaskPane			= NULL;
			m_hTaskPaneWnd		= NULL;
			m_hTaskPaneChildWnd = NULL;
		}

		CTangramWordPlusDocWnd::~CTangramWordPlusDocWnd(void)
		{
		}

		void CTangramWordPlusDocWnd::OnFinalMessage(HWND hWnd)
		{
			map<LONG, Office::_CustomTaskPane*>::iterator it = m_pWordAddin->m_mapTaskPaneMap.find((LONG)hWnd);
			if (it != m_pWordAddin->m_mapTaskPaneMap.end())
			{
				it->second->put_Visible(false);
				m_pWordAddin->m_mapTaskPaneMap.erase(it);
			}
			if (m_pWordPlusDoc)
			{
				WordPlusDocWndMapIT it = m_pWordPlusDoc->find(m_hWnd);
				if (it != m_pWordPlusDoc->end())
					m_pWordPlusDoc->erase(it);
			}
			CWindowImpl<CTangramWordPlusDocWnd,CWindow>::OnFinalMessage(hWnd);
			delete this;
		}

		LRESULT CTangramWordPlusDocWnd::OnGetData(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& )
		{
			return (LRESULT)this;
		}

		LRESULT CTangramWordPlusDocWnd::OnTangramMsg(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& )
		{
			if (lParam > 1)
			{
				m_pWordPlusDoc = NULL;
				map<LONG, Office::_CustomTaskPane*>::iterator iter = m_pWordAddin->m_mapTaskPaneMap.find((LONG)lParam);
				if (iter != m_pWordAddin->m_mapTaskPaneMap.end())
				{
					m_hTaskPane = NULL;
					iter->second->put_Visible(false);
					m_pWordAddin->m_mapTaskPaneMap.erase(iter);
				}
				return 0;
			}
			if (m_pWordPlusDoc)
			{
				int nCount = m_pWordPlusDoc->size();
				if (nCount == 1)
				{
					if (m_hTaskPane)
					{
						m_hTaskPane = NULL;
						m_pWordPlusDoc->m_pTaskPaneFrame->ModifyHost((LONGLONG)m_hTaskPaneChildWnd);
						::DestroyWindow(m_hTaskPaneWnd);
						LONGLONG h = 0;
						theApp.m_pTangramCore->get_RemoteHelperHWND(&h);
						m_hTaskPaneWnd = ::CreateWindowEx(NULL, L"Tangram Word Helper Window", _T("Tangram Word Helper Window"), WS_CHILD, 0, 0, 0, 0, m_hWnd, NULL, theApp.m_hInstance, NULL);
						m_hTaskPaneChildWnd = ::CreateWindowEx(NULL, L"Tangram Word Helper Window", _T("Tangram Word Helper Window"), WS_CHILD, 0, 0, 0, 0, (HWND)m_hTaskPaneWnd, NULL, theApp.m_hInstance, NULL);
					}
				}
				else
				{
					if (nCount>1)
					{
						WordPlusDocWndMapIT it = m_pWordPlusDoc->find(m_hWnd);
						for (it = m_pWordPlusDoc->begin(); it != m_pWordPlusDoc->end(); it++)
						{
							CTangramWordPlusDocWnd* pWnd = it->second;
							if (it->second != this)
							{
								if (pWnd->m_hTaskPane)
								{
									m_pWordPlusDoc->m_pTaskPaneFrame->ModifyHost((LONGLONG)pWnd->m_hTaskPane);
								}
								else
								{
									m_pWordPlusDoc->m_pTaskPaneFrame->ModifyHost((LONGLONG)pWnd->m_hTaskPaneChildWnd);
								}
								return DefWindowProc(uMsg, wParam, lParam);
							}
						}
					}
				}
			}
			return 0;
		}

		LRESULT CTangramWordPlusDocWnd::OOpenDoc(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& )
		{
			map<LONG, Office::_CustomTaskPane*>::iterator it = m_pWordAddin->m_mapTaskPaneMap.find((LONG)m_hWnd);
			if (it != m_pWordAddin->m_mapTaskPaneMap.end())
			{
				it->second->put_Visible(false);
				m_pWordAddin->m_mapTaskPaneMap.erase(it);
			}
			if(m_pWordAddin->m_pCurWordPlusDocWnd==NULL)
				return 0;
			CTangramWordPlusDocWnd* pWnd = m_pWordAddin->m_pCurWordPlusDocWnd;
			pWnd->m_pWordPlusDoc = (CTangramWordPlusDoc*)wParam;
			if(lParam==1&& pWnd)
			{
				CComBSTR bstrXml(L"");
				m_pWordAddin->GetTangramXml(pWnd->m_pWordPlusDoc->m_pDoc,CComBSTR(L"Tangrams"),&bstrXml);
				CString strTemplateXml =  OLE2T(bstrXml);

				if (strTemplateXml != _T(""))
				{
					CTangramXmlParse m_Parse;
					if (m_Parse.LoadXml(strTemplateXml) || m_Parse.LoadFile(strTemplateXml))
					{
						CTangramXmlParse* pParse = m_Parse.GetChild(_T("TaskPaneUI"));
						if (pParse)
							pWnd->m_pWordPlusDoc->m_strTaskPaneXml = pParse->xml();
						pParse = m_Parse.GetChild(_T("DocumentUI"));
						if (pParse)
						{
							CTangramWordPlusDoc* pWordDocument = pWnd->m_pWordPlusDoc;
							theApp.m_pTangramCore->CreateTangram((LONGLONG)pWnd->m_hWnd, &pWordDocument->m_pTangram);
							if (pWordDocument->m_pTangram)
							{
								pWordDocument->m_pTangram->put_External(pWordDocument->m_pDoc);
								pWordDocument->m_pTangram->CreateFrame(CComVariant(0), CComVariant((LONGLONG)m_pWordAddin->m_pCurWordPlusDocWnd->m_hDocWnd), CComBSTR(L"Document"), &pWordDocument->m_pFrame);
								if (pWordDocument->m_pFrame)
								{
									CString strXml = pParse->xml();
									CComPtr<ITangramNode> pNode;
									pWordDocument->m_pFrame->Extend(CComBSTR(L"Default"), strXml.AllocSysString(), &pNode);
								}
							}
						}
					}
				}
			}
			return 0;
		}

		LRESULT CTangramWordPlusDocWnd::OnShowWindow(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& )
		{
			if(wParam==0)
			{
				int nCount = 0;
				if(m_pWordPlusDoc)
				{
					map<LONG, Office::_CustomTaskPane*>::iterator it = m_pWordAddin->m_mapTaskPaneMap.find((LONG)m_hWnd);
					if (it != m_pWordAddin->m_mapTaskPaneMap.end())
					{
						it->second->put_Visible(false);
						m_pWordAddin->m_mapTaskPaneMap.erase(it);
					}
					nCount = m_pWordPlusDoc->size();
					if(nCount==1)
					{
						if(m_pWordPlusDoc->m_pFrame)
						{
							HWND m_hWnd = ::CreateWindowEx(NULL, L"Tangram Word Helper Window", _T("Tangram Word Helper Window"), WS_CHILD, 0, 0, 0, 0, theApp.m_pHostCore->m_hHostWnd, NULL, AfxGetInstanceHandle(), NULL);
							HWND m_hChildWnd = ::CreateWindowEx(NULL, L"Tangram Word Helper Window", _T("Tangram Word Helper Window"), WS_CHILD, 0, 0, 0, 0, (HWND)m_hWnd, NULL, AfxGetInstanceHandle(), NULL);
							if (::IsWindow(m_hWnd))
							{
								m_pWordPlusDoc->m_pFrame->ModifyHost((LONGLONG)m_hChildWnd);
								::DestroyWindow(m_hWnd);
							}
							m_pWordPlusDoc->m_pFrame = NULL;
						}
						
						WordPlusDocumentMapIT it = m_pWordAddin->find(m_pWordPlusDoc->m_pDoc);
						if(it!= m_pWordAddin->end())
						{
							m_pWordAddin->erase(it);
							m_pWordPlusDoc->m_pDoc = NULL;
							delete m_pWordPlusDoc;
						}
					}
					else
					{
						if(nCount>1)
						{
							WordPlusDocWndMapIT it = m_pWordPlusDoc->find(m_hWnd);
							if(it!=m_pWordPlusDoc->end())
								m_pWordPlusDoc->erase(it);
						}
					}
				}
				::PostMessage(m_hWnd, WM_TANGRAMMSG, 0, (LPARAM)m_hWnd);
			}
			else
			{
				m_pWordAddin->m_pCurWordPlusDocWnd = this;
			}

			LRESULT lRes = DefWindowProc(uMsg , wParam, lParam);
			return lRes;
		}
	}
}
