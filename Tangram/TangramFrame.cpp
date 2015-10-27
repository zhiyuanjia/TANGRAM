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

// TangramFrame.cpp : implementation file of CTangramFrame
//

#include "stdafx.h"

// CTangramFrame

CTangramFrame::CTangramFrame()
{
	m_x = 0;
	m_y = 0;
	m_left				 = 0;
	m_top				 = 0;
	m_right				 = 0;
	m_bottom			 = 0;
	m_left2				 = 0;
	m_top2				 = 0;
	m_right2			 = 0;
	m_bottom2			 = 0;
	m_hLWnd				 = 0;
	m_hTWnd				 = 0;
	m_hRWnd				 = 0;
	m_hBWnd				 = 0;
	m_hOuterLWnd		 = 0;
	m_hOuterTWnd		 = 0;
	m_hOuterRWnd		 = 0;
	m_hOuterBWnd		 = 0;
	m_strCurrentKey = _T("");
	m_strFrameName = _T("");
	m_bDetached = false;
	m_bOuterInited	 = false;
	m_bNeedOuterChanged	 = true;
	m_pBKWnd			= NULL;
	m_pTangram		 	= NULL;
	m_pHostNode			= NULL;
	m_pWorkNode			= NULL;
	m_pRootNodes		= NULL;
	m_pBindingNode		= NULL;
}

CTangramFrame::~CTangramFrame()
{
	if (theApp.m_pTangramFrame == this)
		theApp.m_pTangramFrame = NULL;
	if (m_pRootNodes)
		CCommonFunction::ClearObject<CTangramNodeCollection>(m_pRootNodes);
	if (m_mapVal.size())
	{
		for (map<CString, VARIANT>::iterator it = m_mapVal.begin(); it != m_mapVal.end(); it++)
		{
			::VariantClear(&it->second);
		}
		m_mapVal.clear();
	}
	if (m_pTangram)
	{
		map<HWND, CTangramFrame*>::iterator it = m_pTangram->m_mapFrame.find(m_hHostWnd);
		if (it != m_pTangram->m_mapFrame.end())
		{
			m_pTangram->m_mapFrame.erase(it);
			if (m_pTangram->m_mapFrame.size()==0)
				delete m_pTangram;
		}
	}
}

CTangramNode* CTangramFrame::OpenXtmlDocument(CString strKey, CString strFile)
{	
	if (strKey == _T(""))
	{
		strKey = strFile;
		strKey = strKey.MakeLower();
	}
	map<CString, CTangramNode*>::iterator iter = m_mapNode.find(strKey);

	RECT  rc;
	if (m_pWorkNode&&::IsWindow(m_pWorkNode->m_pHostWnd->m_hWnd))
		::GetWindowRect(m_pWorkNode->m_pHostWnd->m_hWnd,&rc);
	CTangramNode* pOldNode = m_pWorkNode;
	if (iter != m_mapNode.end())
	{
		m_pWorkNode = iter->second;
		if (m_pWorkNode->m_pHostClientView)
			m_pBindingNode = m_pWorkNode->m_pHostClientView->m_pTangramNode;
		else
			m_pBindingNode = NULL;
	}
	else
	{
		IXMLDOMDocument*	_pXmlDoc = NULL;
		HRESULT hr = CoCreateInstance(CLSID_DOMDocument, NULL, CLSCTX_INPROC_SERVER, IID_IXMLDOMDocument, (void**)&_pXmlDoc);

		if (FAILED(hr)) return FALSE;

		VARIANT_BOOL bSucceed = VARIANT_FALSE;
		_pXmlDoc->loadXML(CComBSTR(strFile), &bSucceed);

		if (!bSucceed)
			_pXmlDoc->load(CComVariant(strFile), &bSucceed);

		if (bSucceed)
		{			
			m_pWorkNode = new CComObject<CTangramNode>;
			m_pWorkNode->m_pRootObj = m_pWorkNode;
			m_pWorkNode->m_pFrame = this;

			CreateTangram(_pXmlDoc);
			m_mapNode[strKey] = m_pWorkNode;

			if (m_pTangram)
				m_pTangram->Fire_ExtendXmlComplete(strFile.AllocSysString(), (LONGLONG)m_hHostWnd, m_pWorkNode);
			m_pWorkNode->m_strKey = strKey;
			m_pWorkNode->Fire_ExtendComplete();
		}
	}
	if (pOldNode != NULL&&pOldNode != m_pWorkNode)
	{
		CWnd* pWnd = m_pWorkNode->m_pHostWnd;
		HWND hParent = ::GetParent(m_hWnd);
		CWnd::FromHandle(hParent)->ScreenToClient(&rc);
		CWnd* pOldWnd = NULL;
		if (pOldNode->m_pHostWnd != NULL&& pWnd != pOldNode->m_pHostWnd&&::IsWindow(pOldNode->m_pHostWnd->m_hWnd))
		{
			pOldWnd = pOldNode->m_pHostWnd;
			::SetWindowLong(pOldNode->m_pHostWnd->GetSafeHwnd(), GWL_ID, 0);
			::SetParent(pOldWnd->m_hWnd, pWnd->m_hWnd);
		}
		if (pWnd != NULL&& pWnd != pOldNode->m_pHostWnd)
		{
			::SetWindowLong(pWnd->GetSafeHwnd(), GWL_ID, m_pWorkNode->m_nID);
			::SetParent(pWnd->m_hWnd, hParent);
			pOldWnd->ShowWindow(SW_HIDE);
		}

		m_pWorkNode->m_bTopObj = true;
		pOldNode->m_bTopObj = false;
		::SetWindowPos(pWnd->m_hWnd, NULL, rc.left, rc.top, rc.right - rc.left, rc.bottom - rc.top, SWP_SHOWWINDOW  | SWP_FRAMECHANGED);//|SWP_NOREDRAWSWP_NOZORDER);
	}
	return m_pWorkNode;
}

BOOL CTangramFrame::CreateTangram(IXMLDOMDocument* pXmlDoc)
{
	ASSERT(m_hWnd);
	CWnd* pParentWnd = CWnd::FromHandle(::GetParent(m_hWnd));
	CComPtr<IXMLDOMElement> pRootElement;

	pXmlDoc->get_documentElement(&pRootElement);
	TElem eroot(pRootElement);

	m_pWorkNode->m_TangramDocNode = eroot;
	CString strCaption = eroot.subval(TGM_CAPTION);
	if(m_left==0)
		m_left = eroot.attrInt(_T("DeltLeft"),0);
	if(m_top==0)
		m_top = eroot.attrInt(_T("delttop"),0);
	if(m_right==0)
		m_right = eroot.attrInt(_T("deltright"),0);
	if(m_bottom==0)
		m_bottom = eroot.attrInt(_T("deltbottom"),0);
	if(m_left2==0)
		m_left2 = eroot.attrInt(_T("deltleft2"),0);
	if(m_top2==0)
		m_top2 = eroot.attrInt(_T("delttop2"),0);
	if(m_right2==0)
		m_right2 = eroot.attrInt(_T("deltright2"),0);
	if(m_bottom2==0)
		m_bottom2 = eroot.attrInt(_T("deltbottom2"),0);

	m_pWorkNode->m_ObjItem = eroot.subnode(_T("window")).begin();
	m_pWorkNode->m_strName.Trim();
	m_pWorkNode->m_strName.MakeLower();
	theApp.InitTangramNode(m_pWorkNode);
	HWND hWnd = NULL;
	if (m_pWorkNode->m_pObjClsInfo)
	{
		RECT rc;
		m_pWorkNode->m_pRootObj = m_pWorkNode;
		CCreateContext	m_Context;
		m_Context.m_pNewViewClass = m_pWorkNode->m_pObjClsInfo;
		CWnd* pWnd = (CWnd*)m_pWorkNode->m_pObjClsInfo->CreateObject();
		GetWindowRect(&rc);
		if(pParentWnd)
			pParentWnd->ScreenToClient(&rc);

		pWnd->Create(NULL,_T(""),WS_CHILD|WS_VISIBLE,rc,pParentWnd,0,&m_Context);
		hWnd = pWnd->m_hWnd;
		pWnd->ModifyStyle(0,WS_CLIPSIBLINGS);
		if (m_pWorkNode->m_nViewType != Splitter)
			pWnd->ModifyStyleEx(0,WS_EX_CLIENTEDGE);
		else
			pWnd->ModifyStyleEx(WS_EX_CLIENTEDGE,0);
		::SetWindowPos(pWnd->m_hWnd, HWND_BOTTOM,rc.left,rc.top,rc.right-rc.left,rc.bottom-rc.top,SWP_DRAWFRAME|SWP_SHOWWINDOW|SWP_NOACTIVATE);//|SWP_NOREDRAWSWP_NOZORDER);
	}

	TElem m_TangramDocPlugNode = m_pWorkNode->m_TangramDocNode.subnode(_T("docplugin"));
	TElem item;
	CString strPlugID = _T("");
	HRESULT hr = S_OK;
	BOOL bHavePlugin = FALSE;
	for(item = m_TangramDocPlugNode.begin(); item != m_TangramDocPlugNode.end() && item.elem != NULL; item++)
	{
		BSTR bstrXml = ::SysAllocString(L"");
		item.elem->get_xml(&bstrXml);
		strPlugID = item.val();
		strPlugID.Trim();
		strPlugID.MakeLower();
		if(strPlugID!=_T(""))
		{
			int nPos = strPlugID.Find(_T(","));
			BSTR bstrPlugIn;
			CComPtr<IDispatch> pDisp = NULL;
			//for COM Component:
			if(nPos==-1)
			{
				hr = pDisp.CoCreateInstance(strPlugID.AllocSysString());
				if(hr==S_OK)
				{
					m_pWorkNode->m_PlugInDispDictionary[strPlugID] = pDisp.p;
					pDisp.p->AddRef();
				}
				
				bstrPlugIn = strPlugID.AllocSysString();
				m_pWorkNode->Fire_NodeAddInCreated(pDisp.p, bstrPlugIn, bstrXml);
			}
			else //for .NET Component
			{
				CString strID = strPlugID.Left(nPos);
				CString strLib = strPlugID.Mid(nPos+1);
				hr = theApp.m_pTangramCore->CreateCLRObj(CComBSTR(strPlugID),&pDisp);
				if(hr == S_OK)
				{
					m_pWorkNode->m_PlugInDispDictionary[strPlugID] = pDisp.p;
					
					bstrPlugIn = strPlugID.AllocSysString();
					m_pWorkNode->Fire_NodeAddInCreated(pDisp, bstrPlugIn, bstrXml);
				}
			}
			if (m_pTangram&&pDisp)
				m_pTangram->Fire_AddInCreated(m_pWorkNode, pDisp, bstrPlugIn, bstrXml);
			::SysFreeString(bstrPlugIn);
			bHavePlugin = TRUE;
		}
		::SysFreeString(bstrXml);
	}
	if (bHavePlugin)
		m_pWorkNode->Fire_NodeAddInsCreated();
	m_pWorkNode->m_bCreated = true;
	return true;
}

STDMETHODIMP CTangramFrame::get_RootNodes(ITangramNodeCollection** pNodeColletion)
{	
	if (m_pRootNodes == NULL)
	{
		CComObject<CTangramNodeCollection>::CreateInstance(&m_pRootNodes);
		m_pRootNodes->AddRef();
	}

	m_pRootNodes->m_pNodes->clear();
	map<CString,CTangramNode*>::iterator it;
	for (it = m_mapNode.begin(); it != m_mapNode.end(); it++)
	{
		m_pRootNodes->m_pNodes->push_back(it->second);
	}

	return m_pRootNodes->QueryInterface(IID_ITangramNodeCollection,(void**)pNodeColletion);
}


STDMETHODIMP CTangramFrame::get_FrameData(BSTR bstrKey, VARIANT* pVal)
{
	CString strKey = OLE2T(bstrKey);

	if (strKey != _T(""))
	{
		::SendMessage(m_hWnd, WM_TANGRAMMSG, (WPARAM)strKey.GetBuffer(), 0);
		strKey.Trim();
		strKey.MakeLower();
		map<CString, VARIANT>::iterator it = m_mapVal.find(strKey);
		if (it != m_mapVal.end())
			*pVal = it->second;
		strKey.ReleaseBuffer();
	}
	return S_OK;
}

STDMETHODIMP CTangramFrame::put_FrameData(BSTR bstrKey, VARIANT newVal)
{
	CString strKey = OLE2T(bstrKey);

	if (strKey == _T("")/*||strVal==_T("")*/)
		return S_OK;
	strKey.Trim();
	strKey.MakeLower();
	m_mapVal[strKey] = newVal;
	return S_OK;
}

STDMETHODIMP CTangramFrame::Detach(void)
{
	if(::IsWindow(m_hWnd))
	{
		m_bDetached = true;
		::ShowWindow(m_pWorkNode->m_pHostWnd->m_hWnd,SW_HIDE);
		RECT rect;
		m_pWorkNode->m_pHostWnd->GetWindowRect(&rect);
		m_hHostWnd = UnsubclassWindow(true);
		if(::IsWindow(m_hHostWnd))
		{
			HWND m_hParentWnd = ::GetParent(m_hHostWnd);
			CWnd* pParent = CWnd::FromHandle(m_hParentWnd);
			pParent->ScreenToClient(&rect);
			::SetWindowPos(m_hHostWnd,NULL,rect.left,rect.top,rect.right-rect.left,rect.bottom-rect.top,SWP_FRAMECHANGED|SWP_SHOWWINDOW);
		}
	}
	return S_OK;
}

STDMETHODIMP CTangramFrame::Attach(void)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	if(!::IsWindow(m_hWnd))
	{
		m_bDetached = false;
		::ShowWindow(m_pWorkNode->m_pHostWnd->m_hWnd,SW_SHOW);
		SubclassWindow(m_hHostWnd);
	}
	theApp.HostPosChanged(m_pBindingNode);
	return S_OK;
}

STDMETHODIMP CTangramFrame::ModifyHost(LONGLONG hHostWnd)
{
	HWND _hHostWnd = (HWND)hHostWnd;
	if (!::IsWindow(_hHostWnd)||m_hWnd==_hHostWnd)
	{
		return S_OK;
	}
	if (m_pWorkNode == NULL)
		return S_FALSE;
	HWND hParent = (HWND)::GetParent(_hHostWnd);
	CWindow m_Parent;
	RECT rc;
	m_pWorkNode->m_pHostWnd->GetWindowRect(&rc);
	if(::IsWindow(m_hWnd))
	{
		HWND hTangramWnd = m_pTangram->m_hWnd;
		map<HWND, CTangram*>::iterator it = theApp.m_mapTangrm.find(hTangramWnd);
		if (it != theApp.m_mapTangrm.end())
			theApp.m_mapTangrm.erase(it);
		m_pTangram->m_hWnd = hTangramWnd;
		theApp.m_mapTangrm[hTangramWnd] = m_pTangram;

		map<HWND, CTangramFrame*>::iterator it2 = m_pTangram->m_mapFrame.find(m_hWnd);
		if (it2 != m_pTangram->m_mapFrame.end())
		{
			m_pTangram->m_mapFrame.erase(it2);
			m_pTangram->m_mapFrame[_hHostWnd] = this;
			m_pTangram->m_mapWnd[m_strFrameName] = _hHostWnd;
			DWORD dwID = ::GetWindowThreadProcessId(_hHostWnd, NULL);
			TRACE(_T("ExtendEx ThreadInfo:%x\n"), dwID);
			TangramThreadInfo* pThreadInfo = theApp.GetThreadInfo(dwID);
			theApp.SetHook(dwID);
			CTangramFrame* _pFrame = NULL;
			map<HWND, CTangramFrame*>::iterator iter = pThreadInfo->m_mapTangramFrame.find(m_hWnd);
			if (iter != pThreadInfo->m_mapTangramFrame.end())
			{
				pThreadInfo->m_mapTangramFrame.erase(iter);
				pThreadInfo->m_mapTangramFrame[_hHostWnd] = this;
			}
		}

		m_hHostWnd = UnsubclassWindow(true);
		if(::IsWindow(m_hHostWnd))
		{
			HWND m_hParentWnd = ::GetParent(m_hHostWnd);
			m_Parent.Attach(m_hParentWnd);
			m_Parent.ScreenToClient(&rc);
			m_Parent.Detach();
			::MoveWindow(m_hHostWnd, rc.left, rc.top, rc.right - rc.left, rc.bottom - rc.top, true);
			//::SetWindowPos(m_hHostWnd, HWND_BOTTOM,rc.left,rc.top,rc.right-rc.left,rc.bottom-rc.top, SWP_NOZORDER/*|SWP_FRAMECHANGED|SWP_SHOWWINDOW*/);
		}
	}

	SubclassWindow(_hHostWnd);
	m_hHostWnd = _hHostWnd;
	::GetWindowRect(_hHostWnd,&rc);
	m_Parent.Attach(hParent);
	m_Parent.ScreenToClient(&rc);
	m_Parent.Detach();
	::SetParent(m_pWorkNode->m_pHostWnd->m_hWnd, ::GetParent(_hHostWnd));
	::SetWindowPos(m_pWorkNode->m_pHostWnd->m_hWnd,NULL,rc.left,rc.top,rc.right-rc.left,rc.bottom-rc.top, SWP_FRAMECHANGED|SWP_SHOWWINDOW);
	theApp.HostPosChanged(m_pBindingNode);
	return S_OK;
}

STDMETHODIMP CTangramFrame::get_HWND(LONGLONG* pVal)
{
	*pVal = (LONGLONG)m_hWnd;
	return S_OK;
}

STDMETHODIMP CTangramFrame::get_VisibleNode(ITangramNode** pVal)
{
	if (m_pWorkNode)
	{
		*pVal = m_pWorkNode;
	}

	return S_OK;
}

STDMETHODIMP CTangramFrame::get_Tangram(ITangram** pVal)
{
	if (m_pTangram)
		*pVal = m_pTangram;

	return S_OK;
}

STDMETHODIMP CTangramFrame::Extend(BSTR bstrKey, BSTR bstrXml, ITangramNode** ppRetNode)
{
	if (m_pTangram)
	{
		CString _strCurrentKey = OLE2T(bstrKey);
		if (_strCurrentKey == _T(""))
			_strCurrentKey = _T("Node");
		if (_strCurrentKey != _T(""))
		{
			HRESULT hr = m_pTangram->ExtendXml((LONGLONG)m_hHostWnd, bstrXml, bstrKey, ppRetNode);
			if (*ppRetNode)
				m_strCurrentKey = _strCurrentKey;
			return hr;
		}
	}

	return S_OK;
}

STDMETHODIMP CTangramFrame::get_CurrentNavigateKey(BSTR* pVal)
{
	*pVal = m_strCurrentKey.AllocSysString();
	return S_OK;
}

void CTangramFrame::Destroy()
{
	map<CString, CTangramNode*>::iterator iter;
	CTangramNode* pTangram = NULL;
	CString strPlugID = _T("");
	for (iter = m_mapNode.begin(); iter != m_mapNode.end(); iter++)
	{
		pTangram = iter->second;
		TElem m_TangramDocPlugNode = pTangram->m_TangramDocNode.subnode(_T("docplugin"));
		TElem item;
		for (item = m_TangramDocPlugNode.begin(); item != m_TangramDocPlugNode.end() && item.elem != NULL; item++)
		{
			strPlugID = item.val();
			strPlugID.Trim();
			if (strPlugID != _T(""))
			{
				if (strPlugID.Find(_T(",")) == -1)
				{
					strPlugID.MakeLower();
					IDispatch* pDisp = (IDispatch*)pTangram->m_PlugInDispDictionary[strPlugID];
					if (pDisp)
					{
						pTangram->m_PlugInDispDictionary.RemoveKey(LPCTSTR(strPlugID));
						pDisp->Release();
					}
				}
			}
		}

		pTangram->m_PlugInDispDictionary.RemoveAll();
	}
}


void CTangramFrame::OnFinalMessage(HWND hWnd)
{
	__super::OnFinalMessage(hWnd);

	//delete this;
}

LRESULT CTangramFrame::OnSetHelpWnd(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	switch (wParam)
	{
	case 0:
		m_hLWnd = (HWND)lParam;
		break;
	case 1:
		m_hTWnd = (HWND)lParam;
		break;
	case 2:
		m_hRWnd = (HWND)lParam;
		break;
	case 3:
		m_hBWnd = (HWND)lParam;
		break;
	case 4:
		m_hOuterLWnd = (HWND)lParam;
		break;
	case 5:
		m_hOuterTWnd = (HWND)lParam;
		break;
	case 6:
		m_hOuterRWnd = (HWND)lParam;
		break;
	case 7:
		m_hOuterBWnd = (HWND)lParam;
		break;
	}
	theApp.HostPosChanged(m_pBindingNode);
	return 0;
}

LRESULT CTangramFrame::OnSetHelpWndEx(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	switch (wParam)
	{
	case 0:
		m_left2 = (LONG)lParam;
		break;
	case 1:
		m_top2 = (LONG)lParam;
		break;
	case 2:
		m_right2 = (LONG)lParam;
		break;
	case 3:
		m_bottom2 = (LONG)lParam;
		break;
	case 4:
		m_left = (LONG)lParam;
		break;
	case 5:
		m_top = (LONG)lParam;
		break;
	case 6:
		m_right = (LONG)lParam;
		break;
	case 7:
	{
		LONG nOld = m_bottom;
		m_bottom = (LONG)lParam;
		HWND hWnd = ::GetParent(m_pWorkNode->m_pHostWnd->m_hWnd);
		RECT rc;
		m_pWorkNode->m_pHostWnd->GetWindowRect(&rc);
		CWnd::FromHandle(hWnd)->ScreenToClient(&rc);
		rc.bottom -= m_bottom - nOld;
		::SetWindowPos(m_pWorkNode->m_pHostWnd->m_hWnd, HWND_BOTTOM, m_left, m_top, rc.right - rc.left, rc.bottom - rc.top + m_bottom, SWP_NOSENDCHANGING | SWP_NOACTIVATE | SWP_FRAMECHANGED);
		if (::IsWindow(m_hOuterBWnd))
		{
			::SetWindowPos(m_hOuterBWnd, NULL,
				rc.left,
				rc.bottom,
				rc.right - rc.left,
				m_bottom,
				SWP_NOSENDCHANGING | SWP_SHOWWINDOW | SWP_NOACTIVATE | SWP_FRAMECHANGED);
		}
	}
		break;
	}
	theApp.HostPosChanged(m_pBindingNode);
	return 0;
}

LRESULT CTangramFrame::OnHScroll(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	if (m_pBKWnd)
	{
		LRESULT hr = DefWindowProc(uMsg, wParam, lParam);
		RECT rect;
		::GetClientRect(m_hWnd, &rect);
		if (::IsWindow(m_pBKWnd->m_hWnd))
			::SetWindowPos(m_pBKWnd->m_hWnd, HWND_BOTTOM, 0, 0, rect.right, rect.bottom, SWP_NOREPOSITION | SWP_NOSENDCHANGING | SWP_NOACTIVATE);
		else
			::InvalidateRect(m_hWnd, &rect, TRUE);
		return hr;
	}

	return DefWindowProc(uMsg, wParam, lParam);
}

LRESULT CTangramFrame::OnMouseActivate(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	if (m_pBKWnd == NULL)
	{
		theApp.m_hActiveWnd = 0;
		theApp.m_bWinFormActived = FALSE;
		theApp.m_pTangramNode = NULL;
		theApp.m_pTangramFrame = NULL;
	}
	return DefWindowProc(uMsg, wParam, lParam);
}

LRESULT CTangramFrame::OnDestroy(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	m_pTangram->BeforeDestory();
	map<HWND, CTangram*>::iterator it = theApp.m_mapTangrm.find(m_pTangram->m_hWnd);
	if (it != theApp.m_mapTangrm.end())
		theApp.m_mapTangrm.erase(it);

	return DefWindowProc(uMsg, wParam, lParam);
}

LRESULT CTangramFrame::OnTangramMsg(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	if (lParam == 2048)
	{
		CtrlInfo* pCtrlInfo = (CtrlInfo*)wParam;
		if (pCtrlInfo&&pCtrlInfo->m_pTangram)
		{
			CTangram* pTangram = (CTangram*)pCtrlInfo->m_pTangram;
			pTangram->Fire_ClrControlCreated(pCtrlInfo->m_pNode, pCtrlInfo->m_pCtrlDisp, pCtrlInfo->m_strName.AllocSysString(), (LONGLONG)pCtrlInfo->m_hWnd);
		}
	}

	return DefWindowProc(uMsg, wParam, lParam);
}

LRESULT CTangramFrame::OnNcDestroy(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	LONG_PTR pfnWndProc = ::GetWindowLongPtr(m_hWnd, GWLP_WNDPROC);
	LRESULT lr = DefWindowProc(uMsg, wParam, lParam);
	if (m_pfnSuperWindowProc != ::DefWindowProc && ::GetWindowLongPtr(m_hWnd, GWLP_WNDPROC) == pfnWndProc)
		::SetWindowLongPtr(m_hWnd, GWLP_WNDPROC, (LONG_PTR)m_pfnSuperWindowProc);

	// mark window as destryed
	m_dwState |= WINSTATE_DESTROYED;

	return lr;
}

LRESULT CTangramFrame::OnWindowPosChanging(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
	WINDOWPOS* lpwndpos = (WINDOWPOS*)lParam;
	LRESULT hr = S_OK;
	if(m_pWorkNode)
	{
		if(m_bNeedOuterChanged)
		{
			::SetWindowPos(m_pWorkNode->m_pHostWnd->m_hWnd, HWND_BOTTOM, lpwndpos->x + m_left, lpwndpos->y + m_top, lpwndpos->cx - m_right, lpwndpos->cy - m_bottom, lpwndpos->flags | SWP_NOSENDCHANGING | SWP_NOREDRAW | SWP_NOACTIVATE | SWP_FRAMECHANGED);
			if (::IsWindow(m_hOuterBWnd))
			{
				::SetWindowPos(m_hOuterBWnd, NULL,
					lpwndpos->x + m_left,
					lpwndpos->y + m_top + lpwndpos->cy - m_bottom,
					lpwndpos->cx - m_right,
					m_bottom,
					lpwndpos->flags | SWP_NOSENDCHANGING | SWP_SHOWWINDOW | SWP_NOACTIVATE | SWP_FRAMECHANGED);
			}
		}
		else
		{
			if (m_bOuterInited == false && lpwndpos->cy&&::IsWindow(m_hOuterBWnd))
			{
				m_bOuterInited = true;
				::SetWindowPos(m_pWorkNode->m_pHostWnd->m_hWnd, HWND_BOTTOM, lpwndpos->x + m_left, lpwndpos->y + m_top, lpwndpos->cx - m_right, lpwndpos->cy - m_bottom, lpwndpos->flags | SWP_NOSENDCHANGING | SWP_NOACTIVATE | SWP_FRAMECHANGED);
				if (::IsWindow(m_hOuterBWnd))
				{
					::SetWindowPos(m_hOuterBWnd, NULL,
						lpwndpos->x + m_left,
						lpwndpos->y + m_top + lpwndpos->cy - m_bottom,
						lpwndpos->cx - m_right,
						m_bottom,
						lpwndpos->flags | SWP_NOSENDCHANGING | SWP_SHOWWINDOW | SWP_NOACTIVATE | SWP_FRAMECHANGED);
				}
			}
			else
				::SetWindowPos(m_pWorkNode->m_pHostWnd->m_hWnd, HWND_BOTTOM, lpwndpos->x, lpwndpos->y, lpwndpos->cx, lpwndpos->cy, lpwndpos->flags | SWP_NOSENDCHANGING | SWP_NOACTIVATE | SWP_FRAMECHANGED);
			m_bNeedOuterChanged = true;
		}

		if (m_pBindingNode != NULL&&::IsWindow(m_pBindingNode->m_pHostWnd->m_hWnd))
		{
			CRect rect, rect2;
			CWnd* pWnd = m_pBindingNode->m_pHostWnd;

			if (::IsWindow(pWnd->m_hWnd))
			{
				pWnd->GetWindowRect(&rect);

				::IsWindowVisible(pWnd->m_hWnd) ? lpwndpos->flags |= SWP_SHOWWINDOW : lpwndpos->flags |= SWP_HIDEWINDOW;
				CWnd::FromHandle(::GetParent(m_hWnd))->ScreenToClient(&rect);
				lpwndpos->x = rect.left + m_left2;
				if (::IsWindow(m_hLWnd))
				{
					rect2.left = rect.left;
					rect2.right = rect.left + m_left2;
					rect2.top = rect.top;
					rect2.bottom = rect.top + rect.Height() - m_bottom2;
					::SetWindowPos(m_hLWnd, HWND_TOP, rect2.left, rect2.top, rect2.Width(), rect2.Height(), lpwndpos->flags | SWP_NOSENDCHANGING | SWP_NOACTIVATE | SWP_FRAMECHANGED);
				}
				lpwndpos->y = rect.top + m_top2;
				if (::IsWindow(m_hTWnd))
				{
					rect2.left = 0;
					rect2.top = 0;
					rect2.right = lpwndpos->cx;
					rect2.bottom = m_top2;
					::SetWindowPos(m_hTWnd, NULL, rect2.left, rect2.top, rect2.Width(), rect2.Height(), lpwndpos->flags | SWP_NOSENDCHANGING | SWP_NOACTIVATE | SWP_FRAMECHANGED);
				}
				lpwndpos->cx = rect.Width() - m_right2 - m_left2;
				if (::IsWindow(m_hRWnd))
				{
					rect2.left = 0;
					rect2.top = 0;
					rect2.right = lpwndpos->cx;
					rect2.bottom = m_top2;
					::SetWindowPos(m_hRWnd, NULL, rect2.left, rect2.top, rect2.Width(), rect2.Height(), lpwndpos->flags | SWP_NOSENDCHANGING | SWP_NOACTIVATE | SWP_FRAMECHANGED);
				}
				lpwndpos->cy = rect.Height() - m_bottom2;
				if (::IsWindow(m_hBWnd))
				{
					rect2.left = lpwndpos->x - m_left2;
					rect2.top = lpwndpos->y + lpwndpos->cy;
					rect2.right = lpwndpos->x + lpwndpos->cx;
					rect2.bottom = lpwndpos->y + lpwndpos->cy + m_bottom2;
					::SetWindowPos(m_hBWnd, NULL, rect2.left, rect2.top, rect2.Width(), rect2.Height(), lpwndpos->flags | SWP_NOSENDCHANGING | SWP_NOACTIVATE | SWP_FRAMECHANGED);
				}
				if (::IsWindow(m_hOuterBWnd) && ::IsWindowVisible(m_hOuterBWnd) == false)
					::ShowWindow(m_hOuterBWnd, SW_SHOW);
			}
		}
		else
			lpwndpos->flags |= SWP_HIDEWINDOW;
	}

	return lRes;// DefWindowProc(uMsg, wParam, lParam);
}

LRESULT CTangramFrame::OnParentNotify(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	theApp.m_pTangramFrame = NULL;
	if (theApp.m_hExcelEdit)
	{
		::EnableWindow(theApp.m_hExcelEdit, true);
	}
	return DefWindowProc(uMsg, wParam, lParam);
}
