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

// TangramTabbedFormView.cpp : implementation file
//

#include "stdafx.h"
#include "TangramTabbedView.h"

// CTangramTabbedView

//IMPLEMENT_DYNCREATE(CTangramTabbedView, CFormView)
IMPLEMENT_DYNCREATE_ATL(CTangramTabbedView, CFormView)

CTangramTabbedView::CTangramTabbedView()
: CFormView(CTangramTabbedView::IDD)
{
	m_pTangramNode = NULL;
}

CTangramTabbedView::~CTangramTabbedView()
{
}

void CTangramTabbedView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TAB, m_TangramTabCtrl);
}

BEGIN_MESSAGE_MAP(CTangramTabbedView, CFormView)
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB, &CTangramTabbedView::OnTcnSelchangeTab)
	ON_MESSAGE(WM_UPDATETANGRAMOBJ,OnUpdateTangramObj)
	ON_MESSAGE(WM_TGM_SETACTIVEPAGE,OnActiveTangramObj)
	ON_MESSAGE(WM_MODIFYTABPAGE,OnModifyPage)
	ON_MESSAGE(WM_ACTIVETABPAGE,OnActivePage)
	ON_MESSAGE(WM_TGM_SET_CAPTION,OnTgmSetCaption)
	ON_WM_SIZE()
	ON_WM_MOUSEACTIVATE()
	ON_WM_NCDESTROY()
	ON_WM_DESTROY()
END_MESSAGE_MAP()


// CTangramTabbedView diagnostics

#ifdef _DEBUG
void CTangramTabbedView::AssertValid() const
{
	//CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CTangramTabbedView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CTangramTabbedView message handlers

LRESULT CTangramTabbedView::OnActiveTangramObj(WPARAM wParam, LPARAM lParam)
{
	theApp.HostPosChanged(m_pTangramNode);

	//CTangramNode* pTangramNode = theApp.FindActiveNode(m_pTangramNode);
	//if (pTangramNode&&pTangramNode->m_nViewType == CLRCtrl&&theApp.m_pTangramCLRProxy)
	//{
	//	LRESULT hr = S_FALSE;
	//	hr = theApp.m_pTangramCLRProxy->CtrlMouseClick(pTangramNode->m_pDisp);
	//}
	return -1;
}

void CTangramTabbedView::OnTcnSelchangeTab(NMHDR *pNMHDR, LRESULT *pResult)
{
	int nSel = m_TangramTabCtrl.GetCurSel();
	TC_ITEM tcItem;
	tcItem.mask = TCIF_PARAM;
	m_TangramTabCtrl.GetItem(nSel,&tcItem);

	if(m_pTangramNode->m_pVisibleXMLObj)
	{
		m_pTangramNode->m_pVisibleXMLObj->m_pHostWnd->ShowWindow(SW_HIDE);
		m_pTangramNode->m_pVisibleXMLObj = (CTangramNode*)tcItem.lParam;
		m_pVisibleWnd = m_pTangramNode->m_pVisibleXMLObj->m_pHostWnd;
		m_pVisibleWnd->ShowWindow(SW_SHOW);
		if(m_pTangramNode->m_pVisibleXMLObj->m_nViewType & TangramView)
			m_pVisibleWnd->ModifyStyleEx(0,WS_EX_CLIENTEDGE);
		else
			m_pVisibleWnd->ModifyStyleEx(WS_EX_CLIENTEDGE,0);

		m_pVisibleWnd->BringWindowToTop();

		AdjustPageSize();

		theApp.HostPosChanged(m_pTangramNode);

		//CTangramNode* pTangramNode = theApp.FindActiveNode(m_pTangramNode);
		//if (pTangramNode&&pTangramNode->m_nViewType == CLRCtrl&&theApp.m_pTangramCLRProxy)
		//{
		//	LRESULT hr = S_FALSE;
		//	hr = theApp.m_pTangramCLRProxy->CtrlMouseClick(pTangramNode->m_pDisp);
		//}
	}
	*pResult = 0;
}

BOOL CTangramTabbedView::Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext)
{
	m_pTangramNode = theApp.m_pTangramNode;
	BOOL bRet =true;
	if(m_pTangramNode)
	{
		m_pTangramNode -> m_nViewType = TabbedWnd;
		m_pTangramNode -> m_pHostWnd = this;
		AFX_MANAGE_STATE(AfxGetStaticModuleState());
		bRet = CFormView::Create(lpszClassName, lpszWindowName, dwStyle, rect, pParentWnd, nID, pContext);
		OnInitialUpdate();
		ASSERT(::IsWindow(m_TangramTabCtrl.m_hWnd));
	}

	AdjustTabCtrlSize();

	CRect rtPage(GetPageSize());

	if(m_pTangramNode)
	{
		TElem ObjNode = m_pTangramNode->m_ObjItem;
		TElem item= m_pTangramNode->m_ObjItem;

		int nCol = item.clen;

		m_pTangramNode->m_nRows = 1;
		m_pTangramNode->m_nCols = nCol;

		if(m_pTangramNode->m_nActivePage<0||m_pTangramNode->m_nActivePage>nCol-1)
			m_pTangramNode->m_nActivePage=0;

		CWnd* pView = NULL;
		CTangramNode* pObj = NULL;

		TElem subitem;
		int j=0;
		for(subitem = item.begin(); subitem != item.end() && subitem.elem != NULL; subitem++)
		{
			CString strName = subitem.attr(TGM_NAME);
			strName.Trim();
			strName.MakeLower();
			pObj = new CComObject<CTangramNode>;
			pObj -> m_pRootObj = m_pTangramNode -> m_pRootObj;
			pObj->m_ObjItem = subitem;
			theApp.InitTangramNode(pObj);			
			m_pTangramNode->AddChildNode(pObj);

			pObj->m_pParentObj = m_pTangramNode;
			pObj->m_nCol = j;

			if(pObj->m_pObjClsInfo)
			{
				pContext->m_pNewViewClass = pObj->m_pObjClsInfo;
				///////////////////////////////////////////////////////////////////////////////////////////////
				TCITEM tcItem;
				tcItem.mask = TCIF_TEXT | TCIF_PARAM;
				tcItem.pszText = pObj->m_strCaption.GetBuffer();

				pView = (CWnd*)pObj->m_pObjClsInfo->CreateObject();
				UINT nID2 = WS_CHILD|WS_VISIBLE;
				if(j!=m_pTangramNode->m_nActivePage)nID2 = WS_CHILD;
				
				pView->Create(NULL,_T(""),nID2,rtPage,this,0,pContext);
				pView->ShowWindow(SW_HIDE);
				m_pTangramNode->m_pVisibleXMLObj = pObj; 

				tcItem.lParam = (LPARAM)pObj;
				m_TangramTabCtrl.InsertItem(j, &tcItem);
				///////////////////////////////////////////////////////////////////////////////////////////////
			}
			j++;
		}

		OnActivePage(m_pTangramNode->m_nActivePage,NULL);
	}
	return bRet;
}

LRESULT CTangramTabbedView::OnUpdateTangramObj(WPARAM wParam, LPARAM lParam)
{
	if(m_pTangramNode)
	{
		m_pTangramNode->m_nActivePage = m_TangramTabCtrl.GetCurSel();
		m_pTangramNode->m_ObjItem.elem->setAttribute(L"ActivePage",CComVariant(m_pTangramNode->m_nActivePage));		

		theApp.OnUpdateTangramObj(m_pTangramNode);
	}

	return (long)0;
}

void CTangramTabbedView::OnSize(UINT nType, int cx, int cy)
{
	CFormView::OnSize(nType, cx, cy);
	if(::IsWindow(m_TangramTabCtrl.m_hWnd))
	{
		AdjustTabCtrlSize(CRect(0,0,cx,cy));
		AdjustPageSize();
	}
}

LRESULT CTangramTabbedView::OnActivePage(WPARAM wParam, LPARAM lParam)
{
	m_TangramTabCtrl.SetCurSel(wParam);

	LRESULT lr;
	OnTcnSelchangeTab(NULL,&lr);
	int iIndex = (int)wParam;
	ITangramNode* pActiveNode = NULL;
	if (m_pTangramNode)
	{
		CComPtr<ITangramNodeCollection> pCol;
		m_pTangramNode->get_ChildNodes(&pCol);
		CComPtr<ITangramNode> pNode;
		pCol->get_Item(iIndex, &pNode);
		if (pNode)
		{
			pNode->ActiveTabPage(pNode);
		}
	}
	return 0;
}

LRESULT CTangramTabbedView::OnModifyPage(WPARAM wParam, LPARAM lParam)
{
	if(m_pTangramNode->m_pVisibleXMLObj)
	{
		m_pVisibleWnd = m_pTangramNode->m_pVisibleXMLObj->m_pHostWnd;
		m_pVisibleWnd->BringWindowToTop();
		AdjustPageSize();
	}
	return 0;
}

LRESULT CTangramTabbedView::OnTgmSetCaption(WPARAM wParam,LPARAM lParam)
{
	int iIndex = (int)wParam;
	LPTSTR lpStr = (LPTSTR)lParam;

	int iPageCount = m_TangramTabCtrl.GetItemCount();

	if (iIndex >= iPageCount) return 0;

	TCITEM tcItem = {0};


	tcItem.mask = TCIF_TEXT;
	tcItem.pszText = lpStr;

	m_TangramTabCtrl.SetItem(iIndex,&tcItem);

	return 0;

}

BOOL CTangramTabbedView::PreCreateWindow(CREATESTRUCT& cs)
{
	AfxRegisterWndClass(0);
	cs.style|=WS_CHILD|WS_CLIPSIBLINGS;

	return CFormView::PreCreateWindow(cs);
}

int CTangramTabbedView::OnMouseActivate(CWnd* pDesktopWnd, UINT nHitTest, UINT message)
{
	if(m_pTangramNode->m_pParentObj)
	{
		if (m_pTangramNode->m_pParentObj->m_nViewType & TabbedWnd)
			m_pTangramNode->m_pParentObj->m_pVisibleXMLObj = m_pTangramNode;
	}
	return CFormView::OnMouseActivate(pDesktopWnd, nHitTest, message);
}

RECT CTangramTabbedView::GetPageSize()
{	
	CRect rc;
	m_TangramTabCtrl.GetWindowRect(&rc);
	m_TangramTabCtrl.AdjustRect(false,&rc);
	ScreenToClient(&rc);
	return rc;
}

BOOL CTangramTabbedView::AdjustPageSize()
{
	return AdjustPageSize(GetPageSize());
}

BOOL CTangramTabbedView::AdjustTabCtrlSize()
{
	CRect rc;
	GetClientRect(rc);
	return AdjustTabCtrlSize(rc);
}

BOOL CTangramTabbedView::AdjustTabCtrlSize(RECT& rc)
{
	return m_TangramTabCtrl.SetWindowPos(NULL,2,2,rc.right-rc.left-4,rc.bottom-rc.top-4,
		SWP_NOACTIVATE|SWP_NOZORDER);
}

BOOL CTangramTabbedView::AdjustPageSize(RECT& rc)
{
	CRect rt(rc);

	if(m_pTangramNode->m_pVisibleXMLObj)
	{
		::SetWindowPos(m_pVisibleWnd->m_hWnd, NULL,
			rt.left,rt.top+2,rt.Width()-1,rt.Height()-2,SWP_SHOWWINDOW|SWP_FRAMECHANGED|SWP_NOREDRAW);
	}
	return true;
}

STDMETHODIMP CTangramTabbedView::Save()
{
	CString str;
	str.Format(_T("%d"),m_TangramTabCtrl.GetCurSel());
	m_pTangramNode->put_Attribute(L"ActivePage",CComBSTR(str));
	return S_OK;
}


void CTangramTabbedView::OnNcDestroy()
{
	__super::OnNcDestroy();
	delete m_pTangramNode;
}


void CTangramTabbedView::OnDestroy()
{
	m_pTangramNode->Fire_Destroy();
	__super::OnDestroy();
}
