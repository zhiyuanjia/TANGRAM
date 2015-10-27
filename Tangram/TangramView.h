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

class CTangramWnd : public CWnd
{
	DECLARE_DYNCREATE(CTangramWnd)
public:
	BOOL					m_bBKWnd;
	BOOL					m_bCreateExternal;

	CTangramNode*			m_pParentNode;
	CTangramNode*			m_pTangramNode;

	IOleInPlaceActiveObject* m_pOleInPlaceActiveObject;

	BOOL PreTranslateMessage(MSG* pMsg);
	BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL);
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	CTangramWnd();           // protected constructor used by dynamic creation
	virtual ~CTangramWnd();
	void PostNcDestroy();
	LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
	afx_msg void OnDestroy();
	afx_msg void OnMouseLeave();
	afx_msg int OnMouseActivate(CWnd* pDesktopWnd, UINT nHitTest, UINT message);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg LRESULT OnUpdateTangramObj(WPARAM wParam,LPARAM lParam);
	afx_msg LRESULT OnActiveTangramObj(WPARAM wParam,LPARAM lParam);
	afx_msg LRESULT OnGetTangramObj(WPARAM wParam,LPARAM lParam);
	afx_msg void OnWindowPosChanged(WINDOWPOS* lpwndpos);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	DECLARE_MESSAGE_MAP()
};

class CTangramBKWnd : public CWindowImpl<CTangramBKWnd, CWindow>
{
public:
	CTangramBKWnd(void);
	CTangramNode* m_pTangramNode;

	BEGIN_MSG_MAP(CTangramBKWnd)
		MESSAGE_HANDLER(WM_DESTROY, OnDestroy)
		MESSAGE_HANDLER(WM_MOUSEACTIVATE, OnMouseActivate)
		MESSAGE_HANDLER(WM_WINDOWPOSCHANGED, OnWindowPosChanged)
		MESSAGE_HANDLER(WM_WINDOWPOSCHANGING, OnWindowPosChanged)
	END_MSG_MAP()

private:
	LRESULT OnDestroy(UINT, WPARAM, LPARAM, BOOL&){ return 0; };
	LRESULT OnMouseActivate(UINT, WPARAM, LPARAM, BOOL&);
	LRESULT OnWindowPosChanged(UINT, WPARAM, LPARAM, BOOL&);
	void OnFinalMessage(HWND hWnd);
};
