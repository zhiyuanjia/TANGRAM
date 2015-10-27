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

// TangramObject.h : CTangram implementation file

#pragma once

#include <assert.h>
#include <wininet.h>

// CTangram
class ATL_NO_VTABLE CTangram : 
	public CComObjectRootBase,
	public CTangramJSExtender,
	public IPropertyNotifySink,
	public IConnectionPointContainerImpl <CTangram>,
	public IConnectionPointImpl<CTangram, &__uuidof(_ITangram)>,
	public IDispatchImpl<ITangram, &IID_ITangram, &LIBID_Tangram,  1,  0>
{
public:
	CTangram();
	~CTangram();

	int											m_nWebViewCount;
	HWND										m_hWnd;

	map<CString, HWND>							m_mapWnd;
	map<HWND, CTangramFrame*>					m_mapFrame;
	map<CString, CTangramNode*>					m_mapNode;
	map<CString, IDispatch*>					m_mapExternalObj;
	map<IHTMLDocument2*, CTangramJSExtender*>	m_mapTangramJSExtender;

	BEGIN_COM_MAP(CTangram)
		COM_INTERFACE_ENTRY(ITangram)
		COM_INTERFACE_ENTRY(IDispatch)
		COM_INTERFACE_ENTRY(IPropertyNotifySink)
		COM_INTERFACE_ENTRY(IConnectionPointContainer)
	END_COM_MAP()

	BEGIN_CONNECTION_POINT_MAP(CTangram)
		CONNECTION_POINT_ENTRY(__uuidof(_ITangram))
	END_CONNECTION_POINT_MAP()

	void Lock(){}
	void Unlock(){}
	void BeforeDestory();

	HRESULT Fire_PageLoaded(IDispatch * sender, BSTR url)
	{
		HRESULT hr = S_OK;
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);

			IDispatch * pConnection = static_cast<IDispatch *>(punkConnection.p);
			if (pConnection)
			{
				CComVariant avarParams[2];
				avarParams[1] = sender;
				avarParams[1].vt = VT_DISPATCH;
				avarParams[0] = url;
				avarParams[0].vt = VT_BSTR;
				CComVariant varResult;

				DISPPARAMS params = { avarParams, NULL, 2, 0 };
				hr = pConnection->Invoke(1, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, &varResult, NULL, NULL);
			}
		}
		return hr;
	}

	HRESULT Fire_NodeCreated(ITangramNode * pNodeCreated)
	{
		HRESULT hr = S_OK;
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			IUnknown* punkConnection = m_vec.GetAt(iConnection);

			IDispatch * pConnection = static_cast<IDispatch *>(punkConnection);

			if (pConnection)
			{
				CComVariant avarParams[1];
				avarParams[0] = pNodeCreated;
				CComVariant varResult;

				DISPPARAMS params = { avarParams, NULL, 1, 0 };
				hr = pConnection->Invoke(2, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, &varResult, NULL, NULL);
			}
		}
		return hr;
	}

	HRESULT Fire_AddInCreated(ITangramNode * pRootNode, IDispatch * pAddIn, BSTR bstrID, BSTR bstrAddInXml)
	{
		HRESULT hr = S_OK;
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			IUnknown* punkConnection = m_vec.GetAt(iConnection);

			IDispatch * pConnection = static_cast<IDispatch *>(punkConnection);

			if (pConnection)
			{
				CComVariant avarParams[4];
				avarParams[3] = pRootNode;
				avarParams[2] = pAddIn;
				avarParams[2].vt = VT_DISPATCH;
				avarParams[1] = bstrID;
				avarParams[1].vt = VT_BSTR;
				avarParams[0] = bstrAddInXml;
				avarParams[0].vt = VT_BSTR;
				CComVariant varResult;

				DISPPARAMS params = { avarParams, NULL, 4, 0 };
				hr = pConnection->Invoke(3, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, &varResult, NULL, NULL);
			}
		}
		return hr;
	}

	HRESULT Fire_BeforeExtendXml(BSTR bstrXml, LONGLONG hWnd)
	{
		HRESULT hr = S_OK;
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			IUnknown* punkConnection = m_vec.GetAt(iConnection);

			IDispatch * pConnection = static_cast<IDispatch *>(punkConnection);

			if (pConnection)
			{
				CComVariant avarParams[2];
				avarParams[1] = bstrXml;
				avarParams[1].vt = VT_BSTR;
				avarParams[0] = hWnd;
				avarParams[0].vt = VT_I8;
				CComVariant varResult;

				DISPPARAMS params = { avarParams, NULL, 2, 0 };
				hr = pConnection->Invoke(4, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, &varResult, NULL, NULL);
			}
		}
		return hr;
	}

	HRESULT Fire_ExtendXmlComplete(BSTR bstrXml, LONGLONG hWnd, ITangramNode * pRetRootNode)
	{
		HRESULT hr = S_OK;
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			IUnknown* punkConnection = m_vec.GetAt(iConnection);

			IDispatch * pConnection = static_cast<IDispatch *>(punkConnection);

			if (pConnection)
			{
				CComVariant avarParams[3];
				avarParams[2] = bstrXml;
				avarParams[2].vt = VT_BSTR;
				avarParams[1] = hWnd;
				avarParams[1].vt = VT_I8;
				avarParams[0] = pRetRootNode;
				CComVariant varResult;

				DISPPARAMS params = { avarParams, NULL, 3, 0 };
				hr = pConnection->Invoke(5, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, &varResult, NULL, NULL);
			}
		}
		return hr;
	}

	HRESULT Fire_Destroy()
	{
		HRESULT hr = S_OK;
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			IUnknown* punkConnection = m_vec.GetAt(iConnection);

			IDispatch * pConnection = static_cast<IDispatch *>(punkConnection);

			if (pConnection)
			{
				CComVariant varResult;

				DISPPARAMS params = { NULL, NULL, 0, 0 };
				hr = pConnection->Invoke(6, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, &varResult, NULL, NULL);
			}
		}
		return hr;
	}

	HRESULT Fire_NodeMouseActivate(ITangramNode * pActiveNode)
	{
		HRESULT hr = S_OK;
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);

			IDispatch * pConnection = static_cast<IDispatch *>(punkConnection.p);

			if (pConnection)
			{
				CComVariant avarParams[1];
				avarParams[0] = pActiveNode;
				CComVariant varResult;

				DISPPARAMS params = { avarParams, NULL, 1, 0 };
				hr = pConnection->Invoke(7, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, &varResult, NULL, NULL);
			}
		}
		return hr;
	}

	HRESULT Fire_ClrControlCreated(ITangramNode * Node, IDispatch * Ctrl, BSTR CtrlName, LONGLONG CtrlHandle)
	{
		HRESULT hr = S_OK;
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			IUnknown* punkConnection = m_vec.GetAt(iConnection);

			IDispatch * pConnection = static_cast<IDispatch *>(punkConnection);

			if (pConnection)
			{
				CComVariant avarParams[4];
				avarParams[3] = Node;
				avarParams[3].vt = VT_DISPATCH;
				avarParams[2] = Ctrl;
				avarParams[2].vt = VT_DISPATCH;
				avarParams[1] = CtrlName;
				avarParams[1].vt = VT_BSTR;
				avarParams[0] = CtrlHandle;
				avarParams[0].vt = VT_I8;
				CComVariant varResult;

				DISPPARAMS params = { avarParams, NULL, 4, 0 };
				hr = pConnection->Invoke(8, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, &varResult, NULL, NULL);
			}
		}
		return hr;
	}

	void OnNodeDocComplete(WPARAM);
protected:
	ULONG InternalAddRef(){ return 1; }
	ULONG InternalRelease(){ return 1; }

public:
	STDMETHOD(get_Count)(long* pCount);
	STDMETHOD(get_Frame)(VARIANT vIndex, ITangramFrame **ppFrame);
	STDMETHOD(get__NewEnum)(IUnknown** ppVal);
	STDMETHOD(get_External)(IDispatch** ppVal);
	STDMETHOD(put_External)(IDispatch* newVal);
	STDMETHOD(get_URL)(BSTR* pVal);
	STDMETHOD(put_URL)(BSTR newVal);
	STDMETHOD(get_Handle)(LONGLONG* pVal);
	STDMETHOD(get_TangramCore)(ITangramCore** pVal);
	STDMETHOD(get_Extender)(BSTR bstrExtenderName, IDispatch** pVal);
	STDMETHOD(put_Extender)(BSTR bstrExtenderName, IDispatch* newVal);
	STDMETHOD(get_FrameName)(LONGLONG hHwnd, BSTR* pVal);
	STDMETHOD(get_TangramFrame)(BSTR bstrFrameName, ITangramFrame** pVal);
	STDMETHOD(get_Nodes)(BSTR bstrNodeName, ITangramNode** pVal);
	STDMETHOD(get_NodeNames)(BSTR* pVal);
	STDMETHOD(get_XObjects)(BSTR bstrName, IDispatch** pVal);
	STDMETHOD(get_HTMLWindow)(BSTR NodeName, IDispatch** pVal);
	STDMETHOD(get_HtmlDocument)(IDispatch** pVal);
	STDMETHOD(get_Parent)(ITangram** pVal);
	STDMETHOD(get_EnableSinkCLRCtrlCreatedEvent)(VARIANT_BOOL* pVal);
	STDMETHOD(put_EnableSinkCLRCtrlCreatedEvent)(VARIANT_BOOL newVal);
	STDMETHOD(get_Width)(long* pVal);
	STDMETHOD(put_Width)(long newVal);
	STDMETHOD(get_Height)(long* pVal);
	STDMETHOD(put_Height)(long newVal);
	STDMETHOD(get_xtml)(BSTR strKey, BSTR* pVal);
	STDMETHOD(put_xtml)(BSTR strKey, BSTR newVal);

	STDMETHOD(AttachNodeEvent)(BSTR bstrNames, IDispatch* pWndDisp);
	STDMETHOD(AttachObjEvent)(IDispatch* HTMLWindow, IDispatch* SourceObj, BSTR bstrEventName, BSTR AliasName);
	STDMETHOD(AttachNodeSubCtrlEvent)(IDispatch* HtmlWndDisp, VARIANT Node, VARIANT CtrlName, BSTR EventName, BSTR AliasName);
	STDMETHOD(AddObjToHtml)(BSTR strObjName, VARIANT_BOOL bConnectEvent, IDispatch* pObjDisp);
	STDMETHOD(AttachEvent)(BSTR bstrName, IDispatch* pDoc, VARIANT_BOOL* bResult);
	STDMETHOD(AddNodesToPage)(IDispatch* pHtmlDoc, BSTR bstrNodeNames, VARIANT_BOOL bAdd, VARIANT_BOOL* bSuccess);
	STDMETHOD(AddObject)(IDispatch* pHtmlDoc, IDispatch* pObject, BSTR bstrObjName, VARIANT_BOOL bSinkEvent, VARIANT_BOOL* bResult);
	STDMETHOD(CreateFrame)(VARIANT ParentObj, VARIANT HostWnd, BSTR bstrFrameName, ITangramFrame** pRetFrame);
	STDMETHOD(GetTangramNode)(BSTR bstrFrameName, BSTR bstrNodeName, ITangramNode** pRetNode);
	STDMETHOD(GetFrameFromCtrl)(IDispatch* ctrl, ITangramFrame** ppFrame);
	STDMETHOD(GetHtmlDocument)(IDispatch* HtmlWindow, IDispatch** ppHtmlDoc);
	STDMETHOD(GetCtrlByName)(IDispatch* pCtrl, BSTR bstrName, VARIANT_BOOL bFindInChild, IDispatch** ppRetDisp);
	STDMETHOD(GetCtrlValueByName)(IDispatch* pCtrl, BSTR bstrName, VARIANT_BOOL bFindInChild, BSTR* bstrVal);
	STDMETHOD(GetCtrlInNode)(BSTR NodeName, BSTR CtrlName, IDispatch** ppCtrl);
	STDMETHOD(Extend)(IDispatch* Parent, BSTR CtrlName, BSTR FrameName, BSTR bstrKey, BSTR bstrXml, ITangramNode** ppRetNode);
	STDMETHOD(ExtendXml)(LONGLONG hHostWnd, BSTR bstrXml, BSTR bstrFrameName, ITangramNode** pRetNode);
	STDMETHOD(ExtendCtrl)(VARIANT MdiForm, BSTR bstrKey, BSTR bstrXml, ITangramNode** ppRetNode);

private:
	bool										m_bIsBlank;
	bool										m_bIsDestory;
	bool										m_bDocComplete;
	VARIANT_BOOL								m_bEnableSinkCLRCtrlCreatedEvent;

	DWORD										m_nThreadId;
	DWORD										m_dwCookie;
	HRESULT										m_hrConnected;
	READYSTATE									m_lReadyState;
	INTERNET_SCHEME								m_nScheme;
	CString										m_strURL;

	IDispatch*									m_pExternalDisp;
	IHTMLWindow2*								m_pHTMLWindow2;
	IHTMLDocument2*								m_pHtmlDocument2;
	LPCONNECTIONPOINT							m_pCP;

	map<CString, CString>						m_mapXtml;

	HRESULT Init(CString szURL);
	HRESULT UnLoad();
	HRESULT LoadURLFromFile();
	HRESULT LoadURLFromMoniker();

	// IPropertyNotifySink methods
	STDMETHOD(OnChanged)(DISPID dispID);
	STDMETHOD(OnRequestEdit)(DISPID dispID);
};

