// TangramOfficeToolView.cpp : 实现文件
//

#include "stdafx.h"
#include "dllmain.h"
#include "resource.h"
#include "TangramOfficeToolView.h"
#include "def.h"
#include "..\Tangram\OfficePlus\WordPlus\msword.h"
#include "TangramFormView.h"

// CTangramOfficeToolView

IMPLEMENT_DYNCREATE(CTangramOfficeToolView, CFormView)

CTangramOfficeToolView::CTangramOfficeToolView()
	: CFormView(IDD_TANGRAMOFFICETOOLVIEW)
{
	m_pNode = NULL;
	m_strXml = _T("");
	m_pForm = NULL;
}

CTangramOfficeToolView::~CTangramOfficeToolView()
{
}

void CTangramOfficeToolView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CTangramOfficeToolView, CFormView)
	ON_BN_CLICKED(IDC_SHOWMSWORD, &CTangramOfficeToolView::OnBnClickedShowmsword)
	ON_BN_CLICKED(IDC_SHOWMSEXCEL, &CTangramOfficeToolView::OnBnClickedShowmsexcel)
END_MESSAGE_MAP()


// CTangramOfficeToolView 诊断

#ifdef _DEBUG
void CTangramOfficeToolView::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CTangramOfficeToolView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CTangramOfficeToolView 消息处理程序


BOOL CTangramOfficeToolView::Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext)
{
	// TODO: 在此添加专用代码和/或调用基类

	return CFormView::Create(lpszClassName, lpszWindowName, dwStyle, rect, pParentWnd, nID, pContext);
}


void CTangramOfficeToolView::OnBnClickedShowmsword()
{
	if (m_pNode)
	{
		ITangramNode* m_pParentNode = NULL;
		m_pNode->get_RootNode(&m_pParentNode);
		if (m_pParentNode)
		{
			CComPtr<IDispatch> pDisp;
			m_pParentNode->get_Extender(&pDisp);
			if (pDisp)
			{
				CComQIPtr<ITextDocument>pText(pDisp);
				if (pText)
				{
					CComPtr<ITextRange> rspITextRange;
					pText->Range(0, tomForward, &rspITextRange);
					CComBSTR bstr(L"");
					rspITextRange->GetText(&bstr);
					CComPtr < ITangramNode> pNode21;
					_AtlModule.m_pTangramCore->ShowOfficeObj(CComBSTR(L"word.Application"), CComBSTR(L"TangramFormView"), bstr, (IDispatch**)&pNode21);
				}
			}
		}
	}
}


void CTangramOfficeToolView::OnBnClickedShowmsexcel()
{
	if (m_pNode)
	{
		ITangramNode* m_pParentNode = NULL;
		m_pNode->get_RootNode(&m_pParentNode);
		if (m_pParentNode)
		{
			CComPtr<IDispatch> pDisp;
			m_pParentNode->get_Extender(&pDisp);
			if (pDisp)
			{
				CComQIPtr<ITextDocument>pText(pDisp);
				if (pText)
				{
					CComPtr<ITextRange> rspITextRange;
					pText->Range(0, tomForward, &rspITextRange);
					CComBSTR bstr(L"");
					rspITextRange->GetText(&bstr);
					CComPtr < ITangramNode> pNode21;
					_AtlModule.m_pTangramCore->ShowOfficeObj(CComBSTR(L"excel.Application"), CComBSTR(L"TangramFormView"), bstr, (IDispatch**)&pNode21);
				}
			}
		}
	}
}


void CTangramOfficeToolView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();

	ModifyStyle(WS_CLIPCHILDREN, 0);
}
