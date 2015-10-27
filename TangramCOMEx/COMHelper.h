// COMHelper.h : CCOMHelper implementation file

#pragma once
#include "resource.h"       // ������

#include "TangramCOMEx.h"
#include "_ICOMHelperEvents_CP.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE ƽ̨(�粻�ṩ��ȫ DCOM ֧�ֵ� Windows Mobile ƽ̨)���޷���ȷ֧�ֵ��߳� COM ���󡣶��� _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA ��ǿ�� ATL ֧�ִ������߳� COM ����ʵ�ֲ�����ʹ���䵥�߳� COM ����ʵ�֡�rgs �ļ��е��߳�ģ���ѱ�����Ϊ��Free����ԭ���Ǹ�ģ���Ƿ� DCOM Windows CE ƽ̨֧�ֵ�Ψһ�߳�ģ�͡�"
#endif

using namespace ATL;


// CCOMHelper

class ATL_NO_VTABLE CCOMHelper :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CCOMHelper, &CLSID_COMHelper>,
	public IConnectionPointContainerImpl<CCOMHelper>,
	public CProxy_ICOMHelperEvents<CCOMHelper>,
	public IDispatchImpl<ICOMHelper, &IID_ICOMHelper, &LIBID_TangramCOMExLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCOMHelper()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_COMHELPER)


BEGIN_COM_MAP(CCOMHelper)
	COM_INTERFACE_ENTRY(ICOMHelper)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
END_COM_MAP()

BEGIN_CONNECTION_POINT_MAP(CCOMHelper)
	CONNECTION_POINT_ENTRY(__uuidof(_ICOMHelperEvents))
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
	STDMETHOD(HookCOM)();
	STDMETHOD(UnHookCOM)();
	STDMETHOD(HookCreateInstance)(VARIANT_BOOL bHook);
	STDMETHOD(HookCoRegisterClassObject)(VARIANT_BOOL bHook);
	STDMETHOD(put_RemoteObjProxy)(BSTR newVal);
	STDMETHOD(put_RemoteObjHelperWnd)(LONGLONG newVal);
};

OBJECT_ENTRY_AUTO(__uuidof(COMHelper), CCOMHelper)
