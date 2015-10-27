#pragma once
#include "Tangram.h"
#include "TangramTabbedWnd_i.h"

class CTabbedWnd;
class ATL_NO_VTABLE CTangramTabbedWndDisp : 
	public CComObjectRootEx<CComSingleThreadModel>
	, public IDispatchImpl<ITangramContainer, &__uuidof(ITangramContainer), &LIBID_TangramTabbedWndLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{	
public:
	CTangramTabbedWndDisp(ITangramNode* pNode = NULL)
	{
		m_pTangramNode = pNode;
		m_pTangramTabbedWnd = NULL;
	}

public:
	DECLARE_NO_REGISTRY()
	BEGIN_COM_MAP(CTangramTabbedWndDisp)
		COM_INTERFACE_ENTRY(ITangramContainer)
		COM_INTERFACE_ENTRY(IDispatch)
	END_COM_MAP()

	void FinalRelease()
	{
	}

public:
	CTabbedWnd* m_pTangramTabbedWnd;
	ITangramNode*	m_pTangramNode;

	STDMETHOD(Save)();

	//STDMETHOD(CreatePage)(VARIANT var, IDispatch** ppDisp,long* hWnd)
	//{
	//	switch(var.vt)
	//	{
	//	case VT_BSTR:
	//		{
	//			break;
	//		}
	//	case VT_DISPATCH:
	//		{
	//			break;
	//		}
	//	}
	//	return S_OK;
	//}

	//void CreatePage(CString strFile, IDispatch** ppDisp,long* hWnd);
	//void CreatePage(IDispatch* pDisp, IDispatch** ppDisp,long* hWnd);	
};

// CTabbedWnd

class CTabbedWnd : 
	public CXTPTabControl
{
public:
	CTabbedWnd(ITangramNode* pNode = NULL);
	virtual ~CTabbedWnd();
	virtual void OnItemClick(CXTPTabManagerItem* pItem);
	ITangramNode*	m_pTangramNode;
	CComObject<CTangramTabbedWndDisp>* m_pTangramTabWndDisp;
	BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL);
protected:
	DECLARE_MESSAGE_MAP()

	afx_msg LRESULT OnCreatePage(WPARAM wParam,LPARAM lParam);
	afx_msg LRESULT OnActivePage(WPARAM wParam,LPARAM lParam);
	afx_msg LRESULT OnModifyPage(WPARAM wParam,LPARAM lParam);
	afx_msg LRESULT OnTgmSetCaption(WPARAM wParam,LPARAM lParam);
	afx_msg LRESULT OnActiveTangramObj(WPARAM wParam,LPARAM lParam);

	void PostNcDestroy();
	BOOL PreCreateWindow(CREATESTRUCT& cs);
};


