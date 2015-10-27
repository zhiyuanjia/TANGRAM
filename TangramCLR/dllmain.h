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

// dllmain.h : Declaration of module class.

#include "TangramCoreEvents.h"

class CTangramNodeCLREvent;
class CTangramCoreCLREvent;

class CTangramCLRApp : public CAtlDllModuleT< CTangramCLRApp >,public CTangramCoreEvents
{
public:
	CTangramCLRApp();
	~CTangramCLRApp();

	ITangramCore* m_pTangramCore;
	CTangramCoreCLREvent* m_pTangramCoreCLREvent;

private:
	//CTangramCoreEvents:
	void __stdcall OnExtendComplete(long hWnd, BSTR bstrUrl, ITangramNode* pRootNode);
	void __stdcall OnClose();
};

extern CTangramCLRApp theApp;

class CTangramNodeEvent : public CTangramNodeEvents
{
public:
	CTangramNodeEvent();
	virtual ~CTangramNodeEvent();

	CTangramNodeCLREvent* m_pTangramNodeCLREvent;
private:
	void __stdcall  OnExtendComplete();
	void __stdcall  OnDestroy();
	void __stdcall  OnDocumentComplete(IDispatch* pDocdisp, BSTR bstrUrl);
	void __stdcall  OnNodeAddInCreated(IDispatch* pAddIndisp, BSTR bstrAddInID, BSTR bstrAddInXml);
	void __stdcall  OnNodeAddInsCreated();
};
