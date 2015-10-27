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

// VSIMDIHelperView.h : interface of the CVSIMDIHelperView class
//

#pragma once


class CVSIMDIHelperView : public CHtmlView
{
protected: // create from serialization only
	CVSIMDIHelperView();
	DECLARE_DYNCREATE(CVSIMDIHelperView)

// Attributes
public:
	CVSIMDIHelperDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void OnInitialUpdate(); // called first time after construct

// Implementation
public:
	virtual ~CVSIMDIHelperView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in VSIMDIHelperView.cpp
inline CVSIMDIHelperDoc* CVSIMDIHelperView::GetDocument() const
   { return reinterpret_cast<CVSIMDIHelperDoc*>(m_pDocument); }
#endif

