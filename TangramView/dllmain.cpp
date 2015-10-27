// dllmain.cpp : DllMain 的实现。

#include "stdafx.h"
#include "resource.h"
#include "TangramView_i.h"
#include "dllmain.h"

CTangramViewModule _AtlModule;

class CTangramViewApp : public CWinApp
{
public:

// 重写
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CTangramViewApp, CWinApp)
END_MESSAGE_MAP()

CTangramViewApp theApp;

BOOL CTangramViewApp::InitInstance()
{
	CComPtr<ITangramCore> pCore;
	pCore.CoCreateInstance(CComBSTR(L"tangram.tangram.1"));
	_AtlModule.m_pTangramCore = pCore.Detach();
	return CWinApp::InitInstance();
}

int CTangramViewApp::ExitInstance()
{
	return CWinApp::ExitInstance();
}
