// VsDesignFormView.cpp : 实现文件
//

#include "stdafx.h"
#include "dllmain.h"
#include "def.h"
#include "resource.h"
#include "VsDesignFormView.h"
#include "..\Tangram\OfficePlus\WordPlus\msword.h"
#include "TangramFormView.h"

// CVsDesignFormView

IMPLEMENT_DYNCREATE(CVsDesignFormView, CFormView)

CVsDesignFormView::CVsDesignFormView()
	: CFormView(IDD_VSDESIGNFORMVIEW)
{
	m_pNode = NULL;
	m_strXml = _T("");
	m_pForm = NULL;
}

CVsDesignFormView::~CVsDesignFormView()
{
}

void CVsDesignFormView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CVsDesignFormView, CFormView)
	ON_BN_CLICKED(IDC_WINFORMBTN, &CVsDesignFormView::OnBnClickedWinformbtn)
	ON_BN_CLICKED(IDC_SHOWVISUALSTUDIO, &CVsDesignFormView::OnBnClickedShowvisualstudio)
	ON_BN_CLICKED(IDC_MFCSDIFRAME, &CVsDesignFormView::OnBnClickedMfcsdiframe)
	ON_BN_CLICKED(IDC_SHOWMDIFRAME, &CVsDesignFormView::OnBnClickedShowmdiframe)
END_MESSAGE_MAP()


// CVsDesignFormView 诊断

#ifdef _DEBUG
void CVsDesignFormView::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CVsDesignFormView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CVsDesignFormView 消息处理程序


BOOL CVsDesignFormView::Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext)
{
	return CFormView::Create(lpszClassName, lpszWindowName, dwStyle, rect, pParentWnd, nID, pContext);
}


void CVsDesignFormView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	ModifyStyle(WS_CLIPCHILDREN, 0);
}


void CVsDesignFormView::OnBnClickedWinformbtn()
{
	// TODO: 在此添加控件通知处理程序代码
}

void CVsDesignFormView::OnBnClickedShowvisualstudio()
{
	CString strXml = _T("");
	if (m_pNode)
	{
		ITangramNode* m_pParentNode = NULL;
		m_pNode->get_RootNode(&m_pParentNode);
		if (m_pParentNode)
		{
			ITangramNode* pNode = NULL;
			CComPtr<ITangramNodeCollection> pCol;
			long nCount = 0;
			m_pParentNode->GetNodes(CComBSTR(L"VSSHOW"), &pNode, &pCol, &nCount);
			if (pNode)
			{
				LONGLONG h = 0;
				pNode->get_Handle(&h);
				HWND hWnd = (HWND)h;
				CTangramFormView* pForm = (CTangramFormView*)::SendMessage(hWnd, WM_TANGRAMDATA, 0, 0);
				if (pForm == NULL)
					return;
				m_pForm = pForm;
			}
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
						if (m_pForm->m_pClientWnd&&::IsWindow(m_pForm->m_pClientWnd->m_hWnd))
						{
							m_pForm->m_pClientWnd->DestroyWindow();
							m_pForm->m_pClientWnd = NULL;
						}
						m_pForm->m_pClientWnd = new CTangramContentWnd();
						m_pForm->m_pClientWnd->m_pChildWnd = new CTangramContentWnd();
						m_pForm->m_pClientWnd->Create(m_pForm->m_hWnd, NULL, NULL, WS_CHILD | WS_VISIBLE | WS_BORDER | WS_CLIPSIBLINGS);// /*WS_EX_WINDOWEDGE||WS_EX_DLGMODALFRAME*/WS_EX_CLIENTEDGE);
						m_pForm->m_pClientWnd->m_pChildWnd->Create(m_pForm->m_pClientWnd->m_hWnd, NULL, NULL, WS_CHILD | WS_VISIBLE);
						CTangramXmlParse m_Parse;
						if (m_Parse.LoadXml(m_strXml) == FALSE)
							return;

						ITangram* pTangram = NULL;
						_AtlModule.m_pTangramCore->CreateTangram((LONGLONG)m_pForm->m_pClientWnd->m_hWnd, &pTangram);
						if (pTangram)
						{
							CComPtr<ITangramFrame> pFrame;
							pTangram->CreateFrame(CComVariant(0), CComVariant((LONGLONG)m_pForm->m_pClientWnd->m_pChildWnd->m_hWnd), CComBSTR(L""), &pFrame);
							ITangramNode* pNode = NULL;
							pFrame->Extend(CComBSTR(L""), m_strXml.AllocSysString(), &pNode);
						}
						RECT rc;
						::GetClientRect(m_pForm->m_hWnd, &rc);
						m_pForm->m_pClientWnd->SetWindowPos(NULL, rc.left + 3, rc.top + 3, rc.right - rc.left - 6, rc.bottom - rc.top - 6, SWP_FRAMECHANGED | SWP_NOACTIVATE);
					}
				}
			}
		}
	}
}


void CVsDesignFormView::OnBnClickedMfcsdiframe()
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
					CString strKey = _T("TangramMFCApp.Application.1");
					ITangramCore* pTangramCore = NULL;
					_AtlModule.m_pTangramCore->ConnectApp(strKey.AllocSysString(),&pTangramCore);
					LONGLONG hMainWnd = 0;
					LONGLONG hFrameWnd = 0;
					if (pTangramCore)
					{
						CComVariant var;
						pTangramCore->get_TangramVal(CComBSTR(L"MainWnd"), &var);
						hMainWnd = var.llVal;
						var.Clear();
						pTangramCore->get_TangramVal(CComBSTR(L"DefaultFrameWnd"), &var);
						hFrameWnd = var.llVal;
						var.Clear();
					}
					//HWND hWnd = (HWND)hMainWnd;
					//CComPtr<ITangramNode> pNode;
					//pTangramCore->ExtendXml(bstr, CComBSTR(bstr), (IDispatch**)&pNode);
					//ULONG dw = pTangramCore->Release();

					//theApp.m_mapRemoteTangramCore[strAppID]
					//_AtlModule.m_pTangramCore->ShowOfficeObj(CComBSTR(strKey), CComBSTR(L"TangramFormView"), bstr, (IDispatch**)&pNode21);
					//strKey.MakeLower();
					//theApp.m_pTangramHelper->ShowXMLWithWindow(CComBSTR(strKey), CComBSTR(L""), bstr);
					//_AtlModule.m_pTangramCore->ShowOfficeObj(CComBSTR(L"excel.Application"), CComBSTR(L"TangramFormView"), bstr, (IDispatch**)&pNode21);
				}
			}
		}
	}	
}


void CVsDesignFormView::OnBnClickedShowmdiframe()
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
					CString strKey = _T("TangramApp.AppObject.1");
					ITangramCore* pTangramCore = NULL;
					_AtlModule.m_pTangramCore->ConnectApp(strKey.AllocSysString(), &pTangramCore);
					LONGLONG hMainWnd = 0;
					LONGLONG hFrameWnd = 0;
					if (pTangramCore)
					{
						CComVariant var;
						pTangramCore->get_TangramVal(CComBSTR(L"MainWnd"), &var);
						hMainWnd = var.llVal;
						var.Clear();
						pTangramCore->get_TangramVal(CComBSTR(L"DefaultFrameWnd"), &var);
						hFrameWnd = var.llVal;
						var.Clear();

						CComPtr<IDispatch> pNode;
						pTangramCore->ExtendXml(bstr, CComBSTR(bstr), &pNode);
					}
				}
			}
		}
	}
}
