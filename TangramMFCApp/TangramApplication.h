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
// TangramApplication.h : CTangramApplication implementation file

#pragma once
#include "resource.h"       // Ö÷·ûºÅ

#include "TangramMFCApp_i.h"
#include "_ITangramApplicationEvents_CP.h"

// CTangramApplication

class ATL_NO_VTABLE CTangramApplication :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CTangramApplication, &CLSID_TangramApplication>,
	public IConnectionPointContainerImpl<CTangramApplication>,
	public CProxy_ITangramApplicationEvents<CTangramApplication>,
	public IDispatchImpl<ITangramApplication, &IID_ITangramApplication, &LIBID_TangramMFCAppLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CTangramApplication();
	~CTangramApplication();

	ITangramFrame* m_pFrame;
	DECLARE_NOT_AGGREGATABLE(CTangramApplication)

	BEGIN_COM_MAP(CTangramApplication)
		COM_INTERFACE_ENTRY(ITangramApplication)
		COM_INTERFACE_ENTRY(IDispatch)
		COM_INTERFACE_ENTRY(IConnectionPointContainer)
	END_COM_MAP()

	BEGIN_CONNECTION_POINT_MAP(CTangramApplication)
		CONNECTION_POINT_ENTRY(__uuidof(_ITangramApplicationEvents))
	END_CONNECTION_POINT_MAP()


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:
	static HRESULT WINAPI UpdateRegistry(BOOL bRegister);
	static HRESULT WINAPI CreateInstance(void* pv, REFIID riid, LPVOID* ppv);

protected:
	ULONG InternalAddRef() { return 1; }
	ULONG InternalRelease();
public:
	STDMETHOD(ExtendXml)(BSTR bstrXml, BSTR bstrKey, IDispatch** ppNode);
	STDMETHOD(get_HWND)(ULONGLONG* pVal);

	// ITangramVSHelper Methods
public:
	STDMETHOD(get_TangramCore)(IDispatch** pVal);
};

TANGRAM_OBJECT_ENTRY_AUTO(CLSID_TangramApplication, CTangramApplication)
