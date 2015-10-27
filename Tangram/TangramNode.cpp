/********************************************************************************
*					Tangram Library - version 8.0								*
*********************************************************************************
* Copyright (C) 2002-2015 by Tangram Team.   All Rights Reserved.				*
*
* THIS SOURCE FILE IS THE PROPERTY OF TANGRAM TEAM AND IS NOT TO
* BE RE-DISTRIBUTED BY ANY MEANS WHATSOEVER WITHOUT THE EXPRESSED
* WRITTEN CONSENT OF TANGRAM TEAM.
*
* THIS SOURCE CODE CAN ONLY BE USED UNDER THE TERMS AND CONDITIONS
* OUTLINED IN THE GPL LICENSE AGREEMENT.TANGRAM TEAM
* GRANTS TO YOU (ONE SOFTWARE DEVELOPER) THE LIMITED RIGHT TO USE
* THIS SOFTWARE ON A SINGLE COMPUTER.
*
* CONTACT INFORMATION:
* mailto:sunhui@tangramfx.com
* http://www.tangramFX.com
*
*
********************************************************************************/

// TangramNode.cpp : Implementation of CTangramNode

#include "stdafx.h"
#include "TangramNode.h"

// CTangramNodeWBEvent
CTangramNodeWBEvent::CTangramNodeWBEvent(CTangramNode* pNode)
{
	m_pHTMLDocument2 = NULL;
	m_pTangramNode = pNode;
	DispEventAdvise(m_pTangramNode->m_pDisp);
}

void CTangramNodeWBEvent::OnNavigateComplete2(IDispatch* pDisp, VARIANT* URL)
{
	if (m_pTangramNode->m_pDisp == pDisp)
	{
		ConnectJSEngine(NULL);
		CTangram* pTangram = m_pTangramNode->m_pFrame->m_pTangram;
		if (m_pHTMLDocument2)
		{
			map<IHTMLDocument2*, CTangramJSExtender*>::iterator it = pTangram->m_mapTangramJSExtender.find(m_pHTMLDocument2);
			if (it != pTangram->m_mapTangramJSExtender.end())
			{
				pTangram->m_mapTangramJSExtender.erase(it);
			}
		}
		CComQIPtr<IWebBrowser2> pWeb2(pDisp);
		CComPtr<IDispatch> pDispDoc;
		pWeb2->get_Document(&pDispDoc);
		CComQIPtr<IHTMLDocument2> pHtmlDocument2(pDispDoc);
		if (pHtmlDocument2&&pTangram)
		{
			m_pHTMLDocument2 = pHtmlDocument2.Detach();
			pTangram->m_mapTangramJSExtender[m_pHTMLDocument2] = this;
			CComPtr<IDispatch> pScriptDisp;
			CComPtr<IDispatchEx> _pScriptEx;
			if (m_pHTMLDocument2->get_Script(&pScriptDisp) == S_OK&&pScriptDisp->QueryInterface<IDispatchEx>(&_pScriptEx) == S_OK)
			{
				ConnectJSEngine(_pScriptEx);
				AddObject(_T("TangramCore"), theApp.m_pTangramCore);
				AddObject(_T("Tangram"), (ITangram*)pTangram);
				SinkObject(_T("Tangram_On"), (ITangram*)pTangram);

				map<CString, IDispatch*>::iterator it2 = pTangram->m_mapExternalObj.end();
				for (it2 = pTangram->m_mapExternalObj.begin(); it2 != pTangram->m_mapExternalObj.end(); it2++)
				{
					AddObject(it2->first, (IDispatch*)it2->second);
					SinkObject(it2->first + _T("_On"), (ITangram*)it2->second);
				}
			}
		}
	}
}

void CTangramNodeWBEvent::OnDocumentComplete(IDispatch *pDisp, VARIANT *URL)
{
	if (m_pTangramNode->m_pDisp == pDisp)
	{
		CTangram* pTangram = m_pTangramNode->m_pTangram;
		if (pTangram)
		{
			bool bState = false;
			map<HWND, CTangramFrame*>::iterator it;
			map<CString, CTangramNode*>::iterator it2;
			for (it = pTangram->m_mapFrame.begin(); it != pTangram->m_mapFrame.end(); it++)
			{
				for (it2 = it->second->m_mapNode.begin(); it2 != it->second->m_mapNode.end(); it2++)
				{
					if (it2->second->m_bCreated == false)
					{
						::PostMessage(pTangram->m_hWnd, WM_TANGRAM_WEBNODEDOCCOMPLETE, 0, 0);
						return;
					}
				}
			}
			m_pTangramNode->m_bNodeDocComplete = true;
			CComPtr<IHTMLWindow2> pWinDisp;
			m_pHTMLDocument2->get_parentWindow(&pWinDisp);
			pTangram->Fire_PageLoaded(pWinDisp.p, CComBSTR(m_pTangramNode->m_strURL));
		}
	}
}

CTangramNode::CTangramNode()
{
#ifdef _DEBUG
	theApp.m_nTangramObj++;
#endif

	m_nViewType					= BlankView;
	m_nRows						= 1;
	m_nCols						= 1;
	m_nRow						= 0;
	m_nCol						= 0;
	m_nID						= 0;

	m_bTopObj					= false;
	m_bWebInit					= false;
	m_bCreated					= false;
	m_bNodeDocComplete			= false;
	m_varTag.vt					= VT_EMPTY;
	m_strKey					= _T("");
	m_strURL					= _T("");
	m_strRootName				= _T("");
	m_strWebObjName				= _T("");
	m_strExtenderID				= _T("");
	m_strPreFixName				= _T("");
	m_strVSToolWndScript		= _T("");
	m_hHostWnd					= NULL;
	m_pDisp						= NULL;
	m_pTangram					= NULL;
	m_pFrame					= NULL;
	m_pHostFrame				= NULL;
	m_pRootObj					= NULL;
	m_pHostWnd					= NULL;
	m_pExtender					= NULL;
	m_pParentObj				= NULL;
	m_pObjClsInfo				= NULL;
	m_pVisibleXMLObj			= NULL;
	m_pHostClientView			= NULL; 
	m_pCLREventConnector		= NULL;
	m_pTangramNodeWBEvent		= NULL;
	m_pChildNodeCollection		= NULL;

	theApp.m_pTangramNode		= this;
}

CTangramNode::~CTangramNode()
{
	if (m_pTangram)
	{
		map<CString, CTangramNode*>::iterator it2 = m_pTangram->m_mapNode.find(m_strWebObjName);
		if (it2 != m_pTangram->m_mapNode.end())
			m_pTangram->m_mapNode.erase(it2);
	}

	if (m_strKey!=_T(""))
	{
		map<CString, CTangramNode*>::iterator it = m_pFrame->m_mapNode.find(m_strKey);
		if (it != m_pFrame->m_mapNode.end())
		{
			m_pFrame->m_mapNode.erase(it);
			if (m_pFrame->m_mapNode.size() == 0)
			{
				if (::IsWindow(m_pFrame->m_hWnd))
				{
					m_pFrame->UnsubclassWindow(true);
				}
				delete m_pFrame;

			}
		}
	}

	if (m_pCLREventConnector)
	{
		HRESULT hr = m_pCLREventConnector->DispEventUnadvise((ITangramNode*)this);
		delete m_pCLREventConnector;
		m_pCLREventConnector = NULL;
	}

#ifdef _DEBUG
	theApp.m_nTangramObj--;
#endif
	HRESULT hr = S_OK;
	DWORD dw = 0;

	if (m_pExtender)
	{
		dw = m_pExtender->Release();
		m_pExtender = NULL;
	}

	if (m_pDisp)
		CCommonFunction::ClearObject<IUnknown>(m_pDisp);

	m_vChildNodes.clear();

	if (m_pChildNodeCollection != NULL)
	{
		dw = m_pChildNodeCollection->Release();
		m_pChildNodeCollection = NULL;
	}
	ATLTRACE(_T("delete CTangramNode:%x\n"), this);
}

BOOL CTangramNode::PreTranslateMessage(MSG* pMsg)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	if(m_pHostWnd&&pMsg->message != WM_MOUSEMOVE)
	{
		m_pHostWnd->PreTranslateMessage(pMsg);
		CTangramNodeVector::iterator it;
		for(it = m_vChildNodes.begin(); it != m_vChildNodes.end(); it++)
		{
			CTangramNode* pChildNode = *it;
			pChildNode->PreTranslateMessage(pMsg);
		}
	}
	return true;
}

STDMETHODIMP CTangramNode::ActiveTabPage(ITangramNode* _pNode)
{
	theApp.m_pTangramNode = this;
	if (::IsWindow(m_pHostWnd->m_hWnd))
		::SetFocus(m_pHostWnd->m_hWnd);
	theApp.HostPosChanged(this);
	return S_OK;
}

STDMETHODIMP CTangramNode::Extend(BSTR bstrKey, BSTR bstrXml, ITangramNode** ppRetNode)
{
	if (m_pTangram&&(m_nViewType==ActiveX||m_nViewType==CLRCtrl|| m_nViewType == BlankView))
	{
		if (m_pHostFrame == NULL)
		{
			CString strName = m_strWebObjName;
			strName += _T("_Frame");

			if(m_nViewType == BlankView)
				m_hHostWnd = ::CreateWindowEx(NULL, L"Tangram Window Class", NULL, WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN, 0, 0, 0, 0, m_pHostWnd->m_hWnd, NULL, AfxGetInstanceHandle(), NULL);
			else
				m_hHostWnd = ::GetWindow(m_pHostWnd->m_hWnd,GW_CHILD);
			m_pTangram->CreateFrame(CComVariant(0),CComVariant((LONGLONG)m_hHostWnd),strName.AllocSysString(),&m_pHostFrame);
			((CTangramFrame*)m_pHostFrame)->m_pHostNode = this;
		}
		if (m_pHostFrame&&::IsWindow(m_hHostWnd))
		{
			HRESULT hr = m_pHostFrame->Extend(bstrKey, bstrXml, ppRetNode);
			CTangramNode* pRootNode = (CTangramNode*)*ppRetNode;
			pRootNode->m_pHostFrame = m_pHostFrame;
			RECT rect;
			::GetWindowRect(pRootNode->m_pHostWnd->m_hWnd, &rect);
			HWND hWnd = ::GetParent(pRootNode->m_pHostWnd->m_hWnd);
			CTangramNode* pNode = (CTangramNode*)::SendMessage(hWnd, WM_TANGRAMMSG, 0, 0);
			if (pNode->m_nViewType == ViewType::TabbedWnd)
			{
				pNode->m_pHostWnd->ScreenToClient(&rect);
				((CTangramFrame*)m_pHostFrame)->m_x = rect.left;
				((CTangramFrame*)m_pHostFrame)->m_y = rect.top;
			}
			return hr;
		}
	}
	return S_OK;
}

STDMETHODIMP CTangramNode::get_Tag(VARIANT* pVar)
{
	*pVar = m_varTag;

	if (m_varTag.vt == VT_DISPATCH && m_varTag.pdispVal)
		m_varTag.pdispVal->AddRef();
	return S_OK;
}

STDMETHODIMP CTangramNode::put_Tag(VARIANT var)
{
	m_varTag = var;
	return S_OK;
}

STDMETHODIMP CTangramNode::get_XObject(VARIANT* pVar)
{
	pVar->vt = VT_EMPTY;

	pVar->pdispVal = m_pDisp;
	if (pVar->pdispVal)
	{
		pVar->vt = VT_DISPATCH;
		pVar->pdispVal->AddRef();
	}
	return S_OK;
}

STDMETHODIMP CTangramNode::get_AxPlugIn(BSTR bstrPlugInName, IDispatch** pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	CString strObjName = OLE2T(bstrPlugInName);
	strObjName.Trim();
	strObjName.MakeLower();
	IDispatch* pDisp = NULL;
	if(m_pRootObj->m_PlugInDispDictionary.Lookup(LPCTSTR(strObjName),(void*&)pDisp))
	{
		* pVal = pDisp;
		(* pVal)->AddRef();
	}
	else
		*pVal = NULL;
	return S_OK;
} 

STDMETHODIMP CTangramNode::get_Name(BSTR* pVal)
{
	*pVal = m_strName.AllocSysString();
	return S_OK;
}

STDMETHODIMP CTangramNode::get_Attribute(BSTR bstrKey, BSTR* pVal)
{
	IXMLDOMElement* ele = NULL;
	m_ObjItem.elem.QueryInterface<IXMLDOMElement>(&ele);
	if (ele != NULL)
	{
		VARIANT var;
		ele->getAttribute(bstrKey,&var);		
		ele->Release();

		if (var.vt == VT_BSTR)
		{
			*pVal = var.bstrVal;
		}
	}
	return S_OK;
}

STDMETHODIMP CTangramNode::put_Attribute(BSTR bstrKey, BSTR bstrVal)
{
	IXMLDOMElement* ele = NULL;
	m_ObjItem.elem.QueryInterface<IXMLDOMElement>(&ele);
	if (ele != NULL)
	{
		ele->setAttribute(bstrKey,CComVariant(bstrVal));
		ele->Release();
	}
	return S_OK;
}

STDMETHODIMP CTangramNode::get_Caption(BSTR* pVal)
{
	*pVal = m_strCaption.AllocSysString();
	return S_OK;
}

STDMETHODIMP CTangramNode::put_Caption(BSTR bstrCaption)
{
	CString str(bstrCaption);

	m_strCaption = str;

	if (m_pParentObj != NULL && m_pParentObj->m_pHostWnd != NULL)
	{
		m_pParentObj->m_pHostWnd->SendMessage(WM_TGM_SET_CAPTION,m_nCol,(LPARAM)str.GetBuffer());
	}

	IXMLDOMElement* ele = NULL;
	m_ObjItem.elem.QueryInterface<IXMLDOMElement>(&ele);

	if (ele != NULL)
	{
		ele->setAttribute(L"caption",CComVariant(str));
		ele->Release();
	}
	return S_OK;
}

STDMETHODIMP CTangramNode::get_Handle(LONGLONG* pVal)
{
	if(m_pHostWnd)	
		*pVal = (LONGLONG)m_pHostWnd->m_hWnd;
	return S_OK;
}


STDMETHODIMP CTangramNode::get_OuterXml(BSTR* pVal)
{
	IXMLDOMElement* pElement = NULL;
	m_TangramDocNode.elem.QueryInterface<IXMLDOMElement>(&pElement);
	if (pElement != NULL)
	{
		pElement->get_xml(pVal);
		pElement->Release();
	}
	return S_OK;
}

STDMETHODIMP CTangramNode::get_Key(BSTR* pVal)
{
	*pVal = m_pRootObj->m_strKey.AllocSysString();
	return S_OK;
}

STDMETHODIMP CTangramNode::get_XML(BSTR* pVal)
{
	IXMLDOMElement* ele = NULL;
	m_ObjItem.elem.QueryInterface<IXMLDOMElement>(&ele);
	if (ele != NULL)
	{
		ele->get_xml(pVal);
		ele->Release();
	}

	return S_OK;
}

HWND CTangramNode::CreateView(HWND hParentWnd, CString strTag)
{
	BOOL bWebCtrl = false;
	CString strURL = _T("");
	CString strID = strTag;
	auto hWnd = ::CreateWindowEx(NULL,L"Tangram Window Class", NULL, WS_CHILD | WS_VISIBLE| WS_CLIPSIBLINGS | WS_CLIPCHILDREN, 0, 0, 0, 0, hParentWnd, NULL, AfxGetInstanceHandle(), NULL);
	//if (::IsWindow(this->m_pHostWnd->m_hWnd) == false)
	//	 = m_pHostWnd->SubclassWindow(hWnd);
	CComBSTR bstr2;
	get_Attribute(CComBSTR("Name"), &bstr2);
	CString strName = OLE2T(bstr2);
	switch (m_nViewType)
	{
	case ActiveX:
		{
			strID.MakeLower();
			auto nPos = strID.Find(_T("http:"));
			if (nPos == -1)
				nPos = strID.Find(_T("https:"));
			if (m_pFrame)
			{
				CComBSTR bstr;
				get_Attribute(CComBSTR("InitInfo"), &bstr);
				CString str = _T("");
				str += bstr;
				if (str != _T("") && m_pTangram)
				{
					LRESULT hr = ::SendMessage(m_pTangram->m_hWnd, WM_GETNODEINFO, (WPARAM)OLE2T(bstr), (LPARAM)hParentWnd);
					if (hr)
					{
						CString strInfo = _T("");
						CWindow m_wnd;
						m_wnd.Attach(hParentWnd);
						m_wnd.GetWindowText(strInfo);
						strID += strInfo;
						m_wnd.Detach();
					}
				}
			}

			if (strID.Find(_T("http://")) != -1 || strID.Find(_T("https://")) != -1)
			{
				bWebCtrl = true;

				strURL = strID;
				strID = _T("shell.explorer.2");
			}

			if (strID.Find(_T("res://")) != -1 || ::PathFileExists(strID))
			{
				bWebCtrl = true;
				strURL = strID;
				strID = _T("shell.explorer.2");
			}

			if (m_pDisp == NULL)
			{
				CComPtr<IDispatch> pDisp;
				HRESULT hr = pDisp.CoCreateInstance(CComBSTR(strID));
				if (hr == S_OK)
				{
					m_pDisp = pDisp.Detach();
					//CAxWindow m_Wnd;
					//m_Wnd.Attach(hWnd);
					//CComPtr<IUnknown> pUnk;
					//m_Wnd.AttachControl(m_pDisp, &pUnk);
					//m_Wnd.Detach();
				}
			}
		}
		break;
	case CLRCtrl:
		{
			if (theApp.m_pTangramCLRProxy)
				m_pDisp = theApp.m_pTangramCLRProxy->TangramCreateObject(strTag.AllocSysString(), (LONGLONG)hParentWnd, this);
		}
		break;
	}
	if (m_pDisp)
	{
		CAxWindow m_Wnd;
		m_Wnd.Attach(hWnd);
		CComPtr<IUnknown> pUnk;
		m_Wnd.AttachControl(m_pDisp, &pUnk);
		if (m_nViewType == ActiveX)
		{
			CComQIPtr<IWebBrowser2> pWebDisp(m_pDisp);
			if (pWebDisp)
			{
				bWebCtrl = true;
				m_strURL = strURL;
				if (m_strURL == _T(""))
					m_strURL = strID;
				if (m_pFrame)
				{
					if (m_pTangram)
						m_pTangram->m_nWebViewCount++;

					m_pTangramNodeWBEvent = new CTangramNodeWBEvent(this);
				}
				CComPtr<IAxWinAmbientDispatch> spHost;
				LRESULT hr = m_Wnd.QueryHost(&spHost);
				if (SUCCEEDED(hr))
				{
					CComBSTR bstr;
					get_Attribute(CComBSTR("scrollbar"), &bstr);
					CString str = OLE2T(bstr);
					if (str == _T("1"))
						spHost->put_DocHostFlags(DOCHOSTUIFLAG_NO3DBORDER | DOCHOSTUIFLAG_ENABLE_FORMS_AUTOCOMPLETE | DOCHOSTUIFLAG_THEME);//DOCHOSTUIFLAG_DIALOG|
					else
						spHost->put_DocHostFlags(/*DOCHOSTUIFLAG_DIALOG|*/DOCHOSTUIFLAG_SCROLL_NO | DOCHOSTUIFLAG_NO3DBORDER | DOCHOSTUIFLAG_ENABLE_FORMS_AUTOCOMPLETE | DOCHOSTUIFLAG_THEME);

					if (m_strURL != _T(""))
					{
						pWebDisp->Navigate2(&CComVariant(m_strURL), &CComVariant(navNoReadFromCache | navNoWriteToCache), NULL, NULL, NULL);
						m_bWebInit = true;
					}
				}
			}
		}
		CComQIPtr<IOleInPlaceActiveObject> pIOleInPlaceActiveObject(m_pDisp);
		if (pIOleInPlaceActiveObject)
			((CTangramWnd*)m_pHostWnd)->m_pOleInPlaceActiveObject = pIOleInPlaceActiveObject.Detach();
		m_Wnd.Detach();
	}

	return hWnd;
}

STDMETHODIMP CTangramNode::get_ChildNodes(ITangramNodeCollection** pNodeColletion)
{
	if (m_pChildNodeCollection == NULL)
	{
		CComObject<CTangramNodeCollection>::CreateInstance(&m_pChildNodeCollection);
		m_pChildNodeCollection->AddRef();		
		m_pChildNodeCollection->m_pNodes = &m_vChildNodes;
	}
	return m_pChildNodeCollection->QueryInterface(IID_ITangramNodeCollection,(void**)pNodeColletion);
}

int CTangramNode::_getNodes(CTangramNode* pNode, CString& strName,CTangramNode**ppRetNode, CTangramNodeCollection* pNodes)
{
	int iCount = 0;
	if (pNode->m_strName.CompareNoCase(strName) == 0)
	{
		if (pNodes != NULL)
			pNodes->m_pNodes->push_back(pNode);

		if (ppRetNode != NULL && (*ppRetNode) == NULL)
			*ppRetNode = pNode;
		return 1;
	}

	for(CTangramNodeVector::iterator it = pNode->m_vChildNodes.begin(); it != pNode->m_vChildNodes.end(); it++)
	{
		iCount += _getNodes(*it,strName,ppRetNode, pNodes);
	}
	return iCount;
}

STDMETHODIMP CTangramNode::Show()
{
	CTangramNode* pChild = this;
	CTangramNode* pParent = pChild->m_pParentObj;

	while(pParent != NULL)
	{
		pParent->m_pHostWnd->SendMessage(WM_ACTIVETABPAGE,(WPARAM)pChild->m_nCol,(LPARAM)1);

		pChild = pParent;
		pParent = pChild->m_pParentObj;
	}
	return S_OK;
}
STDMETHODIMP CTangramNode::get_RootNode(ITangramNode** ppNode)
{
	if (m_pRootObj != NULL)
		*ppNode = m_pRootObj;
	return S_OK;
}
STDMETHODIMP CTangramNode::get_ParentNode(ITangramNode** ppNode)
{
	*ppNode = NULL;
	if (m_pParentObj != NULL)
		*ppNode = m_pParentObj;

	return S_OK;
}

STDMETHODIMP CTangramNode::get_NodeType(TangramNodeType* nType)
{
	*nType = (TangramNodeType)m_nViewType;
	return S_OK;
}

void CTangramNode::_get_Objects(CTangramNode* pNode, UINT32& nType, CTangramNodeCollection* pNodeColletion)
{
	if (pNode->m_nViewType & nType)
	{
		pNodeColletion->m_pNodes->push_back(pNode);
	}

	CTangramNode* pChildNode = NULL;
	CTangramNodeVector::iterator it;
	for(it = pNode->m_vChildNodes.begin(); it != pNode->m_vChildNodes.end(); it++)
	{
		pChildNode = *it;
		_get_Objects(pChildNode,nType,pNodeColletion);
	}
}

STDMETHODIMP CTangramNode::get_Objects(long nType, ITangramNodeCollection** ppNodeColletion)
{
	CComObject<CTangramNodeCollection>* pNodes = NULL;
	CComObject<CTangramNodeCollection>::CreateInstance(&pNodes);

	pNodes->AddRef();	

	UINT32 u = nType;
	_get_Objects(this,u,pNodes);
	HRESULT hr = pNodes->QueryInterface(IID_ITangramNodeCollection,(void**)ppNodeColletion);

	pNodes->Release();

	return hr;
}

STDMETHODIMP CTangramNode::get_Rows(long* nRows)
{
	*nRows = m_nRows;
	return S_OK;
}
STDMETHODIMP CTangramNode::get_Cols(long* nCols)
{
	*nCols = m_nCols;
	return S_OK;
}

STDMETHODIMP CTangramNode::get_Row(long* nRow)
{
	*nRow = m_nRow;
	return S_OK;
}
STDMETHODIMP CTangramNode::get_Col(long* nCol)
{
	*nCol = m_nCol;
	return S_OK;
}

STDMETHODIMP CTangramNode::GetNode(long nRow, long nCol,ITangramNode** ppTangramNode)
{
	CTangramNode* pRet = NULL;
	auto bFound = false;

	*ppTangramNode = NULL;
	if (nRow < 0 || nCol < 0 || nRow >= m_nRows || nCol >= m_nCols) return E_INVALIDARG;

	CTangramNodeVector::iterator it;
	for(it = m_vChildNodes.begin(); it != m_vChildNodes.end(); it++)
	{
		pRet = *it;
		if (pRet->m_nCol == nCol && pRet->m_nRow == nRow)
		{
			bFound = true;
			break;
		}
	}

	HRESULT hr = S_OK;
	if (bFound)
	{
		hr = pRet->QueryInterface(IID_ITangramNode,(void**)ppTangramNode);
	}
	return hr;
}

STDMETHODIMP CTangramNode::GetNodes(BSTR bstrName,ITangramNode** ppNode,ITangramNodeCollection** ppNodes,long* pCount)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	CString strName(bstrName);

	CTangramNode* pRetNode = NULL;

	if (ppNode != NULL)
		*ppNode = NULL;

	CComObject<CTangramNodeCollection>* pNodes = NULL;
	if (ppNodes != NULL)
	{
		*ppNodes = NULL;
		CComObject<CTangramNodeCollection>::CreateInstance(&pNodes);
		pNodes->AddRef();
	}

	int iCount = _getNodes(this,strName,&pRetNode,pNodes);

	*pCount = iCount;

	if ((iCount > 0) && (ppNode != NULL))
		pRetNode->QueryInterface(IID_ITangramNode,(void**)ppNode);	

	if (ppNodes != NULL)
		pNodes->QueryInterface(IID_ITangramNodeCollection,(void**)ppNodes);

	if (pNodes != NULL)
		pNodes->Release();

	return S_OK;
}

BOOL CTangramNode::AddChildNode(CTangramNode* pNode)
{
	m_vChildNodes.push_back(pNode);
	pNode->m_pParentObj = this;
	pNode->m_pFrame = m_pFrame;
	pNode->m_pRootObj = m_pRootObj;
	return TRUE;
}

BOOL CTangramNode::RemoveChildNode(CTangramNode* pNode)
{
	CTangramNodeVector::iterator it;
	it = find(m_vChildNodes.begin(), m_vChildNodes.end(), pNode);

	if (it != m_vChildNodes.end())
	{
		m_vChildNodes.erase(it);
		return TRUE;
	}
	return FALSE;
}

STDMETHODIMP CTangramNode::get_Frame(ITangramFrame** pVal)
{
	if(m_pFrame)
		*pVal = m_pFrame;

	return S_OK;
}

STDMETHODIMP CTangramNode::Refresh(void)
{
	if(m_pDisp)
	{
		CComQIPtr<IWebBrowser2> pWebCtrl(m_pDisp);
		if(pWebCtrl)
			pWebCtrl->Refresh();
	}

	return S_OK;
}

STDMETHODIMP CTangramNode::get_Height(LONG* pVal)
{
	RECT rc;
	::GetClientRect(m_pHostWnd->m_hWnd,&rc);
	*pVal = rc.bottom;
	return S_OK;
}

STDMETHODIMP CTangramNode::get_Width(LONG* pVal)
{
	RECT rc;
	::GetClientRect(m_pHostWnd->m_hWnd, &rc);
	*pVal = rc.right;

	return S_OK;
}

STDMETHODIMP CTangramNode::get_Extender(IDispatch** pVal)
{
	if(m_pExtender)
	{
		* pVal = m_pExtender;
		(* pVal)->AddRef();
	}
	return S_OK;
}

STDMETHODIMP CTangramNode::put_Extender(IDispatch* newVal)
{
	if(m_pExtender)
		m_pExtender->Release();
	m_pExtender = newVal;
	m_pExtender->AddRef();

	return S_OK;
}

STDMETHODIMP CTangramNode::get_Tangram(ITangram** pVal)
{
	if (m_pFrame->m_pTangram)
		*pVal = (ITangram*)m_pFrame->m_pTangram;

	return S_OK;
}

STDMETHODIMP CTangramNode::get_HTMLWindow(IDispatch** pVal)
{
	if (m_pTangramNodeWBEvent&&m_pTangramNodeWBEvent->m_pHTMLDocument2)
	{
		CComPtr<IHTMLWindow2> pHTMLWindow2;
		m_pTangramNodeWBEvent->m_pHTMLDocument2->get_parentWindow(&pHTMLWindow2);
		*pVal = pHTMLWindow2.Detach();
		(*pVal)->AddRef();
	}
	return S_OK;
}

STDMETHODIMP CTangramNode::get_HtmlDocument(IDispatch** pVal)
{
	if (m_pTangramNodeWBEvent&&m_pTangramNodeWBEvent->m_pHTMLDocument2)
	{
		*pVal = m_pTangramNodeWBEvent->m_pHTMLDocument2;
		(*pVal)->AddRef();
	}

	return S_OK;
}

STDMETHODIMP CTangramNode::get_TangramName(BSTR* pVal)
{
	*pVal = m_strWebObjName.AllocSysString();
	return S_OK;
}

STDMETHODIMP CTangramNode::GetCtrlByName(BSTR bstrName, VARIANT_BOOL bFindInChild, IDispatch** ppRetDisp)
{
	if (theApp.m_pTangramCLRProxy&&m_pDisp)
		*ppRetDisp=theApp.m_pTangramCLRProxy->GetCtrlByName(m_pDisp, bstrName, bFindInChild?true:false);

	return S_OK;
}

CTangramNodeCollection::CTangramNodeCollection()
{
	m_pNodes = &m_vNodes;
	theApp._addObject(this, this);
}

CTangramNodeCollection::~CTangramNodeCollection()
{
	theApp._removeObject(this);
	m_vNodes.clear();
}

STDMETHODIMP CTangramNodeCollection::get_NodeCount(long* pCount)
{
	*pCount = (int)m_pNodes->size();
	return S_OK;
}

STDMETHODIMP CTangramNodeCollection::get_Item(long iIndex, ITangramNode **ppNode)
{
	if (iIndex < 0 || iIndex >= (int)m_pNodes->size()) return E_INVALIDARG;

	CTangramNode* pNode = m_pNodes->operator [](iIndex);

	return pNode->QueryInterface(IID_ITangramNode, (void**)ppNode);
}

STDMETHODIMP CTangramNodeCollection::get__NewEnum(IUnknown** ppVal)
{
	*ppVal = NULL;

	struct _CopyVariantFromIUnkown
	{
		static HRESULT copy(VARIANT* p1, CTangramNode* const* p2)
		{
			CTangramNode* pNode = *p2;
			p1->vt = VT_UNKNOWN;
			return pNode->QueryInterface(IID_IUnknown, (void**)&(p1->punkVal));
		}

		static void init(VARIANT* p)	{ VariantInit(p); }
		static void destroy(VARIANT* p)	{ VariantClear(p); }
	};

	typedef CComEnumOnSTL<IEnumVARIANT, &IID_IEnumVARIANT, VARIANT, _CopyVariantFromIUnkown, CTangramNodeVector>
		CComEnumVariantOnVector;

	CComObject<CComEnumVariantOnVector> *pe = 0;
	HRESULT hr = CComObject<CComEnumVariantOnVector>::CreateInstance(&pe);

	if (SUCCEEDED(hr))
	{
		hr = pe->AddRef();
		hr = pe->Init(GetUnknown(), *m_pNodes);

		if (SUCCEEDED(hr))
			hr = pe->QueryInterface(ppVal);

		hr = pe->Release();
	}

	return hr;
}


STDMETHODIMP CTangramNode::put_VSToolWndScript(BSTR newVal)
{
	if (m_pRootObj&&theApp.m_hVSToolWnd)
	{
		m_pRootObj->m_strVSToolWndScript = OLE2T(newVal);
	}

	return S_OK;
}
