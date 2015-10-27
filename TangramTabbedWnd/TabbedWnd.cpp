// TabbedWnd.cpp : implementation file
//

#include "stdafx.h"
#include "TabbedWnd.h"
#include "TabPageWnd.h"
//#define WM_RESIZETOPWND			WM_USER+138
#define WM_TGM_SETACTIVEPAGE	WM_USER+122

STDMETHODIMP CTangramTabbedWndDisp::Save()
{
	if(m_pTangramTabbedWnd)
	{
		CString str;
		str.Format(_T("%d"),m_pTangramTabbedWnd->GetCurSel());


		m_pTangramNode->put_Attribute(L"ActivePage",CComBSTR(str));
	}
	return S_OK;
}

// CTabbedWnd

CTabbedWnd::CTabbedWnd(ITangramNode* pNode)
{
	m_pTangramNode = pNode;
	m_pTangramTabWndDisp = NULL;
}

CTabbedWnd::~CTabbedWnd()
{
}


BEGIN_MESSAGE_MAP(CTabbedWnd, CXTPTabControl)
	ON_MESSAGE(WM_CREATETABPAGE,OnCreatePage)
	ON_MESSAGE(WM_TABCHANGE,OnActivePage)
	ON_MESSAGE(WM_MODIFYTABPAGE,OnModifyPage)
	ON_MESSAGE(WM_TGM_SETACTIVEPAGE,OnActiveTangramObj)
	ON_MESSAGE(WM_TGM_SET_CAPTION,OnTgmSetCaption)
END_MESSAGE_MAP()


// CTabbedWnd message handlers

void CTabbedWnd::OnItemClick(CXTPTabManagerItem* pItem)
{
	int nOldIndex = GetCurSel();;
	CXTPTabControl::OnItemClick(pItem);
	int nIndex = GetCurSel();

	CWnd* pWnd = CWnd::FromHandle(GetItem(nIndex)->GetHandle());
	CRect rc;
	pWnd->GetWindowRect(rc);
	CWnd* pPWnd = pWnd->GetParent();
	pPWnd->ScreenToClient(rc);
	::SetWindowPos(pWnd->m_hWnd,NULL,rc.left,rc.top,rc.Width(),rc.Height(),SWP_FRAMECHANGED|SWP_SHOWWINDOW|SWP_NOACTIVATE);
	Invalidate();
	::SendMessage(m_hWnd,WM_TABCHANGE,nIndex,nOldIndex);
	//if(m_pTangramNode)
	//{
	//	CComPtr<ITangramFrame> pFrame;
	//	m_pTangramNode->get_Frame(&pFrame);
	//	HWND hFrameWnd = NULL;
	//	pFrame->get_HWND((long*)&hFrameWnd);
	//	::SendMessage(hFrameWnd,WM_RESIZETOPWND,0,0);
	//}
}

LRESULT CTabbedWnd::OnActiveTangramObj(WPARAM wParam,LPARAM lParam)
{
	int iCount = GetItemCount();
	if(m_pTangramNode)
	{
		CComPtr<ITangramNodeCollection> pCol;
		m_pTangramNode->get_ChildNodes(&pCol);
		long nCount = 0;
		pCol->get_NodeCount(&nCount);
		for(int i = 0;i<nCount;i++)
		{
			CComPtr<ITangramNode> pNode;
			pCol->get_Item(i,&pNode);
			HWND hWnd;
			pNode->get_Handle((LONGLONG*)&hWnd);
			::PostMessage(hWnd,WM_TGM_SETACTIVEPAGE,wParam,lParam);
		}
	}
	return 0;
}

LRESULT CTabbedWnd::OnTgmSetCaption(WPARAM wParam,LPARAM lParam)
{
	int iIndex = (int)wParam;
	int iCount = GetItemCount();

	CXTPTabManagerItem* pItem = GetItem(iIndex);

	pItem->SetCaption(CString((LPTSTR)lParam));

	return 0;	
}

LRESULT CTabbedWnd::OnCreatePage(WPARAM wParam, LPARAM lParam)
{
	HWND hPageWnd = (HWND)wParam;
	//CTabPageWnd* pWnd = new CTabPageWnd();
	//pWnd->SubclassWindow(hPageWnd);

	CWnd* pWnd = FromHandlePermanent(hPageWnd);
	if(pWnd == NULL)
	{
		pWnd = new CTabPageWnd();
		pWnd->SubclassWindow(hPageWnd);
	}

	CXTPTabManagerItem* pItem = InsertItem(GetItemCount(), (LPCTSTR)lParam, pWnd->m_hWnd,0);
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

LRESULT CTabbedWnd::OnActivePage(WPARAM wParam, LPARAM lParam)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	int nOldIndex = GetCurSel();;
	int iIndex = (int)wParam;
	int iCount = GetItemCount();
	//if(iIndex<iCount)
	//	OnItemClick(GetItem(iIndex));
	if(m_pTangramNode)
	{
		//CComPtr<ITangramFrame> pFrame;
		//m_pTangramNode->get_Frame(&pFrame);
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

LRESULT CTabbedWnd::OnModifyPage(WPARAM wParam, LPARAM lParam)
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState());
	HWND hPageWnd = (HWND)wParam;
	int nViewID = (int)lParam;
	CWnd* pOldWnd = CWnd::FromHandlePermanent(hPageWnd);
	if(pOldWnd || true)
	{
		///////////////////////Begin Dont Delete!////////////////////
		CXTPTabManagerItem* pItem = GetItem(nViewID);
		CString strCap = pItem->GetCaption();
		pItem->Remove();
		pItem = InsertItem(nViewID, (LPCTSTR)strCap, hPageWnd,0);
		///////////////////////End Dont Delete!//////////////////////
	}
	else
	{
		
		CWnd* pWnd = CWnd::FromHandle(GetItem(nViewID)->GetHandle());
		pWnd->UnsubclassWindow();
		pWnd->SubclassWindow(hPageWnd);
		GetItem(nViewID)->SetHandle(hPageWnd);
	}
	SendMessage(WM_TGM_SETACTIVEPAGE);
	return 0;
}


void CTabbedWnd::PostNcDestroy()
{
	CXTPTabControl::PostNcDestroy();
	delete this;
}

BOOL CTabbedWnd::PreCreateWindow(CREATESTRUCT& cs)
{
	WNDCLASS wndClass;
	wndClass.style=CS_DBLCLKS; 
	wndClass.lpfnWndProc=AfxWndProc; 
	wndClass.cbClsExtra=0; 
	wndClass.cbWndExtra=0; 
	wndClass.hInstance=AfxGetInstanceHandle(); 
	wndClass.hIcon=0; 
	wndClass.hCursor=::LoadCursor(NULL,IDC_ARROW); 
	wndClass.hbrBackground=0; 
	wndClass.lpszMenuName=NULL; 
	wndClass.lpszClassName=_T("Tangram TabbedWindow Class");

	if(!AfxRegisterClass(&wndClass))
		return FALSE;

	return CXTPTabControl::PreCreateWindow(cs);
}

BOOL CTabbedWnd::Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext)
{
	if (!CWnd::Create(_T("Tangram TabbedWindow Class"), NULL, dwStyle, rect, pParentWnd, nID))
		return FALSE;

	//m_pDropTarget->Register(this);

	return TRUE;
}
