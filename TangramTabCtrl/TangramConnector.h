// TangramConnector.h : CTangramConnector implementation file

#pragma once
#include "resource.h"       // Ö÷·ûºÅ
#include "TangramTabCtrl_i.h"
#include "Tangram.h"
using namespace ATL;

// CTangramConnector

class ATL_NO_VTABLE CTangramConnector :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CTangramConnector, &CLSID_TangramConnector>,
	public IDispatchImpl<ITangramCreator, &__uuidof(ITangramCreator)>
{
public:
	CTangramConnector()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_TANGRAMCONNECTOR)


BEGIN_COM_MAP(CTangramConnector)
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

public:
	STDMETHOD(Create)(LONGLONG hParent, ITangramNode* pNode, LONGLONG* hWnd);
};

OBJECT_ENTRY_AUTO(__uuidof(TangramConnector), CTangramConnector)
