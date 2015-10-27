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
#include "msppt.h"
#include "../TangramAddin.h"
#include "PowerpointPlusEvents.h"

using namespace PowerPoint;
using namespace TangramOfficePlus::PowerPointPlus;
using namespace TangramOfficePlus::PowerPointPlus::PowerPointPlusEvent;

namespace TangramOfficePlus
{
	namespace PowerPointPlus
	{
		class CTangramPresentation;
		class CTangramPowerPntWnd :
			public CWindowImpl<CTangramPowerPntWnd, CWindow>
		{
		public:
			CTangramPowerPntWnd(void);
			~CTangramPowerPntWnd(void);

			HWND					m_hClient;
			HWND					m_hChildClient;
			HWND					m_hTaskPane;
			HWND					m_hTaskPaneWnd;
			HWND					m_hTaskPaneChildWnd;
			CString					m_strKey;
			CTangramPresentation*	m_pTangramPresentation;
			BEGIN_MSG_MAP(CTangramPowerPntWnd)
				MESSAGE_HANDLER(WM_TANGRAMDATA, OnGetData)
				MESSAGE_HANDLER(WM_DESTROY, OnDestroy)
			END_MSG_MAP()
			LRESULT OnGetData(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
			LRESULT OnDestroy(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
			virtual void OnFinalMessage(HWND hWnd);
		};

		class CTangramPresentation : public map<HWND, CTangramPowerPntWnd*>
		{
		public:
			CTangramPresentation();
			~CTangramPresentation();

			CString					m_strTaskPaneXml;
			CTangram*				m_pTangram;
			CTangramFrame*			m_pFrame;
			ITangram*				m_pTaskPaneTangram = NULL;
			ITangramFrame*			m_pTaskPaneFrame = NULL;
			CTangramNode*			m_pCurrentNode;
		};

		class CTangramPowerPointAddin : public CTangramAddin,
			public CTangramOfficePlusApp,
			public CTangramPowerpointPlusEApplication
		{
		public:
			CTangramPowerPointAddin();
			virtual ~CTangramPowerPointAddin();

			CComPtr<PowerPoint::_Application> m_pApplication;
			map<CString, CTangramPresentation*> m_mapTangramPres;

			//CTangramOfficePlusApp:
			HRESULT Tangram_Command(IDispatch* RibbonControl);
			HRESULT OnConnection(IDispatch* pHostApp, int ConnectMode);
			HRESULT OnDisconnection(int DisConnectMode);
			HRESULT GetCustomAddinUI(BSTR RibbonID, BSTR* bstrXmlScript);

			STDMETHOD(AddTangramXml)(IDispatch* pDocdisp, BSTR bstrXml, BSTR bstrKey, BSTR* bstrRet, VARIANT_BOOL* bSuccess);
			STDMETHOD(GetTangramXml)(IDispatch* pDocdisp, BSTR bstrKey, BSTR* pbstrXml);

			void __stdcall OnPresentationSave(/*[in]*/ _Presentation * Pres);
			void __stdcall OnPresentationOpen(/*[in]*/ _Presentation * Pres);
			void __stdcall OnNewPresentation(/*[in]*/ _Presentation * Pres);
			void __stdcall OnWindowActivate(/*[in]*/ _Presentation * Pres,/*[in]*/ DocumentWindow * Wn);
		};
	}
}// namespace TangramOfficePlus


