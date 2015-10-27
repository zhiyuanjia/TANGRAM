// This MFC Samples source code demonstrates using MFC Microsoft Office Fluent User Interface 
// (the "Fluent UI") and is provided only as referential material to supplement the 
// Microsoft Foundation Classes Reference and related electronic documentation 
// included with the MFC C++ library software.  
// License terms to copy, use or distribute the Fluent UI are available separately.  
// To learn more about our Fluent UI licensing program, please visit 
// http://go.microsoft.com/fwlink/?LinkId=238214.
//
// Copyright (C) Microsoft Corporation
// All rights reserved.

// VSIMDIHelperView.cpp : implementation of the CVSIMDIHelperView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "VSIMDIHelper.h"
#endif

#include "VSIMDIHelperDoc.h"
#include "VSIMDIHelperView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVSIMDIHelperView

IMPLEMENT_DYNCREATE(CVSIMDIHelperView, CHtmlView)

BEGIN_MESSAGE_MAP(CVSIMDIHelperView, CHtmlView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CVSIMDIHelperView construction/destruction

CVSIMDIHelperView::CVSIMDIHelperView()
{
	// TODO: add construction code here

}

CVSIMDIHelperView::~CVSIMDIHelperView()
{
}

BOOL CVSIMDIHelperView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CHtmlView::PreCreateWindow(cs);
}

void CVSIMDIHelperView::OnInitialUpdate()
{
	CHtmlView::OnInitialUpdate();

	Navigate2(_T("http://www.msdn.microsoft.com/visualc/"),NULL,NULL);
}

void CVSIMDIHelperView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CVSIMDIHelperView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CVSIMDIHelperView diagnostics

#ifdef _DEBUG
void CVSIMDIHelperView::AssertValid() const
{
	CHtmlView::AssertValid();
}

void CVSIMDIHelperView::Dump(CDumpContext& dc) const
{
	CHtmlView::Dump(dc);
}

CVSIMDIHelperDoc* CVSIMDIHelperView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CVSIMDIHelperDoc)));
	return (CVSIMDIHelperDoc*)m_pDocument;
}
#endif //_DEBUG


// CVSIMDIHelperView message handlers
