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
* OUTLINED IN THE TANGRAM LICENSE AGREEMENT.TANGRAM TEAM 
* GRANTS TO YOU (ONE SOFTWARE DEVELOPER) THE LIMITED RIGHT TO USE 
* THIS SOFTWARE ON A SINGLE COMPUTER.
*
* CONTACT INFORMATION:
* mailto:sunhuizlz@yeah.net 
*
********************************************************************************/
// TangramHook.cpp : Defines the exported functions for the DLL application.
//


#include "stdafx.h"
#include "dllmain.h"
#include "TangramHook.h"
#include "resource.h"
#pragma comment(lib, "oleacc.lib") 
#include <windows.h>
#include "tchar.h"
#include "mhook-lib/mhook.h"

typedef HRESULT (STDAPICALLTYPE * PCoCreateInstance)(
	REFCLSID rclsid, LPUNKNOWN pUnkOuter, DWORD dwClsContext, REFIID riid, LPVOID FAR* ppv);
PCoCreateInstance ORI_CoCreateInstance = NULL;

HRESULT WINAPI NEW_CoCreateInstance(REFCLSID rclsid, LPUNKNOWN pUnkOuter, DWORD dwClsContext, REFIID riid, LPVOID FAR* ppv)
{
	//if(!theApp.m_bNeedExtension)
	//{
	//	return ORI_CoCreateInstance(rclsid,pUnkOuter,dwClsContext,riid,ppv);  
	//}
	//if(theApp.m_bNeedExtension&&theApp.m_pAppExtensionProxy==NULL&&theApp.m_strInitExtensionObjID != _T(""))
	//{
	//	ITangramExtensionProxy* pTangramExtensionProxy=NULL;
	//	CLSID clsid;
	//	HRESULT hr = ::CLSIDFromProgID(CComBSTR(theApp.m_strInitExtensionObjID),&clsid);
	//	if(clsid==CLSID_TangramManager)
	//	{
	//		theApp.m_pAppExtensionProxy = (CAppExtensionProxy*)&_AtlModule;
	//	}
	//	else
	//	{
	//		HRESULT hr = ORI_CoCreateInstance(clsid,NULL,CLSCTX_INPROC_SERVER,__uuidof(ITangramExtensionProxy),(LPVOID *)&pTangramExtensionProxy);
	//		if(hr==S_OK)
	//		{
	//			pTangramExtensionProxy->GetAppProxy((LONGLONG*)&theApp.m_pAppExtensionProxy);
	//		}
	//	}
	//}
	HRESULT hr = ORI_CoCreateInstance(rclsid,pUnkOuter,dwClsContext,riid,ppv);  
	//if(theApp.m_pAppExtensionProxy)
	//{
	//	if(rclsid==UCCAPILib::CLSID_UccPlatform)
	//	{
	//		if(ORI_CreateEndpoint == NULL)
	//		{
	//			UCCAPILib::IUccPlatform* pTS = NULL;
	//			IUnknown* pUnk = (IUnknown*)*ppv;
	//			pUnk->QueryInterface(UCCAPILib::IID_IUccPlatform,(void**)&(pTS));
	//			PVOID pVmt = *(PVOID*)pTS;
	//			ORI_CreateEndpoint =(HRESULT (__stdcall *)(UCCAPILib::IUccPlatform *,UCCAPILib::UCC_ENDPOINT_TYPE eType, UCCAPILib::IUccUri *pUri,BSTR bstrEndpointId,UCCAPILib::IUccContext * pContext,UCCAPILib::IUccEndpoint** ppEndpoint))((FARPROC*)pVmt)[4];
	//			Mhook_SetHook((PVOID*)&ORI_CreateEndpoint, NEW_CreateEndpoint);
	//			pTS->Release();
	//		}
	//	}
	//	theApp.m_pAppExtensionProxy->COMObjCreated(rclsid,*ppv);
	//}
	return hr;
}

//HRSRC (WINAPI *ORI_FindResource)(HMODULE hModule, LPCTSTR lpName, LPCTSTR lpType);
//HRSRC WINAPI HOOK_FindResource(HMODULE hModule, LPCTSTR lpName, LPCTSTR lpType)
//{
//	if (((long)lpType)==0x0105 && g_currentResId>0xffff)
//	{
//		map<ULONG,CString>::iterator it = g_IDLookup.find(g_currentResId);
//		if(it!=g_IDLookup.end())
//		{
//			CString strKey = it->second;
//			int nPos = strKey.ReverseFind(',');
//			if(nPos!=-1)
//			{
//				CString strFile = _T("");
//				strFile += theApp.m_strTempPath;
//				strFile +=  + _T("LyncPicture\\");
//				strFile += strKey.Mid(nPos+1);
//				if(::PathFileExists(strFile))
//				{
//					if(g_ResLookup.find((ULONG)g_currentResId) == g_ResLookup.end())
//					{
//						HRSRC hSrc = (HRSRC)(g_ResLookup.size()+1);
//						EnterCriticalSection(&theApp.m_csDataThreadSection);
//						g_ResLookup[(ULONG)g_currentResId] = hSrc;
//						LeaveCriticalSection(&theApp.m_csDataThreadSection);
//						return hSrc;
//					}
//					else
//					{
//						return g_ResLookup[(ULONG)g_currentResId];
//					}
//				}
//			}
//		}
//	}
//
//
//	if (theApp.m_hOfficeRes==NULL&&((long)lpType)==0x0105)
//	{
//		theApp.m_hOfficeRes = hModule;
//	}
//	//	TCHAR cPath[MAX_PATH] = {0};
//	//	::GetModuleFileName(hModule,cPath,MAX_PATH);
//	
//	//新加入的代码
//	if(GetModuleHandle(_T("mso.dll")) && MSOGetResStringClass::_MSOGetResString == 0)
//	{
//		typedef		int (__thiscall MSOGetResStringClass::* FpMSOGetResString)(int,WCHAR *,int);
//		union
//		{
//			FpMSOGetResString addr;
//			PBYTE proc;
//		}conv;
//
//		conv.proc = GetMSOResStringFuncAddrByCode();
//
//		MSOGetResStringClass::_MSOGetResString = conv.addr;
//
//		conv.addr = &MSOGetResStringClass::HOOK_MSOGetResString;
//
//		Mhook_SetHook((PVOID*)&MSOGetResStringClass::_MSOGetResString,conv.proc);
//#ifdef _WIN64
//		ORI_DrawBitmapWithResId = (char (__stdcall *)(PVOID,int,int,int,int,int,int *,unsigned char,char))(9+(char*)GetProcAddress(GetModuleHandle(_T("mso.dll")),(LPCSTR)7559));
//#else
//		ORI_DrawBitmapWithResId = (char (__stdcall *)(PVOID,int,int,int,int,int,int *,unsigned char,char))GetProcAddress(GetModuleHandle(_T("mso.dll")),(LPCSTR)3608);
//#endif
//		int success =  Mhook_SetHook((PVOID*)&ORI_DrawBitmapWithResId,HOOK_DrawBitmapWithResId);
//
//	}
//
//
//	if(!theApp.m_bNeedExtension)
//		return ORI_FindResource(hModule,lpName,lpType);
//	HRSRC hr = NULL;
//	if(theApp.m_pAppExtensionProxy&&theApp.m_pAppExtensionProxy->m_hApp&&(hModule==theApp.m_pAppExtensionProxy->m_hApp||hModule==theApp.m_hOfficeRes))
//	{
//		if (HIWORD(lpType)&&_tcscmp(lpType, _T("UIFILE")) == 0)
//		{
//		}
//		hr = ORI_FindResource(theApp.m_pAppExtensionProxy->m_hAppRes,lpName,lpType);
//		if(hr==NULL)
//		{
//			hr = ORI_FindResource(hModule,lpName,lpType);
//		}
//	}
//	else
//		hr = ORI_FindResource(hModule,lpName,lpType);
//	return hr;
//}
//
//DWORD (WINAPI *ORI_SizeofResource)(HMODULE hModule, HRSRC hResInfo);
//DWORD WINAPI HOOK_SizeofResource(HMODULE hModule, HRSRC hResInfo)
//{
//	map<ULONG,HRSRC>::iterator it;
//	for( it = g_ResLookup.begin() ; it != g_ResLookup.end() ; it ++)
//	{
//		if(hResInfo == (*it).second)
//		{
//			ULONG ID = (*it).first;
//			CString strPath = theApp.m_strTempPath + _T("LyncPicture\\");
//			CString strKey = g_IDLookup[ID];
//			int nPos = strKey.ReverseFind(',');
//			if(nPos!=-1)
//			{
//				strKey = strKey.Mid(nPos+1);
//			}
//			strPath+=strKey;
//			if(::PathFileExists(strPath))
//			{
//				struct _stat info;
//				_wstat(strPath, &info);
//				int size = info.st_size;
//				return size;
//			}
//		}
//	}
//
//	if(!theApp.m_bNeedExtension)
//		return ORI_SizeofResource(hModule,hResInfo);
//	DWORD dwRet = 0;
//	if(theApp.m_pAppExtensionProxy&&theApp.m_pAppExtensionProxy->m_hApp&&(hModule==theApp.m_pAppExtensionProxy->m_hApp||hModule==theApp.m_hOfficeRes))
//	{
//		dwRet = ORI_SizeofResource(theApp.m_pAppExtensionProxy->m_hAppRes,hResInfo);
//		if(dwRet==0)
//			dwRet = ORI_SizeofResource(hModule,hResInfo);
//	}
//	else
//		dwRet = ORI_SizeofResource(hModule,hResInfo);
//	return dwRet;
//}
// 
//HGLOBAL (WINAPI *ORI_LoadResource)(HMODULE hModule, HRSRC hResInfo);
//HGLOBAL WINAPI HOOK_LoadResource(HMODULE hModule,HRSRC hResInfo)
//{
//	map<ULONG,HRSRC>::iterator it;
//	for( it = g_ResLookup.begin() ; it != g_ResLookup.end() ; it ++)
//	{
//		if(hResInfo == (*it).second)
//		{
//			ULONG ID = (*it).first;
//
//			if(g_MemLookup.find((HGLOBAL)ID) == g_MemLookup.end())
//			{
//				EnterCriticalSection(&theApp.m_csDataThreadSection);
//				CString strKey = g_IDLookup[ID];
//				CString strPath = theApp.m_strTempPath + _T("LyncPicture\\");
//				int nPos = strKey.ReverseFind(',');
//				if(nPos!=-1)
//				{
//					strKey = strKey.Mid(nPos+1);
//				}
//				strPath += strKey;
//				if(::PathFileExists(strPath))
//				{
//					g_MemLookup[(HGLOBAL)ID] = hResInfo;
//				}
//				LeaveCriticalSection(&theApp.m_csDataThreadSection);
//			}
//
//			{
//				HRSRC src = ORI_FindResource(theApp.m_hOfficeRes,(LPCTSTR)1230,(LPCTSTR)0x105);
//				return ORI_LoadResource(theApp.m_hOfficeRes,src);
//			}
/////			return (HGLOBAL)ID;
//		}
//	}
//
//
//	if(!theApp.m_bNeedExtension)
//		return ORI_LoadResource(hModule,hResInfo);
//
//	HGLOBAL hr = NULL;
//	if(theApp.m_pAppExtensionProxy&&theApp.m_pAppExtensionProxy->m_hApp&&(hModule==theApp.m_pAppExtensionProxy->m_hApp||hModule==theApp.m_hOfficeRes))
//	{
//		hr = ORI_LoadResource(theApp.m_pAppExtensionProxy->m_hAppRes,hResInfo);
//		if(hr == NULL)
//			hr = ORI_LoadResource(hModule,hResInfo);
//	}
//	else
//		hr = ORI_LoadResource(hModule,hResInfo);
//	return hr;
//}
//
//LPVOID (WINAPI *ORI_LockResource)(HGLOBAL hResData);
//
//LPVOID WINAPI HOOK_LockResource(HGLOBAL hResData)
//{
//	if(g_MemLookup.find(hResData) != g_MemLookup.end())
//	{
//		ULONG ID = (ULONG)hResData;
//		CString strKey = g_IDLookup[ID];
//		CString strPath = theApp.m_strTempPath + _T("LyncPicture\\");
//		int nPos = strKey.ReverseFind(',');
//		if(nPos!=-1)
//			strKey = strKey.Mid(nPos+1);
//		strPath += strKey;
//
//		strPath.MakeLower();
//		if(g_DataLookup.find(strPath) == g_DataLookup.end())
//		{
//			struct _stat info;
//			_wstat(strPath, &info);
//			int size = info.st_size;
//			FILE* fp = _tfopen(strPath,_T("rb"));
//			if(fp)
//			{
//				BYTE* buffer = (BYTE*)malloc(size);
//				fread(buffer,1,size,fp);
//				fclose(fp);
//
//				EnterCriticalSection(&theApp.m_csDataThreadSection);
//				g_DataLookup[strPath] = buffer;
//				LeaveCriticalSection(&theApp.m_csDataThreadSection);
//				return buffer;
//			}
//		}
//
//		return g_DataLookup[strPath];
//
//
//	}
//	return ORI_LockResource(hResData);
//}


FARPROC (WINAPI *ORI_GetProcAddress)(HMODULE hModule,LPCSTR lpProcName);
FARPROC WINAPI HOOK_GetProcAddress (HMODULE hModule,LPCSTR lpProcName)
{
	FARPROC pRet = ORI_GetProcAddress(hModule,lpProcName);
	if((int)lpProcName >= 40000)
	{
		//if(strcmp(lpProcName,"HttpOpenRequest") == 0 && ORI_HttpOpenRequest == NULL)
		//{
		//	ORI_HttpOpenRequest =(HINTERNET (__cdecl *)(HINTERNET,LPCWSTR,LPCWSTR,LPCWSTR,LPCWSTR,LPCWSTR *,DWORD,DWORD_PTR)) pRet;
		//	Mhook_SetHook((PVOID*)&ORI_HttpOpenRequest, HOOK_HttpOpenRequest);
		//}
	}
	return pRet;
}

HRESULT (WINAPI *ORI_CreateInstance)(IClassFactory* pThis,IUnknown *pUnkOuter,REFIID riid,void **ppvObject) = NULL;

//HRESULT WINAPI HOOK_CreateInstance(IClassFactory* pThis,IUnknown *pUnkOuter,REFIID riid,void **ppvObject)
//{
//	HRESULT uResult = ORI_CreateInstance(pThis,pUnkOuter,riid,ppvObject);
//	return uResult;
//}
HRESULT WINAPI HOOK_CreateInstance(IClassFactory* pThis,IUnknown *pUnkOuter,REFIID riid,void **ppvObject)
{
	::MessageBox(NULL, _T("1"), _T("word"), MB_OK);
	HRESULT hr = S_FALSE;
	CString strID = _T("");
	if(::IsWindow(theApp.m_RemoteObjHelperWnd.m_hWnd)==false)
	{
		HWND hWnd = ::FindWindowEx(NULL,NULL,_T("Tangram Lync Window Class"),NULL);
		//if(hWnd==0)
		//{
		//	return 	lpCreateInstance(This,pUnkOuter,riid,ppvObject);
		//}
		theApp.m_RemoteObjHelperWnd.Attach(hWnd);
	}
	if(::IsWindow(theApp.m_RemoteObjHelperWnd.m_hWnd))
	{
		theApp.m_RemoteObjHelperWnd.GetWindowText(strID);
		theApp.m_RemoteObjHelperWnd.SetWindowText(_T(""));
	}
	strID.Replace(_T("/"),_T(""));
	int nPos = strID.Find(_T(":"));
	CString strAppID = _T("");
	if(nPos!=-1)
	{
		strAppID = strID.Left(nPos);
		strID = strID.Mid(nPos+1);
	}
	if (strID!=_T("")&&strID.CompareNoCase(_T("shell.explorer.2")))
	{
		if(strID.CompareNoCase(_T("TangramRemoteConnector"))==0)
		{
		//	CComObject<CTangramRemoteConnector>* pObj = new CComObject<CTangramRemoteConnector>;
		//	theApp.m_mapRemoteTangramRemoteConnector[strAppID] = pObj;
		//	pObj->m_strKey = strAppID;
		//	*ppvObject = (IDispatch*)pObj;
		//	pObj->AddRef();
		//	if(theApp.m_pAppExtensionProxy)
		//	{
		//		theApp.m_pAppExtensionProxy->RemoteObjCreated(strAppID,strID, (IDispatch*)pObj);
		//	}
		//	return S_OK;
		}
		else
		{
			CComPtr<IDispatch> pDisp;
			hr = pDisp.CoCreateInstance(CComBSTR(strID));
			*ppvObject = pDisp.p;
			//if(theApp.m_pAppExtensionProxy)
			//{
			//	theApp.m_pAppExtensionProxy->RemoteObjCreated(strAppID,strID, pDisp.p);
			//}
			pDisp.p->AddRef();
		}
	}
	else
	{
		hr = ORI_CreateInstance(pThis,pUnkOuter,riid,ppvObject);
	}	
	hr = ORI_CreateInstance(pThis, pUnkOuter, riid, ppvObject);
	return hr;
}

HRESULT (WINAPI *ORI_CoRegisterClassObject)(REFCLSID rclsid,
										 IUnknown * pUnk,
										 DWORD dwClsContext,
										 DWORD flags,
										 LPDWORD lpdwRegister);
HRESULT WINAPI NEW_CoRegisterClassObject(REFCLSID rclsid,
										 IUnknown * pUnk,
										 DWORD dwClsContext,
										 DWORD flags,
										 LPDWORD lpdwRegister)
{
	::MessageBox(NULL, _T(""), _T("word"), MB_OK);
	HRESULT hr = ORI_CoRegisterClassObject(rclsid,pUnk,dwClsContext,flags,lpdwRegister);

	if(rclsid==theApp.m_RemoteObjClsid&&ORI_CreateInstance==NULL)
	{
		IClassFactory* pClassFactory = NULL;

		if (pUnk->QueryInterface(IID_IClassFactory,(void**)&pClassFactory) == S_OK)
		{
			PVOID pVmt = *(PVOID*)pClassFactory;
			ORI_CreateInstance =(HRESULT (__stdcall *)(IClassFactory *,IUnknown *,REFIID ,void **))((FARPROC*)pVmt)[3];
			Mhook_SetHook((PVOID*)&ORI_CreateInstance, HOOK_CreateInstance);
			//lpCreateInstance = HookVmt(pClassFactory,3,NEW_CreateInstance);
			pClassFactory->Release();
		}				
		//g_pClsidProxyObject[g_iAppIndex] = rclsid;
		//g_pdwAppID[g_iAppIndex] = ::GetCurrentProcessId();
		//g_iAppIndex++;
	}
	return hr;
}

//HRESULT (WINAPI *ORI_VariantCopy)(VARIANTARG * pvargDest,const VARIANTARG * pvargSrc) = 0;
//
//HRESULT WINAPI HOOK_VariantCopy(VARIANTARG * pvargDest,const VARIANTARG * pvargSrc)
//{
//	if(theApp.m_nLyncState==ucClientStateSignedIn&&pvargSrc->vt == VT_BSTR&&theApp.m_pAppExtensionProxy->m_bInOfflineMsgState==true)
//	{
//		if(CString(pvargSrc->bstrVal).Find(L"<span style") == 0)
//		{
//			theApp.m_pAppExtensionProxy->m_bInOfflineMsgState = false;
//			if(g_bInMsgSending)
//			{
//				g_bInMsgSending = false;
//				CString strOnSendMsg = CString(pvargSrc->bstrVal);
//				theApp.m_strCurrentHtmlContent = strOnSendMsg;
//				theApp.m_pAppExtensionProxy->OnHtmlMessage(_T(""),theApp.m_strCurrentHtmlContent);
//			}
//		}
//	}
//	return ORI_VariantCopy(pvargDest,pvargSrc);
//}

//void Init2013_0()
//{
//	ORI_VariantCopy = VariantCopy;
//	Mhook_SetHook((PVOID*)&ORI_VariantCopy,HOOK_VariantCopy);
//
//	typedef		char *(__thiscall Lync2013HookRTFMsgOnSendClass::* FpOnSend)(WCHAR*);
//	union
//	{
//		FpOnSend addr;
//		PBYTE proc;
//	}conv;
//
//	conv.proc = (PBYTE)	GetLync2013RTFMsgOnSendFuncAddrByCode();
//
//	Lync2013HookRTFMsgOnSendClass::RTFMsgOnSend = conv.addr;
//
//	conv.addr = &Lync2013HookRTFMsgOnSendClass::HookRTFMsgOnSend;
//
//	Mhook_SetHook((PVOID*)&Lync2013HookRTFMsgOnSendClass::RTFMsgOnSend,conv.proc);
//}
//
//void UnInit2013_0()
//{
//	Mhook_Unhook((PVOID*)&ORI_VariantCopy);
//
//	Mhook_Unhook((PVOID*)&Lync2013HookRTFMsgOnSendClass::RTFMsgOnSend);
//}

//void Init2013()
//{
//	/////////////////////////////////
//
//	PBYTE uBase = (PBYTE)GetModuleHandle(0);
//
//	//利用表情加入图片支持相关改动
//
//	//对一个跳转指令打补丁，禁止跳转，实际作用为扩展表情转义符结构体里所能描述的表情ID号上限(0x70->0xffffffff)
//	//uNopAddr = uBase + 0xE5994;//15.0.4420.1017 
//	//ULONG uNopAddr = uBase + 0xEAEDE;//工位电脑 
//	//ULONG uNopAddr = uBase + 0xED88F;//15.0.4605.1003		
//	PBYTE uNopAddr = uBase + (__int64)theApp.m_uNopAddr;
//
//	DWORD dwOld;
//	VirtualProtect((LPVOID)uNopAddr,32, PAGE_EXECUTE_READWRITE,&dwOld);
//	*(UCHAR*)uNopAddr++ = 0x90;
//	*(UCHAR*)uNopAddr++ = 0x90;
//	*(UCHAR*)uNopAddr++ = 0x90;
//	*(UCHAR*)uNopAddr++ = 0x90;
//	*(UCHAR*)uNopAddr++ = 0x90;
//	*(UCHAR*)uNopAddr++ = 0x90;
//
//	//插入新表情：
//	//theApp.m_nNewFace =  = uBase + 0x1AD397;//15.0.4420.1017 				
//	//theApp.m_nNewFace =  = uBase + 0x1BEACA;//工位电脑	
//	//theApp.m_nNewFace =  = uBase + 0x1CDBE9;//15.0.4605.1003 
//	//theApp.m_nNewFace = uBase + 0x162c88; 
//	theApp.m_nNewFace = uBase + (__int64)theApp.m_nNewFace;//15.0.4623.1000:
//
//
//	//在IM文字消息里面解析表情信息：
//	//theApp.m_nFindFace =  0x5572AC + uBase;//15.0.4420.1017 
//	//theApp.m_nFindFace =  0x5B08C8 + uBase;//工位电脑	
//	//theApp.m_nFindFace =  0x5CC3E0 + uBase;//15.0.4605.1003 
//	theApp.m_nFindFace = (__int64)theApp.m_nFindFace + uBase;
//
//	//以下HOOK作用见HOOK函数实现处的注释
//	//ORI_offset_7efff = 0x7EFFF + uBase;//15.0.4420.1017
//	//ORI_offset_7efff = 0x810D8 + uBase;//工位电脑 
//	//ORI_offset_7efff = 0x81FE4 + uBase;//15.0.4605.1003 
//	if(theApp.m_nORI_offset_7efff)
//	{
//
//	
//		typedef		char *(__thiscall LyncHookWithCustomPicClass_7efff::* Fp7efff)(void);
//		union
//		{
//			Fp7efff addr;
//			PBYTE proc;
//		}conv;
//
//		conv.proc = (PBYTE)((__int64)theApp.m_nORI_offset_7efff + uBase);
//
//		LyncHookWithCustomPicClass_7efff::ORI_offset_7efff = conv.addr;//15.0.4623.1000
//
//		conv.addr = &LyncHookWithCustomPicClass_7efff::HOOK_offset_7efff;
//
//		Mhook_SetHook((PVOID*)&LyncHookWithCustomPicClass_7efff::ORI_offset_7efff,conv.proc);
//	}
//
////#ifdef _WIN64
////        ORI_MSOSetTitle = (int (__cdecl *)(HWND,WCHAR *))GetProcAddress(GetModuleHandle(_T("mso.dll")),(LPCSTR)6084);
////        Mhook_SetHook((PVOID*)&ORI_MSOSetTitle,HOOK_MSOSetTitle);
////#else
////        ORI_MSOSetTitle = (int (__cdecl *)(HWND,WCHAR *))GetProcAddress(GetModuleHandle(_T("mso.dll")),(LPCSTR)5152);
////        Mhook_SetHook((PVOID*)&ORI_MSOSetTitle,HOOK_MSOSetTitle);
////#endif
//
//	//ORI_IDA_6021A5 = (bool (__stdcall *)(int))(uBase + 0x2021a5);//15.0.4420.1017	
//	//ORI_IDA_6021A5 = (bool (__stdcall *)(int))(uBase + 0x2185BD);//工位电脑	
//	//ORI_IDA_6021A5 = (bool (__stdcall *)(int))(uBase + 0x163B77);//15.0.4605.1003 
//
//#ifdef _WIN64
//	if(theApp.m_nORI_IDA_1401D6418)
//	{
//		//x64 only,and NOT all x64 need.
//		ORI_IDA_1401D6418 = (bool (__stdcall *)(void*))(uBase + (__int64)theApp.m_nORI_IDA_1401D6418);
//		Mhook_SetHook((PVOID*)&ORI_IDA_1401D6418,HOOK_IDA_1401D6418);
//	}
//
//#endif
//
//
//	ORI_IDA_6021A5 = (bool (__stdcall *)(void*))(uBase + (__int64)theApp.m_nORI_IDA_6021A5); 
//	bSuccessHookIsGif = Mhook_SetHook((PVOID*)&ORI_IDA_6021A5,HOOK_IDA_6021A5);
//
//	if(bSuccessHookIsGif == FALSE)
//	{
//		//14/6/9
//		BYTE NewCode[5];
//		NewCode[0] = 0xe9; 
//		DWORD dwJmpAddr = (UCHAR*)HOOK_IDA_6021A5 - (UCHAR*)ORI_IDA_6021A5 - 5;
//		memcpy(&NewCode[1], &dwJmpAddr, 4); 
//
//
//		DWORD dwOld;
//		VirtualProtect((LPVOID)ORI_IDA_6021A5,32, PAGE_EXECUTE_READWRITE,&dwOld);
//		memcpy(ORI_IDA_6021A5,NewCode,5);
//
//	if(theApp.m_nORI_IDA_8B9171)
//	{
//		//使内置表情与自定义表情兼容，只支持单帧表情的版本需要HOOK这个函数
//		typedef	void *(__thiscall LyncHookWithCustomPicClass_8B9171::* Fp8B9171)(int *,int *,int *,int *);
//		union
//		{
//			Fp8B9171 addr;
//			PBYTE proc;
//		}conv;
//
//		conv.proc = (PBYTE)((__int64)theApp.m_nORI_IDA_8B9171 + uBase);
//
//		LyncHookWithCustomPicClass_8B9171::ORI_IDA_8B9171 = conv.addr; 
//
//		conv.addr = &LyncHookWithCustomPicClass_8B9171::HOOK_IDA_8B9171;
//
//		Mhook_SetHook((PVOID*)&LyncHookWithCustomPicClass_8B9171::ORI_IDA_8B9171,conv.proc);
//	}
//
//	}
//
//	//ORI_IDA_6021BA = (int (__stdcall *)(int,int,int,int))(uBase + 0x2021ba);//15.0.4420.1017	
//	//ORI_IDA_6021BA = (int (__stdcall *)(int,int,int,int))(uBase + 0x2185D2);//工位电脑	
//	//ORI_IDA_6021BA = (int (__stdcall *)(int,int,int,int))(uBase + 0x22B380);//15.0.4605.1003	
//	ORI_IDA_6021BA = (int (__stdcall *)(int *,int **,int **,int **))(uBase + (__int64)theApp.m_nORI_IDA_6021BA); 
//	Mhook_SetHook((PVOID*)&ORI_IDA_6021BA,HOOK_IDA_6021BA);
//
//
//
//	//ORI_IDA_4022FB = uBase + 0x22fb;//15.0.4420.1017 
//	//ORI_IDA_4022FB = uBase + 0x235B;//工位电脑	
//	//ORI_IDA_4022FB = uBase + 0x23BB;//15.0.4605.1003		
//	{
//		typedef	char *(__thiscall LyncHookWithCustomPicClass_4022FB::* Fp4022FB)(WCHAR *,int);
//		union
//		{
//			Fp4022FB addr;
//			PBYTE proc;
//		}conv;
//
//		conv.proc = uBase + (__int64)theApp.m_nORI_IDA_4022FB;
//
//		LyncHookWithCustomPicClass_4022FB::ORI_IDA_4022FB = conv.addr;
//
//		conv.addr = &LyncHookWithCustomPicClass_4022FB::HOOK_IDA_4022FB;
//
//		Mhook_SetHook((PVOID*)&LyncHookWithCustomPicClass_4022FB::ORI_IDA_4022FB,conv.proc);
//
//	}
//
//	//ORI_OFFSET_45A4FF = (int (__stdcall *)(int,int))(0x45A4FF + uBase);//15.0.4420.1017	
//	//ORI_OFFSET_45A4FF = (int (__stdcall *)(int,int))(0x4A204A + uBase);//工位电脑	
//	//ORI_OFFSET_45A4FF = (int (__stdcall *)(int,int))(0x4B94F8 + uBase);//15.0.4605.1003		
//	ORI_OFFSET_45A4FF = (int (__stdcall *)(void*,int))((__int64)theApp.m_nORI_OFFSET_45A4FF + uBase);
//	Mhook_SetHook((PVOID*)&ORI_OFFSET_45A4FF,HOOK_OFFSET_45A4FF);
//
//	//ORI_IDA_4A8482 = (int (__stdcall *)(void*,int,int,int,int,int,int))(0xa8482 + uBase);//15.0.4420.1017	
//	//ORI_IDA_4A8482 = (int (__stdcall *)(void*,int,int,int,int,int,int))(0xA5ABD + uBase);//工位电脑	
//	//ORI_IDA_4A8482 = (int (__stdcall *)(void*,int,int,int,int,int,int))(0xA7198 + uBase);//15.0.4605.1003		
//	ORI_IDA_4A8482 = (int (__stdcall *)(void *,void *,int,int,void *,void *,void *))((__int64)theApp.m_nORI_IDA_4A8482 + uBase);
//	Mhook_SetHook((PVOID*)&ORI_IDA_4A8482,HOOK_IDA_4A8482);
//
//	//ORI_IDA_420674 = (0x20674 + uBase);//15.0.4420.1017
//	//ORI_IDA_420674 = (0x206BC + uBase);//15.0.4605.1003	
//	{
//		typedef	char *(__thiscall LyncHookWithCustomPicClass_420674::* Fp420674)(ULONG *);
//		union
//		{
//			Fp420674 addr;
//			PBYTE proc;
//		}conv;
//
//		conv.proc = uBase + (__int64)theApp.m_nORI_IDA_420674;
//
//		LyncHookWithCustomPicClass_420674::ORI_IDA_420674 = conv.addr; 
//
//		conv.addr = &LyncHookWithCustomPicClass_420674::HOOK_IDA_420674;
//	
//		Mhook_SetHook((PVOID*)&LyncHookWithCustomPicClass_420674::ORI_IDA_420674,conv.proc);
//	}
//
//	ORI_MulDiv = MulDiv;
//	Mhook_SetHook((PVOID*)&ORI_MulDiv,HOOK_MulDiv);
//
//	ORI_lstrlenW = (int (__stdcall *)(WCHAR*))lstrlenW;
//	Mhook_SetHook((PVOID*)&ORI_lstrlenW,HOOK_lstrlenW);
//
//
//	ORI_LockResource = LockResource;
//	int success = Mhook_SetHook((PVOID*)&ORI_LockResource,HOOK_LockResource);
//	theApp.m_bEnable2013Ext = true;
//}

BOOL HookApi()
{
	/////////////////////////////////////////////////////////////////////////////

	//ORI_CreateFile = CreateFile;
	//Mhook_SetHook((PVOID*)&ORI_CreateFile, HOOK_CreateFile);
	//ORI_GetProcAddress = GetProcAddress;
	//Mhook_SetHook((PVOID*)&ORI_GetProcAddress, HOOK_GetProcAddress);
	//ORI_HttpOpenRequest = HttpOpenRequest;
	//Mhook_SetHook((PVOID*)&ORI_HttpOpenRequest, HOOK_HttpOpenRequest);
	//ORI_TrackPopupMenuEx = TrackPopupMenuEx;
	//Mhook_SetHook((PVOID*)&ORI_TrackPopupMenuEx, HOOK_TrackPopupMenuEx);
	//ORI_SetWindowPos = SetWindowPos;
	//Mhook_SetHook((PVOID*)&ORI_SetWindowPos, NEW_SetWindowPos);

	//ORI_FindResource = FindResource;
	//Mhook_SetHook((PVOID*)&ORI_FindResource, HOOK_FindResource);
	//ORI_LoadResource = LoadResource;
	//Mhook_SetHook((PVOID*)&ORI_LoadResource, HOOK_LoadResource);
	//ORI_SizeofResource = SizeofResource;
	//Mhook_SetHook((PVOID*)&ORI_SizeofResource, HOOK_SizeofResource);
	//ORI_LoadIcon = LoadIcon;
	//Mhook_SetHook((PVOID*)&ORI_LoadIcon, NEW_LoadIcon);
	//ORI_SetWindowText = SetWindowText;
	//Mhook_SetHook((PVOID*)&ORI_SetWindowText, NEW_SetWindowText);
	//ORI_LoadImage = LoadImage;
	//Mhook_SetHook((PVOID*)&ORI_LoadImage, NEW_LoadImage);
	//ORI_LoadBitmap = LoadBitmap;
	//Mhook_SetHook((PVOID*)&ORI_LoadBitmap, NEW_LoadBitmap);
	ORI_CoCreateInstance = CoCreateInstance;
	Mhook_SetHook((PVOID*)&ORI_CoCreateInstance, NEW_CoCreateInstance);
	ORI_CoRegisterClassObject = CoRegisterClassObject;
	Mhook_SetHook((PVOID*)&ORI_CoRegisterClassObject, NEW_CoRegisterClassObject);
	return TRUE;
}

BOOL UnHookApi()
{
	//Mhook_Unhook((PVOID*)&ORI_GetProcAddress);
	//Mhook_Unhook((PVOID*)&ORI_TrackPopupMenuEx);
	//Mhook_Unhook((PVOID*)&ORI_FindResource);
	//Mhook_Unhook((PVOID*)&ORI_LoadResource);
	//Mhook_Unhook((PVOID*)&ORI_SizeofResource);
	//Mhook_Unhook((PVOID*)&ORI_LoadIcon);
	//Mhook_Unhook((PVOID*)&ORI_CoCreateInstance);
	//Mhook_Unhook((PVOID*)&ORI_SetWindowText);
	//Mhook_Unhook((PVOID*)&ORI_LoadBitmap);
	//Mhook_Unhook((PVOID*)&ORI_LoadImage);
	Mhook_Unhook((PVOID*)&ORI_CoRegisterClassObject);
	if(ORI_CreateInstance)
		Mhook_Unhook((PVOID*)&ORI_CreateInstance);
	//if(ORI_CreateTextServices)
	//	Mhook_Unhook((PVOID*)&ORI_CreateTextServices);
	//if(ORI_CreateEndpoint)
	//	Mhook_Unhook((PVOID*)&ORI_CreateEndpoint);
	//if(ORI_ITextServices_Release)
	//	Mhook_Unhook((PVOID*)&ORI_ITextServices_Release);
	//if(ORI_IUccEndpoint_Enable)
	//	Mhook_Unhook((PVOID*)&ORI_IUccEndpoint_Enable);
	//if(ORI_IUccEndpoint_Disable)
	//	Mhook_Unhook((PVOID*)&ORI_IUccEndpoint_Disable);
	////if(ORI_IUccPlatform_Shutdown)
	////	Mhook_Unhook((PVOID*)&ORI_IUccPlatform_Shutdown);
	////if(ORI_IUccSession_AddParticipant)
	////	Mhook_Unhook((PVOID*)&ORI_IUccSession_AddParticipant);
	//if(ORI_ITextServices_TxGetText)
	//	Mhook_Unhook((PVOID*)&ORI_ITextServices_TxGetText);
	//if(ORI_IUccSessionManager_CreateSession)
	//	Mhook_Unhook((PVOID*)&ORI_IUccSessionManager_CreateSession);
	return TRUE;
}

BOOL HookCoCreateInstance(BOOL bHook)
{
	if (bHook)
	{
		ORI_CoCreateInstance = CoCreateInstance;
		return Mhook_SetHook((PVOID*)&ORI_CoCreateInstance, NEW_CoCreateInstance);
	}
	else
	{
		return Mhook_Unhook((PVOID*)&ORI_CoCreateInstance);
	}
}

BOOL HookCoRegisterClassObject(BOOL bHook)
{
	if (bHook)
	{
		ORI_CoRegisterClassObject = CoRegisterClassObject;
		return Mhook_SetHook((PVOID*)&ORI_CoRegisterClassObject, NEW_CoRegisterClassObject);
	}
	else
	{
		if (ORI_CoCreateInstance)
		{
			Mhook_Unhook((PVOID*)&ORI_CoCreateInstance);
		}
		return Mhook_Unhook((PVOID*)&ORI_CoRegisterClassObject);
	}
}
