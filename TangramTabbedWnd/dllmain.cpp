// dllmain.cpp : Implementation of DllMain.

#include "stdafx.h"
#include "resource.h"
#include "TangramTabbedWnd_i.h"
#include "dllmain.h"

CTangramTabbedWndModule _AtlModule;

class CTangramTabbedWndApp : public CWinApp
{
public:

// Overrides
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CTangramTabbedWndApp, CWinApp)
END_MESSAGE_MAP()

CTangramTabbedWndApp theApp;

BOOL CTangramTabbedWndApp::InitInstance()
{
	return CWinApp::InitInstance();
}

int CTangramTabbedWndApp::ExitInstance()
{
	return CWinApp::ExitInstance();
}
