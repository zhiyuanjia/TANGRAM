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

// TangramApp.cpp : Implementation of DLL Exports.

#include "stdafx.h"
#include "tangramobject.h"
#include "TangramUtilities\TangramDownLoad.h"

#include "VisualStudioPlus\TangramVSAddin.h"
#include "EclipsePlus\TangramEclipseAddin.h"
//#include "VisualBasicPlus\VB6Plus\TangramVB6Addin.h"

#include "OfficePlus\WordPlus\TangramWordAddin.h"
#include "OfficePlus\LyncPlus\TangramLyncAddin.h"
#include "OfficePlus\ExcelPlus\TangramExcelAddin.h"
#include "OfficePlus\ExcelPlus\ExcelPlusWnd.h"
#include "OfficePlus\VisioPlus\TangramVisioAddin.h"
#include "OfficePlus\AccessPlus\TangramAccessAddin.h"
#include "OfficePlus\OutLookPlus\TangramOutLookAddin.h"
#include "OfficePlus\ProjectPlus\TangramProjectAddin.h"
#include "OfficePlus\OneNotePlus\TangramOneNoteAddin.h"
#include "OfficePlus\InfoPathPlus\TangramInfoPathAddin.h"
#include "OfficePlus\PowerPointPlus\TangramPowerPointAddin.h"

using namespace TangramOfficePlus;

// Description  : the unique App object
CTangramApp theApp;

CTangramApp::CTangramApp()
{
	m_nAppID						= -1;
	m_strCLRScript					= _T("");
	m_strMainClientWndID			= _T("MDIClient");
	m_pAppDisp						= NULL;
	m_pTangramFrame					= NULL;
	m_pTangramNode					= NULL;
	m_pClrHost						= NULL;
	m_pTangramCore					= NULL;
	memset(m_szBuffer, 0, sizeof(m_szBuffer));

#ifdef _DEBUG
	m_nTangramObj					= 0;
#endif
	m_varApplication.vt				= VT_EMPTY;
	m_strExeName = _T("");
	m_strSWTClassName = _T("");
	m_strToolKey = _T("");
	m_strCurrentKey = _T("");
	m_strCurrentRootName = _T("");
	m_strTangramCLRPath = _T("");
	m_pHostCore = NULL;
	m_pTangram = NULL;
	m_pTangramEvent = NULL; 
	m_pTangramMDIClientBKWnd = NULL;
	m_pTangramCLRProxy = NULL;
	m_hCBTHook = NULL;
	m_hActiveWnd = NULL;
	m_bWinFormActived = FALSE;
	m_hExcelEdit = NULL;
	m_hExcelEdit2 = NULL;
	m_bCLRStart = FALSE;
	m_b32Process = FALSE;
	m_bEnableProcessFormTabKey = false;
	m_pTangramAddinApp = NULL;
}

CTangramApp::~CTangramApp()
{ 
	DWORD dw = 0;
	if (m_pTangramEventTypeInfo)
	{
		ITypeInfo* pDisp = m_pTangramEventTypeInfo.Detach();
		dw = pDisp->Release();
	}

#ifdef _DEBUG
	TRACE(_T("TangramObj Count: %d\n"),m_nTangramObj);
#endif

	delete m_pHostCore;
	
	m_pTangramCore = NULL;

	if (m_pClrHost)
	{
		if (m_nAppID == -1)
		{
			if (m_bCLRStart == false)
			{
				TRACE(_T("------------------Begin Stop CLR------------------------\n"));
				TRACE(_T("------------------Stop CLR Successed!------------------------\n"));
				HRESULT hr;
				hr = m_pClrHost->Stop();
				ASSERT(hr == S_OK);
				dw = m_pClrHost->Release();
				ASSERT(dw==0);
				TRACE(_T("------------------ClrHost Release Successed!------------------------\n"));
				TRACE(_T("------------------End Stop CLR------------------------\n"));
			}
		}
	}
}

BOOL CTangramApp::IsUserAdministrator()
{
	BOOL bRet = FALSE;
	PSID psidRidGroup;
	SID_IDENTIFIER_AUTHORITY siaNtAuthority = SECURITY_NT_AUTHORITY;

	bRet = AllocateAndInitializeSid(&siaNtAuthority, 2, SECURITY_BUILTIN_DOMAIN_RID, DOMAIN_ALIAS_RID_ADMINS, 0, 0, 0, 0, 0, 0, &psidRidGroup);
	if (bRet)
	{
		if (!CheckTokenMembership(NULL, psidRidGroup, &bRet))
			bRet = FALSE;
		FreeSid(psidRidGroup);
	}

	return (BOOL)bRet;
}

bool CTangramApp::CheckUrl(CString&   url)
{
	char*   res;
	char   dwCode[20];
	DWORD   dwIndex, dwCodeLen;
	HINTERNET   hSession, hFile;

	url.MakeLower();

	hSession = InternetOpen(_T("Tangram"), INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0);
	if (hSession)
	{
		hFile = InternetOpenUrl(hSession, url, NULL, 0, INTERNET_FLAG_RELOAD, 0);
		if (hFile == NULL)
		{
			InternetCloseHandle(hSession);
			return false;
		}
		dwIndex = 0;
		dwCodeLen = 10;
		HttpQueryInfo(hFile, HTTP_QUERY_STATUS_CODE, dwCode, &dwCodeLen, &dwIndex);
		res = dwCode;
		if (strcmp(res, "200 ") || strcmp(res, "302 "))
		{
			//200,302未重定位标志    
			if (hFile)
				InternetCloseHandle(hFile);
			InternetCloseHandle(hSession);
			return   true;
		}
	}
	return   false;
}

DWORD CTangramApp::ExecCmd(const CString cmd, const BOOL setCurrentDirectory)
{
	BOOL  bReturnVal = false;
	STARTUPINFO  si;
	DWORD  dwExitCode = ERROR_NOT_SUPPORTED;
	SECURITY_ATTRIBUTES saProcess, saThread;
	PROCESS_INFORMATION process_info;

	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);

	saProcess.nLength = sizeof(saProcess);
	saProcess.lpSecurityDescriptor = NULL;
	saProcess.bInheritHandle = TRUE;

	saThread.nLength = sizeof(saThread);
	saThread.lpSecurityDescriptor = NULL;
	saThread.bInheritHandle = FALSE;

	CString currentDirectory = _T("");

	if (setCurrentDirectory == TRUE)
	{
		//currentDirectory = GetSetupPath();
	}

	bReturnVal = CreateProcess(NULL,
		(LPTSTR)(LPCTSTR)cmd,
		&saProcess,
		&saThread,
		FALSE,
		DETACHED_PROCESS,
		NULL,
		currentDirectory,
		&si,
		&process_info);

	if (bReturnVal)
	{
		CloseHandle(process_info.hThread);
		WaitForSingleObject(process_info.hProcess, INFINITE);
		GetExitCodeProcess(process_info.hProcess, &dwExitCode);
		CloseHandle(process_info.hProcess);
	}
	//else
	//{
	//	DWORD dw =  GetLastError();
	//	dwExitCode = dw;
	//}

	return dwExitCode;
}

void CTangramApp::AttachNode(void* pNodeEvents)
{
	CTangramNodeEvents*	m_pCLREventConnector = (CTangramNodeEvents*)pNodeEvents;
	CTangramNode* pNode = (CTangramNode*)m_pCLREventConnector->m_pTangramNode;
	pNode->m_pCLREventConnector = m_pCLREventConnector;
};

void CTangramApp::OnEvent(ITangramEvent* pEvent, IDispatch* pCtrlDisp, IDispatch* pArgDisp)
{
	CTangramEvent* pTangramEvent = (CTangramEvent*)pEvent;
	if (pTangramEvent)
	{
		IDispatch * pConnection = static_cast<IDispatch *>(pTangramEvent->m_vec.GetAt(0));

		if (pConnection)
		{
			CComVariant avarParams[2];
			avarParams[1] = pCtrlDisp;
			avarParams[1].vt = VT_DISPATCH;
			avarParams[0] = pArgDisp;
			avarParams[0].vt = VT_DISPATCH;
			CComVariant varResult;

			DISPPARAMS params = { avarParams, NULL, 2, 0 };
			pConnection->Invoke(1, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, &varResult, NULL, NULL);
		}
	}
};

BOOL CTangramApp::LoadImageFromResource(ATL::CImage *pImage, HMODULE hMod, UINT nResID, LPCTSTR lpTyp)
{
	if (pImage == NULL)
		return false;

	pImage->Destroy();

	// 查找资源
	HRSRC hRsrc = ::FindResource(hMod, MAKEINTRESOURCE(nResID), lpTyp);
	if (hRsrc == NULL)
		return false;
	HGLOBAL hImgData = ::LoadResource(hMod, hRsrc);
	if (hImgData == NULL)
	{
		::FreeResource(hImgData);
		return false;
	}

	// 锁定内存中的指定资源
	LPVOID lpVoid = ::LockResource(hImgData);

	LPSTREAM pStream = NULL;
	DWORD dwSize = ::SizeofResource(hMod, hRsrc);
	HGLOBAL hNew = ::GlobalAlloc(GHND, dwSize);
	LPBYTE lpByte = (LPBYTE)::GlobalLock(hNew);
	::memcpy(lpByte, lpVoid, dwSize);

	// 解除内存中的指定资源
	::GlobalUnlock(hNew);
	// 从指定内存创建流对象
	HRESULT ht = ::CreateStreamOnHGlobal(hNew, TRUE, &pStream);
	if (ht != S_OK)
	{
		GlobalFree(hNew);
	}
	else
	{
		// 加载图片
		pImage->Load(pStream);

		GlobalFree(hNew);
	}
	// 释放资源
	::FreeResource(hImgData);
	return true;
}

TangramThreadInfo* CTangramApp::GetThreadInfo(DWORD ThreadID)
{
	TangramThreadInfo* pInfo = NULL;

	DWORD nThreadID = ThreadID;
	if(nThreadID==0)
		nThreadID=GetCurrentThreadId();
	map<DWORD,TangramThreadInfo*>::iterator it = m_mapThreadInfo.find(nThreadID);
	if (it != m_mapThreadInfo.end())
	{
		pInfo = it->second;
	}
	else
	{
		pInfo = new TangramThreadInfo();
		pInfo -> m_hGetMessageHook = NULL;
		m_mapThreadInfo[nThreadID] = pInfo;
	}
	return pInfo;
}

int Base64Encode(PBYTE pSrc, LPSTR pDst, int nSrcLen, int nMaxLineLen)
{
	const char EnBase64Tab[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
	unsigned char c1, c2, c3;
	int nDstLen = 0;

	int nLineLen = 0;
	int nDiv = nSrcLen / 3;
	int nMod = nSrcLen % 3;

	int i; 

	for (i = 0; i < nDiv; i ++)
	{
		c1 = *pSrc++;
		c2 = *pSrc++;
		c3 = *pSrc++;

		*pDst++ = EnBase64Tab[c1 >> 2];
		*pDst++ = EnBase64Tab[((c1 << 4) | (c2 >> 4)) & 0x3f];
		*pDst++ = EnBase64Tab[((c2 << 2) | (c3 >> 6)) & 0x3f];
		*pDst++ = EnBase64Tab[c3 & 0x3f];
		nLineLen += 4;
		nDstLen += 4;

		if (nLineLen >= nMaxLineLen - 4)
		{
			*pDst++ = '\r';
			*pDst++ = '\n';   
			nLineLen = 0;
			nDstLen += 2;
		}
	}

	if (nMod == 1)
	{
		c1 = *pSrc++;
		*pDst++ = EnBase64Tab[(c1 & 0xfc) >> 2];
		*pDst++ = EnBase64Tab[((c1 & 0x03) << 4)];
		*pDst++ = '=';
		*pDst++ = '=';
		nLineLen += 4;
		nDstLen += 4;
	}
	else if (nMod == 2)
	{
		c1 = *pSrc++;
		c2 = *pSrc++;
		*pDst++ = EnBase64Tab[(c1 & 0xfc) >> 2];
		*pDst++ = EnBase64Tab[((c1 & 0x03) << 4) | ((c2 & 0xf0) >> 4)];
		*pDst++ = EnBase64Tab[((c2 & 0x0f) << 2)];
		*pDst++ = '=';
		nDstLen += 4;
	}

	*pDst = '\0';
	return nDstLen;
}

BOOL CTangramApp::InitInstance()
{	
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	TCHAR szFile[MAX_PATH] = {0};
	::GetModuleFileName(NULL,szFile,MAX_PATH);
	TCHAR szDriver[MAX_PATH] = {0};
	TCHAR szDir[MAX_PATH] = {0};
	TCHAR szExt[MAX_PATH] = {0};
	TCHAR szFile2[MAX_PATH] = {0};

	_tsplitpath_s(szFile,szDriver,szDir,szFile2,szExt);
	m_strAppPath = szDriver;
	m_strAppPath += szDir; 

	CString path(szFile);
	int nPos = path.ReverseFind('\\');
	CString strName = path.Mid(nPos + 1);
	nPos = strName.Find(_T("."));
	m_strExeName = strName.Left(nPos);
	m_strExeName.MakeLower();

	theApp.m_mapValInfo[_T("AppPath")] = CComVariant(m_strAppPath);

	SHGetFolderPath(NULL, CSIDL_WINDOWS, NULL, 0, szFile);
	m_strTangramCLRPath = CString(szFile) + _T("\\Microsoft.NET\\assembly\\");

	if (Is64bitSystem())
	{
		if (IsWow64bit())
		{
			m_b32Process = true;
		}
	}
	else
	{
		m_b32Process = true;
	}
	if (m_b32Process)
	{
		m_strTangramCLRPath += _T("GAC_32\\TangramCLR\\v4.0_1.0.1992.1963__1bcc94f26a4807a7\\TangramCLR.Dll");
	}
	else
	{
		m_strTangramCLRPath += _T("GAC_64\\TangramCLR\\v4.0_1.0.1992.1963__1bcc94f26a4807a7\\TangramCLR.Dll");
	}
	if (!::PathFileExists(m_strTangramCLRPath))
	{
		m_strTangramCLRPath = _T("TangramCLR.dll");
		if (::PathFileExists(theApp.m_strAppPath + m_strTangramCLRPath) == FALSE)
		{
			CString strPath = theApp.m_strProgramFilePath;
			strPath += _T("\\tangram\\tangramclr.dll");
			if (::PathFileExists(strPath))
				m_strTangramCLRPath = strPath;
			else
				m_strTangramCLRPath = _T("");
		}
		else
			m_strTangramCLRPath = theApp.m_strAppPath + m_strTangramCLRPath;
	}

	HMODULE hModule = ::GetModuleHandle(_T("TangramPackage.dll"));
	if (hModule)
	{
		GetModuleFileName(hModule, szFile, MAX_PATH * sizeof(TCHAR));
		m_strModulePath = CString(szFile);
		nPos = m_strModulePath.ReverseFind('\\');
		m_strModulePath = m_strModulePath.Left(nPos + 1);
	}

	HRESULT hr = SHGetFolderPath(NULL, CSIDL_APPDATA, NULL, 0, szFile);
	m_strAppDataPath = CString(szFile);
	m_strAppDataPath += _T("\\TangramData\\");

	hr = SHGetFolderPath(NULL, CSIDL_PROGRAM_FILES, NULL, 0, szFile);
	m_strProgramFilePath = CString(szFile);

	m_strAppDataPath += m_strExeName;
	m_strAppDataPath += _T("\\");

	WNDCLASS wndClass;
	wndClass.style=CS_DBLCLKS; 
	wndClass.lpfnWndProc = DefWindowProc;
	wndClass.cbClsExtra=0; 
	wndClass.cbWndExtra=0; 
	wndClass.hInstance=AfxGetInstanceHandle(); 
	wndClass.hIcon=0; 
	wndClass.hCursor=::LoadCursor(NULL,IDC_ARROW); 
	wndClass.hbrBackground=0; 
	wndClass.lpszMenuName=NULL; 
	wndClass.lpszClassName=_T("Tangram Splitter Class");

	if(!AfxRegisterClass(&wndClass))
		return FALSE;
	m_lpszSplitterClass = wndClass.lpszClassName;

	WNDCLASSEX wcex;

	wcex.cbSize = sizeof(WNDCLASSEX);

	wcex.style = CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc = DefWindowProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = AfxGetInstanceHandle();
	wcex.hIcon = NULL;
	wcex.hCursor = ::LoadCursor(NULL, IDC_ARROW);
	wcex.hbrBackground = NULL;
	wcex.lpszMenuName = NULL;
	wcex.lpszClassName = L"Tangram Window Class";
	wcex.hIconSm = NULL;

	RegisterClassEx(&wcex);

	AddClsInfo(_T("HostView"),TangramView,RUNTIME_CLASS(CTangramWnd));
	AddClsInfo(TGM_SPLITTER,Splitter,RUNTIME_CLASS(CTangramSplitterWnd));
	AddClsInfo(TGM_TABBED,TabbedWnd,RUNTIME_CLASS(CTangramTabbedView));

	hModule = ::GetModuleHandle(_T("mso.dll"));
	if (hModule)
	{
		m_mapOfficeExeID[_T("winword")] = 0;
		m_mapOfficeExeID[_T("excel")] = 1;
		m_mapOfficeExeID[_T("outlook")] = 2;
		m_mapOfficeExeID[_T("msaccess")] = 3;
		m_mapOfficeExeID[_T("onenote")] = 4;
		m_mapOfficeExeID[_T("infopath")] = 5;
		m_mapOfficeExeID[_T("project")] = 6;
		m_mapOfficeExeID[_T("powerpnt")] = 7;
		m_mapOfficeExeID[_T("visio")] = 8;
		m_mapOfficeExeID[_T("lync")] = 9;
		map<CString, int>::iterator it = m_mapOfficeExeID.find(m_strExeName);
		if (it != m_mapOfficeExeID.end())
		{
			m_nAppID = it->second;
			CreateTangramCoreForOfficeApp(m_nAppID);
			m_pTangramCore->put_TangramVal(CComBSTR(L"EnableProcessFormTabKey"), CComVariant(0));
		}
		::FreeLibrary(hModule);
	}
	else
	{
		if (m_strExeName == _T("eclipse"))
		{
			m_pTangramCore = new CComObject < TangramEclipsePlus::EclipsePlus::CTangramEclipseAddin >;
			m_hCBTHook = SetWindowsHookEx(WH_CBT, CBTProc, NULL, ::GetCurrentThreadId());
			m_bEnableProcessFormTabKey = TRUE;
		}
		else
		{
#ifndef _WIN64
			//hModule = ::GetModuleHandle(_T("msvbvm60.dll"));
			//if (hModule)
			//{
			//	//else
			//	//	m_pTangramCore = new CComObject < CTangramCore >;
			//}
			if (m_strExeName == _T("vb6"))
				m_pTangramCore = new CComObject < CTangramBaseAddin >;
			else if (m_strExeName == _T("devenv"))
			{
				CString strVer = theApp.GetFileVer();
				int nPos = strVer.Find(_T("."));
				int nVer = _wtoi(strVer.Left(nPos));
				if (nVer > 9)
					m_pTangramCore = new CComObject < TangramVisualStudioPlus::VisualStudioPlus::CTangramVSAddin >;
				else
				{
					m_pTangramCore = new CComObject < TangramVisualStudioPlus::VisualStudioPlus::CTangramVisualStudioAddin >;
				}
			}
			else if (m_strExeName == _T("msdev"))
			{
				m_pTangramCore = new CComObject < TangramVisualStudioPlus::VisualStudioPlus::CTangramDSAddin >;
			}
			else
				m_pTangramCore = new CComObject < CTangramCore >;
#else
			m_pTangramCore = new CComObject < CTangramCore >;
#endif	
		}
		theApp.m_pHostCore->Init();
	}

	return true;
}

int CTangramApp::ExitInstance()
{ 
	TRACE(_T("Begin Tangram ExitInstance :%p\n"),this);

	if (m_hCBTHook)
		UnhookWindowsHookEx(m_hCBTHook);

	map<DWORD,TangramThreadInfo*>::iterator it;
	for(it = m_mapThreadInfo.begin(); it != m_mapThreadInfo.end(); it++) 
	{
		if(it->second->m_hGetMessageHook)
		{
			UnhookWindowsHookEx(it->second->m_hGetMessageHook);
			it->second->m_hGetMessageHook = NULL;
		}
		delete it->second;
	}
	m_mapThreadInfo.erase(m_mapThreadInfo.begin(),m_mapThreadInfo.end());

	_clearObjects();
	map<HWND, CTangram*>::iterator it2 = theApp.m_mapTangrm.begin();
	while (it2 != theApp.m_mapTangrm.end())
	{
		delete it2->second;
		//theApp.m_mapTangrm.erase(it2);
		it2 = theApp.m_mapTangrm.begin();
	}

	CString strIndex = _T("");
	void* pObj;
	for(POSITION pos = m_TabWndClassInfoDictionary.GetStartPosition(); pos != NULL; )
	{
		m_TabWndClassInfoDictionary.GetNextAssoc( pos, strIndex, (void*&)pObj );
		delete pObj;
	}
	m_TabWndClassInfoDictionary.RemoveAll();
	TRACE(_T("End Tangram ExitInstance :%p\n"), this);
	return CWinApp::ExitInstance();
}

BOOL CTangramApp::Create(CTangramNode* pTangramNode, LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext)
{
	CTangramWnd* pTangramDesignView = (CTangramWnd*)pTangramNode->m_pHostWnd;
	HWND hWnd = 0;
	BOOL bRet = false;
	CString strKey = pTangramNode->m_strID;
	strKey.MakeLower();
	strKey.Trim();

	ITangramCreator* pViewFactoryDisp = NULL;

	if(strKey.CompareNoCase(_T("ActiveX"))==0||strKey.CompareNoCase(_T("CLRCtrl"))==0)
	{
		if(strKey.CompareNoCase(_T("CLRCtrl"))==0||pTangramNode->m_strCnnID.Find(_T(","))!=-1)
			LoadCLR(); 

		if(strKey.CompareNoCase(_T("CLRCtrl"))==0)
			pTangramNode->m_nViewType = CLRCtrl;
		else if(strKey.CompareNoCase(_T("ActiveX"))==0)
			pTangramNode->m_nViewType = ActiveX;
		if (pTangramNode->m_strCnnID.Find(_T("//"))==-1&& ::PathFileExists(pTangramNode->m_strCnnID) == false)
		{
			CString strPath = theApp.m_strAppPath + _T("TangramWebPage\\") + pTangramNode->m_strCnnID;
			if (::PathFileExists(strPath))
				pTangramNode->m_strCnnID = strPath;
		}

		hWnd = pTangramNode->CreateView(pParentWnd->m_hWnd, pTangramNode->m_strCnnID);

		CComBSTR bstrExtenderID(L"");
		pTangramNode->get_Attribute(_T("extender"),&bstrExtenderID);
		pTangramNode->m_strExtenderID = OLE2T(bstrExtenderID);
		pTangramNode->m_strExtenderID.Trim();
		if(pTangramNode->m_strExtenderID!=_T(""))
		{
			CComPtr<IDispatch> pDisp;
			pDisp.CoCreateInstance(bstrExtenderID);
			if(pDisp)
			{
				pTangramNode->m_pExtender = pDisp.Detach();
				pTangramNode->m_pExtender->AddRef();
			}
		}

		pTangramDesignView->m_bCreateExternal = true;
		bRet = true;
	}
	else
	{
		strKey = pTangramNode->m_strCnnID;
		map<CString,ITangramCreator*>::iterator iter = m_mViewFactory.find(strKey);
		if (iter != m_mViewFactory.end())
			pViewFactoryDisp = iter->second;
		else
		{
			if(strKey.CompareNoCase(_T("hostapp"))==0)
			{
				if(m_pAppDisp)
				{
					m_pAppDisp->QueryInterface(IID_ITangramCreator,(void**)&pViewFactoryDisp);
					if (pViewFactoryDisp)
						m_mViewFactory[strKey] = pViewFactoryDisp;
				}
			}
			else
			{
				CComPtr<ITangramCreator> pFactoryDisp;
				HRESULT hr = pFactoryDisp.CoCreateInstance(strKey.AllocSysString());
				if(hr==S_OK)
				{
					pViewFactoryDisp = pFactoryDisp.Detach();
					m_mViewFactory[strKey] = pViewFactoryDisp;
				}
			}
		}
			
		if(pViewFactoryDisp)
		{
			LONGLONG _nRet = 0;
			pViewFactoryDisp->Create(pParentWnd?(LONGLONG)pParentWnd->m_hWnd:0, pTangramNode, &_nRet);
			hWnd = (HWND)_nRet;
			pTangramNode->m_nID = ::GetWindowLong(hWnd, GWL_ID);
		}
	}
	if (!::IsWindow(pTangramDesignView->m_hWnd) && hWnd&&pTangramDesignView->SubclassWindow(hWnd))
	{
		::SetWindowLong(hWnd,GWL_STYLE,dwStyle|WS_CHILD|WS_VISIBLE|WS_CLIPCHILDREN|WS_CLIPSIBLINGS);
		::SetWindowLong(hWnd,GWL_ID,nID);

		pTangramDesignView->m_bCreateExternal = true;
		bRet = true;
	}

	if (hWnd == 0)
	{
		hWnd = CreateWindow(L"Tangram Window Class", NULL, WS_CHILD | WS_VISIBLE|WS_CLIPSIBLINGS|WS_CLIPCHILDREN, 0, 0, 0, 0, pParentWnd->m_hWnd, (HMENU)nID, AfxGetInstanceHandle(), NULL);
	}
	if(::IsWindow(pTangramDesignView->m_hWnd)==false)
		bRet = pTangramDesignView->SubclassWindow(hWnd);

	//Very important:
	if(pTangramDesignView&&::IsWindow(pTangramDesignView->m_hWnd))
		pTangramDesignView->SendMessage(WM_INITIALUPDATE);

	////////////////////////////////////////////////////////////////////////////////////////////////

	if(pTangramNode&&pTangramNode->m_strID.CompareNoCase(_T("treeview")))
	{
		TElem ObjNode = pTangramNode->m_ObjItem;
		TElem item    = pTangramNode->m_ObjItem;

		int nCol = item.clen;

		pTangramNode->m_nRows = 1;
		pTangramNode->m_nCols = nCol;

		if(nCol)
		{
			pTangramNode->m_nViewType = TabbedWnd;

			if(pTangramNode->m_nActivePage<0||pTangramNode->m_nActivePage>nCol-1)
				pTangramNode->m_nActivePage=0;
			CWnd* pView = NULL;
			CTangramNode* pObj = NULL;

			TElem subitem;
			int j=0;
			for(subitem = item.begin(); subitem != item.end() && subitem.elem != NULL; subitem++)
			{
				CString _strName = subitem.name();
				CString strName = subitem.attr(TGM_NAME);
				if (_strName.CompareNoCase(_T("node")) == 0)
				{
					strName.Trim();
					strName.MakeLower();

					pObj = new CComObject<CTangramNode>;
					if (pTangramNode->m_pFrame)
					{
						pObj->m_pRootObj = pTangramNode->m_pRootObj;
						pObj->m_pFrame = pTangramNode->m_pFrame;
					}
					pObj->m_ObjItem = subitem;
					InitTangramNode(pObj);

					pTangramNode->AddChildNode(pObj);

					pObj->m_nCol = j;

					if(pObj->m_pObjClsInfo)
					{
						pContext->m_pNewViewClass = pObj->m_pObjClsInfo;
						pView = (CWnd*)pContext->m_pNewViewClass->CreateObject();
						pView->Create(NULL, _T(""), WS_VISIBLE | WS_CHILD, rect, pTangramDesignView, 0, pContext);
						HWND m_hChild = (HWND)::SendMessage(pTangramDesignView->m_hWnd,WM_CREATETABPAGE,(WPARAM)pView->m_hWnd,(LPARAM)LPCTSTR(pObj->m_strCaption));
					}
					j++;
				}
			}
			::SendMessage(pTangramDesignView->m_hWnd,WM_ACTIVETABPAGE,(WPARAM)pTangramNode->m_nActivePage,(LPARAM)1);
		}
	}

	pTangramNode->m_pHostWnd->SetWindowText(pTangramNode->m_strWebObjName);

	if(pTangramNode->m_nViewType==TabbedWnd&&pTangramNode->m_pParentObj&&pTangramNode->m_pParentObj->m_nViewType==Splitter)
	{
		if(pTangramNode->m_pHostWnd)
			pTangramNode->m_pHostWnd->ModifyStyleEx(WS_EX_WINDOWEDGE | WS_EX_CLIENTEDGE, 0);
	}
	if (m_pTangramNode->m_pTangram)
		m_pTangramNode->m_pTangram->Fire_NodeCreated(pTangramNode);

	return bRet;
}

void CTangramApp::OnUpdateTangramObj(CTangramNode* pNode)
{	
	if(pNode) 
	{
		CTangramNodeVector::iterator it;
		for(it = pNode->m_vChildNodes.begin(); it != pNode->m_vChildNodes.end(); it++)
		{
			CTangramNode* pChildNode = *it;
			if(pChildNode->m_pHostWnd)
				pChildNode->m_pHostWnd->SendMessage(WM_UPDATETANGRAMOBJ);
		}
	} 
}

LRESULT CTangramApp::CBTProc(int nCode, WPARAM wParam, LPARAM lParam)
{
	LRESULT hr = CallNextHookEx(theApp.m_hCBTHook, nCode, wParam, lParam);
	HWND hWnd = (HWND)wParam;
	switch (nCode)
	{
	case HCBT_CREATEWND:
		{
			CBT_CREATEWND* pCreateWnd = (CBT_CREATEWND*)lParam;

			LPCTSTR lpszName = pCreateWnd->lpcs->lpszName;
			::GetClassName(hWnd, theApp.m_szBuffer, MAX_PATH);
			CString strClassName = CString(theApp.m_szBuffer);
			if (strClassName == _T("ThunderDFrame"))
			{
				::PostMessage(hWnd, WM_VBAFORMCREATED, 0, 0);
				break;
			}

			if (theApp.m_strSWTClassName!=_T("")&&strClassName == theApp.m_strSWTClassName)
			{
				TangramEclipsePlus::EclipsePlus::CTangramEclipseAddin* pAddin = ((TangramEclipsePlus::EclipsePlus::CTangramEclipseAddin*)theApp.m_pHostCore);
				if (pAddin->m_strURL != _T(""))
				{
					if (pCreateWnd->lpcs->hwndParent==NULL)
					{
						pAddin->m_nIndex++;
						if (pAddin->m_nIndex == 3)
						{
							pAddin->m_pNewWnd = new CComObject<TangramEclipsePlus::EclipsePlus::CTangramEclipseWnd>;
							pAddin->m_pNewWnd->m_strURL = pAddin->m_strURL;
							pAddin->m_pNewWnd->SubclassWindow(hWnd);
							break;
						}
					}
					if ((pAddin->m_nIndex>=3)&&pAddin->m_pNewWnd&&pAddin->m_pNewWnd->m_hWnd == pCreateWnd->lpcs->hwndParent)
					{
						::PostMessage(pCreateWnd->lpcs->hwndParent, WM_ECLIPSEMAINWNDCREATED, (WPARAM)hWnd, 0);
						break;
					}
					if (pAddin->m_nCommandID&& pCreateWnd->lpcs->hwndParent == NULL)
					{
						pAddin->m_pNewWnd = new CComObject<TangramEclipsePlus::EclipsePlus::CTangramEclipseWnd>;
						pAddin->m_pNewWnd->SubclassWindow(hWnd);
						pAddin->m_nCommandID = 0;
						break;
					}
					if (pAddin->m_pNewWnd&&pAddin->m_pNewWnd->m_hWnd == pCreateWnd->lpcs->hwndParent)
					{
						::PostMessage(pCreateWnd->lpcs->hwndParent, WM_ECLIPSEMAINWNDCREATED, (WPARAM)hWnd, 0);
						break;
					}
				}

				break;
			}
			if (HIWORD(pCreateWnd->lpcs->lpszClass))
			{
				if (theApp.m_pTangramAddinApp)
				{
					theApp.m_pTangramAddinApp->WindowCreated(strClassName, lpszName, pCreateWnd->lpcs->hwndParent, hWnd);
				}
			}
		}
		break;
	case HCBT_DESTROYWND:
		{
			map<HWND, CTangram*>::iterator it = theApp.m_mapTangrm.find(hWnd);
			if (it != theApp.m_mapTangrm.end())
			{
				CTangram* pTangram = it->second;
				if (pTangram->m_mapFrame.size() == 0)
				{
					theApp.m_mapTangrm.erase(it);
					delete pTangram;
				}
			}
		}
		break;
	case HCBT_MINMAX:
		switch (lParam)
		{
			case SW_MINIMIZE:
			{
				if ((::GetWindowLong(hWnd, GWL_EXSTYLE)&WS_EX_MDICHILD))
					::PostMessage(hWnd, WM_MDICHILDMIN, 0, 0);
			}
		}
		break;
	case HCBT_ACTIVATE:
		theApp.m_hActiveWnd = hWnd;
		if (theApp.m_pTangramCLRProxy)
		{
			theApp.m_bWinFormActived = theApp.m_pTangramCLRProxy->IsWinForm(hWnd);
			if (theApp.m_bWinFormActived)
				theApp.m_pTangramFrame = NULL;
		}
		break;
	}
	return hr;
}

LRESULT CALLBACK CTangramApp::GetMessageProc(int nCode, WPARAM wParam, LPARAM lParam)
{
	LPMSG lpMsg = (LPMSG)lParam;
	DWORD dwID = ::GetCurrentThreadId();
	TangramThreadInfo* pThreadInfo = theApp.GetThreadInfo(dwID);
	if ((nCode >= 0) && PM_REMOVE == wParam)
	{
		switch (lpMsg->message)
		{
			case WM_KEYDOWN:
			{
				if (::IsWindow(theApp.m_hExcelEdit))
				{
					BOOL bEnable = true;
					bEnable = ::EnableWindow(theApp.m_hExcelEdit, theApp.m_pTangramFrame ? false : true);
				}
				switch (lpMsg->wParam)
				{
				case VK_TAB:
					if (theApp.m_bWinFormActived&&theApp.m_bEnableProcessFormTabKey)
					{
						theApp.m_pTangramCLRProxy->ProcessFormMsg(theApp.m_hActiveWnd, (LONG)lpMsg, 0);
						break;
					}
					if (theApp.m_pTangramFrame&&theApp.m_pTangramNode)
					{
						CTangramWnd* pWnd = (CTangramWnd*)theApp.m_pTangramNode->m_pHostWnd;
						if (pWnd&&!::IsChild(pWnd->m_hWnd, lpMsg->hwnd))
						{
							if (pWnd->m_bBKWnd)
							{
								if (!::IsChild(theApp.m_pTangramMDIClientBKWnd->m_hWnd, lpMsg->hwnd))
								{
									theApp.m_pTangramNode = NULL;
									theApp.m_pTangramFrame = NULL;
								}
								else if (pWnd->PreTranslateMessage(lpMsg))
									lpMsg->hwnd = NULL;
							}
							else
							{
								theApp.m_pTangramNode = NULL;
								theApp.m_pTangramFrame = NULL;
							}
						}
						else if (pWnd&&pWnd->PreTranslateMessage(lpMsg))
						{
							lpMsg->hwnd = NULL;
							lpMsg->lParam = 0;
							lpMsg->wParam = 0;
							lpMsg->message = 0;
						}
					}
					break;
				case VK_LEFT:
				case VK_UP:
				case VK_RIGHT:
				case VK_DOWN:
					if (theApp.m_pTangramFrame&&theApp.m_pTangramNode)
					{
						CTangramWnd* pWnd = (CTangramWnd*)theApp.m_pTangramNode->m_pHostWnd;
						if (pWnd->m_bBKWnd)
						{
							if (theApp.m_pTangramMDIClientBKWnd&&::IsChild(theApp.m_pTangramMDIClientBKWnd->m_hWnd, lpMsg->hwnd) && pWnd->PreTranslateMessage(lpMsg))
								lpMsg->hwnd = NULL;
							else
							{
								theApp.m_pTangramNode = NULL;
								theApp.m_pTangramFrame = NULL;
								DispatchMessage(lpMsg);
								lpMsg->hwnd = NULL;
							}
							break;
						}
						if (pWnd&&pWnd->PreTranslateMessage(lpMsg))
						{
							lpMsg->hwnd = NULL;
							lpMsg->lParam = 0;
							lpMsg->wParam = 0;
							lpMsg->message = 0;
						}
					}
					break;
				case VK_DELETE:
					if (theApp.m_pTangramNode)
					{
						CTangramWnd* pWnd = (CTangramWnd*)theApp.m_pTangramNode->m_pHostWnd;
						HWND hWnd = theApp.m_pTangramNode->m_pHostWnd->m_hWnd;
						if (pWnd->m_bBKWnd)
						{
							if (theApp.m_pTangramMDIClientBKWnd&&::IsChild(theApp.m_pTangramMDIClientBKWnd->m_hWnd, lpMsg->hwnd))
								pWnd->PreTranslateMessage(lpMsg);
							else
								DispatchMessage(lpMsg);
							lpMsg->hwnd = NULL;
							break;
						}
						if (::IsChild(hWnd, lpMsg->hwnd) == FALSE)
						{
							DispatchMessage(lpMsg);
							lpMsg->hwnd = NULL;
							break;
						}
						if (theApp.m_pTangramNode->m_nViewType == ActiveX)
						{
							pWnd->PreTranslateMessage(lpMsg);
							lpMsg->hwnd = NULL;
							break;
						}
					}

					DispatchMessage(lpMsg);
					lpMsg->hwnd = NULL;
					break;
				case VK_BACK:
					{
						if (theApp.m_pTangramFrame&&theApp.m_pTangramNode)
						{
							CTangramWnd* pWnd = (CTangramWnd*)theApp.m_pTangramNode->m_pHostWnd;
							if (pWnd&&pWnd->PreTranslateMessage(lpMsg))
							{
								lpMsg->hwnd = NULL;
								lpMsg->lParam = 0;
								lpMsg->wParam = 0;
								lpMsg->message = 0;
							}
						}
						else
						{
							TranslateMessage(lpMsg);
							if (theApp.m_strExeName != _T("devenv"))
							{
								DispatchMessage(lpMsg);
								lpMsg->hwnd = NULL;
								lpMsg->lParam = 0;
								lpMsg->wParam = 0;
								lpMsg->message = 0;
							}
						}
					}
					break;
				case VK_RETURN:
					{
						if (theApp.m_pTangramFrame&&theApp.m_pTangramNode)
						{
							CTangramWnd* pWnd = (CTangramWnd*)theApp.m_pTangramNode->m_pHostWnd;
							if (pWnd)
							{
								TranslateMessage(lpMsg);
								lpMsg->hwnd = NULL;
								lpMsg->lParam = 0;
								lpMsg->wParam = 0;
								lpMsg->message = 0;
								break;
							}
						}
						TranslateMessage(lpMsg);
						if (theApp.m_strExeName != _T("devenv"))
						{
							DispatchMessage(lpMsg);
							lpMsg->hwnd = NULL;
							lpMsg->lParam = 0;
							lpMsg->wParam = 0;
							lpMsg->message = 0;
						}
					}
					break;
				case 0x41://Ctrl+A
				case 0x43://Ctrl+C
				case 0x56://Ctrl+V
				case 0x58://Ctrl+X
				case 0x5a://Ctrl+Z
					if (::GetKeyState(VK_CONTROL) < 0)  // control pressed
					{
						if (theApp.m_pTangramNode && (theApp.m_pTangramNode->m_nViewType == ActiveX || theApp.m_pTangramNode->m_strID.CompareNoCase(_T("hostview")) == 0))
						{
							CTangramWnd* pWnd = (CTangramWnd*)theApp.m_pTangramNode->m_pHostWnd;
							HWND hWnd = pWnd->m_hWnd;
							if (pWnd->m_bBKWnd&&theApp.m_pTangramMDIClientBKWnd)
								hWnd = theApp.m_pTangramMDIClientBKWnd->m_hWnd;
							if (::IsChild(hWnd, lpMsg->hwnd))
							{
								pWnd->PreTranslateMessage(lpMsg);
								lpMsg->hwnd = NULL;
								break;
							}
						}
						TranslateMessage(lpMsg);
						lpMsg->hwnd = NULL;
					}
					break;
				}
			}
			break;
		case WM_MOUSEMOVE:
			if (theApp.m_pTangramFrame&&theApp.m_pTangramFrame->m_pWorkNode)
				theApp.m_pTangramFrame->m_pWorkNode->PreTranslateMessage(lpMsg);
			if (theApp.m_hExcelEdit)
			{
				TangramOfficePlus::ExcelPlus::CTangramExcelPlusWBWnd* pWnd = ((TangramOfficePlus::ExcelPlus::CTangramExcelAddin*)theApp.m_pHostCore)->m_pActiveWnd;
				if (pWnd&&::IsWindowVisible(pWnd->m_hWnd))
				{
					if (lpMsg->hwnd == ::GetParent(theApp.m_hExcelEdit)||lpMsg->hwnd == ::GetParent(theApp.m_hExcelEdit2))
					{
						 ::EnableWindow(theApp.m_hExcelEdit, true);
						 ::EnableWindow(theApp.m_hExcelEdit2, true);
					}
				}
			}
			break;
		case WM_MDICHILDMIN:
			::BringWindowToTop(lpMsg->hwnd);
			break;
		case WM_DOWNLOAD_MSG:
			{
				TangramUtilities::CTangramDownLoad* pObj = (TangramUtilities::CTangramDownLoad*)lpMsg->wParam;
				if (pObj)
				{
					delete pObj;
				}
			}
			break;
		case WM_VBAFORMCREATED:
			{
				theApp.CreateFormWnd(lpMsg->hwnd);
			}
			break;
		case WM_ACTIVEAPPXMLDOC:
			{
				if (::IsWindow(theApp.m_hVSToolWnd))
				{
					ITangramNode* pNode = (ITangramNode*)lpMsg->wParam;
					if (pNode)
					{
						CTangramNode* _pNode = (CTangramNode*)pNode;
						CString strKey = _pNode->m_strVSToolWndScript;
						if (strKey.CompareNoCase(theApp.m_strToolKey))
						{
							theApp.m_strToolKey = strKey;
							CComPtr<ITangramFrame> pFrame;
							CComPtr<ITangramNode> pNode;
							theApp.m_pTangramCore->GetTangramFrame((LONGLONG)theApp.m_hVSToolWnd, &pFrame);
							CString strPath = theApp.m_strAppPath;
							strPath += _T("ToolWndScript\\");
							strPath += strKey;
							pFrame->Extend(CComBSTR(strKey), strPath.AllocSysString(), &pNode);
						}
					}
				}
			}
			break;
		case WM_NAVIXTML:
			{
				RECT rc;
				HWND hWnd = ::GetParent(lpMsg->hwnd);
				::GetClientRect(hWnd, &rc);
				::SetWindowPos(lpMsg->hwnd, HWND_BOTTOM, rc.left, rc.top, rc.right + 1, rc.bottom, SWP_NOZORDER | SWP_FRAMECHANGED);
				::SetWindowPos(lpMsg->hwnd, HWND_BOTTOM, rc.left, rc.top, rc.right, rc.bottom, SWP_NOZORDER | SWP_FRAMECHANGED);
			}
			break;
		case WM_TANGRAM_WEBNODEDOCCOMPLETE:
			{
				map<HWND, CTangram*>::iterator it = theApp.m_mapTangrm.find(lpMsg->hwnd);
				if (it!=theApp.m_mapTangrm.end())
					it->second->OnNodeDocComplete(lpMsg->wParam);
			}
			break;
		}
	}
	return CallNextHookEx(pThreadInfo->m_hGetMessageHook, nCode, wParam, lParam);
}

CString CTangramApp::EncodeFileToBase64(CString strSRC)
{
	DWORD dwDesiredAccess = GENERIC_READ;
	DWORD dwShareMode = FILE_SHARE_READ;
	DWORD dwFlagsAndAttributes = FILE_ATTRIBUTE_NORMAL;
	HANDLE hFile =::CreateFile(strSRC, GENERIC_READ,FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_FLAG_RANDOM_ACCESS, NULL);

	if (hFile == INVALID_HANDLE_VALUE)
	{
		TRACE(_T("ERROR: CreateFile failed - %s\n"), strSRC);
		return _T("");
	}
	else
	{
		DWORD dwFileSizeHigh = 0;
		__int64 qwFileSize = GetFileSize(hFile, &dwFileSizeHigh);
		qwFileSize |= (((__int64)dwFileSizeHigh) << 32);
		DWORD dwFileSize = qwFileSize;
		if ((dwFileSize == 0) || (dwFileSize == INVALID_FILE_SIZE))
		{
			TRACE(_T("ERROR: GetFileSize failed - %s\n"), strSRC);
			return _T("");
		}
		else
		{
			PBYTE buffer = new BYTE[dwFileSize];
			memset(buffer, 0, (dwFileSize)*sizeof(BYTE));
			DWORD dwBytesRead = 0;
			if (!ReadFile(hFile, buffer, dwFileSize, &dwBytesRead, NULL))
			{
				TRACE(_T("ERROR: ReadFile failed - %s\n"), strSRC);
			}
			else
			{
				int nMaxLineLen = 256;
				char *pDstInfo = new char[dwFileSize*2];  
				memset(pDstInfo, 0, dwFileSize*2);  
				Base64Encode(buffer, pDstInfo, dwFileSize, nMaxLineLen);
				CString strInfo = CA2W(pDstInfo); 
				delete[] pDstInfo; 

				delete[] buffer;
				return strInfo;
			}
		}
	}

	return _T("");
}

CString CTangramApp::Encode(CString strSRC, BOOL bEnCode)
{
	if(bEnCode)
	{
		LPCWSTR srcInfo = strSRC;
		std::string strSrc = (LPCSTR)CW2A(srcInfo,CP_UTF8);  
		int nSrcLen = strSrc.length();  
		int nDstLen = Base64EncodeGetRequiredLength(nSrcLen);
		char *pDstInfo = new char[nSrcLen*2];  
		memset(pDstInfo, 0, nSrcLen*2);  
		ATL::Base64Encode((BYTE*)strSrc.c_str(), nSrcLen, pDstInfo, &nDstLen);  
		CString strInfo = CA2W(pDstInfo); 
		delete[] pDstInfo; 
		return strInfo;
	}
	else
	{
		long nSrcSize = strSRC.GetLength();  
        BYTE *pDecodeStr = new BYTE[nSrcSize];  
        memset(pDecodeStr, 0, nSrcSize);  
        int nLen = nSrcSize;  
        ATL::Base64Decode(CW2A(strSRC), nSrcSize, pDecodeStr, &nLen);  
		CString str = CA2W((char*)pDecodeStr,CP_UTF8);
        delete[] pDecodeStr;  
        pDecodeStr = NULL;  
		return str; 
	}
}

void CTangramApp::SetHook(DWORD ThreadID)
{
	TangramThreadInfo* pThreadInfo = GetThreadInfo(ThreadID);
	if(pThreadInfo&&pThreadInfo->m_hGetMessageHook==NULL)
	{
		pThreadInfo->m_hGetMessageHook = SetWindowsHookEx(WH_GETMESSAGE,GetMessageProc,NULL,ThreadID);
		//m_hMessageHook = SetWindowsHookEx(WH_CALLWNDPROCRET,MessageProc,NULL,ThreadID);		
		//m_hMessageHook = SetWindowsHookEx(WH_CALLWNDPROC,MessageProc,NULL,GetCurrentThreadId());		
		//m_hMessageRetHook = SetWindowsHookEx(WH_CALLWNDPROCRET,MessageRetProc,NULL,GetCurrentThreadId());
		//pThreadInfo->m_hGetMessageHook = SetWindowsHookEx(WH_KEYBOARD,GetMessageProc,NULL,ThreadID);
		//pThreadInfo->m_hRetWndHook = SetWindowsHookEx(WH_CALLWNDPROC,MessageRetProc,NULL,ThreadID);
		//pThreadInfo->m_hRetWndHook = SetWindowsHookEx(WH_CALLWNDPROCRET,MessageRetProc,NULL,ThreadID);
		//pThreadInfo->m_hCreateWndHook = SetWindowsHookEx(WH_CBT,CreateWndProc,NULL,ThreadID); 
	}
}

void CTangramApp::InitTangramNode(CTangramNode* pObj)
{
	if(pObj)
	{
		pObj->m_nHeigh = _wtoi64(pObj->m_ObjItem.attr(TGM_HEIGHT));
		pObj->m_nWidth = _wtoi64(pObj->m_ObjItem.attr(TGM_WIDTH));

		pObj->m_nStyle = _wtoi64(pObj->m_ObjItem.attr(TGM_STYLE));
		pObj->m_nActivePage = _wtoi64(pObj->m_ObjItem.attr(TGM_ACTIVE_PAGE));
		pObj->m_strCaption = pObj->m_ObjItem.attr(TGM_CAPTION);
		pObj->m_strName = pObj->m_ObjItem.attr(TGM_NAME);
		if (pObj->m_strName == _T(""))
		{
			CString strName = _T("");
			strName.Format(_T("Node_%p"), (LONGLONG)pObj);
			pObj->m_strName = strName;
		}
		if (pObj->m_pFrame&&pObj->m_pFrame->m_pTangram)
		{
			pObj->m_pTangram = pObj->m_pFrame->m_pTangram;
			pObj->m_strWebObjName = pObj->m_pFrame->m_strFrameName + _T("_") + theApp.m_strCurrentKey +_T("_") + pObj->m_strName;
			map<CString, CTangramNode*>::iterator it2 = pObj->m_pTangram->m_mapNode.find(pObj->m_strWebObjName);
			if (it2 == pObj->m_pTangram->m_mapNode.end())
			{
				pObj->m_pTangram->m_mapNode[pObj->m_strWebObjName] = pObj;
			}
		}
		pObj->m_strID = pObj->m_ObjItem.attr(TGM_NODE_TYPE);
		pObj->m_strID.MakeLower();
		pObj->m_strID.Trim();
		pObj->m_strCnnID = pObj->m_ObjItem.attr(TGM_CNN_ID);
		pObj->m_strCnnID.MakeLower();
		pObj->m_strCnnID.Trim();
		TangramWndClsInfo* pWndClsInfo = NULL;
		if(m_TabWndClassInfoDictionary.Lookup(LPCTSTR(pObj->m_strID),(void *&)pWndClsInfo))
			pObj->m_pObjClsInfo = pWndClsInfo->m_pTabWndClsInfo;
	}

	if (pObj->m_pObjClsInfo == NULL)
		pObj->m_pObjClsInfo = RUNTIME_CLASS(CTangramWnd);
}

CString CTangramApp::GetNewGUID()
{
	GUID   m_guid; 
	CString   strGUID = _T("");   
	if(S_OK ==::CoCreateGuid(&m_guid))   
	{         
		strGUID.Format(_T("%08X-%04X-%04x-%02X%02X-%02X%02X%02X%02X%02X%02X") ,
			m_guid.Data1,  m_guid.Data2,   m_guid.Data3 ,
			m_guid.Data4[0],   m_guid.Data4[1],
			m_guid.Data4[2],   m_guid.Data4[3],
			m_guid.Data4[4],   m_guid.Data4[5],
			m_guid.Data4[6],   m_guid.Data4[7] );   
	}   

	return strGUID;
}

CString CTangramApp::CheckXML(CString strXml)
{
	strXml.Trim();
	if (strXml == _T(""))
		return _T("error");
	CTangramXmlParse m_Parse;
	if(m_Parse.LoadXml(strXml)==false)
		return _T("error");
	CTangramXmlParse* pChild = m_Parse.GetChild(_T("window"));
	if (pChild)
	{
		pChild = pChild->GetChild(_T("node"));
		if (pChild)
		{
			_CheckNode(pChild);
		}
	}
	return _T("");
}

BOOL CTangramApp::_CheckNode(CTangramXmlParse* pXmlNode)
{
	if (pXmlNode == NULL)
		return FALSE;
	CString strName = pXmlNode->name();
	if (strName != _T("node"))
		return false;
	CString strID = pXmlNode->attr(_T("id"), _T(""));
	CString strCnnID = pXmlNode->attr(_T("cnnid"), _T(""));
	strCnnID.MakeLower();
	int nCount = pXmlNode->GetCount();
	if (nCount)
	{
		if (strID == _T("splitter"))
		{
			int nRows = pXmlNode->attrInt(_T("rows"), 0);
			int nCols = pXmlNode->attrInt(_T("cols"), 0);
			if (nCount != nRows*nCols)
				return FALSE;
			for (int i = 0; i < nCount; i++)
			{
				CTangramXmlParse* pChild = pXmlNode->GetChild(i);
				BOOL bCheck = _CheckNode(pChild);
				if (bCheck == FALSE)
					return FALSE;
			}
		}
		else if (strID != _T(""))
		{
			if (strCnnID == _T(""))
				return FALSE;
			for (int i = 0; i < nCount; i++)
			{
				CTangramXmlParse* pChild = pXmlNode->GetChild(i);
				BOOL bCheck = _CheckNode(pChild);
				if (bCheck == FALSE)
					return FALSE;
			}
		}
	}
	else
	{
		CString strName = pXmlNode->attr(_T("name"),_T(""));
		if (strName == _T(""))
			return FALSE;
		if (strID == _T("ActiveX"))
		{
			if (strCnnID == _T(""))
				return FALSE;
			if (strCnnID.Find(_T("http://")) != -1 || strCnnID.Find(_T("https://")) != -1 || strCnnID.Find(_T("res://")) != -1)
			{
				return TRUE;
			}
			else if (::PathFileExists(strCnnID))
				return TRUE;
			else
			{
				CComPtr<IDispatch> pDisp;
				if (pDisp.CoCreateInstance(strCnnID) == S_OK)
					return TRUE;
				return FALSE;
			}
		}
		else if (strID == _T("CLRCtrl"))
		{
			if (strCnnID == _T(""))
				return FALSE;
		}	
		else if (strID != _T("") && strCnnID != _T(""))
		{
			CComPtr<IDispatch> pDisp;
			if (pDisp.CoCreateInstance(strCnnID) == S_OK)
			{
				CComQIPtr<ITangramCreator> pCreator(pDisp);
				if(pCreator)
					return TRUE;
			}
			return FALSE;
		}
	}
	return TRUE;
}

CString CTangramApp::GetFileVer()
{	DWORD dwHandle, InfoSize;
	CString strVersion;

	struct LANGANDCODEPAGE
	{
		WORD wLanguage;
		WORD wCodePage;
	}*lpTranslate;
	unsigned int cbTranslate = 0;

	TCHAR cPath[MAX_PATH] = { 0 };
	::GetModuleFileName(NULL, cPath, MAX_PATH);
	InfoSize = GetFileVersionInfoSize(cPath, &dwHandle);


	char *InfoBuf = new char[InfoSize];

	GetFileVersionInfo(cPath, 0, InfoSize, InfoBuf);
	VerQueryValue(InfoBuf, TEXT("\\VarFileInfo\\Translation"), (LPVOID*)&lpTranslate, &cbTranslate);

	TCHAR SubBlock[300] = { 0 };

	//ProductVersion
	//FileVersion

	wsprintf(SubBlock, TEXT("\\StringFileInfo\\%04x%04x\\ProductVersion"), lpTranslate[0].wLanguage, lpTranslate[0].wCodePage);

	TCHAR *lpBuffer = NULL;
	unsigned int dwBytes = 0;
	VerQueryValue(InfoBuf, SubBlock, (void**)&lpBuffer, &dwBytes);
	if (lpBuffer != NULL)
	{
		strVersion.Format(_T("%s"), (TCHAR*)lpBuffer);
	}

	delete[] InfoBuf;
	return strVersion;
}

void CTangramApp::AddClsInfo(CString m_strObjID,  int nType, CRuntimeClass* pClsInfo)
{
	m_strObjID.MakeLower();

	TRACE(_T("---------- %s\n"),m_strObjID.GetBuffer());

	TangramWndClsInfo* pTabWndClsInfo = new TangramWndClsInfo;
	pTabWndClsInfo -> m_nType = (ViewType)nType;
	pTabWndClsInfo -> m_pTabWndClsInfo = pClsInfo;
	m_TabWndClassInfoDictionary[m_strObjID] = pTabWndClsInfo;
}

void CTangramApp::HostPosChanged(CTangramNode* pHostViewNode)
{
	if (pHostViewNode == NULL)
		return;

	CTangramFrame* pFrame = pHostViewNode->m_pFrame;
	if (pFrame)
	{
		CRect rt1;
		CWnd* pWnd = pFrame->m_pWorkNode->m_pHostWnd;
		pWnd->GetWindowRect(&rt1);
		pFrame->GetParent().ScreenToClient(&rt1);
		pFrame->m_bNeedOuterChanged = false;
		HDWP dwh = BeginDeferWindowPos(1);
		dwh = ::DeferWindowPos(dwh, pFrame->m_hWnd, HWND_TOP,
			rt1.left,
			rt1.top,
			rt1.Width(),
			rt1.Height(),
			SWP_FRAMECHANGED | SWP_NOACTIVATE 
			);
		EndDeferWindowPos(dwh);
	}
}

LRESULT CTangramApp::Close(void)
{
	HRESULT hr = S_OK;
	int cConnections = m_pHostCore->m_vec.GetSize();

	for (int iConnection = 0; iConnection < cConnections; iConnection++)
	{
		CComPtr<IUnknown> punkConnection = m_pHostCore->m_vec.GetAt(iConnection);

		IDispatch * pConnection = static_cast<IDispatch *>(punkConnection.p);

		if (pConnection)
		{
			CComVariant varResult;
			DISPPARAMS params = { NULL, NULL, 0, 0 };
			hr = pConnection->Invoke(2, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, &varResult, NULL, NULL);
		}
	} 

	if (m_pTangramCLRProxy)
	{
		m_pTangramCLRProxy->CloseForms();
	}

	map<CString, ITangramCreator*>::iterator it;
	for (it = m_mViewFactory.begin(); it != m_mViewFactory.end(); it++)
	{
		if (it->first.CompareNoCase(_T("HostApp")))
			it->second->Release();
	}
	m_mViewFactory.clear();
	return S_OK;
}

void CTangramApp::InitEventDic()
{
	if (theApp.m_mapEventType.size() == 0)
	{
		m_mapEventType[_T("OnClick")] = TangramClick;
		m_mapEventType[_T("OnDoubleClick")] = TangramDoubleClick;
		m_mapEventType[_T("OEnter")] = TangramEnter;
		m_mapEventType[_T("OnLeave")] = TangramLeave;
		m_mapEventType[_T("OnEnabledChanged")] = TangramEnabledChanged;
		m_mapEventType[_T("OnLostFocus")] = TangramLostFocus;
		m_mapEventType[_T("OnGotFocus")] = TangramGotFocus;
		m_mapEventType[_T("OnKeyUp")] = TangramKeyUp;
		m_mapEventType[_T("OnKeyDown")] = TangramKeyDown;
		m_mapEventType[_T("OnKeyPress")] = TangramKeyPress;
		m_mapEventType[_T("OnMouseClick")] = TangramMouseClick;
		m_mapEventType[_T("OnMouseDoubleClick")] = TangramMouseDoubleClick;
		m_mapEventType[_T("OnMouseDown")] = TangramMouseDown;
		m_mapEventType[_T("OnMouseEnter")] = TangramMouseEnter;
		m_mapEventType[_T("OnMouseHover")] = TangramMouseHover;
		m_mapEventType[_T("OnMouseLeave")] = TangramMouseLeave;
		m_mapEventType[_T("OnMouseMove")] = TangramMouseMove;
		m_mapEventType[_T("OnMouseUp")] = TangramMouseUp;
		m_mapEventType[_T("OnouseWheel")] = TangramMouseWheel;
		m_mapEventType[_T("OnTextChanged")] = TangramTextChanged;
		m_mapEventType[_T("OnVisibleChanged")] = TangramVisibleChanged;
		m_mapEventType[_T("OnClientSizeChanged")] = TangramClientSizeChanged;
		m_mapEventType[_T("OnSizeChanged")] = TangramSizeChanged;
		m_mapEventType[_T("OnParentChanged")] = TangramParentChanged;
		m_mapEventType[_T("OnResize")] = TangramResize;
	}
}

void CTangramApp::CreateTangramCoreForOfficeApp(int nIndex)
{
	switch (nIndex)
	{
	case 0:
		m_pTangramCore = new CComObject < WordPlus::CTangramWordAddin >;
		break;
	case 1:
		m_pTangramCore = new CComObject < ExcelPlus::CTangramExcelAddin >;
		break;
	case 2:
		m_pTangramCore = new CComObject < OutLookPlus::CTangramOutLookAddin >;
		break;
	case 3:
		m_pTangramCore = new CComObject < AccessPlus::CTangramAccessAddin >;
		break;
	case 4:
		m_pTangramCore = new CComObject < OneNotePlus::CTangramOneNoteAddin >;
		break;
	case 5:
		m_pTangramCore = new CComObject < InfoPathPlus::CTangramInfoPathAddin >;
		break;
	case 6:
		m_pTangramCore = new CComObject < ProjectPlus::CTangramProjectAddin >;
		break;
	case 7:
		m_pTangramCore = new CComObject < PowerPointPlus::CTangramPowerPointAddin >;
		break;
	case 8:
		m_pTangramCore = new CComObject < VisioPlus::CTangramVisioAddin >;
		break;
	case 9:
		m_pTangramCore = new CComObject < LyncPlus::CTangramLyncAddin >;
		break;
	}
}

int CTangramApp::LoadCLR()
{
	if (m_pClrHost == NULL)
	{
		HMODULE	m_hMscoreeLib = LoadLibrary(TEXT("mscoree.dll"));
		if (m_hMscoreeLib)
		{
			ICLRMetaHost* m_pMetaHost = NULL;
			TangramCLRCreateInstance CLRCreateInstance = NULL;
			HRESULT hrStart = 0;
			CLRCreateInstance = (TangramCLRCreateInstance)GetProcAddress(m_hMscoreeLib, "CLRCreateInstance");
			if (CLRCreateInstance)
			{
				hrStart = CLRCreateInstance(CLSID_CLRMetaHost, IID_ICLRMetaHost, (LPVOID *)&m_pMetaHost);
			}

			if (theApp.m_pTangramCLRProxy == NULL)
			{
				CString strVer = _T("v4.0.30319");
				HRESULT hrStart = 0;
				ICLRRuntimeInfo * lpRuntimeInfo = NULL;
				if (theApp.m_pClrHost == NULL)
				{
					hrStart = m_pMetaHost->GetRuntime(
						strVer.AllocSysString(),
						IID_ICLRRuntimeInfo,
						(LPVOID *)&lpRuntimeInfo);
					if (FAILED(hrStart))
						return S_FALSE;
					hrStart = lpRuntimeInfo->GetInterface(
						CLSID_CLRRuntimeHost,
						IID_ICLRRuntimeHost,
						(LPVOID *)&theApp.m_pClrHost);
					if (FAILED(hrStart)) return S_FALSE;
				}

				hrStart = theApp.m_pClrHost->Start();
				if (FAILED(hrStart))
				{
					return S_FALSE;
				}
				if (hrStart==S_FALSE)
				{
					m_bCLRStart = true;
				}

				//CComPtr<IDispatch> pDisp;
				//HRESULT hr = pDisp.CoCreateInstance(L"TangramCLRProxy.TangramProxy.1");
				if (m_strTangramCLRPath != _T(""))
				{
					DWORD dwRetCode = 0;
					hrStart = m_pClrHost->ExecuteInDefaultAppDomain(m_strTangramCLRPath, _T("TangramCLR.TangramCore"), _T("InitTangram"), _T(""), &dwRetCode);
				}
			}

			DWORD dw = m_pMetaHost->Release();
			m_pMetaHost = NULL;

			FreeLibrary(m_hMscoreeLib);
			m_hMscoreeLib = NULL;

			if (hrStart != S_OK)
				return -1;
		}
	}
	return 0;
}

typedef BOOL(WINAPI *IW64PFP)(HANDLE, BOOL *);
BOOL CTangramApp::IsWow64bit()
{
	BOOL bRet = FALSE;
	IW64PFP  IW64P = (IW64PFP)GetProcAddress(GetModuleHandle(_T("kernel32")), "IsWow64Process");
	if (IW64P != NULL)
		IW64P(GetCurrentProcess(), &bRet);
	return bRet;
}

BOOL CTangramApp::Is64bitSystem()
{
	SYSTEM_INFO si;
	GetNativeSystemInfo(&si);

	if (si.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_AMD64 ||
		si.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_IA64)
		return TRUE;
	else
		return FALSE;
}

STDAPI DllCanUnloadNow(void)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	return (AfxDllCanUnloadNow()==S_OK && theApp.GetLockCount()==0) ? S_OK : S_FALSE;
}

STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
	return theApp.DllGetClassObject(rclsid, riid, ppv);
}

STDAPI DllRegisterServer(void)
{
	return theApp.DllRegisterServer();
}

STDAPI DllUnregisterServer(void)
{
	return theApp.DllUnregisterServer();
}
