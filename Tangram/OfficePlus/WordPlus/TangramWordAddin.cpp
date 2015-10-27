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
#include "TangramWordAddin.h"
#include "WordPlusDoc.h"

#include "..\Tangram\EclipsePlus\TangramCtrl.h"

namespace TangramOfficePlus
{
	namespace WordPlus
	{
		CTangramWordAddin::CTangramWordAddin() :CTangramOfficePlusApp()
		{
			CComVariant m_v;
			m_v.vt = VT_I4;
			m_v.lVal = (LONGLONG)(CTangramOfficePlusApp*)this;
			theApp.m_pHostCore->put_TangramVal(CComBSTR(L"OfficePlusApp"),m_v);
			m_pCurWordPlusDocWnd = NULL;
		}

		CTangramWordAddin::~CTangramWordAddin()
		{
		}

		STDMETHODIMP CTangramWordAddin::AddTangramXml(IDispatch* pDocdisp, BSTR bstrXml, BSTR bstrKey, BSTR* bstrRet, VARIANT_BOOL* bSuccess)
		{
			CComQIPtr<Word::_Document> pDoc(pDocdisp);
			if (pDoc)
			{
				CComPtr<Office::_CustomXMLParts> pCustomXMLParts;
				pDoc->get_CustomXMLParts(&pCustomXMLParts);
				_AddTangramXml(pCustomXMLParts.p, bstrXml, bstrKey, bstrRet, bSuccess);
			}

			return S_OK;
		}

		STDMETHODIMP CTangramWordAddin::GetTangramXml(IDispatch* pDocdisp, BSTR bstrKey, BSTR* pbstrXml)
		{
			CComQIPtr<Word::_Document> pDoc(pDocdisp);
			if (pDoc)
			{
				CComPtr<Office::_CustomXMLParts> pCustomXMLParts;
				pDoc->get_CustomXMLParts(&pCustomXMLParts);
				_GetTangramXml(pCustomXMLParts.p, bstrKey, pbstrXml);
			}
			return S_OK;
		}


		CTangramWordPlusDocWnd* CTangramWordAddin::AttachDocWithWindow(_Document* pDoc, HWND hWnd)
		{
			if (pDoc)
			{
				CTangramWordPlusDoc* pWordDoc = NULL;
				CTangramWordPlusDocumentMap::iterator it = find(pDoc);
				if (it != end())
				{
					pWordDoc = it->second;
				}
				if (pWordDoc)
				{
					CTangramWordPlusDocWndMap::iterator it2 = pWordDoc->find(hWnd);
					if (it2 != pWordDoc->end())
					{
						return it2->second;
					}
				}
				CComPtr<Word::Windows> pWindows;
				pDoc->get_Windows(&pWindows);
				long nCount = 0;
				pWindows->get_Count(&nCount);
				LRESULT lRes = ::SendMessage(hWnd, WM_TANGRAMDATA, 0, 0);
				CTangramWordPlusDocWnd* pWnd = (CTangramWordPlusDocWnd*)lRes;
				if (pWnd == NULL)
				{
					pWnd = new CTangramWordPlusDocWnd();
					pWnd->SubclassWindow(hWnd);
					pWnd->m_hDocWnd = ::FindWindowEx(hWnd, NULL, _T("_WwF"), NULL);
					pWnd->m_hTaskPaneWnd = ::CreateWindowEx(NULL, L"Tangram Word Helper Window", _T("Tangram Word Helper Window"), WS_CHILD, 0, 0, 0, 0, hWnd, NULL, theApp.m_hInstance, NULL);
					pWnd->m_hTaskPaneChildWnd = ::CreateWindowEx(NULL, L"Tangram Word Helper Window", _T("Tangram Word Helper Window"), WS_CHILD, 0, 0, 0, 0, (HWND)pWnd->m_hTaskPaneWnd, NULL, theApp.m_hInstance, NULL);
				}
				if (pWnd)
				{
					if (pWnd->m_pWordPlusDoc == NULL)
					{
						if (pWindows)
						{
							CComPtr<Word::Window> pWordWnd;
							long h = 0;
							if (nCount == 1)
							{
								pWindows->Item(&CComVariant(1), &pWordWnd);
								if (pWordWnd)
								{
									pWordWnd->get_Hwnd(&h);
									if (hWnd == (HWND)h)
									{
										pWordDoc = new CTangramWordPlusDoc();
										pWnd->m_pWordPlusDoc = pWordDoc;
										//HRESULT hr = ((CTangramWordPlusDocEvents*)pWordDoc)->DispEventAdvise(pDoc);
										//hr = ((CTangramWordPlusDocEvents2*)pWordDoc)->DispEventAdvise(pDoc);
										pWordDoc->m_pDoc = pDoc;
										(*this)[pDoc] = pWordDoc;
										(*pWordDoc)[pWnd->m_hWnd] = pWnd;
										return pWnd;
									}
								}
							}
							else
							{
								int i = 1;
								while (1)
								{
									pWindows->Item(&CComVariant(i), &pWordWnd);
									i++;
									if (pWordWnd)
									{
										pWordWnd->get_Hwnd(&h);
										if (hWnd != (HWND)h)
										{
											LRESULT lRes = ::SendMessage((HWND)h, WM_TANGRAMDATA, 0, 0);
											CTangramWordPlusDocWnd* _pWnd = (CTangramWordPlusDocWnd*)lRes;
											if (_pWnd&&_pWnd->m_pWordPlusDoc)
											{
												pWordDoc = _pWnd->m_pWordPlusDoc;
												pWnd->m_pWordPlusDoc = pWordDoc;
												(*pWordDoc)[pWnd->m_hWnd] = pWnd;
												return pWnd;
											}
										}
									}
								}
							}
						}
					}
					else
						return pWnd;
				}
			}
			return NULL;
		}


		void CTangramWordAddin::OnNewDocument(_Document* pDoc)
		{
			HWND hWnd = NULL;
			Word::Window* pWnd = NULL;
			pDoc->get_ActiveWindow(&pWnd);
			long h = 0;
			pWnd->get_Hwnd(&h);
			hWnd = (HWND)h;
			m_pCurWordPlusDocWnd = AttachDocWithWindow(pDoc, hWnd);
			if (m_pCurWordPlusDocWnd)
			{
				CTangramWordPlusDoc* pWordDocument = m_pCurWordPlusDocWnd->m_pWordPlusDoc;
				m_pCurWordPlusDocWnd->m_hDocWnd = ::FindWindowEx(hWnd, NULL, _T("_WwF"), NULL);
				if (m_strTemplateXml == _T(""))
					m_strTemplateXml = m_strDefaultTemplateXml;
				if (m_strTemplateXml != _T(""))
				{
					CTangramXmlParse m_Parse;
					if (m_Parse.LoadXml(m_strTemplateXml))
					{
						m_strTemplateXml = _T("");
						CString strTemplateXml = m_Parse[_T("DefaultTemplate")][_T("Tangrams")].xml();
						VARIANT_BOOL bRet = false;
						CComBSTR bstrRet(L"");
						AddTangramXml(pDoc, CComBSTR(strTemplateXml), CComBSTR(L"Tangrams"), &bstrRet, &bRet);
						CString strVal = OLE2T(bstrRet);
						CString strNewDocInfo = _T("");
						if (strVal != _T(""))
							strNewDocInfo = strVal;
						if (bRet)
						{
							CTangramXmlParse m_Parse;
							if (m_Parse.LoadXml(strNewDocInfo) || m_Parse.LoadFile(strNewDocInfo))
							{
								CTangramXmlParse* pParse = m_Parse.GetChild(_T("TaskPaneUI"));
								if (pParse)
								{
									CString strXml = pParse->xml();
									if (m_pCurWordPlusDocWnd != NULL)
									{
										m_pCurWordPlusDocWnd->m_pWordPlusDoc->m_strTaskPaneXml = strXml;
									}
								}
								pParse = m_Parse.GetChild(_T("DocumentUI"));
								if (pParse)
								{
									if (m_pCurWordPlusDocWnd != NULL)
									{
										CreateTangram((LONGLONG)m_pCurWordPlusDocWnd->m_hWnd, &pWordDocument->m_pTangram);
										if (pWordDocument->m_pTangram)
										{
											pWordDocument->m_pTangram->put_External(pWordDocument->m_pDoc);
											pWordDocument->m_pTangram->CreateFrame(CComVariant(0), CComVariant((LONGLONG)m_pCurWordPlusDocWnd->m_hDocWnd), CComBSTR(L"Document"), &pWordDocument->m_pFrame);
											if (pWordDocument->m_pFrame)
											{
												CString strXml = pParse->xml();
												CComPtr<ITangramNode> pNode;

												pWordDocument->m_pFrame->Extend(CComBSTR(L"Default"), strXml.AllocSysString(), &pNode);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}

		void CTangramWordAddin::OnDocumentOpen(_Document* Doc)
		{
			HWND hWnd = NULL;
			Word::Window* pWnd = NULL;
			Doc->get_ActiveWindow(&pWnd);
			long h = 0;
			pWnd->get_Hwnd(&h);
			hWnd = (HWND)h;
			m_pCurWordPlusDocWnd = AttachDocWithWindow(Doc, hWnd);
			::PostMessage(hWnd, WM_OPENDOCUMENT, (WPARAM)m_pCurWordPlusDocWnd->m_pWordPlusDoc, 1);
		}

		void CTangramWordAddin::OnWindowActivate(_Document* pDoc, Word::Window* pWindow)
		{
			long h = 0;
			pWindow->get_Hwnd(&h);
			HWND hWnd = (HWND)h;
			m_pCurWordPlusDocWnd = AttachDocWithWindow(pDoc, hWnd);
			if (m_pCurWordPlusDocWnd)
			{
				CTangramWordPlusDoc* pWordPlusDoc = m_pCurWordPlusDocWnd->m_pWordPlusDoc;
				if (pWordPlusDoc)
				{
					if (pWordPlusDoc->m_pFrame)
						pWordPlusDoc->m_pFrame->ModifyHost((LONGLONG)m_pCurWordPlusDocWnd->m_hDocWnd);
					if (pWordPlusDoc->m_pTaskPaneFrame)
					{
						if (m_pCurWordPlusDocWnd->m_hTaskPane)
						{
							pWordPlusDoc->m_pTaskPaneFrame->ModifyHost((LONGLONG)m_pCurWordPlusDocWnd->m_hTaskPane);
						}
						else 
							pWordPlusDoc->m_pTaskPaneFrame->ModifyHost((LONGLONG)m_pCurWordPlusDocWnd->m_hTaskPaneChildWnd);
					}
				}
			}
		}

		void CTangramWordAddin::WindowCreated(LPCTSTR lpszClass, LPCTSTR strName, HWND hPWnd, HWND hWnd)
		{
		}

		HRESULT CTangramWordAddin::Tangram_Command(IDispatch* RibbonControl)
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
			CComPtr<Window> pWindow;
			m_pApplication->get_ActiveWindow(&pWindow);
			LONG hMainWnd = 0;
			pWindow->get_Hwnd(&hMainWnd);
			HWND hWnd = (HWND)hMainWnd;// ::GetActiveWindow();
			CTangramWordPlusDocWnd* pWnd = (CTangramWordPlusDocWnd*)::SendMessage(hWnd, WM_TANGRAMDATA, 0, 0);
			switch (nCmdIndex)
			{
			case 100:
			{
				CComVariant m_vRet;
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
				CComPtr<Word::_Document> pDoc = NULL;
				m_pApplication->get_ActiveDocument(&pDoc);
				if (pDoc)
				{
					AddTangramXml(pDoc, CComBSTR(strNewDocInfo), CComBSTR(L"Tangrams"), &bstrRet, &bRet);
					CString strVal = OLE2T(bstrRet);
					if (strVal != _T(""))
						strNewDocInfo = strVal;
					if (bRet)
					{
						CTangramXmlParse m_Parse;
						if (m_Parse.LoadXml(strNewDocInfo) || m_Parse.LoadFile(strNewDocInfo))
						{
							CTangramXmlParse* pParse = m_Parse.GetChild(_T("TaskPaneUI"));
							if (pParse)
							{
								CString strXml = pParse->xml();
								pWnd->m_pWordPlusDoc->m_strTaskPaneXml = strXml;
							}
							pParse = m_Parse.GetChild(_T("DocumentUI"));
							if (pParse)
							{
								if (hWnd != NULL)
								{
									hWnd = ::FindWindowEx(hWnd, NULL, _T("_Wwf"), NULL);
									CComPtr<ITangramNode> pNode;
									//m_pTangramCore->NavigateXTML((LONGLONG)hWnd, CComBSTR(pParse->xml()), &pNode);
									pNode->put_Extender(pDoc);
									if (pWnd->m_pWordPlusDoc->m_pFrame == NULL)
									{
										pNode->get_Frame(&pWnd->m_pWordPlusDoc->m_pFrame);
										pWnd->m_pWordPlusDoc->m_pFrame->AddRef();
									}
								}
							}
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
					CString strXml = pWnd->m_pWordPlusDoc->m_strTaskPaneXml;//_T("");
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
								strCap = _T("Tangram for Word");
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
								CWindow m_Wnd;
								m_Wnd.Attach(hPWnd);
								m_Wnd.ModifyStyle(0, WS_CLIPSIBLINGS | WS_CLIPCHILDREN);
								m_Wnd.Detach();
								CTangramWordPlusDoc* m_pWordPlusDoc = pWnd->m_pWordPlusDoc;
								if (m_pWordPlusDoc->m_pTaskPaneTangram == NULL)
								{
									HRESULT hr = theApp.m_pHostCore->CreateTangram((LONGLONG)hPWnd, &m_pWordPlusDoc->m_pTaskPaneTangram);
									if (m_pWordPlusDoc->m_pTaskPaneTangram)
									{
										m_pWordPlusDoc->m_pTaskPaneTangram->CreateFrame(CComVariant(0), CComVariant(hWnd), CComBSTR(L"TaskPane"), &m_pWordPlusDoc->m_pTaskPaneFrame);
										if (m_pWordPlusDoc->m_pTaskPaneFrame)
										{
											ITangramNode* pNode = NULL;
											m_pWordPlusDoc->m_pTaskPaneFrame->Extend(CComBSTR("Default"), strXml.AllocSysString(), &pNode);
										}
									}
								}
								else
								{
									m_pWordPlusDoc->m_pTaskPaneFrame->ModifyHost(hWnd);
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
					//m_pTangramCore->CreateSkinWnd(NULL, CComBSTR(m_strTemplateSubmitXml), m_pTangramManager, 100, 200);
				}
			}
			break;
			}

			return S_OK;
		}

		HRESULT CTangramWordAddin::OnConnection(IDispatch* pHostApp, int ConnectMode)
		{
			if (m_strTemplateXml == _T(""))
			{
				CTangramXmlParse m_Parse;
				if (m_Parse.LoadXml(m_strConfigFile))
				{
					m_strRibbonXml = m_Parse[_T("RibbonUI")][_T("customUI")].xml();
					m_strTemplateSubmitXml = m_Parse[_T("SubmitTemplate")].xml();
					m_strDefaultTemplateXml = m_Parse[_T("DefaultTemplate")][_T("Tangrams")].xml();
				}
			}
			pHostApp->QueryInterface(__uuidof(IDispatch), (LPVOID*)&m_pApplication);
			HRESULT hr = ((CTangramWordPlusAppEvents2*)this)->DispEventAdvise(m_pApplication);
			//hr = ((CTangramWordPlusAppEvents3*)this)->DispEventAdvise(m_pApplication);
			//hr = ((CTangramWordPlusAppEvents4*)this)->DispEventAdvise(m_pApplication);
			CComPtr<_Document> pDoc;
			CComPtr<Window> pWnd;
			m_pApplication->get_ActiveDocument(&pDoc);
			m_pApplication->get_ActiveWindow(&pWnd);
			if (pWnd)
			{
				long h = 0;
				pWnd->get_Hwnd(&h);
				HWND hWnd = (HWND)h;
				CTangramWordPlusDocWnd* pFirstWnd = new CTangramWordPlusDocWnd();
				pFirstWnd->SubclassWindow(hWnd);
				m_pCurWordPlusDocWnd = pFirstWnd;
				pFirstWnd->m_hDocWnd = ::FindWindowEx(hWnd, NULL, _T("_WwF"), NULL);
				pFirstWnd->m_hTaskPaneWnd = ::CreateWindowEx(NULL, L"Tangram Word Helper Window", _T("Tangram Word Helper Window"), WS_CHILD, 0, 0, 0, 0, hWnd, NULL, theApp.m_hInstance, NULL);
				pFirstWnd->m_hTaskPaneChildWnd = ::CreateWindowEx(NULL, L"Tangram Word Helper Window", _T("Tangram Word Helper Window"), WS_CHILD, 0, 0, 0, 0, (HWND)pFirstWnd->m_hTaskPaneWnd, NULL, theApp.m_hInstance, NULL);
			}

			if (::IsWindow(m_hHostWnd))
			{
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
				wcex.lpszClassName = L"Tangram Word Helper Window";
				wcex.hIconSm = NULL;
				RegisterClassEx(&wcex);
			}

			return S_OK;
		}


		HRESULT CTangramWordAddin::OnDisconnection(int DisConnectMode)
		{
			if (m_pCurWordPlusDocWnd)
			{
				if (m_pCurWordPlusDocWnd->m_pWordPlusDoc)
				{
					//HRESULT hr = ((CTangramWordPlusDocEvents*)m_pCurWordPlusDocWnd->m_pWordPlusDoc)->DispEventUnadvise(m_pCurWordPlusDocWnd->m_pWordPlusDoc->m_pDoc);
					//hr = ((CTangramWordPlusDocEvents2*)m_pCurWordPlusDocWnd->m_pWordPlusDoc)->DispEventUnadvise(m_pCurWordPlusDocWnd->m_pWordPlusDoc->m_pDoc);
					//m_pCurWordPlusDocWnd->m_pWordPlusDoc->m_pDoc = NULL;
					delete m_pCurWordPlusDocWnd->m_pWordPlusDoc;
					m_pCurWordPlusDocWnd->m_pWordPlusDoc = NULL;
				}
			}
			HRESULT hr = ((CTangramWordPlusAppEvents2*)this)->DispEventUnadvise(m_pApplication);
			//hr = ((CTangramWordPlusAppEvents3*)this)->DispEventUnadvise(m_pApplication);
			//hr = ((CTangramWordPlusAppEvents4*)this)->DispEventUnadvise(m_pApplication);
			m_pApplication = NULL;
			return S_OK;
		}

		HRESULT CTangramWordAddin::GetCustomAddinUI(BSTR RibbonID, BSTR* RibbonXml)
		{
			if (!RibbonXml || m_strRibbonXml == _T(""))
				return E_POINTER;
			*RibbonXml = CComBSTR(m_strRibbonXml);
			return (*RibbonXml ? S_OK : E_OUTOFMEMORY);
		}

		STDMETHODIMP CTangramWordAddin::ShowOfficeDocument(VARIANT_BOOL bNewDoc, BSTR bstrKey, BSTR bstrXml, IDispatch** ppRetNode)
		{
			if (bNewDoc)
			{
				CComPtr<Documents> pDocsDisp2;
				m_pApplication->get_Documents(&pDocsDisp2);
				if (pDocsDisp2)
				{
					CComPtr<_Document> pDoc;
					CComVariant varVisible(true);
					CComVariant varNew(true);
					CComVariant varTemplate(L"");
					CComVariant varTypr(0);
					pDocsDisp2->Add(&varTemplate, &varNew, &varTypr, &varVisible, &pDoc);
					CComPtr<Window> pWnd;
					m_pApplication->get_ActiveWindow(&pWnd);
					long h = 0;
					pWnd->get_Hwnd(&h);
					HWND hWnd = ::FindWindowEx((HWND)h, NULL, _T("_WwF"), NULL);
					ITangramNode* pNode = NULL;
					ITangramFrame* pFrame = NULL;
					theApp.m_pTangramCore->GetTangramFrame((LONGLONG)hWnd, &pFrame);
					if (pFrame)
					{
						pFrame->Extend(bstrKey, bstrXml, &pNode);
						*ppRetNode = pNode;
					}
				}
			}

			return S_OK;
		}
	}
}
