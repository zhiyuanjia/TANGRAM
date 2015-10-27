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

// TangramCore.cpp : Implementation of CTangramCore

#include "stdafx.h"
#include "TangramCore.h"
#include "EclipsePlus\TangramCtrl.h"
#include "OfficePlus\TangramAddin.h"
#include "OfficePlus\LyncPlus\lync.h"
#include "OfficePlus\ExcelPlus\Excel.h"
#include "OfficePlus\WordPlus\MSWord.h"
#include "OfficePlus\ProjectPlus\MSPrj.h"
#include "OfficePlus\OutLookPlus\MsOutl.h"
#include "OfficePlus\PowerpointPlus\msppt.h"
#include "TangramUtilities\TangramDownLoad.h"

class ATL_NO_VTABLE CTangramCoreHelper : public CComObjectRootBase,
	public CComCoClass<CTangramCoreHelper>
{
public:
	static HRESULT WINAPI UpdateRegistry(BOOL bRegister)
	{
		return theApp.UpdateRegistryFromResource(IDR_TANGRAM, bRegister);
	}

	static HRESULT WINAPI CreateInstance(void* pv, REFIID riid, LPVOID* ppv)
	{
		*ppv = theApp.m_pTangramCore;
		return S_OK;
	}
};

TANGRAM_OBJECT_ENTRY_AUTO(CLSID_TangramCore, CTangramCoreHelper)

void CTangramHelperWnd::OnFinalMessage(HWND hWnd)
{
	CWindowImpl::OnFinalMessage(hWnd);
	if (m_strID != _T(""))
	{
		map<CString, ITangramCore*>::iterator it = theApp.m_mapRemoteTangramCore.find(m_strID);
		if (it != theApp.m_mapRemoteTangramCore.end())
		{
			theApp.m_mapRemoteTangramCore.erase(m_strID);
			//it->second->Release();
		}
		map<CString, IDispatch*>::iterator it2 = theApp.m_pHostCore->m_mapAppDispDic.find(m_strID);
		if (it2 != theApp.m_pHostCore->m_mapAppDispDic.end())
		{
			theApp.m_pHostCore->m_mapAppDispDic.erase(it2);
			//it2->second->Release();
		}
	}
	delete this;
}

// CTangramCore
CTangramCore::CTangramCore()
{
	m_pFrame = NULL;
	m_pTangram = NULL;
	m_hMainWnd = NULL;
	m_hMainFrameWnd = NULL;
	m_hHostWnd = NULL;
	theApp.m_pHostCore = this;
	m_pRootNodes = NULL;
	ITypeInfo* pTypeInfo = NULL;
	ITypeLib* pTypeLib = NULL;
	GetTI(0, &pTypeInfo);
	if (pTypeInfo)
	{
		pTypeInfo->GetContainingTypeLib(&pTypeLib, 0);
		pTypeLib->GetTypeInfoOfGuid(DIID__ITangramEvent, &theApp.m_pTangramEventTypeInfo);
		pTypeInfo->Release();
		pTypeLib->Release();
	}

	TRACE(_T("------------------Create CTangramCore------------------------\n"));
}

CTangramCore::~CTangramCore()
{
	map<CString, IDispatch*>::iterator it = m_mapObjDic.end();
	for (it = m_mapObjDic.begin(); it != m_mapObjDic.end(); it++)
	{
		it->second->Release();
	}
	m_mapObjDic.erase(m_mapObjDic.begin(), m_mapObjDic.end());
	if (m_pRootNodes)
		CCommonFunction::ClearObject<CTangramNodeCollection>(m_pRootNodes);
	TRACE(_T("------------------Release CTangramCore------------------------\n"));
}

HRESULT CTangramCore::ExtendEx(LONGLONG hWnd, BSTR bstrXTMLFile, LONG l, LONG t, LONG r, LONG b, LONG l2, LONG t2, LONG r2, LONG b2, ITangramNode** pDocObj)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	CString strXml = OLE2T(bstrXTMLFile);
	CTangramXmlParse m_Parse;
	bool bXml = m_Parse.LoadXml(strXml);
	if (bXml == false)
		bXml = m_Parse.LoadFile(strXml);

	if (bXml == false)
		return S_FALSE;

	theApp.m_strCurrentRootName = m_Parse.attr(_T("name"), _T("Tangram"));
	m_Parse.put_attr(_T("name"), theApp.m_strCurrentKey);
	CTangramXmlParse* pWndNode = m_Parse.GetChild(_T("window"));
	if (pWndNode == NULL)
		return S_FALSE;
	CTangramXmlParse* pNode = pWndNode->GetChild(_T("node"));
	if (pNode == NULL)
		return S_FALSE;
	CString strKey = theApp.m_strCurrentKey;
	if (strKey == _T(""))
		strKey = strXml;

	strKey = strKey.MakeLower();
	HWND m_hHostMain = (HWND)hWnd;
	HWND hParent = ::GetParent(m_hHostMain);
	if (hParent == NULL)
		m_hHostMain = FindWindowEx(m_hHostMain, NULL, LPCTSTR(theApp.m_strMainClientWndID), _T(""));

	if (m_hHostMain == 0)
	{
		HWND hWnd = ::GetActiveWindow();
		HWND hDesktopWnd = ::GetDesktopWindow();
		HWND hMainWnd = NULL;
		while (hWnd  &&  hWnd != hDesktopWnd)
		{
			hMainWnd = hWnd;
			hWnd = ::GetParent(hWnd);
		}

		m_hHostMain = FindWindowEx(hMainWnd, NULL, LPCTSTR(theApp.m_strMainClientWndID), _T(""));
		if (m_hHostMain == 0)
			m_hHostMain = FindWindowEx(m_hHostMain, NULL, LPCTSTR(theApp.m_strMainClientWndID), _T(""));
		if (m_hHostMain == NULL)
			return S_OK;
	}

	DWORD dwID = ::GetWindowThreadProcessId(m_hHostMain, NULL);
	TRACE(_T("ExtendEx ThreadInfo:%x\n"), dwID);
	TangramThreadInfo* pThreadInfo = theApp.GetThreadInfo(dwID);
	theApp.SetHook(dwID);
	CTangramFrame* _pFrame = NULL;
	map<HWND, CTangramFrame*>::iterator iter = pThreadInfo->m_mapTangramFrame.find(m_hHostMain);

	if (iter != pThreadInfo->m_mapTangramFrame.end())
		_pFrame = iter->second;

	if (_pFrame == NULL || iter == pThreadInfo->m_mapTangramFrame.end() && m_hHostMain)
	{
		_pFrame = new CComObject<CTangramFrame>();
		pThreadInfo->m_mapTangramFrame[m_hHostMain] = _pFrame;
	}

	if (b)
		_pFrame->m_bottom = b;
	if (r)
		_pFrame->m_right = r;
	if (l)
		_pFrame->m_left = l;
	if (t)
		_pFrame->m_top = t;
	if (b2)
		_pFrame->m_bottom2 = b2;
	if (r2)
		_pFrame->m_right2 = r2;
	if (l2)
		_pFrame->m_left2 = l2;
	if (t2)
		_pFrame->m_top2 = t2;

	strXml = m_Parse.xml();

	CWnd::FromHandle(m_hHostMain)->ModifyStyle(0, WS_CLIPSIBLINGS | WS_CLIPCHILDREN);
	if (_pFrame->m_pWorkNode == NULL || !::IsWindow(_pFrame->m_pWorkNode->m_pHostWnd->m_hWnd))
	{
		if (_pFrame->m_hWnd != NULL)
			_pFrame->UnsubclassWindow();
		_pFrame->SubclassWindow(m_hHostMain);
	}

	CTangramNode *pRootNode = NULL;
	if (_pFrame)
	{
		if (theApp.m_pTangram)
		{
			_pFrame->m_pTangram = theApp.m_pTangram;
			theApp.m_pTangram = NULL;
			_pFrame->m_pTangram->Fire_BeforeExtendXml(CComBSTR(strXml), (LONGLONG)m_hHostMain);
		}
		pRootNode = _pFrame->OpenXtmlDocument(strKey, strXml);
	}

	if (pRootNode != NULL)
	{
		*pDocObj = pRootNode;
		if (theApp.m_strCurrentKey != _T(""))
		{
			pRootNode->m_strRootName = theApp.m_strCurrentKey;
			theApp.m_strCurrentKey = _T("");
		}

		if (pRootNode->m_nViewType != Splitter)
		{
			if (pRootNode->m_pHostWnd)
				pRootNode->m_pHostWnd->ModifyStyleEx(WS_EX_WINDOWEDGE | WS_EX_CLIENTEDGE, 0);
		}
		theApp.HostPosChanged(_pFrame->m_pWorkNode);
		if (theApp.m_pTangramMDIClientBKWnd&&_pFrame->m_pBKWnd == theApp.m_pTangramMDIClientBKWnd)
			::PostMessage(theApp.m_pTangramMDIClientBKWnd->m_hWnd, WM_NAVIXTML, 0, 0);

		HRESULT hr = S_OK;
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
			IDispatch * pConnection = static_cast<IDispatch *>(punkConnection.p);
			if (pConnection)
			{
				CComVariant avarParams[3];
				avarParams[2] = hWnd;
				avarParams[2].vt = VT_I4;
				avarParams[1] = bstrXTMLFile;
				avarParams[1].vt = VT_BSTR;
				avarParams[0] = *pDocObj;
				CComVariant varResult;
				DISPPARAMS params = { avarParams, NULL, 3, 0 };
				hr = pConnection->Invoke(1, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, &varResult, NULL, NULL);
			}
		}
	}
	return S_OK;
}

STDMETHODIMP CTangramCore::put_ExternalInfo(VARIANT newVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	switch (newVal.vt)
	{
	case VT_BSTR:
	{
		CString str(newVal.bstrVal);

		if (str.Find(TGM_SETTING_HEAD, 0) == 0)
		{
			int iType;
			long iValue;
			_stscanf_s(str.GetBuffer(), TGM_SETTING_FOMRAT, &iType, &iValue);

			switch (iType)
			{
			case TGM_S_EXCEL_INPUT:
			{
				theApp.m_hExcelEdit = (HWND)iValue;
			}
			break;
			}
			return S_OK;
		}
	}
	break;
	case VT_DISPATCH:
	{
		if (theApp.m_pAppDisp == NULL)
		{
			theApp.m_pAppDisp = newVal.pdispVal;
			theApp.m_pAppDisp->AddRef();
			return S_OK;
		}
	}
	break;
	}

	theApp.m_varApplication = newVal;
	return S_OK;
}

STDMETHODIMP CTangramCore::get_ExternalInfo(VARIANT* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	*pVal = CComVariant(theApp.m_varApplication);

	if (theApp.m_varApplication.vt == VT_DISPATCH)
	{
		//(*pVal).pdispVal->AddRef();
	}
	return S_OK;
}

STDMETHODIMP CTangramCore::get_RootNodes(ITangramNodeCollection** pNodeColletion)
{
	if (m_pRootNodes == NULL)
	{
		CComObject<CTangramNodeCollection>::CreateInstance(&m_pRootNodes);
		m_pRootNodes->AddRef();
	}

	m_pRootNodes->m_pNodes->clear();

	map<HWND, CTangram*>::iterator it;
	for (it = theApp.m_mapTangrm.begin(); it != theApp.m_mapTangrm.end(); it++)
	{
		CTangram* pFrame = it->second;

		map<HWND, CTangramFrame*>::iterator fit;
		for (fit = pFrame->m_mapFrame.begin(); fit != pFrame->m_mapFrame.end(); fit++)
		{
			CTangramFrame* pFrame = fit->second;

			map<CString, CTangramNode*>::iterator it;
			for (it = pFrame->m_mapNode.begin(); it != pFrame->m_mapNode.end(); it++)
			{
				m_pRootNodes->m_pNodes->push_back(it->second);
			}
		}
	}
	return m_pRootNodes->QueryInterface(IID_ITangramNodeCollection, (void**)pNodeColletion);
}

STDMETHODIMP CTangramCore::get_CurrentActiveNode(ITangramNode** pVal)
{
	if (theApp.m_pTangramNode)
		*pVal = theApp.m_pTangramNode;

	return S_OK;
}

STDMETHODIMP CTangramCore::GetTangramFrame(LONGLONG hHostWnd, ITangramFrame** ppFrame)
{
	HWND m_hHostMain = (HWND)hHostWnd;
	DWORD dwID = ::GetWindowThreadProcessId(m_hHostMain, NULL);
	TangramThreadInfo* pThreadInfo = theApp.GetThreadInfo(dwID);

	CTangramFrame* m_pFrame = NULL;
	map<HWND, CTangramFrame*>::iterator iter = pThreadInfo->m_mapTangramFrame.find(m_hHostMain);
	if (iter != pThreadInfo->m_mapTangramFrame.end())
	{
		m_pFrame = (CTangramFrame*)iter->second;
		*ppFrame = m_pFrame;
	}

	return S_OK;
}

STDMETHODIMP CTangramCore::SetHostFocus(void)
{
	theApp.m_pTangramFrame = NULL;
	return S_OK;
}

STDMETHODIMP CTangramCore::CreateCLRObj(BSTR bstrObjID, IDispatch** ppDisp)
{
	theApp.LoadCLR();

	if (theApp.m_pTangramCLRProxy)
	{
		*ppDisp = theApp.m_pTangramCLRProxy->CreateCLRObj(bstrObjID);
		if (*ppDisp)
			(*ppDisp)->AddRef();
	}
	return S_OK;
}

STDMETHODIMP CTangramCore::get_CreatingNode(ITangramNode** pVal)
{
	if (theApp.m_pTangramNode)
		*pVal = theApp.m_pTangramNode;

	return S_OK;
}

STDMETHODIMP CTangramCore::put_CLRProperty(BSTR newVal)
{
	if (theApp.m_strCLRScript == _T(""))
		theApp.m_strCLRScript = OLE2T(newVal);
	return S_OK;
}

STDMETHODIMP CTangramCore::Encode(BSTR bstrSRC, VARIANT_BOOL bEncode, BSTR* bstrRet)
{
	CString strSRC = OLE2T(bstrSRC);
	if (::PathFileExists(strSRC))
		strSRC = theApp.EncodeFileToBase64(strSRC);
	else if (strSRC != _T(""))
		strSRC = theApp.Encode(strSRC, bEncode ? true : false);

	*bstrRet = strSRC.AllocSysString();
	return S_OK;
}

STDMETHODIMP CTangramCore::get_Application(IDispatch** pVal)
{
	if (theApp.m_pAppDisp)
	{
		*pVal = theApp.m_pAppDisp;
		(*pVal)->AddRef();
	}
	return S_OK;
}

STDMETHODIMP CTangramCore::get_TangramExtender(BSTR bstrKey, IDispatch** pVal)
{
	CString strName = OLE2T(bstrKey);
	if (strName != _T(""))
	{
		map<CString, IDispatch*>::iterator it = m_mapObjDic.find(strName);
		if (it == m_mapObjDic.end())
			return S_OK;
		else
		{
			* pVal = it->second;
			(*pVal)->AddRef();
		}
	}

	return S_OK;
}

STDMETHODIMP CTangramCore::put_TangramExtender(BSTR bstrKey, IDispatch* newVal)
{
	CString strName = OLE2T(bstrKey);
	if (strName != _T(""))
	{
		map<CString, IDispatch*>::iterator it = m_mapObjDic.find(strName);
		if (it != m_mapObjDic.end())
		{
			it->second->Release();
			m_mapObjDic.erase(it);
		}
		if (newVal != NULL)
		{
			m_mapObjDic[strName] = newVal;
			newVal->AddRef();
		}
	}
	return S_OK;
}

STDMETHODIMP CTangramCore::get_TangramVal(BSTR bstrKey, VARIANT* pVal)
{
	CString strKey = OLE2T(bstrKey);

	if (strKey != _T(""))
	{
		strKey.Trim();
		strKey.MakeLower();
		map<CString, CComVariant>::iterator it = theApp.m_mapValInfo.find(strKey);
		if (it != theApp.m_mapValInfo.end())
			*pVal = it->second;
	}
	return S_OK;
}

STDMETHODIMP CTangramCore::put_TangramVal(BSTR bstrKey, VARIANT newVal)
{
	CString strKey = OLE2T(bstrKey);

	if (strKey == _T("")/*||strVal==_T("")*/)
		return S_OK;
	strKey.Trim();
	strKey.MakeLower();
	theApp.m_mapValInfo[strKey] = newVal;
	if (strKey.CompareNoCase(_T("EnableProcessFormTabKey")) == 0/* && strVal.CompareNoCase(_T("0")) == 0*/)
	{
		if (newVal.vt == VT_I4&&newVal.lVal == 0)
		{
			theApp.m_bEnableProcessFormTabKey = false;
			return S_OK;
		}
	}
	if (strKey.CompareNoCase(_T("OfficePlusApp")) == 0)
	{
		if (newVal.vt == VT_I4&&newVal.lVal)
		{
			theApp.m_pTangramOfficePlusApp = (CTangramOfficePlusApp*)newVal.lVal;
			if (theApp.m_pTangramOfficePlusApp&&theApp.m_hCBTHook == NULL)
			{
				theApp.m_hCBTHook = SetWindowsHookEx(WH_CBT, CTangramApp::CBTProc, NULL, GetCurrentThreadId());
			}
			return S_OK;
		}
	}
	if (strKey.CompareNoCase(_T("mainwnd")) == 0)
	{
		if ((newVal.vt == VT_I4 || newVal.vt == VT_I8) && newVal.lVal)
		{
			HWND hWnd = (HWND)newVal.lVal;
			if (::IsWindow(hWnd))
			{
				theApp.m_pHostCore->m_hMainWnd = hWnd;
			}
			return S_OK;
		}
	}
	if (strKey.CompareNoCase(_T("defaultframewnd")) == 0)
	{
		if ((newVal.vt == VT_I4 || newVal.vt == VT_I8) && newVal.lVal)
		{
			HWND hWnd = (HWND)newVal.lVal;
			if (::IsWindow(hWnd))
			{
				theApp.m_pHostCore->m_hMainFrameWnd = hWnd;
			}
			return S_OK;
		}
	}
	return S_OK;
}

STDMETHODIMP CTangramCore::MessageBox(LONGLONG hWnd, BSTR bstrContext, BSTR bstrCaption, long nStyle, int* nRet)
{
	*nRet = ::MessageBox((HWND)hWnd, OLE2T(bstrContext), OLE2T(bstrCaption), nStyle);
	return S_OK;
}

STDMETHODIMP CTangramCore::NewGUID(BSTR* retVal)
{
	GUID   m_guid;
	CString   strGUID = _T("");
	if (S_OK == ::CoCreateGuid(&m_guid))
	{
		strGUID.Format(_T("%08X-%04X-%04x-%02X%02X-%02X%02X%02X%02X%02X%02X"),
			m_guid.Data1, m_guid.Data2, m_guid.Data3, m_guid.Data4[0], m_guid.Data4[1], m_guid.Data4[2], m_guid.Data4[3],
			m_guid.Data4[4], m_guid.Data4[5], m_guid.Data4[6], m_guid.Data4[7]);
		*retVal = strGUID.AllocSysString();
	}

	return S_OK;
}

STDMETHODIMP CTangramCore::ConnectCLRProxy(LONGLONG pTangramCLRProxy)
{
	if (theApp.m_pTangramCLRProxy == NULL&&pTangramCLRProxy)
	{
		theApp.m_pTangramCLRProxy = (CTangramCLRProxyBase *)pTangramCLRProxy;
		theApp.m_pTangramCLRProxy->m_pProxy = &theApp;
		if (theApp.m_hCBTHook == NULL)
			theApp.m_hCBTHook = SetWindowsHookEx(WH_CBT, CTangramApp::CBTProc, NULL, GetCurrentThreadId());
	}
	return S_OK;
}

STDMETHODIMP CTangramCore::TangramGetObject(IDispatch* SourceDisp, IDispatch** ResultDisp)
{
	IStream* pStream = 0;
	HRESULT hr = ::CoMarshalInterThreadInterfaceInStream(IID_IDispatch, SourceDisp, &pStream);
	if (hr == S_OK)
	{
		IDispatch* pEventTarget = NULL;
		hr = ::CoGetInterfaceAndReleaseStream(pStream, IID_IDispatch, (LPVOID *)&pEventTarget);
		if (hr == S_OK&&pEventTarget)
		{
			*ResultDisp = pEventTarget;
		}
	}

	return S_OK;
}

STDMETHODIMP CTangramCore::GetCLRControl(IDispatch* CtrlDisp, BSTR bstrNames, IDispatch** ppRetDisp)
{
	CString strNames = OLE2T(bstrNames);
	if (theApp.m_pTangramCLRProxy&&strNames != _T("") && CtrlDisp)
		*ppRetDisp = theApp.m_pTangramCLRProxy->GetCLRControl(CtrlDisp, bstrNames);

	return S_OK;
}

STDMETHODIMP CTangramCore::ActiveCLRMethod(BSTR bstrObjID, BSTR bstrMethod, BSTR bstrParam, BSTR bstrData)
{
	theApp.LoadCLR();

	if (theApp.m_pTangramCLRProxy)
		theApp.m_pTangramCLRProxy->ActiveCLRMethod(bstrObjID, bstrMethod, bstrParam, bstrData);

	return S_OK;
}

STDMETHODIMP CTangramCore::CreateTangram(LONGLONG hWnd, ITangram** ppTangram)
{
	HWND _hWnd = (HWND)hWnd;
	if (::IsWindow(_hWnd))
	{
		CTangram* pTangram = NULL;
		map<HWND, CTangram*>::iterator it = theApp.m_mapTangrm.find(_hWnd);
		if (it != theApp.m_mapTangrm.end())
			pTangram = it->second;
		else
		{
			pTangram = new CComObject<CTangram>();
			pTangram->m_hWnd = _hWnd;
			theApp.m_mapTangrm[_hWnd] = pTangram;
		}
		if (_hWnd == m_hMainWnd)
		{
			m_mapObjDic[_T("defaulttangram")] = pTangram;
		}
		*ppTangram = pTangram;
	}
	return S_OK;
}

STDMETHODIMP CTangramCore::GetItemText(ITangramNode* pNode, long nCtrlID, LONG nMaxLengeh, BSTR* bstrRet)
{
	if (pNode == NULL)
		return S_OK;
	LONGLONG h = 0;
	pNode->get_Handle(&h);


	HWND hWnd = (HWND)h;
	if (::IsWindow(hWnd))
	{
		if (nMaxLengeh == 0)
		{
			hWnd = ::GetDlgItem(hWnd, nCtrlID);
			m_HelperWnd.Attach(hWnd);
			CString strText(_T(""));
			m_HelperWnd.GetWindowText(strText);
			m_HelperWnd.Detach();
			*bstrRet = strText.AllocSysString();
		}
		else
		{
			LPWSTR lpsz = _T("");
			::GetDlgItemText(hWnd, nCtrlID, lpsz, nMaxLengeh);
			*bstrRet = CComBSTR(lpsz);
		}
	}
	return S_OK;
}

STDMETHODIMP CTangramCore::SetItemText(ITangramNode* pNode, long nCtrlID, BSTR bstrText)
{
	if (pNode == NULL)
		return S_OK;
	LONGLONG h = 0;
	pNode->get_Handle(&h);

	HWND hWnd = (HWND)h;
	if (::IsWindow(hWnd))
		::SetDlgItemText(hWnd, nCtrlID, OLE2T(bstrText));

	return S_OK;
}

STDMETHODIMP CTangramCore::put_ToolWndHandle(LONGLONG newVal)
{
	theApp.m_hVSToolWnd = (HWND)newVal;

	return S_OK;
}

STDMETHODIMP CTangramCore::ConnectApp(BSTR bstrAppID, ITangramCore** ResultTangramCore)
{
	CString strAppID = OLE2T(bstrAppID);
	strAppID.Trim();
	strAppID.MakeLower();
	if (strAppID != _T(""))
	{
		if (theApp.m_mapOfficeAppID.size() == 0)
		{
			theApp.m_mapOfficeAppID[_T("word.application")] = 0;
			theApp.m_mapOfficeAppID[_T("excel.application")] = 1;
			theApp.m_mapOfficeAppID[_T("outlook.application")] = 2;
			theApp.m_mapOfficeAppID[_T("onenote.application")] = 3;
			theApp.m_mapOfficeAppID[_T("infopath.application")] = 4;
			theApp.m_mapOfficeAppID[_T("project.application")] = 5;
			theApp.m_mapOfficeAppID[_T("visio.application")] = 6;
			theApp.m_mapOfficeAppID[_T("access.application")] = 7;
			theApp.m_mapOfficeAppID[_T("powerpoint.application")] = 8;
			theApp.m_mapOfficeAppID[_T("lync.ucofficeintegration.1")] = 9;
		}

		map<CString, ITangramCore*>::iterator it = theApp.m_mapRemoteTangramCore.find(strAppID);
		if (it == theApp.m_mapRemoteTangramCore.end())
		{
			CComPtr<IDispatch> pApp;
			pApp.CoCreateInstance(bstrAppID, 0, CLSCTX_INPROC_SERVER | CLSCTX_LOCAL_SERVER);
			if (pApp)
			{
				map<CString, int>::iterator it2 = theApp.m_mapOfficeAppID.find(strAppID);
				if (it2 != theApp.m_mapOfficeAppID.end())
				{
					int nIndex = it2->second;
					CComPtr<Office::COMAddIns> pAddins;
					switch (nIndex)
					{
					case 0:
					{
						CComQIPtr<Word::_Application> pWordApp(pApp);
						if (pWordApp)
						{
							pWordApp->put_Visible(true);
							pWordApp->get_COMAddIns(&pAddins);
						}
					}
					break;
					case 1:
					{
						CComQIPtr<Excel::_Application> pExcelApp(pApp);
						pExcelApp->put_UserControl(true);
						pExcelApp->get_COMAddIns(&pAddins);
						pExcelApp->put_Visible(0, true);
					}
					break;
					case 2:
					{
						CComQIPtr<OutLook::_Application> pOutLookApp(pApp);
						pOutLookApp->get_COMAddIns(&pAddins);
					}
					break;
					case 3:
					{
						//CComQIPtr<OneNote::_Application> pOneNoteApp(pApp);
						//pOneNoteApp->get_COMAddIns(&pAddins);
					}
					break;
					case 4:
					{
						//CComQIPtr<OneNote::_Application> pOneNoteApp(pApp);
						//pOneNoteApp->get_COMAddIns(&pAddins);
					}
					break;
					case 5:
					{
						CComQIPtr<MSProject::_MSProject> pProjectApp(pApp);
						//pProjectApp->get_COMAddIns(&pAddins);
					}
					break;
					case 6:
					{
						//CComQIPtr<OneNote::_Application> pOneNoteApp(pApp);
						//pOneNoteApp->get_COMAddIns(&pAddins);
					}
					break;
					case 7:
					{
						//CComQIPtr<OneNote::_Application> pOneNoteApp(pApp);
						//pOneNoteApp->get_COMAddIns(&pAddins);
					}
					break;
					case 8:
					{
						CComQIPtr<PowerPoint::_Application> pPptApp(pApp);
						pPptApp->get_COMAddIns(&pAddins);
					}
					break;
					case 9:
					{
						CComPtr<UCCollaborationLib::IUCOfficeIntegration> _pUCOfficeIntegration;
						UCCollaborationLib::ILyncClient*		m_pLyncClient = NULL;
						UCCollaborationLib::IContactManager*	m_pContactManager = NULL;
						IDispatch* pLyncClient = NULL;
						_pUCOfficeIntegration->GetInterface(CComBSTR(_T("15.0.0.0")), UCCollaborationLib::oiInterfaceILyncClient, (IDispatch * *)&pLyncClient);
						HRESULT hr = pLyncClient->QueryInterface(UCCollaborationLib::IID_ILyncClient, (void**)&m_pLyncClient);
						m_pLyncClient->get_ContactManager(&m_pContactManager);
					}
					break;
					default:
						break;
					}

					if (pAddins)
					{
						CComPtr<Office::COMAddIn> pAddin;
						pAddins->Item(&CComVariant(_T("tangram.tangram")), &pAddin);
						if (pAddin)
						{
							CComPtr<IDispatch> pAddin2;
							pAddin->get_Object(&pAddin2);
							CComQIPtr<ITangramCore> _pTangramAddin(pAddin2);
							if (_pTangramAddin)
							{
								theApp.m_mapRemoteTangramCore[strAppID] = _pTangramAddin.p;
								_pTangramAddin.p->AddRef();
								LONGLONG h = 0;
								_pTangramAddin->get_RemoteHelperHWND(&h);
								if (h)
								{
									HWND hWnd = (HWND)h;
									CTangramHelperWnd* pWnd = new CTangramHelperWnd();
									pWnd->m_strID = strAppID;
									pWnd->Create(hWnd, 0, _T(""), WS_CHILD);
									theApp.m_mapRemoteTangramHelperWnd[strAppID] = pWnd;
								}
							}
						}
					}
				}
				else
				{
					DISPID dispID = 0;
					DISPPARAMS dispParams = { NULL, NULL, 0, 0 };
					VARIANT result = { 0 };
					EXCEPINFO excepInfo;
					memset(&excepInfo, 0, sizeof excepInfo);
					UINT nArgErr = (UINT)-1; // initialize to invalid arg
					LPOLESTR func = L"TangramCore";
					HRESULT hr = pApp->GetIDsOfNames(GUID_NULL, &func, 1, LOCALE_SYSTEM_DEFAULT, &dispID);
					if (S_OK == hr)
					{
						hr = pApp->Invoke(dispID, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_PROPERTYGET, &dispParams, &result, &excepInfo, &nArgErr);
						if (S_OK == hr && VT_DISPATCH == result.vt)
						{
							CComQIPtr<ITangramCore> pTangramCore(result.pdispVal);
							if (pTangramCore)
							{
								*ResultTangramCore = pTangramCore.p;
								//(*ResultTangramCore)->AddRef();
								theApp.m_mapRemoteTangramCore[strAppID] = pTangramCore.p;
								pTangramCore.p->AddRef();
								LONGLONG h = 0;
								pTangramCore->get_RemoteHelperHWND(&h);
								if (h)
								{
									HWND hWnd = (HWND)h;
									CTangramHelperWnd* pWnd = new CTangramHelperWnd();
									pWnd->m_strID = strAppID;
									pWnd->Create(hWnd, 0, _T(""), WS_CHILD);
									theApp.m_mapRemoteTangramHelperWnd[strAppID] = pWnd;
									m_mapAppDispDic[strAppID] = pApp.Detach();
								}
								pTangramCore.Detach();
								::VariantClear(&result);
							}
						}
					}
				}
			}
		}
		else
		{
			*ResultTangramCore = it->second;
			(*ResultTangramCore)->AddRef();
		}
	}

	return S_OK;
}

STDMETHODIMP CTangramCore::ShowOfficeObj(BSTR bstrAppID, BSTR bstrKey, BSTR bstrXml, IDispatch** ppRetNode)
{
	CString strAppID = OLE2T(bstrAppID);
	strAppID.Trim();
	strAppID.MakeLower();
	map<CString, ITangramCore*>::iterator it = theApp.m_mapRemoteTangramCore.find(strAppID);
	if (it == theApp.m_mapRemoteTangramCore.end())
	{
		ITangramCore* pTangramCore = NULL;
		ConnectApp(strAppID.AllocSysString(),&pTangramCore);
		it = theApp.m_mapRemoteTangramCore.find(strAppID);
	}
	if (it != theApp.m_mapRemoteTangramCore.end())
		it->second->ShowOfficeDocument(true, bstrKey, bstrXml, ppRetNode);

	return S_OK;
}

STDMETHODIMP CTangramCore::DownLoadFile(BSTR bstrFileURL, BSTR bstrTargetFile, BSTR bstrActionXml)
{
	CString  strFileURL = OLE2T(bstrFileURL);
	strFileURL.Trim();
	if (theApp.CheckUrl(strFileURL) == false)
		return S_FALSE;
	if (strFileURL == _T(""))
		return S_FALSE;
	CString strTargetFile = OLE2T(bstrTargetFile);
	CString _strTarget = _T("");
	int nPos = strTargetFile.Find(_T("\\"));
	if (nPos != -1)
	{
		_strTarget = strTargetFile.Left(nPos);
		if (_strTarget.CompareNoCase(_T("TangramData")) == 0)
		{
			_strTarget = strTargetFile.Mid(nPos);
			strTargetFile = theApp.m_strAppDataPath + _strTarget;
		}
		else
			_strTarget = _T("");

	}

	if (::PathFileExists(strTargetFile))
	{

	}

	nPos = strTargetFile.ReverseFind('\\');
	if (nPos != -1)
	{
		CString strDir = strTargetFile.Left(nPos);
		if (::PathIsDirectory(strDir) == FALSE)
			::SHCreateDirectory(NULL, strDir);
	}

	TangramUtilities::CTangramDownLoad* pDownLoadoObj = new TangramUtilities::CTangramDownLoad();
	pDownLoadoObj->m_strActionXml = OLE2T(bstrActionXml);
	pDownLoadoObj->DownLoadFile(strFileURL, strTargetFile);
	return S_OK;
}

STDMETHODIMP CTangramCore::get_CreatingForm(ITangramVBAForm** pVal)
{
	*pVal = theApp.m_pActiveForm2;

	return S_OK;
}


STDMETHODIMP CTangramCore::ExtendXml(BSTR bstrXml, BSTR bstrKey, IDispatch** ppNode)
{
	AFX_MANAGE_STATE(AfxGetAppModuleState());
	if (m_hMainWnd == 0)
		return S_FALSE;
	if (m_pTangram == NULL)
	{
		theApp.m_pTangramCore->CreateTangram((LONGLONG)m_hMainWnd, &m_pTangram);
	}
	if (m_pTangram)
	{
		if (m_pFrame == NULL&&m_hMainFrameWnd&&::IsWindow(m_hMainFrameWnd))
		{
			theApp.m_pTangram->CreateFrame(CComVariant(0), CComVariant((LONGLONG)m_hMainFrameWnd), CComBSTR(L"tangram"), &m_pFrame);
		}
		if (m_pFrame)
		{
			CString strXml = OLE2T(bstrXml);
			strXml.Trim();
			map<CString, CString>::iterator it = m_strMapKey.find(strXml);
			if (it == m_strMapKey.end())
			{
				m_strMapKey[strXml] = OLE2T(bstrKey);
				CComPtr<ITangramNode> pNode;
				m_pFrame->Extend(bstrKey, bstrXml, &pNode);
			}
			else
				m_pFrame->Extend(CComBSTR(it->second), bstrXml, (ITangramNode**)ppNode);
		}
	}
	::BringWindowToTop(m_hMainWnd);
	::SetFocus(m_hMainWnd);
	return S_OK;
}
