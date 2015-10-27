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

#include "StdAfx.h"
#include "dllmain.h"
#include "def.h"
#include "TangramNodeCLREvent.h"
#include "TangramObj.h"

using namespace System::Threading;
using namespace System::Diagnostics;
using namespace System::Reflection;

namespace TangramCLR 
{
	TangramCLR::TangramNode^ TangramCLR::TangramNodeCollection::default::get(int iIndex)
	{
		TangramNode^ Node = nullptr;
		ITangramNode* pNode = NULL;
		m_pNodeCollection->get_Item(iIndex,&pNode);
		return theAppProxy._createObject<ITangramNode,TangramNode>(pNode);
	}

	TangramCLR::TangramNode::TangramNode(ITangramNode* pNode)
	{
		LONGLONG m_nConnector = 0;
		m_hWnd = NULL;
		m_pTangramNodeEvent = new CTangramNodeEvent();
		m_pTangramNodeEvent->m_pTangramNode = pNode;
		m_pTangramNodeEvent->m_pTangramNodeCLREvent = new CTangramNodeCLREvent();
		m_pTangramNodeEvent->m_pTangramNodeCLREvent->m_pTangramNode = this;
		HRESULT hr = m_pTangramNodeEvent->DispEventAdvise(pNode);
		theAppProxy.m_pProxy->AttachNode(m_pTangramNodeEvent);
		m_pChildNodes = nullptr;
		SetNewNode(pNode);
		unsigned long nValue = (unsigned long)pNode;
		theAppProxy._insertObject(nValue, this);
	}

	TangramCLR::TangramNode::~TangramNode()
	{
		SetNewNode(NULL);
	}

	TangramCLR::TangramNodeCollection^ TangramCLR::TangramNode::ChildNodes::get()
	{
		if (m_pChildNodes == nullptr)
		{
			CComPtr<ITangramNodeCollection> pNodes = NULL;

			m_pTangramNode->get_ChildNodes(&pNodes);
			m_pChildNodes = gcnew TangramNodeCollection(pNodes);
		}
		return m_pChildNodes;
	}

	TangramCLR::Tangram^ TangramCLR::TangramNode::Tangram::get()
	{
		CComPtr<ITangram> pTangram;
		m_pTangramNode->get_Tangram(&pTangram);

		if (pTangram)
		{
			return theAppProxy._createObject<ITangram, TangramCLR::Tangram>(pTangram);
		}
		return nullptr;
	}

	String^ TangramCLR::TangramNode::Caption::get()
	{
		if(m_pTangramNode)
		{
			CComBSTR bstrCap("");
			m_pTangramNode->get_Caption(&bstrCap);
			String^ strCap = Marshal::PtrToStringUni((System::IntPtr)LPTSTR(LPCTSTR(bstrCap)));
			return strCap;
		}
		return "";
	}

	void TangramCLR::TangramNode::Init()
	{
		LONGLONG h = 0;
		if (m_pTangramNode)
		{ 
			m_pTangramNode->get_Handle(&h);
			::SendMessage((HWND)h, WM_TANGRAMMSG, 1, 0);
		}
	}

	Object^ TangramCLR::TangramNode::PlugIn::get(String^ strObjName)
	{
		Object^ pObj = nullptr;
		if(m_pTangramNode)
		{
			TangramNode^ pRootNode = this->RootNode;
			if (pRootNode->m_pTangramPlugInDic == nullptr)
			{
				pRootNode->m_pTangramPlugInDic = gcnew Dictionary<String^, Object^>();
			}
			if (pRootNode->m_pTangramPlugInDic->TryGetValue(strObjName, pObj) == false)
			{
				IDispatch* pDisp = NULL;
				LRESULT hr = m_pTangramNode->get_AxPlugIn(STRING2BSTR(strObjName),&pDisp);
				if(SUCCEEDED(hr)&&pDisp)
				{
					Object^ pObj = reinterpret_cast<Object^>(Marshal::GetObjectForIUnknown((System::IntPtr)(pDisp)));
					pRootNode->m_pTangramPlugInDic[strObjName] = pObj;
					return pObj;
				}

			}
		}
		return pObj;
	}

	TangramCLR::TangramCore::TangramCore()
	{
		m_nMDIClientHandle = (IntPtr)0;
		theApp.m_pTangramCoreCLREvent = new CTangramCoreCLREvent();
	}

	TangramCLR::TangramCore::~TangramCore(void)
	{
	}


	Object^ TangramCLR::TangramCore::Application::get()
	{
		Object^ pRetObject = nullptr;
		if (theApp.m_pTangramCore)
		{
			try
			{
				IDispatch* pApp = NULL;
				theApp.m_pTangramCore->get_Application(&pApp);
				if (pApp)
				{
					pRetObject = Marshal::GetObjectForIUnknown((System::IntPtr)pApp);
				}
			}
			catch (InvalidOleVariantTypeException^e)
			{

			}
			catch (NotSupportedException^ e)
			{

			}
		}
		return pRetObject;
	}

	void TangramCLR::TangramCore::Application::set(Object^ obj)
	{
		if (theApp.m_pTangramCore)
		{
			try
			{
				VARIANT var;
				Marshal::GetNativeVariantForObject(obj, (System::IntPtr)&var);
				theApp.m_pTangramCore->put_ExternalInfo(var);
			}
			catch (ArgumentException^ e)
			{

			}
		}
	}

	TangramNode^ TangramCLR::TangramCore::CreatingNode::get()
	{
		Object^ pRetObject = nullptr;
		if (theApp.m_pTangramCore)
		{
			ITangramNode* pNode = NULL;
			theApp.m_pTangramCore->get_CreatingNode(&pNode);
			if (pNode)
				return theAppProxy._createObject<ITangramNode, TangramNode>(pNode);
		}
		return nullptr;
	}

	String^ TangramCLR::TangramCore::TangramVal::get(String^ iIndex)
	{
		CComVariant bstrVal(::SysAllocString(L""));
		theApp.m_pTangramCore->get_TangramVal(STRING2BSTR(iIndex), &bstrVal);
		String^ strVal = BSTR2STRING(bstrVal.bstrVal);
		//::SysFreeString(bstrVal);
		return strVal;
	}

	void TangramCLR::TangramCore::TangramVal::set(String^ iIndex, String^ newVal)
	{
		theApp.m_pTangramCore->put_TangramVal(STRING2BSTR(iIndex), CComVariant(STRING2BSTR(newVal)));
	}

	void TangramCLR::TangramCore::Fire_OnClose()
	{
		OnClose();
	}

	int TangramCLR::TangramCore::InitTangram (String^ pwzArgument)
	{
		return 0;
	}

	Control^ TangramCLR::TangramCore::GetMDIClient(Form^ pForm)
	{	
		if (pForm&&pForm->IsMdiContainer)
		{
			int nCount = pForm->Controls->Count;
			String^ strName = L"";
			for (int i = nCount - 1; i >= 0; i--)
			{
				Control^ pCtrl = pForm->Controls[i];
				strName = pCtrl->GetType()->Name->ToLower();
				if (strName == L"mdiclient")
				{
					return pCtrl;
				}
			}
		}
		return nullptr;
	}

	Object^ TangramCLR::TangramCore::ActiveMethod(String^ strObjID, String^ strMethod, cli::array<Object^, 1>^ p)
	{
		Object^ pRetObj = nullptr;
		TangramCLR::TangramCore^ pApp = TangramCore::GetTangramCore();
		String^ strIndex = strObjID + L"|" + strMethod;
		MethodInfo^ mi = nullptr;
		Object^ pObj = nullptr;
		if (pApp->m_pTangramCLRMethodDic->TryGetValue(strIndex, mi) == true)
		{
			try
			{
				pRetObj = mi->Invoke(pObj, p);
			}
			finally
			{
			}
			return pRetObj;
		}

		if (pApp->m_pTangramCLRObjDic->TryGetValue(strObjID, pObj) == false)
		{
			pObj = CreateObject(strObjID);
			pApp->m_pTangramCLRObjDic[strObjID] = pObj;
		}
		if (pObj != nullptr)
		{
			MethodInfo^ mi = nullptr;
			try
			{
				mi = pObj->GetType()->GetMethod(strMethod);
				pApp->m_pTangramCLRMethodDic[strIndex] = mi;
			}
			catch (AmbiguousMatchException^ e)
			{
				Debug::WriteLine(L"Tangram::ActiveMethod GetMethod: " + e->Message);
			}
			catch (ArgumentNullException^ e)
			{
				Debug::WriteLine(L"Tangram::ActiveMethod GetMethod: " + e->Message);
			}
			finally
			{
				if (mi != nullptr)
				{
					try
					{
						pRetObj = mi->Invoke(pObj, p);
					}
					finally
					{
					}
				}
			}
		}

		return pRetObj;
	}
			
	Object^ TangramCLR::TangramCore::ActiveObjectMethod(Object^ pObj, String^ strMethod, cli::array<Object^, 1>^ p)
	{
		Object^ pRetObj = nullptr;

		if (pObj != nullptr)
		{
			MethodInfo^ mi = nullptr;
			try
			{
				mi = pObj->GetType()->GetMethod(strMethod);
			}
			catch (AmbiguousMatchException^ e)
			{
				Debug::WriteLine(L"Tangram::ActiveMethod GetMethod: " + e->Message);
			}
			catch (ArgumentNullException^ e)
			{
				Debug::WriteLine(L"Tangram::ActiveMethod GetMethod: " + e->Message);
			}
			finally
			{
				if (mi != nullptr)
				{
					try
					{
						pRetObj = mi->Invoke(pObj, p);
					}
					finally
					{
					}
				}
			}
		}

		return pRetObj;
	}

	Tangram^ TangramCLR::TangramCore::CreateTangram(Control^ ctrl, Object^ ExternalObj)
	{
		if (ctrl != nullptr)
		{
			LONGLONG hWnd = ctrl->Handle.ToInt64();
			CComPtr<ITangram> pTangram;
			theApp.m_pTangramCore->CreateTangram(hWnd, &pTangram);
			if (pTangram)
			{
				Tangram^ _pTangram =  theAppProxy._createObject<ITangram, Tangram>(pTangram);
				if (_pTangram != nullptr&&ExternalObj != nullptr)
				{
					_pTangram->External = ExternalObj; 
					return _pTangram;
				}
			}
		}
		return nullptr;
	}

	Object^ TangramCLR::TangramCore::CreateObject(String^ strObjID)
	{
		if (String::IsNullOrEmpty(strObjID) == true)
			return nullptr;
		String^ m_strID = strObjID->ToLower();
		String^ strLib = nullptr;
		Object^ m_pObj = nullptr;
		if (m_strID != L"")
		{
			Type^ pType = nullptr;
			TangramCore^ pApp = TangramCore::GetTangramCore();
			Monitor::Enter(pApp->m_pTangramCLRTypeDic);
			String^ strID = nullptr;
			if (pApp->m_pTangramCLRTypeDic->TryGetValue(m_strID, pType) == false)
			{
				Assembly^ m_pDotNetAssembly = nullptr;
				bool bSystemObj = false;
				int nIndex = m_strID->IndexOf(L",");
				strID = m_strID->Substring(0, nIndex);
				strLib = m_strID->Substring(nIndex + 1, m_strID->Length - nIndex - 1);
				nIndex = m_strID->IndexOf(L"system.windows.forms");
				if (nIndex != -1)
				{
					bSystemObj = true;
					Control^ pObj = gcnew Control();
					m_pDotNetAssembly = pObj->GetType()->Assembly;
				}
				else
				{
					try
					{
						m_pDotNetAssembly = Assembly::Load(strLib);
					}
					catch (ArgumentNullException^ e)
					{
						Debug::WriteLine(L"Tangram CreateObject: " + e->Message);
					}
					catch (ArgumentException^ e)
					{
						Debug::WriteLine(L"Tangram CreateObject: " + e->Message);
					}
					catch (FileNotFoundException^ e)
					{
						Debug::WriteLine(L"Tangram CreateObject: " + e->Message);
					}
					catch (FileLoadException^ e)
					{
						Debug::WriteLine(L"Tangram CreateObject: " + e->Message);
					}
					catch (BadImageFormatException^ e)
					{
						Debug::WriteLine(L"Tangram CreateObject: " + e->Message);
					}
				}
				if (m_pDotNetAssembly != nullptr)
				{
					try
					{
						pType = m_pDotNetAssembly->GetType(strID, true, true);
					}
					catch (TypeLoadException^ e)
					{
						Debug::WriteLine(L"Tangram CreateObject Assembly->GetType: " + e->Message);
					}
					catch (ArgumentNullException^ e)
					{
						Debug::WriteLine(L"Tangram CreateObject Assembly->GetType: " + e->Message);
					}
					catch (ArgumentException^ e)
					{
						Debug::WriteLine(L"Tangram CreateObject Assembly->GetType: " + e->Message);
					}
					catch (FileNotFoundException^ e)
					{
						Debug::WriteLine(L"Tangram CreateObject Assembly->GetType: " + e->Message);
					}
					catch (FileLoadException^ e)
					{
						Debug::WriteLine(L"Tangram CreateObject Assembly->GetType: " + e->Message);
					}
					catch (BadImageFormatException^ e)
					{
						Debug::WriteLine(L"Tangram CreateObject Assembly->GetType: " + e->Message);
					}
					finally
					{
						if (pType != nullptr)
						{
							pApp->m_pTangramCLRTypeDic->Add(m_strID, pType);
						}
						if (m_pDotNetAssembly != nullptr)
							delete m_pDotNetAssembly;
					}
				}
			}
			Monitor::Exit(pApp->m_pTangramCLRTypeDic);
			if (pType)
			{
				try
				{
					m_pObj = (Object^)Activator::CreateInstance(pType);
				}
				catch (TypeLoadException^ e)
				{
					Debug::WriteLine(L"Tangram CreateObject Activator::CreateInstance: " + e->Message);
				}
				catch (ArgumentNullException^ e)
				{
					Debug::WriteLine(L"Tangram CreateObject Activator::CreateInstance: " + e->Message);
				}
				catch (ArgumentException^ e)
				{
					Debug::WriteLine(L"Tangram CreateObject Activator::CreateInstance: " + e->Message);
				}
				catch (NotSupportedException^ e)
				{
					Debug::WriteLine(L"Tangram CreateObject Activator::CreateInstance: " + e->Message);
				}
				catch (TargetInvocationException^ e)
				{
					Debug::WriteLine(L"Tangram CreateObject Activator::CreateInstance: " + e->Message);
				}
				catch (MethodAccessException^ e)
				{
					Debug::WriteLine(L"Tangram CreateObject Activator::CreateInstance: " + e->Message);
				}
				catch (InvalidComObjectException^ e)
				{
					Debug::WriteLine(L"Tangram CreateObject Activator::CreateInstance: " + e->Message);
				}
				catch (MissingMethodException^ e)
				{
					Debug::WriteLine(L"Tangram CreateObject Activator::CreateInstance: " + e->Message);
				}
				catch (COMException^ e)
				{
					Debug::WriteLine(L"Tangram CreateObject Activator::CreateInstance: " + e->Message);
				}
			}
		}
		return m_pObj;
	}

	TangramNode^ TangramCLR::TangramNode::Extend(String^ strKey, String^ strXml)
	{
		if (m_pTangramNode)
		{
			BSTR bstrKey = STRING2BSTR(strKey);
			BSTR bstrXml = STRING2BSTR(strXml);
			ITangramNode* pNode = NULL;
			m_pTangramNode->Extend(bstrKey, bstrXml, &pNode);
			::SysFreeString(bstrKey);
			::SysFreeString(bstrXml);
			if (pNode)
			{
				return theAppProxy._createObject<ITangramNode, TangramNode>(pNode);
			}
		}
		return nullptr;
	}

	Object^ TangramCLR::TangramNode::ActiveMethod(String^ strMethod, cli::array<Object^, 1>^ p)
	{
		Object^ pRetObj = nullptr;
		if (m_pHostObj != nullptr)
		{
			MethodInfo^ mi = nullptr;
			if (m_pTangramCLRMethodDic==nullptr)
				m_pTangramCLRMethodDic = gcnew Dictionary<String^, MethodInfo^>();
			Object^ pObj = nullptr;
			if (m_pTangramCLRMethodDic->TryGetValue(strMethod, mi) == true)
			{
				try
				{
					pRetObj = mi->Invoke(m_pHostObj, p);
				}
				finally
				{
				}
				return pRetObj;
			}
			try
			{
				mi = m_pHostObj->GetType()->GetMethod(strMethod);
				m_pTangramCLRMethodDic[strMethod] = mi;
			}
			catch (AmbiguousMatchException^ e)
			{
				Debug::WriteLine(L"Tangram::ActiveMethod GetMethod: " + e->Message);
			}
			catch (ArgumentNullException^ e)
			{
				Debug::WriteLine(L"Tangram::ActiveMethod GetMethod: " + e->Message);
			}
			finally
			{
				if (mi != nullptr)
				{
					try
					{
						pRetObj = mi->Invoke(m_pHostObj, p);
					}
					finally
					{
					}
				}
			}
		}

		return pRetObj;
	}

	//TangramCLR::TangramNode^ TangramCLR::TangramCore::ExtendCtrl(Control^ pCtrl, String^ strFile)
	//{
	//	if(pCtrl==nullptr||String::IsNullOrEmpty(strFile))
	//		return nullptr;
	//	if(pCtrl->Parent==nullptr)
	//		return nullptr;

	//	CComBSTR m_strFile;
	//	IntPtr ip = Marshal::StringToBSTR(strFile);
	//	m_strFile = static_cast<BSTR>(ip.ToPointer());
	//	Marshal::FreeBSTR(ip);

	//	CComPtr<ITangramNode> pDocObj;
	//	theApp.m_pTangramCore->Extend((LONGLONG)pCtrl->Handle.ToInt64(), m_strFile, &pDocObj);
	//	TangramNode^ retNode = theAppProxy._createObject<ITangramNode, TangramNode>(pDocObj);
	//	return retNode;
	//}

	//Object^ TangramCLR::TangramNode::ExecScript(String^ strScript)
	//{
	//	if (String::IsNullOrEmpty(strScript) == false)
	//	{
	//		CComVariant v;
	//		m_pTangramNode->ExecScript(STRING2BSTR(strScript), &v);
	//		Object^ ret =  Marshal::GetObjectForNativeVariant((IntPtr)&v);
	//		return ret;
	//	}
	//	return nullptr;
	//}

	Tangram::Tangram(void)
	{
	}

	Tangram::Tangram(ITangram* pTangram)
	{
		m_pTangram = pTangram;
		unsigned long nValue = (unsigned long)m_pTangram;
		theAppProxy._insertObject(nValue, this);
		m_pTangramClrEvent = new CTangramClrEvent();
		m_pTangramClrEvent->DispEventAdvise(m_pTangram);
		m_pTangramClrEvent->m_pTangram = this;
	}

	Tangram::~Tangram()
	{
		m_pTangramClrEvent->DispEventUnadvise(m_pTangram);
		unsigned long nValue = (unsigned long)m_pTangram;
		theAppProxy._removeObject(nValue);
		delete m_pTangramClrEvent;
	}

	TangramNode^ Tangram::GetTangramNode(String^ strXml, String^ strFrameName)
	{
		if (String::IsNullOrEmpty(strXml) || String::IsNullOrEmpty(strFrameName))
			return nullptr;
		BSTR bstrXml = STRING2BSTR(strXml);
		BSTR bstrFrameName = STRING2BSTR(strFrameName);
		CComPtr<ITangramNode> pNode;
		m_pTangram->GetTangramNode(bstrXml, bstrFrameName, &pNode);
		TangramNode^ pRetNode = nullptr;
		if (pNode)
		{
			pRetNode = theAppProxy._createObject<ITangramNode, TangramNode>(pNode);
		}
		::SysFreeString(bstrXml);
		::SysFreeString(bstrFrameName);
		return pRetNode;
	}

	//void Tangram::ExecScript(String^ strScript)
	//{
	//	if (String::IsNullOrEmpty(strScript))
	//		return;
	//	BSTR bstrScript = STRING2BSTR(strScript);
	//	m_pTangram->ExecScript(bstrScript);
	//	::SysFreeString(bstrScript);
	//}

	void Tangram::AddObjToHtml(String^ strObjName, bool bConnectEvent, Object^ pObj)
	{
		if (String::IsNullOrEmpty(strObjName) || pObj == nullptr)
			return;

		BSTR bstrName = STRING2BSTR(strObjName);
		m_pTangram->AddObjToHtml(bstrName, bConnectEvent, (IDispatch*)Marshal::GetIUnknownForObject(pObj).ToPointer());
		::SysFreeString(bstrName);
	}

	TangramNode^ TangramFrame::ExtendXml(String^ strKeyName,String^ strXml)
	{
		if (String::IsNullOrEmpty(strXml) || String::IsNullOrEmpty(strKeyName))
			return nullptr;
		BSTR bstrXml = STRING2BSTR(strXml);
		BSTR bstrKey = STRING2BSTR(strKeyName);
		CComPtr<ITangramNode> pNode;
		m_pTangramFrame->Extend(bstrKey,bstrXml, &pNode);
		TangramNode^ pRetNode = nullptr;
		if (pNode)
		{
			pRetNode = theAppProxy._createObject<ITangramNode, TangramNode>(pNode);
		}
		::SysFreeString(bstrXml);
		::SysFreeString(bstrKey);
		return pRetNode;
	}

	Object^ TangramFrame::FrameData::get(String^ iIndex)
	{
		CComVariant bstrVal(::SysAllocString(L""));
		m_pTangramFrame->get_FrameData(STRING2BSTR(iIndex), &bstrVal);
		return Marshal::GetObjectForNativeVariant((IntPtr)&bstrVal);;
	}

	void TangramFrame::FrameData::set(String^ iIndex, Object^ newVal)
	{
		IntPtr nPtr = (IntPtr)0;
		Marshal::GetNativeVariantForObject(newVal, nPtr);

		m_pTangramFrame->put_FrameData(STRING2BSTR(iIndex), *(VARIANT*)nPtr.ToInt64());
	}
}