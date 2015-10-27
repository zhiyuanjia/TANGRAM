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

// TangramObject.cpp : Implementation of CTangram

#include "stdafx.h"

// CTangram

CTangram::CTangram()
{
	theApp.m_pTangram = this;
	m_bIsBlank = false;
	m_bIsDestory = false;
	m_bDocComplete = false;
	m_bEnableSinkCLRCtrlCreatedEvent = true;
	m_strURL = _T("");
	m_pCP = NULL;
	m_pExternalDisp = NULL;
	m_pHtmlDocument2 = NULL;
	m_pHTMLWindow2 = NULL;
	m_nThreadId = GetCurrentThreadId();
	m_hWnd = 0;
	m_nWebViewCount = 0;
}

CTangram::~CTangram()
{
	if (theApp.m_mapTangrm.size() == 0)
		theApp.Close();

	UnLoad();

	if (m_hWnd == theApp.m_pHostCore->m_hMainWnd)
	{
		map<CString, IDispatch*>::iterator it2 = theApp.m_pHostCore->m_mapObjDic.find(_T("defaulttangram"));
		if (it2 != theApp.m_pHostCore->m_mapObjDic.end())
			theApp.m_pHostCore->m_mapObjDic.erase(it2);
		it2 = theApp.m_pHostCore->m_mapObjDic.find(_T("defaultframe"));
		if (it2 != theApp.m_pHostCore->m_mapObjDic.end())
			theApp.m_pHostCore->m_mapObjDic.erase(it2);
	}
	map<CString, IDispatch*>::iterator it2 = m_mapExternalObj.end();
	for (it2 = m_mapExternalObj.begin(); it2 != m_mapExternalObj.end(); it2++)
	{
		it2->second->Release();
	}
	m_mapExternalObj.erase(m_mapExternalObj.begin(), m_mapExternalObj.end());

	m_mapFrame.erase(m_mapFrame.begin(), m_mapFrame.end());
	m_mapNode.erase(m_mapNode.begin(), m_mapNode.end());
	map<HWND, CTangram*>::iterator it = theApp.m_mapTangrm.find(m_hWnd);
	if (it != theApp.m_mapTangrm.end())
	{
		theApp.m_mapTangrm.erase(it);
	}
}

STDMETHODIMP CTangram::get_Count(long* pCount)
{
	*pCount = (long)m_mapFrame.size();
	return S_OK;
}

STDMETHODIMP CTangram::get_Frame(VARIANT vIndex, ITangramFrame **ppFrame)
{
	if (vIndex.vt == VT_I4)
	{
		long lCount = m_mapFrame.size();
		int iIndex = vIndex.lVal;
		if (iIndex < 0 || iIndex >= lCount) return E_INVALIDARG;

		map<HWND, CTangramFrame*>::iterator it;
		it = m_mapFrame.begin();
		int iPos = 0;
		while (it != m_mapFrame.end())
		{
			if (iPos == iIndex) break;

			iPos++;
			it++;
		}

		CTangramFrame* pFrame = it->second;
		*ppFrame = pFrame;
		return S_OK;
	}

	if (vIndex.vt == VT_BSTR)
	{
		CString strKey = OLE2T(vIndex.bstrVal);
		map<CString, HWND>::iterator it = m_mapWnd.find(strKey);
		if (it != m_mapWnd.end())
		{
			HWND h = it->second;
			map<HWND, CTangramFrame*>::iterator it2 = m_mapFrame.find(h);
			if (it2 != m_mapFrame.end())
			{
				CTangramFrame* pFrame = it2->second;

				*ppFrame = pFrame;
				return S_OK;
			}
		}
		return E_INVALIDARG;
	}

	return S_OK;
}

STDMETHODIMP CTangram::get__NewEnum(IUnknown** ppVal)
{
	*ppVal = NULL;

	typedef CComEnum<IEnumVARIANT, &IID_IEnumVARIANT, VARIANT, _Copy<VARIANT>>
		CComEnumVariant;

	CComObject<CComEnumVariant> *pe = 0;
	HRESULT hr = pe->CreateInstance(&pe);

	if (SUCCEEDED(hr))
	{
		pe->AddRef();
		long nLen = (long)m_mapFrame.size();
		VARIANT* rgvar = new VARIANT[nLen];
		ZeroMemory(rgvar, sizeof(VARIANT)*nLen);
		VARIANT* pItem = rgvar;

		map<HWND, CTangramFrame*>::iterator it;


		for (it = m_mapFrame.begin(); it != m_mapFrame.end(); it++)
		{
			IUnknown* pDisp = NULL;
			CTangramFrame* pObj = it->second;

			hr = pObj->QueryInterface(IID_IUnknown, (void**)&pDisp);

			pItem->vt = VT_UNKNOWN;
			pItem->punkVal = pDisp;

			if (pItem->punkVal != NULL)
			{
				pItem->punkVal->AddRef();
			}
			pItem++;

			pDisp->Release();
		}

		hr = pe->Init(rgvar, &rgvar[nLen], 0, AtlFlagTakeOwnership);

		if (SUCCEEDED(hr))
		{
			hr = pe->QueryInterface(IID_IUnknown, (void**)ppVal);
		}
		pe->Release();
	}
	return S_OK;
}

STDMETHODIMP CTangram::get_External(IDispatch** ppVal)
{
	if (m_pExternalDisp)
	{
		*ppVal = m_pExternalDisp;
		(*ppVal)->AddRef();
	}
	return S_OK;
}

STDMETHODIMP CTangram::put_External(IDispatch* newVal)
{
	if (m_pExternalDisp)
	{
		UnSinkObject(m_pExternalDisp, NULL);
		m_pExternalDisp->Release();
	}
	if (newVal == NULL)
	{
		m_pExternalDisp = NULL;
		return S_OK;
	}
	m_pExternalDisp = newVal;
	m_pExternalDisp->AddRef();
	return S_OK;
}

STDMETHODIMP CTangram::CreateFrame(VARIANT ParentObj, VARIANT HostWnd, BSTR bstrFrameName, ITangramFrame** pRetFrame)
{
	HWND h = 0; 
	if (ParentObj.vt == VT_DISPATCH&&HostWnd.vt == VT_BSTR)
	{
		if (theApp.m_pTangramCLRProxy)
		{
			IDispatch* pDisp = NULL;
			pDisp = theApp.m_pTangramCLRProxy->GetCtrlByName(ParentObj.pdispVal, HostWnd.bstrVal, true);
			if (pDisp)
			{
				h = theApp.m_pTangramCLRProxy->GetCtrlHandle(pDisp);
				if (h)
				{
					return CreateFrame(CComVariant(0), CComVariant((LONGLONG)h), bstrFrameName, pRetFrame);
				}
			}
		}
		return S_FALSE;
	}
	if (HostWnd.vt == VT_DISPATCH)
	{
		if (theApp.m_pTangramCLRProxy)
		{
			h=theApp.m_pTangramCLRProxy->IsCtrlCanNavigate(HostWnd.pdispVal);
			if (h)
			{
				CString strName = OLE2T(bstrFrameName);
				if (strName == _T(""))
				{
					bstrFrameName = theApp.m_pTangramCLRProxy->GetCtrlName(HostWnd.pdispVal);
					strName = OLE2T(bstrFrameName);
					if (strName == _T(""))
						bstrFrameName = CComBSTR(L"Frame");
				}
				map<HWND, CTangramFrame*>::iterator it = m_mapFrame.find((HWND)h);
				if (it == m_mapFrame.end())
					return CreateFrame(CComVariant(0), CComVariant((LONGLONG)h), bstrFrameName, pRetFrame);
				else
					*pRetFrame = it->second;
			}
		}
	}
	else if (HostWnd.vt == VT_I4 || HostWnd.vt == VT_I8)
	{
		HWND _hWnd = NULL;
		if(HostWnd.vt == VT_I4)
			_hWnd = (HWND)HostWnd.lVal;
		if(HostWnd.vt == VT_I8)
			_hWnd = (HWND)HostWnd.llVal;
		if (_hWnd == 0)
		{
			_hWnd = ::GetWindow(m_hWnd, GW_CHILD);
		}
		if (_hWnd&&::IsWindow(_hWnd))
		{
			map<HWND, CTangramFrame*>::iterator it = m_mapFrame.find(_hWnd);
			if (it == m_mapFrame.end())
			{
				DWORD dwID = ::GetWindowThreadProcessId(_hWnd, NULL);
				TangramThreadInfo* pThreadInfo = theApp.GetThreadInfo(dwID);

				CTangramFrame* m_pExtenderFrame = new CComObject<CTangramFrame>();
				if (_hWnd == theApp.m_pHostCore->m_hMainFrameWnd)
				{
					theApp.m_pHostCore->m_mapObjDic[_T("defaultframe")] = m_pExtenderFrame;
				}
				CString strName = OLE2T(bstrFrameName);
				if (strName == _T(""))
					strName = _T("Frame");
				m_pExtenderFrame->m_strFrameName = strName;
				m_pExtenderFrame->m_pTangram = this;
				m_pExtenderFrame->m_hHostWnd = _hWnd;
				pThreadInfo->m_mapTangramFrame[_hWnd] = m_pExtenderFrame;
				m_mapFrame[_hWnd] = m_pExtenderFrame;
				m_mapWnd[strName] = _hWnd;
				*pRetFrame = m_pExtenderFrame;
			}
			else
				*pRetFrame = it->second;
		}
	}
		
	return S_OK;
}


STDMETHODIMP CTangram::GetFrameFromCtrl(IDispatch* CtrlObj, ITangramFrame** ppFrame)
{
	if (theApp.m_pTangramCLRProxy)
	{
		HWND h = 0;
		h=theApp.m_pTangramCLRProxy->IsCtrlCanNavigate(CtrlObj);
		if (h)
		{
			map<HWND, CTangramFrame*>::iterator it = m_mapFrame.find((HWND)h);
			if (it != m_mapFrame.end())
				*ppFrame = it->second;
		}
	}

	return S_OK;
}

STDMETHODIMP CTangram::ExtendXml(LONGLONG hHostWnd, BSTR bstrXml, BSTR bstrKey, ITangramNode** pRetNode)
{	
	HWND hWnd = (HWND)hHostWnd;
	CString strKey = OLE2T(bstrKey);
	if (strKey == _T(""))
		strKey = _T("Default");
	CString strFrame = _T("");
	if (hWnd&&::IsWindow(hWnd))
	{
		map<HWND, CTangramFrame*>::iterator it = m_mapFrame.find(hWnd);
		if (it == m_mapFrame.end())
			return S_OK;
		else
		{
			if (it->second)
				strFrame = it->second->m_strFrameName;
		}
	}

	map<CString, HWND>::iterator it = m_mapWnd.find(strFrame);
	if (it != m_mapWnd.end())
	{
		if (it->second != hWnd)
		{
			//it->second = hWnd;
			return S_FALSE;
		}
	}
	else
		m_mapWnd[strFrame] = hWnd;

	theApp.m_strCurrentKey = strKey;
	theApp.m_pTangram = this;
	return theApp.m_pHostCore->ExtendEx(hHostWnd, bstrXml, 0, 0, 0, 0, 0, 0, 0, 0, pRetNode);
}

STDMETHODIMP CTangram::GetTangramNode(BSTR bstrFrameName, BSTR bstrNodeName, ITangramNode** pRetNode)
{
	CString strKey = OLE2T(bstrFrameName);
	CString strName = OLE2T(bstrNodeName);
	if (strKey == _T("") || strName == _T(""))
		return S_FALSE;
	map<CString, HWND>::iterator it = m_mapWnd.find(strKey);
	if (it != m_mapWnd.end())
	{
		HWND hWnd = it->second;
		if (::IsWindow(hWnd))
		{
			map<HWND, CTangramFrame*>::iterator it = m_mapFrame.find(hWnd);
			if (it != m_mapFrame.end())
			{
				CTangramFrame* pFrame = it->second;
				strName = strName.MakeLower();
				map<CString, CTangramNode*>::iterator it2 = pFrame->m_mapNode.find(strName);
				if (it2 != pFrame->m_mapNode.end())
					*pRetNode = (ITangramNode*)it2->second;
				else
				{
					it2 = m_mapNode.find(strName);
					if (it2 != m_mapNode.end())
						*pRetNode = (ITangramNode*)it2->second;
				}
			}
		}
	}

	return S_OK;
}

STDMETHODIMP CTangram::get_URL(BSTR* pVal)
{
	*pVal = m_strURL.AllocSysString();
	return S_OK;
}

STDMETHODIMP CTangram::put_URL(BSTR newVal)
{
	m_strURL = OLE2T(newVal);
	UnLoad();
	Init(m_strURL);
	return S_OK;
}

STDMETHODIMP CTangram::AddObjToHtml(BSTR strObjName, VARIANT_BOOL bConnectEvent, IDispatch* pObjDisp)
{
	CString strName = OLE2T(strObjName);
	if (strName!=_T(""))
	{
		CTangramJSExtender::AddObject(strName, pObjDisp);
		if (bConnectEvent)
		{
			CComQIPtr<IConnectionPointContainer> pContainer(pObjDisp);
			if (pContainer)
			{
				strName += _T("_On");
				SinkObject(strName, pObjDisp);
			}
		}
	}
	return S_OK;
}

STDMETHODIMP CTangram::get_TangramCore(ITangramCore** pVal)
{
	*pVal = theApp.m_pTangramCore;
	return S_OK;
}


STDMETHODIMP CTangram::get_Extender(BSTR bstrExtenderName, IDispatch** pVal)
{
	CString strName = OLE2T(bstrExtenderName);
	if (strName == _T(""))
		return S_OK;
	map<CString, IDispatch*>::iterator it = m_mapExternalObj.find(strName);
	if (it != m_mapExternalObj.end())
	{
		*pVal = it->second;
		(*pVal)->AddRef();
	}
	return S_OK;
}


STDMETHODIMP CTangram::put_Extender(BSTR bstrExtenderName, IDispatch* newVal)
{
	CString strName = OLE2T(bstrExtenderName);
	if (strName == _T(""))
		return S_OK;
	map<CString, IDispatch*>::iterator it = m_mapExternalObj.find(strName);
	if (it == m_mapExternalObj.end())
	{
		m_mapExternalObj[strName] = newVal;
		newVal->AddRef();
	}
	return S_OK;
}

STDMETHODIMP CTangram::get_FrameName(LONGLONG hHwnd, BSTR* pVal)
{
	HWND _hWnd = (HWND)hHwnd;
	if (_hWnd)
	{
		map<HWND, CTangramFrame*>::iterator it = m_mapFrame.find(_hWnd);
		if (it!=m_mapFrame.end())
			*pVal = it->second->m_strFrameName.AllocSysString();
	}

	return S_OK;
}

STDMETHODIMP CTangram::get_TangramFrame(BSTR bstrFrameName, ITangramFrame** pVal)
{
	CString strName = OLE2T(bstrFrameName);
	if (strName != _T(""))
	{
		map<CString, HWND>::iterator it = m_mapWnd.find(strName);
		if (it != m_mapWnd.end())
		{
			HWND h = it->second;
			map<HWND, CTangramFrame*>::iterator it2 = m_mapFrame.find(h);
			if (it2 != m_mapFrame.end())
				*pVal = it2->second;
		}
	}

	return S_OK;
}

void CTangram::OnNodeDocComplete(WPARAM wParam)
{
	map<HWND, CTangramFrame*>::iterator it1;
	bool bState = false;
	for (it1 = m_mapFrame.begin(); it1 != m_mapFrame.end(); it1++)
	{
		map<CString, CTangramNode*>::iterator it2;
		for (it2 = it1->second->m_mapNode.begin(); it2 != it1->second->m_mapNode.end(); it2++)
		{
			if (it2->second->m_bCreated == false)
			{
				::PostMessage(m_hWnd, WM_TANGRAM_WEBNODEDOCCOMPLETE, wParam, 0);
				return;
			}
		}
	}

	switch (wParam)
	{
	case 0:
		{
			int nIndex = 0;
			map<CString, CTangramNode*>::iterator it;
			for (it = m_mapNode.begin(); it != m_mapNode.end(); it++)
			{
				if (it->second->m_bNodeDocComplete==false)
				{
					it->second->m_bNodeDocComplete = true;
					BSTR bstrURL = it->second->m_strURL.AllocSysString();
					it->second->Fire_NodeDocumentComplete(it->second->m_pExtender, bstrURL);
					CComPtr<IHTMLWindow2> pWinDisp;
					it->second->m_pTangramNodeWBEvent->m_pHTMLDocument2->get_parentWindow(&pWinDisp);
					Fire_PageLoaded(pWinDisp.p, bstrURL);
					::SysFreeString(bstrURL);
					nIndex++;
				}
			}
			if (nIndex < m_nWebViewCount)
				::PostMessage(m_hWnd, WM_TANGRAM_WEBNODEDOCCOMPLETE, wParam, 0);
		}
		break;
	case 1:
		if (m_bDocComplete == false)
		{
			m_bDocComplete = true;
			CComQIPtr<IHTMLDocument3> pDoc(m_pHtmlDocument2);
			CComPtr<IHTMLElementCollection> pColl;
			HRESULT hr = pDoc->getElementsByTagName(CComBSTR(L"xml"), &pColl);
			if (hr == S_OK)
			{
				long nCount = 0;
				pColl->get_length(&nCount);
				if (nCount)
				{
					CComBSTR bstrID(L"");
					CComBSTR bstrXml(L"");
					CString strID = _T("");
					CString strXml = _T("");
					int nIndex = 0;
					for (int i = 0; i < nCount; i++)
					{
						CComVariant vIdx((long)i, VT_I4);
						CComPtr<IDispatch> pDisp;
						hr = pColl->item(vIdx, vIdx, &pDisp);
						if (pDisp)
						{
							CComQIPtr<IHTMLElement> pElem(pDisp);
							pElem->get_innerHTML(&bstrXml);
							strXml = OLE2T(bstrXml);
							if (strXml != _T(""))
							{
								pElem->get_id(&bstrID);
								strID = OLE2T(bstrID);
								if (strID == _T(""))
								{
									strID.Format(_T("xtml%d"), nIndex);
									nIndex++;
								}
								m_mapXtml[strID] = strXml;
							}
						}
					}
				}
			}

			Fire_PageLoaded(m_pHTMLWindow2, CComBSTR(m_strURL));
		}
		break;
	}
}

void CTangram::BeforeDestory()
{
	if (!m_bIsDestory)
	{
		m_bIsDestory = true;
		Fire_Destroy();
		map<CString, CTangramNode*>::iterator it;
		for (it = m_mapNode.begin(); it != m_mapNode.end(); it++)
		{
			if (it->second->m_pTangramNodeWBEvent)
			{
				it->second->m_pTangramNodeWBEvent->ConnectJSEngine(NULL);
				it->second->m_pTangramNodeWBEvent->DispEventUnadvise(it->second->m_pDisp);
				delete it->second->m_pTangramNodeWBEvent;
				it->second->m_pTangramNodeWBEvent = NULL;
			}
		}

		for (map<HWND, CTangramFrame*>::iterator it = m_mapFrame.begin(); it != m_mapFrame.end();it++)
			it->second->Destroy();

		ConnectJSEngine(NULL);
	}
}

STDMETHODIMP CTangram::get_Nodes(BSTR bstrNodeName, ITangramNode** pVal)
{
	CString strName = OLE2T(bstrNodeName);
	if (strName == _T(""))
		return S_OK;
	map<CString, CTangramNode*>::iterator it2 = m_mapNode.find(strName);
	if (it2 == m_mapNode.end())
		return S_OK;

	if (it2->second)
		*pVal = it2->second;

	return S_OK;
}

STDMETHODIMP CTangram::get_XObjects(BSTR bstrName, IDispatch** pVal)
{
	CString strName = OLE2T(bstrName);
	if (strName == _T(""))
		return S_OK;
	map<CString, CTangramNode*>::iterator it2 = m_mapNode.find(strName);
	if (it2 == m_mapNode.end())
		return S_OK;
	if (it2->second->m_pDisp)
	{
		*pVal = it2->second->m_pDisp;
		(*pVal)->AddRef();
	}
	return S_OK;
}

STDMETHODIMP CTangram::AttachEvent(BSTR bstrName, IDispatch* pWndDisp, VARIANT_BOOL* bResult)
{
	CString strNames = OLE2T(bstrName);
	if (strNames==_T(""))
		return S_FALSE;
	CComQIPtr<IHTMLWindow2> pWindow2(pWndDisp);
	if (pWindow2 == NULL)
		return S_FALSE;

	CTangramJSExtender* pTangramJSExtender = NULL;
	map<IHTMLDocument2*, CTangramJSExtender*>::iterator it0;
	for (it0 = m_mapTangramJSExtender.begin(); it0 != m_mapTangramJSExtender.end(); it0++)
	{
		CComPtr<IHTMLWindow2> pWindow;
		it0->first->get_parentWindow(&pWindow);
		if (pWindow.p == pWindow2.p)
		{
			pTangramJSExtender = it0->second;
			break;
		}
	}
	if (pTangramJSExtender == NULL)
		return S_FALSE;

	map<CString, CTangramNode*>::iterator it;
	int nPos = strNames.Find(_T(","));
	if (nPos == -1)
	{
		it = m_mapNode.find(strNames);
		if (it == m_mapNode.end())
		{
			return S_OK;
		}
		strNames += _T("_On");
		pTangramJSExtender->SinkObject(strNames, it->second->m_pDisp);
		*bResult = true;
	}
	while (nPos != -1)
	{
		CString strName = strNames.Left(nPos);
		strNames = strNames.Mid(nPos + 1);
		nPos = strNames.Find(_T(","));
		it = m_mapNode.find(strName);
		if (it != m_mapNode.end() && it->second->m_pDisp)
		{

			strName += _T("_On");
			pTangramJSExtender->SinkObject(strName, it->second->m_pDisp);
			*bResult = true;
		}
		if (nPos == -1)
		{
			it = m_mapNode.find(strNames);
			if (it != m_mapNode.end())
			{
				strNames += _T("_On");
				pTangramJSExtender->SinkObject(strNames, it->second->m_pDisp);
				*bResult = true;
				return S_OK;
			}
		}
	}
	return S_OK;
}

STDMETHODIMP CTangram::get_Width(long* pVal)
{
	if (m_hWnd)
	{
		RECT rc;
		::GetWindowRect(m_hWnd, &rc);
		*pVal = rc.right - rc.left;
	}

	return S_OK;
}

STDMETHODIMP CTangram::put_Width(long newVal)
{
	if (m_hWnd&&newVal)
	{
		RECT rc;
		::GetWindowRect(m_hWnd, &rc);
		rc.right = rc.left + newVal;
		::SetWindowPos(m_hWnd, NULL, rc.left, rc.top, newVal, rc.bottom - rc.top, SWP_NOACTIVATE | SWP_NOREDRAW);
	}

	return S_OK;
}

STDMETHODIMP CTangram::get_Height(long* pVal)
{
	if (m_hWnd)
	{
		RECT rc;
		::GetWindowRect(m_hWnd, &rc);
		*pVal = rc.bottom - rc.top;
	}
	return S_OK;
}

STDMETHODIMP CTangram::put_Height(long newVal)
{
	if (m_hWnd&&newVal)
	{
		RECT rc;
		::GetWindowRect(m_hWnd, &rc);
		rc.right = rc.left + newVal;
		::SetWindowPos(m_hWnd, NULL, rc.left, rc.top, rc.right - rc.left, newVal, SWP_NOACTIVATE | SWP_NOREDRAW);
	}
	return S_OK; 
}

STDMETHODIMP CTangram::AddNodesToPage(IDispatch* pHtmlDoc, BSTR bstrNodeNames, VARIANT_BOOL bAdd, VARIANT_BOOL* bSuccess)
{
	CString strNames = OLE2T(bstrNodeNames);
	if (strNames != _T(""))
	{
		map<CString, CTangramNode*>::iterator it;
		int nPos = strNames.Find(_T(","));
		if (nPos == -1)
		{
			it = m_mapNode.find(strNames);
			if (it != m_mapNode.end() && it->second->m_pDisp)
			{
				AddObject(pHtmlDoc, it->second->m_pDisp, bstrNodeNames, false, bSuccess);
			}
			return S_OK;
		}
		while (nPos != -1)
		{
			CString strName = strNames.Left(nPos);
			strNames = strNames.Mid(nPos + 1);
			nPos = strNames.Find(_T(","));
			it = m_mapNode.find(strName);
			if (it != m_mapNode.end() && it->second->m_pDisp)
			{
				AddObject(pHtmlDoc, it->second->m_pDisp, strName.AllocSysString(), false, bSuccess);
			}
		}
	}

	return S_OK;
}

STDMETHODIMP CTangram::get_NodeNames(BSTR* pVal)
{
	CString strNames = _T("");
	map<CString, CTangramNode*>::iterator it;
	for (it = m_mapNode.begin(); it != m_mapNode.end(); it++)
	{
		strNames += it->first;
		strNames += _T(",");
	}
	int nPos = strNames.ReverseFind(',');
	strNames = strNames.Left(nPos);
	*pVal = strNames.AllocSysString();
	return S_OK;
}

STDMETHODIMP CTangram::AddObject(IDispatch* pHtmlDoc, IDispatch* pObject, BSTR bstrObjName, VARIANT_BOOL bSinkEvent, VARIANT_BOOL* bResult)
{
	CString strName = OLE2T(bstrObjName);
	CComQIPtr<IHTMLDocument2> pDoc(pHtmlDoc);
	if (strName != _T("") && pHtmlDoc)
	{
		map<IHTMLDocument2*, CTangramJSExtender*>::iterator it = m_mapTangramJSExtender.find(pDoc.p);
		if (it != m_mapTangramJSExtender.end())
		{
			CTangramJSExtender* pTangramJSExtender = it->second;
			if (pTangramJSExtender)
			{
				pTangramJSExtender->AddObject(strName, pObject);
				if (bSinkEvent)
				{
					CComQIPtr<IConnectionPointContainer> pContainer(pObject);
					if (pContainer)
					{
						strName += _T("_On");
						pTangramJSExtender->SinkObject(strName, pObject);
						*bResult = true;
					}
				}
			}
		}
	}

	return S_OK;
}

STDMETHODIMP CTangram::get_HTMLWindow(BSTR NodeName, IDispatch** pVal)
{
	CString strName = OLE2T(NodeName);
	if (strName != _T(""))
	{
		map<CString, CTangramNode*>::iterator it = m_mapNode.find(strName);
		if (it != m_mapNode.end() && it->second->m_pTangramNodeWBEvent->m_pHTMLDocument2)
		{
			CComPtr<IHTMLWindow2> pHTMLWindow2;
			it->second->m_pTangramNodeWBEvent->m_pHTMLDocument2->get_parentWindow(&pHTMLWindow2);
			*pVal = pHTMLWindow2.Detach();
			(*pVal)->AddRef();
		}
	}
	else if(m_pHtmlDocument2)
	{
		CComPtr<IHTMLWindow2> pHTMLWindow2;
		m_pHtmlDocument2->get_parentWindow(&pHTMLWindow2);
		*pVal = pHTMLWindow2.Detach();
		(*pVal)->AddRef();
	}
	return S_OK;
}

STDMETHODIMP CTangram::get_HtmlDocument(IDispatch** pVal)
{
	if (m_pHtmlDocument2)
	{
		*pVal = m_pHtmlDocument2;
		(*pVal)->AddRef();
	}

	return S_OK;
}

STDMETHODIMP CTangram::get_Parent(ITangram** pVal)
{
	HWND hWnd = ::GetParent(m_hWnd);
	if (hWnd == NULL)
		return S_OK;

	map<HWND, CTangram*>::iterator it = theApp.m_mapTangrm.find(hWnd);
	while (it == theApp.m_mapTangrm.end())
	{
		hWnd = ::GetParent(hWnd);
		if (hWnd == NULL)
			return S_OK;
		it = theApp.m_mapTangrm.find(hWnd);
		if (it != theApp.m_mapTangrm.end())
		{
			*pVal = it->second;
			return S_OK;
		}
	}
	return S_OK;
}

STDMETHODIMP CTangram::GetHtmlDocument(IDispatch* HtmlWindow, IDispatch** ppHtmlDoc)
{
	CComQIPtr<IHTMLWindow2> pWindow2(HtmlWindow);
	if (pWindow2 == NULL)
		return S_OK;
	map<IHTMLDocument2*, CTangramJSExtender*>::iterator it;
	for (it = m_mapTangramJSExtender.begin(); it != m_mapTangramJSExtender.end(); it++)
	{
		CComPtr<IHTMLWindow2> pWindow;
		it->first->get_parentWindow(&pWindow);
		if (pWindow.p == pWindow2.p)
		{
			*ppHtmlDoc = it->first;
			(*ppHtmlDoc)->AddRef();
			return S_OK;
		}
	}

	return S_OK;
}

STDMETHODIMP CTangram::AttachNodeEvent(BSTR bstrNames, IDispatch* pWndDisp)
{
	CString strNames = OLE2T(bstrNames);
	if (strNames == _T(""))
		return S_FALSE;
	CComQIPtr<IHTMLWindow2> pWindow2(pWndDisp);
	if (pWindow2 == NULL)
		return S_FALSE;

	CTangramJSExtender* pTangramJSExtender = NULL;
	map<IHTMLDocument2*, CTangramJSExtender*>::iterator it0;
	for (it0 = m_mapTangramJSExtender.begin(); it0 != m_mapTangramJSExtender.end(); it0++)
	{
		CComPtr<IHTMLWindow2> pWindow;
		it0->first->get_parentWindow(&pWindow);
		if (pWindow.p == pWindow2.p)
		{
			pTangramJSExtender = it0->second;
			break;
		}
	}
	if (pTangramJSExtender == NULL)
		return S_FALSE;

	map<CString, CTangramNode*>::iterator it;
	int nPos = strNames.Find(_T(","));
	if (nPos == -1)
	{
		it = m_mapNode.find(strNames);
		if (it == m_mapNode.end())
		{
			return S_OK;
		}
		strNames += _T("_Node_On");
		pTangramJSExtender->SinkObject(strNames, (ITangramNode*)it->second);
	}
	while (nPos != -1)
	{
		CString strName = strNames.Left(nPos);
		strNames = strNames.Mid(nPos + 1);
		nPos = strNames.Find(_T(","));
		it = m_mapNode.find(strName);
		if (it != m_mapNode.end() && it->second->m_pDisp)
		{
			strName += _T("_Node_On");
			pTangramJSExtender->SinkObject(strName, (ITangramNode*)it->second);
		}
		if (nPos == -1)
		{
			it = m_mapNode.find(strNames);
			if (it != m_mapNode.end())
			{
				strNames += _T("_Node_On");
				pTangramJSExtender->SinkObject(strNames, (ITangramNode*)it->second);
				return S_OK;
			}
		}
	}

	return S_OK;
}

STDMETHODIMP CTangram::GetCtrlByName(IDispatch* pCtrl, BSTR bstrName, VARIANT_BOOL bFindInChild, IDispatch** ppRetDisp)
{
	if (theApp.m_pTangramCLRProxy)
	{
		*ppRetDisp = theApp.m_pTangramCLRProxy->GetCtrlByName(pCtrl, bstrName, bFindInChild?true:false);
	}
	return S_OK;
}

STDMETHODIMP CTangram::GetCtrlValueByName(IDispatch* pCtrl, BSTR bstrName, VARIANT_BOOL bFindInChild, BSTR* bstrVal)
{
	if (theApp.m_pTangramCLRProxy)
	{
		*bstrVal = theApp.m_pTangramCLRProxy->GetCtrlValueByName(pCtrl, bstrName, bFindInChild?true:false);
	}
	return S_OK;
}

STDMETHODIMP CTangram::AttachObjEvent(IDispatch* HTMLWindow,IDispatch* SourceObj, BSTR bstrEventName,BSTR AliasName)
{
	CString strEventName = OLE2T(bstrEventName);
	if (strEventName == _T(""))
		return S_FALSE;
	CString strAliasName = OLE2T(AliasName);
	if (theApp.m_mapEventType.size() == 0)
	{
		theApp.InitEventDic();
	}

	map<CString, TangramEventType>::iterator it = theApp.m_mapEventType.find(strEventName);
	if (it == theApp.m_mapEventType.end())
		return S_FALSE;

	CComQIPtr<IHTMLWindow2> pWindow2(HTMLWindow);
	if (pWindow2 == NULL)
		return S_FALSE;
	map<IHTMLDocument2*, CTangramJSExtender*>::iterator it0;
	for (it0 = m_mapTangramJSExtender.begin(); it0 != m_mapTangramJSExtender.end(); it0++)
	{
		CComPtr<IHTMLWindow2> pWindow;
		it0->first->get_parentWindow(&pWindow);
		if (pWindow.p == pWindow2.p)
		{
			if (theApp.m_pTangramCLRProxy)
			{
				theApp.m_pTangramEvent = new CComObject < CTangramEvent >;
				CComBSTR bstrName(L"");
				bstrName = theApp.m_pTangramCLRProxy->AttachObjEvent((ITangramEvent*)theApp.m_pTangramEvent, SourceObj, it->second, HTMLWindow);
				if (strAliasName == _T(""))
					strAliasName = OLE2T(bstrName);
				return it0->second->SinkObject(strAliasName, theApp.m_pTangramEvent);
			}
			break;
		}
	}
	return S_OK;
}

STDMETHODIMP CTangram::get_Handle(LONGLONG* pVal)
{
	if (m_hWnd)
		*pVal = (LONGLONG)m_hWnd;
	return S_OK;
}

STDMETHODIMP CTangram::GetCtrlInNode(BSTR NodeName, BSTR CtrlName, IDispatch** ppCtrl)
{
	CString strName = OLE2T(NodeName);
	if (strName == _T(""))
		return S_OK;
	map<CString, CTangramNode*>::iterator it2 = m_mapNode.find(strName);
	if (it2 == m_mapNode.end())
		return S_OK;

	CTangramNode* pNode = it2->second;
	if (pNode)
		pNode->GetCtrlByName(CtrlName, true, ppCtrl);

	return S_OK;
}

STDMETHODIMP CTangram::AttachNodeSubCtrlEvent(IDispatch* HtmlWndDisp, VARIANT Node, VARIANT CtrlName, BSTR EventName, BSTR AliasName)
{
	CComQIPtr<IHTMLWindow2> pWindow2(HtmlWndDisp);
	if (pWindow2 == NULL)
		return S_FALSE;

	if (theApp.m_mapEventType.size() == 0)
	{
		theApp.InitEventDic();
	}
	CString strEventName = OLE2T(EventName);
	if (strEventName == _T(""))
		return S_FALSE;
	map<CString, TangramEventType>::iterator it1 = theApp.m_mapEventType.find(strEventName);
	if (it1 == theApp.m_mapEventType.end())
		return S_FALSE;

	CString strName = _T("");
	CTangramNode* pNode = NULL;
	if (Node.vt == VT_BSTR)
	{
		strName = OLE2T(Node.bstrVal);
		if (strName == _T(""))
			return S_OK;
	}
	else if (Node.vt == VT_DISPATCH)
	{
		CComQIPtr<ITangramNode> _pNode(Node.pdispVal);
		if (_pNode)
		{
			pNode = (CTangramNode*)_pNode.p;
			if (pNode->m_nViewType != CLRCtrl)
				return S_FALSE;
			strName = pNode->m_strWebObjName;
		}
		else
			return S_OK;
	}
	else
		return S_OK;
	if (strName == _T("") && pNode==NULL)
		return S_OK;
	CString strCtrlName = _T("");
	CComPtr<IDispatch> pDisp;
	if (CtrlName.vt == VT_BSTR)
		strCtrlName = OLE2T(CtrlName.bstrVal);
	else if (CtrlName.vt == VT_DISPATCH)
		pDisp.Attach(CtrlName.pdispVal);
	if (strCtrlName == _T("") && pDisp==NULL)
		return S_FALSE;

	if (pNode == NULL)
	{
		map<CString, CTangramNode*>::iterator it2 = m_mapNode.find(strName);
		if (it2 == m_mapNode.end())
			return S_OK;
		pNode = it2->second;
	}
	if (pNode)
	{
		if (theApp.m_pTangramCLRProxy)
		{
			if (pDisp)
			{
				CComBSTR bstrName(L"");
				bstrName = theApp.m_pTangramCLRProxy->GetCtrlName(pDisp);
				strCtrlName = OLE2T(bstrName);
			}
		}
		else
			return S_OK;

		if (pDisp==NULL)
			pNode->GetCtrlByName(strCtrlName.AllocSysString(), true, &pDisp);

		if (pDisp)
		{
			CString strAliasName = OLE2T(AliasName);
			if (strAliasName == _T(""))
			{
				strAliasName = strName;
				strAliasName += _T("_");
				strAliasName += strCtrlName;
				strAliasName += _T("_");
				strAliasName += strEventName;
			}

			CTangramJSExtender* pTangramJSExtender = NULL;
			map<IHTMLDocument2*, CTangramJSExtender*>::iterator it0;
			for (it0 = m_mapTangramJSExtender.begin(); it0 != m_mapTangramJSExtender.end(); it0++)
			{
				CComPtr<IHTMLWindow2> pWindow;
				it0->first->get_parentWindow(&pWindow);
				if (pWindow.p == pWindow2.p)
				{
					pTangramJSExtender = it0->second;
					break;
				}
			}
			if (pTangramJSExtender == NULL)
				return S_FALSE;
			theApp.m_pTangramEvent = new CComObject < CTangramEvent >;
			CComBSTR bstrName(L"");
			bstrName = theApp.m_pTangramCLRProxy->AttachObjEvent((ITangramEvent*)theApp.m_pTangramEvent, pDisp, it1->second, HtmlWndDisp);
			return pTangramJSExtender->SinkObject(strAliasName, theApp.m_pTangramEvent);
		}
	}
	return S_OK;
}

STDMETHODIMP CTangram::get_xtml(BSTR strKey, BSTR* pVal)
{
	map<CString, CString>::iterator it = m_mapXtml.find(OLE2T(strKey));
	if (it != m_mapXtml.end())
		*pVal = it->second.AllocSysString();

	return S_OK;
}

STDMETHODIMP CTangram::put_xtml(BSTR strKey, BSTR newVal)
{
	CString strkey = OLE2T(strKey);
	CString strVal = OLE2T(newVal);
	if (strkey == _T("") || strVal == _T(""))
		return S_OK;
	map<CString, CString>::iterator it = m_mapXtml.find(strkey);
	if (it != m_mapXtml.end())
		m_mapXtml.erase(it);

	m_mapXtml[strkey] = strVal;
	return S_OK;
}

STDMETHODIMP CTangram::Extend(IDispatch* Parent, BSTR CtrlName, BSTR FrameName, BSTR bstrKey, BSTR bstrXml, ITangramNode** ppRetNode)
{
	if (theApp.m_pTangramCLRProxy)
	{
		IDispatch* pDisp = NULL;
		pDisp =theApp.m_pTangramCLRProxy->GetCtrlByName(Parent, CtrlName, true);
		if (pDisp)
		{
			HWND h = 0;
			h = theApp.m_pTangramCLRProxy->IsCtrlCanNavigate(pDisp);
			if (h)
			{
				CString strFrameName = OLE2T(FrameName);
				CString strKey = OLE2T(bstrKey);
				if (strFrameName == _T(""))
					FrameName = CtrlName;
				if (strKey == _T(""))
					bstrKey = CComBSTR(L"Default");
				map<HWND, CTangramFrame*>::iterator it = m_mapFrame.find((HWND)h);
				if (it == m_mapFrame.end())
				{
					CComPtr<ITangramFrame> pFrame;
					CreateFrame(CComVariant(0), CComVariant((LONGLONG)h), FrameName, &pFrame);
					return pFrame->Extend(bstrKey, bstrXml, ppRetNode);
				}
				else
				{
					return it->second->Extend(bstrKey, bstrXml, ppRetNode);
				}
			}
		}
	}
	return S_OK;
}

STDMETHODIMP CTangram::ExtendCtrl(VARIANT MdiForm, BSTR bstrKey, BSTR bstrXml, ITangramNode** ppRetNode)
{
	HWND h = 0;
	bool bMDI = false;
	if (MdiForm.vt == VT_DISPATCH)
	{
		if (theApp.m_pTangramCLRProxy)
		{
			h = theApp.m_pTangramCLRProxy->GetMDIClientHandle(MdiForm.pdispVal);
			if (h)
				bMDI = true;
			else
			{
				h = theApp.m_pTangramCLRProxy->IsCtrlCanNavigate(MdiForm.pdispVal);
				if (h)
				{
					CComBSTR bstrName(L"");
					bstrName = theApp.m_pTangramCLRProxy->GetCtrlName(MdiForm.pdispVal);
					CString strKey = OLE2T(bstrKey);
					if (strKey == _T(""))
						bstrKey = CComBSTR(L"Default");
					CComPtr<ITangramFrame> pFrame;
					map<HWND, CTangramFrame*>::iterator it = m_mapFrame.find((HWND)h);
					if (it == m_mapFrame.end())
					{
						CreateFrame(CComVariant(0), CComVariant((LONGLONG)h), bstrName, &pFrame);
						return pFrame->Extend(bstrKey, bstrXml, ppRetNode);
					}
					else
					{
						return it->second->Extend(bstrKey, bstrXml, ppRetNode);
					}
				}
			}
		}
	}
	else if (MdiForm.vt == VT_I4 || MdiForm.vt == VT_I8)
	{
		HWND hWnd = NULL;
		if (MdiForm.vt == VT_I4)
		{
			if (MdiForm.lVal == 0)
			{
				hWnd = ::FindWindowEx(m_hWnd, NULL, _T("MDIClient"), NULL);
				if (hWnd)
				{
					bMDI = true;
				}
				else
				{
					hWnd = ::GetWindow(m_hWnd, GW_CHILD);
				}
			}
			else
			{
				hWnd = (HWND)MdiForm.lVal;
				if (::IsWindow(hWnd) == FALSE)
					hWnd = ::GetWindow(m_hWnd, GW_CHILD);
			}
		}
		if (MdiForm.vt == VT_I8)
		{
			if (MdiForm.llVal == 0)
			{
				hWnd = ::FindWindowEx(m_hWnd, NULL, _T("MDIClient"), NULL);
				if (hWnd)
				{
					bMDI = true;
				}
				else
				{
					hWnd = ::GetWindow(m_hWnd, GW_CHILD);
				}
			}
			else
			{
				hWnd = (HWND)MdiForm.llVal;
				if (::IsWindow(hWnd) == FALSE)
					hWnd = ::GetWindow(m_hWnd, GW_CHILD);

			}
		}
		h = hWnd;
	}
	if (h)
	{
		CString strKey = OLE2T(bstrKey);
		if (strKey == _T(""))
			bstrKey = CComBSTR(L"Default");
		CComPtr<ITangramFrame> pFrame;
		if (bMDI)
		{
			HRESULT hr = CreateFrame(CComVariant(0), CComVariant((LONGLONG)h), CComBSTR(L"TangramMdiFrame"), &pFrame);
			if (pFrame)
			{
				return pFrame->Extend(bstrKey, bstrXml, ppRetNode);
			}
		}
		else
		{
			CString strKey = OLE2T(bstrKey);
			if (strKey == _T(""))
				bstrKey = CComBSTR(L"Default");

			CComPtr<ITangramFrame> pFrame;
			map<HWND, CTangramFrame*>::iterator it = m_mapFrame.find((HWND)h);
			if (it == m_mapFrame.end())
			{
				TCHAR szBuffer[MAX_PATH];
				::GetWindowText((HWND)h, szBuffer, MAX_PATH);
				CString strText = szBuffer;
				if (strText == _T(""))
				{
					CString s = _T("");
					s.Format(_T("Frame%p"), h);
					strText = s;
				}
				CreateFrame(CComVariant(0), CComVariant((LONGLONG)h), CComBSTR(strText), &pFrame);
				return pFrame->Extend(bstrKey, bstrXml, ppRetNode);
			}
			else
			{
				return it->second->Extend(bstrKey, bstrXml, ppRetNode);
			}
		}
	}

	return S_OK;
}

STDMETHODIMP CTangram::get_EnableSinkCLRCtrlCreatedEvent(VARIANT_BOOL* pVal)
{
	*pVal = m_bEnableSinkCLRCtrlCreatedEvent;
	return S_OK;
}

STDMETHODIMP CTangram::put_EnableSinkCLRCtrlCreatedEvent(VARIANT_BOOL newVal)
{
	m_bEnableSinkCLRCtrlCreatedEvent = newVal;
	return S_OK;
}

STDMETHODIMP CTangram::OnChanged(DISPID dispID)
{
	if (DISPID_READYSTATE == dispID)
	{
		VARIANT vResult = { 0 };
		EXCEPINFO excepInfo;
		UINT uArgErr;
		DISPPARAMS dp = { NULL, NULL, 0, 0 };
		if (SUCCEEDED(m_pHtmlDocument2->Invoke(DISPID_READYSTATE, IID_NULL, LOCALE_SYSTEM_DEFAULT, DISPATCH_PROPERTYGET, &dp, &vResult, &excepInfo, &uArgErr)))
		{
			assert(VT_I4 == V_VT(&vResult));
			m_lReadyState = (READYSTATE)V_I4(&vResult);
			switch (m_lReadyState)
			{
			case READYSTATE_COMPLETE:
				PostThreadMessage(m_nThreadId, WM_TANGRAM_WEBNODEDOCCOMPLETE, (WPARAM)0, (LPARAM)0);
				break;
			default:
				break;
			}

			VariantClear(&vResult);
		}
	}

	return NOERROR;
}

STDMETHODIMP CTangram::OnRequestEdit(DISPID dispID)
{
	return NOERROR;
}

HRESULT CTangram::Init(CString szURL)
{
	HRESULT hr;
	LPCONNECTIONPOINTCONTAINER pCPC = NULL;
	CComPtr<IDispatch> pScriptDisp;

	if (szURL == _T(""))
	{
		m_nScheme = INTERNET_SCHEME_HTTP;
	}
	else
	{
		URL_COMPONENTS urlComponents;
		DWORD dwFlags = 0;
		m_nScheme = INTERNET_SCHEME_UNKNOWN;
		ZeroMemory((PVOID)&urlComponents, sizeof(URL_COMPONENTS));
		urlComponents.dwStructSize = sizeof(URL_COMPONENTS);

		if (szURL)
		{
			if (InternetCrackUrl(szURL, 0, dwFlags, &urlComponents))
			{
				m_nScheme = urlComponents.nScheme;
			}
		}
	}

	if (FAILED(hr = CoCreateInstance(CLSID_HTMLDocument, NULL, CLSCTX_INPROC_SERVER, IID_IHTMLDocument2, (LPVOID*)&m_pHtmlDocument2)))
	{
		goto Error;
	}

	if (SUCCEEDED(hr = m_pHtmlDocument2->get_parentWindow(&m_pHTMLWindow2)))
	{

	}

	if (FAILED(hr = m_pHtmlDocument2->QueryInterface(IID_IConnectionPointContainer, (LPVOID*)&pCPC)))
	{
		goto Error;
	}

	if (FAILED(hr = pCPC->FindConnectionPoint(IID_IPropertyNotifySink, &m_pCP)))
	{
		goto Error;
	}

	m_hrConnected = m_pCP->Advise((LPUNKNOWN)(IPropertyNotifySink*)this, &m_dwCookie);

	if (m_pHtmlDocument2->get_Script(&pScriptDisp) == S_OK)
	{
		CComPtr<IDispatchEx> _pScriptEx;
		hr = pScriptDisp->QueryInterface<IDispatchEx>(&_pScriptEx);
		if (hr == S_OK)
		{
			ConnectJSEngine(_pScriptEx);
			CTangramJSExtender::AddObject(_T("TangramCore"), (ITangram*)theApp.m_pTangramCore);
		}
	}

	m_mapTangramJSExtender[m_pHtmlDocument2] = this;
	CTangramJSExtender::AddObject(_T("Tangram"), (ITangram*)this);
	SinkObject(_T("Tangram_On"), (ITangram*)this);

	if (m_strURL.CompareNoCase(_T("about:blank")) == 0)
		m_bIsBlank = true;

	switch (m_nScheme)
	{
	case INTERNET_SCHEME_HTTP:
	case INTERNET_SCHEME_FTP:
	case INTERNET_SCHEME_RES:
	case INTERNET_SCHEME_GOPHER:
	case INTERNET_SCHEME_HTTPS:
	case INTERNET_SCHEME_FILE:
		// load URL using IPersistMoniker
		hr = LoadURLFromMoniker();
		break;
	case INTERNET_SCHEME_NEWS:
	case INTERNET_SCHEME_MAILTO:
	case INTERNET_SCHEME_SOCKS:
		// we don't handle these
		return E_FAIL;
		break;
	default:
		if (m_bIsBlank)
		{
			hr = LoadURLFromMoniker();
			break;
		}
		hr = LoadURLFromFile();
		break;
	}

	if (SUCCEEDED(hr) || E_PENDING == hr)
	{
		MSG msg;
		while (GetMessage(&msg, NULL, 0, 0))
		{
			if (WM_TANGRAM_WEBNODEDOCCOMPLETE == msg.message && NULL == msg.hwnd)
			{
				theApp.SetHook(::GetCurrentThreadId());
				::PostMessage(m_hWnd, WM_TANGRAM_WEBNODEDOCCOMPLETE, 1, 0);
				return 1;
			}
			else
			{
				DispatchMessage(&msg);
			}
		}
	}
	return S_OK;
Error:
	if (pCPC)
		pCPC->Release();

	return hr;
}

HRESULT CTangram::LoadURLFromMoniker()
{
	HRESULT hr;
	LPMONIKER pMk = NULL;
	LPBINDCTX pBCtx = NULL;
	LPPERSISTMONIKER pPMk = NULL;

	if (FAILED(hr = CreateURLMonikerEx(NULL, CComBSTR(m_strURL), &pMk, URL_MK_UNIFORM)))
	{
		return hr;
	}

	if (FAILED(hr = CreateBindCtx(0, &pBCtx)))
	{
		goto Error;
	}

	if (SUCCEEDED(hr = m_pHtmlDocument2->QueryInterface(IID_IPersistMoniker, (LPVOID*)&pPMk)))
	{
		hr = pPMk->Load(FALSE, pMk, pBCtx, STGM_READ);
	}

Error:
	if (pMk) pMk->Release();
	if (pBCtx) pBCtx->Release();
	if (pPMk) pPMk->Release();
	return hr;
}

HRESULT CTangram::LoadURLFromFile()
{
	HRESULT hr;
	LPPERSISTFILE  pPF;
	if (SUCCEEDED(hr = m_pHtmlDocument2->QueryInterface(IID_IPersistFile, (LPVOID*)&pPF)))
	{
		hr = pPF->Load(CComBSTR(m_strURL), 0);
		pPF->Release();
	}

	return hr;
}


HRESULT CTangram::UnLoad()
{
	HRESULT hr = NOERROR;

	if (m_pCP)
	{
		if (m_dwCookie)
		{
			hr = m_pCP->Unadvise(m_dwCookie);
			m_dwCookie = 0;
		}

		m_pCP->Release();
		m_pCP = NULL;
	}

	if (m_pHtmlDocument2)
	{
		CCommonFunction::ClearObject<IUnknown>(m_pHtmlDocument2);
		m_pHtmlDocument2 = NULL;
	}

	if (m_pHTMLWindow2)
	{
		DWORD dw = m_pHTMLWindow2->Release();
		while(dw>2)
			dw = m_pHTMLWindow2->Release();
		//CCommonFunction::ClearObject<IUnknown>(m_pHTMLWindow2);
		m_pHTMLWindow2 = NULL;
	}


	return NOERROR;
}


