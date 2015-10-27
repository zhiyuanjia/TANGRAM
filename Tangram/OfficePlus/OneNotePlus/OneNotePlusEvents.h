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
#include "OneNote.h"
using namespace Office; 
using namespace OneNote;

namespace TangramOfficePlus
{
	namespace OneNotePlus
	{
		namespace OneNotePlusEvent
		{
			extern _ATL_FUNC_INFO Navigate;
			extern _ATL_FUNC_INFO HierarchyChange;

			class CTangramOneNotePlusEvents : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOneNotePlusEvents, &__uuidof(IOneNoteEvents)>
			{
			public:
				virtual void __stdcall OnNavigate() {}
				virtual void __stdcall OnHierarchyChange(BSTR bstrActivePageID) {}

				BEGIN_SINK_MAP(CTangramOneNotePlusEvents)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(IOneNoteEvents), /*dispid =*/ 0x00000001, OnNavigate, &Navigate)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(IOneNoteEvents), /*dispid =*/ 0x00000002, OnHierarchyChange, &HierarchyChange)
				END_SINK_MAP()
			};
		}
	}
}