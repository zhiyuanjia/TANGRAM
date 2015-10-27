// COMHelper.cpp : CCOMHelper µÄÊµÏÖ

#include "stdafx.h"
#include "dllmain.h"
#include "COMHelper.h"
#include "TangramHook.h"


// CCOMHelper

STDMETHODIMP CCOMHelper::HookCOM()
{
	HookApi();

	return S_OK;
}


STDMETHODIMP CCOMHelper::UnHookCOM()
{
	UnHookApi();

	return S_OK;
}


STDMETHODIMP CCOMHelper::HookCreateInstance(VARIANT_BOOL bHook)
{
	::HookCoCreateInstance(bHook);

	return S_OK;
}


STDMETHODIMP CCOMHelper::HookCoRegisterClassObject(VARIANT_BOOL bHook)
{
	::HookCoRegisterClassObject(bHook);

	return S_OK;
}

STDMETHODIMP CCOMHelper::put_RemoteObjProxy(BSTR newVal)
{
	if (newVal != L"")
		::CLSIDFromProgID(newVal, &theApp.m_RemoteObjClsid);
	return S_OK;
}

STDMETHODIMP CCOMHelper::put_RemoteObjHelperWnd(LONGLONG newVal)
{
	HWND hWnd = (HWND)newVal;
	if (::IsWindow(hWnd) && ::IsWindow(theApp.m_RemoteObjHelperWnd.m_hWnd) == false)
	{
		theApp.m_RemoteObjHelperWnd.Attach(hWnd);
		theApp.m_RemoteObjHelperWnd.SetWindowText(_T(""));
	}
	return S_OK;
}
