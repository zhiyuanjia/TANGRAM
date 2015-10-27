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

// TangramSplitterWnd.cpp : implementation file
//

#include "stdafx.h"
#include <..\src\mfc\afximpl.h> // for AfxDeleteObject
#include "TangramSplitterWnd.h"

#ifndef AFX_CX_BORDER
#define AFX_CX_BORDER CX_BORDER 
#endif

#ifndef AFX_CY_BORDER
#define AFX_CY_BORDER CY_BORDER 
#endif
#define CX_BORDER   1
#define CY_BORDER   1

// CTangramSplitterWnd
enum HitTestValue
{
	noHit                   = 0,
	vSplitterBox            = 1,
	hSplitterBox            = 2,
	bothSplitterBox         = 3,        // just for keyboard
	vSplitterBar1           = 101,
	vSplitterBar15          = 115,
	hSplitterBar1           = 201,
	hSplitterBar15          = 215,
	splitterIntersection1   = 301,
	splitterIntersection225 = 525
};

IMPLEMENT_DYNCREATE_ATL(CTangramSplitterWnd, CSplitterWnd)

CTangramSplitterWnd::CTangramSplitterWnd()
{
	m_bFlatSplitter = TRUE;
	m_bCreated = false;
}

CTangramSplitterWnd::~CTangramSplitterWnd()
{
}

BEGIN_MESSAGE_MAP(CTangramSplitterWnd, CSplitterWnd)
	ON_WM_SIZE()
	ON_WM_PAINT()
	ON_WM_DESTROY()
	ON_WM_MOUSEMOVE()
	ON_WM_MOUSEACTIVATE()
	ON_MESSAGE(WM_TABCHANGE,OnActivePage)
	ON_MESSAGE(WM_UPDATETANGRAMOBJ,OnUpdateTangramObj)
	ON_MESSAGE(WM_TGM_SETACTIVEPAGE,OnActiveTangramObj)
END_MESSAGE_MAP()

// CTangramSplitterWnd diagnostics

#ifdef _DEBUG
void CTangramSplitterWnd::AssertValid() const
{
	//CSplitterWnd::AssertValid();
}

#ifndef _WIN32_WCE
void CTangramSplitterWnd::Dump(CDumpContext& dc) const
{
	CSplitterWnd::Dump(dc);
}
#endif
#endif //_DEBUG

BOOL CTangramSplitterWnd::OnNotify(WPARAM wParam, LPARAM lParam, LRESULT* pResult)
{
	return TRUE;
}

LRESULT CTangramSplitterWnd::OnActiveTangramObj(WPARAM wParam, LPARAM lParam)
{
	theApp.HostPosChanged(m_pTangramNode);
	return -1;
}
LRESULT CTangramSplitterWnd::OnActivePage(WPARAM wParam, LPARAM lParam)
{
	if(m_pTangramNode)
	{
		CComPtr<ITangramNodeCollection> pCol;
		m_pTangramNode->get_ChildNodes(&pCol);
		long nCount = 0;
		pCol->get_NodeCount(&nCount);
		for(int i = 0;i< nCount;i++)
		{
			CComPtr<ITangramNode> pNode;
			pCol->get_Item(i,&pNode);
			HWND hWnd;
			pNode->get_Handle((LONGLONG*)&hWnd);
			::SendMessage(hWnd,WM_TABCHANGE,wParam,lParam);
		}
	}
	return CWnd::DefWindowProc(WM_TABCHANGE,wParam,lParam);;
}

void CTangramSplitterWnd::StartTracking(int ht)
{
	ASSERT_VALID(this);
	if (ht == noHit)
		return;

	//theApp.m_bSplitterTracking = true;
	CTangramNode* pNode = m_pTangramNode->m_pFrame->m_pWorkNode;
	if(pNode->m_pHostClientView)
	{
		pNode->m_pHostWnd->ModifyStyle(WS_CLIPSIBLINGS,0);
	}

	GetInsideRect(m_rectLimit);

	if (ht >= splitterIntersection1 && ht <= splitterIntersection225)
	{
		// split two directions (two tracking rectangles)
		int row = (ht - splitterIntersection1) / 15;
		int col = (ht - splitterIntersection1) % 15;

		GetHitRect(row + vSplitterBar1, m_rectTracker);
		int yTrackOffset = m_ptTrackOffset.y;
		m_bTracking2 = TRUE;
		GetHitRect(col + hSplitterBar1, m_rectTracker2);
		m_ptTrackOffset.y = yTrackOffset;
	}
	else if (ht == bothSplitterBox)
	{
		// hit on splitter boxes (for keyboard)
		GetHitRect(vSplitterBox, m_rectTracker);
		int yTrackOffset = m_ptTrackOffset.y;
		m_bTracking2 = TRUE;
		GetHitRect(hSplitterBox, m_rectTracker2);
		m_ptTrackOffset.y = yTrackOffset;

		// center it
		m_rectTracker.OffsetRect(0, m_rectLimit.Height()/2);
		m_rectTracker2.OffsetRect(m_rectLimit.Width()/2, 0);
	}
	else
	{
		// only hit one bar
		GetHitRect(ht, m_rectTracker);
	}

	// steal focus and capture
	SetCapture();
	SetFocus();

	// make sure no updates are pending
	RedrawWindow(NULL, NULL, RDW_ALLCHILDREN | RDW_UPDATENOW);

	// set tracking state and appropriate cursor
	m_bTracking = TRUE;
	OnInvertTracker(m_rectTracker);
	if (m_bTracking2)
		OnInvertTracker(m_rectTracker2);
	m_htTrack = ht;
}

void CTangramSplitterWnd::StopTracking(BOOL bAccept)
{
	if (!m_bTracking)
		return;
	CTangramFrame* pFrame = m_pTangramNode->m_pFrame;
	CTangramNode* pNode = pFrame->m_pWorkNode;
	if (pNode->m_pHostClientView)
	{
		pNode->m_pHostWnd->ModifyStyle(0,WS_CLIPSIBLINGS);
		::InvalidateRect(pFrame->m_hWnd, NULL, false); 
		pNode->m_pHostWnd->Invalidate();
	}

	CSplitterWnd::StopTracking(bAccept);

	RecalcLayout();
	if(bAccept)
	{
		theApp.HostPosChanged(m_pTangramNode);
	}
}

void CTangramSplitterWnd::PostNcDestroy()
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	CSplitterWnd::PostNcDestroy();
	delete m_pTangramNode;
	delete this;
}

void CTangramSplitterWnd::RecalcLayout()
{
	if (GetDlgItem(IdFromRowCol(0, 0)) == NULL)
		return;
	if(m_nMaxCols >= 2)
	{
		int LimitWidth = 0;
		int LimitWndCount = 0;
		int Width = 0;
		RECT SplitterWndRect;
 		GetWindowRect(&SplitterWndRect);
		Width = SplitterWndRect.right - SplitterWndRect.left - m_nMaxCols * m_cxSplitterGap - LimitWidth + m_cxBorder * m_nMaxCols;
		if(Width < 0)
			return;
	}	
	
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	CSplitterWnd::RecalcLayout();
}

BOOL CTangramSplitterWnd::Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext)
{
	m_pTangramNode = theApp.m_pTangramNode;
	m_pTangramNode -> m_pHostWnd = this;
	m_pTangramNode -> m_nViewType = Splitter;
	m_pTangramNode->m_nID = nID;
	int r,g,b;
	CComBSTR bstrVal(L"");
	m_pTangramNode->get_Attribute(CComBSTR(L"lefttopcolor"),&bstrVal);
	if(!CString(bstrVal).IsEmpty())
	{
		_stscanf_s(CString(bstrVal),_T("RGB(%d,%d,%d)"),&r,&g,&b);
		rgbLeftTop = RGB(r,g,b);
	}
	else
	{
		rgbLeftTop = RGB(240,240,240);
	}

	bstrVal.Empty();
	m_pTangramNode->get_Attribute(CComBSTR(L"rightbottomcolor"),&bstrVal);
	if(!CString(bstrVal).IsEmpty())
	{
		_stscanf_s(CString(bstrVal),_T("RGB(%d,%d,%d)"),&r,&g,&b);
		rgbRightBottom = RGB(r,g,b);
	}
	else
	{
		rgbRightBottom = RGB(240,240,240);//RGB(71,104,158)
	}
	bstrVal.Empty();
	m_pTangramNode->get_Attribute(CComBSTR(L"middlecolor"),&bstrVal);
	if(!CString(bstrVal).IsEmpty())
	{
		_stscanf_s(CString(bstrVal),_T("RGB(%d,%d,%d)"),&r,&g,&b);
		rgbMiddle = RGB(r,g,b);
	}
	else
	{
		rgbMiddle = RGB(240,240,240);
	}
	bstrVal.Empty();
	m_pTangramNode->get_Attribute(CComBSTR(L"splitterwidth"),&bstrVal);
	if(!CString(bstrVal).IsEmpty())
	{
		m_cxSplitterGap = m_cySplitterGap = m_cxSplitter =  m_cySplitter = _ttoi(CString(bstrVal)); 

	}
	else
	{
		m_cxSplitterGap = m_cySplitterGap = m_cxSplitter =  m_cySplitter = 7; 
	}
	bstrVal.Empty();
	m_pTangramNode->get_Attribute(CComBSTR(L"borderwidth"),&bstrVal);
	if(!CString(bstrVal).IsEmpty())
	{
		m_cxBorder = m_cyBorder = _ttoi(CString(bstrVal));
	}
	else
	{
		m_cxBorder = m_cyBorder = 2;
	}
	bstrVal.Empty();
	m_pTangramNode->get_Attribute(CComBSTR(L"vmin"),&bstrVal);
	if(!CString(bstrVal).IsEmpty())
		Vmin = _ttoi(CString(bstrVal));
	else
		Vmin = 0;

	bstrVal.Empty();
	m_pTangramNode->get_Attribute(CComBSTR(L"vmax"),&bstrVal);
	if(!CString(bstrVal).IsEmpty())
	{
		Vmax = _ttoi(CString(bstrVal));
		if(Vmax <= 0)
			Vmax = 65535;
	}
	else
		Vmax = 65535;
	bstrVal.Empty();
	m_pTangramNode->get_Attribute(CComBSTR(L"hmin"),&bstrVal);
	if(!CString(bstrVal).IsEmpty())
		Hmin = _ttoi(CString(bstrVal));
	else
		Hmin = 0;

	bstrVal.Empty();
	m_pTangramNode->get_Attribute(CComBSTR(L"hmax"),&bstrVal);
	if(!CString(bstrVal).IsEmpty())
	{
		Hmax = _ttoi(CString(bstrVal));
		if(Hmax <= 0)
			Hmax = 65535;
	}
	else
		Hmax = 65535;

	if(m_pTangramNode->m_nStyle)
		m_bFlatSplitter=false;

	m_pTangramNode->m_nRows = m_pTangramNode->m_ObjItem.attrInt(TGM_ROWS,0);
	m_pTangramNode->m_nCols = m_pTangramNode->m_ObjItem.attrInt(TGM_COLS,0);

	bColMoving = 0;
	bRowMoving = 0;

	if (nID == 0)
		nID = 1;

	if(CreateStatic(pParentWnd,m_pTangramNode->m_nRows,m_pTangramNode->m_nCols,dwStyle,nID))
	{
		CString strWidth = m_pTangramNode->m_ObjItem.attr(TGM_WIDTH);
		strWidth += _T(",");
		CString strHeight = m_pTangramNode->m_ObjItem.attr(TGM_HEIGHT);
		strHeight += _T(",");

		int nWidth,nHeight,nPos;
		CString strW,strH, strOldWidth,strName;

		strOldWidth = strWidth;
		long nSize = m_pTangramNode->m_ObjItem.clen;
		TElem subitem =  m_pTangramNode->m_ObjItem.begin();
		int nIndex = 0;
		for(int i = 0; i<m_pTangramNode->m_nRows; i++)
		{	
			nPos = strHeight.Find(_T(","));
			strH = strHeight.Left(nPos);
			strHeight = strHeight.Mid(nPos+1);
			nHeight = _ttoi(strH);

			strWidth = strOldWidth;

			for(int j = 0; j<m_pTangramNode->m_nCols; j++)
			{
				nPos = strWidth.Find(_T(","));
				strW = strWidth.Left(nPos);
				strWidth = strWidth.Mid(nPos+1);
				nWidth = _ttoi(strW);
				strName = subitem.attr(TGM_NAME);
				strName.Trim();
				strName.MakeLower();
				CTangramNode* pObj = new CComObject<CTangramNode>;
				pObj -> m_pRootObj = m_pTangramNode -> m_pRootObj;
				if (nIndex<nSize)
					pObj->m_ObjItem = subitem;

				pObj->m_pParentObj = m_pTangramNode;
				pObj->m_pFrame = m_pTangramNode->m_pFrame;

				m_pTangramNode->AddChildNode(pObj);
				theApp.InitTangramNode(pObj);

				if(pObj->m_pObjClsInfo)
				{
					pObj->m_nRow = i;
					pObj->m_nCol = j;

					pObj->m_nWidth = nWidth;
					pObj->m_nHeigh = nHeight;
					CreateView(pObj->m_nRow,pObj->m_nCol,pObj->m_pObjClsInfo,CSize(pObj->m_nWidth,pObj->m_nHeigh),pContext);
				}
				nIndex++;
				if (nIndex<nSize)
					subitem++;
			}
		}
		SetWindowPos(NULL,rect.left,rect.top,rect.right-rect.left,rect.bottom-rect.top, SWP_NOZORDER | SWP_NOREDRAW);
		if (m_pTangramNode->m_pTangram)
			m_pTangramNode->m_pTangram->Fire_NodeCreated(m_pTangramNode);

		SetWindowText(m_pTangramNode->m_strWebObjName);
		m_bCreated = true;
		return true;
	}
	return false;
}

LRESULT CTangramSplitterWnd::OnUpdateTangramObj(WPARAM wParam, LPARAM lParam)
{
	if(m_pTangramNode)
		theApp.OnUpdateTangramObj(m_pTangramNode);
	return (long)0;
}
void CTangramSplitterWnd::OnPaint()
{
	if( m_bFlatSplitter )
	{
		ASSERT_VALID(this);
		CPaintDC dc(this);

		CRect rectClient;
		GetClientRect(&rectClient);

		CRect rectInside;
		GetInsideRect(rectInside);
		rectInside.InflateRect(4,4);


		// draw the splitter boxes
		if (m_bHasVScroll && m_nRows < m_nMaxRows)
		{
			OnDrawSplitter(&dc, splitBox, CRect(rectInside.right, rectClient.top,rectClient.right, rectClient.top + m_cySplitter));
		}

		if (m_bHasHScroll && m_nCols < m_nMaxCols)
		{
			OnDrawSplitter(&dc, splitBox,
				CRect(rectClient.left, rectInside.bottom,
				rectClient.left + m_cxSplitter, rectClient.bottom));
		}

		// extend split bars to window border (past margins)
		DrawAllSplitBars(&dc, rectInside.right, rectInside.bottom);
		// draw splitter intersections (inside only)
		GetInsideRect(rectInside);
		dc.IntersectClipRect(rectInside);
		CRect rect;
		rect.top = rectInside.top;
		for (int row = 0; row < m_nRows - 1; row++)
		{
			rect.top += m_pRowInfo[row].nCurSize + m_cyBorderShare;
			rect.bottom = rect.top + m_cySplitter;
			rect.left = rectInside.left;
			for (int col = 0; col < m_nCols - 1; col++)
			{
				rect.left += m_pColInfo[col].nCurSize + m_cxBorderShare;
				rect.right = rect.left + m_cxSplitter;
				OnDrawSplitter(&dc, splitIntersection, rect);
				rect.left = rect.right + m_cxBorderShare;
			}
			rect.top = rect.bottom + m_cxBorderShare;
		}
	}
	else 
	{
		CSplitterWnd::OnPaint();
	}
}

void CTangramSplitterWnd::OnDrawSplitter(CDC* pDC, ESplitType nType, const CRect& rectArg)
{
	if( m_bFlatSplitter )
	{
		if (pDC == NULL)
		{
			RedrawWindow(rectArg, NULL, RDW_INVALIDATE|RDW_NOCHILDREN);
			return;
		}
		ASSERT_VALID(pDC);
	  ;

		// otherwise, actually draw
		CRect rect = rectArg;
		switch (nType)
		{
		case splitBorder:
			//ASSERT(afxData.bWin4);
			pDC->Draw3dRect(rect, rgbLeftTop, rgbRightBottom);
			rect.InflateRect(-AFX_CX_BORDER, -AFX_CY_BORDER);
			pDC->Draw3dRect(rect, rgbLeftTop, rgbRightBottom);
			
			return;

		case splitIntersection:
			
			//ASSERT(afxData.bWin4);
			break;

		case splitBox:
			//if (afxData.bWin4)
			{
				pDC->Draw3dRect(rect,  rgbLeftTop, rgbRightBottom);
				rect.InflateRect(-AFX_CX_BORDER, -AFX_CY_BORDER);
				pDC->Draw3dRect(rect, rgbLeftTop, rgbRightBottom);
				rect.InflateRect(-AFX_CX_BORDER, -AFX_CY_BORDER);
				break;
			}
			// fall through...
		case splitBar:
			
			{
				if((rect.bottom - rect.top) > (rect.right - rect.left))
				{
					pDC->FillSolidRect(rect, rgbMiddle);	
				}
				else
				{
					pDC->FillSolidRect(rect, rgbMiddle);
				}
			}
			break;

		default:
			ASSERT(FALSE);  // unknown splitter type
		}
	}

	else 
		CSplitterWnd::OnDrawSplitter(pDC, nType, rectArg);
}

BOOL CTangramSplitterWnd::PreCreateWindow(CREATESTRUCT& cs)
{
	cs.lpszClass = theApp.m_lpszSplitterClass;
	cs.style |= WS_CLIPSIBLINGS;
	return CSplitterWnd::PreCreateWindow(cs);
}

void CTangramSplitterWnd::DrawAllSplitBars(CDC* pDC, int cxInside, int cyInside)
{
	ColRect.clear();
	RowRect.clear();
	ASSERT_VALID(this);

	int col;
	int row;
	CRect rect;

	// draw pane borders
	GetClientRect(rect);
	int x = rect.left;
	for (col = 0; col < m_nCols; col++)
	{
		int cx = m_pColInfo[col].nCurSize + 2*m_cxBorder;
		if (col == m_nCols-1 && m_bHasVScroll)
			cx += afxData.cxVScroll - CX_BORDER;
		int y = rect.top;
		for (row = 0; row < m_nRows; row++)
		{
			int cy = m_pRowInfo[row].nCurSize + 2*m_cyBorder;
			if (row == m_nRows-1 && m_bHasHScroll)
				cy += afxData.cyHScroll - CX_BORDER;
			OnDrawSplitter(pDC, splitBorder, CRect(x, y, x+cx, y+cy));
			y += cy + m_cySplitterGap - 2*m_cyBorder;
		}
		x += cx + m_cxSplitterGap - 2*m_cxBorder;
	}


	// draw column split bars
	GetClientRect(rect);
	rect.left += m_cxBorder;
	for (col = 0; col < m_nCols - 1; col++)
	{
		rect.left += m_pColInfo[col].nCurSize + m_cxBorderShare;
		rect.right = rect.left + m_cxSplitter;
		if (rect.left > cxInside)
			break;      // stop if not fully visible
		//ColumnsplitBar = rect;
		ColRect.push_back(rect);
		OnDrawSplitter(pDC, splitBar, rect);
		 
		rect.left = rect.right + m_cxBorderShare;
	}

	// draw row split bars
	GetClientRect(rect);
	rect.top += m_cyBorder;
	for (row = 0; row < m_nRows - 1; row++)
	{
		rect.top += m_pRowInfo[row].nCurSize + m_cyBorderShare;
		rect.bottom = rect.top + m_cySplitter;
		if (rect.top > cyInside)
			break;      // stop if not fully visible
		//RowsplitBar = rect;
		RowRect.push_back(rect);
		OnDrawSplitter(pDC, splitBar, rect);
		
		rect.top = rect.bottom + m_cyBorderShare;
	}
}

CWnd* CTangramSplitterWnd::GetActivePane(int* pRow , int* pCol)
{
	CWnd* pView = NULL;
	pView = GetFocus();

	// make sure the pane is a child pane of the splitter
	if (pView != NULL && !IsChildPane(pView, pRow, pCol))
		pView = NULL;


	return pView;
}

int CTangramSplitterWnd::OnMouseActivate(CWnd* pDesktopWnd, UINT nHitTest, UINT message)
{
	if(m_pTangramNode->m_pParentObj)
	{
		if (m_pTangramNode->m_pParentObj->m_nViewType & TabbedWnd)
			m_pTangramNode->m_pParentObj->m_pVisibleXMLObj = m_pTangramNode;
	}
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
	return CSplitterWnd::OnMouseActivate(pDesktopWnd, nHitTest, message);
}

STDMETHODIMP CTangramSplitterWnd::Save()
{
	//CString strWidth = _T("");
	//CString strHeight = _T("");

	//int minCx,minCy;

	//for(int i = 0; i<m_pTangramNode->m_nRows; i++)
	//{
	//	int iHeight;
	//	CString strH;
	//	GetRowInfo(i,iHeight,minCy);
	//	strH.Format(_T("%d,"),iHeight);

	//	strHeight+=strH;
	//}

	//for(int j = 0; j<m_pTangramNode->m_nCols; j++)
	//{
	//	int iWidth;
	//	CString strW;
	//	GetColumnInfo(j,iWidth,minCx);
	//	strW.Format(_T("%d,"),iWidth);

	//	strWidth += strW;
	//}

	//m_pTangramNode->put_Attribute(CComBSTR(TGM_HEIGHT),CComBSTR(strHeight));
	//m_pTangramNode->put_Attribute(CComBSTR(TGM_WIDTH),CComBSTR(strWidth));
	
	return S_OK;
}

void CTangramSplitterWnd::OnMouseMove(UINT nFlags, CPoint point)
{
	if(point.x < Hmin && point.y < Vmin)   
	{   
		CSplitterWnd::OnMouseMove(nFlags, CPoint(Hmin,Vmin)); 
	}  

	else if(point.x < Hmin && point.y > Vmin && point.y < Vmax)			
	{   
		CSplitterWnd::OnMouseMove(nFlags, CPoint(Hmin,point.y)); 
	} 

	else if(point.x < Hmin && point.y > Vmax)   
	{   
		CSplitterWnd::OnMouseMove(nFlags,  CPoint(Hmin,Vmax)); 
	} 

	else if(point.x > Hmax && point.y < Vmin)   
	{   
		CSplitterWnd::OnMouseMove(nFlags, CPoint(Hmax,Vmin)); 
	}  

	else if(point.x > Hmax && point.y > Vmin && point.y < Vmax)			
	{   
		CSplitterWnd::OnMouseMove(nFlags, CPoint(Hmax,point.y)); 
	} 

	else if(point.x > Hmax && point.y > Vmax)   
	{   
		CSplitterWnd::OnMouseMove(nFlags,  CPoint(Hmax,Vmax)); 
	} 

	else if(point.x > Hmin && point.x < Hmax && point.y > Vmax)   
	{   
		CSplitterWnd::OnMouseMove(nFlags,  CPoint(point.x,Vmax)); 
	} 
	else if(point.x > Hmin && point.x < Hmax && point.y < Vmin)   
	{   
		CSplitterWnd::OnMouseMove(nFlags,  CPoint(point.x,Vmin)); 
	} 
	else   
	{  
		CSplitterWnd::OnMouseMove(nFlags,   point);   
	}   

	CDC *pDC = GetDC();
	for (int col = 0; col < m_nCols - 1; col++)
	{
		if(PtInRect( &ColRect.at(col),point) && bColMoving == 0)
		{
			pDC->FillSolidRect(&(ColRect.at(col)),rgbMiddle);
			//pDC->FillSolidRect(&(ColRect.at(col)),RGB(240,240,240));
		}
	}

	for (int row = 0; row < m_nRows - 1; row++)
	{
		if(PtInRect( &RowRect.at(row),point))
		{
			pDC->FillSolidRect(&(RowRect.at(row)), rgbMiddle);
			//pDC->FillSolidRect(&(RowRect.at(row)),RGB(240,240,240));
		}
	}
	//TRACKMOUSEEVENT tme; 
	//tme.cbSize = sizeof(TRACKMOUSEEVENT);
	//tme.dwFlags = TME_LEAVE;
	//tme.hwndTrack = m_hWnd;
	//TrackMouseEvent(&tme);
}

void CTangramSplitterWnd::OnSize(UINT nType, int cx, int cy)
{
	if(m_pColInfo != NULL)
		RecalcLayout();

	__super::OnSize(nType, cx, cy);
}

void CTangramSplitterWnd::OnDestroy()
{
	m_pTangramNode->Fire_Destroy();
	__super::OnDestroy();
}
