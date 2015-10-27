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
#include "msprj.h"
#include "../TangramAddin.h"
#include "ProjectPlusEvents.h"
using namespace MSProject;
using namespace TangramOfficePlus::ProjectPlus::ProjectPlusEvent;

namespace TangramOfficePlus
{
	namespace ProjectPlus
	{
		class CTangramProjectAddin :
			public CTangramAddin,
			public CTangramOfficePlusApp,
			public CTangramEProjectAppEvents,
			public CTangramEProjectAppEvents2
		{
		public:
			CTangramProjectAddin();
			virtual ~CTangramProjectAddin();

			CComPtr<_MSProject> m_pApplication;
			//CTangramOfficePlusApp:
			HRESULT Tangram_Command(IDispatch* RibbonControl);
			HRESULT OnConnection(IDispatch* pHostApp, int ConnectMode);
			HRESULT OnDisconnection(int DisConnectMode);
			HRESULT GetCustomAddinUI(BSTR RibbonID, BSTR* bstrXmlScript);
			void WindowCreated(LPCTSTR strClassName, LPCTSTR strName, HWND hPWnd, HWND hWnd);
		};
	}
}// namespace TangramOfficePlus

