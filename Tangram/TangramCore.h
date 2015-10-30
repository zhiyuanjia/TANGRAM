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

// TangramCore.h : Declaration of the CTangramCore

#pragma once
class CTangramHelperWnd :
	public CWindowImpl<CTangramHelperWnd, CWindow>
{
public:
	CTangramHelperWnd(void) { m_strID = _T(""); };
	~CTangramHelperWnd(void) {};

	CString m_strID;
	DECLARE_WND_CLASS(_T("Tangram Helper Window Class"))
	BEGIN_MSG_MAP(CTangramHelperWnd)
	END_MSG_MAP()
	virtual void OnFinalMessage(HWND hWnd);
};

// CTangramCore

class ATL_NO_VTABLE CTangramCore : 
	public CComObjectRootBase,
	public IConnectionPointContainerImpl<CTangramCore>,
	public IConnectionPointImpl<CTangramCore, &__uuidof(_ITangramCoreEvents)>,
	public IDispatchImpl<ITangramCore, &IID_ITangramCore, &LIBID_Tangram,  1,  0>
{
public:
	CTangramCore();
	virtual ~CTangramCore();

	HWND								m_hMainWnd;
	HWND								m_hHostWnd;
	HWND								m_hMainFrameWnd;
	map<CString, CString>				m_strMapKey;
	map<CString,IDispatch*>				m_mapObjDic;
	map<CString, IDispatch*>			m_mapAppDispDic;
	BEGIN_COM_MAP(CTangramCore)
		COM_INTERFACE_ENTRY(ITangramCore)
		COM_INTERFACE_ENTRY(IDispatch)
		COM_INTERFACE_ENTRY(IConnectionPointContainer)
	END_COM_MAP()

	BEGIN_CONNECTION_POINT_MAP(CTangramCore)
		CONNECTION_POINT_ENTRY(__uuidof(_ITangramCoreEvents))
	END_CONNECTION_POINT_MAP()

	BEGIN_CATEGORY_MAP(CTangramCore)
		IMPLEMENTED_CATEGORY(CATID_SafeForInitializing)
		IMPLEMENTED_CATEGORY(CATID_SafeForScripting)
	END_CATEGORY_MAP()

	STDMETHOD(get_ExternalInfo)(VARIANT* pVal);
	STDMETHOD(put_ExternalInfo)(VARIANT newVal);
	STDMETHOD(get_RootNodes)(ITangramNodeCollection** pNodeColletion);
	STDMETHOD(get_CurrentActiveNode)(ITangramNode** pVal);
	STDMETHOD(get_CreatingNode)(ITangramNode** pVal);
	STDMETHOD(put_CLRProperty)(BSTR newVal);
	STDMETHOD(get_Application)(IDispatch** pVal);
	STDMETHOD(get_TangramExtender)(BSTR bstrKey, IDispatch** pVal);
	STDMETHOD(put_TangramExtender)(BSTR bstrKey, IDispatch* newVal);
	STDMETHOD(get_TangramVal)(BSTR bstrKey, VARIANT* pVal);
	STDMETHOD(put_TangramVal)(BSTR bstrKey, VARIANT newVal);
	STDMETHOD(get_RemoteHelperHWND)(LONGLONG* pVal) { *pVal = (LONGLONG)m_hHostWnd; return S_OK; };
	STDMETHOD(put_RemoteHelperHWND)(LONGLONG newVal) { m_hHostWnd = (HWND)newVal; return S_OK; };
	STDMETHOD(get_DocTemplateXml)(BSTR bstrTemplateXml, BSTR* pVal) { return S_OK; };
	STDMETHOD(put_DocTemplateXml)(BSTR bstrTemplateXml, BSTR newVal) { return S_OK; };
	STDMETHOD(get_CreatingForm)(ITangramVBAForm** pVal);

	STDMETHOD(CreateCLRObj)(BSTR bstrObjID, IDispatch** ppDisp);
	STDMETHOD(GetTangramFrame)(LONGLONG hHostWnd, ITangramFrame** ppFrame);
	STDMETHOD(SetHostFocus)(void);
	STDMETHOD(Encode)(BSTR bstrSRC, VARIANT_BOOL bEncode, BSTR* bstrRet);
	STDMETHOD(NewGUID)(BSTR* retVal);
	STDMETHOD(ConnectCLRProxy)(LONGLONG pTangramCLRProxy);
	STDMETHOD(ActiveCLRMethod)(BSTR bstrObjID, BSTR bstrMethod, BSTR bstrParam, BSTR bstrData);
	STDMETHOD(GetCLRControl)(IDispatch* CtrlDisp, BSTR bstrNames, IDispatch** ppRetDisp);
	STDMETHOD(GetItemText)(ITangramNode* pNode, long nCtrlID, LONG nMaxLengeh, BSTR* bstrRet);
	STDMETHOD(SetItemText)(ITangramNode* pNode, long nCtrlID, BSTR bstrRet);
	STDMETHOD(CreateTangram)(LONGLONG hWnd, ITangram** ppTangram);
	STDMETHOD(TangramGetObject)(IDispatch* SourceDisp, IDispatch** ResultDisp);
	STDMETHOD(put_ToolWndHandle)(LONGLONG newVal);
	STDMETHOD(ConnectApp)(BSTR bstrAppID, ITangramCore** ResultTangramCore);
	STDMETHOD(ShowOfficeObj)(BSTR bstrAppID, BSTR bstrKey, BSTR bstrXml, IDispatch** ppRetNode);
	STDMETHOD(MessageBox)(LONGLONG hWnd, BSTR bstrContext, BSTR bstrCaption, long nStyle, int* nRet);
	STDMETHOD(DownLoadFile)(BSTR strFileURL, BSTR bstrTargetFile, BSTR bstrActionXml);
	STDMETHOD(ExtendXml)(BSTR bstrXml, BSTR bstrKey, IDispatch** ppNode);

	STDMETHOD(TangramCommand)(IDispatch* RibbonControl) { return S_OK; };
	STDMETHOD(TangramGetImage)(BSTR strValue, IPictureDisp ** ppDispImage) { return S_OK; };
	STDMETHOD(TangramGetVisible)(IDispatch* RibbonControl, VARIANT* varVisible) { return S_OK; };
	STDMETHOD(TangramOnLoad)(IDispatch* RibbonControl) { return S_OK; };
	STDMETHOD(TangramGetItemCount)(IDispatch* RibbonControl, long* nCount) { return S_OK; };
	STDMETHOD(TangramGetItemLabel)(IDispatch* RibbonControl, long nIndex, BSTR* bstrLabel) { return S_OK; };
	STDMETHOD(TangramGetItemID)(IDispatch* RibbonControl, long nIndex, BSTR* bstrID) { return S_OK; };
	STDMETHOD(AddTangramXml)(IDispatch* pDocdisp, BSTR bstrXml, BSTR bstrKey, BSTR* bstrRet, VARIANT_BOOL* bSuccess) { return S_OK; };
	STDMETHOD(GetTangramXml)(IDispatch* pDocdisp, BSTR bstrKey, BSTR* pbstrXml) { return S_OK; };
	STDMETHOD(ShowOfficeDocument)(VARIANT_BOOL bNewDoc, BSTR bstrKey, BSTR bstrXml, IDispatch** ppRetNode) { return S_OK;};

	void Lock(){}
	void Unlock(){}
	void Init();

	HRESULT ExtendEx(LONGLONG hHostMainWnd, BSTR bstrXTMLFile, LONG l, LONG t, LONG r, LONG b, LONG l2, LONG t2, LONG r2, LONG b2, ITangramNode** pDocObj);

protected:
	ULONG InternalAddRef(){ return 1; }
	ULONG InternalRelease(){ return 1; }

private:
	ITangramFrame*						m_pFrame;
	ITangram*							m_pTangram;
	CWindow								m_HelperWnd;
	CComObject<CTangramNodeCollection>* m_pRootNodes;
};
