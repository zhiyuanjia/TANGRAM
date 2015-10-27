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

// TangramAppView.cpp : implementation of the CTangramView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "TangramApp.h"
#endif

#include "TangramDoc.h"
#include "TangramAppView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTangramView

IMPLEMENT_DYNCREATE(CTangramView, CHtmlView)

BEGIN_MESSAGE_MAP(CTangramView, CHtmlView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CHtmlView::OnFilePrint)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CTangramView construction/destruction

CTangramView::CTangramView()
{
	// TODO: add construction code here

}

CTangramView::~CTangramView()
{
}

BOOL CTangramView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CHtmlView::PreCreateWindow(cs);
}

void CTangramView::OnInitialUpdate()
{
	CHtmlView::OnInitialUpdate();

	Navigate2(_T("http://www.msdn.microsoft.com/visualc/"),NULL,NULL);
}


// CTangramView printing


void CTangramView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}


void CTangramView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CTangramView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CTangramView diagnostics

#ifdef _DEBUG
void CTangramView::AssertValid() const
{
	CHtmlView::AssertValid();
}

void CTangramView::Dump(CDumpContext& dc) const
{
	CHtmlView::Dump(dc);
}

CTangramDoc* CTangramView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTangramDoc)));
	return (CTangramDoc*)m_pDocument;
}
#endif //_DEBUG


// CTangramView message handlers
