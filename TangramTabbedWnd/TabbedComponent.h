// TabbedComponent.h : Declaration of the CTabbedComponent

#pragma once
#include "resource.h"       // main symbols

#include "TangramTabbedWnd_i.h"
#include "Tangram.h"

// CTabbedComponent

class ATL_NO_VTABLE CTabbedComponent :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CTabbedComponent, &CLSID_TabbedComponent>,	
	public IDispatchImpl<ITangramCreator, &__uuidof(ITangramCreator)>
{
public:
	CTabbedComponent()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_TABBEDCOMPONENT)

DECLARE_NOT_AGGREGATABLE(CTabbedComponent)

BEGIN_COM_MAP(CTabbedComponent)
	COM_INTERFACE_ENTRY(ITangramCreator)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

	// ITangramCreator Methods
	STDMETHOD(Create)(LONGLONG hParentWnd, ITangramNode* pNode, LONGLONG* hWnd);

};

OBJECT_ENTRY_AUTO(__uuidof(TabbedComponent), CTabbedComponent)
