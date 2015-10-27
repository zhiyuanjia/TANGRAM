// dllmain.cpp : Implementation of DllMain.

#include "stdafx.h"
#include "resource.h"
#include "TangramExcelTabWnd_i.h"
#include "dllmain.h"

CTangramExcelTabWndModule _AtlModule;



BEGIN_MESSAGE_MAP(CTangramExcelTabWndApp, CWinApp)
END_MESSAGE_MAP()

CTangramExcelTabWndApp theApp;

BOOL CTangramExcelTabWndApp::InitInstance()
{
	this->m_hInstance;
	return CWinApp::InitInstance();
}

int CTangramExcelTabWndApp::ExitInstance()
{
	ATLTRACE(_T("CTangramExcelTabWndAppQuit:%x\n"),this);
	return CWinApp::ExitInstance();
}
