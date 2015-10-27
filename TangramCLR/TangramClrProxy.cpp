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

// HostExtender.cpp : Implementation of CTangramNavigator

#include "stdafx.h"
#include "dllmain.h"
#include "TangramClrProxy.h"
#include "TangramNodeCLREvent.h"

using namespace TangramCLR;

typedef HRESULT (__stdcall *TangramCLRCreateInstance)(REFCLSID clsid, REFIID riid, /*iid_is(riid)*/ LPVOID *ppInterface);

CTangramCLRProxy theAppProxy;

CTangramCLRProxy::CTangramCLRProxy()
{
	Application::EnableVisualStyles();
	m_pSystemAssembly = nullptr;
	m_htObjects = gcnew Hashtable();

	CComPtr<ITangramCore> pTangramCore;
	pTangramCore.CoCreateInstance(CComBSTR("Tangram.Tangram.1"));
	theApp.m_pTangramCore = pTangramCore.Detach();
	if (theApp.m_pTangramCore)
	{
		theApp.DispEventAdvise(theApp.m_pTangramCore);
		theApp.m_pTangramCore->ConnectCLRProxy((LONGLONG)this);
	}
	m_pTangramProxy = gcnew TangramProxy();
}

CTangramCLRProxy::~CTangramCLRProxy()
{
	TangramCLR::TangramCore^ pManager = TangramCLR::TangramCore::GetTangramCore();
	delete pManager;
	if (m_pTangramProxy)
	{
		delete m_pTangramProxy;
	}
}

BSTR CTangramCLRProxy::AttachObjEvent(IDispatch* EventObj, IDispatch* SourceObj, TangramEventType EventType, IDispatch* HTMLWindow)
{
	BSTR bstrRet = L"";
	Control^ pCtrl = (Control^)Marshal::GetObjectForIUnknown((IntPtr)SourceObj);
	if (pCtrl != nullptr)
	{
		bstrRet = STRING2BSTR(pCtrl->Name);
		LONGLONG nIndex = (LONGLONG)HTMLWindow;
		HWND hWnd = (HWND)pCtrl->Handle.ToInt64();
		ObjectEventInfo* pInfo = (ObjectEventInfo*)::GetWindowLongPtr(hWnd, GWLP_USERDATA);
		if (pInfo == NULL)
		{
			m_pTangramProxy->AttachHandleDestroyedEvent(pCtrl);
			pInfo = new ObjectEventInfo();
			::SetWindowLongPtr(hWnd, GWLP_USERDATA, (LONG_PTR)pInfo);
		}
		CComQIPtr<ITangramEvent> pTangramEvent(EventObj);
		if (pTangramEvent)
		{
			if (pInfo)
			{
				ObjectEventInfo2* pObjectEventInfo2 = NULL;
				map<LONGLONG, ObjectEventInfo2*>::iterator it2 = pInfo->m_mapEventObj2.find(nIndex);
				if (it2 == pInfo->m_mapEventObj2.end())
				{
					pObjectEventInfo2 = new ObjectEventInfo2();
					pInfo->m_mapEventObj2[nIndex] = pObjectEventInfo2;
				}
				else
					pObjectEventInfo2 = it2->second;
				map<TangramEventType, ITangramEvent*>::iterator it = pObjectEventInfo2->m_mapEventObj.find(EventType);
				if (it == pObjectEventInfo2->m_mapEventObj.end())
				{
					pObjectEventInfo2->m_mapEventObj[EventType] = pTangramEvent.p;
					m_pTangramProxy->AttachEvent(pCtrl, EventType);
				}
			}
		}
	}
	return bstrRet;
}

HRESULT CTangramCLRProxy::ActiveCLRMethod(BSTR bstrObjID, BSTR bstrMethod, BSTR bstrParam, BSTR bstrData)
{
	cli::array<Object^, 1>^ pObjs = { BSTR2STRING(bstrParam), BSTR2STRING(bstrData) };
	TangramCLR::TangramCore::ActiveMethod(BSTR2STRING(bstrObjID), BSTR2STRING(bstrObjID), pObjs);
	return S_OK;
}

IDispatch* CTangramCLRProxy::CreateCLRObj(BSTR bstrObjID)
{
	Object^ pObj = TangramCLR::TangramCore::CreateObject(BSTR2STRING(bstrObjID));
	if (pObj != nullptr)
		return (IDispatch*)Marshal::GetIUnknownForObject(pObj).ToPointer();
	return NULL;
}

Control^ CTangramCLRProxy::GetCanSelect(Control^ ctrl, bool direct)
{
	int nCount = ctrl->Controls->Count;
	Control^ pCtrl = nullptr;
	if (nCount)
	{
		for (int i = direct ? (nCount - 1):0; direct ? i >= 0 : i <= nCount - 1; direct ? i-- : i++)
		{
			pCtrl = ctrl->Controls[i];
			if (direct && pCtrl->TabStop && pCtrl->Visible && pCtrl->Enabled)
				return pCtrl;
			pCtrl = GetCanSelect(pCtrl, direct);
			if (pCtrl != nullptr)
				return pCtrl;
		}
	}
	else if ((ctrl->CanSelect||ctrl->TabStop)&&ctrl->Visible&&ctrl->Enabled)
		return ctrl;
	return nullptr;
}

HRESULT CTangramCLRProxy::ProcessCtrlMsg(HWND hCtrl,bool bShiftKey)
{
	Control^ pCtrl = (Control^)Control::FromHandle((IntPtr)hCtrl);
	if (pCtrl == nullptr)
		return S_FALSE;
	Control^ pChildCtrl = GetCanSelect(pCtrl, !bShiftKey);
	
	if (pChildCtrl)
		pChildCtrl->Select();
	return S_OK;
}

BOOL CTangramCLRProxy::ProcessFormMsg(HWND hFormWnd, LONG lpMSG, int nMouseButton)
{
	Control^ Ctrl = Form::FromHandle((IntPtr)hFormWnd);
	LPMSG lpMsg = (LPMSG)lpMSG;
	if (Ctrl == nullptr)
		return S_FALSE;
	Message Msg;
	Msg.HWnd = (IntPtr)lpMsg->hwnd;
	Msg.Msg = lpMsg->message;
	Msg.WParam = (IntPtr)((LONG)lpMsg->wParam);
	Msg.LParam = (IntPtr)lpMsg->lParam;
	Form^ pForm = static_cast<Form^>(Ctrl);
	if (pForm == nullptr)
		return Ctrl->PreProcessMessage(Msg);
	if (pForm->IsMdiContainer)
	{
		Ctrl = pForm->ActiveControl;
		if (Ctrl!=nullptr)
			return Ctrl->PreProcessMessage(Msg);
	}
	return pForm->PreProcessMessage(Msg);
}

HRESULT CTangramCLRProxy::CloseForms()
{
	FormCollection^ pCollection = Application::OpenForms;
	int nCount = pCollection->Count;
	while (pCollection->Count>0)
	{
		Form^ pForm = pCollection[0];
		pForm->Close();
		delete pForm;
	}

	return S_OK;
}

IDispatch* CTangramCLRProxy::TangramCreateObject(BSTR bstrObjID, LONGLONG hParent, ITangramNode* pHostNode)
{
	String^ strID = BSTR2STRING(bstrObjID);
	// Marshal::PtrToStringUni((System::IntPtr)LPTSTR(LPCTSTR(bstrObjID)));
	//if (hParent)
	//	m_pTangramProxy->m_hParentWnd = (HWND)hParent;

	Control^ pObj = static_cast<Control^>(TangramCLR::TangramCore::CreateObject(strID));

	if (pObj != nullptr&&pHostNode)
	{
		CComPtr<ITangramNode> pRootNode = NULL;
		pHostNode->get_RootNode(&pRootNode);
		m_pTangramProxy->DelegateEvent(pObj, pHostNode);
		HWND hWnd = (HWND)pObj->Handle.ToInt64();

		return (IDispatch*)(Marshal::GetIUnknownForObject(pObj).ToInt64());
	}
	return NULL;
}

BOOL CTangramCLRProxy::IsWinForm(HWND hWnd)
{
	if (hWnd == 0)
		return FALSE;
	IntPtr handle = (IntPtr)hWnd;
	Control^  pForm = Form::FromHandle(handle);
	if (pForm != nullptr)
	{
		Type^ pType = pForm->GetType()->BaseType;
		while (pType != nullptr&&pType->Name != L"Control")
		{
			if (pType->Name == L"Form")
				return TRUE;
			pType = pType->BaseType;
		}
	}
	return FALSE;
}

IDispatch* CTangramCLRProxy::GetCLRControl(IDispatch* CtrlDisp, BSTR bstrNames)
{
	CString strNames = OLE2T(bstrNames);
	if (strNames != _T(""))
	{
		int nPos = strNames.Find(_T(","));
		if (nPos == -1)
		{
			Control^ pCtrl = (Control^)Marshal::GetObjectForIUnknown((IntPtr)CtrlDisp);
			if (pCtrl != nullptr)
			{
				Control::ControlCollection^ Ctrls = pCtrl->Controls;
				pCtrl = Ctrls[BSTR2STRING(bstrNames)];
				if (pCtrl == nullptr)
				{
					int nIndex = _wtoi(OLE2T(bstrNames));
					pCtrl = Ctrls[nIndex];
				}
				if (pCtrl != nullptr)
					return (IDispatch*)Marshal::GetIDispatchForObject(pCtrl).ToPointer();
			}
			return S_OK;
		}

		Control^ pCtrl = (Control^)Marshal::GetObjectForIUnknown((IntPtr)CtrlDisp);
		while (nPos != -1)
		{
			CString strName = strNames.Left(nPos);
			if (strName != _T(""))
			{
				if (pCtrl != nullptr)
				{
					Control^ pCtrl2 = pCtrl->Controls[BSTR2STRING(strName)];
					if (pCtrl2 == nullptr)
					{
						if (pCtrl->Controls->Count > 0)
							pCtrl2 = pCtrl->Controls[_wtoi(strName)];
					}
					if (pCtrl2 != nullptr)
						pCtrl = pCtrl2;
					else
						return S_OK;
				}
				else
					return S_OK;
			}
			strNames = strNames.Mid(nPos + 1);
			nPos = strNames.Find(_T(","));
			if (nPos == -1)
			{
				if (pCtrl != nullptr)
				{
					Control^ pCtrl2 = pCtrl->Controls[BSTR2STRING(strNames)];
					if (pCtrl2 == nullptr)
					{
						if (pCtrl->Controls->Count > 0)
							pCtrl2 = pCtrl->Controls[_wtoi(strName)];
					}
					if (pCtrl2 == nullptr)
						return S_OK;
					if (pCtrl2 != nullptr)
						return (IDispatch*)Marshal::GetIDispatchForObject(pCtrl2).ToPointer();
				}
			}
		}
	}
	return NULL;
}

BSTR CTangramCLRProxy::GetCtrlName(IDispatch* _pCtrl)
{
	Control^ pCtrl = (Control^)Marshal::GetObjectForIUnknown((IntPtr)_pCtrl);
	if (pCtrl != nullptr)
		return STRING2BSTR(pCtrl->Name);
	return L"";
}

HWND CTangramCLRProxy::GetMDIClientHandle(IDispatch* pMDICtrl)
{
	Form^ pCtrl = (Form^)Marshal::GetObjectForIUnknown((IntPtr)pMDICtrl);
	if (pCtrl != nullptr)
	{
		Control^ ctrl = TangramCLR::TangramCore::GetMDIClient(pCtrl);
		if (ctrl != nullptr)
			return (HWND)ctrl->Handle.ToInt64();
	}
	return NULL;
}

IDispatch* CTangramCLRProxy::GetCtrlByName(IDispatch* CtrlDisp, BSTR bstrName, bool bFindInChild)
{
	try
	{
		Control^ pCtrl = (Control^)Marshal::GetObjectForIUnknown((IntPtr)CtrlDisp);
		if (pCtrl != nullptr)
		{
			cli::array<Control^, 1>^ pArray = pCtrl->Controls->Find(BSTR2STRING(bstrName), bFindInChild);
			if (pArray != nullptr&&pArray->Length)
				return (IDispatch*)Marshal::GetIDispatchForObject(pArray[0]).ToPointer();
		}

	}
	catch (System::Exception^)
	{

	}
	return NULL;
}

BSTR CTangramCLRProxy::GetCtrlValueByName(IDispatch* CtrlDisp, BSTR bstrName, bool bFindInChild)
{
	try
	{
		Control^ pCtrl = (Control^)Marshal::GetObjectForIUnknown((IntPtr)CtrlDisp);
		if (pCtrl != nullptr)
		{
			cli::array<Control^, 1>^ pArray = pCtrl->Controls->Find(BSTR2STRING(bstrName), bFindInChild);
			if (pArray != nullptr&&pArray->Length)
			{
				return STRING2BSTR(pArray[0]->Text);
			}
		}

	}
	catch (System::Exception^)
	{

	}
	return NULL;
}

HWND CTangramCLRProxy::GetCtrlHandle(IDispatch* _pCtrl)
{
	Control^ pCtrl = (Control^)Marshal::GetObjectForIUnknown((IntPtr)_pCtrl);
	if (pCtrl != nullptr)
		return (HWND)pCtrl->Handle.ToInt64();
	return 0;
}

HWND CTangramCLRProxy::IsCtrlCanNavigate(IDispatch* ctrl)
{
	Control^ pCtrl = (Control^)Marshal::GetObjectForIUnknown((IntPtr)ctrl);
	if (pCtrl != nullptr)
	{
		if (pCtrl->Dock == DockStyle::Fill)
			return (HWND)pCtrl->Handle.ToInt64();
	}
	return 0;
}

void CTangramCLRProxy::TangramAction(BSTR bstrXml, ITangramNode* pNode)
{
	CString strXml = OLE2T(bstrXml);
	if (strXml != _T(""))
	{
		CTangramXmlParse m_Parse;
		TangramNode^ pTangramNode = (TangramNode^)theAppProxy._createObject<ITangramNode, TangramNode>(pNode);
		if (pTangramNode&&m_Parse.LoadXml(strXml))
		{
			int nType = m_Parse.attrInt(_T("Type"), 0);
			switch (nType)
			{
			case 5:
				if (pTangramNode != nullptr)
				{
				}
				break;
			default:
				{
					CString strID = m_Parse.attr(_T("ObjID"), _T(""));
					CString strMethod = m_Parse.attr(_T("Method"), _T(""));
					if (strID != _T("") && strMethod != _T(""))
					{
						cli::array<Object^, 1>^ pObjs = { BSTR2STRING(strXml), pTangramNode };
						TangramCLR::TangramCore::ActiveMethod(BSTR2STRING(strID), BSTR2STRING(strMethod), pObjs);
					}
				}
				break;
			}
		}
	}
}


bool CTangramCLRProxy::_insertObject(Object^ key, Object^ val)
{
	Hashtable^ htObjects = (Hashtable^)m_htObjects;
	htObjects[key] = val;
	return true;
}

Object^ CTangramCLRProxy::_getObject(Object^ key)
{
	Hashtable^ htObjects = (Hashtable^)m_htObjects;
	return htObjects[key];
}

bool CTangramCLRProxy::_removeObject(Object^ key)
{
	Hashtable^ htObjects = (Hashtable^)m_htObjects;

	if (htObjects->ContainsKey(key))
	{
		htObjects->Remove(key);
		return true;
	}
	return false;
}

void CTangramNodeEvent::OnExtendComplete()
{
	if (m_pTangramNodeCLREvent)
		m_pTangramNodeCLREvent->OnExtendComplete(NULL);
}

void CTangramNodeEvent::OnDestroy()
{
	if (m_pTangramNodeCLREvent)
	{
		m_pTangramNodeCLREvent->OnDestroy();
		delete m_pTangramNodeCLREvent;
	}
}

void CTangramNodeEvent::OnDocumentComplete(IDispatch* pDocdisp, BSTR bstrUrl)
{
	if (m_pTangramNode!=nullptr)
		m_pTangramNodeCLREvent->OnDocumentComplete(pDocdisp, bstrUrl);
}

void CTangramNodeEvent::OnNodeAddInCreated(IDispatch* pAddIndisp, BSTR bstrAddInID, BSTR bstrAddInXml)
{
	if (m_pTangramNode != nullptr)
		m_pTangramNodeCLREvent->OnNodeAddInCreated(pAddIndisp, bstrAddInID, bstrAddInXml);
}

void CTangramNodeEvent::OnNodeAddInsCreated()
{
	if (m_pTangramNode != nullptr)
		m_pTangramNodeCLREvent->OnNodeAddInsCreated();
}

void CTangramCLRApp::OnClose()
{
	AtlTrace(_T("*************CTangramCLRApp::OnClose:  ****************\n"));
	HRESULT hr = DispEventUnadvise(m_pTangramCore);
	if (m_pTangramCoreCLREvent)
		delete m_pTangramCoreCLREvent;
}

void CTangramCLRApp::OnExtendComplete(long hWnd, BSTR bstrUrl, ITangramNode* pRootNode)
{
	if (m_pTangramCoreCLREvent)
		m_pTangramCoreCLREvent->OnExtendComplete(hWnd,bstrUrl,pRootNode);
}

CTangramClrEvent::CTangramClrEvent()
{

}

CTangramClrEvent::~CTangramClrEvent()
{
}

void __stdcall  CTangramClrEvent::OnDestroy()
{
	if (m_pTangram)
		delete m_pTangram;
}

void CTangramClrEvent::OnInitialize(IDispatch* pHtmlWnd, BSTR bstrUrl)
{
	Object^ pObj = m_pTangram;
	TangramCLR::Tangram^ pTangram = static_cast<TangramCLR::Tangram^>(pObj);
	pTangram->Fire_OnDocumentComplete(pTangram, Marshal::GetObjectForIUnknown((IntPtr)pHtmlWnd), BSTR2STRING(bstrUrl));
}
