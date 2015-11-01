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

#include "vbe6ext.h"
#include "../Tangram/OfficePlus/TangramAddin.h"

namespace TangramVisualBasicPlus
{
	namespace VB6Plus
	{
		class CTangramVBIDEWnd :
			public CWindowImpl<CTangramVBIDEWnd, CWindow>
		{
		public:
			CTangramVBIDEWnd(void);
			~CTangramVBIDEWnd(void);
			HWND					m_hClientWnd;
			ITangram*				m_pTangram;
			ITangramFrame*			m_pFrame;
			BEGIN_MSG_MAP(CTangramVBIDEWnd)
			END_MSG_MAP()
			virtual void OnFinalMessage(HWND hWnd);
		};

		class CTangramVB6Addin :
			public TangramOfficePlus::CTangramAddin,
			public CTangramAddinApp
		{
		public:
			CTangramVB6Addin();
			virtual ~CTangramVB6Addin();

			CComPtr<VBIDE::VBE> m_pVBE;
			//CTangramAddinApp:
			HRESULT Tangram_Command(IDispatch* RibbonControl);
			HRESULT OnConnection(IDispatch* pHostApp, int ConnectMode);
			HRESULT OnDisconnection(int DisConnectMode);
			HRESULT GetCustomAddinUI(BSTR RibbonID, BSTR* bstrXmlScript);
			void WindowCreated(LPCTSTR strClassName, LPCTSTR strName, HWND hPWnd, HWND hWnd);
		};
	}
}// namespace TangramOfficePlus

