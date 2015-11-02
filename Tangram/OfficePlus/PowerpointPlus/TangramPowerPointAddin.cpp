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

#include "../../stdafx.h"
#include "TangramPowerPointAddin.h"
#include "PowerpointPlusEvents.cpp"
#include "..\Tangram\EclipsePlus\TangramCtrl.h"
using namespace TangramOfficePlus::PowerPointPlus;

namespace TangramOfficePlus
{
	namespace PowerPointPlus
	{
		CTangramPowerPntWnd::CTangramPowerPntWnd(void)
		{
			m_strKey = _T("");
			m_hTaskPane = NULL;
			m_hTaskPaneWnd = NULL;
			m_hTaskPaneChildWnd = NULL;
			m_pTangramPresentation = NULL;
		}

		CTangramPowerPntWnd::~CTangramPowerPntWnd(void)
		{
		}


		LRESULT CTangramPowerPntWnd::OnDestroy(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
		{
			if (m_pTangramPresentation)
			{
				map<HWND, CTangramPowerPntWnd*>::iterator it = m_pTangramPresentation->find(m_hWnd);
				if (it != m_pTangramPresentation->end())
				{
					m_pTangramPresentation->erase(it);
				}
			}
			if (m_pTangramPresentation->size() == 0)
			{
				if (m_pTangramPresentation->m_pFrame)
				{
					m_pTangramPresentation->m_pFrame->ModifyHost((LONGLONG)m_hChildClient);
					::DestroyWindow(m_hClient);
				}

				CTangramPresentation* pTangramPresentation = NULL;
				map<CString, CTangramPresentation*>::iterator it = ((CTangramPowerPointAddin*)theApp.m_pHostCore)->m_mapTangramPres.find(m_strKey);
				if (it != ((CTangramPowerPointAddin*)theApp.m_pHostCore)->m_mapTangramPres.end())
					((CTangramPowerPointAddin*)theApp.m_pHostCore)->m_mapTangramPres.erase(it);
				delete m_pTangramPresentation;
			}
			else
			{
				CTangramPowerPntWnd* pWnd = m_pTangramPresentation->begin()->second;
				if (pWnd)
				{
					HWND hWnd = ::GetParent(pWnd->m_hWnd);
					HWND hParent = ::GetParent(hWnd);
					if (pWnd->m_pTangramPresentation->m_pFrame)
						pWnd->m_pTangramPresentation->m_pFrame->ModifyHost((LONGLONG)hWnd);
					if (m_hTaskPane)
					{
						m_hTaskPane = NULL;
						m_pTangramPresentation->m_pTaskPaneFrame->ModifyHost((LONGLONG)pWnd->m_hTaskPaneChildWnd);
						::DestroyWindow(m_hTaskPaneWnd);
					}
				}
			}
			return DefWindowProc(uMsg, wParam, lParam);
		}

		void CTangramPowerPntWnd::OnFinalMessage(HWND hWnd)
		{
			CTangramPowerPointAddin* pAddin = ((CTangramPowerPointAddin*)theApp.m_pHostCore);
			map<LONG, Office::_CustomTaskPane*>::iterator iter = pAddin->m_mapTaskPaneMap.find((LONG)hWnd);
			if (iter != pAddin->m_mapTaskPaneMap.end())
			{
				pAddin->m_mapTaskPaneMap.erase(iter);
			}
			CWindowImpl::OnFinalMessage(hWnd);
			delete this;
		}

		CTangramPresentation::CTangramPresentation()
		{
			m_pTaskPaneTangram = NULL;
			m_pTaskPaneFrame = NULL;	
			m_strTaskPaneXml = _T("");
			m_pTangram = NULL;
			m_pFrame = NULL;
			m_pCurrentNode = NULL;
		}

		CTangramPresentation::~CTangramPresentation()
		{

		}

		LRESULT CTangramPowerPntWnd::OnGetData(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
		{
			return (LRESULT)this;
		}

		CTangramPowerPointAddin::CTangramPowerPointAddin()
		{
			CString strVer = theApp.GetFileVer();
			int nPos = strVer.Find(_T("."));
			strVer = strVer.Left(nPos);
			int nVer = _wtoi(strVer);
			CComVariant m_v;
			m_v.vt = VT_I4;
			m_v.lVal = (LONGLONG)(CTangramAddinApp*)this;
			theApp.m_pHostCore->put_TangramVal(CComBSTR(L"TangramAddinApp"), m_v);
		}

		CTangramPowerPointAddin::~CTangramPowerPointAddin()
		{
		}

		STDMETHODIMP CTangramPowerPointAddin::AddTangramXml(IDispatch* pDocdisp, BSTR bstrXml, BSTR bstrKey, BSTR* bstrRet, VARIANT_BOOL* bSuccess)
		{
			CComQIPtr<PowerPoint::_Presentation> pDoc(pDocdisp);
			if (pDoc)
			{
				CComPtr<Office::_CustomXMLParts> pCustomXMLParts;
				pDoc->get_CustomXMLParts(&pCustomXMLParts);
				_AddTangramXml(pCustomXMLParts.p, bstrXml, bstrKey, bstrRet, bSuccess);
			}
			return S_OK;
		}

		STDMETHODIMP CTangramPowerPointAddin::GetTangramXml(IDispatch* pDocdisp, BSTR bstrKey, BSTR* pbstrXml)
		{
			CComQIPtr<PowerPoint::_Presentation> pDoc(pDocdisp);
			if (pDoc)
			{
				CComPtr<Office::_CustomXMLParts> pCustomXMLParts;
				pDoc->get_CustomXMLParts(&pCustomXMLParts);
				_GetTangramXml(pCustomXMLParts.p, bstrKey, pbstrXml);
			}
			return S_OK;
		}

		void CTangramPowerPointAddin::OnPresentationOpen(/*[in]*/ _Presentation * Pres)
		{
			long h = 0;
			CComBSTR bstrName(L"");
			Pres->get_FullName(&bstrName);
			CTangramPresentation* pTangramPresentation = NULL;
			map<CString, CTangramPresentation*>::iterator it = m_mapTangramPres.find(OLE2T(bstrName));
			if (it != m_mapTangramPres.end())
				pTangramPresentation = it->second;

			CTangramPowerPntWnd* pWnd = NULL;
			CComPtr<DocumentWindows> pWindows;
			Pres->get_Windows(&pWindows);
			CComPtr<DocumentWindow> pWindow;
			long nCount = 0;
			pWindows->get_Count(&nCount);
			if (nCount)
			{
				pWindows->Item(1, &pWindow);
				if (pWindow)
				{
					pWindow->get_HWND(&h);
					LRESULT lRes = ::SendMessage((HWND)h, WM_TANGRAMDATA, 0, 0);
					if (lRes)
					{
						pWnd = (CTangramPowerPntWnd*)lRes;
						pWnd->m_pTangramPresentation = pTangramPresentation;
					}
				}
			}

			CComBSTR bstrXml(L"");
			GetTangramXml(Pres, CComBSTR(L"Tangrams"), &bstrXml);
			CString strXML = OLE2T(bstrXml);

			if (strXML!=_T(""))
			{
				CTangramXmlParse m_Parse;
				if (m_Parse.LoadXml(strXML) || m_Parse.LoadFile(strXML))
				{
					CTangramXmlParse* pParse = m_Parse.GetChild(_T("TaskPaneUI"));
					if (pParse)
					{
						CString strXml = pParse->xml();
						if (pWnd != NULL)
						{
							pWnd->m_pTangramPresentation->m_strTaskPaneXml = strXml;
						}
					}
					pParse = m_Parse.GetChild(_T("DocumentUI"));
					if (pParse)
					{
						HWND hWnd = ::GetParent(pWnd->m_hWnd);
						HWND hParent = ::GetParent(hWnd);
						ITangram* pTangram = NULL;
						CreateTangram((LONGLONG)hParent, &pTangram);
						pWnd->m_pTangramPresentation->m_pTangram = (CTangram*)pTangram;
						ITangramFrame* pFrame = NULL;
						pTangram->CreateFrame(CComVariant(0), CComVariant((LONGLONG)hWnd), CComBSTR(L"Document"), &pFrame);
						pWnd->m_pTangramPresentation->m_pFrame = (CTangramFrame*)pFrame;
						ITangramNode* pNode = NULL;
						pFrame->Extend(CComBSTR(L"Default"), CComBSTR(pParse->xml()), &pNode);
					}
				}
			}
		}

		void CTangramPowerPointAddin::OnNewPresentation(/*[in]*/ _Presentation * Pres)
		{
			long h = 0;
			CComBSTR bstrName(L"");
			Pres->get_FullName(&bstrName);
			CTangramPresentation* pTangramPresentation = NULL;
			map<CString, CTangramPresentation*>::iterator it = m_mapTangramPres.find(OLE2T(bstrName));
			if (it != m_mapTangramPres.end())
				pTangramPresentation = it->second;

			CTangramPowerPntWnd* pWnd = NULL;
			CComPtr<DocumentWindows> pWindows;
			Pres->get_Windows(&pWindows);
			CComPtr<DocumentWindow> pWindow;
			long nCount = 0;
			pWindows->get_Count(&nCount);
			if (nCount)
			{
				pWindows->Item(1, &pWindow);
				if (pWindow)
				{
					pWindow->get_HWND(&h);
					LRESULT lRes = ::SendMessage((HWND)h, WM_TANGRAMDATA, 0, 0);
					if (lRes)
					{
						pWnd = (CTangramPowerPntWnd*)lRes;
						pWnd->m_pTangramPresentation = pTangramPresentation;
					}
				}
			}
			if (m_strTemplateXml == _T(""))
				m_strTemplateXml = m_strDefaultTemplateXml;
			VARIANT_BOOL bRet = false;
			CComBSTR bstrRet(L"");
			CTangramXmlParse m_Parse;
			CString strTemplateXml = _T("");
			if (m_Parse.LoadXml(m_strTemplateXml))
			{
				strTemplateXml = m_strTemplateXml;
				m_strTemplateXml = _T("");
			}

			CComVariant m_vRet(_T(""));
			theApp.m_pTangramCore->get_ExternalInfo(&m_vRet);
			CString strNewDocInfo = _T("");
			if (m_vRet.vt == VT_BSTR)
			{
				strNewDocInfo = OLE2T(m_vRet.bstrVal);
			}
			if (strNewDocInfo == _T(""))
				strNewDocInfo = strTemplateXml;
			AddTangramXml(Pres, CComBSTR(strNewDocInfo), CComBSTR(L"Tangrams"), &bstrRet, &bRet);
			strNewDocInfo = OLE2T(bstrRet);
			if (bRet)
			{
				CTangramXmlParse m_Parse;
				if (m_Parse.LoadXml(strNewDocInfo) || m_Parse.LoadFile(strNewDocInfo))
				{
					CTangramXmlParse* pParse = m_Parse.GetChild(_T("TaskPaneUI"));
					if (pParse)
					{
						CString strXml = pParse->xml();
						if (strXml!=_T(""))
						{
							pWnd->m_pTangramPresentation->m_strTaskPaneXml = strXml;
						}
					}
					pParse = m_Parse.GetChild(_T("DocumentUI"));
					if (pParse)
					{
						HWND hWnd = ::GetParent(pWnd->m_hWnd);
						HWND hParent = ::GetParent(hWnd);
						ITangram* pTangram = NULL;
						CreateTangram((LONGLONG)hParent, &pTangram);
						pWnd->m_pTangramPresentation->m_pTangram = (CTangram*)pTangram;
						ITangramFrame* pFrame = NULL;
						pTangram->CreateFrame(CComVariant(0), CComVariant((LONGLONG)hWnd), CComBSTR(L"Document"), &pFrame);
						pWnd->m_pTangramPresentation->m_pFrame = (CTangramFrame*)pFrame;
						ITangramNode* pNode = NULL;
						pFrame->Extend(CComBSTR(L"Default"), CComBSTR(pParse->xml()), &pNode);
					}
				}
			}
		}

		void CTangramPowerPointAddin::OnPresentationSave(/*[in]*/ _Presentation * Pres)
		{
			long h = 0;
			CComBSTR bstrName(L"");
			Pres->get_FullName(&bstrName);
			CString strKey = OLE2T(bstrName);
			CTangramPresentation* pTangramPresentation = NULL;
			map<CString, CTangramPresentation*>::iterator it = m_mapTangramPres.find(strKey);
			if (it != m_mapTangramPres.end())
				pTangramPresentation = it->second;

			CTangramPowerPntWnd* pWnd = NULL;
			CComPtr<DocumentWindows> pWindows;
			Pres->get_Windows(&pWindows);
			CComPtr<DocumentWindow> pWindow;
			long nCount = 0;
			pWindows->get_Count(&nCount);
			if (nCount)
			{
				pWindows->Item(1, &pWindow);
				if (pWindow)
				{
					pWindow->get_HWND(&h);
					LRESULT lRes = ::SendMessage((HWND)h, WM_TANGRAMDATA, 0, 0);
					if (lRes)
					{
						pWnd = (CTangramPowerPntWnd*)lRes;
						if (pWnd->m_strKey != _T(""))
						{
							it = m_mapTangramPres.find(pWnd->m_strKey);
							if (it != m_mapTangramPres.end())
							{
								pTangramPresentation = it->second;
							}
							if (pWnd->m_strKey.CompareNoCase(strKey))
							{
								m_mapTangramPres.erase(it);
								m_mapTangramPres[strKey] = pTangramPresentation;
								map<HWND, CTangramPowerPntWnd*>::iterator it2;
								for (it2 = pTangramPresentation->begin(); it2 != pTangramPresentation->end(); it2++)
								{
									it2->second->m_strKey = strKey;
								}
							}
						}
					}
				}
			}
		}

		void CTangramPowerPointAddin::OnWindowActivate(/*[in]*/ _Presentation * Pres,/*[in]*/ DocumentWindow * Wn)
		{
			CComBSTR bstrName(L"");
			Pres->get_FullName(&bstrName);

			long h = 0;
			Wn->get_HWND(&h);
			CTangramPowerPntWnd* pWnd = NULL;
			CTangramPresentation* pTangramPresentation = NULL;
			LRESULT lRes = ::SendMessage((HWND)h, WM_TANGRAMDATA, 0, 0);
			if (lRes == 0)
			{
				pWnd = new CTangramPowerPntWnd();
				pWnd->SubclassWindow((HWND)h);
				pWnd->m_strKey = OLE2T(bstrName);
				pWnd->m_hClient = ::CreateWindowEx(NULL, L"Tangram Remote Helper Window", _T("Tangram Office Plus Addin Helper Window"), WS_CHILD, 0, 0, 0, 0, pWnd->m_hWnd, NULL, theApp.m_hInstance, NULL);
				pWnd->m_hChildClient = ::CreateWindowEx(NULL, L"Tangram Remote Helper Window", _T("Tangram Powerpnt Helper Window"), WS_CHILD, 0, 0, 0, 0, pWnd->m_hClient, NULL, theApp.m_hInstance, NULL);
				pWnd->m_hTaskPaneWnd = ::CreateWindowEx(NULL, L"Tangram Remote Helper Window", _T("Tangram TaskPane Helper Window"), WS_CHILD, 0, 0, 0, 0, pWnd->m_hWnd, NULL, theApp.m_hInstance, NULL);
				pWnd->m_hTaskPaneChildWnd = ::CreateWindowEx(NULL, L"Tangram Remote Helper Window", _T("Tangram TaskPane Helper Window"), WS_CHILD, 0, 0, 0, 0, pWnd->m_hTaskPaneWnd, NULL, theApp.m_hInstance, NULL);
				map<CString, CTangramPresentation*>::iterator it = m_mapTangramPres.find(OLE2T(bstrName));
				if (it != m_mapTangramPres.end())
					pTangramPresentation = it->second;
				else
					pTangramPresentation = new CTangramPresentation();
				m_mapTangramPres[pWnd->m_strKey] = pTangramPresentation;
				pWnd->m_pTangramPresentation = pTangramPresentation;
				(*pTangramPresentation)[pWnd->m_hWnd] = pWnd;
			}
			else
			{
				pWnd = (CTangramPowerPntWnd*)lRes;
				pTangramPresentation = pWnd->m_pTangramPresentation;
			}
			if (pTangramPresentation->m_pFrame)
			{
				pTangramPresentation->m_pFrame->ModifyHost((LONGLONG)::GetParent(pWnd->m_hWnd));
			}

			if (pTangramPresentation->m_pTaskPaneFrame)
			{
				if (::IsWindow(pWnd->m_hTaskPane))
				{
					pTangramPresentation->m_pTaskPaneFrame->ModifyHost((LONGLONG)pWnd->m_hTaskPane);
				}
				else
					pTangramPresentation->m_pTaskPaneFrame->ModifyHost((LONGLONG)pWnd->m_hTaskPaneChildWnd);
			}
		}

		HRESULT CTangramPowerPointAddin::Tangram_Command(IDispatch* RibbonControl)
		{
			CComBSTR bstrTag(L"");
			CComBSTR bstrID(L"");
			CComQIPtr<IRibbonControl> pIRibbonControl(RibbonControl);
			if (pIRibbonControl)
			{
				pIRibbonControl->get_Id(&bstrID);
				pIRibbonControl->get_Tag(&bstrTag);
			}
			CString strTag = OLE2T(bstrTag);
			int nPos = strTag.Find(_T("TangramButton.Cmd"));
			strTag.Replace(_T("TangramButton.Cmd."), _T(""));
			int nCmdIndex = _wtoi(strTag);
			CComPtr<DocumentWindow> pWindow;
			m_pApplication->get_ActiveWindow(&pWindow);
			LONG hMainWnd = 0;
			pWindow->get_HWND(&hMainWnd);
			HWND hWnd = (HWND)hMainWnd;// ::GetActiveWindow();
			CTangramPowerPntWnd* pWnd = NULL;
			LRESULT lRes = ::SendMessage(hWnd, WM_TANGRAMDATA, 0, 0);
			if (lRes)
			{
				pWnd = (CTangramPowerPntWnd*)lRes;
			}
			CTangramPresentation* pTangramPresentation = pWnd->m_pTangramPresentation;
			switch (nCmdIndex)
			{
			case 100:
			{
				PowerPoint::_Presentation* Pres = NULL;
				HRESULT hr = m_pApplication->get_ActivePresentation(&Pres);

				if (m_strTemplateXml == _T(""))
				{
					CTangramXmlParse m_Parse;
					if (m_Parse.LoadFile(m_strConfigFile))
					{
						m_strDefaultTemplateXml = m_Parse[_T("DefaultTemplate")][_T("Tangrams")].xml();
					}
				}

				CComVariant m_vRet(_T(""));
				m_pTangramCore->get_ExternalInfo(&m_vRet);
				CString strNewDocInfo = _T("");
				if (m_vRet.vt == VT_BSTR)
				{
					strNewDocInfo = OLE2T(m_vRet.bstrVal);
				}
				if (strNewDocInfo == _T(""))
					strNewDocInfo = m_strDefaultTemplateXml;

				VARIANT_BOOL bRet = false;
				CComBSTR bstrRet(L"");
				AddTangramXml(Pres, CComBSTR(strNewDocInfo), CComBSTR(L"Tangrams"), &bstrRet, &bRet);
				strNewDocInfo = OLE2T(bstrRet);

				if (strNewDocInfo != _T("") && bRet)
				{
					CTangramXmlParse m_Parse;
					if (m_Parse.LoadXml(strNewDocInfo) || m_Parse.LoadFile(strNewDocInfo))
					{
						CTangramXmlParse* pParse = m_Parse.GetChild(_T("TaskPaneUI"));
						if (pParse)
						{
							pWnd->m_pTangramPresentation->m_strTaskPaneXml = pParse->xml();
						}
						pParse = m_Parse.GetChild(_T("DocumentUI"));
						if (pParse)
						{
						}
					}
				}
			}
			break;
			case 101:
			{
				map<LONG, Office::_CustomTaskPane*>::iterator iter = m_mapTaskPaneMap.find(hMainWnd);
				if (iter != m_mapTaskPaneMap.end())
				{
					m_mapTaskPaneMap[hMainWnd]->put_Visible(true);
				}
				else
				{
					CString strXml = pTangramPresentation->m_strTaskPaneXml;
					if (strXml != _T(""))
					{
						CTangramXmlParse m_Parse;
						if (m_Parse.LoadXml(strXml))
						{
							VARIANT vWindow;
							vWindow.vt = VT_DISPATCH;
							vWindow.pdispVal = NULL;
							Office::_CustomTaskPane* _pCustomTaskPane;
							CString strCap = _T("");
							strCap = m_Parse.attr(_T("Title"), _T(""));
							if (strCap == _T(""))
								strCap = _T("Tangram for PowerPoint");
							CComBSTR bstrCap(strCap);
							HRESULT hr = m_pCTPFactory->CreateCTP(L"TangramOfficeX.TangramCtrl.1", bstrCap, vWindow, &_pCustomTaskPane);
							_pCustomTaskPane->AddRef();
							_pCustomTaskPane->put_Visible(true);
							m_mapTaskPaneMap[hMainWnd] = _pCustomTaskPane;
							CComPtr<ITangramCtrl> pCtrlDisp;
							_pCustomTaskPane->get_ContentControl((IDispatch**)&pCtrlDisp);
							if (pCtrlDisp)
							{
								LONGLONG hWnd = 0;
								pCtrlDisp->get_HWND(&hWnd);
								HWND hPWnd = ::GetParent((HWND)hWnd);
								pWnd->m_hTaskPane = (HWND)hWnd;
								TangramEclipsePlus::EclipsePlus::CTangramCtrl* pCtrl = (TangramEclipsePlus::EclipsePlus::CTangramCtrl*)pCtrlDisp.p;
								pCtrl->m_hDocWnd = pWnd->m_hWnd;
								//CWindow m_Wnd;
								//m_Wnd.Attach(hPWnd);
								//m_Wnd.ModifyStyle(0, WS_CLIPSIBLINGS | WS_CLIPCHILDREN);
								//m_Wnd.Detach();
								if (pTangramPresentation->m_pTaskPaneTangram == NULL)
								{
									HRESULT hr = theApp.m_pHostCore->CreateTangram((LONGLONG)hPWnd, &pTangramPresentation->m_pTaskPaneTangram);
									if (pTangramPresentation->m_pTaskPaneTangram)
									{
										pTangramPresentation->m_pTaskPaneTangram->CreateFrame(CComVariant(0), CComVariant(hWnd), CComBSTR(L"TaskPane"), &pTangramPresentation->m_pTaskPaneFrame);
										if (pTangramPresentation->m_pTaskPaneFrame)
										{
											ITangramNode* pNode = NULL;
											pTangramPresentation->m_pTaskPaneFrame->Extend(CComBSTR("Default"), strXml.AllocSysString(), &pNode);
										}
									}
								}
								else
								{
									pTangramPresentation->m_pTaskPaneFrame->ModifyHost(hWnd);
								}
							}
						}
					}
				}
			}
			break;
			case 102:
			{
				if (m_strTemplateSubmitXml != _T(""))
				{
					//m_pTangramManager->CreateSkinWnd(NULL, CComBSTR(m_strTemplateSubmitXml), m_pTangramManager, 100, 200);
				}
			}
			break;
			}

			return S_OK;
		}

		HRESULT CTangramPowerPointAddin::OnConnection(IDispatch* pHostApp, int ConnectMode)
		{
			if (m_strTemplateXml == _T(""))
			{
				CTangramXmlParse m_Parse;
				if (m_Parse.LoadXml(m_strConfigFile))
				{
					m_strTemplateSubmitXml = m_Parse[_T("SummitTemplate")].xml();
					m_strRibbonXml = m_Parse[_T("RibbonUI")][_T("customUI")].xml();
					m_strDefaultTemplateXml = m_Parse[_T("DefaultTemplate")][_T("Tangrams")].xml();
				}
			}
			pHostApp->QueryInterface(__uuidof(IDispatch), (LPVOID*)&m_pApplication);
			HRESULT hr = this->DispEventAdvise(m_pApplication);
			CComPtr<_Presentation> Pres;
			m_pApplication->get_ActivePresentation(&Pres);
			if (Pres)
			{
				CComPtr<DocumentWindows> pWindows;
				long h = 0;
				Pres->get_Windows(&pWindows);
				if (pWindows)
				{
					CComPtr<DocumentWindow> pWindow;
					long nCount = 0;
					pWindows->get_Count(&nCount);
					if (nCount)
					{
						pWindows->Item(0, &pWindow);
						if (pWindow)
						{
							pWindow->get_HWND(&h);
							CTangramPowerPntWnd* pWnd = new CTangramPowerPntWnd();
							pWnd->m_strKey = _T("");
							pWnd->SubclassWindow((HWND)h);
							pWnd->m_hClient = ::CreateWindowEx(NULL, L"Tangram Remote Helper Window", _T("Tangram Office Plus Addin Helper Window"), WS_CHILD, 0, 0, 0, 0, pWnd->m_hWnd, NULL, theApp.m_hInstance, NULL);
							pWnd->m_hChildClient = ::CreateWindowEx(NULL, L"Tangram Remote Helper Window", _T("Tangram Powerpnt Helper Window"), WS_CHILD, 0, 0, 0, 0, pWnd->m_hClient, NULL, theApp.m_hInstance, NULL);
							pWnd->m_hTaskPaneWnd = ::CreateWindowEx(NULL, L"Tangram Remote Helper Window", _T("Tangram TaskPane Helper Window"), WS_CHILD, 0, 0, 0, 0, pWnd->m_hWnd, NULL, theApp.m_hInstance, NULL);
							pWnd->m_hTaskPaneChildWnd = ::CreateWindowEx(NULL, L"Tangram Remote Helper Window", _T("Tangram TaskPane Helper Window"), WS_CHILD, 0, 0, 0, 0, pWnd->m_hTaskPane, NULL, theApp.m_hInstance, NULL);
							CTangramPresentation* m_pTangramPresentation = new CTangramPresentation();
							(*m_pTangramPresentation)[(HWND)h] = pWnd;
							pWnd->m_pTangramPresentation = m_pTangramPresentation;
						}
					}
				}
			}
			return S_OK;
		}

		HRESULT CTangramPowerPointAddin::OnDisconnection(int DisConnectMode)
		{
			HRESULT hr = DispEventUnadvise(m_pApplication);
			//m_pApplication.p->Release();
			m_pApplication.Detach();
			return S_OK;
		}

		HRESULT CTangramPowerPointAddin::GetCustomAddinUI(BSTR RibbonID, BSTR* RibbonXml)
		{
			if (!RibbonXml)
				return E_POINTER;
			*RibbonXml = m_strRibbonXml.AllocSysString();
			return (*RibbonXml ? S_OK : E_OUTOFMEMORY);
		}
	}
}// namespace TangramOfficePlus

