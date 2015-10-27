// TangramHelper.h : CTangramHelper implementation file
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
#include "resource.h"       // Ö÷·ûºÅ

#include "dte.h"
#include "dte80.h"
#include "TangramVSIHelper_i.h"

class CTangramHelper;
class CHelperWnd :
	public CWindowImpl<CHelperWnd, CWindow>
{
public:
	CString m_strText;
	CTangramHelper* m_pTangramHelper;
	CHelperWnd();
	~CHelperWnd();
	BEGIN_MSG_MAP(CHelperWnd)
	END_MSG_MAP()
	virtual void OnFinalMessage(HWND hWnd);
};

// CTangramHelper
class ATL_NO_VTABLE CTangramHelper :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CTangramHelper, &CLSID_TangramHelper>,
	public IDispatchImpl<ITangramHelper, &IID_ITangramHelper, &LIBID_TangramVSIHelperLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CTangramHelper();
	int m_nIndex;
	CHelperWnd* m_pHelperWnd;
	OutputWindowPane* m_pOutputWindowPane;
DECLARE_REGISTRY_RESOURCEID(IDR_TANGRAMHELPER)

DECLARE_NOT_AGGREGATABLE(CTangramHelper)

BEGIN_COM_MAP(CTangramHelper)
	COM_INTERFACE_ENTRY(ITangramHelper)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
		DWORD dw = 0;
		if (m_pOutputWindowPane)
		{
			dw = m_pOutputWindowPane->Release();
		}
	}

public:
	STDMETHOD(get_OutputPane)(IDispatch** pVal);
	STDMETHOD(PutTextToOutputPane)(BSTR bstrMsg);
	STDMETHOD(ClearOutputPane)();
	STDMETHOD(ShowCLRForm)(BSTR bstrXml);
	STDMETHOD(ShowCLRMDIForm)(BSTR bstrXml);
	STDMETHOD(ShowXMLWithWindow)(BSTR bstrID, BSTR bstrKey, BSTR bstrXml);
};

OBJECT_ENTRY_AUTO(__uuidof(TangramHelper), CTangramHelper)
