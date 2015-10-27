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
#include "TangramOutLookAddin.h"
#include "OutLookplusEvents.cpp"
#define SECURITY_WIN32
#include <Security.h>
#pragma comment(lib, "Secur32.lib") 
#include <winInet.h>

namespace TangramOfficePlus
{
	namespace OutLookPlus
	{
		CTangramOutLookAddin::CTangramOutLookAddin()
		{
			CString strVer = theApp.GetFileVer();
			int nPos = strVer.Find(_T("."));
			strVer = strVer.Left(nPos);
			int nVer = _wtoi(strVer);
			CComVariant m_v;
			m_v.vt = VT_I4;
			m_v.lVal = (LONGLONG)(CTangramOfficePlusApp*)this;
			theApp.m_pHostCore->put_TangramVal(CComBSTR(L"OfficePlusApp"), m_v);
		}

		CTangramOutLookAddin::~CTangramOutLookAddin()
		{
		}

		HRESULT CTangramOutLookAddin::Tangram_Command(IDispatch* RibbonControl)
		{
			return S_OK;
		}

		HRESULT CTangramOutLookAddin::OnConnection(IDispatch* pHostApp, int ConnectMode)
		{
			HWND hWnd = ::GetActiveWindow();
			HWND _hWnd = hWnd;
			wchar_t user[256] = { 0 };
			ULONG size = _countof(user);
			if (!GetUserNameEx(NameDisplay, user, &size))
			{
				// GetUserNameEx may fail (for example on Home editions). use the login name
				size = _countof(user);
				GetUserName(user, &size);
			}
			m_strUser = user;
			pHostApp->QueryInterface(__uuidof(IDispatch), (LPVOID*)&m_pApplication);
			HRESULT hr = ((CTangramOutLookPlusApplicationEvents*)this)->DispEventAdvise(m_pApplication);
			hr = ((CTangramOutLookPlusApplicationEvents_10*)this)->DispEventAdvise(m_pApplication);
			hr = ((CTangramOutLookPlusApplicationEvents_11*)this)->DispEventAdvise(m_pApplication);
			m_pApplication->get_Explorers(&m_pExplorers);
			if (m_pExplorers)
			{
				hr = ((CTangramOutLookPlusExplorersEvents*)this)->DispEventAdvise(m_pExplorers);
				m_pApplication->get_Inspectors(&m_pInspectors);
				hr = ((CTangramOutLookPlusInspectorsEvents*)this)->DispEventAdvise(m_pInspectors);
			}
			CComPtr<_Explorer> pExplorer;
			m_pApplication->ActiveExplorer(&pExplorer);
			CComPtr<_Inspector> pInspector;
			m_pApplication->ActiveInspector(&pInspector);
			if (pExplorer)
			{
				//OutLook::
			}
			else if(pInspector)
			{

			}
				
			return S_OK;
		}

		HRESULT CTangramOutLookAddin::OnDisconnection(int DisConnectMode)
		{
			((CTangramOutLookPlusExplorersEvents*)this)->DispEventUnadvise(m_pExplorers);
			((CTangramOutLookPlusInspectorsEvents*)this)->DispEventUnadvise(m_pInspectors);
			HRESULT hr = ((CTangramOutLookPlusApplicationEvents*)this)->DispEventUnadvise(m_pApplication);
			hr = ((CTangramOutLookPlusApplicationEvents_10*)this)->DispEventUnadvise(m_pApplication);
			hr = ((CTangramOutLookPlusApplicationEvents_11*)this)->DispEventUnadvise(m_pApplication);
			m_pApplication.p->Release();
			m_pApplication.Detach();
			return S_OK;
		}

		HRESULT CTangramOutLookAddin::GetCustomAddinUI(BSTR RibbonID, BSTR* RibbonXml)
		{
			if (!RibbonXml)
				return E_POINTER;
			*RibbonXml = m_strRibbonXml.AllocSysString();
			return (*RibbonXml ? S_OK : E_OUTOFMEMORY);
		}

		void CTangramOutLookAddin::WindowCreated(LPCTSTR lpszClass, LPCTSTR strName, HWND hPWnd, HWND hWnd)
		{
			CString strClassName = lpszClass;
			if (strClassName == _T("OForm"))
			{
			}
		}

		//New CTangramOutLookPlusExplorer Object:
		CTangramOutLookPlusExplorer::CTangramOutLookPlusExplorer(void)
		{
			m_bClosing = false;
			m_strUIScript = _T("");
			m_hButton = NULL;
			m_hGridWnd = NULL;
			m_hNavWnd = NULL;
			m_pModuleDisp = NULL;
			m_pOnlineItem = NULL;
			m_pCurrentModule = NULL;
			m_pAccountSelector = NULL;
			m_pNavigationGroups = NULL;
			//m_pOutLookPlusTodayWnd = NULL;
			//m_pOnLineItemHostWindow = NULL;
			//m_pTangramSolutionHostWnd = NULL;
		}

		CTangramOutLookPlusExplorer::~CTangramOutLookPlusExplorer(void)
		{
		}

		//begin CTangramOutLookPlusExplorer Message Process:
		LRESULT CTangramOutLookPlusExplorer::OnWebWndCreated(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled*/)
		{
			//if (m_pOutLookPlusTodayWnd == NULL)
			//{
			//	CString strUrl = theApp.m_strOutLookToday;
			//	strUrl.Replace(_T("%s"), theApp.m_strUser);
			//	theApp.m_pTangramManager->AddToolBarForWnd((LONGLONG)wParam, 0, (IDispatch*)this, CComBSTR(strUrl), &m_pOutLookPlusTodayWnd);
			//	if (m_pOutLookPlusTodayWnd)
			//		m_pOutLookPlusTodayWnd->AddRef();
			//}
			return 0;
		}

		LRESULT CTangramOutLookPlusExplorer::OnMouseActivate(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled*/)
		{
			LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
			//if (wParam)
			//	theApp.m_pTangramManager->SetHostFocus();
			return lRes;
		}

		LRESULT CTangramOutLookPlusExplorer::OnGetTangramData(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled*/)
		{
			switch (lParam)
			{
			case 0:
			{
				return (LRESULT)LPCTSTR(m_strUIScript);
			}
			break;
			case 1:
			{
				return (LRESULT)this;
			}
			break;
			}
			return 0;
		}

		LRESULT CTangramOutLookPlusExplorer::OnStartUp(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled*/)
		{
			::BringWindowToTop(m_hWnd);
			return 0;
		}

		LRESULT CTangramOutLookPlusExplorer::OnDestroy(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled*/)
		{
			m_bClosing = true;
			//OutLookPlusExplorerMapIT it = theApp.m_mapOutLookPlusExplorerMap.find(m_hWnd);
			//if (it != theApp.m_mapOutLookPlusExplorerMap.end())
			//{
			//	theApp.m_mapOutLookPlusExplorerMap.erase(it);
			//	size_t nCount = theApp.m_mapOutLookPlusExplorerMap.size();
			//	if (nCount>0)
			//	{
			//		HWND hParent = theApp.m_mapOutLookPlusExplorerMap.begin()->first;
			//		if (::IsWindow(hParent))
			//		{
			//			::SetParent(theApp.m_pSolutionHelperWnd->m_hWnd, hParent);
			//		}
			//	}
			//}
			LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
			return lRes;
		}

		LRESULT CTangramOutLookPlusExplorer::OnNetUINativeHWNDHostCreated(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled*/)
		{
			HWND hWnd = (HWND)wParam;
			//if (m_pTangramSolutionHostWnd->m_hWnd != hWnd)
			//{
			//	if (m_pTangramSolutionHostWnd->m_pTangramExplorHelperWnd == NULL)
			//	{
			//		//CTangramOutLookPlusExplorerHelperWnd* pWnd = new CTangramOutLookPlusExplorerHelperWnd();
			//		m_pTangramSolutionHostWnd->m_pTangramExplorHelperWnd = pWnd;
			//		m_pTangramSolutionHostWnd->m_pTangramExplorHelperWnd->m_pExplorerWnd = this;
			//		m_pTangramSolutionHostWnd->m_pTangramExplorHelperWnd->m_pTangramSolutionHostWnd = m_pTangramSolutionHostWnd;
			//		m_pTangramSolutionHostWnd->m_pTangramExplorHelperWnd->SubclassWindow(hWnd);

			//		if (m_pTangramSolutionHostWnd->m_hBindWnd&&::IsWindow(m_pTangramSolutionHostWnd->m_hBindWnd))
			//		{
			//			int nWidth = 0;
			//			RECT rc;
			//			if (pWnd)
			//			{
			//				::GetClientRect(pWnd->m_hWnd, &rc);
			//				nWidth = rc.right;
			//				if (nWidth)
			//					nWidth -= 4;
			//			}
			//			RECT rc1;
			//			::GetWindowRect(m_pTangramSolutionHostWnd->m_hPosWnd, &rc1);
			//			ScreenToClient(&rc1);
			//			::GetWindowRect(m_pTangramSolutionHostWnd->m_hWnd, &rc);
			//			ScreenToClient(&rc);
			//			RECT rc2;
			//			::GetWindowRect(m_hWnd, &rc2);
			//			if (nWidth)
			//				nWidth = rc2.right - rc2.left + rc.left - rc1.left - 14 - nWidth;
			//			else
			//				nWidth = rc2.right - rc2.left + rc.left - rc1.left - 4;

			//			::SetWindowPos(theApp.m_pSolutionHelperWnd->m_hWnd, HWND_TOP, rc1.left, rc1.top, nWidth, rc.bottom - rc.top,/*SWP_NOREDRAW|SWP_NOACTIVATE|*/SWP_FRAMECHANGED);
			//		}
			//	}
			//}
			return 0;
		}

		LRESULT CTangramOutLookPlusExplorer::OnWindowPosChanged(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled*/)
		{
			WINDOWPOS* lpwndpos = (WINDOWPOS*)lParam;
			lpwndpos->flags |= SWP_NOACTIVATE | SWP_NOREDRAW;

			//if (m_pTangramSolutionHostWnd&&::IsWindow(m_pTangramSolutionHostWnd->m_hWnd) && theApp.m_pSolutionHelperWnd&&::IsWindow(theApp.m_pSolutionHelperWnd->m_hWnd))
			//{
			//	HWND hWnd2 = ::FindWindowEx(m_hWnd, m_pTangramSolutionHostWnd->m_hWnd, _T("NetUINativeHWNDHost"), NULL);
			//	RECT rc;
			//	int nWidth = 0;
			//	if (hWnd2)
			//	{
			//		::GetClientRect(hWnd2, &rc);
			//		nWidth = rc.right;
			//		if (nWidth)
			//			nWidth -= 4;
			//	}
			//	RECT rc1;
			//	::GetWindowRect(m_pTangramSolutionHostWnd->m_hPosWnd, &rc1);
			//	ScreenToClient(&rc1);
			//	::GetWindowRect(m_pTangramSolutionHostWnd->m_hWnd, &rc);
			//	ScreenToClient(&rc);
			//	RECT rc2;
			//	::GetWindowRect(m_hWnd, &rc2);
			//	if (nWidth)
			//		nWidth = rc2.right - rc2.left + rc.left - rc1.left - 14 - nWidth;
			//	else
			//		nWidth = rc2.right - rc2.left + rc.left - rc1.left - 4;
			//	::SetWindowPos(theApp.m_pSolutionHelperWnd->m_hWnd, HWND_TOP, rc1.left, rc1.top, nWidth, rc.bottom - rc.top, SWP_NOREDRAW | SWP_NOACTIVATE);
			//}
			LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
			return lRes;
		}

		LRESULT CTangramOutLookPlusExplorer::OnSelectChanged(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled*/)
		{
			//if (theApp.m_pCurLoadItem)
			//{
			//	CComBSTR bstr(L"");
			//	CComQIPtr<_MailItem> pMailItem(theApp.m_pCurLoadItem);
			//	if (pMailItem)
			//	{
			//		//pMailItem->get_To(&bstr);
			//		//pMailItem->get_SenderEmailAddress(&bstr);
			//		//pMailItem->get_HTMLBody(&bstr);
			//	}
			//	theApp.m_pCurLoadItem->Release();
			//	theApp.m_pCurLoadItem = NULL;
			//}
			return 0;
		}
		//end CTangramOutLookPlusExplorer Message Process

		//begin IOutLookExplorer implement:
		STDMETHODIMP CTangramOutLookPlusExplorer::get_TangramManager(IDispatch** pVal)
		{
			//if (theApp.m_pTangramManager)
			//{
			//	*pVal = theApp.m_pTangramManager;
			//	(*pVal)->AddRef();
			//}
			return S_OK;
		}

		STDMETHODIMP CTangramOutLookPlusExplorer::get_Explorer(IDispatch** pVal)
		{
			if (m_pExplorer)
			{
				*pVal = m_pExplorer.p;
				(*pVal)->AddRef();
			}

			return S_OK;
		}

		STDMETHODIMP CTangramOutLookPlusExplorer::get_OutLookItem(IDispatch** pVal)
		{
			if (m_pOnlineItem)
			{
				*pVal = m_pOnlineItem;
				(*pVal)->AddRef();
			}

			return S_OK;
		}

		STDMETHODIMP CTangramOutLookPlusExplorer::get_Application(IDispatch** pVal)
		{
			//*pVal = theApp.m_pApplication.p;
			//(*pVal)->AddRef();
			return S_OK;
		}

		STDMETHODIMP CTangramOutLookPlusExplorer::get_UIScript(BSTR bstrKey, BSTR *pVal)
		{
			CString strKey = OLE2T(bstrKey);
			if (strKey != _T(""))
			{
				map<CString, CString>::iterator it = m_mapUIScript.find(strKey);
				if (it != m_mapUIScript.end())
				{
					*pVal = CComBSTR(it->second);
					if (strKey.CompareNoCase(_T("UIScript")) == 0)
					{
						m_strUIScript = OLE2T(*pVal);
					}
				}
			}
			return S_OK;
		}

		STDMETHODIMP CTangramOutLookPlusExplorer::put_UIScript(BSTR bstrKey, BSTR newVal)
		{
			CString strKey = OLE2T(bstrKey);
			if (strKey != _T(""))
			{
				map<CString, CString>::iterator it = m_mapUIScript.find(strKey);
				if (it != m_mapUIScript.end())
				{
					m_mapUIScript.erase(it);
				}
				m_mapUIScript[strKey] = OLE2T(newVal);
			}
			return S_OK;
		}
		//end IOutLookExplorer implement

		//begin Delete CTangramOutLookPlusExplorer Object:
		void CTangramOutLookPlusExplorer::OnFinalMessage(HWND hWnd)
		{
			__super::OnFinalMessage(hWnd);
			delete this;
		}

		void CTangramOutLookPlusExplorer::FinalRelease()
		{
		}
		//end Delete CTangramOutLookPlusExplorer Object

		//begin CTangramOutLookPlusExplorerEvents:
		void CTangramOutLookPlusExplorer::OnActivate()
		{
			//if (::IsWindow(m_hWnd))
			//{
			//	::SetParent(theApp.m_pSolutionHelperWnd->m_hWnd, m_hWnd);
			//	theApp.m_pSolutionFrame->ModifyHost((LONGLONG)m_pTangramSolutionHostWnd->m_hWnd, (LONGLONG)m_hNavWnd);
			//	if (m_nNType != olModuleSolutions)
			//	{
			//		theApp.m_pSolutionFrame->Deatch();
			//		::ShowWindow(m_hButton, SW_SHOW);
			//		::ShowWindow(theApp.m_pSolutionHelperWnd->m_hWnd, SW_HIDE);
			//	}
			//	else
			//	{
			//		::ShowWindow(m_hButton, SW_HIDE);
			//		::ShowWindow(theApp.m_pSolutionHelperWnd->m_hWnd, SW_SHOW);
			//	}
			//}
			//theApp.m_pActiveOutlookExplorer = this;
		}

		void CTangramOutLookPlusExplorer::OnFolderSwitch()
		{
		}

		void CTangramOutLookPlusExplorer::OnBeforeFolderSwitch(IDispatch* NewFolder, VARIANT_BOOL* Cancel)
		{
			CComBSTR bstrScript(L"");
			CComPtr<OutLook::_NameSpace> pNameSpace;
			CComPtr<OutLook::_Folders> pFolders;
			//theApp.m_pApplication->get_Session(&pNameSpace);
			//m_pExplorer->get_Session(
			pNameSpace->get_Folders(&pFolders);
			long nCount = 0;
			pFolders->get_Count(&nCount);
			for (int i = 1; i <= nCount; i++)
			{
				CComPtr<OutLook::MAPIFolder> pFolder1;
				pFolders->Item(CComVariant(i), &pFolder1);
				if (pFolder1)
				{
					pFolder1->get_Name(&bstrScript);
					CComPtr<OutLook::_Folders> pFolders;
					pFolder1->get_Folders(&pFolders);
					long nCount = 0;
					pFolders->get_Count(&nCount);
					for (int i = 1; i <= nCount; i++)
					{
						CComPtr<OutLook::MAPIFolder> pFolder1;
						pFolders->Item(CComVariant(i), &pFolder1);
						if (pFolder1)
						{
							pFolder1->get_Name(&bstrScript);
						}
					}
				}
			}

			CComQIPtr<OutLook::MAPIFolder> pFolder(NewFolder);
			if (pFolder)
			{
				pFolder->get_Name(&bstrScript);
				CComPtr<_Items> pItems;
				pFolder->get_Items(&pItems);
				long nCount = 0;
				pItems->get_Count(&nCount);
			}
		}

		void CTangramOutLookPlusExplorer::OnViewSwitch()
		{
		}

		void CTangramOutLookPlusExplorer::OnBeforeViewSwitch(VARIANT NewView, VARIANT_BOOL* Cancel)
		{
		}

		void CTangramOutLookPlusExplorer::OnDeactivate()
		{
		}

		void CTangramOutLookPlusExplorer::OnSelectionChange()
		{
			//::PostMessage(m_hWnd, WM_SELCHANGE, 0, 0);
		}

		void CTangramOutLookPlusExplorer::OnClose()
		{
			//HRESULT hr = ((CTangramOutLookPlusNavigationPaneEvents_12*)this)->DispEventUnadvise(m_pNavigationPane);
			//hr = ((CTangramOutLookPlusExplorerEvents*)this)->DispEventUnadvise(m_pExplorer);
			//hr = ((CTangramOutLookPlusExplorerEvents_10*)this)->DispEventUnadvise(m_pExplorer);
			//if (theApp.m_nVer>0x000f)
			//	hr = ((CTangramOutLookPlusAccountSelectorEvents*)this)->DispEventUnadvise(m_pAccountSelector);

			//if (m_pNavigationGroups)
			//	hr = ((CTangramOutLookPlusNavigationGroupsEvents_12*)this)->DispEventUnadvise(m_pNavigationGroups);
			//if (m_pCurrentModule)
			//	m_pCurrentModule->Release();
		}
		//end CTangramOutLookPlusExplorerEvents

		//begin CTangramOutLookPlusAccountSelectorEvents:
		void CTangramOutLookPlusExplorer::OnSelectedAccountChange(Account* SelectedAccount)
		{
		}
		//end CTangramOutLookPlusAccountSelectorEvents

		//begin CTangramOutLookPlusExplorerEvents_10:
		void CTangramOutLookPlusExplorer::OnBeforeMaximize(VARIANT_BOOL* Cancel)
		{
		}

		void CTangramOutLookPlusExplorer::OnBeforeMinimize(VARIANT_BOOL* Cancel)
		{
		}

		void CTangramOutLookPlusExplorer::OnBeforeMove(VARIANT_BOOL* Cancel)
		{
		}

		void CTangramOutLookPlusExplorer::OnBeforeSize(VARIANT_BOOL* Cancel)
		{
		}

		void CTangramOutLookPlusExplorer::OnBeforeItemCopy(VARIANT_BOOL* Cancel)
		{
		}

		void CTangramOutLookPlusExplorer::OnBeforeItemCut(VARIANT_BOOL* Cancel)
		{
		}

		void CTangramOutLookPlusExplorer::OnBeforeItemPaste(VARIANT_BOOL* Cancel)
		{
		}

		void CTangramOutLookPlusExplorer::OnAttachmentSelectionChange()
		{
		}

		void CTangramOutLookPlusExplorer::OnInlineResponse(IDispatch* Item)
		{
			//if (theApp.m_hPWwbWnd)
			//{
			//	CString m_strUIScript = _T("");
			//	map<int, CString>::iterator it = theApp.m_mapItemName.find(OutLookPlusMailItem);
			//	if (it != theApp.m_mapItemName.end())
			//	{
			//		CString strKey = it->second;
			//		if (strKey != _T(""))
			//		{
			//			map<CString, CString>::iterator it2 = theApp.m_mapUIScript.find(strKey);
			//			if (it2 == theApp.m_mapUIScript.end())
			//			{
			//				CTangramXmlParse m_Parse;
			//				if (m_Parse.LoadXml(theApp.m_strConfigFile))
			//				{
			//					CTangramXmlParse* pParse = m_Parse.GetChild(strKey);
			//					if (pParse)
			//					{
			//						CTangramXmlParse* pParse2 = pParse->GetChild(_T("UIScript"));
			//						if (pParse2)
			//						{
			//							m_strUIScript = pParse2->xml();
			//							theApp.m_mapUIScript[strKey] = m_strUIScript;
			//						}
			//					}
			//				}
			//			}
			//			else
			//			{
			//				m_strUIScript = it2->second;
			//			}
			//		}
			//	}
			//	m_pOnlineItem = Item;
			//	m_pOnlineItem->AddRef();

			//	CComPtr<ITangramWindow> pWnd;
			//	CString strUrl = m_strUIScript;
			//	strUrl.Replace(_T("%s"), theApp.m_strUser);
			//	theApp.m_pTangramManager->AddToolBarForWnd((LONGLONG)theApp.m_hPWwbWnd, (LONGLONG)theApp.m_hWwbWnd, (IDispatch*)m_pOnlineItem, CComBSTR(strUrl), &m_pOnLineItemHostWindow);
			//	m_pOnLineItemHostWindow->AddRef();
			//	m_pOnLineItemHostWindow->put_Extender(m_pOnlineItem);
			//	theApp.m_hPWwbWnd = NULL;
			//}
		}

		void CTangramOutLookPlusExplorer::OnInlineResponseClose()
		{
			//if (m_pOnLineItemHostWindow)
			//{
			//	if (m_pOnlineItem)
			//	{
			//		m_pOnlineItem->Release();
			//		m_pOnlineItem = NULL;
			//	}
			//	m_pOnLineItemHostWindow->CloseFrame();
			//}
		}
		//end dCTangramOutLookPlusExplorerEvents_10

		//begin CTangramOutLookPlusNavigationPaneEvents_12:
		void CTangramOutLookPlusExplorer::OnModuleSwitch(NavigationModule* pCurrentModule)
		{
			CComQIPtr<_NavigationModule> _pNavigationModule((_NavigationModule*)pCurrentModule);
			if (m_pNavigationGroups)
			{
				HRESULT hr = ((CTangramOutLookPlusNavigationGroupsEvents_12*)this)->DispEventUnadvise(m_pNavigationGroups);
				m_pNavigationGroups->Release();
				m_pNavigationGroups = NULL;
				m_pCurrentModule->Release();
				m_pCurrentModule = _pNavigationModule.p;
				m_pCurrentModule->AddRef();
			}

			if (_pNavigationModule)
			{
				HRESULT hr = _pNavigationModule->get_NavigationModuleType(&m_nNType);
				CComBSTR bstrName("");
				switch (m_nNType)
				{
				case olModuleMail:
				{
					CComQIPtr<_MailModule> _pModule(m_pCurrentModule);
					if (_pModule)
						_pModule->get_NavigationGroups(&m_pNavigationGroups);
				}
				break;
				case olModuleCalendar:
				{
					CComQIPtr<_CalendarModule> _pModule(m_pCurrentModule);
					if (_pModule)
						_pModule->get_NavigationGroups(&m_pNavigationGroups);
				}
				break;
				case olModuleContacts:
				{
					CComQIPtr<_ContactsModule> _pModule(m_pCurrentModule);
					if (_pModule)
						_pModule->get_NavigationGroups(&m_pNavigationGroups);
				}
				break;
				case olModuleTasks:
				{
					CComQIPtr<_TasksModule> _pModule(m_pCurrentModule);
					if (_pModule)
						_pModule->get_NavigationGroups(&m_pNavigationGroups);
				}
				break;
				case olModuleJournal:
				{
					CComQIPtr<_JournalModule> _pModule(m_pCurrentModule);
					if (_pModule)
						_pModule->get_NavigationGroups(&m_pNavigationGroups);
				}
				break;
				case olModuleNotes:
				{
					CComQIPtr<_NotesModule> _pModule(m_pCurrentModule);
					if (_pModule)
						_pModule->get_NavigationGroups(&m_pNavigationGroups);
				}
				break;
				case olModuleFolderList:
				case olModuleShortcuts:
				case olModuleSolutions:
					break;
				}
				if (m_nNType == olModuleSolutions)
				{
					//if (::IsChild(m_hWnd, theApp.m_pSolutionHelperWnd->m_hWnd) == false)
					//{
					//	::SetParent(theApp.m_pSolutionHelperWnd->m_hWnd, m_hWnd);
					//	theApp.m_pSolutionFrame->ModifyHost((LONGLONG)m_pTangramSolutionHostWnd->m_hWnd, (LONGLONG)m_hNavWnd);
					//}
					//if (m_hNavWnd&&theApp.m_pSolutionFrame)
					//{
					//	if (theApp.m_pSolutionHelperWnd&&::IsWindow(theApp.m_pSolutionHelperWnd->m_hWnd))
					//		::ShowWindow(theApp.m_pSolutionHelperWnd->m_hWnd, SW_SHOW);
					//	if (m_hButton)
					//		::ShowWindow(m_hButton, SW_HIDE);
					//	theApp.m_pSolutionFrame->Attach();
					//}
				}
				else
				{
					//if (m_hNavWnd&&theApp.m_pSolutionFrame)
					//{
					//	if (theApp.m_pSolutionHelperWnd&&::IsWindow(theApp.m_pSolutionHelperWnd->m_hWnd))
					//		::ShowWindow(theApp.m_pSolutionHelperWnd->m_hWnd, SW_HIDE);
					//	if (m_hButton)
					//		::ShowWindow(m_hButton, SW_SHOW);
					//	theApp.m_pSolutionFrame->Deatch();
					//}
				}
				if (m_pNavigationGroups)
				{
					m_pNavigationGroups->AddRef();
					hr = ((CTangramOutLookPlusNavigationGroupsEvents_12*)this)->DispEventAdvise(m_pNavigationGroups);
				}
			}
		}
		//end CTangramOutLookPlusNavigationPaneEvents_12

		//begin CTangramOutLookPlusNavigationGroupsEvents_12:
		void CTangramOutLookPlusExplorer::OnSelectedChange(NavigationFolder* NavigationFolder)
		{
		}

		void CTangramOutLookPlusExplorer::OnNavigationFolderAdd(NavigationFolder* NavigationFolder)
		{
		}

		void CTangramOutLookPlusExplorer::OnNavigationFolderRemove()
		{
		}
		//end CTangramOutLookPlusNavigationGroupsEvents_12

		//New CTangramOutLookPlusInspector Object:
		CTangramOutLookPlusInspector::CTangramOutLookPlusInspector(void)
		{
			m_bReadOnly = false;
			m_strUIScript = _T("");
			m_strEventScripts = _T("");
			m_pWebDisp = NULL;
			//m_pHostWindow = NULL;
			m_hItemEditorWnd = NULL;
			m_nItemType = OutLookPlusContactItem;
		}

		CTangramOutLookPlusInspector::~CTangramOutLookPlusInspector(void)
		{
		}

		//begin IOutLookPlusItem:
		STDMETHODIMP CTangramOutLookPlusInspector::get_TangramManager(IDispatch** pVal)
		{
			//if (theApp.m_pTangramManager)
			//{
			//	*pVal = theApp.m_pTangramManager;
			//	(*pVal)->AddRef();
			//}
			return S_OK;
		}

		STDMETHODIMP CTangramOutLookPlusInspector::get_OutLookItem(IDispatch** pVal)
		{
			if (m_pDisp)
			{
				*pVal = m_pDisp;
				(*pVal)->AddRef();
			}

			return S_OK;
		}


		STDMETHODIMP CTangramOutLookPlusInspector::get_Application(IDispatch** pVal)
		{
			//*pVal = theApp.m_pApplication.p;
			//(*pVal)->AddRef();

			return S_OK;
		}

		STDMETHODIMP CTangramOutLookPlusInspector::get_UIScript(BSTR bstrKey, BSTR *pVal)
		{
			//if (m_pHostWindow)
			//{
			//	m_pHostWindow->get_TangramProperty(bstrKey, pVal);
			//	CString strKey = OLE2T(bstrKey);
			//	if (strKey.CompareNoCase(_T("UIScript")) == 0)
			//	{
			//		m_strUIScript = OLE2T(*pVal);
			//	}
			//}
			return S_OK;
		}

		STDMETHODIMP CTangramOutLookPlusInspector::put_UIScript(BSTR bstrKey, BSTR newVal)
		{
			//if (m_pHostWindow)
			//{
			//	m_pHostWindow->put_TangramProperty(bstrKey, newVal);
			//}
			return S_OK;
		}

		STDMETHODIMP CTangramOutLookPlusInspector::put_EventsScript(BSTR newVal)
		{
			m_strEventScripts = OLE2T(newVal);
			return S_OK;
		}
		//end IOutLookPlusItem

		//begin CTangramOutLookPlusItemEvents:
		void CTangramOutLookPlusInspector::OnOpen(VARIANT_BOOL* Cancel)
		{
			//theApp.m_pCurOpenItem = this;

			//HWND hWnd = theApp.m_hCurOutlookItemWnd;
			//if (hWnd == 0)
			//{
			//	return;
			//}

			//SubclassWindow(hWnd);
			//m_hItemEditorWnd = theApp.m_hWwbWnd;
			//theApp.m_hWwbWnd = NULL;
			//theApp.m_hCurOutlookItemWnd = NULL;
			//if (m_nItemType == OutLookPlusDistListItem)
			//{
			//	m_hItemEditorWnd = ::GetParent(theApp.m_hOutlookGridWnd);
			//}
			//map<int, CString>::iterator it = theApp.m_mapItemName.find(m_nItemType);
			//if (it != theApp.m_mapItemName.end())
			//{
			//	CString strKey = it->second;
			//	if (strKey != _T(""))
			//	{
			//		map<CString, CString>::iterator it2 = theApp.m_mapUIScript.find(strKey);
			//		if (it2 == theApp.m_mapUIScript.end())
			//		{
			//			CTangramXmlParse m_Parse;
			//			if (m_Parse.LoadXml(theApp.m_strConfigFile))
			//			{
			//				CTangramXmlParse* pParse = m_Parse.GetChild(strKey);
			//				if (pParse)
			//				{
			//					CTangramXmlParse* pParse2 = pParse->GetChild(_T("UIScript"));
			//					if (pParse2)
			//					{
			//						m_strUIScript = pParse2->xml();
			//						theApp.m_mapUIScript[strKey] = m_strUIScript;
			//					}
			//				}
			//			}
			//		}
			//		else
			//		{
			//			m_strUIScript = it2->second;
			//		}

			//		CString strUrl = m_strUIScript;
			//		strUrl.Replace(_T("%s"), theApp.m_strUser);
			//		HRESULT hr = theApp.m_pTangramManager->AddToolBarForWnd((LONGLONG)::GetParent(m_hItemEditorWnd), (LONGLONG)m_hItemEditorWnd, (IDispatch*)this, CComBSTR(strUrl), &m_pHostWindow);
			//		if (m_pHostWindow)
			//		{
			//			m_pHostWindow->put_Extender(m_pDisp);
			//			m_pHostWindow->AddRef();
			//			::PostMessage(m_hWnd, WM_TANGRAMDATA, 0, 1);
			//		}
			//	}
			//}
		};

		void CTangramOutLookPlusInspector::OnCustomAction(IDispatch* Action, IDispatch* Response, VARIANT_BOOL* Cancel)
		{
			CComQIPtr<OutLook::Action> pItem(Action);
			if (pItem)
			{
				int i = 0;
			}
		};

		void CTangramOutLookPlusInspector::OnCustomPropertyChange(BSTR Name)
		{
		};

		void CTangramOutLookPlusInspector::OnForward(IDispatch* Forward, VARIANT_BOOL* Cancel)
		{
			//×ª·¢
			CComQIPtr<_MailItem> pItem(Forward);
			if (pItem)
			{
				//CComBSTR bstrSubject(L"");
				//pItem->get_Subject(&bstrSubject);
				//pItem->get_HTMLBody(&bstrSubject);
				//* Cancel = true;
			}
		};

		void CTangramOutLookPlusInspector::OnClose(VARIANT_BOOL* Cancel)
		{
		};

		void CTangramOutLookPlusInspector::OnPropertyChange(BSTR Name)
		{
		};

		void CTangramOutLookPlusInspector::OnRead()
		{
		};

		void CTangramOutLookPlusInspector::OnReply(IDispatch* Response, VARIANT_BOOL* Cancel)
		{
			CComQIPtr<_MailItem> pItem(Response);
			if (pItem)
			{
				//CComBSTR bstrSubject(L"");
				//pItem->get_Subject(&bstrSubject);
				//pItem->get_HTMLBody(&bstrSubject);
				//* Cancel = true;
			}
		};

		void CTangramOutLookPlusInspector::OnReplyAll(IDispatch* Response, VARIANT_BOOL* Cancel)
		{
			CComQIPtr<_MailItem> pItem(Response);
			if (pItem)
			{
				//CComBSTR bstrSubject(L"");
				//pItem->get_Subject(&bstrSubject);
				//pItem->get_HTMLBody(&bstrSubject);
				//* Cancel = false;
			}
		};

		void CTangramOutLookPlusInspector::OnSend(VARIANT_BOOL* Cancel)
		{
		};

		void CTangramOutLookPlusInspector::OnWrite(VARIANT_BOOL* Cancel)
		{
		};

		void CTangramOutLookPlusInspector::OnBeforeCheckNames(VARIANT_BOOL* Cancel)
		{
		};

		void CTangramOutLookPlusInspector::OnAttachmentAdd(Attachment* Attachment)
		{
		};

		void CTangramOutLookPlusInspector::OnAttachmentRead(Attachment* Attachment)
		{
		};

		void CTangramOutLookPlusInspector::OnBeforeAttachmentSave(Attachment* Attachment, VARIANT_BOOL* Cancel)
		{
		};
		//end CTangramOutLookPlusItemEvents

		//begin CTangramOutLookPlusItemEvents_10:
		void CTangramOutLookPlusInspector::OnBeforeDelete(IDispatch* Item, VARIANT_BOOL* Cancel)
		{
		};

		void CTangramOutLookPlusInspector::OnAttachmentRemove(Attachment* Attachment)
		{
		};

		void CTangramOutLookPlusInspector::OnBeforeAttachmentAdd(Attachment* Attachment, VARIANT_BOOL* Cancel)
		{
		};

		void CTangramOutLookPlusInspector::OnBeforeAttachmentPreview(Attachment* Attachment, VARIANT_BOOL* Cancel)
		{
		};

		void CTangramOutLookPlusInspector::OnBeforeAttachmentRead(Attachment* Attachment, VARIANT_BOOL* Cancel)
		{
		};

		void CTangramOutLookPlusInspector::OnBeforeAttachmentWriteToTempFile(Attachment* Attachment, VARIANT_BOOL* Cancel)
		{
		};

		void CTangramOutLookPlusInspector::OnUnload()
		{
		};

		void CTangramOutLookPlusInspector::OnBeforeAutoSave(VARIANT_BOOL* Cancel)
		{
		};

		void CTangramOutLookPlusInspector::OnBeforeRead()
		{
		};

		void CTangramOutLookPlusInspector::OnAfterWrite()
		{
		};

		void CTangramOutLookPlusInspector::OnReadComplete(VARIANT_BOOL* Cancel)
		{
		};
		//end CTangramOutLookPlusItemEvents_10


		LRESULT CTangramOutLookPlusInspector::OnGetTangramData(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled*/)
		{
			switch (lParam)
			{
			case 0:
			{
				return (LRESULT)LPCTSTR(m_strUIScript);
			}
			break;
			case 1:
			{
				//if (m_pHostWindow)
				//{
				//	IDispatch* pDisp = NULL;
				//	HRESULT hr = m_pHostWindow->get_WebBrowser(&pDisp);
				//	if (hr == S_OK)
				//	{
				//		hr = pDisp->QueryInterface(IID_IWebBrowser2, (void**)m_pWebDisp);
				//		if (hr == S_OK)
				//		{
				//			m_pWebDisp->AddRef();
				//		}
				//	}
				//}
				return (LRESULT)this;
			}
			break;
			}
			return 0;
		}

		LRESULT CTangramOutLookPlusInspector::OnMouseActivate(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled*/)
		{
			LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
			//if (wParam)
			//	theApp.m_pTangramManager->SetHostFocus();
			return lRes;
		}

		LRESULT CTangramOutLookPlusInspector::OnShowWindow(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled*/)
		{
			LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
			if (wParam == 0)
			{
				HRESULT hr = ((CTangramOutLookPlusItemEvents*)this)->DispEventUnadvise(m_pDisp);
				hr = ((CTangramOutLookPlusItemEvents_10*)this)->DispEventUnadvise(m_pDisp);
				//if (m_pHostWindow)
				//{
				//	m_pHostWindow->put_Extender(NULL);
				//	m_pHostWindow->CloseFrame();
				//}
				m_pDisp->Release();
				m_pDisp = NULL;
			}
			else
			{
				//if (theApp.m_pCurOpenItem&&theApp.m_pCurOpenItem != this)
				//{
				//	HRESULT hr = ((CTangramOutLookPlusItemEvents*)theApp.m_pCurOpenItem)->DispEventUnadvise(theApp.m_pCurOpenItem->m_pDisp);
				//	hr = ((CTangramOutLookPlusItemEvents_10*)theApp.m_pCurOpenItem)->DispEventUnadvise(theApp.m_pCurOpenItem->m_pDisp);
				//	m_pDisp = theApp.m_pCurOpenItem->m_pDisp;
				//	hr = ((CTangramOutLookPlusItemEvents*)this)->DispEventAdvise(m_pDisp);
				//	hr = ((CTangramOutLookPlusItemEvents_10*)this)->DispEventAdvise(m_pDisp);
				//	m_pWebDisp = theApp.m_pCurOpenItem->m_pWebDisp;
				//	m_nItemType = theApp.m_pCurOpenItem->m_nItemType;
				//	if (::IsWindow(theApp.m_pCurOpenItem->m_hWnd))
				//		theApp.m_pCurOpenItem->UnsubclassWindow();
				//	delete theApp.m_pCurOpenItem;
				//	theApp.m_pCurOpenItem = NULL;
				//	map<int, CString>::iterator it = theApp.m_mapItemName.find(m_nItemType);
				//	if (it != theApp.m_mapItemName.end())
				//	{
				//		CString strKey = it->second;
				//		if (strKey != _T(""))
				//		{
				//			map<CString, CString>::iterator it2 = theApp.m_mapUIScript.find(strKey);
				//			if (it2 != theApp.m_mapUIScript.end())
				//				m_strUIScript = it2->second;
				//		}
				//	}
				//	m_pHostWindow->put_Extender(m_pDisp);
				//}
			}
			//CComQIPtr<_MailItem> pItem(m_pDisp);
			//if(pItem)
			//{ 
			//	CComPtr<_Inspector> pIns;
			//	pItem->get_GetInspector(&pIns);
			//	CComQIPtr<IHTMLDocument2> pDisp(m_pDisp);
			//		
			//	//pIns->get_HTMLEditor(&pDisp);
			//}
			return lRes;
		}

		//begin Delete CTangramOutLookPlusInspector:
		void CTangramOutLookPlusInspector::OnFinalMessage(HWND hWnd)
		{
			__super::OnFinalMessage(hWnd);
			delete this;
		}

		void CTangramOutLookPlusInspector::FinalRelease()
		{
		}
		//end Delete CTangramOutLookPlusInspector
	}
}
