// TangramTabCtrlWnd.cpp : 实现文件
//

#include "stdafx.h"
#include "Tangram.h"
#include "def.h"
#include "TangramTabCtrlWnd.h"

// CTabPageWnd 

CTabPageWnd::CTabPageWnd()
{

}

CTabPageWnd::~CTabPageWnd()
{
	ATLTRACE(_T("TabPageClose:%x\n"), this);
}


BEGIN_MESSAGE_MAP(CTabPageWnd, CWnd)
	//ON_WM_DESTROY()
END_MESSAGE_MAP()



// CTabPageWnd message handlers
void CTabPageWnd::PostNcDestroy()
{
	// TODO: Add your specialized code here and/or call the base class

	CWnd::PostNcDestroy();
	delete this;
}

// CTangramTabCtrlWnd

IMPLEMENT_DYNAMIC(CTangramTabCtrlWnd, CMFCTabCtrl)

CTangramTabCtrlWnd::CTangramTabCtrlWnd()
{
	m_nCurSelTab = -1;
}

CTangramTabCtrlWnd::~CTangramTabCtrlWnd()
{
	ATLTRACE(_T("delete CTangramTabCtrlWnd:%x\n"), this);
}


BEGIN_MESSAGE_MAP(CTangramTabCtrlWnd, CMFCTabCtrl)
	ON_MESSAGE(WM_CREATETABPAGE, OnCreatePage)
	ON_MESSAGE(WM_TABCHANGE, OnActivePage)
	ON_MESSAGE(WM_MODIFYTABPAGE, OnModifyPage)
	ON_MESSAGE(WM_TGM_SETACTIVEPAGE, OnActiveTangramObj)
	ON_MESSAGE(WM_TGM_SET_CAPTION, OnTgmSetCaption)
END_MESSAGE_MAP()


BOOL CTangramTabCtrlWnd::SetActiveTab(int iTab)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	int nOldIndex = m_nCurSelTab;
	m_nCurSelTab = iTab;
	BOOL bRet = CMFCTabCtrl::SetActiveTab(iTab);
	//int nIndex = GetCurSel();
	CWnd* pWnd = GetActiveWnd();
	if (pWnd)
	{
		CRect rc;
		pWnd->GetWindowRect(rc);
		CWnd* pPWnd = pWnd->GetParent();
		pPWnd->ScreenToClient(rc);
		::SetWindowPos(pWnd->m_hWnd, NULL, rc.left, rc.top, rc.Width(), rc.Height(), SWP_FRAMECHANGED | SWP_SHOWWINDOW | SWP_NOACTIVATE);
		Invalidate();
		::SendMessage(m_hWnd, WM_TABCHANGE, m_nCurSelTab, nOldIndex);
	}
	return bRet;// CMFCTabCtrl::SetActiveTab(iTab);
}

// CTangramTabCtrlWnd Message Handler


LRESULT CTangramTabCtrlWnd::OnActiveTangramObj(WPARAM wParam, LPARAM lParam)
{
	int iCount = GetTabsNum();
	if (m_pTangramNode)
	{
		CComPtr<ITangramNodeCollection> pCol;
		m_pTangramNode->get_ChildNodes(&pCol);
		long nCount = 0;
		pCol->get_NodeCount(&nCount);
		for (int i = 0; i<nCount; i++)
		{
			CComPtr<ITangramNode> pNode;
			pCol->get_Item(i, &pNode);
			HWND hWnd;
			pNode->get_Handle((LONGLONG*)&hWnd);
			::PostMessage(hWnd, WM_TGM_SETACTIVEPAGE, wParam, lParam);
		}
	}
	return 0;
}

LRESULT CTangramTabCtrlWnd::OnTgmSetCaption(WPARAM wParam, LPARAM lParam)
{
	int iIndex = (int)wParam;
	int iCount = GetTabsNum();

	//CXTPTabManagerItem* pItem = GetItem(iIndex);

	//pItem->SetCaption(CString((LPTSTR)lParam));

	return 0;
}

LRESULT CTangramTabCtrlWnd::OnCreatePage(WPARAM wParam, LPARAM lParam)
{
	HWND hPageWnd = (HWND)wParam;
	//CTabPageWnd* pWnd = new CTabPageWnd();
	//pWnd->SubclassWindow(hPageWnd);
	CWnd* pWnd = FromHandlePermanent(hPageWnd);
	if (pWnd == NULL)
	{
		pWnd = new CTabPageWnd();
		pWnd->SubclassWindow(hPageWnd);
	}
	AddTab(pWnd, (LPCTSTR)lParam, (UINT)GetTabsNum()-1);
	//AddTab(pView,LPCTSTR(pObj->m_strCaption),0);
	//if(nIndex==m_pTangramXMLObj->m_nActivePage)
	//{
	//	SetFocusedItem(pItem);
	//}
	//AddPage(pWnd,(LPCTSTR)lParam);
	//SendMessage(WM_TGM_SETACTIVEPAGE);

	InvalidateRect(NULL);
	//if(pWnd)
	//{
	//	pWnd->UnsubclassWindow();
	//	delete pWnd;
	//}
	return 0;
}

LRESULT CTangramTabCtrlWnd::OnActivePage(WPARAM wParam, LPARAM lParam)
{
	int nOldIndex = m_nCurSelTab;
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
	return 0;//CWnd::DefWindowProc(WM_TABCHANGE,wParam,lParam);;
}

LRESULT CTangramTabCtrlWnd::OnModifyPage(WPARAM wParam, LPARAM lParam)
{
	////AFX_MANAGE_STATE(AfxGetStaticModuleState());
	//HWND hPageWnd = (HWND)wParam;
	//int nViewID = (int)lParam;
	//CWnd* pOldWnd = CWnd::FromHandlePermanent(hPageWnd);
	//if (pOldWnd || true)
	//{
	//	///////////////////////Begin Dont Delete!////////////////////
	//	CXTPTabManagerItem* pItem = GetItem(nViewID);
	//	CString strCap = pItem->GetCaption();
	//	pItem->Remove();
	//	pItem = InsertItem(nViewID, (LPCTSTR)strCap, hPageWnd, 0);
	//	///////////////////////End Dont Delete!//////////////////////
	//}
	//else
	//{

	//	CWnd* pWnd = CWnd::FromHandle(GetItem(nViewID)->GetHandle());
	//	//CWnd* pWnd = GetPage(nViewID);
	//	pWnd->UnsubclassWindow();
	//	pWnd->SubclassWindow(hPageWnd);
	//	GetItem(nViewID)->SetHandle(hPageWnd);
	//}
	//SendMessage(WM_TGM_SETACTIVEPAGE);
	return 0;
}




void CTangramTabCtrlWnd::PostNcDestroy()
{
	CMFCTabCtrl::PostNcDestroy();
	delete this;
}
