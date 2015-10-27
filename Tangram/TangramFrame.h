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

class ATL_NO_VTABLE CTangramFrame : 
	public CComObjectRootBase,	
	public CWindowImpl<CTangramFrame, CWindow>,
	public IDispatchImpl<ITangramFrame, &IID_ITangramFrame, &LIBID_Tangram,  1,  0>
{
public:
	CTangramFrame();           
	~CTangramFrame();           

	BOOL									m_bDetached;
	BOOL									m_bOuterInited;
	BOOL									m_bNeedOuterChanged;

	LONG									m_left;
	LONG									m_top;
	LONG									m_right;
	LONG									m_bottom;
	LONG									m_left2;
	LONG									m_top2;
	LONG									m_right2;
	LONG									m_bottom2;
	int										m_x;
	int										m_y;
	HWND									m_hHostWnd;

	HWND									m_hLWnd;
	HWND									m_hTWnd;
	HWND									m_hRWnd;
	HWND									m_hBWnd;
	HWND									m_hOuterLWnd;
	HWND									m_hOuterTWnd;
	HWND									m_hOuterRWnd;
	HWND									m_hOuterBWnd;

	CString									m_strFrameName;	
	CString									m_strCurrentKey;

	CTangram*								m_pTangram;
	CTangramNode*							m_pHostNode;
	CTangramNode*							m_pWorkNode;
	CTangramNode*							m_pBindingNode;
	CTangramBKWnd*							m_pBKWnd;
	map<CString, CTangramNode*>				m_mapNode;
	map<CString, VARIANT>					m_mapVal;
	CComObject<CTangramNodeCollection>*		m_pRootNodes;

	void Lock(){}
	void Unlock(){}
	void Destroy();
	CTangramNode* OpenXtmlDocument(CString strKey, CString	strFile);

	STDMETHOD(get_HWND)(LONGLONG* pVal);
	STDMETHOD(get_Tangram)(ITangram** pVal);
	STDMETHOD(get_CurrentNavigateKey)(BSTR* pVal);
	STDMETHOD(get_VisibleNode)(ITangramNode** pVal);
	STDMETHOD(get_RootNodes)(ITangramNodeCollection** pNodeColletion);
	STDMETHOD(get_FrameData)(BSTR bstrKey, VARIANT* pVal);
	STDMETHOD(put_FrameData)(BSTR bstrKey, VARIANT newVal);

	STDMETHOD(Attach)(void);
	STDMETHOD(Detach)(void);
	STDMETHOD(ModifyHost)(LONGLONG hHostWnd);
	STDMETHOD(Extend)(BSTR bstrKey, BSTR bstrXml, ITangramNode** ppRetNode);

	void OnFinalMessage(HWND hWnd);

	BEGIN_COM_MAP(CTangramFrame)
		COM_INTERFACE_ENTRY(ITangramFrame)
		COM_INTERFACE_ENTRY(IDispatch)
	END_COM_MAP()

	BEGIN_MSG_MAP(CTangramFrame)
		MESSAGE_HANDLER(WM_DESTROY, OnDestroy)
		MESSAGE_HANDLER(WM_HSCROLL, OnHScroll)
		MESSAGE_HANDLER(WM_VSCROLL, OnHScroll)
		MESSAGE_HANDLER(WM_NCDESTROY, OnNcDestroy)
		MESSAGE_HANDLER(WM_SETHELPWND, OnSetHelpWnd)
		MESSAGE_HANDLER(WM_SETHELPWNDEX, OnSetHelpWndEx)
		MESSAGE_HANDLER(WM_PARENTNOTIFY, OnParentNotify)
		MESSAGE_HANDLER(WM_TANGRAMMSG, OnTangramMsg)
		MESSAGE_HANDLER(WM_MOUSEACTIVATE, OnMouseActivate)
		MESSAGE_HANDLER(WM_WINDOWPOSCHANGING, OnWindowPosChanging)
	END_MSG_MAP()

protected:
	ULONG InternalAddRef(){ return 1; }
	ULONG InternalRelease(){ return 1; }

private:
	LRESULT OnTangramMsg(UINT, WPARAM, LPARAM, BOOL&);
	LRESULT OnDestroy(UINT, WPARAM, LPARAM, BOOL&);
	LRESULT OnHScroll(UINT, WPARAM, LPARAM, BOOL&);
	LRESULT OnNcDestroy(UINT, WPARAM, LPARAM, BOOL&);
	LRESULT OnSetHelpWnd(UINT, WPARAM, LPARAM, BOOL&);
	LRESULT OnSetHelpWndEx(UINT, WPARAM, LPARAM, BOOL&);
	LRESULT OnParentNotify(UINT, WPARAM, LPARAM, BOOL&);
	LRESULT OnMouseActivate(UINT, WPARAM, LPARAM, BOOL&);
	LRESULT OnWindowPosChanging(UINT, WPARAM, LPARAM, BOOL&);
	BOOL CreateTangram(IXMLDOMDocument* pXmlDoc);
};
