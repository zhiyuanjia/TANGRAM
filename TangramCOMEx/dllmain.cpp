// dllmain.cpp: DllMain 的实现。

#include "stdafx.h"
#include "resource.h"
#include "dllmain.h"
#include "TangramCOMEx.c"

CTangramApp theApp;

// DLL 入口点
extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	hInstance;
	return theApp.DllMain(dwReason, lpReserved);
}
