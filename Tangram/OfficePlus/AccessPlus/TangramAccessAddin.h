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

#pragma once

#include "def.h"
#include "msacc.h"
#include "../TangramAddin.h"
//#include "AccessEvents.h"
//#include "../../_ITangramAccessFormHelperEvents_CP.h"

using namespace MSAccess;
//using namespace TangramOfficePlus::AccessPlus::AccessPlusEvent;

namespace TangramOfficePlus
{
	namespace AccessPlus
	{
		class CTangramAccessFormWnd;
		class CTangramAccessMDIClientWnd :
			public CWindowImpl<CTangramAccessMDIClientWnd, CWindow>
		{
		public:
			CTangramAccessMDIClientWnd(void);
			~CTangramAccessMDIClientWnd(void);


			BEGIN_MSG_MAP(CTangramAccessMDIClientWnd)
			END_MSG_MAP()
			virtual void OnFinalMessage(HWND hWnd);
		};

		class CTangramAccessMainWnd : 
			public CComObjectRootEx<CComSingleThreadModel>,
			public CWindowImpl<CTangramAccessMainWnd, CWindow>,
			public IDispatchImpl<ITangramAccessApp, &IID_ITangramAccessApp, &LIBID_Tangram, /*wMajor =*/ 1, /*wMinor =*/ 0>
		{
		public:
			CTangramAccessMainWnd(void);
			~CTangramAccessMainWnd(void);

			BEGIN_COM_MAP(CTangramAccessMainWnd)
				COM_INTERFACE_ENTRY(ITangramAccessApp)
				COM_INTERFACE_ENTRY(IDispatch)
			END_COM_MAP()

			BEGIN_MSG_MAP(CTangramAccessMainWnd)
				MESSAGE_HANDLER(WM_TANGRAMMSG, OnWndCreated)
			END_MSG_MAP()

		protected:
			ULONG InternalAddRef() { return 1; }
			ULONG InternalRelease() { return 1; }
			LRESULT OnWndCreated(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
			virtual void OnFinalMessage(HWND hWnd);
		public:
			STDMETHOD(GetTangramAccessFormHelper)(LONG hWnd, ITangramAccessFormHelper** ppFormHelper);
		};

		class CTangramAccessAddin :
			public CTangramAddin,
			public CTangramAddinApp
			{
		public:
			CTangramAccessAddin();
			virtual ~CTangramAccessAddin();

			CTangramAccessMainWnd*					m_pMainWnd;
			map<HWND, CTangramAccessFormWnd*>		m_mapForms;
			CComPtr<MSAccess::_Application>			m_pApplication;
			//CTangramAddinApp:
			HRESULT Tangram_Command(IDispatch* RibbonControl);
			HRESULT OnConnection(IDispatch* pHostApp, int ConnectMode);
			HRESULT OnDisconnection(int DisConnectMode);
			HRESULT GetCustomAddinUI(BSTR RibbonID, BSTR* bstrXmlScript);
			void WindowCreated(LPCTSTR strClassName, LPCTSTR strName, HWND hPWnd, HWND hWnd);
			CTangramAccessFormWnd* GetAccessForm(HWND hWnd);
		};

		class CTangramAccessFormWnd : //public AccessPlusEvent::CMSAccessFormEvents,
			public CComObjectRootEx<CComSingleThreadModel>,
			public CWindowImpl<CTangramAccessFormWnd, CWindow>,
			public IConnectionPointContainerImpl<CTangramAccessFormWnd>,
			//public CProxy_ITangramAccessFormHelperEvents<CTangramAccessFormWnd>,
			public IDispatchImpl<ITangramAccessFormHelper, &IID_ITangramAccessFormHelper, &LIBID_Tangram, /*wMajor =*/ 1, /*wMinor =*/ 0>
		{
		public:
			CTangramAccessFormWnd(void);
			~CTangramAccessFormWnd(void);

			//MSAccess::_Form3* m_pForm;
			BOOL m_bMDIClient;
			//int m_nIndex;
			//HWND m_hSubForm;
			HWND m_hForm;
			HWND m_hClient;
			HWND m_hChildClient;
			ITangram* m_pTangram;
			ITangramFrame* m_pFrame;
			BEGIN_COM_MAP(CTangramAccessFormWnd)
				COM_INTERFACE_ENTRY(ITangramAccessFormHelper)
				COM_INTERFACE_ENTRY(IDispatch)
				COM_INTERFACE_ENTRY(IConnectionPointContainer)
			END_COM_MAP()

			BEGIN_CONNECTION_POINT_MAP(CTangramAccessFormWnd)
				//CONNECTION_POINT_ENTRY(__uuidof(_ITangramAccessFormHelperEvents))
			END_CONNECTION_POINT_MAP()

			BEGIN_MSG_MAP(CTangramAccessFormWnd)
				MESSAGE_HANDLER(WM_TANGRAMDATA, OnGetMe)
			END_MSG_MAP()
			virtual void OnFinalMessage(HWND hWnd);
			LRESULT OnGetMe(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
		protected:
			ULONG InternalAddRef() { return 1; }
			ULONG InternalRelease() { return 1; }
		public:
			STDMETHOD(Show)(VARIANT_BOOL bShow);
			STDMETHOD(Extend)(BSTR bstrKey, BSTR bstrXml, ITangramNode** ppNode);
			STDMETHOD(UnloadTangram)();
		};
	}
}// namespace TangramOfficePlus


