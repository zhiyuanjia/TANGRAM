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
#include "ExcelPlusWnd.h"
#include "TangramExcelAddin.h"

namespace TangramOfficePlus
{
	namespace ExcelPlus
	{
		CTangramExcelPlusWBWnd::CTangramExcelPlusWBWnd(void)
		{
			m_hInputWnd = NULL;
			m_hTaskPane = NULL;
			m_hTaskPaneWnd = NULL;
			m_hTaskPaneChildWnd = NULL;
			m_pWorkBook = NULL;
			m_strActiveSheetName = _T("");
		}

		CTangramExcelPlusWBWnd::~CTangramExcelPlusWBWnd(void)
		{
		}

		LRESULT CTangramExcelPlusWBWnd::OnDestroy(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
		{
			if (((CTangramExcelAddin*)theApp.m_pHostCore)->m_pActiveWnd == this)
				((CTangramExcelAddin*)theApp.m_pHostCore)->m_pActiveWnd = NULL;

			ExcelWorkBookWndMapIT it2 = m_pWorkBook->m_mapExcelWorkBookWnd.find(m_hWnd);
			if (it2 != m_pWorkBook->m_mapExcelWorkBookWnd.end())
			{
				m_pWorkBook->m_mapExcelWorkBookWnd.erase(it2);
			}
			size_t nCount = m_pWorkBook->m_mapExcelWorkBookWnd.size();
			if (nCount > 0 && m_pWorkBook->m_pFrame)
			{
				it2 = m_pWorkBook->m_mapExcelWorkBookWnd.begin();
				m_pWorkBook->m_pFrame->ModifyHost((LONGLONG)::GetParent(it2->second->m_hWnd));
				if (m_hTaskPane)
				{
					m_hTaskPane = NULL;
					m_pWorkBook->m_pTaskPaneFrame->ModifyHost((LONGLONG)it2->second->m_hTaskPaneChildWnd);
					::DestroyWindow(m_hTaskPaneWnd);
				}
			}
			if (nCount == 0)
			{
				HRESULT hr = S_OK;
				ExcelWorkSheetDispMapIT it = m_pWorkBook->end();
				for (it = m_pWorkBook->begin(); it != m_pWorkBook->end(); it++)
				{
					hr = it->second->DispEventUnadvise(it->first);
					delete it->second;
				}
				m_pWorkBook->erase(m_pWorkBook->begin(), m_pWorkBook->end());
				hr = m_pWorkBook->DispEventUnadvise(m_pWorkBook->m_pWorkBook);
				delete m_pWorkBook;
			}
			return DefWindowProc(uMsg, wParam, lParam);
		}

		LRESULT CTangramExcelPlusWBWnd::OnGetData(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
		{
			return (LRESULT)this;
		}

		void CTangramExcelPlusWBWnd::OnFinalMessage(HWND hWnd)
		{
			CTangramExcelAddin* pAddin = ((CTangramExcelAddin*)theApp.m_pHostCore);
			map<LONG, Office::_CustomTaskPane*>::iterator iter = pAddin->m_mapTaskPaneMap.find((LONG)hWnd);
			if (iter != pAddin->m_mapTaskPaneMap.end())
			{
				pAddin->m_mapTaskPaneMap.erase(iter);
			}
			size_t nCount = m_pWorkBook->m_mapExcelWorkBookWnd.size();
			if(nCount==0)
			{
				ExcelWorkBookWndDispMapIT it = pAddin->find(m_pWorkBook->m_pWorkBook);
				if(it!= pAddin->end())
					pAddin->erase(it);
			}
			CWindowImpl<CTangramExcelPlusWBWnd,CWindow>::OnFinalMessage(hWnd);
			delete this;
		}

		CTangramExcelPlusWB::CTangramExcelPlusWB(void)
		{
			m_pFrame		 = NULL;
			m_pWorkBook		 = NULL;
			m_strTaskPaneXml = _T("");
		}

		CTangramExcelPlusWB::~CTangramExcelPlusWB(void)
		{
		}

		void CTangramExcelPlusWB::OnNewSheet(IDispatch* Sh)
		{
			CComQIPtr<_Worksheet> pSheet(Sh);
			if(pSheet)
			{
				CTangramExcelWorkSheet* pExcelWorkSheet = new CTangramExcelWorkSheet();
				pExcelWorkSheet->DispEventAdvise(pSheet.p);
				pExcelWorkSheet->m_pSheet = pSheet.p;
				pExcelWorkSheet->m_pSheet->AddRef();
				(*this)[pExcelWorkSheet->m_pSheet] = pExcelWorkSheet;
			}
		}

		void CTangramExcelPlusWB::OnSheetBeforeDelete(IDispatch* Sh)
		{
			CComQIPtr<_Worksheet> pSheet(Sh);
			if(pSheet)
			{
				ExcelWorkSheetDispMapIT it = find(pSheet.p);
				if(it!=end())
				{
					it->second->DispEventUnadvise(Sh);
					delete it->second;
					erase(it);
				}
			}
		}

		void CTangramExcelPlusWB::OnSheetBeforeDoubleClick(IDispatch* Sh,Range* Target,VARIANT_BOOL* Cancel)
		{
			//if(m_pFrame)
			//{
			//	LONGLONG nHandle = 0;
			//	m_pFrame->get_HWND(&nHandle);
			//	if(nHandle)
			//		::EnableWindow((HWND)nHandle, false);
			//}
		}

		void CTangramExcelPlusWB::OnSheetChange(IDispatch* Sh,Range* Target)
		{
			//if(m_pFrame)
			//{
			//	LONGLONG nHandle = 0;
			//	m_pFrame->get_HWND(&nHandle);
			//	if(nHandle)
			//		::EnableWindow((HWND)nHandle, true);
			//}
		}

		void CTangramExcelPlusWB::OnSheetActivate(IDispatch* Sh)
		{
			CComQIPtr<Excel::_Worksheet> pSheet(Sh);
			if(pSheet)
			{
				CComBSTR bstrName(L"");
				pSheet->get_Name(&bstrName);
				CString strName = OLE2T(bstrName);
				CTangramXmlParse* pParse2 = GetChild(strName);
				if(pParse2==NULL)
					pParse2 = GetChild(_T("Default"));
				if(pParse2)
				{
					HWND hWnd = ::GetActiveWindow();
					HWND m_hClientWnd = ::FindWindowEx(hWnd,NULL,_T("XLDESK"),NULL);
					HWND m_hWorkBookWnd = (HWND) ::SendMessage(m_hClientWnd,WM_MDIGETACTIVE,0,0);
					CTangramExcelPlusWBWnd* pExcelWorkBookWnd = (CTangramExcelPlusWBWnd*)::SendMessage(m_hWorkBookWnd,WM_TANGRAMDATA,0,0);
					pExcelWorkBookWnd->m_strActiveSheetName = strName;
					CComPtr<ITangramNode> pNode;
					pExcelWorkBookWnd->m_pWorkBook->m_pFrame->Extend(bstrName, CComBSTR(pParse2->xml()), &pNode);
					// if(theApp.m_bOldVer)
				   // {
 					 //   if(pExcelWorkBookWnd&&pExcelWorkBookWnd->m_pWorkBook->m_pFrame)
 					 //   {
							//pExcelWorkBookWnd->m_pWorkBook->m_pFrame->ModifyHost((LONGLONG)pExcelWorkBookWnd->m_pHeplerWnd->m_hWnd,(LONGLONG)pExcelWorkBookWnd->m_pHeplerWnd->m_pChild->m_hWnd);
				   //         theApp.m_pTangramCore->NavigateXTML((LONGLONG)pExcelWorkBookWnd->m_pHeplerWnd->m_pChild->m_hWnd,CComBSTR(pParse2->xml()),&pNode);
							//pExcelWorkBookWnd->m_pWorkBook->m_pFrame->ModifyHost((LONGLONG)hWnd,(LONGLONG)m_hClientWnd);
				   //    }
				   // }
				   // else
				   //     theApp.m_pTangramManager->NavigateXTML((LONGLONG)m_hClientWnd,CComBSTR(pParse2->xml()),&pNode);
				}
			}
		}

		CTangramExcelWorkSheet::CTangramExcelWorkSheet(void)
		{
			m_pSheet = NULL;
		}

		CTangramExcelWorkSheet::~CTangramExcelWorkSheet(void)
		{
		}

		LRESULT CTangramExcelPlusWBWnd::OnMouseMove(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
		{
			if (m_hInputWnd)
			{
				::EnableWindow(m_hInputWnd, true);
				::EnableWindow(m_hInputWnd2, true);
			}

			return DefWindowProc(uMsg, wParam, lParam);
		}

		LRESULT CTangramExcelPlusWBWnd::OnWindowPosChanged(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
		{
			LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
			if (::IsWindowVisible(m_hWnd))
			{
				::ShowWindow(m_hInputWnd2, SW_SHOW);
			}
			else
			{
				::ShowWindow(m_hInputWnd2, SW_HIDE);
				if (::IsWindow(theApp.m_hExcelEdit))
				{
					BOOL bEnable = ::EnableWindow(theApp.m_hExcelEdit, false);;
				}
			}
			return lRes;
		}
	}
}
