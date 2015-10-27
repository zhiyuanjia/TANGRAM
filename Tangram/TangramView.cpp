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

// TangramView.cpp : implementation file
//

#include "stdafx.h"
#include "TangramView.h"
#include "OfficePlus\ExcelPlus\TangramExcelAddin.h"
#include "OfficePlus\ExcelPlus\ExcelPlusWnd.h"

// CTangramWnd

IMPLEMENT_DYNCREATE(CTangramWnd, CWnd)

CTangramWnd::CTangramWnd()
{
	m_bCreateExternal	= false;
	m_bBKWnd			= false;
	m_pParentNode		= NULL;
	m_pTangramNode		= NULL;
	m_pOleInPlaceActiveObject = NULL;
}

CTangramWnd::~CTangramWnd()
{
}

BEGIN_MESSAGE_MAP(CTangramWnd, CWnd)
	ON_WM_DESTROY()
	ON_WM_ERASEBKGND()
	ON_WM_MOUSEACTIVATE()
	ON_MESSAGE(WM_TANGRAMMSG, OnGetTangramObj)
	ON_MESSAGE(WM_UPDATETANGRAMOBJ,OnUpdateTangramObj)
	ON_MESSAGE(WM_TGM_SETACTIVEPAGE,OnActiveTangramObj)
	ON_WM_WINDOWPOSCHANGED()
	ON_WM_MOUSEMOVE()
	//ON_WM_WINDOWPOSCHANGING()
END_MESSAGE_MAP()

// CTangramWnd diagnostics

#ifdef _DEBUG
void CTangramWnd::AssertValid() const
{
	///CView::AssertValid();
}

#ifndef _WIN32_WCE
void CTangramWnd::Dump(CDumpContext& dc) const
{
	CWnd::Dump(dc);
}
#endif
#endif //_DEBUG

 //CTangramWnd message handlers
BOOL CTangramWnd::Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext)
{
	m_pTangramNode = theApp.m_pTangramNode;
	m_pTangramNode -> m_nID = nID;
	m_pTangramNode -> m_pHostWnd = this;

	if(m_pTangramNode->m_strID.CompareNoCase(_T("HostView"))==0)
	{
		CTangramFrame* pWnd = m_pTangramNode->m_pFrame;
		pWnd->m_pBindingNode = m_pTangramNode;

		m_pTangramNode->m_pFrame->m_pWorkNode->m_pHostClientView = this;

		HWND hWnd = CreateWindow(L"Tangram Window Class", NULL, WS_CHILD | WS_VISIBLE, 0, 0, 0, 0, pParentWnd->m_hWnd, (HMENU)nID, AfxGetInstanceHandle(), NULL);
		BOOL bRet = SubclassWindow(hWnd);
		if(m_pTangramNode->m_pParentObj&&m_pTangramNode->m_pParentObj->m_nViewType==Splitter)
			ModifyStyleEx(WS_EX_WINDOWEDGE | WS_EX_CLIENTEDGE, 0);

		BSTR bstrVal = ::SysAllocString(L"");
		m_pTangramNode->get_Attribute(CComBSTR(_T("mdiclient")), &bstrVal);
		CString strVal = OLE2T(bstrVal);
		if (strVal.CompareNoCase(_T("true")) == 0)
		{
			BSTR bstrURL = ::SysAllocString(L"");
			m_pTangramNode->get_Attribute(CComBSTR(_T("url")), &bstrURL);
			CString strURL = OLE2T(bstrURL);
			::SysFreeString(bstrURL);
			if (strURL != _T(""))
			{
				if (strURL.Find(_T("//")) == -1 && ::PathFileExists(strURL) == false)
				{
					CString strPath = theApp.m_strAppPath + _T("TangramWebPage\\") + strURL;
					if (::PathFileExists(strPath))
						strURL = strPath;
				}

				m_bBKWnd = true;

				if (pWnd->m_pBKWnd == NULL)
				{
					pWnd->m_pBKWnd = new CTangramBKWnd();
					pWnd->m_pBKWnd->m_pTangramNode = m_pTangramNode;
					CComPtr<IDispatch> pDisp2;
					HRESULT hr = pDisp2.CoCreateInstance(CComBSTR(_T("shell.explorer.2")));
					CAxWindow m_wnd;
					m_wnd.Attach(pWnd->m_hWnd);
					CComPtr<IUnknown> pUnk;
					m_wnd.AttachControl(pDisp2, &pUnk);
					theApp._addObject(this, pUnk.Detach());
					pWnd->m_pBKWnd->SubclassWindow(::FindWindowEx(pWnd->m_hWnd, NULL, _T("Shell Embedding"), NULL));
					theApp.m_pTangramMDIClientBKWnd = pWnd->m_pBKWnd;
					m_pTangramNode->m_pDisp = pDisp2.Detach();
					CComQIPtr<IWebBrowser2> pWebDisp(m_pTangramNode->m_pDisp);
					if (pWebDisp)
					{
						CComQIPtr<IOleInPlaceActiveObject> pIOleInPlaceActiveObject(m_pTangramNode->m_pDisp);
						if (pIOleInPlaceActiveObject)
							m_pOleInPlaceActiveObject = pIOleInPlaceActiveObject.Detach();
						CComPtr<IAxWinAmbientDispatch> spHost;
						hr = m_wnd.QueryHost(&spHost);
						if (SUCCEEDED(hr))
						{
							hr = spHost->put_DocHostFlags(DOCHOSTUIFLAG_DIALOG  | DOCHOSTUIFLAG_DISABLE_HELP_MENU| DOCHOSTUIFLAG_SCROLL_NO | DOCHOSTUIFLAG_NO3DBORDER | DOCHOSTUIFLAG_ENABLE_FORMS_AUTOCOMPLETE | DOCHOSTUIFLAG_THEME);
							spHost->put_AllowContextMenu(FALSE);
						}
						pWebDisp->Navigate2(&CComVariant(strURL), &CComVariant(navNoReadFromCache | navNoWriteToCache), NULL, NULL, NULL);
						CTangram* pTangram = m_pTangramNode->m_pFrame->m_pTangram;
						if (pTangram)
							pTangram->m_nWebViewCount++;

						m_pTangramNode->m_pTangramNodeWBEvent = new CTangramNodeWBEvent(m_pTangramNode);
					}
					m_wnd.Detach();
				}
			}
		}
		::SysFreeString(bstrVal);
		return bRet ;
	}

	return theApp.Create(m_pTangramNode,lpszClassName, lpszWindowName, dwStyle, rect, pParentWnd, nID, pContext);
}

int CTangramWnd::OnMouseActivate(CWnd* pDesktopWnd, UINT nHitTest, UINT message)
{
	if (::IsWindow(theApp.m_hExcelEdit))
	{
		BOOL bEnable = ::EnableWindow(theApp.m_hExcelEdit, false);
		//CComQIPtr<IOleObject> spOleObj(m_pTangramNode->m_pDisp);
		//if (spOleObj)
		//{
		//	CComPtr<IOleClientSite> pSite;
		//	HRESULT hr = spOleObj->GetClientSite(&pSite);
		//	RECT rc;
		//	::GetClientRect(m_hWnd, &rc);
		//	hr = spOleObj->DoVerb(OLEIVERB_UIACTIVATE, NULL, pSite,0,m_hWnd, &rc);
		//}
	}
	if (m_pTangramNode&&m_pTangramNode->m_pTangram)
		m_pTangramNode->m_pTangram->Fire_NodeMouseActivate(m_pTangramNode);

	if((m_pTangramNode->m_nViewType==TabbedWnd || m_pTangramNode->m_nViewType==Splitter))
	{
		if (theApp.m_pTangramFrame != m_pTangramNode->m_pFrame)
			::SetFocus(m_hWnd);
		theApp.m_pTangramNode = m_pTangramNode;
		theApp.m_bWinFormActived = FALSE;
		return MA_ACTIVATE;
	}
		
	if(!m_bCreateExternal)
		Invalidate(TRUE);
	else
	{
		if((m_pTangramNode->m_nViewType!=TabbedWnd && m_pTangramNode->m_nViewType!=Splitter))
		{
			if (theApp.m_pTangramFrame != m_pTangramNode->m_pFrame||theApp.m_pTangramNode != m_pTangramNode)
				::SetFocus(m_hWnd);
		}
	}
	theApp.m_pTangramNode = m_pTangramNode;
	theApp.m_bWinFormActived = FALSE;
	if(m_pTangramNode->m_pParentObj)
	{
		if (m_pTangramNode->m_pParentObj->m_nViewType & TabbedWnd)
			m_pTangramNode->m_pParentObj->m_pVisibleXMLObj = m_pTangramNode;
	}
	theApp.m_pTangramFrame = m_pTangramNode->m_pFrame;

	//if (::IsWindow(theApp.m_hVSToolWnd))
	//{
	//	CString strKey = m_pTangramNode->m_pRootObj->m_strVSToolWndScript;
	//	if (strKey.CompareNoCase(theApp.m_strToolKey))
	//	{
	//		theApp.m_strToolKey = strKey;
	//		CComPtr<ITangramFrame> pFrame;
	//		CComPtr<ITangramNode> pNode;
	//		theApp.m_pTangramCore->GetTangramFrame((LONGLONG)theApp.m_hVSToolWnd, &pFrame);
	//		CString strPath = theApp.m_strAppPath;
	//		strPath += _T("ToolWndScript\\");
	//		strPath += strKey;
	//		pFrame->Extend(CComBSTR(strKey), strPath.AllocSysString(), &pNode);
	//	}
	//}
	return 1;
}

BOOL CTangramWnd::OnEraseBkgnd(CDC* pDC)
{
	if (m_pTangramNode->m_strID.CompareNoCase(_T("HostView")) == 0)
	{
		HWND hWnd = m_pTangramNode->m_pFrame->m_hWnd;
		if (::IsWindow(hWnd) && !::IsWindowVisible(hWnd))
		{
			theApp.HostPosChanged(m_pTangramNode);
			return TRUE;
		}
	}

	if (m_pTangramNode->m_strID.CompareNoCase(_T("hostview")) && (m_bCreateExternal == FALSE && m_pTangramNode->m_pDisp == NULL))
	{
		RECT rt;
		CBitmap bit;
		GetClientRect(&rt);
		bit.LoadBitmap(IDB_BITMAP_GRID);
		CBrush br(&bit);
		pDC->FillRect(&rt,&br);
		pDC->SetBkMode(TRANSPARENT);
		CString strInfo = _T("");
		strInfo = strInfo +
			_T("\n  ----Tangram Object Information----") +
			_T("\n  ") +
			_T("\n   Object Name:   ") + m_pTangramNode->m_strName +
			_T("\n   Object Caption:") + m_pTangramNode->m_strCaption +
			_T("\n  ") +
			_T("\n  ");

		pDC->SetTextColor(RGB(255,255,255));
		pDC->DrawText(strInfo,&rt,DT_LEFT);
	}
	return TRUE;
}

BOOL CTangramWnd::PreTranslateMessage(MSG* pMsg)
{
	if(m_pOleInPlaceActiveObject)
	{
		LRESULT hr = m_pOleInPlaceActiveObject->TranslateAccelerator((LPMSG)pMsg);
		if(hr==S_OK)
			return true;
		else
		{
			if (m_pTangramNode->m_nViewType == CLRCtrl)
			{
				VARIANT_BOOL bShiftKey = false;
				if (::GetKeyState(VK_SHIFT) < 0)  // shift pressed
					bShiftKey = true;
				hr = theApp.m_pTangramCLRProxy->ProcessCtrlMsg(::GetWindow(m_hWnd, GW_CHILD), bShiftKey?true:false);
				if(hr==S_OK)
					return true;
			}
			else
			{
				pMsg->hwnd = 0;
				return true;
			}
		}
	}
	if (IsDialogMessage(pMsg))
		return true;
	return CWnd::PreTranslateMessage(pMsg);
}

void CTangramWnd::OnDestroy()
{
	m_pTangramNode->Fire_Destroy();
	CWnd::OnDestroy();
}

void CTangramWnd::PostNcDestroy()
{
	CWnd::PostNcDestroy();
	delete m_pTangramNode;
	delete this;
}

LRESULT CTangramWnd::OnActiveTangramObj(WPARAM wParam, LPARAM lParam)
{
	if(m_pTangramNode->m_nViewType==CLRCtrl)
		::SetWindowLong(m_hWnd,GWL_STYLE,WS_CHILD|WS_VISIBLE|WS_CLIPCHILDREN|WS_CLIPSIBLINGS);
	
	theApp.HostPosChanged(m_pTangramNode);
	return -1;
}

LRESULT CTangramWnd::OnGetTangramObj(WPARAM wParam, LPARAM lParam)
{
	return (LRESULT)m_pTangramNode;
}

LRESULT CTangramWnd::OnUpdateTangramObj(WPARAM wParam, LPARAM lParam)
{
	theApp.OnUpdateTangramObj(m_pTangramNode);
	return (long)0;
}

LRESULT CTangramWnd::WindowProc(UINT message, WPARAM wParam, LPARAM lParam)
{
	if(m_bCreateExternal)
	{
		switch(message)
		{
		case WM_COMMAND:
		{
			WNDPROC* lplpfn = GetSuperWndProcAddr();
			LRESULT res = CallWindowProc(*lplpfn, m_hWnd, message, wParam, lParam);
			HWND hWnd = (HWND)lParam;
			if (::IsWindow(hWnd)&&m_pTangramNode)
			{
				::GetClassName(hWnd, theApp.m_szBuffer, MAX_PATH);
				m_pTangramNode->Fire_ControlNotify(m_pTangramNode, HIWORD(wParam), LOWORD(wParam), lParam, CComBSTR(theApp.m_szBuffer));
			}

			return res;
		}
		case WM_ACTIVATE:
		case WM_ERASEBKGND:
		case WM_SETFOCUS:
		case WM_CONTEXTMENU:
		case WM_LBUTTONDOWN:
		case WM_RBUTTONDOWN:
		case WM_LBUTTONUP:
		case WM_RBUTTONUP:
		case WM_LBUTTONDBLCLK:
			{
				WNDPROC* lplpfn = GetSuperWndProcAddr();
				return CallWindowProc(*lplpfn,m_hWnd,message, wParam, lParam);
			}
		case WM_MOUSEACTIVATE:
			{
				break;
			}
		case WM_SHOWWINDOW:
			{
				if (wParam&&m_pTangramNode->m_strURL!=_T(""))
				{
					CComQIPtr<IWebBrowser2> pWebCtrl(m_pTangramNode->m_pDisp);
					if(pWebCtrl)
					{
						if (m_pTangramNode->m_bWebInit == false)
						{
							pWebCtrl->Navigate2(&CComVariant(m_pTangramNode->m_strURL), &CComVariant(navNoReadFromCache | navNoWriteToCache), NULL, NULL, NULL);
							m_pTangramNode->m_bWebInit = true;
						}
					}
				}
				break;
			}
		}
	}

	return CWnd::WindowProc(message, wParam, lParam);
}


CTangramBKWnd::CTangramBKWnd(void)
{
	m_pTangramNode = NULL;
}

void CTangramBKWnd::OnFinalMessage(HWND hWnd)
{
	CWindowImpl<CTangramBKWnd, CWindow>::OnFinalMessage(hWnd);
	delete this;
}

LRESULT CTangramBKWnd::OnMouseActivate(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	if (m_pTangramNode)
	{
		theApp.m_pTangramNode = m_pTangramNode;
		theApp.m_pTangramFrame = m_pTangramNode->m_pFrame;
		theApp.m_bWinFormActived = FALSE;
	}
	return 1;
}

LRESULT CTangramBKWnd::OnWindowPosChanged(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	WINDOWPOS* lpwndpos = (WINDOWPOS*)lParam;
	lpwndpos->flags |= SWP_NOZORDER |SWP_NOACTIVATE | SWP_NOREDRAW;

	return DefWindowProc(uMsg, wParam, lParam);
}

void CTangramWnd::OnWindowPosChanged(WINDOWPOS* lpwndpos)
{

	CWnd::OnWindowPosChanged(lpwndpos);

	if (m_pTangramNode&&m_pTangramNode->m_nViewType == BlankView&&m_pTangramNode->m_hHostWnd)
	{
		::SetWindowPos(m_pTangramNode->m_hHostWnd, HWND_BOTTOM,lpwndpos->x,lpwndpos->y,lpwndpos->cx,lpwndpos->cy,SWP_NOACTIVATE|SWP_NOREDRAW);
	}
	if (m_pTangramNode->m_pHostFrame)
	{
		if (m_pParentNode == NULL)
		{
			HWND hWnd = ::GetParent(m_pTangramNode->m_pHostWnd->m_hWnd);
			CTangramNode* pParentNode = (CTangramNode*)::SendMessage(hWnd, WM_TANGRAMMSG, 0, 0);
			if (pParentNode&&pParentNode->m_nViewType == ViewType::TabbedWnd)
			{
				m_pParentNode = pParentNode;
			}

		}
		if (m_pParentNode)
		{
			//lpwndpos->flags = SWP_NOMOVE;
			lpwndpos->x -= ((CTangramFrame*)m_pTangramNode->m_pHostFrame)->m_x;
			lpwndpos->y -= ((CTangramFrame*)m_pTangramNode->m_pHostFrame)->m_y;
			::SetWindowPos(m_hWnd, HWND_BOTTOM,lpwndpos->x,lpwndpos->y,lpwndpos->cx,lpwndpos->cy,SWP_NOACTIVATE|SWP_NOREDRAW| SWP_NOSENDCHANGING);
		}
	}
}

void CTangramWnd::OnMouseLeave()
{
	if (::IsWindow(theApp.m_hExcelEdit))
	{
		TangramOfficePlus::ExcelPlus::CTangramExcelPlusWBWnd* pWnd = ((TangramOfficePlus::ExcelPlus::CTangramExcelAddin*)theApp.m_pHostCore)->m_pActiveWnd;
		if(pWnd&&::IsWindowVisible(pWnd->m_hWnd))
			::EnableWindow(theApp.m_hExcelEdit, true);
		else
			::EnableWindow(theApp.m_hExcelEdit, false);
	}
	CWnd::OnMouseLeave();
}

void CTangramWnd::OnMouseMove(UINT nFlags, CPoint point)
{
	if (::IsWindow(theApp.m_hExcelEdit))
	{
		theApp.EventTrack.hwndTrack = m_hWnd;
		TrackMouseEvent(&theApp.EventTrack);
		BOOL bEnable = ::EnableWindow(theApp.m_hExcelEdit, false);
	}
	CWnd::OnMouseMove(nFlags, point);
}
