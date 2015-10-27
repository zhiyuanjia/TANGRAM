/********************************************************************************
*					Tangram Library - version 8.0								*
*********************************************************************************
* Copyright (C) 2002-2015 by Tangram Team.   All Rights Reserved.				*
*
* THIS SOURCE FILE IS THE PROPERTY OF TANGRAM TEAM AND IS NOT TO
* BE RE-DISTRIBUTED BY ANY MEANS WHATSOEVER WITHOUT THE EXPRESSED
* WRITTEN CONSENT OF TANGRAM TEAM.
*
* THIS SOURCE CODE CAN ONLY BE USED UNDER THE TERMS AND CONDITIONS
* OUTLINED IN THE GPL LICENSE AGREEMENT.TANGRAM TEAM
* GRANTS TO YOU (ONE SOFTWARE DEVELOPER) THE LIMITED RIGHT TO USE
* THIS SOFTWARE ON A SINGLE COMPUTER.
*
* CONTACT INFORMATION:
* mailto:sunhui@tangramfx.com
* http://www.tangramFX.com
*
*
********************************************************************************/

// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently,
// but are changed infrequently

#pragma once

#ifndef STRICT
#define STRICT
#endif

// Modify the following defines if you have to target a platform prior to the ones specified below.
// Refer to MSDN for the latest info on corresponding values for different platforms.
#ifndef WINVER				// Allow use of features specific to Windows XP or later.
#define WINVER 0x0501		// Change this to the appropriate value to target other versions of Windows.
#endif

#ifndef _WIN32_WINNT		// Allow use of features specific to Windows XP or later.                   
#define _WIN32_WINNT 0x0501	// Change this to the appropriate value to target other versions of Windows.
#endif						

#ifndef _WIN32_WINDOWS		// Allow use of features specific to Windows 98 or later.
#define _WIN32_WINDOWS 0x0410 // Change this to the appropriate value to target Windows Me or later.
#endif

#ifndef _WIN32_IE			// Allow use of features specific to IE 6.0 or later.
#define _WIN32_IE 0x0601	// Change this to the appropriate value to target other versions of IE.
#endif

#define _ATL_APARTMENT_THREADED
#define _ATL_NO_AUTOMATIC_NAMESPACE

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// some CString constructors will be explicit
#define ISOLATION_AWARE_ENABLED 1
#define COMMERCIAL
#define MAX_BUF_LEN 65535
#define _AFX_NO_MFC_CONTROLS_IN_DIALOGS
#define TMSCHEMA_H // this excludes the deprecated tmschema.h without dependency on _WIN32_WINNT macro
#include <afxwin.h>         
#include <Uxtheme.h>
#include <vssym32.h>
#include <afxdisp.h>
#include <afxpriv.h>
#include <afxcview.h>

#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT

#include "resource.h"
#include <atlbase.h>
#include <atlimage.h>
#include "atlenc.h"
#include <stdlib.h>
#include <crtdbg.h>
#include <map>
#include "ObjSafe.h"
#ifdef _UNICODE
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_IA64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='ia64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif

//DEFINE_GUID(CATID_AppContainerCompatible, 0x59fb2056,0xd625,0x48d0,0xa9,0x44,0x1a,0x85,0xb5,0xab,0x26,0x40);
#include <msxml.h>

using namespace ATL;
using namespace std;


#include "def.h"
#include "inc.h"
#include <atlwin.h>
#include "browser.h"
#include "CommonFunction.h"
#include "TangramCoreEvents.h"
#include "msaddndr.h"

#pragma warning (disable : 4786)
#pragma warning (disable : 4312)
#pragma warning (disable : 4311)
#pragma warning (disable : 4244)
#pragma warning( disable : 4278 )
#pragma warning( disable : 4146 )
#pragma warning( disable : 4526 )

#define IfFailGo(x) { hr=(x); if (FAILED(hr)) goto Error; }
#define IfFailGoCheck(x, p) { hr=(x); if (FAILED(hr)) goto Error; if(!p) {hr = E_FAIL; goto Error; } }

#pragma comment (lib, "wininet.lib")
#pragma comment (lib, "urlmon.lib")

class CTangram;
class CTangramApp;
class CTangramNode;
class CTangramBKWnd;
class CTangramEvent;
class CTangramFrame;
class CTangramJSObject;
class CTangramJSExtender;
class CTangramNodeCollection;

typedef vector<CTangramNode*> CTangramNodeVector;

#include "Tangram.h"
#include "TangramApp.h"
#include "TangramView.h"
#include "TangramCore.h"
#include "TangramFrame.h"
#include "TangramTabbedView.h"
#include "TangramSplitterWnd.h"

#include "TangramJSExtender.h"

#include "TangramNode.h"
#include "TangramObject.h"
#include "vbe6ext.h"
using namespace Office;

