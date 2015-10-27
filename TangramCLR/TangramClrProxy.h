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

// TangramFrame.h : Declaration of the CTangramNavigator

#pragma once

#include "def.h"       // main symbols
#include "TangramProxy.h"

using namespace System::Reflection;
using namespace TangramCLR;


struct ObjectEventInfo2
{
	map<TangramEventType, ITangramEvent*> m_mapEventObj;
};

struct ObjectEventInfo
{
	map<TangramEventType, ITangramEvent*> m_mapEventObj;
	map<LONGLONG, ObjectEventInfo2*> m_mapEventObj2;
};

class CTangramCLRProxy : public CTangramCLRProxyBase
{
public: 
	CTangramCLRProxy();
	 virtual~CTangramCLRProxy();

	 gcroot<TangramCLR::TangramProxy^>	m_pTangramProxy;

	 Object^ _getObject(Object^ key);
	 bool _insertObject(Object^ key, Object^ val);
	 bool _removeObject(Object^ key);

	 template<typename T1, typename T2>
	 T2^ _createObject(T1* punk)
	 {
		 T2^ pRetObj = nullptr;

		 if (punk != NULL)
		 {
			 LONGLONG l = (LONGLONG)punk;
			 pRetObj = (T2^)_getObject(l);

			 if (pRetObj == nullptr)
			 {
				 pRetObj = gcnew T2(punk);
				 _insertObject(l, pRetObj);
			 }
		 }
		 return pRetObj;
	 }

	 map<HWND, ObjectEventInfo*>	m_mapObjectEventInfo;
private:
	 gcroot<Object^> m_pTangramObj;
	 gcroot<Hashtable^> m_htObjects;
	 gcroot<Assembly^> m_pSystemAssembly;

	 BSTR AttachObjEvent(IDispatch* EventObj, IDispatch* SourceObj, TangramEventType EventType, IDispatch* HTMLWindow);
	 HRESULT ActiveCLRMethod(BSTR bstrObjID, BSTR bstrMethod, BSTR bstrParam, BSTR bstrData);
	 IDispatch* CreateCLRObj(BSTR bstrObjID);
	 HRESULT ProcessCtrlMsg(HWND hCtrl, bool bShiftKey);
	 BOOL ProcessFormMsg(HWND hFormWnd, LONG lpMsg, int nMouseButton);
	 HRESULT CloseForms();
	 IDispatch* TangramCreateObject(BSTR bstrObjID, LONGLONG hParent, ITangramNode* pHostNode);
	 BOOL IsWinForm(HWND hWnd);
	 IDispatch* GetCLRControl(IDispatch* CtrlDisp, BSTR bstrNames);
	 BSTR GetCtrlName(IDispatch* pCtrl);
	 HWND GetMDIClientHandle(IDispatch* pMDICtrl);
	 IDispatch* GetCtrlByName(IDispatch* CtrlDisp, BSTR bstrName, bool bFindInChild);
	 HWND GetCtrlHandle(IDispatch* pCtrl);
	 HWND IsCtrlCanNavigate(IDispatch* ctrl);
	 void TangramAction(BSTR bstrXml, ITangramNode* pNode);
	 BSTR GetCtrlValueByName(IDispatch* CtrlDisp, BSTR bstrName, bool bFindInChild);

	Control^ GetCanSelect(Control^ ctrl, bool direct);
};

extern _ATL_FUNC_INFO Initialize;
extern _ATL_FUNC_INFO Destroy;

class CTangramClrEvent : public IDispEventSimpleImpl</*nID =*/ 1, CTangramClrEvent, &__uuidof(_ITangram)>
{
public:
	CTangramClrEvent();
	virtual ~CTangramClrEvent();

	gcroot<Object^> m_pTangram;

	void __stdcall  OnDestroy();
	void __stdcall  OnInitialize(IDispatch* pHtmlWnd, BSTR bstrUrl);
	BEGIN_SINK_MAP(CTangramClrEvent)
		SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(_ITangram), /*dispid =*/ 0x00000001, OnInitialize, &Initialize)
		SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(_ITangram), /*dispid =*/ 0x00000006, OnDestroy, &Destroy)
	END_SINK_MAP()
};
