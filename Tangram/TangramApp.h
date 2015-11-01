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

// TangramApp.h : DLL

#pragma once

#include "metahost.h"
class CTangramHelperWnd;

typedef HRESULT (__stdcall *TangramCLRCreateInstance)(REFCLSID clsid, REFIID riid, /*iid_is(riid)*/ LPVOID *ppInterface);
struct TangramThreadInfo
{
	HHOOK							m_hGetMessageHook;
	//HHOOK							m_hRetWndHook;
	map<HWND, CTangramFrame*>		m_mapTangramFrame;
};


struct TangramWndClsInfo
{
public:
	TangramWndClsInfo(void){ m_nType = TangramView; };

	LPCTSTR			m_strObjID;
	LPCTSTR			m_strCnnID;
	ViewType		m_nType;
	CRuntimeClass*	m_pTabWndClsInfo;
};

class CTangramCore;
class CTangramApp : 
	public CWinApp,
	public CTangramProxyBase,
	public CAtlDllModuleT< CTangramApp >
{ 
public:
	CTangramApp();
	~CTangramApp();

	BOOL									m_bCLRStart;
	BOOL									m_b32Process;
	BOOL									m_bWinFormActived;
	BOOL									m_bEnableProcessFormTabKey;

	int										m_nAppID;
#ifdef _DEBUG
	int										m_nTangramObj;
#endif
	IDispatch*								m_pAppDisp;
	CTangram*								m_pTangram;
	CTangramCore*							m_pHostCore;
	ITangramCore*							m_pTangramCore;
	CTangramNode*							m_pTangramNode;
	CTangramFrame*							m_pTangramFrame;
	CTangramEvent*							m_pTangramEvent; 
	CTangramBKWnd*							m_pTangramMDIClientBKWnd;
	CComPtr<ITypeInfo>						m_pTangramEventTypeInfo;
	CTangramCLRProxyBase*					m_pTangramCLRProxy;
	CTangramAddinApp*						m_pTangramAddinApp;

	ITangramVBAForm *						m_pActiveForm2;
	TRACKMOUSEEVENT							EventTrack;

	HWND									m_hActiveWnd;
	HWND									m_hVSToolWnd;
	HWND									m_hExcelEdit;
	HWND									m_hExcelEdit2;
	HHOOK									m_hCBTHook;
	HMODULE									m_hPlugInModule;

	TCHAR									m_szBuffer[MAX_PATH];
	LPCTSTR									m_lpszSplitterClass;

	CString									m_strToolKey;
	CString									m_strExeName;
	CString									m_strSWTClassName;
	CString									m_strAppPath;
	CString									m_strModulePath;
	CString									m_strAppDataPath;
	CString									m_strProgramFilePath;
	CString									m_strTangramCLRPath;
	CString									m_strCLRScript;
	CString									m_strCurrentKey;
	CString									m_strCurrentRootName;
	CString									m_strMainClientWndID; 

	VARIANT									m_varApplication;

	map<HWND, CTangram*>					m_mapTangrm;
	map<CString, int>						m_mapOfficeAppID;
	map<CString, int>						m_mapOfficeExeID;
	map<CString, CComVariant>				m_mapValInfo;
	map<CString, ITangramCore*>				m_mapRemoteTangramCore;
	map<CString, TangramEventType>			m_mapEventType;
	map<CString, CTangramHelperWnd*>		m_mapRemoteTangramHelperWnd;

	void InitEventDic();
	void SetHook(DWORD ThreadID);
	void InitTangramNode(CTangramNode* pObj);
	void HostPosChanged(CTangramNode* pHostViewNode);
	void OnUpdateTangramObj(CTangramNode* pTangramNode);

	CString GetNewGUID();
	CString GetFileVer();
	CString Encode(CString strSRC, BOOL bEnCode);
	CString EncodeFileToBase64(CString strSRC);
	CString CheckXML(CString strXml);

	BOOL IsUserAdministrator();
	bool CheckUrl(CString&   url);
	BOOL LoadImageFromResource(ATL::CImage *pImage, HMODULE hMod, UINT nResID, LPCTSTR lpTyp);
	BOOL Create(CTangramNode* pTangramNode, LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL);

	TangramThreadInfo* GetThreadInfo(DWORD dwInfo=0);

	int	 LoadCLR();
	LRESULT Close(void);


	DWORD ExecCmd(const CString cmd, const BOOL setCurrentDirectory);
	static LRESULT CALLBACK CBTProc(int nCode, WPARAM wParam, LPARAM lParam);

	void _addObject(void* pThis, IUnknown* pUnknown)
	{
		m_mapObjects.insert(make_pair(pThis,pUnknown));
	}

	void _removeObject(void* pThis)
	{
		map<void*,IUnknown*>::iterator it = m_mapObjects.find(pThis);
		if (it != m_mapObjects.end())
		{
			m_mapObjects.erase(it);
		}
	}

	DECLARE_LIBID(LIBID_Tangram)
private:
	map<void*, IUnknown*>					m_mapObjects;
	map<CString, ITangramCreator*>			m_mViewFactory;
	map<DWORD,TangramThreadInfo*>			m_mapThreadInfo;	
	CMapStringToPtr							m_TabWndClassInfoDictionary;

	//.NET Version 4: 
	ICLRRuntimeHost*						m_pClrHost;

	BOOL IsWow64bit();
	BOOL Is64bitSystem();
	BOOL _CheckNode(CTangramXmlParse* pXmlNode);
	void _clearObjects()
	{
		map<void*,IUnknown*>::iterator it;
		while((it = m_mapObjects.begin()) != m_mapObjects.end())
		{
			IUnknown* pUnknown = it->second;
			CCommonFunction::ClearObject<IUnknown>(pUnknown);
			m_mapObjects.erase(it);
		}
	}

	void AddClsInfo(CString m_strObjID, int nType, CRuntimeClass* pClsInfo);
	void FindNode(CTangramNode* pObj);
	static LRESULT CALLBACK GetMessageProc(int nCode, WPARAM wParam, LPARAM lParam);
// Overrides
	void AttachNode(void* pNodeEvents);
	void OnEvent(ITangramEvent* pEvent, IDispatch* pCtrlDisp, IDispatch* pArgDisp);
	BOOL InitInstance();
    int ExitInstance();

	void CreateTangramCoreForOfficeApp(int nAppID);
	ITangramVBAForm* CreateFormWnd(HWND hFormWnd);
};

extern CTangramApp		theApp;
