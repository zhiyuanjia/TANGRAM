// TabbedComponent.cpp : Implementation of CTabbedComponent
 
#include "stdafx.h"
#include "TabbedComponent.h"
#include "TangramExcelTabCtrl.h"
#include "WndSlider.h"
#include "Tangram.c"

// CTabbedComponent
STDMETHODIMP CTabbedComponent::Create(LONGLONG hParentWnd, ITangramNode* pNode, LONGLONG* hWnd)
{
	BSTR bstrTag = L""; 

	pNode->get_Attribute(L"style",&bstrTag);

	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	USES_CONVERSION;
	HWND hPWnd = (HWND)hParentWnd;
	CString m_strTag = OLE2T(bstrTag);

	m_strTag.Trim();
	if (m_strTag.CompareNoCase(_T("")) == 0) m_strTag = _T("ExcelTab");

	if(::IsWindow(hPWnd))
	{
		CRect rt;
		::GetClientRect(hPWnd,&rt);

		if(m_strTag.CompareNoCase(_T("ExcelTab"))==0)
		{
			CComObject<CTangramExcelTabCtrl>* pTangramExcelTabCtrl = NULL;
			CComObject<CTangramExcelTabCtrl>::CreateInstance(&pTangramExcelTabCtrl);
			pTangramExcelTabCtrl->AddRef();
			pTangramExcelTabCtrl->m_pTangramNode = pNode;
			pTangramExcelTabCtrl->Create(CWnd::FromHandle(hPWnd),rt,WS_CHILD|WS_VISIBLE,0);
			*hWnd = (LONGLONG)pTangramExcelTabCtrl->m_hWnd;

			return S_OK;
		}
		else
		{
			CComObject<CWndSliderView>* pTangramExcelTabCtrl = new CComObject<CWndSliderView>;
			pTangramExcelTabCtrl->AddRef();
			if(m_strTag.CompareNoCase(_T("OutLookTabWndH"))==0)
				pTangramExcelTabCtrl->m_dwViewStyle = SOB_VIEW_VERT|SOB_VIEW_ANIMATE;
			else
				pTangramExcelTabCtrl->m_dwViewStyle = SOB_VIEW_HORZ|SOB_VIEW_ANIMATE;
			pTangramExcelTabCtrl->m_pTangramNode = pNode;

			pTangramExcelTabCtrl->Create(NULL,_T(""),WS_CHILD|WS_VISIBLE,rt,CWnd::FromHandle(hPWnd),0);
			*hWnd = (LONGLONG)pTangramExcelTabCtrl->m_hWnd;

			return S_OK;
		}
	}
	return S_OK;
}
