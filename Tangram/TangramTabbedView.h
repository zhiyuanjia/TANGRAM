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

// CTangramTabbedView 
class CTangramTabbedView : 
	public CFormView, 
	public CComObjectRootBase,
	public IDispatchImpl<ITangramContainer, &__uuidof(ITangramContainer)>
{
	DECLARE_DYNCREATE_ATL(CTangramTabbedView)

protected:
	CTangramTabbedView();           // protected constructor used by dynamic creation
	virtual ~CTangramTabbedView();

public:

	BEGIN_COM_MAP(CTangramTabbedView)
		COM_INTERFACE_ENTRY(ITangramContainer)
		COM_INTERFACE_ENTRY(IDispatch)
	END_COM_MAP()

	STDMETHOD(Save)();

	CWnd*					m_pVisibleWnd;
	CTangramNode*			m_pTangramNode;
	enum { IDD = IDD_TANGRAMLITETABBEDFORMVIEW };
	void Lock(){}
	void Unlock(){}

#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	CTabCtrl			m_TangramTabCtrl;

	ULONG InternalAddRef(){ return 1; }
	ULONG InternalRelease(){ return 1; }

	BOOL AdjustPageSize(RECT& rc);
	BOOL AdjustPageSize();
	BOOL AdjustTabCtrlSize(RECT& rc);
	BOOL AdjustTabCtrlSize();
	RECT GetPageSize();
	void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL);
	BOOL PreCreateWindow(CREATESTRUCT& cs);

	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnDestroy();
	afx_msg void OnNcDestroy();
	afx_msg int OnMouseActivate(CWnd* pDesktopWnd, UINT nHitTest, UINT message);
	afx_msg void OnTcnSelchangeTab(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg LRESULT OnActivePage(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnModifyPage(WPARAM wParam,LPARAM lParam);
	afx_msg LRESULT OnTgmSetCaption(WPARAM wParam,LPARAM lParam);
	afx_msg LRESULT OnActiveTangramObj(WPARAM wParam,LPARAM lParam);
	afx_msg LRESULT OnUpdateTangramObj(WPARAM wParam,LPARAM lParam);
	DECLARE_MESSAGE_MAP()
};


