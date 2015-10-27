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

// TangramMFCView.cpp : implementation of the CTangramMFCView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "TangramMFCApp.h"
#endif

#include "TangramMFCDoc.h"
#include "MainFrm.h"
#include "TangramMFCView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTangramMFCView

IMPLEMENT_DYNCREATE(CTangramMFCView, CHtmlView)

BEGIN_MESSAGE_MAP(CTangramMFCView, CHtmlView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CHtmlView::OnFilePrint)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CTangramMFCView construction/destruction

CTangramMFCView::CTangramMFCView()
{
	// TODO: add construction code here
}

CTangramMFCView::~CTangramMFCView()
{
}

BOOL CTangramMFCView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CHtmlView::PreCreateWindow(cs);
}

void CTangramMFCView::OnInitialUpdate()
{
	CMainFrame* pMainWnd = (CMainFrame*)theApp.m_pMainWnd;
	pMainWnd->m_pTangramMFCView = this;
	CHtmlView::OnInitialUpdate();

	Navigate2(_T("http://www.msdn.microsoft.com/visualc/"),NULL,NULL);
	theApp.m_pTangramCore->put_TangramVal(CComBSTR(L"DefaultFrameWnd"), CComVariant((LONGLONG)::GetWindow(m_hWnd,GW_CHILD)));
}


// CTangramMFCView printing


void CTangramMFCView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}


void CTangramMFCView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CTangramMFCView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CTangramMFCView diagnostics

#ifdef _DEBUG
void CTangramMFCView::AssertValid() const
{
	CHtmlView::AssertValid();
}

void CTangramMFCView::Dump(CDumpContext& dc) const
{
	CHtmlView::Dump(dc);
}

CTangramMFCDoc* CTangramMFCView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTangramMFCDoc)));
	return (CTangramMFCDoc*)m_pDocument;
}
#endif //_DEBUG


// CTangramMFCView message handlers
