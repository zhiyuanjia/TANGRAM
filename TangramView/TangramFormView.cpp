// TangramFormView.cpp : 实现文件
//

#include "stdafx.h"
#include "dllmain.h"
#include "def.h"
#include "resource.h"
#include "TangramFormView.h"
#include "..\Tangram\OfficePlus\WordPlus\msword.h"

// CTangramFormView

IMPLEMENT_DYNCREATE(CTangramFormView, CFormView)

CTangramFormView::CTangramFormView()
	: CFormView(CTangramFormView::IDD)
{
	m_pClientWnd = NULL;
	m_pNode = NULL;
	m_strXml = _T("");
}

CTangramFormView::~CTangramFormView()
{
	ATLTRACE(_T("delete CTangramFormView:%x\n"), this);
}

void CTangramFormView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//DDX_Control(pDX, IDC_TANGRAMEDIT, m_TangramEdit);
}

BEGIN_MESSAGE_MAP(CTangramFormView, CFormView)
	ON_MESSAGE(WM_TANGRAMDATA, OnGetTangramObj)
	ON_MESSAGE(WM_TGM_SHOWTANGRAM, OnShowTangramObj)
	ON_WM_WINDOWPOSCHANGED()
	ON_BN_CLICKED(IDC_SHOWTANGRAMWORD, &CTangramFormView::OnBnClickedShowtangramword)
	ON_BN_CLICKED(IDC_SHOWTANGRAMEXCEL, &CTangramFormView::OnBnClickedShowtangramexcel)
	ON_WM_MOUSEACTIVATE()
END_MESSAGE_MAP()


// CTangramFormView 诊断

#ifdef _DEBUG
void CTangramFormView::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CTangramFormView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CTangramFormView Message Handler

BOOL CTangramFormView::Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext)
{
	return CFormView::Create(lpszClassName, lpszWindowName, dwStyle, rect, pParentWnd, nID, pContext);
}

void CTangramFormView::OnWindowPosChanged(WINDOWPOS* lpwndpos)
{
	CFormView::OnWindowPosChanged(lpwndpos);

	RECT rc;
	::GetClientRect(m_hWnd, &rc);
	if (m_pClientWnd&&::IsWindow(m_pClientWnd->m_hWnd))
	{
		m_pClientWnd->SetWindowPos(NULL, rc.left+3, rc.top+3, rc.right-rc.left - 6, rc.bottom-rc.top- 6, SWP_NOREDRAW | SWP_NOACTIVATE);
	}

}

void CTangramContentWnd::OnFinalMessage(HWND hWnd)
{
	CWindowImpl::OnFinalMessage(hWnd);
	delete this;
}

CTangramContentWnd::CTangramContentWnd() 
{
	m_pChildWnd = NULL;
}

CTangramContentWnd::~CTangramContentWnd() 
{
}

LRESULT CTangramContentWnd::OnWindowPosChanged(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	WINDOWPOS* lpwndpos = (WINDOWPOS*)lParam;
	lpwndpos->flags |= SWP_NOZORDER | SWP_NOACTIVATE | SWP_NOREDRAW;
	if (m_pChildWnd&&::IsWindow(m_pChildWnd->m_hWnd))
	{
		RECT rc;
		::GetClientRect(m_hWnd, &rc);
		::SetWindowPos(m_pChildWnd->m_hWnd, HWND_BOTTOM, rc.left, rc.top, rc.right-rc.left, rc.bottom-rc.top, SWP_NOACTIVATE | SWP_NOREDRAW);
	}
	return DefWindowProc(uMsg, wParam, lParam);
}


void CTangramFormView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	::PostMessage(m_hWnd, WM_TGM_SHOWTANGRAM, 0, 0);
}

LRESULT CTangramFormView::OnShowTangramObj(WPARAM wParam, LPARAM lParam)
{
	CString strXml = _T("");
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

					strXml = OLE2T(bstr);
					strXml.Trim();

					if (m_strXml.CompareNoCase(strXml))
					{
						m_strXml = strXml;
						if (m_pClientWnd&&::IsWindow(m_pClientWnd->m_hWnd))
						{
							m_pClientWnd->DestroyWindow();
							m_pClientWnd = NULL;
						}
						m_pClientWnd = new CTangramContentWnd();
						m_pClientWnd->m_pChildWnd = new CTangramContentWnd();
						m_pClientWnd->Create(m_hWnd, NULL, NULL, WS_CHILD | WS_VISIBLE | WS_BORDER | WS_CLIPSIBLINGS);// /*WS_EX_WINDOWEDGE||WS_EX_DLGMODALFRAME*/WS_EX_CLIENTEDGE);
						m_pClientWnd->m_pChildWnd->Create(m_pClientWnd->m_hWnd, NULL, NULL, WS_CHILD | WS_VISIBLE);
						CTangramXmlParse m_Parse;
						if (m_Parse.LoadXml(m_strXml) == FALSE)
							return 0;

						ITangram* pTangram;
						_AtlModule.m_pTangramCore->CreateTangram((LONGLONG)m_pClientWnd->m_hWnd, &pTangram);
						if (pTangram)
						{
							CComPtr<ITangramFrame> pFrame;
							pTangram->CreateFrame(CComVariant(0), CComVariant((LONGLONG)m_pClientWnd->m_pChildWnd->m_hWnd), CComBSTR(L""), &pFrame);
							pFrame->put_FrameData(CComBSTR(L"default"), CComVariant(m_strXml));
							ITangramNode* pNode = NULL;
							pFrame->Extend(CComBSTR(L""), m_strXml.AllocSysString(), &pNode);
						}
						RECT rc;
						::GetClientRect(m_hWnd, &rc);
						m_pClientWnd->SetWindowPos(NULL, rc.left + 3, rc.top + 3, rc.right - rc.left - 6, rc.bottom - rc.top - 6, SWP_FRAMECHANGED | SWP_NOACTIVATE);
					}
				}
			}
		}
	}
	return 0;
}

LRESULT CTangramFormView::OnGetTangramObj(WPARAM wParam, LPARAM lParam)
{
	return (LRESULT)this;
}

void CTangramFormView::OnBnClickedShowtangramword()
{
}

void CTangramFormView::OnBnClickedShowtangramexcel()
{
	if (m_pNode)
	{
		ITangramNode* m_pParentNode = NULL;
		m_pNode->get_ParentNode(&m_pParentNode);
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


int CTangramFormView::OnMouseActivate(CWnd* pDesktopWnd, UINT nHitTest, UINT message)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	return CFormView::OnMouseActivate(pDesktopWnd, nHitTest, message);
}
