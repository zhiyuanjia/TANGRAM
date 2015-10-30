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

// TangramProxy.h : Declaration of the CTangramProxy

#pragma once
#include "resource.h"       
#include "TangramCLRProxy_i.h"

using namespace ATL;

// CTangramProxy
class ATL_NO_VTABLE CTangramProxy :
	public CComObjectRootBase,
	public IDispatchImpl<IUnknown, &IID_IUnknown>
{
public:
	CTangramProxy();
	~CTangramProxy();

	BEGIN_COM_MAP(CTangramProxy)
		COM_INTERFACE_ENTRY(IUnknown)
	END_COM_MAP()

protected:
	ULONG m_nRef;

	void Lock() {}
	void Unlock() {}

	ULONG InternalAddRef()
	{
		m_nRef++;
		return m_nRef;
	}

	ULONG InternalRelease() 
	{ 
		m_nRef--;
		return m_nRef;
	}
};
#define TANGRAM_OBJECT_ENTRY_AUTO(clsid, class) \
    __declspec(selectany) ATL::_ATL_OBJMAP_CACHE __objCache__##class = { NULL, 0 }; \
	const ATL::_ATL_OBJMAP_ENTRY_EX __objMap_##class = {&clsid, class::UpdateRegistry, class::_ClassFactoryCreatorClass::CreateInstance, class::CreateInstance, &__objCache__##class, class::GetObjectDescription, class::GetCategoryMap, class::ObjectMain }; \
	extern "C" __declspec(allocate("ATL$__m")) __declspec(selectany) const ATL::_ATL_OBJMAP_ENTRY_EX* const __pobjMap_##class = &__objMap_##class; \
	OBJECT_ENTRY_PRAGMA(class)
