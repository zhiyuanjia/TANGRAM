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

// TangramProxy.cpp : CTangramProxy µÄÊµÏÖ

#include "stdafx.h"
#include "dllmain.h"
#include "TangramProxy.h"
using namespace TangramCLR;

// CTangramProxy

class ATL_NO_VTABLE CTangramProxyHelper : 
	public CComObjectRootBase,
	public CComCoClass<CTangramProxyHelper>
{
public:
	static HRESULT WINAPI UpdateRegistry(BOOL bRegister)
	{
		return _AtlModule.UpdateRegistryFromResource(IDR_TANGRAMPROXY, bRegister);
	}

	static HRESULT WINAPI CreateInstance(void* pv, REFIID riid, LPVOID* ppv)
	{
		if (_AtlModule.m_pTangramProxy == NULL)
		{
			TangramCLR::TangramCore::InitTangram(L"");
			_AtlModule.m_pTangramProxy = new CComObject<CTangramProxy>;
		}
		*ppv = _AtlModule.m_pTangramProxy;
		return S_OK;
	}
};

TANGRAM_OBJECT_ENTRY_AUTO(CLSID_TangramProxy, CTangramProxyHelper)

CTangramProxy::CTangramProxy()
{
	m_nRef = 1;
	ATLTRACE(_T("*************Create Proxy:%x********************\n"), this);
}

CTangramProxy::~CTangramProxy()
{
	_AtlModule.m_pTangramProxy = NULL;
	ATLTRACE(_T("*************Delete Proxy:%x********************\n"), this);
}
