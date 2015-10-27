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
// TangramAddin.h : Declaration of the CTangramAddin

#pragma once
namespace TangramOfficePlus
{
	// CTangramAddin
	class ATL_NO_VTABLE CTangramAddin : public CTangramCore,
		public IDispatchImpl<AddInDesignerObjects::_IDTExtensibility2, &AddInDesignerObjects::IID__IDTExtensibility2, &AddInDesignerObjects::LIBID_AddInDesignerObjects, 1, 0>,
		public IDispatchImpl<IRibbonExtensibility, &__uuidof(IRibbonExtensibility), &LIBID_Office, /* wMajor = */ 2, /* wMinor = */ 4>,
		public IDispatchImpl<ICustomTaskPaneConsumer, &__uuidof(ICustomTaskPaneConsumer), &LIBID_Office, /* wMajor = */ 2, /* wMinor = */ 4>
	{
	public:
		CTangramAddin();
		virtual ~CTangramAddin();

		BEGIN_COM_MAP(CTangramAddin)
			COM_INTERFACE_ENTRY2(IDispatch, ITangramCore)
			COM_INTERFACE_ENTRY(ITangramCore)
			COM_INTERFACE_ENTRY(AddInDesignerObjects::IDTExtensibility2)
			COM_INTERFACE_ENTRY(IRibbonExtensibility)
			COM_INTERFACE_ENTRY(ICustomTaskPaneConsumer)
		END_COM_MAP()

	public:
		//IDTExtensibility2 implementation:
		STDMETHOD(OnConnection)(IDispatch * Application, AddInDesignerObjects::ext_ConnectMode ConnectMode, IDispatch *AddInInst, SAFEARRAY **custom);
		STDMETHOD(OnDisconnection)(AddInDesignerObjects::ext_DisconnectMode RemoveMode, SAFEARRAY **custom);
		STDMETHOD(OnAddInsUpdate)(SAFEARRAY **custom);
		STDMETHOD(OnStartupComplete)(SAFEARRAY **custom);
		STDMETHOD(OnBeginShutdown)(SAFEARRAY **custom);

		//IRibbonExtensibility implementation
		STDMETHOD(GetCustomUI)(BSTR RibbonID, BSTR * RibbonXml);

		STDMETHOD(CTPFactoryAvailable)(ICTPFactory * CTPFactoryInst);

		STDMETHOD(TangramCommand)(IDispatch* RibbonControl);
		STDMETHOD(TangramGetImage)(BSTR strValue, IPictureDisp ** ppDispImage);
		STDMETHOD(TangramGetVisible)(IDispatch* RibbonControl, VARIANT* varVisible);
		STDMETHOD(TangramOnLoad)(IDispatch* RibbonControl);
		STDMETHOD(TangramGetItemCount)(IDispatch* RibbonControl, long* nCount);
		STDMETHOD(TangramGetItemLabel)(IDispatch* RibbonControl, long nIndex, BSTR* bstrLabel);
		STDMETHOD(TangramGetItemID)(IDispatch* RibbonControl, long nIndex, BSTR* bstrID);
		STDMETHOD(get_TangramCore)(IDispatch** pVal);
		STDMETHOD(get_RemoteHelperHWND)(LONGLONG* pVal);
		STDMETHOD(get_DocTemplateXml)(BSTR bstrTemplateXml, BSTR* pVal);
		STDMETHOD(put_DocTemplateXml)(BSTR bstrTemplateXml, BSTR newVal);

	protected:
		void _AddTangramXml(Office::_CustomXMLParts* pCustomXMLParts, BSTR bstrXml, BSTR bstrKey, BSTR* bstrRet, VARIANT_BOOL* bSuccess);
		void _GetTangramXml(Office::_CustomXMLParts* pCustomXMLParts, BSTR bstrKey, BSTR* pbstrXml);

	private:
		CString					m_strLib;
		CString					m_strAddinID;
		CString					m_strTemplateXML;
		ITangram*				m_pTangram;
		IDispatch*				m_pApplication;
		CComQIPtr<IRibbonUI>	m_spRibbonUI;
		CTangramOfficePlusApp*	m_pTangramOfficeApp;
	};
}

