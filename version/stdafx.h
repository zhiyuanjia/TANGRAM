// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

//#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>


#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // some CString constructors will be explicit

//#include <atlbase.h>
//#include <atlstr.h>
#include <atlstr.h>
//
#include <tchar.h>
//
//using namespace ATL;

#define MARKUP_STL
//#include "TangramXmlParse.h"

#include "markup.h"
// TODO: reference additional headers your program requires here

extern "C" __declspec(dllexport) BOOL __stdcall IsAuthenticated();

CString GetProcessName();
CString GetAuthenticateData(CMarkup* pXml, LPCTSTR strKey,LPCTSTR strDef);
bool bCheck(CString strName, CString strKey, CString strLicense);


#define BUILD_VERSION	1
#define BUILD_WS2_HELP	2
#define BUILD_WS2_32	3

//#define BUILD_FILE		BUILD_WS2_HELP
#define BUILD_FILE		BUILD_VERSION

#ifdef MAKEINTRESOURCE
#undef MAKEINTRESOURCE
#endif
#define MAKEINTRESOURCE  MAKEINTRESOURCEA

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ∫Í∂®“Â
#define EXTERNC extern "C"
#define NAKED __declspec(naked)
#define EXPORT __declspec(dllexport)

#define ALCPP EXPORT NAKED
#define ALSTD EXTERNC EXPORT NAKED void __stdcall
#define ALCFAST EXTERNC EXPORT NAKED void __fastcall
#define ALCDECL EXTERNC NAKED void __cdecl


FARPROC WINAPI GetAddress(PCSTR pszProcName);

//using namespace AheadLib;