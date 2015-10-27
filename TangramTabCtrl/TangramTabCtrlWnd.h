#pragma once

// CTabPageWnd

class CTabPageWnd : public CWnd
{
public:
	CTabPageWnd();
	virtual ~CTabPageWnd();

protected:
	virtual void PostNcDestroy();
	DECLARE_MESSAGE_MAP()
};

// CTangramTabCtrlWnd

class CTangramTabCtrlWnd : public CMFCTabCtrl
{
	DECLARE_DYNAMIC(CTangramTabCtrlWnd)

public:
	CTangramTabCtrlWnd();
	virtual ~CTangramTabCtrlWnd();
	virtual BOOL SetActiveTab(int iTab);

	int m_nCurSelTab;
public:
	ITangramNode*	m_pTangramNode;

protected:
	DECLARE_MESSAGE_MAP()
	afx_msg LRESULT OnCreatePage(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnActivePage(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnModifyPage(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnTgmSetCaption(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnActiveTangramObj(WPARAM wParam, LPARAM lParam);
	virtual void PostNcDestroy();
};


