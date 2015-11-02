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
#ifndef _WIN64
#pragma once
#include "../TangramCore.h"
#include "dte.h"
#include "dte80.h"
#include "devshell.h"
#include "../Tangram/OfficePlus/TangramAddin.h"
namespace TangramVisualStudioPlus
{
	namespace VisualStudioPlus
	{
		class CTangramVSAddin :
			public CTangramCore
		{
		public:
			CTangramVSAddin();
			virtual ~CTangramVSAddin();
			OutputWindowPane* m_pOutputWindowPane;

			HWND GetHWnd();
			void ClearOutputPane();
			IDispatch* GetOutputPane();
			void PutTextToOutputPane(BSTR bstrMsg);
		};

		//class CTangramVSIDEWnd :
		//	public CWindowImpl<CTangramVSIDEWnd, CWindow>
		//{
		//public:
		//	CTangramVSIDEWnd(void);
		//	~CTangramVSIDEWnd(void);
		//	HWND					m_hClientWnd;
		//	ITangram*				m_pTangram;
		//	ITangramFrame*			m_pFrame;
		//	BEGIN_MSG_MAP(CTangramVSIDEWnd)
		//	END_MSG_MAP()
		//	virtual void OnFinalMessage(HWND hWnd);
		//};

		class CTangramDSAddin :
			public CTangramCore,
			public IDSAddIn
		{
		public:
			CTangramDSAddin();
			virtual ~CTangramDSAddin();

			BEGIN_COM_MAP(CTangramDSAddin)
				COM_INTERFACE_ENTRY2(IDispatch, ITangramCore)
				COM_INTERFACE_ENTRY(ITangramCore)
				COM_INTERFACE_ENTRY(IDSAddIn)
				COM_INTERFACE_ENTRY(IConnectionPointContainer)
			END_COM_MAP()

			CString					m_strVSIDEXml;
			CComPtr<IApplication>	m_pVSApp;
			DWORD m_dwCookie;

			// IDSAddIn Methods
		public:
			STDMETHOD(OnConnection)(IApplication * pApp, VARIANT_BOOL bFirstTime, long dwCookie, VARIANT_BOOL * OnConnection);
			STDMETHOD(OnDisconnection)(VARIANT_BOOL bLastTime);
		};

		class CTangramVisualStudioAddin :
			public TangramOfficePlus::CTangramAddin,
			public CTangramAddinApp
		{
		public:
			CTangramVisualStudioAddin();
			virtual ~CTangramVisualStudioAddin();

			CComPtr<_DTE> m_pDTE;

			//CTangramAddinApp:
			HRESULT Tangram_Command(IDispatch* RibbonControl);
			HRESULT OnConnection(IDispatch* pHostApp, int ConnectMode);
			HRESULT OnDisconnection(int DisConnectMode);
			HRESULT GetCustomAddinUI(BSTR RibbonID, BSTR* bstrXmlScript);
			void WindowCreated(LPCTSTR strClassName, LPCTSTR strName, HWND hPWnd, HWND hWnd);
		};
	}
}
#endif


