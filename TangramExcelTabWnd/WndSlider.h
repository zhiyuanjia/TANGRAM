/********************************************************************************
*					Tangram Library - version 8.0								*
*********************************************************************************
* Copyright (C) 2006 by Tangram Team.   All Rights Reserved.					*
*
* THIS SOURCE FILE IS THE PROPERTY OF TANGRAM TEAM AND IS NOT TO 
* BE RE-DISTRIBUTED BY ANY MEANS WHATSOEVER WITHOUT THE EXPRESSED 
* WRITTEN CONSENT OF TANGRAM TEAM.
*
* THIS SOURCE CODE CAN ONLY BE USED UNDER THE TERMS AND CONDITIONS 
* OUTLINED IN THE TANGRAM LICENSE AGREEMENT.TANGRAM TEAM 
* GRANTS TO YOU (ONE SOFTWARE DEVELOPER) THE LIMITED RIGHT TO USE 
* THIS SOFTWARE ON A SINGLE COMPUTER.
*
* CONTACT INFORMATION:
* mailto:sunhui@tangramfx.com
* http://www.webaddin.com
* http://www.tangramworld.com
*
********************************************************************************/
#if !defined(AFX_WNDSLIDER_H__90B1F5F3_B5AC_11D2_877B_0000C042C40D__INCLUDED_)
#define AFX_WNDSLIDER_H__90B1F5F3_B5AC_11D2_877B_0000C042C40D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#ifndef _TANGRAM_MINI_EDITION

//***************************************************************************
// WndSlider.h : header file
//***************************************************************************

#ifndef __AFXTEMPL_H__
#include <afxtempl.h>
#endif

#include "Tangram.h"

/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
#define SOB_ERROR			0xffffffff // == -1

/////////////////////////////////////////////////////////////////////////////
//
/////////////////////////////////////////////////////////////////////////////
const int SOB_BAR_DEFAULT_FIRST_VIEW_ID	 = 0xDEAD;

/////////////////////////////////////////////////////////////////////////////
// Increase or decrease value to adjust button height.
/////////////////////////////////////////////////////////////////////////////
const int SOB_BAR_DEFAULT_BTN_HEIGHT	 = 24;

/////////////////////////////////////////////////////////////////////////////
// Increase this value to slow down the animation.  
/////////////////////////////////////////////////////////////////////////////
const int SOB_BAR_DEFAULT_ANIMATION_SPEED =	10;

/////////////////////////////////////////////////////////////////////////////
// Increase or decrease this value to to limit the amount of time spent 
// animating...
/////////////////////////////////////////////////////////////////////////////
const int SOB_BAR_DEFAULT_ANIMATION_LIMIT =	200;


/////////////////////////////////////////////////////////////////////////////
//
/////////////////////////////////////////////////////////////////////////////
const DWORD SOB_VIEW_HORZ		=	0x00000001;
const DWORD SOB_VIEW_VERT		=	0x00000002;
const DWORD SOB_VIEW_ANIMATE	=	0x00000004;

const DWORD SOB_BTN_ANIMATE		=	0x00001000;
const DWORD SOB_BTN_FANCYFACE	=   0x00002000;


/////////////////////////////////////////////////////////////////////////////
// Constance used by CWndSliderView & CSliderButton.  
/////////////////////////////////////////////////////////////////////////////
typedef enum tagButtonState
{ 
	SOB_BTN_UP   = 0x00000010,
	SOB_BTN_HIT  = 0x00000020, 
	SOB_BTN_OVER = 0x00000040 

} BUTTON_STATE, * LPBUTTON_STATE;

//***************************************************************************
//
//***************************************************************************
class CSliderButton : public CObject
{
	DWORD		m_dwButtonStyle;

	CWnd*		m_pWndParent;

	CString		m_strButtonTitle;

	BOOL		m_bUseFancyFaceButton;
	BOOL		m_bUpdateBitmaps;

	CRect		m_rectButton;

	CBitmap		m_bmpNormalFace;
	CBitmap		m_bmpPressedFace;
	int			m_iIconIndex;
	CImageList*	m_pImageList;
public:

	CSliderButton();
	~CSliderButton(); 

	CWnd* GetParentWnd( void );
	void SetParentWnd( CWnd* pWnd );
	  
	DWORD GetButtonStyle( void ) const;
	void  ModifyButtonStyle( const DWORD dwRemove, const DWORD dwAdd );

	void   SetButtonTitle( CString szcTitle );
	CString GetButtonTitle( void ) const;

protected:

	friend class CWndSliderView;

	void Draw( CDC* pDC, const CRect& rectScreen, const DWORD dwFlags = SS_CENTER );
	void Size( const CRect& rectNewSize, const DWORD dwStyle );

	void UpdateBitmaps( CDC* pDC, DWORD dwFlags );
	void OnSysColorChange( void );
};

//***************************************************************************
typedef CArray< CSliderButton*, CSliderButton* > CSliderButtonArray; 


//***************************************************************************
// The main CWndSliderView window
//***************************************************************************
//
//
//***************************************************************************
#include "TangramExcelTabWnd_i.h"

class CWndSliderView : public CWnd
	,public CComObjectRootEx<CComSingleThreadModel>
	, public IDispatchImpl<ITangramContainer, &__uuidof(ITangramContainer), &LIBID_TangramExcelTabWndLib,  1,  0>
{
protected:

	//DECLARE_DYNCREATE(CWndSliderView)

// Construction
public:
	CWndSliderView();

// Attributes
public:
	//CTangram* m_pTangramNode;
	int				m_nButtonHeight;
	CImageList		m_hButtonImageList;
	DWORD			m_dwViewStyle;

protected:

	CSliderButtonArray  m_buttonArray;


	int				m_nViewCount;
	int				m_nActiveView;

	int				m_nMouseOnButton;
	BOOL			m_bLButtonDown;

	BOOL			m_bTrackLeave;
	HCURSOR			m_hHandCursor;

private:

	int				m_nPriviousButton;
	BOOL			m_bTrackingMouse;

// Operations
public:
	int CreateView( CString szcViewTitle,
		            CRuntimeClass* pViewClass, 
				    CCreateContext* pContext,
					int iIconIndex = -1,
				    const DWORD dwStyle = WS_CHILD|WS_VISIBLE );

	void RecalcLayout( const BOOL bRepaint = TRUE );
	
	int	  GetViewID( const int nID ) const;
	CWnd* GetView( const int nView ) const;
	BOOL  RemoveView( const int nView );

	int	  GetViewCount() const;
	
	DWORD GetBarStyle( void ) const;
	void  ModifyViewStyle( const DWORD dwRemove, const DWORD dwAdd, const BOOL bRedraw );

	int	  ButtonHitTest( const CPoint& point );

	CSliderButton* GetButton( const int nButton ) const;

	int	  GetActiveView( void ) const;
	int   SetActiveView( const int nNewView, const BOOL bRedraw = TRUE );

	CRect GetButtonRect( const int nButton, const CRect& rectClient ) const;
	CRect GetButtonRect( const int nButton ) const;

	CRect GetInsideRect( const int nButton ) const;

	void  InvalidateButton( const int nButton );

protected:

	void ViewAnimation( const int nNewView, const int nPreviousView );
	void OnPrintClient( HDC hDC, UINT uFlags );
	virtual void PostNcDestroy();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWndSliderView)
	public:
	protected:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
	virtual LRESULT DefWindowProc(UINT message, WPARAM wParam, LPARAM lParam);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CWndSliderView();
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL);

	// Generated message map functions
protected:
	//{{AFX_MSG(CWndSliderView)
	afx_msg LRESULT OnCreatePage(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnActivePage(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnModifyPage(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnTgmSetCaption(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnActiveTangramObj(WPARAM wParam, LPARAM lParam);

	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnPaint();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg int  OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg BOOL OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message);
	afx_msg void OnSysColorChange();
	//afx_msg long OnOpenDocinTangramObj(WPARAM wParam,LPARAM lParam);
	//afx_msg long OnSerializeTangramObj(WPARAM wParam,LPARAM lParam);
	//afx_msg long OnUpdateTangramObj(WPARAM wParam,LPARAM lParam);
	//afx_msg long OnActiveTangramObj(WPARAM wParam,LPARAM lParam);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

public:
	DECLARE_NO_REGISTRY()
	BEGIN_COM_MAP(CWndSliderView)
		COM_INTERFACE_ENTRY(ITangramContainer)
		COM_INTERFACE_ENTRY(IDispatch)
	END_COM_MAP()

	void FinalRelease()
	{
	}
	//CComObject<CTangramTabEx>*	m_pTangramTabEx;
	ITangramNode*	m_pTangramNode;

	STDMETHOD(Save)()
	{
		//CComPtr<IXMLDOMElement> pEle = NULL;
		//m_pTangramNode->get_XMLElement(&pEle);

		CString str;
		str.Format(_T("%d"),m_nActiveView);

		//pEle->setAttribute(L"ActivePage",CComVariant(str));
		m_pTangramNode->put_Attribute(L"ActivePage",CComBSTR(str));
		return S_OK;
	}
};


//***************************************************************************

#endif
//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WNDSLIDER_H__90B1F5F3_B5AC_11D2_877B_0000C042C40D__INCLUDED_)
