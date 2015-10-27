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
#include "Tangram.h"
#include "TangramClrProxy.h"
#include <map>

using namespace std;

using namespace System;
using namespace System::Windows;
using namespace System::Reflection;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::IO;

using System::Runtime::InteropServices::Marshal;

extern CTangramCLRProxy theAppProxy;;
class CTangramNodeEvent;


namespace TangramCLR 
{
	//[Guid("54499D5E-AC2F-4F8B-9782-C00A9BB2F4E2")]
	//[ComVisibleAttribute(true)]
	//[InterfaceTypeAttribute(ComInterfaceType::InterfaceIsIDispatch)]
	//public interface class IManagerExtender
	//{
	//	[DispId(0x000001)]
	//	virtual void CloseForm(System::Object^ pForm);
	//	[DispId(0x000002)]
	//	virtual void OnCloseForm(long long hFormWnd);
	//};

	/// <summary>
	/// Summary for Tangram
	/// </summary>
	ref class TangramNode;
	public enum class TangramNodeType
	{
		TNT_Blank			= 0x00000001,
		TNT_ActiveX			= 0x00000002,
		TNT_Splitter		= 0x00000004,
		TNT_Tabbed			= 0x00000008,

		TNT_CLR_Control		= 0x00000010,
		TNT_CLR_Form		= 0x00000020,
		TNT_CLR_Window		= 0x00000040,

		TNT_View			= 0x00000080		
	};

	template<typename T> 
	private ref class TangramBaseEnumerator : public System::Collections::IEnumerator
	{
	public:
		TangramBaseEnumerator(T^ v, int iCount)
		{
			m_pT = v;
			nCount = iCount;
			Reset();
		}

		virtual property Object^ Current
		{
			Object^ get()
			{
				if(index < 0 || index >= nCount)
				{
					throw gcnew InvalidOperationException();
				}
				return m_pT->default[index];
			}
		}

		virtual bool MoveNext()
		{
			index++;
			return (index < nCount);
		} 

		virtual void Reset()
		{
			index = -1;
		}

	private:
		int index;		
		long nCount;
		T^ m_pT;
	};

	ref class Tangram;
	ref class TangramNode;
	
	public ref class TangramNodeCollection : public System::Collections::IEnumerable
	{
	public:
		TangramNodeCollection(ITangramNodeCollection* pNodes)
		{		
			SetNewNodeCollection(pNodes);
		};

		~TangramNodeCollection()
		{
			SetNewNodeCollection(NULL);
		}
		
	private:
		ITangramNodeCollection* m_pNodeCollection;

		void SetNewNodeCollection(ITangramNodeCollection* pNodes)
		{
			if (m_pNodeCollection != NULL)
			{
				m_pNodeCollection->Release();
				m_pNodeCollection = NULL;
			}
			if (pNodes != NULL)
			{
				m_pNodeCollection = pNodes;
				m_pNodeCollection->AddRef();					
			}
		}
	public:
		virtual System::Collections::IEnumerator^ GetEnumerator()
		{
			return gcnew TangramBaseEnumerator<TangramNodeCollection>(this,NodeCount);
		}
		
		property TangramNode^ default[int]
		{
			TangramNode^ get(int iIndex);
		}

		property int NodeCount
		{
			int get()
			{
				long n = 0;
				m_pNodeCollection->get_NodeCount(&n);
				return n;
			}
		}		
	};

	ref class TangramFrame;
	public ref class TangramNode
	{	
	public:
		TangramNode(ITangramNode* pNode);
		~TangramNode();

		ITangramNode* m_pTangramNode;
		CTangramNodeEvent* m_pTangramNodeEvent;
		//virtual void CloseForm(Object^ pForm){};
		//virtual void OnCloseForm(long long hFormWnd){};

		delegate void NodeAddInCreated(TangramNode^ sender, Object^ pAddIndisp, String^ bstrAddInID, String^ bstrAddInXml);
		event NodeAddInCreated^ OnNodeAddInCreated;
		void Fire_NodeAddInCreated(TangramNode^ sender, Object^ pAddIndisp, String^ bstrAddInID, String^ bstrAddInXml)
		{
			OnNodeAddInCreated(sender, pAddIndisp, bstrAddInID, bstrAddInXml);
		}

		delegate void NodeAddInsCreated(TangramNode^ sender);
		event NodeAddInsCreated^ OnNodeAddInsCreated;
		void Fire_NodeAddInsCreated(TangramNode^ sender)
		{
			OnNodeAddInsCreated(sender);
		}

		delegate void ExtendComplete(TangramNode^ sender);
		event ExtendComplete^ OnExtendComplete;
		void Fire_ExtendComplete(TangramNode^ sender)
		{
			OnExtendComplete(sender);
		}

		delegate void Destroy(TangramNode^ sender);
		event Destroy^ OnDestroy;
		void Fire_OnDestroy(TangramNode^ sender)
		{
			OnDestroy(sender);
		}

		delegate void DocumentComplete(TangramNode^ sender, Object^ pHtmlDoc, String^ strURL);
		event DocumentComplete^ OnDocumentComplete;
		void Fire_OnDocumentComplete(TangramNode^ sender, Object^ pHtmlDoc, String^ strURL)
		{
			OnDocumentComplete(sender, pHtmlDoc, strURL);
		}

	private:
		HWND m_hWnd;
		Object^ m_pHostObj = nullptr;
		Dictionary<String^, MethodInfo^>^	m_pTangramCLRMethodDic = nullptr;
		Dictionary<String^, Object^>^	m_pTangramPlugInDic = nullptr;
		void SetNewNode(ITangramNode* pNode)
		{
			if (m_pTangramNode != NULL)
			{
				m_pTangramNode = NULL;
			}

			if (pNode != NULL)
			{
				m_pTangramNode = pNode;
			}
		}

	public:		
		void Init();
		//void SaveTangramDoc(String^ m_strName);
		Object^ ActiveMethod(String^ strMethod, cli::array<Object^, 1>^ p);
		//[DispId(0x000001)]
		//[ComVisibleAttribute(true)]
		//Object^ ExecScript(String^ strScript);
		TangramNode^ Extend(String^ strKey, String^ strXml);

		property String^ Caption 
		{
			String^ get();
			void set(String^ strCaption)
			{
				m_pTangramNode->put_Caption(STRING2BSTR(strCaption));
			}
		}

		property Tangram^ Tangram
		{
			TangramCLR::Tangram^ get();
		}

		property String^ Name
		{
			String^ get()
			{
				if(m_pTangramNode)
				{
					CComBSTR bstrCap("");
					m_pTangramNode->get_Name(&bstrCap);
					return BSTR2STRING(bstrCap);
				}
				return "";
			}
		}

		property Object^ XObject
		{
			Object^ get()
			{
				if (m_pHostObj != nullptr)
					return m_pHostObj;

				VARIANT var;
				m_pTangramNode->get_XObject(&var);
				
				try
				{
					m_pHostObj = Marshal::GetObjectForNativeVariant((System::IntPtr)&var);
				}
				catch (InvalidOleVariantTypeException^ e)
				{

				}
				catch (NotSupportedException^ e)
				{

				}
				return m_pHostObj;
			}
		}

		property Object^ Extender
		{
			Object^ get()
			{
				Object^ pRetObject = nullptr;
				IDispatch* pDisp = NULL;
				m_pTangramNode->get_Extender(&pDisp);
				if (pDisp)
					pRetObject = Marshal::GetObjectForIUnknown((IntPtr)pDisp); 
				return pRetObject;
			}
			void set(Object^ obj)
			{
				IDispatch* pDisp = (IDispatch*)Marshal::GetIUnknownForObject(obj).ToPointer();
				m_pTangramNode->put_Extender(pDisp);
			}
		}

		property Object^ Tag
		{
			Object^ get()
			{
				Object^ pRetObject = nullptr;
				VARIANT var;
				m_pTangramNode->get_Tag(&var);	
				try
				{
					pRetObject = Marshal::GetObjectForNativeVariant((System::IntPtr)&var);
				}
				catch (InvalidOleVariantTypeException^ e)
				{

				}
				catch (NotSupportedException^ e)
				{

				}
				return pRetObject;
			}
			void set(Object^ obj)
			{
				try
				{
					VARIANT var;
					Marshal::GetNativeVariantForObject(obj,(System::IntPtr)&var);
					m_pTangramNode->put_Tag(var);
				}
				catch (ArgumentException^ e)
				{

				}
			}
		}

		property TangramFrame^ HostFrame
		{
			TangramFrame^ get()
			{
				CComPtr<ITangramFrame> pTangramFrame;
				m_pTangramNode->get_Frame(&pTangramFrame);

				TangramFrame^ pFrame = theAppProxy._createObject<ITangramFrame,TangramFrame>(pTangramFrame);
				return pFrame;
			}
		}

		property Object^ PlugIn[String^]
		{
			Object^ get(String^ strName);
		}

		property TangramNodeCollection^ ChildNodes
		{
			TangramNodeCollection^ get();
		}

		property TangramNodeCollection^ Objects[TangramNodeType]
		{
			TangramNodeCollection^ get(TangramNodeType nValue)
			{
				CComPtr<ITangramNodeCollection> pNodes = NULL;
				m_pTangramNode->get_Objects((long)nValue,&pNodes);
				return gcnew TangramNodeCollection(pNodes);				
			}
		}

		property TangramNode^ RootNode
		{
			TangramNode^ get()
			{
				CComPtr<ITangramNode> pRootNode;
				m_pTangramNode->get_RootNode(&pRootNode);

				return theAppProxy._createObject<ITangramNode, TangramNode>(pRootNode);
			}
		}

		property TangramNode^ ParentNode
		{
			TangramNode^ get()
			{
				CComPtr<ITangramNode> pRootNode;
				m_pTangramNode->get_ParentNode(&pRootNode);

				return theAppProxy._createObject<ITangramNode,TangramNode>(pRootNode);
			}
		}		
		property int Col
		{
			int get()
			{
				long nValue = 0;
				m_pTangramNode->get_Col(&nValue);
				return nValue;
			}
		}
		property int Row
		{
			int get()
			{
				long nValue = 0;
				m_pTangramNode->get_Row(&nValue);
				return nValue;
			}
		}
		property int Rows
		{
			int get()
			{
				long nValue = 0;
				m_pTangramNode->get_Rows(&nValue);
				return nValue;
			}
		}
		property int Cols
		{
			int get()
			{
				long nValue = 0;
				m_pTangramNode->get_Cols(&nValue);
				return nValue;
			}
		}

		property TangramNodeType NodeType
		{
			TangramNodeType get()
			{
				::TangramNodeType type;
				m_pTangramNode->get_NodeType(&type);
				return (TangramCLR::TangramNodeType)type;
			}
		}

		property __int64 Handle
		{
			__int64 get()
			{
				if (m_hWnd)
					return (__int64)m_hWnd;
				__int64 h = 0;
				m_pTangramNode->get_Handle(&h);
				m_hWnd = (HWND)h;
				return h;
			}
		}

		property String^ Attribute[String^]
		{
			String^ get(String^ strKey)
			{
				BSTR bstrVal;
				m_pTangramNode->get_Attribute(STRING2BSTR(strKey),&bstrVal);

				return BSTR2STRING(bstrVal);
			}

			void set(String^ strKey, String^ strVal)
			{
				m_pTangramNode->put_Attribute(
					STRING2BSTR(strKey),
					STRING2BSTR(strVal));
			}
		}

public:
	TangramNode^ GetNode(int nRow, int nCol)
	{
		ITangramNode* pNode;		
		m_pTangramNode->GetNode(nRow,nCol,&pNode);

		TangramNode^ tNode = theAppProxy._createObject<ITangramNode,TangramNode>(pNode);

		return tNode;
	}

	int GetNodes(String^ strName, TangramNode^% pNode, TangramNodeCollection^% pNodeCollection)
	{
		ITangramNodeCollection* pNodes;
		ITangramNode* pTNode;

		pNode = nullptr;
		pNodeCollection = nullptr;

		long nCount;
		m_pTangramNode->GetNodes(STRING2BSTR(strName),
			&pTNode,&pNodes,&nCount);

		pNode = theAppProxy._createObject<ITangramNode,TangramNode>(pTNode);

		pNodeCollection = gcnew TangramNodeCollection(pNodes);
		
		pNodes->Release();

		return nCount;
	}

	//void Unload()
	//{
	//	m_pTangramNode->Unload();
	//}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		TangramNodeCollection^ m_pChildNodes;
	};

	public ref class TangramFrame
	{
	public:
		TangramFrame(ITangramFrame* pFrame)
		{
			m_pTangramFrame = pFrame;
			//m_pRootNodes = nullptr;
		}
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TangramFrame()
		{
		}

	protected:
		ITangramFrame* m_pTangramFrame;

	public:
		TangramNode^ ExtendXml(String^ bstrXml, String^ bstrKeyName);
		void Attach(bool bAttach)
		{
			if(m_pTangramFrame)
			{
				if(bAttach)
				{
					m_pTangramFrame->Attach();
				}
				else
				{
					m_pTangramFrame->Detach();
				}
			}
		}

		property Object^ FrameData[String^]
		{
			Object^ get(String^ iIndex);
			void set(String^ iIndex, Object^ newVal);
		}
			
		property TangramNodeCollection^ RootNodes
		{
			TangramNodeCollection^ get()
			{
				CComPtr<ITangramNodeCollection> pNodes = NULL;
				m_pTangramFrame->get_RootNodes(&pNodes);

				return gcnew TangramNodeCollection(pNodes.p);
			}
		}
	};

	public ref class TangramCore
	{
	public:
		TangramCore();
		~TangramCore();
		static Dictionary<String^, Type^>^	m_pTangramCLRTypeDic = gcnew Dictionary<String^, Type^>();
	private:
		static Dictionary<String^, Object^>^	m_pTangramCLRObjDic = gcnew Dictionary<String^, Object^>();
		static Dictionary<String^, MethodInfo^>^	m_pTangramCLRMethodDic = gcnew Dictionary<String^, MethodInfo^>();
		IntPtr				m_nMDIClientHandle;
		static TangramCore^		m_pManager;

	public:
		static Tangram^ CreateTangram(Control^ ctrl,Object^ ExternalObj);
		static Object^ CreateObject(String^ ObjID);
		static Object^ ActiveMethod(String^ strObjID, String^ strMethod, cli::array<Object^, 1>^ p);
		static Object^ ActiveObjectMethod(Object^ pObj, String^ strMethod, cli::array<Object^, 1>^ p);
		static Control^ GetMDIClient(Form^ pForm);
		//static TangramNode^ ExtendCtrl(Control^ pCtrl, String^ strFile);		
		static int InitTangram (String^ pwzArgument);

		static TangramCore^ GetTangramCore()
		{
			 if(m_pManager==nullptr)
				 m_pManager = gcnew TangramCore();
			 return m_pManager;
		}
		
		static property Object^ Application 
		{
			Object^ get();
			void set(Object^ obj);
		}

		static property TangramNode^ CreatingNode 
		{
			TangramNode^ get();
		}

		delegate void Close();
		event Close^ OnClose;
		void Fire_OnClose();

		delegate void ExtendComplete(IntPtr hWnd, String^ bstrUrl, TangramNode^ pRootNode);
		event ExtendComplete^ OnExtendComplete;
		void Fire_OnExtendComplete(IntPtr hWnd, String^ bstrUrl, TangramNode^ pRootNode)
		{
			OnExtendComplete(hWnd, bstrUrl, pRootNode);
		}

		//delegate void DocumentComplete(Object^ Doc, String^ bstrUrl);
		//event DocumentComplete^ OnDocumentComplete;
		//void Fire_OnDocumentComplete(Object^ Doc, String^ bstrUrl)
		//{
		//	OnDocumentComplete(Doc, bstrUrl);
		//}

		property String^ TangramVal[String^]
		{
			String^ get(String^ iIndex);
			void set(String^ iIndex, String^ newVal);
		}
	};

	/// <summary>
	/// Tangram 
	/// </summary>
	//[ComSourceInterfacesAttribute("TangramCLR.ITangramExtender,TangramCLR2")]
	ref class TangramNode;
	public ref class Tangram : public IWin32Window
	{
	public:
		Tangram(void);
		Tangram(ITangram* pTangram);

		property IntPtr Handle {
			virtual IntPtr get()
			{
				LONGLONG h = 0;
				m_pTangram->get_Handle(&h);
				return (IntPtr)h;
			};
		}

		property String^ URL
		{
			String^ get()
			{
				String^ strRet = nullptr;
				CComBSTR bstr(L"");
				m_pTangram->get_URL(&bstr);
				strRet = BSTR2STRING(bstr); 
				return strRet;
			}
			void set(String^ newVal)
			{
 				CComBSTR bstr = STRING2BSTR(newVal);
				m_pTangram->put_URL(bstr);
			}
		}

		property Object^ External
		{
			void set(Object^ newVal)
			{
				if (newVal != nullptr)
				{
					IDispatch* pDisp = (IDispatch*)Marshal::GetIUnknownForObject(newVal).ToPointer();
					if (pDisp)
						m_pTangram->put_External(pDisp);
				}
			}
		}

		property String^ FrameName[Control^]
		{
			String^ get(Control^ ctrl)
			{
				if (ctrl != nullptr)
				{
					LONGLONG hWnd = ctrl->Handle.ToInt64();
					BSTR bstrName = ::SysAllocString(L"");
					m_pTangram->get_FrameName(hWnd, &bstrName);
					String^ strRet = BSTR2STRING(bstrName);
					::SysFreeString(bstrName);
					return strRet;
				}
				return String::Empty;
			}
		}

		property String^ FrameName[IntPtr]
		{
			String^ get(IntPtr handle)
			{
				if (::IsWindow((HWND)handle.ToInt64()))
				{
					BSTR bstrName = ::SysAllocString(L"");
					m_pTangram->get_FrameName(handle.ToInt64(), &bstrName);
					String^ strRet = BSTR2STRING(bstrName);
					::SysFreeString(bstrName);
					return strRet;
				}
				return String::Empty;
			}
		}

		property Object^ Extender[String^]
		{
			Object^ get(String^ strName)
			{
				BSTR bstrName = STRING2BSTR(strName);
				CComPtr<IDispatch> pDisp;
				m_pTangram->get_Extender(bstrName, &pDisp);
				::SysFreeString(bstrName);
				return Marshal::GetObjectForIUnknown((IntPtr)pDisp.p);
			}

			void set(String^ strName, Object^ newObj)
			{
				IDispatch* pDisp = (IDispatch*)Marshal::GetIDispatchForObject(newObj).ToPointer();
				m_pTangram->put_Extender(STRING2BSTR(strName), pDisp);
			}
		}

		property TangramFrame^ Frames[Object^]
		{
			TangramFrame^ get(Object^ obj)
			{
				CComVariant m_v;
				IntPtr handle = (IntPtr)&m_v;
				Marshal::GetNativeVariantForObject(obj, handle);
				CComPtr<ITangramFrame> pFrame;
				m_pTangram->get_Frame(m_v, &pFrame);
				if (pFrame)
				{
					return theAppProxy._createObject<ITangramFrame, TangramFrame>(pFrame);
				}
				return nullptr;
			}
		}


		TangramNode^ GetTangramNode(String^ bstrXml, String^ bstrFrameName);

		void AddObjToHtml(String^ strObjName, bool bConnectEvent, Object^ pObj);

		TangramFrame^ CreateFrame(Control^ ctrl, String^ strName)
		{
			if (ctrl != nullptr&&String::IsNullOrEmpty(strName) == false)
			{
				CComPtr<ITangramFrame> pFrame;
				m_pTangram->CreateFrame(CComVariant(0), CComVariant(ctrl->Handle.ToInt64()), STRING2BSTR(strName), &pFrame);
				if (pFrame)
				{
					return theAppProxy._createObject<ITangramFrame, TangramFrame>(pFrame);
				}
			}
			return nullptr;
		}

		TangramFrame^ CreateFrame(IntPtr handle,String^ strName)
		{
			if (::IsWindow((HWND)handle.ToInt64()) && String::IsNullOrEmpty(strName) == false)
			{
				CComPtr<ITangramFrame> pFrame;
				m_pTangram->CreateFrame(CComVariant(0), CComVariant(handle.ToInt64()), STRING2BSTR(strName), &pFrame);
				if (pFrame)
				{
					return theAppProxy._createObject<ITangramFrame, TangramFrame>(pFrame);
				}
			}
			return nullptr;
		}

		delegate void DocumentComplete(Tangram^ sender, Object^ pHtmlDoc, String^ strURL);
		event DocumentComplete^ OnDocumentComplete;
		void Fire_OnDocumentComplete(Tangram^ sender, Object^ pHtmlDoc, String^ strURL)
		{
			OnDocumentComplete(sender, pHtmlDoc, strURL);
		}
		delegate void Destroy(TangramNode^ sender);
		event Destroy^ OnDestroy;
		void Fire_OnDestroy(TangramNode^ sender)
		{
			OnDestroy(sender);
		}
	protected:
		CTangramClrEvent* m_pTangramClrEvent;
		ITangram* m_pTangram;
		~Tangram();
	}; 
}
