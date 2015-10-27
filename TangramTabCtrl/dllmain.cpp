// dllmain.cpp : DllMain 的实现。

#include "stdafx.h"
#include "resource.h"
#include "TangramTabCtrl_i.c"
#include "dllmain.h"

CTangramTabCtrlModule _AtlModule;

class CTangramViewApp : public CWinAppEx
{
public:

// 重写
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CTangramViewApp, CWinAppEx)
END_MESSAGE_MAP()

CTangramViewApp theApp;

BOOL CTangramViewApp::InitInstance()
{
	return CWinApp::InitInstance();
}

int CTangramViewApp::ExitInstance()
{
	CMFCVisualManager * pVisualManager = CMFCVisualManager::GetInstance();
	if (pVisualManager != NULL)
	{
		delete pVisualManager;
	}
	return CWinApp::ExitInstance();
}
