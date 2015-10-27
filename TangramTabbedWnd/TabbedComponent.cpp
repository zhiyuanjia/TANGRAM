// TabbedComponent.cpp : Implementation of CTabbedComponent

#include "stdafx.h"
#include "TabbedComponent.h"
#include "tangram.c"
#include "TabbedWnd.h"

//#include "Tangram.c"
// CTabbedComponent

STDMETHODIMP CTabbedComponent::Create(LONGLONG hParentWnd, ITangramNode* pNode, LONGLONG* hWnd)
{
	BSTR bstrTag = L"";
	BSTR bstrTagColor = L"";

	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	USES_CONVERSION;

	pNode->get_Attribute(L"style",&bstrTag);
	pNode->get_Attribute(L"color",&bstrTagColor);

	HWND hPWnd = (HWND)hParentWnd;
	CString m_strTag = OLE2T(bstrTag);
	CString m_strTagColor = OLE2T(bstrTagColor);

	//VARIANT var;
	//IXMLDOMElement* pEle;
	//pNode->get_XMLElement(&pEle);
	//pEle->getAttribute(L"Tag",&var);
	//m_strTag = CString(var.bstrVal);
	//HRESULT hr = pEle->Release();

	HRESULT hr = S_OK;

	m_strTag.Trim();
	m_strTagColor.Trim();
	int nColor = _wtoi(m_strTagColor);
	if (m_strTag.CompareNoCase(_T("")) == 0) m_strTag = _T("10");

	if(::IsWindow(hPWnd))
	{
		CRect rt;
		::GetClientRect(hPWnd,&rt);

		CTabbedWnd* pTangramTabWnd = new CTabbedWnd(pNode);

		//CComObject<CTangramTabbedWnd>* pTangramTabWnd;
		hr = CComObject<CTangramTabbedWndDisp>::CreateInstance(&pTangramTabWnd->m_pTangramTabWndDisp);
		hr = pTangramTabWnd->m_pTangramTabWndDisp->AddRef();

		pTangramTabWnd->m_pTangramNode = pNode;

		BOOL bRet = pTangramTabWnd->Create(NULL,_T(""),WS_CHILD|WS_VISIBLE|WS_CLIPCHILDREN|WS_CLIPSIBLINGS, 
			rt, CWnd::FromHandle(hPWnd), 0);

		CString strFlag = m_strTag;//OLE2T(bstrTagName);
		//strFlag.Format(_T("%d"),m_pTangramXMLObj->m_nStyle);
		CString strPos = strFlag.Left(1);
		strFlag = strFlag.Mid(1);
		int nTabPos = _ttoi(strPos) - 1;
		XTPTabPosition position = (XTPTabPosition)nTabPos;
		pTangramTabWnd->GetPaintManager()->SetPosition(position);
		int nStyle = _ttoi(strFlag);
		XTPColorManager()->SetLunaTheme( xtpSystemThemeAero);
		pTangramTabWnd->GetPaintManager()->SetAppearance((XTPTabAppearanceStyle)nStyle);
		pTangramTabWnd->GetPaintManager()->m_bHotTracking = TRUE;
		pTangramTabWnd->GetPaintManager()->m_bShowIcons = TRUE;
		pTangramTabWnd->GetPaintManager()->DisableLunaColors(FALSE);
		XTPTabColorStyle color = (XTPTabColorStyle)xtpTabColorOffice2003;// m_comboColor.GetItemData(m_nColor);
		if(nColor)
		{
			color = (XTPTabColorStyle)nColor;// m_comboColor.GetItemData(m_nColor);
		}

		pTangramTabWnd->GetPaintManager()->SetColor(color);
		//pTangramTabWnd->GetPaintManager()->SetColorSet();
		pTangramTabWnd->GetPaintManager()->SetOneNoteColors(true);
		pTangramTabWnd->GetPaintManager()->DisableLunaColors(false);
		* hWnd = (long)pTangramTabWnd->m_hWnd;

		hr = pTangramTabWnd->m_pTangramTabWndDisp->Release();
		
		return S_OK;
	}
	return S_OK;
}
