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

#include "excel.h"
#include "../TangramAddin.h"
#include "ExcelPlusEvents.h"

using namespace Excel;
using namespace TangramOfficePlus::ExcelPlus::ExcelPlusEvent;

namespace TangramOfficePlus
{
	namespace ExcelPlus
	{
		class CTangramExcelPlusWB;
		class CTangramExcelWorkSheet;
		class CTangramExcelPlusWBWnd;
		typedef map<HWND, CTangramExcelPlusWBWnd*> ExcelWorkBookWndMap;
		typedef ExcelWorkBookWndMap::iterator ExcelWorkBookWndMapIT;
		typedef map<_Workbook*, CTangramExcelPlusWB*> ExcelWorkBookWndDispMap;
		typedef ExcelWorkBookWndDispMap::iterator ExcelWorkBookWndDispMapIT;
		typedef map<_Worksheet*, CTangramExcelWorkSheet*> ExcelWorkSheetDispMap;
		typedef ExcelWorkSheetDispMap::iterator ExcelWorkSheetDispMapIT;

		class CTangramExcelAddin :
			public CTangramAddin,
			public CTangramAddinApp,
			public CTangramExcelPlusAppEvents,
			public map<_Workbook*, CTangramExcelPlusWB*>
		{
		public:
			CTangramExcelAddin();
			virtual ~CTangramExcelAddin();

			CTangramExcelPlusWBWnd*			m_pActiveWnd;
			CComPtr<Excel::_Application>	m_pApplication;

			//CTangramExcelPlusAppEvents:
			void __stdcall OnNewWorkbook(_Workbook* Wb);
			void __stdcall OnWorkbookOpen(_Workbook* Wb);
			//void __stdcall OnWorkbookActivate(_Workbook* Wb);
			void __stdcall OnWindowActivate(_Workbook* Wb, Excel::Window* Wn);

			//CTangramAddinApp:
			HRESULT Tangram_Command(IDispatch* RibbonControl);
			HRESULT OnConnection(IDispatch* pHostApp, int ConnectMode);
			HRESULT OnDisconnection(int DisConnectMode);
			HRESULT GetCustomAddinUI(BSTR RibbonID, BSTR* bstrXmlScript);
			void WindowCreated(LPCTSTR strClassName, LPCTSTR strName, HWND hPWnd, HWND hWnd);

			STDMETHOD(AddTangramXml)(IDispatch* pDocdisp, BSTR bstrXml, BSTR bstrKey, BSTR* bstrRet, VARIANT_BOOL* bSuccess);
			STDMETHOD(GetTangramXml)(IDispatch* pDocdisp, BSTR bstrKey, BSTR* pbstrXml);
			STDMETHOD(ShowOfficeDocument)(VARIANT_BOOL bNewDoc, BSTR bstrKey, BSTR bstrXml, IDispatch** ppRetNode);
		private:
			bool							m_bOldVer;
		};
	}
}


