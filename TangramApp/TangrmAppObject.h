// TangrmAppObject.h : CTangrmAppObject µÄÉùÃ÷

#pragma once
#include "resource.h"       // Ö÷·ûºÅ
#include "TangramApp_i.h"
#include "_ITangrmAppObjectEvents_CP.h"

using namespace ATL;


// CTangrmAppObject

class ATL_NO_VTABLE CTangrmAppObject :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CTangrmAppObject, &CLSID_TangrmAppObject>,
	public IConnectionPointContainerImpl<CTangrmAppObject>,
	public CProxy_ITangrmAppObjectEvents<CTangrmAppObject>,
	public IDispatchImpl<ITangrmAppObject, &IID_ITangrmAppObject, &LIBID_TangramAppLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CTangrmAppObject();

	~CTangrmAppObject();

DECLARE_NOT_AGGREGATABLE(CTangrmAppObject)

BEGIN_COM_MAP(CTangrmAppObject)
	COM_INTERFACE_ENTRY(ITangrmAppObject)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
END_COM_MAP()

BEGIN_CONNECTION_POINT_MAP(CTangrmAppObject)
	CONNECTION_POINT_ENTRY(__uuidof(_ITangrmAppObjectEvents))
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
public:
	STDMETHOD(get_TangramCore)(IDispatch** pVal);
};

TANGRAM_OBJECT_ENTRY_AUTO(__uuidof(TangrmAppObject), CTangrmAppObject)
