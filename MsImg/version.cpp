// version.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "version.h"
#include "shellapi.h"
#include "Markup.h"
#include "RC4_.h"
#include "mscoree.h"
#include "../CommonFile/TangramXmlParse.h"
#include "metahost.h"
#include "fusion.h"

typedef HRESULT (__stdcall *TangramClrCreate)(LPCWSTR pTypeName, REFIID riid, void **ppObject);
typedef HRESULT (__stdcall *TangramCLRConnector)(LPCWSTR , LPCWSTR , DWORD , REFCLSID , REFIID , LPVOID FAR *);
typedef HRESULT (__stdcall *CreateAsmCache)(IAssemblyCache	**ppAsmCache, DWORD dwReserved);
typedef HRESULT (__stdcall *TangramLoadLibraryShim)(LPCWSTR szDllName, LPCWSTR szVersion, LPVOID pvReserved, HMODULE* phModDll);
typedef HRESULT (__stdcall *TangramCLRCreateInstance)(REFCLSID clsid, REFIID riid, /*iid_is(riid)*/ LPVOID *ppInterface);

TCHAR g_szOrgDll[MAX_PATH];
CString m_strCurVer = _T("");

bool _bFindNode(CMarkup* pXml, LPCTSTR lpName)
{
	bool bFound = false;


	while(pXml->FindChildElem())
	{
		pXml->IntoElem();

		if (pXml->GetTagName().compare(lpName) == 0)
		{
			bFound = true;
		}
		else
		{
			bFound = _bFindNode(pXml,lpName);			
		}
		
		if (bFound)
		{
			break;
		}
		pXml->OutOfElem();
	}
	return bFound;
}

bool bFindNode(CMarkup* pXml, LPCTSTR lpName)
{
	bool bFound = false;
	pXml->FindElem();
	if (pXml->GetTagName().compare(lpName) == 0)
	{
		bFound = true;
	}
	else
	{
		bFound = _bFindNode(pXml,lpName);
	}
	return bFound;
}

bool bLoadConfig(CMarkup* pXml)
{
	bool bRet = FALSE;

	TCHAR szFile[MAX_PATH] = {0};
	::GetModuleFileName(NULL,szFile,MAX_PATH);

	_tcscat(szFile,_T(".tangram"));

	//CTangramXmlParse m_CTangramXmlParse;
	//m_CTangramXmlParse.LoadFile(szFile);
	return pXml->Load(szFile);
}

CLoadDll::CLoadDll()
{
	m_bHaveExtend = false;
	m_bIsAuthenticated = FALSE;
}

BOOL CLoadDll::Init()
{
	m_bIsAuthenticated = true;//IsAuthenticated();

	BOOL bRet = FALSE;

	TCHAR szOrgFile[MAX_PATH] = {0};
	
	_tcscpy(szOrgFile,g_szOrgDll);

	if (bLoadConfig(&m_xmlMarkup))
	{
		bRet = TRUE;

		if (bFindNode(&m_xmlMarkup,_T("Configuration")))
		{
			m_bHaveExtend = true;

			MCD_STR strOrg = m_xmlMarkup.GetAttrib(_T("Original"));
			if (strOrg.compare(_T("")) != 0)
			{
				_tcscpy(szOrgFile,strOrg.c_str());
			}
			MCD_STR strVer = m_xmlMarkup.GetAttrib(_T("LyncplusVer"));
			if (strVer.compare(_T("")) != 0)
			{
				m_strCurVer = strVer.c_str();
				//_tcscpy(szOrgFile,strOrg.c_str());
			}
		}
	}

	_tcscpy(g_szOrgDll,szOrgFile);

	return bRet;
}

#include <shlobj.h>
//BOOL CLoadDll::LoadExtendLibrary()
//{
//	if (!m_xmlMarkup.IsWellFormed())
//	{
//		return FALSE;
//	}
//
//	if (m_bHaveExtend)
//	{
//		//HWND hWnd = ::FindWindowEx(NULL,NULL,_T("Shell_TrayWnd"),NULL);
//		//if(hWnd)
//		//{
//		//	::SetWindowText(hWnd,_T("LyncStart"));
//		//}
//		TCHAR szPath[MAX_PATH] = {0};
//		HRESULT hr = SHGetFolderPath(NULL,CSIDL_COMMON_APPDATA,NULL,0,szPath);
//		wchar_t path[_MAX_PATH*2];
//		GetTempPath(_countof(path),path);
//		CString strFile = CString(path);
//		strFile += _T("LyncPlusComponent\\Component.xml");
//		BOOL bExist=PathFileExists(strFile);
//		MCD_STR strProcess = _T("");
//		if(bExist)
//		{
//			CMarkup	_xmlMarkup;
//			if(_xmlMarkup.Load(strFile.GetBuffer()))
//			{
//				if (bFindNode(&_xmlMarkup,_T("ComponentSetup")))
//				{
//					strProcess = _xmlMarkup.GetAttrib(_T("Process"));
//				}
//			}
//		}
//		else
//		{
//			bExist=PathFileExists(g_szAutoUpdate.c_str());
//
//			strProcess = g_szAutoUpdate;
//			strFile = g_szAutoUpdateCmd.c_str();
//		}
//
//		//STARTUPINFO startupInfo;
//		//wchar_t cmdLine[2048];
//		//memset(&startupInfo,0,sizeof(startupInfo));
//		//startupInfo.cb=sizeof(startupInfo);
//		//PROCESS_INFORMATION processInfo;
//		//memset(&processInfo,0,sizeof(processInfo));
//		//swprintf_s(cmdLine,L"%s %s",strProcess.c_str(), strFile);
//		////swprintf_s(cmdLine,L"msiexec.exe /i \"%s\" %s",m_strAppDataPath,_T("/qb"));tangramManager.exe
//		//DWORD code;
//		//if (!CreateProcess(NULL,cmdLine,NULL,NULL,TRUE,0,NULL,NULL,&startupInfo,&processInfo))
//		//{
//		//}
//		//else
//		//{
//		//	// wait for the installer to finish
//		//	WaitForSingleObject(processInfo.hProcess,INFINITE);
//		//	//DeleteFile(strFile);
//		//	GetExitCodeProcess(processInfo.hProcess,&code);
//		//}
//
//
//
//		hr = SHGetFolderPath(NULL,CSIDL_PROGRAM_FILES,NULL,0,szPath);
//		CString strPath = szPath;
//		strPath += _T("\\Tangram\\Tangram.Dll");
//		HMODULE hModule = LoadLibrary(strPath);
//
//		m_vModules.push_back(hModule);
//		//if (!m_bIsAuthenticated)
//		//{
//		//	::MessageBox(NULL,_T("您目前使用的UC产品为评估版本\r\n请您向“北京市思博智创软件开发公司”咨询并获取正式版本。"),
//		//		_T("评估版本"),MB_ICONWARNING);
//		//}
//		if(bFindNode(&m_xmlMarkup,_T("LoadLibrary")))
//		{
//			while(m_xmlMarkup.FindChildElem())
//			{
//				m_xmlMarkup.IntoElem();
//				MCD_STR strExtendDll = m_xmlMarkup.GetData();
//
//				HMODULE hModule = LoadLibrary(strExtendDll.c_str());
//
//				m_vModules.push_back(hModule);
//				m_xmlMarkup.OutOfElem();
//			}
//		}
//		m_xmlMarkup.OutOfElem();
//	}
//	return true;
//}
//
BOOL CLoadDll::LoadExtendLibrary()
{
	if (!m_xmlMarkup.IsWellFormed())
	{
		return FALSE;
	}

	if (m_bHaveExtend)
	{
		TCHAR cPath[MAX_PATH] = {0};
		::GetModuleFileName(NULL,cPath,MAX_PATH);
		CString strPath = cPath;
		int nPos = strPath.ReverseFind('\\');
		CString strName = strPath.Mid(nPos+1);
		if(strName.CompareNoCase(_T("lync.exe")))
			return false;
		wchar_t buf[_MAX_PATH];
		CString strLyncPath = _T("");
		strPath = _T("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\App Paths\\");
		strPath += strName;
		swprintf_s(buf,strPath);
		HKEY hKey=NULL;
		if (RegCreateKeyEx(HKEY_LOCAL_MACHINE,buf,0,NULL,REG_OPTION_NON_VOLATILE,KEY_READ|KEY_QUERY_VALUE|KEY_WOW64_64KEY,NULL,&hKey,NULL)==ERROR_SUCCESS)
		{
			wchar_t path[_MAX_PATH];
			DWORD size=_MAX_PATH;
			if (RegQueryValueEx(hKey,L"Path",0,NULL,(BYTE*)&path,&size)==ERROR_SUCCESS)
			{
				strLyncPath = path;
			}
			RegCloseKey(hKey);
		}


		TCHAR szPath[MAX_PATH] = {0};
		HRESULT hr = SHGetFolderPath(NULL,CSIDL_COMMON_APPDATA,NULL,0,szPath);
		wchar_t path[_MAX_PATH*2];
		GetTempPath(_countof(path),path);
		CString strFile = CString(path);
		strFile += _T("LyncPlusUpdate\\Lyncplus.xml");
		BOOL bExist=PathFileExists(strFile);
		MCD_STR strMsi = _T("");
		if(bExist)
		{
			CMarkup	_xmlMarkup;
			if(_xmlMarkup.Load(strFile.GetBuffer()))
			{
				if (bFindNode(&_xmlMarkup,_T("AutoUpdate")))
				{
					strMsi = _xmlMarkup.GetAttrib(_T("Msi"));
					MCD_STR strVer = _xmlMarkup.GetAttrib(_T("ver"));
					CString _strVer = strVer.c_str();
					if(_strVer!=m_strCurVer)
					{
						CString _strFile = CString(path);
						_strFile += _T("LyncPlusUpdate\\");
						_strFile += strMsi.c_str();
						bExist=PathFileExists(_strFile); 
						if(bExist)
						{
							STARTUPINFO startupInfo;
							memset(&startupInfo,0,sizeof(startupInfo));
							startupInfo.cb=sizeof(startupInfo);
							PROCESS_INFORMATION processInfo;
							memset(&processInfo,0,sizeof(processInfo));
							wchar_t cmdLine[2048];
							//swprintf_s(cmdLine,L"msiexec.exe /i \"%s\"  %s",_strFile, _T("/qb"));
							swprintf_s(cmdLine,L"msiexec.exe /i \"%s\" TARGETDIR=\"%s\" %s",_strFile,strLyncPath, _T("/qb"));
							//swprintf_s(cmdLine,L"msiexec.exe /i \"%s\"  REINSTALLMODE=\"amus\"  /norestart  TARGETDIR=\"%s\" %s",_strFile,strLyncPath, _T("/qb"));
							//swprintf_s(cmdLine,L"msiexec.exe /i \"%s\" %s",_strFile,_T("/qn"));
							DWORD code;

							if (!CreateProcess(NULL,cmdLine,NULL,NULL,TRUE,0,NULL,NULL,&startupInfo,&processInfo))
							{
								//DeleteFile(_strFile);
							}
							else
							{
								// wait for the installer to finish
								WaitForSingleObject(processInfo.hProcess,INFINITE);
								DeleteFile(_strFile);
								GetExitCodeProcess(processInfo.hProcess,&code);
							}
						}
					}
				}
			}
		}

		//STARTUPINFO startupInfo;
		//wchar_t cmdLine[2048];
		//memset(&startupInfo,0,sizeof(startupInfo));
		//startupInfo.cb=sizeof(startupInfo);
		//PROCESS_INFORMATION processInfo;
		//memset(&processInfo,0,sizeof(processInfo));
		//swprintf_s(cmdLine,L"%s %s",strProcess.c_str(), strFile);
		////swprintf_s(cmdLine,L"msiexec.exe /i \"%s\" %s",m_strAppDataPath,_T("/qb"));tangramManager.exe
		//DWORD code;
		//if (!CreateProcess(NULL,cmdLine,NULL,NULL,TRUE,0,NULL,NULL,&startupInfo,&processInfo))
		//{
		//}
		//else
		//{
		//	// wait for the installer to finish
		//	WaitForSingleObject(processInfo.hProcess,INFINITE);
		//	//DeleteFile(strFile);
		//	GetExitCodeProcess(processInfo.hProcess,&code);
		//}


		hr = SHGetFolderPath(NULL,CSIDL_PROGRAM_FILES,NULL,0,szPath);
		strPath = szPath;
		strPath += _T("\\Tangram\\Tangram.Dll");
		HMODULE hModule = LoadLibrary(strPath);

		m_vModules.push_back(hModule);
		if(bFindNode(&m_xmlMarkup,_T("LoadLibrary")))
		{
			while(m_xmlMarkup.FindChildElem())
			{
				m_xmlMarkup.IntoElem();
				MCD_STR strExtendDll = m_xmlMarkup.GetData();
				HMODULE hModule = LoadLibrary(strExtendDll.c_str());
				m_vModules.push_back(hModule);
				m_xmlMarkup.OutOfElem();
			}
		}
		m_xmlMarkup.OutOfElem();
		return true;
	}
	return true;
}

BOOL CLoadDll::FreeExtendLibrary()
{
	CMoudles::iterator it;
	for(it = m_vModules.begin(); it != m_vModules.end(); it++)
	{
		::FreeLibrary(*it);
	}
	m_vModules.clear();
	return TRUE;
}


extern TCHAR g_szOrgDll[MAX_PATH];
extern CLoadDll g_LoadDll;


CString GetAuthenticateData(CMarkup* pXml, LPCTSTR strKey,LPCTSTR strDef)
{
	CString strRet = strDef;

	pXml->ResetPos();

	if (bFindNode(pXml,_T("Authenticate")))
	{
		if (bFindNode(pXml,strKey))
		{
			strRet = pXml->GetData().c_str();
		}
	}
	return strRet;
}

CString GetProcessName()
{
	TCHAR szFilename[MAX_PATH] = {0};
	TCHAR szDriver[MAX_PATH] = {0};
	TCHAR szDir[MAX_PATH] = {0};
	TCHAR szFile[MAX_PATH] = {0};
	TCHAR szExt[MAX_PATH] = {0};

	DWORD dwLen = GetModuleFileName(NULL,szFilename,MAX_PATH);

	_tsplitpath_s(szFilename,szDriver,szDir,szFile,szExt);

	return szFile;
	//return ((_tcsicmp(szFile,_T("communicator.exe")) == 0) || (_tcsicmp(szFile,_T("msnmsgr.exe")) == 0));
}

bool bCheck(CString strName, CString strKey, CString strLicense)
{	
	bool bRet = false;
	CRC4_ rc;
	rc.put_Key(_T("a4b3c0d6e8f1a1b9c8d3e1f0a2b8c1d4e1f6a"));

	TCHAR szExe[MAX_PATH] = {0};
	TCHAR szCompany[MAX_PATH] = {0};
	TCHAR szExpriseDate[MAX_PATH] = {0};
	CString strDe = rc.Crypt2(strLicense);

	_stscanf(strDe.GetBuffer(),_T("%s %s %s"),szExe,szCompany,szExpriseDate);

	CString strExe = GetProcessName();
	if (strExe.CompareNoCase(szExe) == 0)
	{
		if (strName.CompareNoCase(szCompany) == 0)
		{
			SYSTEMTIME ti = {0};

			::GetSystemTime(&ti);
			CString strSysTime;
			strSysTime.Format(_T("%04d%02d%02d"),ti.wYear,ti.wMonth,ti.wDay);

			CString strTime(szExpriseDate);

			if (strSysTime<strTime)
			{
				bRet = true;
			}
		}
	}
	return bRet;
}

extern "C" __declspec(dllexport) BOOL __stdcall IsAuthenticated()
{
	BOOL bRet = FALSE;

	CString strProductKey;
	CString strProductName;
	CString strLicenseKey;

	CMarkup xml;
	if (bLoadConfig(&xml))
	{
		strProductKey = GetAuthenticateData(&xml,_T("ProductKey"),_T(""));
		strProductName = GetAuthenticateData(&xml,_T("ProductName"),_T(""));
		strLicenseKey = GetAuthenticateData(&xml,_T("LicenseKey"),_T(""));
	}

	if (bCheck(strProductName,strProductKey,strLicenseKey))
	{
		bRet = TRUE;
	}
	return bRet;
}
