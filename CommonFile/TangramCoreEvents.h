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

#include "tangram.h"
extern _ATL_FUNC_INFO ExtendComplete;
extern _ATL_FUNC_INFO TangramNotify;
extern _ATL_FUNC_INFO DocumentComplete;
extern _ATL_FUNC_INFO NodeExtendComplete;
extern _ATL_FUNC_INFO Destroy;
extern _ATL_FUNC_INFO Close;
extern _ATL_FUNC_INFO Initialize;
extern _ATL_FUNC_INFO NodeAddInCreated;
extern _ATL_FUNC_INFO NodeAddInsCreated;


class CTangramCoreEvents : public IDispEventSimpleImpl</*nID =*/ 1, CTangramCoreEvents, &__uuidof(_ITangramCoreEvents)>
{
public:
	virtual void __stdcall OnExtendComplete(long hWnd, BSTR bstrUrl, ITangramNode* pRootNode){}
	virtual void __stdcall OnClose(){}

	BEGIN_SINK_MAP(CTangramCoreEvents)
		SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(_ITangramCoreEvents), /*dispid =*/ 0x00000001, OnExtendComplete, &ExtendComplete)
		SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(_ITangramCoreEvents), /*dispid =*/ 0x00000002, OnClose, &Close)
	END_SINK_MAP()
};

class CTangramNodeEvents : public IDispEventSimpleImpl</*nID =*/ 1, CTangramNodeEvents, &__uuidof(_ITangramNodeEvents)>
{
public:
	CTangramNodeEvents(){ m_pTangramNode = NULL; };
	virtual ~CTangramNodeEvents(){};

	ITangramNode* m_pTangramNode;

	virtual void __stdcall  OnExtendComplete(){}
	virtual void __stdcall  OnDestroy(){}
	virtual void __stdcall  OnNodeAddInCreated(IDispatch* pAddIndisp, BSTR bstrAddInID, BSTR bstrAddInXml){}
	virtual void __stdcall  OnNodeAddInsCreated(){}
	BEGIN_SINK_MAP(CTangramNodeEvents)
		SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(_ITangramNodeEvents), /*dispid =*/ 0x00000001, OnExtendComplete, &NodeExtendComplete)
		SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(_ITangramNodeEvents), /*dispid =*/ 0x00000002, OnDestroy, &Destroy)
		SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(_ITangramNodeEvents), /*dispid =*/ 0x00000003, OnNodeAddInCreated, &NodeAddInCreated)
		SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(_ITangramNodeEvents), /*dispid =*/ 0x00000004, OnNodeAddInsCreated, &NodeAddInsCreated)
	END_SINK_MAP()
};
