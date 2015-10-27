// TangramConnector.cpp : CTangramConnector µÄÊµÏÖ

#include "stdafx.h"
#include "TangramConnector.h"
#include "TangramFormView.h"
#include "VsDesignFormView.h"
#include "TangramOfficeToolView.h"

// CTangramConnector
STDMETHODIMP CTangramConnector::Create(LONGLONG hParent, ITangramNode* pNode, LONGLONG* hWnd)
{
	BSTR bstrTag = L"";
	BSTR bstrStyle = L"";

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
		RECT rt;
		::GetClientRect(hPWnd, &rt);
		if (m_strTag.CompareNoCase(_T("VSIDesignView")) == 0)
		{
			CRuntimeClass* pRC = RUNTIME_CLASS(CTangramFormView);
			CTangramFormView* pTangramFormView = (CTangramFormView*)pRC->CreateObject();
			if (pTangramFormView)
			{
				pTangramFormView->m_pNode = pNode;
				CCreateContext context;
				pTangramFormView->Create(NULL, _T(""), WS_CHILD | WS_VISIBLE | WS_CLIPCHILDREN | WS_CLIPSIBLINGS, CRect(0, 0, 0, 0), CWnd::FromHandle(hPWnd), NULL, &context);
				*hWnd = (LONGLONG)pTangramFormView->m_hWnd;
				return S_OK;
			}
		}
		if (m_strTag.CompareNoCase(_T("RuntimeView")) == 0)
		{
			CRuntimeClass* pRC = RUNTIME_CLASS(CVsDesignFormView);
			CVsDesignFormView* pTangramFormView = (CVsDesignFormView*)pRC->CreateObject();
			if (pTangramFormView)
			{
				pTangramFormView->m_pNode = pNode;
				CCreateContext context;
				pTangramFormView->Create(NULL, _T(""), WS_CHILD | WS_VISIBLE | WS_CLIPCHILDREN | WS_CLIPSIBLINGS, CRect(0, 0, 0, 0), CWnd::FromHandle(hPWnd), NULL, &context);
				*hWnd = (LONGLONG)pTangramFormView->m_hWnd;
			}
		}	
		if (m_strTag.CompareNoCase(_T("OfficeTool")) == 0)
		{
			CRuntimeClass* pRC = RUNTIME_CLASS(CTangramOfficeToolView);
			CTangramOfficeToolView* pTangramFormView = (CTangramOfficeToolView*)pRC->CreateObject();
			if (pTangramFormView)
			{
				pTangramFormView->m_pNode = pNode;
				CCreateContext context;
				pTangramFormView->Create(NULL, _T(""), WS_CHILD | WS_VISIBLE | WS_CLIPCHILDREN | WS_CLIPSIBLINGS, CRect(0, 0, 0, 0), CWnd::FromHandle(hPWnd), NULL, &context);
				*hWnd = (LONGLONG)pTangramFormView->m_hWnd;
			}
		}	
	}
	return S_OK;
}
