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

#include "stdafx.h"

#include "Wininet.h"
#include "TangramVSIApp.h"
#include "CommonIncludes.h"

CTangramApp theApp;

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

BOOL CTangramApp::InitInstance()
{
	m_pDTE = NULL;
	TCHAR file[MAX_PATH];
	GetModuleFileName(::GetModuleHandle(_T("TangramPackage.dll")), file, MAX_PATH * sizeof(TCHAR));
	
	m_strModulePath = file;
	int nPos = m_strModulePath.ReverseFind('\\');
	m_strModulePath = m_strModulePath.Left(nPos + 1);
	//HRESULT hr = SHGetFolderPath(NULL,CSIDL_COMMON_APPDATA,NULL,0,szPath);
	HRESULT hr = SHGetFolderPath(NULL, CSIDL_APPDATA, NULL, 0, file);
	m_strAppDataPath = CString(file);
	m_strAppDataPath += _T("\\TangramData\\");

	hr = SHGetFolderPath(NULL, CSIDL_PROGRAM_FILES, NULL, 0, file);
	m_strProgramFilePath = CString(file);

	GetModuleFileName(NULL, file, MAX_PATH * sizeof(TCHAR));
	CString path(file);
	nPos = path.ReverseFind('\\');
	CString strName = path.Mid(nPos + 1);
	nPos = strName.Find(_T("."));
	m_strExeName = strName.Left(nPos);
	m_strAppDataPath += m_strExeName;
	m_strAppDataPath += _T("\\");
	m_strVersion = _T("");
	CComQIPtr<_DTE> pDTE(m_pDTE);
	if (pDTE)
	{
		CComBSTR bstrVer;
		pDTE->get_Version(&bstrVer);
		m_strVersion = OLE2T(bstrVer);
		m_strAppDataPath += m_strVersion;
		m_strAppDataPath += _T("\\");
	}
	CString strComponentURL = _T("");
	CString strActionXML = _T("");
	TCHAR szFile[MAX_PATH] = { 0 };
	::GetModuleFileName(NULL, szFile, MAX_PATH);
	CString strPath = CString(szFile);
	nPos = strPath.ReverseFind('\\');
	m_strPath = strPath.Left(nPos + 1);
	m_pTangramCore.CoCreateInstance(CComBSTR(L"tangram.tangram.1"));
	if (m_pTangramCore == NULL)
	{
		if (IsUserAdministrator() == FALSE)
		{
			::MessageBox(NULL,_T("Please restart Visual Studio with Administrator AUTHORITY!"),_T("Visual Studio"),MB_OK);
			return FALSE;
		}
		CString strXmlFile = m_strModulePath + _T("tangram.xml");
		if (::PathFileExists(strXmlFile))
		{
			CTangramXmlParse m_Parse;
			if (m_Parse.LoadFile(strXmlFile))
			{
				int nCount = 0;
				CTangramXmlParse* pParse = NULL;
				strComponentURL = m_Parse.attr(_T("ComponentURL"), _T(""));
				if (strComponentURL != _T(""))
				{
					pParse = m_Parse.GetChild(_T("InstallAction"));
					if (pParse)
						strActionXML = pParse->xml();
				}
				CTangramXmlParse* pXmlNode = m_Parse.GetChild(_T("COMLibs"));
				if (pXmlNode)
				{
					nCount = pXmlNode->GetCount();
					typedef int (CALLBACK* TANGRAMFUNCTION)(void);
					TANGRAMFUNCTION RegisterServerFunction = NULL;
					HINSTANCE handle = NULL;
					BOOL bRegisterServer = FALSE;
					for (int i = 0; i < nCount; i++)
					{
						pParse = pXmlNode->GetChild(i);
						if (pParse)
						{
							CString strDll = _T("");
							CString strFile = pParse->text();
							CString s = pParse->attr(_T("Target"), _T(""));
							nPos = s.Find(_T("\\"));
							s = strFile.Left(nPos);
							if (s.CompareNoCase(_T("Program Files")) == 0)
							{
								s = s.Mid(nPos + 1);
								if (::PathFileExists(m_strModulePath + strFile))
								{
									strDll = m_strProgramFilePath + s;
									::CopyFile(m_strModulePath + strFile, strDll, false);
								}
							}
							else
								strDll = m_strModulePath + strFile;
							if (::PathFileExists(strDll))
							{
								handle = LoadLibraryEx(strDll, NULL, LOAD_WITH_ALTERED_SEARCH_PATH);
								if (handle != NULL)
								{
									RegisterServerFunction = GetProcAddress(handle, "DllRegisterServer");
									if (RegisterServerFunction != NULL)
										bRegisterServer = (RegisterServerFunction() == S_OK);
									FreeLibrary(handle);
								}
							}
						}
					}
				}

				m_pTangramCore.CoCreateInstance(CComBSTR(L"tangram.tangram.1"));
				pXmlNode = m_Parse.GetChild(_T("CLRLibs"));
				if (pXmlNode)
				{
					CTangramXmlParse* pAssemblyBindingNode = NULL;
					CString strCfgFile = _T("");
					CString strVal = _T("");
					BOOL bModifyed = FALSE;
					CTangramXmlParse m_Parse2;
					nCount = pXmlNode->GetCount();
					for (int i = 0; i < nCount; i++)
					{
						pParse = pXmlNode->GetChild(i);
						if (pParse)
						{
							CString strLib = m_strModulePath + pParse->text();
							if (::PathFileExists(strLib))
							{
								CString strTarget = theApp.m_strPath + strLib;
								nPos = strTarget.ReverseFind('\\');
								if (nPos != -1)
								{
									CString strDir = strTarget.Left(nPos + 1);
									if (PathIsDirectory(strDir) == FALSE)
									{
										::SHCreateDirectory(NULL, strDir);
										nPos = strLib.ReverseFind('\\');
										CString strProbingPath = strLib.Left(nPos);
										if (pAssemblyBindingNode == NULL)
										{
											TCHAR szFile[MAX_PATH] = { 0 };
											::GetModuleFileName(NULL, szFile, MAX_PATH);
											strCfgFile = CString(szFile) + _T(".config");
											if (m_Parse2.LoadFile(strCfgFile))
												pAssemblyBindingNode = m_Parse2[_T("runtime")][_T("assemblyBinding")].GetChild(_T("probing"));
											if (pAssemblyBindingNode)
											{
												if (strVal == _T(""))
													strVal = pAssemblyBindingNode->attr(_T("privatePath"), _T(""));
												CString _strval = strVal;
												_strval.MakeLower();
												CString strKey = _T(";") + strProbingPath + _T(";");
												strKey.MakeLower();
												if (_strval.Find(strKey) == -1)
												{
													bModifyed = TRUE;
													nPos = strVal.Find(_T(";"));
													CString s = strVal.Left(nPos + 1);
													s += strProbingPath;
													s += _T(";");
													s += strVal.Mid(nPos);
													s.Replace(_T(";;"), _T(";"));
													strVal = s;
												}
											}
										}

									}
								}
								::CopyFile(strLib, strTarget, false);
							}
						}
					}
					if (bModifyed&&pAssemblyBindingNode)
					{
						pAssemblyBindingNode->put_attr(_T("privatePath"), strVal);
						m_Parse2.SaveFile(strCfgFile);
					}
				}
				pXmlNode = m_Parse.GetChild(_T("CommonFiles"));
				if (pXmlNode)
				{
					nCount = pXmlNode->GetCount();
					for (int i = 0; i < nCount; i++)
					{
						pParse = pXmlNode->GetChild(i);
						if (pParse)
						{
							CString strLib = m_strModulePath + pParse->text();
							if (::PathFileExists(strLib))
							{
								CString strTarget = m_strPath + strLib;
								nPos = strTarget.ReverseFind('\\');
								if (nPos != -1)
								{
									CString strDir = strTarget.Left(nPos + 1);
									if (PathIsDirectory(strDir) == FALSE)
										::SHCreateDirectory(NULL, strDir);
								}
								::CopyFile(strLib, strTarget, false);
							}
						}
					}
				}
			}
		}
	}
	if (m_pTangramCore)
	{
		m_pTangramCore->put_TangramVal(CComBSTR(L"EnableProcessFormTabKey"), CComVariant(0));
		m_pTangramCore->put_TangramExtender(CComBSTR(L"DTE"), m_pDTE);
		CComPtr<ITangramHelper> pHelper;
		pHelper.CoCreateInstance(CComBSTR(L"TangramVSIHelper.TangramHelper.1"));
		if (pHelper)
		{
			CComPtr<IDispatch> pPane;
			pHelper.p->get_OutputPane(&pPane);
			m_pTangramHelper = pHelper.p;
			m_pTangramHelper->AddRef();
			if (strComponentURL != _T("") && strActionXML != _T(""))
				m_pTangramCore->DownLoadFile(CComBSTR(strComponentURL), CComBSTR(L"TangramData\\TangramInit\\TangramInit.zip"), CComBSTR(strActionXML));
		}
	}
	return TRUE;
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

// This macro is used as default registry root when a NULL parameter is passed to VSDllRegisterServer
// or VSDllUnregisterServer. For sample code we set as default the experimental instance, but for production
// code you should change it to the standard VisualStudio instance that is LREGKEY_VISUALSTUDIOROOT.
#define DEFAULT_REGISTRY_ROOT LREGKEY_VISUALSTUDIOROOT

// Since this project defines an oleautomation interface, the typelib needs to be registered.
#define VSL_REGISTER_TYPE_LIB TRUE

// Must come after declaration of _AtlModule and DEFAULT_REGISTRY_ROOT
#ifndef VSL_REGISTER_TYPE_LIB
#define VSL_REGISTER_TYPE_LIB FALSE
#endif VSL_REGISTER_TYPE_LIB

#pragma warning(push) // Sometimes true, sometimes not.
#pragma warning(disable : 4702) // warning C4702: unreachable code

// Initializes ATL
extern "C"
BOOL WINAPI DllMain(HINSTANCE /*hInstance*/, DWORD dwReason, LPVOID lpReserved)
{
	VSL_STDMETHODTRY{

		return theApp.DllMain(dwReason, lpReserved);

	}VSL_STDMETHODCATCH()

		return FALSE;
}

// Used by COM to determine whether the DLL can be unloaded
STDAPI DllCanUnloadNow()
{
	VSL_STDMETHODTRY{

		return theApp.DllCanUnloadNow();

	}VSL_STDMETHODCATCH()

		return VSL_GET_STDMETHOD_HRESULT();
}

// Returns a class factory to create an object of the requested type
STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
	VSL_STDMETHODTRY{

		return theApp.GetClassObject(rclsid, riid, ppv);

	}VSL_STDMETHODCATCH()

		return VSL_GET_STDMETHOD_HRESULT();
}


STDMETHODIMP VSDllRegisterServerInternal(_In_opt_ wchar_t* strRegRoot, bool shouldRegister, bool isRanu)
{
	VSL_STDMETHODTRY{

		VsRegistryUtilities::SetRegRoot(NULL == strRegRoot ? DEFAULT_REGISTRY_ROOT : strRegRoot, isRanu);

	//Set ATL to register the typelib as RANU if requested by the caller.
	AtlSetPerUserRegistration(isRanu);

	if (shouldRegister)
	{
		return theApp.RegisterServer(VSL_REGISTER_TYPE_LIB);
	}
	else
	{
		HRESULT hr = theApp.UnregisterServer(VSL_REGISTER_TYPE_LIB);

		// If the type library was already unregistered, ignore the failure
		return (TYPE_E_REGISTRYACCESS == hr) ? S_OK : hr;
	}
	}VSL_STDMETHODCATCH()

		return VSL_GET_STDMETHOD_HRESULT();
}

// Registers COM objects normally and registers VS Packages to the specified VS registry hive under HKCU
STDAPI VSDllRegisterServerUser(_In_opt_ wchar_t* strRegRoot)
{
	return VSDllRegisterServerInternal(strRegRoot, true, true);
}

// Unregisters COM objects normally and unregisters VS Packages from the specified VS registry hive under HKCU
STDAPI VSDllUnregisterServerUser(__in_opt wchar_t* strRegRoot)
{
	return VSDllRegisterServerInternal(strRegRoot, false, true);
}

// Registers COM objects normally and registers VS Packages to the specified VS registry hive
STDAPI VSDllRegisterServer(__in_opt wchar_t* strRegRoot)
{
	return VSDllRegisterServerInternal(strRegRoot, true, false);
}

// Unregisters COM objects normally and unregisters VS Packages from the specified VS registry hive
STDAPI VSDllUnregisterServer(__in_opt wchar_t* strRegRoot)
{
	return VSDllRegisterServerInternal(strRegRoot, false, false);
}

// Registers COM objects normally and registers VS Packages to the default VS registry hive
STDAPI DllRegisterServer()
{
	return VSDllRegisterServer(NULL);
}

// Unregisters COM objects normally and unregisters VS Packages from the default VS registry hive
STDAPI DllUnregisterServer()
{
	return VSDllUnregisterServer(NULL);
}

#pragma warning(pop)

