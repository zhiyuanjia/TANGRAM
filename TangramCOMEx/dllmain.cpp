// dllmain.cpp: DllMain ��ʵ�֡�

#include "stdafx.h"
#include "resource.h"
#include "dllmain.h"
#include "TangramCOMEx.c"

CTangramApp theApp;

// DLL ��ڵ�
extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	hInstance;
	return theApp.DllMain(dwReason, lpReserved);
}
