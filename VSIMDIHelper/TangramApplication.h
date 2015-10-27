// TangramApplication.h : CTangramApplication implementation file

#pragma once
#include "resource.h"       // Ö÷·ûºÅ



#include "VSIMDIHelper_i.h"
#include "_ITangramApplicationEvents_CP.h"

using namespace ATL;


// CTangramApplication

class ATL_NO_VTABLE CTangramApplication :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CTangramApplication, &CLSID_TangramApplication>,
	public IConnectionPointContainerImpl<CTangramApplication>,
	public CProxy_ITangramApplicationEvents<CTangramApplication>,
	public IDispatchImpl<ITangramApplication, &IID_ITangramApplication, &LIBID_VSIMDIHelperLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
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

protected:
	ULONG InternalAddRef() { return 1; }
	ULONG InternalRelease() { return 1; };
public:
	static HRESULT WINAPI UpdateRegistry(BOOL bRegister);
	static HRESULT WINAPI CreateInstance(void* pv, REFIID riid, LPVOID* ppv);

	STDMETHOD(get_TangramCore)(IDispatch** pVal);
};

TANGRAM_OBJECT_ENTRY_AUTO(CLSID_TangramApplication, CTangramApplication)
