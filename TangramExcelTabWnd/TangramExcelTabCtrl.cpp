// //////////////////////////////////////////////////////////////////////////


#include "stdafx.h"
#include "TangramExcelTabCtrl.h"
#include "def.h"
#include "TabPageWnd.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


CTangramExcelTabCtrl* PASCAL GetParentTabViewContainer(CWnd* pWnd,
													  BOOL bOnlyActive/*=TRUE*/)
{
#if defined (_WINDLL)
#if defined (_AFXDLL)
	AFX_MANAGE_STATE(AfxGetAppModuleState());
#else
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
#endif
#endif

	ASSERT(pWnd!=NULL);
	HWND hWndParent=::GetParent(pWnd->GetSafeHwnd());
	if(hWndParent==NULL)
		return NULL;

	CTangramExcelTabCtrl* pContainer=
		(CTangramExcelTabCtrl*)CWnd::FromHandlePermanent(hWndParent);
	if(pContainer!=NULL)
	{
		ASSERT(::IsWindow(pContainer->m_hWnd));
		if(::IsWindow(pContainer->m_hWnd))
		{
			if (::GetWindowLongPtr(pContainer->m_hWnd, GWLP_USERDATA) ==
				ID_TABVIEWCONTAINER_SIGN)
			{
				if(!bOnlyActive || pContainer->IsActivePage(pWnd))
				{
					return pContainer;
				}
			}
		}
	}
	return NULL;
}

/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
// CTangramExcelTabCtrl
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

//IMPLEMENT_DYNCREATE(CTangramExcelTabCtrl,CWnd)

CTangramExcelTabCtrl::CTangramExcelTabCtrl()
{
	//m_pTangramNode = NULL;
	//m_bCreated = false;
	//m_pDoc= NULL;
	EmptyRects();
	m_nLastTabBtnAreaWidth=-1;
	m_nTabBtnAreaOrigin=0;

	m_arrUniqueIDs.Add(1);
	m_nActivePageIndex=-1;

	m_nPressedScrlBtn=NONE;
	m_bIsScrlBtnPressed=FALSE;
	m_nScrollPageTimer=-1;

	m_bIsSplitterPressed=FALSE;

	m_nLastTabBtnAreaWidth=ID_INITABBTNAREAWIDTH;

	if((HFONT)m_fontTabBtnText==NULL)
		m_fontTabBtnText.CreatePointFont(80,_T("MS Sans Serif"));
	if((HFONT)m_fontActiveTabBtnText==NULL && (HFONT)m_fontTabBtnText!=NULL)
	{
		LOGFONT lf;
		if(m_fontTabBtnText.GetLogFont(&lf)!=0)
		{
			lf.lfWeight=FW_BOLD;
			m_fontActiveTabBtnText.CreateFontIndirect(&lf);
		}
	}

	ASSERT((HFONT)m_fontTabBtnText!=NULL && (HFONT)m_fontActiveTabBtnText!=NULL);
}

CTangramExcelTabCtrl::~CTangramExcelTabCtrl()
{
}

BEGIN_MESSAGE_MAP(CTangramExcelTabCtrl, CWnd)
	//{{AFX_MSG_MAP(CTangramExcelTabCtrl)
	ON_MESSAGE(WM_CREATETABPAGE,OnCreatePage)
	ON_MESSAGE(WM_ACTIVETABPAGE,OnActivePage)
	ON_MESSAGE(WM_MODIFYTABPAGE,OnModifyPage)
	ON_MESSAGE(WM_TGM_SET_CAPTION,OnTgmSetCaption)
	//ON_MESSAGE(WM_UPDATETANGRAMOBJ,OnUpdateTangramObj)
	ON_WM_SIZE()
	ON_WM_PAINT()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_TIMER()
	ON_WM_SETCURSOR()
	ON_WM_ERASEBKGND()
	ON_WM_CANCELMODE()
	ON_WM_DESTROY()
	ON_WM_HSCROLL()
	ON_WM_VSCROLL()
	ON_WM_SETTINGCHANGE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////

BOOL CTangramExcelTabCtrl::Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, 
								 DWORD dwStyle, const RECT& rect, 
								 CWnd* pParentWnd, UINT nID,
								 CCreateContext* pContext/*=NULL*/)
{
	BOOL bRet = true;
	///////////////////////////////////////////////////////////////////////////////////////////////
	//AfxSetResourceHandle(theApp.m_hInstance);
	bRet = Create(pParentWnd,rect,dwStyle,nID);
	///////////////////////////////////////////////////////////////////////////////////////////////

	return bRet;
}


BOOL CTangramExcelTabCtrl::Create(CWnd* pParentWnd, CRect rect/*=CRect(0,0,0,0)*/,
								 DWORD dwStyle/*=WS_CHILD|WS_VISIBLE*/, 
								 UINT nID/*=AFX_IDW_PANE_FIRST*/)
{
	ASSERT(pParentWnd != NULL);
	ASSERT(dwStyle & WS_CHILD);
	//ASSERT(nID != 0);

	// the Windows scroll bar styles bits turn on the smart scrollbars
	DWORD dwCreateStyle=dwStyle&~(WS_HSCROLL|WS_VSCROLL);
	dwCreateStyle&=~WS_BORDER;

	dwCreateStyle|=WS_CHILD;

	// define our own window class 
	WNDCLASS wndClass;
	wndClass.style=CS_DBLCLKS; 
    wndClass.lpfnWndProc=AfxWndProc; 
    wndClass.cbClsExtra=0; 
    wndClass.cbWndExtra=0; 
    wndClass.hInstance=AfxGetInstanceHandle(); 
    wndClass.hIcon=0; 
    wndClass.hCursor=::LoadCursor(NULL,IDC_ARROW); 
    wndClass.hbrBackground=(HBRUSH)(COLOR_BTNFACE+1); 
    wndClass.lpszMenuName=NULL; 
	wndClass.lpszClassName=_T("TangramExcelWnd");
	
	if(!AfxRegisterClass(&wndClass))
		return FALSE;

	if (!CreateEx(WS_EX_CLIENTEDGE,wndClass.lpszClassName,NULL,
		dwCreateStyle,rect.left,rect.top,rect.Width(),rect.Height(),
		pParentWnd->m_hWnd,(HMENU)nID,NULL))
	{
		return FALSE;       // create invisible
	}

	// remove WS_EX_CLIENTEDGE style from parent window
	pParentWnd->ModifyStyleEx(WS_EX_CLIENTEDGE, 0, SWP_DRAWFRAME);

	// sign 
	::SetWindowLongPtr(GetSafeHwnd(), GWLP_USERDATA, ID_TABVIEWCONTAINER_SIGN);

	SetScrollStyle(0,false);

	CalcLayout();

	return TRUE;
}

BOOL CTangramExcelTabCtrl::SetTabWnd (int iTab,CWnd* m_pNewWnd) 
{
	if (iTab >= 0 && iTab < GetPageCount())
	{
		CWnd* m_pOldWnd = GetPage(iTab);
		DeletePage(m_pOldWnd);
		InsertPage(iTab,m_pNewWnd);
	
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

void CTangramExcelTabCtrl::SetActiveTab(int iTab)
{
	SetActivePageIndex(iTab);
}

BOOL CTangramExcelTabCtrl::RemoveTab (int iTab)
{
	return DeletePage(iTab,false);
}

void CTangramExcelTabCtrl::AddTab (CWnd* pNewWnd, LPCTSTR lpszName, UINT uiImageId)
{
	AddPage(pNewWnd,lpszName); 
}

void CTangramExcelTabCtrl::RecalcLayout ()
{
}

/////////////////////////////////////////////////////////////////////////////
// CTangramExcelTabCtrl command routing

BOOL CTangramExcelTabCtrl::OnCommand(WPARAM wParam, LPARAM lParam)
{
	if (CWnd::OnCommand(wParam,lParam))
		return TRUE;

	// route commands from the container to the parent frame window
	if(GetParentFrame()!=NULL)
		return GetParentFrame()->SendMessage(WM_COMMAND,wParam,lParam);
	else
		return FALSE;
}

BOOL CTangramExcelTabCtrl::OnNotify(WPARAM wParam, LPARAM lParam, LRESULT* pResult)
{
	if (CWnd::OnNotify(wParam,lParam,pResult))
		return TRUE;

	// route commands from the container to the parent frame window

	if(GetParentFrame()!=NULL)
	{
		*pResult=GetParentFrame()->SendMessage(WM_NOTIFY,wParam,lParam);
		return TRUE;
	}
	else
	{
		*pResult=0;
		return FALSE;
	}
}

//////////////////////////////////////////////////////////////////

void CTangramExcelTabCtrl::OnDestroy() 
{
	if(m_nScrollPageTimer!=-1)
	{
		KillTimer(m_nScrollPageTimer);
		m_nScrollPageTimer=-1;
	}
	CWnd::OnDestroy();
}


void CTangramExcelTabCtrl::OnSize(UINT nType, int cx, int cy) 
{
	CWnd::OnSize(nType, cx, cy);
	
	// TODO: Add your message handler code here
	if(nType!=SIZE_MINIMIZED && cx>0 && cy>0)
	{
		CalcLayout();

		CWnd* pWnd=GetActivePage();
		if(pWnd!=NULL)
		{
			ASSERT(::IsWindow(pWnd->m_hWnd));
			if(::IsWindow(pWnd->m_hWnd))
			{
				::SetWindowPos(pWnd->m_hWnd,NULL,m_rectPage.left,m_rectPage.top,m_rectPage.Width(),m_rectPage.Height(),SWP_DRAWFRAME|SWP_NOACTIVATE);
			}
		}

		RedrawContainer();
	}
	InvalidateRect(NULL);
}


void CTangramExcelTabCtrl::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	
	// TODO: Add your message handler code here

	CWnd* pWnd=GetActivePage();
	if(pWnd!=NULL)
	{
		CRect rect;
		pWnd->GetWindowRect(rect);
		ScreenToClient(rect);
		if(m_rectPage!=rect && !rect.IsRectEmpty())
		{
			CRgn rgnInTheory;
			CRgn rgnInReality;
			if(rgnInTheory.CreateRectRgnIndirect(m_rectPage) &&
				rgnInReality.CreateRectRgnIndirect(rect))
			{
				if(rgnInTheory.CombineRgn(&rgnInTheory,&rgnInReality,
					RGN_DIFF)!=ERROR)
				{
					CBrush* pBrush=NULL;
					CBrush brush;
					HBRUSH hBrush = (HBRUSH)::GetClassLongPtr(pWnd->m_hWnd,
						GCLP_HBRBACKGROUND);
					if(hBrush==NULL)
					{
						if(brush.CreateSolidBrush(::GetSysColor(COLOR_WINDOW)))
							pBrush=&brush;
						else
							pBrush=dc.GetCurrentBrush();
					}
					else
					{
						pBrush=CBrush::FromHandle(hBrush);
					}
					
					if(pBrush!=NULL)
						dc.FillRgn(&rgnInTheory,pBrush);
				}
			}
		}
	}

	DrawScrollButtons(&dc);
	DrawSplitter(&dc);
	DrawSizeBar(&dc);
	DrawTabBtnArea(&dc);
}


void CTangramExcelTabCtrl::OnMouseMove(UINT nFlags, CPoint point) 
{
	if(m_nPressedScrlBtn!=NONE)
	{
		int hitTest=HitTest(point);
		// send corresponding messages
		if(((int)m_nPressedScrlBtn==hitTest && !m_bIsScrlBtnPressed) ||
			((int)m_nPressedScrlBtn!=hitTest && m_bIsScrlBtnPressed))
		{
			m_bIsScrlBtnPressed=!m_bIsScrlBtnPressed;
			RedrawScrollButton(m_nPressedScrlBtn);
		}
	}
	else if(m_bIsSplitterPressed)
	{
		CPoint ptMoved=point;
		if(ptMoved.x>m_rectPage.right-ID_MINSCROLLBARWIDTH+ID_SPLITTERWIDTH/2)
			ptMoved.x=m_rectPage.right-ID_MINSCROLLBARWIDTH+ID_SPLITTERWIDTH/2;
		if(ptMoved.x<m_rectScrollToEndBtn.right+ID_SPLITTERWIDTH/2)
			ptMoved.x=m_rectScrollToEndBtn.right+ID_SPLITTERWIDTH/2;

		int nOldSplitterLeft=m_rectSplitter.left;
		m_rectSplitter.left=ptMoved.x-ID_SPLITTERWIDTH/2;
		if(nOldSplitterLeft!=m_rectSplitter.left)
		{
			m_rectSplitter.right=m_rectSplitter.left+ID_SPLITTERWIDTH;
			m_rectScrollBarHorz.left=m_rectSplitter.right;

			m_nLastTabBtnAreaWidth=m_rectSplitter.left-m_rectScrollToEndBtn.right;

			m_rectTabBtnArea.right+=m_rectSplitter.left-nOldSplitterLeft;
			if(m_rectTabBtnArea.right<m_rectTabBtnArea.left)
				m_rectTabBtnArea.right=m_rectTabBtnArea.left;

			if(::IsWindow(m_scrlBarHorz.GetSafeHwnd()))
				m_scrlBarHorz.MoveWindow(m_rectScrollBarHorz);
			RedrawSplitter();

			if(nOldSplitterLeft<m_rectSplitter.left)
			{	
				CRect rect=m_rectSplitter;
				rect.left=nOldSplitterLeft;
				rect.right=m_rectSplitter.left;
				RedrawWindow(rect);

				if(m_nTabBtnAreaOrigin<0)
				{
					ASSERT(GetPageCount()==m_arrTabBtnRects.GetSize());
					rect=m_arrTabBtnRects[GetPageCount()-1];
					rect+=m_rectTabBtnArea.TopLeft();
					if(rect.right+m_nTabBtnAreaOrigin<=m_rectTabBtnArea.right)
					{
						m_nTabBtnAreaOrigin+=
							m_rectSplitter.left-nOldSplitterLeft;
						m_nTabBtnAreaOrigin=
							m_nTabBtnAreaOrigin>0 ? 0 : m_nTabBtnAreaOrigin;
						RedrawTabBtnArea();
					}
				}

			}		
		}
	}

	CWnd::OnMouseMove(nFlags, point);
}


void CTangramExcelTabCtrl::OnLButtonDown(UINT nFlags, CPoint point) 
{
	CWnd::OnLButtonDown(nFlags, point);

	int hitTest=HitTest(point);
	if(hitTest>=0 && hitTest<GetPageCount() && hitTest!=GetActivePageIndex())
		SetActivePageIndex(hitTest);
	else
		StartTracking(point);
}


void CTangramExcelTabCtrl::OnLButtonUp(UINT nFlags, CPoint point) 
{
	StopTracking(point);
	CWnd::OnLButtonUp(nFlags,point);
}


void CTangramExcelTabCtrl::OnTimer(UINT_PTR nIDEvent)
{
	if((int)nIDEvent==m_nScrollPageTimer)
	{
		if(m_nPressedScrlBtn!=NONE && m_bIsScrlBtnPressed)
			ScrollPage(m_nPressedScrlBtn);
	}

	CWnd::OnTimer(nIDEvent);
}


BOOL CTangramExcelTabCtrl::OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message) 
{
	CPoint point;
	::GetCursorPos(&point);
	ScreenToClient(&point);
	int hitTest=HitTest(point);
	if(m_bIsSplitterPressed || hitTest==SPLITTER)
	{
		HCURSOR hCursor=AfxGetApp()->
			LoadCursor(MAKEINTRESOURCE(AFX_IDC_HSPLITBAR));
		if(hCursor==NULL)
			hCursor=::LoadCursor(NULL,IDC_SIZEWE);
		SetCursor(hCursor);
		return TRUE;
	}

	return CWnd::OnSetCursor(pWnd, nHitTest, message);
}


BOOL CTangramExcelTabCtrl::OnEraseBkgnd(CDC* pDC) 
{
	if(GetPageCount()==0)
	{
		CRect rect;
		pDC->GetClipBox(rect);
		pDC->FillSolidRect(rect,::GetSysColor(COLOR_BTNFACE));
	} 
	
	return TRUE;
}


void CTangramExcelTabCtrl::OnCancelMode() 
{
	CWnd::OnCancelMode();
	CPoint point;
	::GetCursorPos(&point);
	ScreenToClient(&point);
	StopTracking(point);
}


void CTangramExcelTabCtrl::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar) 
{
	ASSERT(pScrollBar==GetHorzScrollBar());
	
	CWnd* pWnd=GetActivePage();
	ASSERT(pWnd!=NULL);
	if(pWnd!=NULL)
	{
		ASSERT(::IsWindow(pWnd->m_hWnd));
		pWnd->SendMessage(WM_HSCROLL,MAKEWPARAM(nSBCode,nPos),
			(LPARAM)pScrollBar->m_hWnd);
	}
}

void CTangramExcelTabCtrl::OnVScroll(UINT nSBCode, UINT nPos, 
									CScrollBar* pScrollBar) 
{
	ASSERT(pScrollBar==GetVertScrollBar());
	
	CWnd* pWnd=GetActivePage();
	ASSERT(pWnd!=NULL);
	if(pWnd!=NULL)
	{
		ASSERT(::IsWindow(pWnd->m_hWnd));
		pWnd->SendMessage(WM_VSCROLL,MAKEWPARAM(nSBCode,nPos),
			(LPARAM)pScrollBar->m_hWnd);
	}
}

void CTangramExcelTabCtrl::OnSettingChange(UINT uFlags, LPCTSTR lpszSection)
{
	UNREFERENCED_PARAMETER(uFlags);
	UNREFERENCED_PARAMETER(lpszSection);

	CalcLayout();

	CWnd* pWnd=GetActivePage();
	if(pWnd!=NULL)
	{
		ASSERT(::IsWindow(pWnd->m_hWnd));
		if(::IsWindow(pWnd->m_hWnd))
			pWnd->MoveWindow(m_rectPage);
	}

	RedrawContainer();

	CWnd::OnSettingChange(uFlags, lpszSection);
}


//////////////////////////////////////////////////////////////////

BOOL CTangramExcelTabCtrl::InsertPage(int nIndex, 
									 CRuntimeClass* pClass, 
									 CCreateContext* pContext,
									 LPCTSTR lpszTitle/*=NULL*/)
{
	ASSERT_VALID(this);
	ASSERT(nIndex>=0 && nIndex<=GetPageCount());
	ASSERT(pClass!=NULL);
	ASSERT(pClass->IsDerivedFrom(RUNTIME_CLASS(CWnd)));
	ASSERT(AfxIsValidAddress(pClass,sizeof(CRuntimeClass),FALSE));

	if(!(nIndex>=0 && nIndex<=GetPageCount()) || pClass==NULL)
		return FALSE;

	BOOL bSendInitialUpdate=FALSE;

	CCreateContext context;
	if(pContext==NULL)
	{
		// if no context specified, generate one from the currently active
		// view if possible
		CView* pOldView=(CView*)GetActivePage();
		if(pOldView!=NULL && pOldView->IsKindOf(RUNTIME_CLASS(CView)))
		{
			// set info about last pane
			ASSERT(context.m_pCurrentFrame==NULL);
			context.m_pLastView=pOldView;
			context.m_pCurrentDoc=pOldView->GetDocument();
			if(context.m_pCurrentDoc!=NULL)
			{
				context.m_pNewDocTemplate=context.m_pCurrentDoc->
					GetDocTemplate();
			}
			bSendInitialUpdate=TRUE;
		}
		pContext=&context;
	}

	CWnd* pWnd;
	TRY
	{
		pWnd=(CWnd*)pClass->CreateObject();
		if(pWnd==NULL)
			AfxThrowMemoryException();
	}
	CATCH_ALL(e)
	{
		TRACE(_T("CTangramExcelTabCtrl::InsertPage: Out of memory inserting new page\n"));
		// Note: DELETE_EXCEPTION(e) not required
		return FALSE;
	}
	END_CATCH_ALL

	ASSERT_KINDOF(CWnd,pWnd);
	ASSERT(pWnd->m_hWnd==NULL);       // not yet created

	DWORD dwStyle=AFX_WS_DEFAULT_VIEW;
#if _MFC_VER < 0x0700
	if(afxData.bWin4)
#endif
		dwStyle&=~WS_BORDER;

	DWORD dwID=GetUniqueId();

	// Create with the right size
	if(!pWnd->Create(NULL,NULL,dwStyle,m_rectPage,this,dwID,pContext))
	{
		TRACE(_T("CTangramExcelTabCtrl::InsertPage: couldn't create new page\n"));
		// pWnd will be cleaned up by PostNcDestroy
		return FALSE;
	}

	if(InsertPage(nIndex,pWnd,lpszTitle))
	{
		CWnd* pWnd=GetPage(nIndex);
		ASSERT(pWnd!=NULL);
		ASSERT(::IsWindow(pWnd->m_hWnd));
		if(bSendInitialUpdate && pWnd->IsKindOf(RUNTIME_CLASS(CView)))
		{
			// send initial notification message
			pWnd->SendMessage(WM_INITIALUPDATE);
		}
		return TRUE;
	}

	return FALSE;
}

BOOL CTangramExcelTabCtrl::InsertPage(int nIndex, CWnd* pWnd, 
									 LPCTSTR lpszTitle/*=NULL*/)
{
	ASSERT_VALID(this);
	ASSERT(nIndex>=0 && nIndex<=GetPageCount());
	ASSERT(pWnd!=NULL);
	ASSERT(::IsWindow(pWnd->m_hWnd));

	if(!(nIndex>=0 && nIndex<=GetPageCount()) 
		|| pWnd==NULL || !::IsWindow(pWnd->m_hWnd))
	{
		return FALSE;
	}

	// set this container as parent window of the specified page
	pWnd->SetParent(this);

	PAGEINFO pi;
	pi.pWnd=pWnd;
	if(lpszTitle==NULL)
	{
		pWnd->GetWindowText(pi.sTitle);
		if(pi.sTitle.IsEmpty())
		{
			pi.sTitle.Format(_T("%d"),nIndex);
		}
	}
	else
	{
		pi.sTitle=lpszTitle;
	}

	m_arrPages.InsertAt(nIndex,pi);
	
	CalcTabBtnRects();

	SetActivePageIndex(nIndex);

	RedrawContainer();
	
	return TRUE;
}


BOOL CTangramExcelTabCtrl::DeletePage(CWnd* pWnd, 
									 BOOL bDestroy/*=TRUE*/) 
{
	ASSERT(pWnd!=NULL);
	ASSERT(IsPage(pWnd));
	int nIndex=-1;
	if(FindPage(pWnd,nIndex))
	{
		return DeletePage(nIndex,bDestroy);
	}
	return FALSE;
}


BOOL CTangramExcelTabCtrl::DeletePage(int nIndex, 
									 BOOL bDestroy/*=TRUE*/)
{
	ASSERT_VALID(this);
	ASSERT(nIndex>=0 && nIndex<GetPageCount());

	if(nIndex>=0 && nIndex<GetPageCount())
	{
		// if active page is being deleted - activate next
		int nActivePage=GetActivePageIndex();
		if(nActivePage==nIndex)
		{
			if(nActivePage==GetPageCount()-1)
				SetActivePageIndex(0);
			else
				SetActivePageIndex(GetPageCount()>1 ? nActivePage+1 : 0);
		}
		CWnd* pWnd=GetPage(nIndex);
		ASSERT(pWnd!=NULL);
		m_arrUniqueIDs.Add(pWnd->GetDlgCtrlID());
		if(bDestroy && ::IsWindow(pWnd->m_hWnd))
			VERIFY(pWnd->DestroyWindow());

		m_arrPages.RemoveAt(nIndex);

		nActivePage=GetActivePageIndex();
		if(nActivePage>=nIndex)
			m_nActivePageIndex--;

		CalcTabBtnRects();

		RedrawContainer();
	
		return TRUE;
	}

	return FALSE;
}


BOOL CTangramExcelTabCtrl::SetPageTitle(int nIndex, LPCTSTR lpszTitle) 
{
	ASSERT(nIndex>=0 && nIndex<GetPageCount());

	if(nIndex>=0 && nIndex<GetPageCount())
	{
		PAGEINFO& pi=m_arrPages[nIndex];
		if(pi.sTitle.Compare(lpszTitle)!=0)
		{
			pi.sTitle=lpszTitle;
			CalcTabBtnRects();
			CRect rect=m_arrTabBtnRects[nIndex];
			if(rect.left<m_rectTabBtnArea.right &&
				rect.right>m_rectTabBtnArea.right)
			{
				RedrawTabBtnArea();
			}
		}
		return TRUE;
	}
	
	return FALSE;
}


BOOL CTangramExcelTabCtrl::SetActivePageIndex(int nIndex)
{
	if(nIndex==m_nActivePageIndex)
	{
		return TRUE;
	}

	CWnd* pWndOld=GetActivePage();
	if(pWndOld!=NULL)
	{
		ASSERT(::IsWindow(pWndOld->m_hWnd));
		if(::IsWindow(pWndOld->m_hWnd))
		{
			pWndOld->ShowWindow(SW_HIDE);
			pWndOld->SetWindowPos(&wndBottom,0,0,0,0,SWP_NOACTIVATE|SWP_NOZORDER|SWP_NOREDRAW|SWP_NOMOVE|SWP_NOSIZE);
			PAGEINFO pi=m_arrPages[GetActivePageIndex()];
			m_nActivePageIndex=-1;
			UINT nBar=(pi.bHasScrollHorz&pi.bHasScrollVert ? SB_BOTH : 
				(pi.bHasScrollHorz ? SB_HORZ : 
				(pi.bHasScrollVert ? SB_VERT : 0)));
			if(nBar!=0)
			{
				pWndOld->ShowScrollBar(nBar,TRUE);
			}
		}
	}

	m_nActivePageIndex=nIndex;
	if(m_nActivePageIndex>=0 && m_nActivePageIndex<GetPageCount())
	{
		EnsureTabBtnVisible(m_nActivePageIndex);

		CWnd* pWnd=GetPage(m_nActivePageIndex);
		if(pWnd!=NULL)
		{
			ASSERT(::IsWindow(pWnd->m_hWnd));
			if(::IsWindow(pWnd->m_hWnd))
			{
				pWnd->ShowWindow(SW_SHOW);
				CRect rect;
				pWnd->GetWindowRect(rect);
				if(rect.Width()!=m_rectPage.Width() || 
					rect.Height()!=m_rectPage.Height())
				{
					pWnd->MoveWindow(m_rectPage);
				}
				else
				{
					pWnd->SendMessage(WM_SIZE,SIZE_RESTORED,
						MAKELPARAM(rect.Width(),rect.Height()));
				}

				// set the focus to the page
				CFrameWnd* pFrameWnd=(CFrameWnd*)GetParent();
				ASSERT(pFrameWnd!=NULL);
				if(pFrameWnd->IsKindOf(RUNTIME_CLASS(CFrameWnd)))
				{
					if(pWnd->IsKindOf(RUNTIME_CLASS(CView)))
					{
						pFrameWnd->SetActiveView((CView*)pWnd);
					}
					else
					{
						if(pWndOld!=NULL && 
							pWndOld->IsKindOf(RUNTIME_CLASS(CView)))
						{
							pFrameWnd->SetActiveView(NULL);
						}
						pWnd->SetFocus();
					}
				}
				else
				{
					pWnd->SetFocus();
				}

				RedrawTabBtnArea();
			}
		}
	}
	else
		return FALSE;
	CWnd* pWndActive = GetActivePage();

	pWndActive->SendMessage(WM_TGM_SETACTIVEPAGE);
	Invalidate();
	return TRUE;
}

void CTangramExcelTabCtrl::SetScrollStyle(DWORD dwScrollStyle, BOOL bForceToRebuild/*=FALSE*/) 
{
}

void CTangramExcelTabCtrl::CalcLayout()
{
	ASSERT(::IsWindow(GetSafeHwnd()));

	EmptyRects();

	CRect rect;
	GetClientRect(rect);

	if(rect.IsRectEmpty())
		return;

	CSize szScrollBtn=CSize(::GetSystemMetrics(SM_CXHSCROLL), 
		::GetSystemMetrics(SM_CYHSCROLL));

	// scroll buttons
	//
	m_rectScrollToStartBtn=CRect(rect.left,rect.bottom-szScrollBtn.cy,
		rect.left+szScrollBtn.cx,rect.bottom);

	m_rectScrollBackwardBtn=m_rectScrollToStartBtn;
	m_rectScrollBackwardBtn.OffsetRect(m_rectScrollToStartBtn.Width(),0);

	m_rectScrollForwardBtn=m_rectScrollBackwardBtn;
	m_rectScrollForwardBtn.OffsetRect(m_rectScrollBackwardBtn.Width(),0);

	m_rectScrollToEndBtn=m_rectScrollForwardBtn;
	m_rectScrollToEndBtn.OffsetRect(m_rectScrollForwardBtn.Width(),0);
	//
	/////////////////////////////////////////////

	// page rect
	m_rectPage=rect;
	//m_rectPage.right-=szScrollBtn.cx;
	m_rectPage.bottom-=szScrollBtn.cy;

	int nTabBtnAreaWidth=m_nLastTabBtnAreaWidth;
	if(m_rectPage.right<m_rectScrollToEndBtn.right+
		nTabBtnAreaWidth+ID_MINSCROLLBARWIDTH)
	{
		nTabBtnAreaWidth=m_rectPage.right-
			m_rectScrollToEndBtn.right-ID_MINSCROLLBARWIDTH;
	}

	// tab buttons area
	m_rectTabBtnArea=m_rectScrollToStartBtn;
	m_rectTabBtnArea.left=m_rectScrollToEndBtn.right;
	m_rectTabBtnArea.right=m_rectPage.right;//m_rectTabBtnArea.left+nTabBtnAreaWidth;
	if(m_rectTabBtnArea.right<m_rectTabBtnArea.left)
		m_rectTabBtnArea.right=m_rectTabBtnArea.left;

	// horz scroll bar
	m_rectScrollBarHorz=m_rectScrollToStartBtn;
	m_rectScrollBarHorz.left=m_rectPage.right;//m_rectSplitter.right;
	m_rectScrollBarHorz.right=m_rectPage.right;

	// vert scroll bar
	m_rectScrollBarVert=m_rectPage;
	m_rectScrollBarVert.left=m_rectPage.right;
	m_rectScrollBarVert.right=rect.right;

	// size bar
	m_rectSizeBar=rect;
	m_rectSizeBar.top=m_rectScrollBarVert.bottom;
	m_rectSizeBar.left=m_rectScrollBarHorz.right;

}

void CTangramExcelTabCtrl::CalcTabBtnRects()
{
	m_arrTabBtnRects.RemoveAll();

	CString sTitle;
	int nLeftSide=0;
	CRect rect;

	CClientDC dc(this);
	ASSERT((HFONT)m_fontActiveTabBtnText!=NULL);
	if((HFONT)m_fontActiveTabBtnText!=NULL)
		dc.SelectObject(&m_fontActiveTabBtnText);
	
	for(int nIndex=0; nIndex<GetPageCount(); nIndex++)
	{
		rect=m_rectTabBtnArea;
		rect-=rect.TopLeft();
		rect.right=0xffff;

		sTitle=GetPageTitle(nIndex);

		dc.DrawText(sTitle,rect,DT_CALCRECT|DT_LEFT|DT_SINGLELINE|DT_VCENTER);
		rect.OffsetRect(nLeftSide,0);
		rect.right+=2*ID_TABBTNOVERLAPSIZE+2*ID_TABBTNGAPSIZE;
		
		m_arrTabBtnRects.Add(rect);

		nLeftSide=rect.right-ID_TABBTNOVERLAPSIZE;
	}
}

void CTangramExcelTabCtrl::EmptyRects()
{
	m_rectScrollForwardBtn.SetRectEmpty();
	m_rectScrollBackwardBtn.SetRectEmpty();
	m_rectScrollToStartBtn.SetRectEmpty();
	m_rectScrollToEndBtn.SetRectEmpty();

	m_rectTabBtnArea.SetRectEmpty();

	m_rectScrollBarHorz.SetRectEmpty();
	m_rectScrollBarVert.SetRectEmpty();

	m_rectSplitter.SetRectEmpty();

	m_rectSizeBar.SetRectEmpty();

	m_rectPage.SetRectEmpty();
}

static BOOL g_bUpdatingScrollInfo=FALSE;
static BOOL g_bUpdatingScrollState=FALSE;

void CTangramExcelTabCtrl::DrawScrollButtons(CDC* pDC)
{
	ASSERT_VALID(pDC);

	// scroll to start button
	DrawButton(pDC,m_rectScrollToStartBtn,SCRLSTARTBTN);
	// scroll backward button
	DrawButton(pDC,m_rectScrollBackwardBtn,SCRLBACKWARDBTN);
	// scroll forward button
	DrawButton(pDC,m_rectScrollForwardBtn,SCRLFORWARDBTN);
	// scroll to end button
	DrawButton(pDC,m_rectScrollToEndBtn,SCRLENDBTN);
}

void CTangramExcelTabCtrl::DrawTabBtnArea(CDC* pDC)
{
	ASSERT(m_arrTabBtnRects.GetSize()==GetPageCount());

	pDC->IntersectClipRect(m_rectTabBtnArea);

	pDC->FillSolidRect(m_rectTabBtnArea,::GetSysColor(COLOR_BTNFACE));

	CPen pen(PS_SOLID,1,::GetSysColor(COLOR_WINDOWTEXT));
	CPen* pOldPen=pDC->SelectObject(&pen);
	pDC->MoveTo(m_rectTabBtnArea.left,m_rectTabBtnArea.top);
	pDC->LineTo(m_rectTabBtnArea.right,m_rectTabBtnArea.top);

	CBrush brush;
	brush.CreateSolidBrush(::GetSysColor(COLOR_BTNFACE));
	CBrush* pOldBrush=pDC->SelectObject(&brush);

	CFont* pOldFont=NULL;
	ASSERT((HFONT)m_fontTabBtnText!=NULL);
	if((HFONT)m_fontTabBtnText!=NULL)
		pOldFont=pDC->SelectObject(&m_fontTabBtnText);

	for(int nIndex=0; nIndex<GetPageCount(); nIndex++)
	{
		if(nIndex!=GetActivePageIndex())
			DrawTabButton(pDC,nIndex);
	}


	if(GetActivePageIndex()!=-1)
	{
		CBrush brushActive;
		brushActive.CreateSolidBrush(::GetSysColor(COLOR_WINDOW));
		pDC->SelectObject(&brushActive);

		ASSERT((HFONT)m_fontActiveTabBtnText!=NULL);
		if((HFONT)m_fontActiveTabBtnText!=NULL)
			pDC->SelectObject(&m_fontActiveTabBtnText);

		DrawTabButton(pDC,GetActivePageIndex());
	}

	if(pOldFont!=NULL)
		pDC->SelectObject(pOldFont);

	if(pOldBrush!=NULL)
		pDC->SelectObject(pOldBrush);

	if(pOldPen!=NULL)
		pDC->SelectObject(pOldPen);
}

void CTangramExcelTabCtrl::DrawSplitter(CDC* pDC)
{
}

void CTangramExcelTabCtrl::DrawSizeBar(CDC* pDC)
{
	ASSERT_VALID(pDC);

	CWnd* pParentWnd=GetParent();
	ASSERT(pParentWnd!=NULL);
	ASSERT(::IsWindow(pParentWnd->m_hWnd));
	if(pParentWnd->IsKindOf(RUNTIME_CLASS(CMDIChildWnd)) && 
		(pParentWnd->GetStyle()&WS_THICKFRAME)==WS_THICKFRAME &&
		(pParentWnd->GetStyle()&WS_MAXIMIZE)!=WS_MAXIMIZE)
		pDC->DrawFrameControl(m_rectSizeBar,DFC_SCROLL,DFCS_SCROLLSIZEGRIP);
	else
		pDC->FillSolidRect(m_rectSizeBar,::GetSysColor(COLOR_BTNFACE));
}

void CTangramExcelTabCtrl::DrawButton(CDC* pDC, CRect rect, 
									 HITTEST nButtonType) const
{
	ASSERT_VALID(pDC);

	pDC->FillSolidRect(rect,::GetSysColor(COLOR_BTNFACE));

	COLORREF clrTopLeft;
	COLORREF clrBottomRight;
	if(m_nPressedScrlBtn==nButtonType)
	{
		CPoint point;
		::GetCursorPos(&point);
		ScreenToClient(&point);
		if(rect.PtInRect(point))
		{
			clrBottomRight=::GetSysColor(COLOR_BTNFACE);
			clrTopLeft=::GetSysColor(COLOR_BTNFACE);
			rect.OffsetRect(1,1);
		}
		else
		{
			clrTopLeft=::GetSysColor(COLOR_BTNHILIGHT);
			clrBottomRight=::GetSysColor(COLOR_BTNSHADOW);
		}
	}
	else
	{
		clrTopLeft=::GetSysColor(COLOR_BTNHILIGHT);
		clrBottomRight=::GetSysColor(COLOR_BTNSHADOW);
	}

	pDC->Draw3dRect(rect,clrTopLeft,clrBottomRight);


	// draw arrows
	//
	rect.DeflateRect(2,2);
	CRect rectCopy=rect;

	POINT arrPoints[3];
	CRgn rgn;
	CBrush brush;
	brush.CreateSolidBrush(::GetSysColor(COLOR_WINDOWTEXT));

	switch(nButtonType)
	{
	// start
	case SCRLSTARTBTN:
		rectCopy.DeflateRect(rectCopy.Width()/4,rectCopy.Height()/6);
		rectCopy.left+=rectCopy.Width()/4-2;
		if(rectCopy.Height()%2==0)
			rectCopy.bottom+=1;
		rectCopy.right=rectCopy.left+2;
		pDC->FillSolidRect(rectCopy,::GetSysColor(COLOR_WINDOWTEXT));
	// backward
	case SCRLBACKWARDBTN:
		rectCopy=rect;
		rectCopy.DeflateRect(rectCopy.Width()/4,rectCopy.Height()/6);
		if(nButtonType==SCRLSTARTBTN)
			rectCopy.left+=rectCopy.Width()/4;
		else
			rectCopy.right-=rectCopy.Width()/4;
		if(rectCopy.Height()%2==0)
			rectCopy.bottom++;
		arrPoints[0].x=rectCopy.right;
		arrPoints[0].y=rectCopy.top-1;
		arrPoints[1].x=rectCopy.right;
		arrPoints[1].y=rectCopy.bottom;
		arrPoints[2].x=rectCopy.left;
		arrPoints[2].y=rectCopy.top+rectCopy.Height()/2;
		rgn.CreatePolygonRgn(arrPoints,3,WINDING);
		pDC->FillRgn(&rgn,&brush);
		break;
	// end
	case SCRLENDBTN:
		rectCopy.DeflateRect(rectCopy.Width()/4,rectCopy.Height()/6);
		rectCopy.right-=rectCopy.Width()/4-2;
		if(rectCopy.Height()%2==0)
			rectCopy.bottom+=1;
		rectCopy.left=rectCopy.right-2;
		pDC->FillSolidRect(rectCopy,::GetSysColor(COLOR_WINDOWTEXT));
	// forward
	case SCRLFORWARDBTN:
		rectCopy=rect;
		rectCopy.DeflateRect(rectCopy.Width()/4,rectCopy.Height()/6);
		if(nButtonType==SCRLENDBTN)
			rectCopy.right-=rectCopy.Width()/4;
		else
			rectCopy.left+=rectCopy.Width()/4;
		if(rectCopy.Height()%2==0)
			rectCopy.bottom++;
		arrPoints[0].x=rectCopy.right;
		arrPoints[0].y=rectCopy.top+rectCopy.Height()/2;
		arrPoints[1].x=rectCopy.left;
		arrPoints[1].y=rectCopy.top-1;
		arrPoints[2].x=rectCopy.left;
		arrPoints[2].y=rectCopy.bottom;
		rgn.CreatePolygonRgn(arrPoints,3,WINDING);
		pDC->FillRgn(&rgn,&brush);
		break;
	default:
		ASSERT(FALSE);
	}
}

void CTangramExcelTabCtrl::DrawTabButton(CDC* pDC, int nIndex) const
{
	ASSERT(nIndex>=0 && nIndex<GetPageCount());

	CRect rect=m_arrTabBtnRects[nIndex];
	rect+=m_rectTabBtnArea.TopLeft();
	rect.OffsetRect(m_nTabBtnAreaOrigin,0);
	if(rect.right>m_rectTabBtnArea.left && rect.left<m_rectTabBtnArea.right)
	{
		rect.bottom=m_rectTabBtnArea.bottom;
		
		POINT arrPoints[4];
		arrPoints[0].x=rect.left;
		arrPoints[0].y=rect.top;
		arrPoints[1].x=rect.left+ID_TABBTNOVERLAPSIZE;
		arrPoints[1].y=rect.bottom;
		arrPoints[2].x=rect.right-ID_TABBTNOVERLAPSIZE;
		arrPoints[2].y=rect.bottom;
		arrPoints[3].x=rect.right;
		arrPoints[3].y=rect.top;

		CPen penTop(PS_SOLID,1,::GetSysColor(COLOR_BTNHILIGHT));
		CPen penBottom(PS_SOLID,1,::GetSysColor(COLOR_BTNSHADOW));
		CPen* pOldPen=NULL;
		if(nIndex==GetActivePageIndex())
		{
			pDC->Polygon(arrPoints,4);

			pOldPen=pDC->SelectObject(&penTop);
			arrPoints[0].x++;
			pDC->MoveTo(arrPoints[0]);
			pDC->LineTo(arrPoints[3]);

			pDC->SelectObject(&penBottom);
			arrPoints[1].y--;
			arrPoints[2].y--;
			pDC->MoveTo(arrPoints[1]);
			pDC->LineTo(arrPoints[2]);
		}
		else
		{
			pDC->Polygon(arrPoints,4);

			pOldPen=pDC->SelectObject(&penBottom);
			arrPoints[1].y--;
			arrPoints[2].y--;
			pDC->MoveTo(arrPoints[1]);
			pDC->LineTo(arrPoints[2]);
			arrPoints[2].x--;
			arrPoints[3].x--;
			pDC->MoveTo(arrPoints[2]);
			pDC->LineTo(arrPoints[3]);

			pDC->SelectObject(&penTop);
			arrPoints[0].x+=2;
			arrPoints[0].y++;
			arrPoints[1].x++;
			pDC->MoveTo(arrPoints[0]);
			pDC->LineTo(arrPoints[1]);
		}
		if(pOldPen!=NULL)
			pDC->SelectObject(pOldPen);

		CString sTitle=GetPageTitle(nIndex);
		if(!sTitle.IsEmpty())
		{
			COLORREF oldColor=pDC->SetTextColor(::GetSysColor(COLOR_WINDOWTEXT));
			int nOldBkMode=pDC->SetBkMode(TRANSPARENT);
			pDC->DrawText(sTitle,rect,DT_CENTER|DT_SINGLELINE|DT_VCENTER);
			pDC->SetBkMode(nOldBkMode);
			pDC->SetTextColor(oldColor);
		}
	}
}

int CTangramExcelTabCtrl::HitTest(const CPoint& point) const
{
	if(m_rectSplitter.PtInRect(point))
		return SPLITTER;
	else if(m_rectScrollBarHorz.PtInRect(point))
		return SCROLLBARHORZ;
	else if(m_rectScrollBarVert.PtInRect(point))
		return SCROLLBARVERT;
	else if(m_rectScrollToStartBtn.PtInRect(point))
		return SCRLSTARTBTN;
	else if(m_rectScrollBackwardBtn.PtInRect(point))
		return SCRLBACKWARDBTN;
	else if(m_rectScrollForwardBtn.PtInRect(point))
		return SCRLFORWARDBTN;
	else if(m_rectScrollToEndBtn.PtInRect(point))
		return SCRLENDBTN;
	else if(m_rectTabBtnArea.PtInRect(point))
	{
		// test here for tab buttons
		for(int nIndex=0; nIndex<GetPageCount(); nIndex++)
		{
			CRect rect=m_arrTabBtnRects[nIndex];
			rect+=m_rectTabBtnArea.TopLeft();
			rect.OffsetRect(m_nTabBtnAreaOrigin,0);
			rect.bottom=m_rectTabBtnArea.bottom;
			if(rect.PtInRect(point))
				return nIndex;
		}

		return TABBTNAREA;
	}
	else if(m_rectSizeBar.PtInRect(point))
		return SIZEBAR;
	else if(m_rectPage.PtInRect(point))
		return PAGE;

	return NONE;
}

void CTangramExcelTabCtrl::RedrawScrollButton(HITTEST hitTest)
{
	switch(hitTest)
	{
	case SCRLSTARTBTN:
		RedrawWindow(m_rectScrollToStartBtn);
		break;
	case SCRLBACKWARDBTN:
		RedrawWindow(m_rectScrollBackwardBtn);
		break;
	case SCRLFORWARDBTN:
		RedrawWindow(m_rectScrollForwardBtn);
		break;
	case SCRLENDBTN:
		RedrawWindow(m_rectScrollToEndBtn);
		break;
	}
}

void CTangramExcelTabCtrl::ScrollPage(HITTEST nScrlBtn)
{
	BOOL m_bHasScrolled=FALSE;

	switch(nScrlBtn)
	{
	case SCRLSTARTBTN:
		if(CanScrollToStart())
		{
			m_nTabBtnAreaOrigin=0;
			m_bHasScrolled=TRUE;
		}
		break;
	case SCRLBACKWARDBTN:
		if(CanScrollBackward())
		{
			m_nTabBtnAreaOrigin+=ID_SCROLLTABBTNAREASTEP;
			m_nTabBtnAreaOrigin=
				m_nTabBtnAreaOrigin>0 ? 0 : m_nTabBtnAreaOrigin;
			m_bHasScrolled=TRUE;
		}
		break;
	case SCRLFORWARDBTN:
		if(CanScrollForward())
		{
			m_nTabBtnAreaOrigin-=ID_SCROLLTABBTNAREASTEP;
			CRect rect=m_arrTabBtnRects[GetPageCount()-1];
			rect+=m_rectTabBtnArea.TopLeft();
			if(rect.right+m_nTabBtnAreaOrigin<m_rectTabBtnArea.right)
				m_nTabBtnAreaOrigin=m_rectTabBtnArea.right-rect.right;
			m_bHasScrolled=TRUE;
		}
		break;
	case SCRLENDBTN:
		if(CanScrollToEnd())
		{
			CRect rect=m_arrTabBtnRects[GetPageCount()-1];
			rect+=m_rectTabBtnArea.TopLeft();
			m_nTabBtnAreaOrigin=m_rectTabBtnArea.right-rect.right;
			m_bHasScrolled=TRUE;
		}
		break;
	default:
		ASSERT(FALSE);
	}

	if(m_bHasScrolled)
		RedrawTabBtnArea();
}


void CTangramExcelTabCtrl::StartTracking(const CPoint& point)
{
	ASSERT(m_nPressedScrlBtn==NONE);
	m_nPressedScrlBtn=NONE;

	int hitTest=HitTest(point);
	if(hitTest==SCRLSTARTBTN || hitTest==SCRLBACKWARDBTN || 
		hitTest==SCRLFORWARDBTN || hitTest==SCRLENDBTN)
	{
		SetCapture();
		m_nPressedScrlBtn=(HITTEST)hitTest;
		m_bIsScrlBtnPressed=TRUE;
		RedrawScrollButton(m_nPressedScrlBtn);
		ScrollPage(m_nPressedScrlBtn);
		m_nScrollPageTimer=SetTimer(IDT_SCROLLPAGE_TIMER,
			ID_SCROLLPAGE_DELAY,NULL);
	}
	else if(hitTest==SPLITTER)
	{
		SetCapture();
		m_bIsSplitterPressed=TRUE;
	}
}

	
void CTangramExcelTabCtrl::StopTracking(const CPoint& point)
{
	if(::GetCapture()==GetSafeHwnd())
	{
		::ReleaseCapture();
	}

	if(m_nPressedScrlBtn!=NONE)
	{
		int hitTest=HitTest(point);
		if((int)m_nPressedScrlBtn==hitTest && m_nScrollPageTimer!=-1)
		{
			KillTimer(m_nScrollPageTimer);
			m_nScrollPageTimer=-1;
		}

		HITTEST nOldPressedScrlBtn=m_nPressedScrlBtn;
		m_nPressedScrlBtn=NONE;
		m_bIsScrlBtnPressed=FALSE;
		RedrawScrollButton(nOldPressedScrlBtn);
	}
	else if(m_bIsSplitterPressed)
	{
		m_bIsSplitterPressed=FALSE;
	}
}


DWORD CTangramExcelTabCtrl::GetUniqueId() 
{ 
	int nCount=m_arrUniqueIDs.GetSize();
	ASSERT(nCount>0);
	DWORD dwUniqueID=m_arrUniqueIDs[nCount-1]; 
	if(nCount==1)
	{
		m_arrUniqueIDs.SetAt(nCount-1,dwUniqueID+1);
	}
	return dwUniqueID; 
}


void CTangramExcelTabCtrl::EnsureTabBtnVisible(int nIndex, 
											  BOOL bPartialOk/*=FALSE*/)
{
	ASSERT(nIndex>=0 && nIndex<GetPageCount());

	if(m_rectTabBtnArea.Width()>0 && nIndex>=0 && nIndex<GetPageCount())
	{
		CRect rect=m_arrTabBtnRects[nIndex];
		rect+=m_rectTabBtnArea.TopLeft();
		rect.OffsetRect(m_nTabBtnAreaOrigin,0);
		if(rect.left>m_rectTabBtnArea.right || 
			rect.right<m_rectTabBtnArea.left ||
			(rect.left<m_rectTabBtnArea.left && 
			rect.right<m_rectTabBtnArea.right && !bPartialOk) ||
			(rect.left>m_rectTabBtnArea.left && 
			rect.right>m_rectTabBtnArea.right && !bPartialOk))
		{
			if(rect.left<m_rectTabBtnArea.left)
			{
				m_nTabBtnAreaOrigin+=m_rectTabBtnArea.left-rect.left;
				if(nIndex>0)
					m_nTabBtnAreaOrigin+=m_rectTabBtnArea.Width()/2<20 ?
						m_rectTabBtnArea.Width()/2 : 20;
			}
			else
			{
				m_nTabBtnAreaOrigin+=m_rectTabBtnArea.right-rect.right;
				if(nIndex<GetPageCount()-1)
					m_nTabBtnAreaOrigin-=m_rectTabBtnArea.Width()/2<20 ?
						m_rectTabBtnArea.Width()/2 : 20;
			}
			RedrawTabBtnArea();
		}
	}
}

void CTangramExcelTabCtrl::PostNcDestroy()
{
	// TODO: Add your specialized code here and/or call the base class

	CWnd::PostNcDestroy();
	delete this;
}

LRESULT CTangramExcelTabCtrl::OnCreatePage(WPARAM wParam, LPARAM lParam)
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

	AddPage(pWnd,(LPCTSTR)lParam);
	return 0;
}

LRESULT CTangramExcelTabCtrl::OnActivePage(WPARAM wParam, LPARAM lParam)
{
	SetActiveTab((int)wParam);
	//SetActivePageIndex(nIndex);

	//RedrawContainer();
	int iIndex = (int)wParam;
	if (m_pTangramNode)
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
	return 0;
}

LRESULT CTangramExcelTabCtrl::OnTgmSetCaption(WPARAM wParam, LPARAM lParam)
{
	SetPageTitle((int)wParam,(LPCTSTR)lParam);
	return 0;
}

BOOL CTangramExcelTabCtrl::PreCreateWindow(CREATESTRUCT& cs)
{
	AfxRegisterWndClass(0);

	return CWnd::PreCreateWindow(cs);
}

LRESULT CTangramExcelTabCtrl::OnModifyPage(WPARAM wParam, LPARAM lParam)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	HWND hPageWnd = (HWND)wParam;
	int nViewID = (int)lParam;
	CWnd* pOldWnd = CWnd::FromHandlePermanent(hPageWnd);
	if(pOldWnd)
	{
		BOOL bVisible = TRUE;
		if (m_arrPages[nViewID].pWnd != NULL)
		{
			bVisible = m_arrPages[nViewID].pWnd->IsWindowVisible();
		}

		m_arrPages[nViewID].pWnd = pOldWnd;
		if (bVisible)
		{
			pOldWnd->ShowWindow(SW_SHOW);
		}
		else
		{
			pOldWnd->ShowWindow(SW_HIDE);
		}
	}
	else
	{
		CWnd* pWnd = GetPage(nViewID);
		pWnd->UnsubclassWindow();
		pWnd->SubclassWindow(hPageWnd);
		//pWnd-
	}
	return 0;
}

