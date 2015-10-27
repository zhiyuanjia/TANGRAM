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

#pragma once
#include <vector>

// CTangramSplitterWnd

class CTangramSplitterWnd : public CSplitterWnd,
	public CComObjectRootBase,
	public IDispatchImpl<ITangramContainer, &__uuidof(ITangramContainer), &LIBID_Tangram,  1,  0>
{
	DECLARE_DYNCREATE_ATL(CTangramSplitterWnd)
public:

	BEGIN_COM_MAP(CTangramSplitterWnd)
		COM_INTERFACE_ENTRY(ITangramContainer)
		COM_INTERFACE_ENTRY(IDispatch)
	END_COM_MAP()
	void Lock(){}
	void Unlock(){}

	STDMETHOD(Save)();

#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	CTangramSplitterWnd();           // protected constructor used by dynamic creation
	virtual ~CTangramSplitterWnd();

	BOOL			m_bFlatSplitter;
	BOOL			m_bCreated;
	
	COLORREF		rgbLeftTop;
	COLORREF		rgbRightBottom;
	COLORREF		rgbMiddle;
	int Vmin,Vmax,Hmin,Hmax;
	vector<RECT>	ColRect;
	vector<RECT>	RowRect;

	bool bColMoving ;
	bool bRowMoving ;

	CTangramNode*	m_pTangramNode;

	ULONG InternalAddRef(){return 1;}
	ULONG InternalRelease(){return 1;}

	BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL);
	void RecalcLayout();
	BOOL OnNotify(WPARAM wParam, LPARAM lParam, LRESULT* pResult);
	BOOL PreCreateWindow(CREATESTRUCT& cs);
	void StartTracking(int ht);
	void StopTracking(BOOL bAccept);
	void OnDrawSplitter(CDC* pDC, ESplitType nType, const CRect& rect);
	void PostNcDestroy();
	CWnd* GetActivePane(int* pRow = NULL, int* pCol = NULL);
	void CTangramSplitterWnd::DrawAllSplitBars(CDC* pDC, int cxInside, int cyInside);

	afx_msg void OnPaint();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnDestroy();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg int OnMouseActivate(CWnd* pDesktopWnd, UINT nHitTest, UINT message);
	afx_msg LRESULT OnActivePage(WPARAM wParam,LPARAM lParam);
	afx_msg LRESULT OnActiveTangramObj(WPARAM wParam,LPARAM lParam);
	afx_msg LRESULT OnUpdateTangramObj(WPARAM wParam,LPARAM lParam);
	DECLARE_MESSAGE_MAP()
};
