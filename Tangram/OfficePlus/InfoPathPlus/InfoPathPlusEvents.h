/********************************************************************************
*					Tangram Library - version 8.0								*
*********************************************************************************
* Copyright (C) 2006-2013 by Tangram Team.   All Rights Reserved.				*
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
#include "ipeditor.h"
using namespace Office; 
using namespace InfoPath;


namespace TangramOfficePlus
{
	namespace InfoPathPlus
	{
		namespace InfoPathPlusEvent
		{
			// Methods:
			extern _ATL_FUNC_INFO WindowActivate;
			extern _ATL_FUNC_INFO WindowDeactivate;
			extern _ATL_FUNC_INFO WindowSize;
			extern _ATL_FUNC_INFO XDocumentBeforeClose;
			extern _ATL_FUNC_INFO XDocumentBeforePrint;
			extern _ATL_FUNC_INFO XDocumentBeforeSave;
			extern _ATL_FUNC_INFO NewXDocument;
			extern _ATL_FUNC_INFO XDocumentOpen;
			extern _ATL_FUNC_INFO Quit;
			extern _ATL_FUNC_INFO XDocumentChange;

			class CTangramInfoPathApplicationEvents : public IDispEventSimpleImpl</*nID =*/ 1, CTangramInfoPathApplicationEvents, &__uuidof(_ApplicationEvents)>
			{
			public:
				virtual void __stdcall OnWindowActivate(_XDocument * pDocument, InfoPath::Window * pWindow) {};
				virtual void __stdcall OnWindowDeactivate(_XDocument * pDocument, InfoPath::Window * pWindow) {};
				virtual void __stdcall OnWindowSize(_XDocument * pDocument, InfoPath::Window * pWindow) {};
				virtual void __stdcall OnXDocumentBeforeClose(_XDocument * pDocument, VARIANT_BOOL * pfCancel) {};
				virtual void __stdcall OnXDocumentBeforePrint(_XDocument * pDocument, VARIANT_BOOL * pfCancel) {};
				virtual void __stdcall OnXDocumentBeforeSave(_XDocument * pDocument, VARIANT_BOOL * pfCancel) {};
				virtual void __stdcall OnNewXDocument(_XDocument * pDocument) {};
				virtual void __stdcall OnXDocumentOpen(_XDocument * pDocument) {};
				virtual void __stdcall OnQuit() {};
				virtual void __stdcall OnXDocumentChange() {};

				BEGIN_SINK_MAP(CTangramInfoPathApplicationEvents)
					// Methods:
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(_ApplicationEvents), /*dispid =*/ 0x00000001, OnWindowActivate, &WindowActivate)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(_ApplicationEvents), /*dispid =*/ 0x00000002, OnWindowDeactivate, &WindowDeactivate)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(_ApplicationEvents), /*dispid =*/ 0x00000003, OnWindowSize, &WindowSize)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(_ApplicationEvents), /*dispid =*/ 0x00000004, OnXDocumentBeforeClose, &XDocumentBeforeClose)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(_ApplicationEvents), /*dispid =*/ 0x00000005, OnXDocumentBeforePrint, &XDocumentBeforePrint)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(_ApplicationEvents), /*dispid =*/ 0x00000006, OnXDocumentBeforeSave, &XDocumentBeforeSave)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(_ApplicationEvents), /*dispid =*/ 0x00000007, OnNewXDocument, &NewXDocument)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(_ApplicationEvents), /*dispid =*/ 0x00000008, OnXDocumentOpen, &XDocumentOpen)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(_ApplicationEvents), /*dispid =*/ 0x00000009, OnQuit, &Quit)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(_ApplicationEvents), /*dispid =*/ 0x0000000a, OnXDocumentChange, &XDocumentChange)
				END_SINK_MAP()
			};
		}
	}
}
