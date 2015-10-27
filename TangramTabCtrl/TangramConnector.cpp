// TangramConnector.cpp : CTangramConnector 的实现

#include "stdafx.h"
#include "TangramConnector.h"
#include "TangramTabCtrlWnd.h"
#include "TangramTabCtrl_i.c"
#include "Tangram.c"

// CTangramConnector
STDMETHODIMP CTangramConnector::Create(LONGLONG hParent, ITangramNode* pNode, LONGLONG* hWnd)
{
	BSTR bstrTag = L"";
	BSTR bstrStyle = L"";

	USES_CONVERSION;

	pNode->get_Attribute(L"id", &bstrTag);
	pNode->get_Attribute(L"style", &bstrStyle);

	HWND hPWnd = (HWND)hParent;
	CString m_strTag = OLE2T(bstrTag);
	::SysFreeString(bstrTag);
	HRESULT hr = S_OK;

	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	m_strTag.Trim();
	if (::IsWindow(hPWnd))
	{
		//RECT rt;
		//::GetClientRect(hPWnd, &rt);
		//if (m_strTag.CompareNoCase(_T("TestView")) == 0)
		//{
		//	CRuntimeClass* pRC = RUNTIME_CLASS(CTangramFormView);
		//	CTangramFormView* pTangramFormView = (CTangramFormView*)pRC->CreateObject();
		//	if (pTangramFormView)
		//	{
		//		CCreateContext context;
		//		pTangramFormView->Create(NULL, _T(""), WS_CHILD | WS_VISIBLE | WS_CLIPCHILDREN | WS_CLIPSIBLINGS, CRect(0, 0, 0, 0), CWnd::FromHandle(hPWnd), NULL, &context);
		//		*hWnd = (LONGLONG)pTangramFormView->m_hWnd;
		//	}
		//	
		//	return S_OK;
		//}
		if (m_strTag.CompareNoCase(_T("TangramTabCtrl")) == 0)
		{
			BSTR bstrLocation = L"";
			pNode->get_Attribute(L"Location", &bstrLocation);
			CMFCTabCtrl::Location loc = (CMFCTabCtrl::Location)_ttoi(OLE2T(bstrStyle));
			CTangramTabCtrlWnd* pTangramTabCtrlWnd = new CTangramTabCtrlWnd();
			pTangramTabCtrlWnd->m_pTangramNode = pNode;
			if (pTangramTabCtrlWnd)
			{
				CRect rectDummy;
				rectDummy.SetRectEmpty();
				CMFCTabCtrl::Style nStyle = (CMFCTabCtrl::Style)_ttoi(OLE2T(bstrStyle));
				//::SysFreeString(bstrStyle);
				//::SysFreeString(bstrLocation);
				// 创建选项卡窗口: 
				pTangramTabCtrlWnd->SetLocation(loc);
				if (!pTangramTabCtrlWnd->Create(nStyle, rectDummy, CWnd::FromHandle(hPWnd), 1))
				{
					return -1;      // 未能创建
				}
				*hWnd = (LONGLONG)pTangramTabCtrlWnd->m_hWnd;
			}
			
			return S_OK;
		}

		return S_OK;
	}
	return S_OK;
}
