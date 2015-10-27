#pragma once
#include "afxwin.h"
#include "Tangram.h"
#define WM_TGM_SHOWTANGRAM	WM_USER+1022

class CTangramContentWnd :
	public CWindowImpl<CTangramContentWnd, CWindow>
{
public:
	CTangramContentWnd();
	~CTangramContentWnd();

	CTangramContentWnd* m_pChildWnd;
	BEGIN_MSG_MAP(CTangramContentWnd)
		MESSAGE_HANDLER(WM_WINDOWPOSCHANGED, OnWindowPosChanged)
	END_MSG_MAP()
	virtual void OnFinalMessage(HWND hWnd);
	LRESULT OnWindowPosChanged(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
};

// CTangramFormView 

class CTangramFormView : public CFormView
{
	DECLARE_DYNCREATE(CTangramFormView)

protected:
	CTangramFormView();           
	virtual ~CTangramFormView();

public:
	CString m_strXml;
	CTangramContentWnd* m_pClientWnd;
	enum { IDD = IDD_TANGRAMFORMVIEW };
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV Ö§³Ö

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL);
	ITangramNode* m_pNode;
	afx_msg void OnWindowPosChanged(WINDOWPOS* lpwndpos);
	virtual void OnInitialUpdate();
	afx_msg LRESULT OnShowTangramObj(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnGetTangramObj(WPARAM wParam, LPARAM lParam);
	afx_msg void OnBnClickedShowtangramword();
	afx_msg void OnBnClickedShowtangramexcel();
	afx_msg int OnMouseActivate(CWnd* pDesktopWnd, UINT nHitTest, UINT message);
};


