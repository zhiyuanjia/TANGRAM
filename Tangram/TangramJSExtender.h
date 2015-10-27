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

#pragma once

class CTangramJSObject : public IDispatch
{
public:
	CTangramJSObject(CTangramJSExtender* pTangramJSExtender, IDispatch *pDisp, const GUID iid, CString strPrefix);
	~CTangramJSObject();

	IDispatch* m_pDisp;

	ULONG WINAPI AddRef() { return 1; }
	ULONG WINAPI Release() { return 1; }

	HRESULT WINAPI QueryInterface(REFIID riid, void **ppvObject);

	// IDispatch implementation
	STDMETHODIMP GetIDsOfNames(REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId)
	{
		return E_NOTIMPL;
	}
	STDMETHODIMP GetTypeInfoCount(UINT *pctinfo)
	{
		return E_NOTIMPL;
	}
	STDMETHODIMP GetTypeInfo(UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo)
	{
		return E_NOTIMPL;
	}
	STDMETHODIMP Invoke(DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);

private:
	DWORD						m_dwCookie;
	GUID						m_EventIID;
	CComBSTR					m_bstrPrefix;
	CComPtr<ITypeInfo>			m_pTypeInfo;
	CTangramEvent*				m_pEventObj;
	CTangramJSExtender*			m_pTangramJSExtender;
	CSimpleMap<DISPID, BSTR>	m_mapDispId;

	HRESULT SetEventNames();
};

class CTangramJSExtender
{
public:
	CTangramJSExtender(void);
	~CTangramJSExtender(void);

	IDispatchEx* m_pJSEngine;
	map<CString, CTangramJSObject*> m_mapTangramJSObject;

	BOOL ConnectJSEngine(IDispatchEx* _pDispEx);
	HRESULT AddObject(CString strName, IDispatch* _pDisp);
	HRESULT SinkObject(CString strPrefix, IDispatch *pUnk, LCID lcid = 1033);

protected:
	HRESULT UnSinkObject(IUnknown *pUnk, const GUID *piid);

private:
	map<CString, IDispatch*> m_mapJSObject;
};
