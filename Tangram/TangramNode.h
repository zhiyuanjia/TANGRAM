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

// TangramNode.h : Declaration of the CTangramNode

#pragma once

class CTangramNodeWBEvent : public CWebbrowserEvent,
	public CTangramJSExtender
{
public:
	CTangramNodeWBEvent(CTangramNode* pNode);
	IHTMLDocument2*	m_pHTMLDocument2;

private:
	CTangramNode* m_pTangramNode;
	void __stdcall OnDocumentComplete(IDispatch *pDisp, VARIANT *URL);
	void __stdcall OnNavigateComplete2(IDispatch* pDisp, VARIANT* URL);
};

class ATL_NO_VTABLE CTangramEvent : public CComObjectRootBase,
	public IConnectionPointContainerImpl < CTangramEvent >,
	public IConnectionPointImpl<CTangramEvent, &DIID__ITangramEvent>,
	public IDispatchImpl<ITangramEvent, &IID_ITangramEvent, &LIBID_Tangram,  1,  0>
{
public:
	BEGIN_COM_MAP(CTangramEvent)
		COM_INTERFACE_ENTRY(ITangramEvent)
		COM_INTERFACE_ENTRY(IConnectionPointContainer)
	END_COM_MAP()

	BEGIN_CONNECTION_POINT_MAP(CTangramEvent)
		CONNECTION_POINT_ENTRY(DIID__ITangramEvent)
	END_CONNECTION_POINT_MAP()

	void Lock(){}
	void Unlock(){}

protected:
	ULONG InternalAddRef(){return 1;}
	ULONG InternalRelease(){return 1;}
};

// CTangramNode
class ATL_NO_VTABLE CTangramNode : public CComObjectRootBase,
	public IConnectionPointContainerImpl<CTangramNode>,
	public IConnectionPointImpl<CTangramNode, &__uuidof(_ITangramNodeEvents)>,
	public IDispatchImpl<ITangramNode, &IID_ITangramNode, &LIBID_Tangram,  1,  0>
{
public:
	CTangramNode();
	~CTangramNode();

	BOOL							m_bTopObj;
	BOOL							m_bCreated;
	BOOL							m_bWebInit;
	BOOL							m_bNodeDocComplete;

	ViewType						m_nViewType;
	int								m_nID;
	int								m_nActivePage;
	int								m_nWidth;
	int								m_nHeigh;
	int								m_nRow;
	int								m_nCol;
	int								m_nRows;
	int								m_nCols;
	long							m_nStyle;
	HWND							m_hHostWnd;

	CString 						m_strID;
	CString 						m_strURL;
	CString							m_strKey;
	CString							m_strName;
	CString 						m_strCnnID;
	CString 						m_strCaption;
	CString							m_strRootName;
	CString							m_strPreFixName;
	CString							m_strWebObjName;
	CString 						m_strExtenderID;
	CString							m_strVSToolWndScript;

	TElem							m_ObjItem;
	TElem							m_TangramDocNode;

	IDispatch*						m_pDisp;
	CTangramNode* 					m_pRootObj;
	CTangramNode* 					m_pParentObj;
	CTangramNode*					m_pVisibleXMLObj;

	CWnd*							m_pHostWnd;
	CTangram*						m_pTangram;
	CTangramWnd*					m_pHostClientView;
	CTangramFrame*					m_pFrame;
	ITangramFrame*					m_pHostFrame;
	CRuntimeClass*					m_pObjClsInfo;

	CTangramNodeEvents*				m_pCLREventConnector;
	CTangramNodeWBEvent*			m_pTangramNodeWBEvent;

	CMapStringToPtr					m_PlugInDispDictionary;

	VARIANT							m_varTag;
	IDispatch*						m_pExtender;
	CTangramNodeVector				m_vChildNodes;

	CComObject<CTangramNodeCollection>*	m_pChildNodeCollection;

	BOOL	PreTranslateMessage(MSG* pMsg);
	BOOL	AddChildNode(CTangramNode* pNode);
	BOOL	RemoveChildNode(CTangramNode* pNode);

	HRESULT Fire_ExtendComplete()
	{
		HRESULT hr = S_OK;
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			Lock();
			CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
			Unlock();

			IDispatch * pConnection = static_cast<IDispatch *>(punkConnection.p);

			if (pConnection)
			{
				CComVariant varResult;

				DISPPARAMS params = { NULL, NULL, 0, 0 };
				hr = pConnection->Invoke(1, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, &varResult, NULL, NULL);
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
			Lock();
			CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
			Unlock();

			IDispatch * pConnection = static_cast<IDispatch *>(punkConnection.p);

			if (pConnection)
			{
				CComVariant varResult;

				DISPPARAMS params = { NULL, NULL, 0, 0 };
				hr = pConnection->Invoke(2, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, &varResult, NULL, NULL);
			}
		}
		return hr;
	}

	HRESULT Fire_NodeAddInCreated(IDispatch * pAddIndisp, BSTR bstrAddInID, BSTR bstrAddInXml)
	{
		HRESULT hr = S_OK;
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			Lock();
			CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
			Unlock();

			IDispatch * pConnection = static_cast<IDispatch *>(punkConnection.p);

			if (pConnection)
			{
				CComVariant avarParams[3];
				avarParams[2] = pAddIndisp;
				avarParams[2].vt = VT_DISPATCH;
				avarParams[1] = bstrAddInID;
				avarParams[1].vt = VT_BSTR;
				avarParams[0] = bstrAddInXml;
				avarParams[0].vt = VT_BSTR;
				CComVariant varResult;

				DISPPARAMS params = { avarParams, NULL, 3, 0 };
				hr = pConnection->Invoke(3, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, &varResult, NULL, NULL);
			}
		}
		return hr;
	}

	HRESULT Fire_NodeAddInsCreated()
	{
		HRESULT hr = S_OK;
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			Lock();
			CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
			Unlock();

			IDispatch * pConnection = static_cast<IDispatch *>(punkConnection.p);

			if (pConnection)
			{
				CComVariant varResult;

				DISPPARAMS params = { NULL, NULL, 0, 0 };
				hr = pConnection->Invoke(4, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, &varResult, NULL, NULL);
			}
		}
		return hr;
	}

	HRESULT Fire_NodeDocumentComplete(IDispatch * ExtenderDisp, BSTR bstrURL)
	{
		HRESULT hr = S_OK;
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			Lock();
			CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
			Unlock();

			IDispatch * pConnection = static_cast<IDispatch *>(punkConnection.p);

			if (pConnection)
			{
				CComVariant avarParams[2];
				avarParams[1] = ExtenderDisp;
				avarParams[1].vt = VT_DISPATCH;
				avarParams[0] = bstrURL;
				avarParams[0].vt = VT_BSTR;
				CComVariant varResult;

				DISPPARAMS params = { avarParams, NULL, 2, 0 };
				hr = pConnection->Invoke(5, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, &varResult, NULL, NULL);
			}
		}
		return hr;
	}

	HRESULT Fire_ControlNotify(ITangramNode * sender, LONG NotifyCode, LONG CtrlID, LONGLONG CtrlHandle, BSTR CtrlClassName)
	{
		HRESULT hr = S_OK;
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			Lock();
			CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
			Unlock();

			IDispatch * pConnection = static_cast<IDispatch *>(punkConnection.p);

			if (pConnection)
			{
				CComVariant avarParams[5];
				avarParams[4] = sender;
				avarParams[3] = NotifyCode;
				avarParams[3].vt = VT_I4;
				avarParams[2] = CtrlID;
				avarParams[2].vt = VT_I4;
				avarParams[1] = CtrlHandle;
				avarParams[1].vt = VT_I8;
				avarParams[0] = CtrlClassName;
				avarParams[0].vt = VT_BSTR;
				CComVariant varResult;

				DISPPARAMS params = { avarParams, NULL, 5, 0 };
				hr = pConnection->Invoke(6, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, &varResult, NULL, NULL);
			}
		}
		return hr;
	}

	void Lock(){}
	void Unlock(){}
protected:
	ULONG InternalAddRef(){ return 1; }
	ULONG InternalRelease(){ return 1; }

public:
	STDMETHOD(get_XObject)(VARIANT* pVar);
	STDMETHOD(get_Tag)(VARIANT* pVar);
	STDMETHOD(put_Tag)(VARIANT var);
	STDMETHOD(get_AxPlugIn)(BSTR bstrName, IDispatch** pVal);
	STDMETHOD(get_Name)(BSTR* pVal);
	STDMETHOD(get_Caption)(BSTR* pVal);
	STDMETHOD(put_Caption)(BSTR bstrCaption);
	STDMETHOD(get_Attribute)(BSTR bstrKey, BSTR* pVal);
	STDMETHOD(put_Attribute)(BSTR bstrKey, BSTR bstrVal);
	STDMETHOD(get_Handle)(LONGLONG* hWnd);
	STDMETHOD(get_XML)(BSTR* pVal);
	STDMETHOD(get_ChildNodes)(ITangramNodeCollection** pNodeColletion);
	STDMETHOD(get_Rows)(long* nRows);
	STDMETHOD(get_Cols)(long* nCols);
	STDMETHOD(get_Row)(long* nRow);
	STDMETHOD(get_Col)(long* nCol);
	STDMETHOD(get_Objects)(long nType, ITangramNodeCollection** ppNodeColletion);
	STDMETHOD(get_NodeType)(TangramNodeType* nType);
	STDMETHOD(get_ParentNode)(ITangramNode** ppNode);
	STDMETHOD(get_RootNode)(ITangramNode** ppNode);
	STDMETHOD(get_OuterXml)(BSTR* pVal);
	STDMETHOD(get_Key)(BSTR* pVal);
	STDMETHOD(get_Frame)(ITangramFrame** pVal);
	STDMETHOD(get_Height)(LONG* pVal);
	STDMETHOD(get_Width)(LONG* pVal);
	STDMETHOD(get_Extender)(IDispatch** pVal);
	STDMETHOD(put_Extender)(IDispatch* newVal);
	STDMETHOD(get_Tangram)(ITangram** pVal);
	STDMETHOD(get_HTMLWindow)(IDispatch** pVal);
	STDMETHOD(get_HtmlDocument)(IDispatch** pVal);
	STDMETHOD(get_TangramName)(BSTR* pVal);

	STDMETHOD(ActiveTabPage)(ITangramNode* pNode);
	STDMETHOD(GetNodes)(BSTR bstrName, ITangramNode** ppNode, ITangramNodeCollection** ppNodes, long* pCount);
	STDMETHOD(GetNode)(long nRow, long nCol,ITangramNode** ppTangramNode);
	STDMETHOD(GetCtrlByName)(BSTR bstrName, VARIANT_BOOL bFindInChild, IDispatch** ppRetDisp);
	STDMETHOD(Show)();
	STDMETHOD(Refresh)(void);
	STDMETHOD(Extend)(BSTR bstrKey, BSTR bstrXml, ITangramNode** ppRetNode);
	STDMETHOD(put_VSToolWndScript)(BSTR newVal);

	BEGIN_COM_MAP(CTangramNode)
		COM_INTERFACE_ENTRY(ITangramNode)
		COM_INTERFACE_ENTRY(IDispatch)
		COM_INTERFACE_ENTRY(IConnectionPointContainer)
	END_COM_MAP()

	BEGIN_CONNECTION_POINT_MAP(CTangramNode)
		CONNECTION_POINT_ENTRY(__uuidof(_ITangramNodeEvents))
	END_CONNECTION_POINT_MAP()

	HWND CreateView(HWND hParentWnd, CString strTag);

private:
	void _get_Objects(CTangramNode* pNode, UINT32& nType, CTangramNodeCollection* pNodeColletion);
	int _getNodes(CTangramNode* pNode, CString& strName, CTangramNode**ppRetNode, CTangramNodeCollection* pNodes);
};

// CTangramNodeCollection

class ATL_NO_VTABLE CTangramNodeCollection :
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<ITangramNodeCollection, &IID_ITangramNodeCollection, &LIBID_Tangram, 1, 0>
{
public:
	CTangramNodeCollection();
	~CTangramNodeCollection();

	BEGIN_COM_MAP(CTangramNodeCollection)
		COM_INTERFACE_ENTRY(ITangramNodeCollection)
		COM_INTERFACE_ENTRY(IDispatch)
	END_COM_MAP()

	STDMETHOD(get_NodeCount)(long* pCount);
	STDMETHOD(get_Item)(long iIndex, ITangramNode **ppTangramNode);
	STDMETHOD(get__NewEnum)(IUnknown** ppVal);
	CTangramNodeVector*	m_pNodes;

private:
	CTangramNodeVector	m_vNodes;
};
