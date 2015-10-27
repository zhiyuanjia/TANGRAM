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
* http://www.lyncplus.net
* http://www.tangramdev.com
*
********************************************************************************/

#pragma once
#include "ExcelPlusEvents.h"
using namespace TangramOfficePlus::ExcelPlus::ExcelPlusEvent;

namespace TangramOfficePlus
{
	namespace ExcelPlus
	{
		class CTangramExcelAddin;
		class CTangramExcelPlusWB;
		class CTangramExcelPlusWBWnd;
		class CTangramExcelWorkSheet;
		typedef map<HWND, CTangramExcelPlusWBWnd*> ExcelWorkBookWndMap;
		typedef ExcelWorkBookWndMap::iterator ExcelWorkBookWndMapIT;

		class CTangramExcelPlusWBWnd :
			public CWindowImpl<CTangramExcelPlusWBWnd, CWindow>
		{
		public:
			CTangramExcelPlusWBWnd(void);
			~CTangramExcelPlusWBWnd(void);

			HWND							m_hInputWnd;
			HWND							m_hInputWnd2;
			HWND							m_hTaskPane;
			HWND							m_hTaskPaneWnd;
			HWND							m_hTaskPaneChildWnd;
			CString							m_strActiveSheetName;
			CTangramExcelPlusWB*			m_pWorkBook;

			BEGIN_MSG_MAP(CTangramExcelPlusWBWnd)
				MESSAGE_HANDLER(WM_DESTROY, OnDestroy)
				MESSAGE_HANDLER(WM_TANGRAMDATA, OnGetData)
				MESSAGE_HANDLER(WM_MOUSEMOVE, OnMouseMove)
				MESSAGE_HANDLER(WM_WINDOWPOSCHANGED, OnWindowPosChanged)
			END_MSG_MAP()
			LRESULT OnDestroy(UINT , WPARAM , LPARAM , BOOL& );
			LRESULT OnGetData(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
			LRESULT OnMouseMove(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
			LRESULT OnWindowPosChanged(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);

			virtual void OnFinalMessage(HWND hWnd);
		};

		class CTangramExcelPlusWB : 
			public CTangramXmlParse,
			public CTangramExcelPlusWorkbookEvents,
			public map<_Worksheet*, CTangramExcelWorkSheet*>
		{
		public:
			CTangramExcelPlusWB(void);
			~CTangramExcelPlusWB(void);

			CString					m_strTaskPaneXml;

			ITangram*				m_pTangram = NULL;
			ITangramFrame*			m_pFrame = NULL;
			ITangram*				m_pTaskPaneTangram = NULL;
			ITangramFrame*			m_pTaskPaneFrame = NULL;

			_Workbook*				m_pWorkBook;
			ExcelWorkBookWndMap		m_mapExcelWorkBookWnd;

			//map<CString, CString>   m_mapSheetXML;

			void __stdcall OnNewSheet(IDispatch* Sh);
			void __stdcall OnSheetBeforeDoubleClick(IDispatch* Sh,Excel::Range* Target,VARIANT_BOOL* Cancel);
			void __stdcall OnSheetActivate(IDispatch* Sh);
			void __stdcall OnSheetChange(IDispatch* Sh, Excel::Range* Target);
			void __stdcall OnSheetBeforeDelete(IDispatch* Sh);
		};

		class CTangramExcelWorkSheet :
			public CTangramExcelPlusDocEvents
		{
		public:
			CTangramExcelWorkSheet(void);
			~CTangramExcelWorkSheet(void);

			_Worksheet* m_pSheet;
		};
	}
}
