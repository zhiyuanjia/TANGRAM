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
// TangramAddin.cpp : Declaration of the CTangramAddin 

#include "../stdafx.h"
#include "../TangramApp.h"
#include "TangramAddin.h"
#include "excelplus\excel.h"
#include "wordplus\msword.h"
#include "outlookplus\msoutl.h"
#include "../TangramUtilities\TangramDownLoad.h"
/*
Private Sub MDIForm_Load()
Set TangramCore = CreateObject("tangram.tangram")
Dim tangram As Object
Set tangram = TangramCore.CreateTangram(Me.hWnd)
Dim frameX As Object
Set frameX = tangram.CreateFrame(0, 0, "test")
frameX.Extend "", "d:\AppDoc1.APPXml"
End Sub
*/
namespace TangramOfficePlus
{
	CTangramIDEWnd::CTangramIDEWnd()
	{
		m_hClientWnd = NULL;
		m_pTangram = NULL;
		m_pFrame = NULL;
	}

	CTangramIDEWnd::~CTangramIDEWnd()
	{

	}

	void CTangramIDEWnd::OnFinalMessage(HWND hWnd)
	{
		CWindowImpl::OnFinalMessage(hWnd);
		delete this;
	}

	// CTangramBaseAddin
	CTangramBaseAddin::CTangramBaseAddin()
	{
		m_strLib = _T("");
		m_strTemplateXML = _T("");
		m_pIDEWindow = NULL;
		m_pTangram = NULL;
		m_pTangramOfficeApp = NULL;
		m_hHostWnd = NULL;
		WNDCLASSEX wcex;
		wcex.cbSize = sizeof(WNDCLASSEX);
		wcex.style = CS_HREDRAW | CS_VREDRAW;
		wcex.lpfnWndProc = ::DefWindowProc;
		wcex.cbClsExtra = 0;
		wcex.cbWndExtra = 0;
		wcex.hInstance = theApp.m_hInstance;
		wcex.hIcon = NULL;
		wcex.hCursor = NULL;
		wcex.hbrBackground = NULL;
		wcex.lpszMenuName = NULL;
		wcex.lpszClassName = L"Tangram Remote Helper Window";
		wcex.hIconSm = NULL;
		RegisterClassEx(&wcex);
	}

	CTangramBaseAddin::~CTangramBaseAddin()
	{
		m_strLib = _T("");
		m_pTangramOfficeApp = NULL;
		ATLTRACE(_T("**********CTangramAddin::~CTangramAddin: %x*********************\n"), this);
	}

	STDMETHODIMP CTangramBaseAddin::OnConnection(IDispatch *pApplication, AddInDesignerObjects::ext_ConnectMode ConnectMode, IDispatch *pAddInInst, SAFEARRAY ** /*custom*/)
	{
		CComQIPtr<COMAddIn> _pAddInInst(pAddInInst);
		if (_pAddInInst)
		{
			CComBSTR bstrID(L"");
			_pAddInInst->get_ProgId(&bstrID);
			m_strAddinID = OLE2T(bstrID);
			_pAddInInst->put_Object(theApp.m_pTangramCore);
		}

		//if (m_pApplication == NULL)
		//	m_pApplication = pApplication;

		if (theApp.m_strExeName.CompareNoCase(_T("vb6")) == 0)
			pApplication->QueryInterface(__uuidof(IDispatch), (LPVOID*)&m_pVBE);
		else
			pApplication->QueryInterface(__uuidof(VBIDE::VBE), (LPVOID*)&m_pVBE);
		if (m_pVBE)
		{
			BSTR bstrCap = L"";
			HWND hMainWnd = NULL;
			CComPtr<VBIDE::Window> pMainWnd;
			m_pVBE->get_MainWindow(&pMainWnd);
			if (pMainWnd)
			{
				pMainWnd->get_Caption(&bstrCap);
				::SysFreeString(bstrCap);
				if (theApp.m_strExeName.CompareNoCase(_T("vb6")) == 0)
					hMainWnd = ::FindWindowEx(NULL, NULL, _T("wndclass_desked_gsk"), NULL);
				else
					pMainWnd->get_HWnd((long*)&hMainWnd);
				m_pIDEWindow = new CTangramIDEWnd();
				m_pIDEWindow->SubclassWindow(hMainWnd);
				m_pIDEWindow->m_hClientWnd = ::FindWindowEx(hMainWnd, NULL, _T("MDIClient"), NULL);
				theApp.m_pTangramCore->CreateTangram((LONGLONG)m_pIDEWindow->m_hWnd, &m_pIDEWindow->m_pTangram);
				if (m_pIDEWindow->m_pTangram)
				{
					m_pIDEWindow->m_pTangram->put_External(m_pVBE.p);
					m_pIDEWindow->m_pTangram->CreateFrame(CComVariant(0), CComVariant((LONGLONG)m_pIDEWindow->m_hClientWnd), CComBSTR(L"VBE"), &m_pIDEWindow->m_pFrame);
					if (m_pIDEWindow->m_pFrame)
					{
						CComPtr<ITangramNode> pNode;
						m_pIDEWindow->m_pFrame->Extend(CComBSTR(L""), CComBSTR(L"VBAIDE.xml"), &pNode);
					}
				}
				return S_OK;
			}
			else
			{
				m_pVBE.Detach();
			}
		}

		if (::IsWindow(m_hHostWnd) == FALSE)
			m_hHostWnd = ::CreateWindowEx(NULL, L"Tangram Remote Helper Window", _T("Tangram Office Plus Addin Helper Window"), WS_OVERLAPPED | WS_CAPTION, 0, 0, 0, 0, NULL, NULL, theApp.m_hInstance, NULL);

		CString strURL = _T("");
		TCHAR szPath[MAX_PATH] = { 0 };
		HRESULT hr = SHGetFolderPath(NULL, CSIDL_PROGRAM_FILES, NULL, 0, szPath);
		TCHAR szFilename[MAX_PATH] = { 0 };
		TCHAR szDriver[MAX_PATH] = { 0 };
		TCHAR szDir[MAX_PATH] = { 0 };
		TCHAR szFile[MAX_PATH] = { 0 };
		TCHAR szExt[MAX_PATH] = { 0 };
		CTangramXmlParse m_Parse;
		DWORD dwLen = GetModuleFileName(NULL, szFilename, MAX_PATH);
		_tsplitpath_s(szFilename, szDriver, szDir, szFile, szExt);
		CString strLib = _T("");
		CString strFile = szPath;
		strFile += _T("\\tangram\\MsOfficePlus\\");
		strFile += szFile;
		strFile += _T("\\");
		strFile += szFile;
		strLib = strFile;
		strFile += _T(".tangram");
		BOOL bLoad = m_Parse.LoadFile(strFile);
		if (m_strAddinID.CompareNoCase(_T("tangram.tangram")) == 0)
		{
			strURL = m_Parse.attr(_T(""), _T(""));
			CComVariant var;
			theApp.m_pTangramCore->get_TangramVal(CComBSTR(L"TangramAddinApp"), &var);
			m_pTangramOfficeApp = (CTangramAddinApp*)var.lVal;
			var.Clear();
			if (m_pTangramOfficeApp)
			{
				m_pTangramOfficeApp->m_strConfigFile = m_Parse.xml();
				m_pTangramOfficeApp->OnConnection(pApplication, ConnectMode);
			}
			return S_OK;
		}
		strLib += _T(".dll");
		m_strLib = strLib;
		if (bLoad)
		{
			strURL = m_Parse.attr(_T(""), _T(""));
			theApp.m_hPlugInModule = ::LoadLibrary(strLib);
			CComVariant var;
			theApp.m_pTangramCore->get_TangramVal(CComBSTR(L"TangramAddinApp"), &var);
			m_pTangramOfficeApp = (CTangramAddinApp*)var.lVal;
			var.Clear();
			if (m_pTangramOfficeApp)
			{
				m_pTangramOfficeApp->m_strConfigFile = m_Parse.xml();
				m_pTangramOfficeApp->OnConnection(pApplication, ConnectMode);
			}
		}
		return S_OK;
	}

	STDMETHODIMP CTangramBaseAddin::OnDisconnection(AddInDesignerObjects::ext_DisconnectMode RemoveMode, SAFEARRAY ** /*custom*/)
	{
		if (m_pIDEWindow&&::IsWindow(m_pIDEWindow->m_hWnd))
		{
			if (theApp.m_nAppID == -1)
			{
				if (::IsWindow(m_hHostWnd))
					::DestroyWindow(m_hHostWnd);
			}
			HWND hWnd = ::GetActiveWindow();
			if (m_pIDEWindow->m_hWnd == hWnd)
			{
				if (m_pVBE)
				{
					//m_pExcelApplication.p->Release();
					m_pVBE.Detach();
				}
				return S_OK;
			}
		}
		if (m_pTangramOfficeApp)
		{
			if (m_pTangramOfficeApp->m_pCTPFactory)
				m_pTangramOfficeApp->m_pCTPFactory.Detach();
			m_pTangramOfficeApp->OnDisconnection(RemoveMode);
		}

		if (::IsWindow(m_hHostWnd))
			::DestroyWindow(m_hHostWnd);


		if (m_pVBE)
		{
			//m_pExcelApplication.p->Release();
			m_pVBE.Detach();
		}
		m_hHostWnd = NULL;

		return S_OK;
	}

	STDMETHODIMP CTangramBaseAddin::OnAddInsUpdate(SAFEARRAY ** /*custom*/)
	{
		if (m_pTangramOfficeApp)
			m_pTangramOfficeApp->OnUpdate();
		return S_OK;
	}

	STDMETHODIMP CTangramBaseAddin::OnStartupComplete(SAFEARRAY ** /*custom*/)
	{
		if (m_pTangramOfficeApp)
			m_pTangramOfficeApp->StartupComplete();
		return S_OK;
	}

	STDMETHODIMP CTangramBaseAddin::OnBeginShutdown(SAFEARRAY ** /*custom*/)
	{
		return S_OK;
	}

	// CTangramAddin
	CTangramAddin::CTangramAddin()
	{
	}

	CTangramAddin::~CTangramAddin()
	{
	}

	void CTangramAddin::_AddTangramXml(Office::_CustomXMLParts* pCustomXMLParts, BSTR bstrXml, BSTR bstrKey, BSTR* bstrRet, VARIANT_BOOL* bSuccess)
	{
		CString strXml = OLE2T(bstrXml);
		CString strKey = OLE2T(bstrKey);
		if (strXml == _T("") || strKey == _T(""))
		{
			*bSuccess = false;
			return ;
		}
		CTangramXmlParse m_Parse;
		bool bXmlModifyed = false;
		if (m_Parse.LoadXml(strXml) || m_Parse.LoadFile(strXml))
		{
			bool bModify = false;
			bModify = m_Parse.attrBool(_T("Modify"), false);
			CComPtr<_CustomXMLSchemaCollection> pCustomXMLSchemaCollection;
			long nCount = 0;
			if (pCustomXMLParts)
			{
				pCustomXMLParts->get_Count(&nCount);
				CString _strXML = _T("");
				for (int i = nCount - 1; i >= 0; i--)
				{
					CComPtr<Office::_CustomXMLPart> pCustomXMLPart;
					pCustomXMLParts->get_Item(CComVariant(i), &pCustomXMLPart);
					if (pCustomXMLPart)
					{
						if (pCustomXMLSchemaCollection == NULL)
							pCustomXMLPart->get_SchemaCollection(&pCustomXMLSchemaCollection);
						CComBSTR bstrXML(L"");
						pCustomXMLPart->get_XML(&bstrXML);
						_strXML = OLE2T(bstrXML);
						CTangramXmlParse m_Parse2;
						m_Parse2.LoadXml(_strXML);
						if (m_Parse2.name().CompareNoCase(strKey) == 0)
						{
							if (bModify)
							{
								pCustomXMLPart->Delete();
								break;
							}
							else
							{
								*bSuccess = true;
								return ;
							}
						}
					}
				}
				CComPtr<Office::_CustomXMLPart> pPart;
				HRESULT hr = S_FALSE;
				if (bXmlModifyed == false)
					hr = pCustomXMLParts->Add(CComBSTR(m_Parse.xml()), CComVariant(pCustomXMLSchemaCollection), &pPart);
				else
				{
					hr = pCustomXMLParts->Add(CComBSTR(strXml), CComVariant(pCustomXMLSchemaCollection), &pPart);
				}
				if (hr == S_OK)
				{
					*bstrRet = strXml.AllocSysString();
					*bSuccess = true;
					return ;
				}
			}
		}

		*bSuccess = false;
	}

	void CTangramAddin::_GetTangramXml(Office::_CustomXMLParts* pCustomXMLParts, BSTR bstrKey, BSTR* pbstrXml)
	{
		CString strKey = OLE2T(bstrKey);
		if (strKey == _T("") || pCustomXMLParts == NULL)
		{
			*pbstrXml = ::SysAllocString(L"");
			return ;
		}

		if (pCustomXMLParts)
		{
			long nCount = 0;
			pCustomXMLParts->get_Count(&nCount);
			CString strXML = _T("");
			for (int i = 1; i <= nCount; i++)
			{
				CComPtr<Office::_CustomXMLPart> pCustomXMLPart;
				pCustomXMLParts->get_Item(CComVariant(i), &pCustomXMLPart);
				if (pCustomXMLPart)
				{
					CComBSTR bstrXML(L"");
					pCustomXMLPart->get_XML(&bstrXML);
					strXML = OLE2T(bstrXML);
					CTangramXmlParse m_Parse;
					m_Parse.LoadXml(strXML);
					if (m_Parse.name().CompareNoCase(strKey) == 0)
					{
						*pbstrXml = bstrXML;
						break;
					}
				}
			}
		}
	}

	// ICustomTaskPaneConsumer Methods
	STDMETHODIMP CTangramAddin::CTPFactoryAvailable(ICTPFactory * CTPFactoryInst)
	{
		if (m_pTangramOfficeApp)
			m_pTangramOfficeApp->CTPFactoryAvailableEx(CTPFactoryInst);
		return S_OK;
	}

	STDMETHODIMP CTangramAddin::GetCustomUI(BSTR RibbonID, BSTR * RibbonXml)
	{
		if (!RibbonXml)
			return E_POINTER;
		if (m_pTangramOfficeApp)
			return m_pTangramOfficeApp->GetCustomAddinUI(RibbonID, RibbonXml);
		return E_POINTER;
	}


	STDMETHODIMP CTangramAddin::TangramCommand(IDispatch* RibbonControl)
	{
		if (m_spRibbonUI)
			m_spRibbonUI->Invalidate();
		if (m_pTangramOfficeApp)
			m_pTangramOfficeApp->Tangram_Command(RibbonControl);
		return S_OK;
	}

	STDMETHODIMP CTangramAddin::TangramOnLoad(IDispatch* RibbonControl)
	{
		m_spRibbonUI = RibbonControl;
		if (m_pTangramOfficeApp)
			m_pTangramOfficeApp->Tangram_OnLoad(RibbonControl);
		return S_OK;
	}

	STDMETHODIMP CTangramAddin::TangramGetImage(BSTR strValue, IPictureDisp ** ppDispImage)
	{
		if (m_pTangramOfficeApp)
		{
			//return m_pTangramOfficeApp->TangramGetImage(strValue, ppDispImage);
			CImage m_Image;

			TCHAR szPath[MAX_PATH] = { 0 };
			GetModuleFileName(GetModuleHandle(m_strLib), szPath, MAX_PATH);
			CString strSelfPath = szPath;

			int nIndex = strSelfPath.ReverseFind(L'\\');
			strSelfPath = strSelfPath.Left(nIndex + 1);


			if (CString(strValue).MakeLower().Find(L".dll") != -1)
			{
				//DLL资源加载  DLL名@资源ID@资源类型
				int nIndexSpilt = CString(strValue).Find(L"@");
				CString strDLLName = CString(strValue).Left(nIndexSpilt);
				CString strResName = CString(strValue).Mid(nIndexSpilt + 1);
				nIndexSpilt = strResName.Find(L"@");
				int nResID = _wtoi(strResName.Left(nIndexSpilt));

				CString strResType = strResName.Mid(nIndexSpilt + 1);

				HMODULE hResHandle = LoadLibrary(strSelfPath + strDLLName);

				theApp.LoadImageFromResource(&m_Image, hResHandle, nResID, strResType);
			}
			else
			{
				//图片文件加载
				CString strPath = strSelfPath + strValue;
				if (::PathFileExists(strPath) == false)
					return S_OK;
				m_Image.Load(strPath);
			}

			HRESULT hr;
			PICTDESC pictureDesc;
			::ZeroMemory(&pictureDesc, sizeof(pictureDesc));
			pictureDesc.cbSizeofstruct = sizeof(pictureDesc);
			pictureDesc.picType = PICTYPE_BITMAP;
			pictureDesc.bmp.hbitmap = m_Image.Detach();
			hr = ::OleCreatePictureIndirect(&pictureDesc, IID_IPicture, TRUE, reinterpret_cast<void **>(ppDispImage));
			if (FAILED(hr))
			{
				::MessageBox(0, _T("Error in creating picture from bitmap."), _T("Tangram - CTangramOutLookPlusApp::OnGetImage()"), MB_OK);
				return S_OK;
			}
			return S_OK;
		}
		return S_OK;
	}

	STDMETHODIMP CTangramAddin::TangramGetItemCount(IDispatch* RibbonControl, long* nCount)
	{
		if (m_pTangramOfficeApp)
			return m_pTangramOfficeApp->Tangram_GetItemCount(RibbonControl, nCount);
		return S_OK;
	}

	STDMETHODIMP CTangramAddin::TangramGetItemLabel(IDispatch* RibbonControl, long nIndex, BSTR* bstrLabel)
	{
		if (m_pTangramOfficeApp)
			return m_pTangramOfficeApp->Tangram_GetItemLabel(RibbonControl, nIndex, bstrLabel);
		return S_OK;
	}

	STDMETHODIMP CTangramAddin::TangramGetItemID(IDispatch* RibbonControl, long nIndex, BSTR* bstrID)
	{
		if (m_pTangramOfficeApp)
			return m_pTangramOfficeApp->Tangram_GetItemID(RibbonControl, nIndex, bstrID);
		return S_OK;
	}

	STDMETHODIMP CTangramAddin::TangramGetVisible(IDispatch* RibbonControl, VARIANT* varVisible)
	{
		varVisible->vt = 2;
		varVisible->bVal = (rand() % 2) ? VARIANT_TRUE : VARIANT_FALSE;
		if (m_pTangramOfficeApp)
			return m_pTangramOfficeApp->Tangram_GetVisible(RibbonControl, varVisible);
		return S_OK;
	}


	STDMETHODIMP CTangramAddin::get_TangramCore(IDispatch** pVal)
	{
		if (m_pTangramOfficeApp)
			*pVal = m_pTangramOfficeApp->m_pTangramCore;

		return S_OK;
	}

	STDMETHODIMP CTangramAddin::get_RemoteHelperHWND(LONGLONG* pVal)
	{
		if (::IsWindow(m_hHostWnd))
			*pVal = (LONGLONG)m_hHostWnd;

		return S_OK;
	}


	STDMETHODIMP CTangramAddin::get_DocTemplateXml(BSTR bstrTemplateXml, BSTR* pVal)
	{
		*pVal = m_strTemplateXML.AllocSysString();

		return S_OK;
	}


	STDMETHODIMP CTangramAddin::put_DocTemplateXml(BSTR bstrTemplateXml, BSTR newVal)
	{
		m_strTemplateXML = OLE2T(newVal);

		return S_OK;
	}
}

