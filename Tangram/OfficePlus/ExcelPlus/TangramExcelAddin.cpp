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
#include "../../TangramApp.h"
#include "TangramExcelAddin.h"
#include "ExcelPlusWnd.h"
#include "ExcelPlusEvents.cpp"

#include "..\Tangram\EclipsePlus\TangramCtrl.h"

namespace TangramOfficePlus
{
	namespace ExcelPlus
	{
		CTangramExcelAddin::CTangramExcelAddin():CTangramOfficePlusApp()
		{
			m_pActiveWnd = NULL;
			m_bOldVer = false;
			CString strVer = theApp.GetFileVer();
			int nPos = strVer.Find(_T("."));
			strVer = strVer.Left(nPos);
			int nVer = _wtoi(strVer);
			if (nVer<15)
				m_bOldVer = true;

			CComVariant m_v;
			m_v.vt = VT_I4;
			m_v.lVal = (LONGLONG)(CTangramOfficePlusApp*)this;
			theApp.m_pHostCore->put_TangramVal(CComBSTR(L"OfficePlusApp"), m_v);
		}

		CTangramExcelAddin::~CTangramExcelAddin()
		{
		}

		STDMETHODIMP CTangramExcelAddin::AddTangramXml(IDispatch* pDocdisp, BSTR bstrXml, BSTR bstrKey, BSTR* bstrRet, VARIANT_BOOL* bSuccess)
		{
			CComQIPtr<Excel::_Workbook> pDoc(pDocdisp);
			if (pDoc)
			{
				CComPtr<Office::_CustomXMLParts> pCustomXMLParts;
				pDoc->get_CustomXMLParts(&pCustomXMLParts);
				_AddTangramXml(pCustomXMLParts.p, bstrXml, bstrKey, bstrRet, bSuccess);
			}

			return S_OK;
		}

		STDMETHODIMP CTangramExcelAddin::GetTangramXml(IDispatch* pDocdisp, BSTR bstrKey, BSTR* pbstrXml)
		{
			CComQIPtr<Excel::_Workbook> pDoc(pDocdisp);
			if (pDoc)
			{
				CComPtr<Office::_CustomXMLParts> pCustomXMLParts;
				pDoc->get_CustomXMLParts(&pCustomXMLParts);
				_GetTangramXml(pCustomXMLParts.p, bstrKey, pbstrXml);
			}
			return S_OK;
		}

		void CTangramExcelAddin::OnNewWorkbook(_Workbook* Wb)
		{
			CComPtr<Excel::Window> pWnd = NULL;
			m_pApplication->get_ActiveWindow(&pWnd);
			HWND hWnd = NULL;
			if (pWnd)
			{
				long h = 0;
				pWnd->get_Hwnd(&h);
				if (h)
					hWnd = (HWND)h;
			}

			HWND m_hClientWnd = ::FindWindowEx(hWnd, NULL, _T("XLDESK"), NULL);
			HWND m_hInputWnd = ::FindWindowEx(hWnd, NULL, _T("EXCEL<"), NULL);
			HWND m_hWorkBookWnd = (HWND) ::SendMessage(m_hClientWnd, WM_MDIGETACTIVE, 0, 0);
			CTangramExcelPlusWBWnd* pExcelWorkBookWnd = new CTangramExcelPlusWBWnd();
			pExcelWorkBookWnd->m_hInputWnd2 = ::FindWindowEx(m_hClientWnd, NULL, _T("EXCEL6"), NULL);
			theApp.m_hExcelEdit2 = pExcelWorkBookWnd->m_hInputWnd2;
			pExcelWorkBookWnd->m_hInputWnd = m_hInputWnd;
			pExcelWorkBookWnd->SubclassWindow(m_hWorkBookWnd);
			pExcelWorkBookWnd->m_hTaskPaneWnd = ::CreateWindowEx(NULL, _T("Tangram Remote Helper Window"), L"Tangram TaskPane Helper Window", WS_CHILD, 0, 0, 0, 0, pExcelWorkBookWnd->m_hWnd, NULL, theApp.m_hInstance, NULL);
			pExcelWorkBookWnd->m_hTaskPaneChildWnd = ::CreateWindowEx(NULL, _T("Tangram Remote Helper Window"), L"Tangram TaskPane Helper Window", WS_CHILD, 0, 0, 0, 0, (HWND)pExcelWorkBookWnd->m_hTaskPaneWnd, NULL, theApp.m_hInstance, NULL);
			pExcelWorkBookWnd->m_pWorkBook = new CTangramExcelPlusWB();
			HRESULT hr = pExcelWorkBookWnd->m_pWorkBook->DispEventAdvise(Wb);
			pExcelWorkBookWnd->m_pWorkBook->m_pWorkBook = Wb;
			pExcelWorkBookWnd->m_pWorkBook->m_pWorkBook->AddRef();
			pExcelWorkBookWnd->m_pWorkBook->m_mapExcelWorkBookWnd[m_hWorkBookWnd] = pExcelWorkBookWnd;
			(*this)[Wb] = pExcelWorkBookWnd->m_pWorkBook;

			m_pActiveWnd = pExcelWorkBookWnd;
			if (m_strTemplateXml == _T(""))
				m_strTemplateXml = m_strDefaultTemplateXml;
			if (m_strTemplateXml != _T(""))
			{
				theApp.m_hExcelEdit = m_hInputWnd;
				//theApp.m_hExcelEdit2
				CTangramXmlParse m_Parse;
				CString strTemplateXml = _T("");
				if (m_Parse.LoadXml(m_strTemplateXml))
				{
					m_strTemplateXml = _T("");
					strTemplateXml = m_Parse[_T("DefaultTemplate")][_T("Tangrams")].xml();
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

				VARIANT_BOOL bRet = false;
				CComBSTR bstrRet(L"");
				AddTangramXml(Wb, CComBSTR(strNewDocInfo), CComBSTR(L"Tangrams"), &bstrRet, &bRet);
				strNewDocInfo = OLE2T(bstrRet);

				if (strNewDocInfo != _T("") && bRet)
				{
					CTangramXmlParse m_Parse;
					if (m_Parse.LoadXml(strNewDocInfo) || m_Parse.LoadFile(strNewDocInfo))
					{
						CTangramXmlParse* pParse = m_Parse.GetChild(_T("TaskPaneUI"));
						if (pParse)
						{
							pExcelWorkBookWnd->m_pWorkBook->m_strTaskPaneXml = pParse->xml();
						}
						pParse = m_Parse.GetChild(_T("DocumentUI"));
						if (pParse)
						{
							if (pExcelWorkBookWnd != NULL)
							{
								theApp.m_pTangramCore->CreateTangram((LONGLONG)pExcelWorkBookWnd->m_hWnd, &pExcelWorkBookWnd->m_pWorkBook->m_pTangram);
								if (pExcelWorkBookWnd->m_pWorkBook->m_pTangram)
								{
									pExcelWorkBookWnd->m_pWorkBook->m_pTangram->put_External(pExcelWorkBookWnd->m_pWorkBook->m_pWorkBook);
									pExcelWorkBookWnd->m_pWorkBook->m_pTangram->CreateFrame(CComVariant(0), CComVariant((LONGLONG)m_hWorkBookWnd), CComBSTR(L"Document"), &pExcelWorkBookWnd->m_pWorkBook->m_pFrame);
									if (pExcelWorkBookWnd->m_pWorkBook->m_pFrame)
									{
										//if (m_bOldVer)
										//	pExcelWorkBookWnd->m_pWorkBook->m_pFrame->ModifyHost((LONGLONG)m_hClientWnd);
										IDispatch* pDisp = NULL;
										Wb->get_ActiveSheet(&pDisp);
										CComQIPtr<Excel::_Worksheet> pSheet(pDisp);
										if (pSheet)
										{
											CComBSTR bstrName(L"");
											pSheet->get_Name(&bstrName);
											CString strName = OLE2T(bstrName);
											pExcelWorkBookWnd->m_strActiveSheetName = strName;
											CTangramXmlParse* pParse2 = pParse->GetChild(strName);
											if (pParse2 == NULL)
												pParse2 = pParse->GetChild(_T("Default"));
											pExcelWorkBookWnd->m_pWorkBook->LoadXml(pParse->xml());
											CComPtr<ITangramNode> pNode;
											CString strXml = pParse2->xml();
											pExcelWorkBookWnd->m_pWorkBook->m_pFrame->Extend(bstrName, CComBSTR(strXml), &pNode);
											CComPtr<Sheets> pSheets;
											Wb->get_Worksheets(&pSheets);
											if (pSheets)
											{
												long nCount = 0;
												pSheets->get_Count(&nCount);
												if (nCount)
												{
													for (int i = 1; i <= nCount; i++)
													{
														CComPtr<Excel::_Worksheet> pSheet;
														pSheets->get_Item(CComVariant(i), (IDispatch **)&pSheet);
														if (pSheet)
														{
															CTangramExcelWorkSheet* pExcelWorkSheet = new CTangramExcelWorkSheet();
															pExcelWorkSheet->DispEventAdvise(pSheet.p);
															pExcelWorkSheet->m_pSheet = pSheet.p;
															pExcelWorkSheet->m_pSheet->AddRef();
															(*pExcelWorkBookWnd->m_pWorkBook)[pExcelWorkSheet->m_pSheet] = pExcelWorkSheet;
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
				}
			}
		}

		void CTangramExcelAddin::OnWorkbookOpen(_Workbook* Wb)
		{
			CComPtr<Excel::Window> pWnd = NULL;
			m_pApplication->get_ActiveWindow(&pWnd);
			HWND hWnd = NULL;
			if (pWnd)
			{
				long h = 0;
				pWnd->get_Hwnd(&h);
				if (h)
					hWnd = (HWND)h;
			}

			HWND m_hClientWnd = ::FindWindowEx(hWnd, NULL, _T("XLDESK"), NULL);
			HWND m_hInputWnd = ::FindWindowEx(hWnd, NULL, _T("EXCEL<"), NULL);
			HWND m_hWorkBookWnd = (HWND) ::SendMessage(m_hClientWnd, WM_MDIGETACTIVE, 0, 0);
			CTangramExcelPlusWBWnd* pExcelWorkBookWnd = new CTangramExcelPlusWBWnd();
			pExcelWorkBookWnd->m_hInputWnd2 = ::FindWindowEx(m_hClientWnd, NULL, _T("EXCEL6"), NULL);
			theApp.m_hExcelEdit2 = pExcelWorkBookWnd->m_hInputWnd2;
			pExcelWorkBookWnd->SubclassWindow(m_hWorkBookWnd);
			pExcelWorkBookWnd->m_hTaskPaneWnd = ::CreateWindowEx(NULL, _T("Tangram Remote Helper Window"), L"Tangram TaskPane Helper Window", WS_CHILD, 0, 0, 0, 0, pExcelWorkBookWnd->m_hWnd, NULL, theApp.m_hInstance, NULL);
			pExcelWorkBookWnd->m_hTaskPaneChildWnd = ::CreateWindowEx(NULL, _T("Tangram Remote Helper Window"), L"Tangram TaskPane Helper Window", WS_CHILD, 0, 0, 0, 0, (HWND)pExcelWorkBookWnd->m_hTaskPaneWnd, NULL, theApp.m_hInstance, NULL);
			pExcelWorkBookWnd->m_pWorkBook = new CTangramExcelPlusWB();
			pExcelWorkBookWnd->m_hInputWnd = m_hInputWnd;
			HRESULT hr = pExcelWorkBookWnd->m_pWorkBook->DispEventAdvise(Wb);
			pExcelWorkBookWnd->m_pWorkBook->m_pWorkBook = Wb;
			pExcelWorkBookWnd->m_pWorkBook->m_pWorkBook->AddRef();
			pExcelWorkBookWnd->m_pWorkBook->m_mapExcelWorkBookWnd[m_hWorkBookWnd] = pExcelWorkBookWnd;
			(*this)[Wb] = pExcelWorkBookWnd->m_pWorkBook;

			theApp.m_hExcelEdit = m_hInputWnd;

			CComBSTR bstrXml(L"");
			GetTangramXml(Wb, CComBSTR(L"Tangrams"), &bstrXml);
			CString strXML = OLE2T(bstrXml);
			if (strXML != _T(""))
			{
				CTangramXmlParse m_Parse;
				if (m_Parse.LoadXml(strXML))
				{
					CTangramXmlParse* pParse = m_Parse.GetChild(_T("TaskPaneUI"));
					if (pParse)
					{
						pExcelWorkBookWnd->m_pWorkBook->m_strTaskPaneXml = pParse->xml();
					}
					pParse = m_Parse.GetChild(_T("DocumentUI"));
					if (pParse)
					{
						if (pExcelWorkBookWnd != NULL)
						{
							theApp.m_pTangramCore->CreateTangram((LONGLONG)pExcelWorkBookWnd->m_hWnd, &pExcelWorkBookWnd->m_pWorkBook->m_pTangram);
							if (pExcelWorkBookWnd->m_pWorkBook->m_pTangram)
							{
								pExcelWorkBookWnd->m_pWorkBook->m_pTangram->put_External(pExcelWorkBookWnd->m_pWorkBook->m_pWorkBook);
								pExcelWorkBookWnd->m_pWorkBook->m_pTangram->CreateFrame(CComVariant(0), CComVariant((LONGLONG)m_hWorkBookWnd), CComBSTR(L"Document"), &pExcelWorkBookWnd->m_pWorkBook->m_pFrame);
								if (pExcelWorkBookWnd->m_pWorkBook->m_pFrame)
								{
									//if (m_bOldVer)
									//	pExcelWorkBookWnd->m_pWorkBook->m_pFrame->ModifyHost((LONGLONG)m_hClientWnd);
									IDispatch* pDisp = NULL;
									Wb->get_ActiveSheet(&pDisp);
									CComQIPtr<Excel::_Worksheet> pSheet(pDisp);
									if (pSheet)
									{
										CComBSTR bstrName(L"");
										pSheet->get_Name(&bstrName);
										CString strName = OLE2T(bstrName);
										pExcelWorkBookWnd->m_strActiveSheetName = strName;
										CTangramXmlParse* pParse2 = pParse->GetChild(strName);
										if (pParse2 == NULL)
											pParse2 = pParse->GetChild(_T("Default"));
										pExcelWorkBookWnd->m_pWorkBook->LoadXml(pParse->xml());
										CComPtr<ITangramNode> pNode;
										CString strXml = pParse2->xml();
										pExcelWorkBookWnd->m_pWorkBook->m_pFrame->Extend(bstrName, CComBSTR(strXml), &pNode);
										CComPtr<Sheets> pSheets;
										Wb->get_Worksheets(&pSheets);
										if (pSheets)
										{
											long nCount = 0;
											pSheets->get_Count(&nCount);
											if (nCount)
											{
												for (int i = 1; i <= nCount; i++)
												{
													CComPtr<Excel::_Worksheet> pSheet;
													pSheets->get_Item(CComVariant(i), (IDispatch **)&pSheet);
													if (pSheet)
													{
														CTangramExcelWorkSheet* pExcelWorkSheet = new CTangramExcelWorkSheet();
														pExcelWorkSheet->DispEventAdvise(pSheet.p);
														pExcelWorkSheet->m_pSheet = pSheet.p;
														pExcelWorkSheet->m_pSheet->AddRef();
														(*pExcelWorkBookWnd->m_pWorkBook)[pExcelWorkSheet->m_pSheet] = pExcelWorkSheet;
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
			}
		}

		//void CTangramExcelAddin::OnWorkbookActivate(_Workbook* Wb)
		//{
		//	HWND hWnd = ::GetActiveWindow();
		//	theApp.m_hExcelEdit = ::FindWindowEx(hWnd, NULL, _T("EXCEL<"), NULL);
		//}

		void CTangramExcelAddin::OnWindowActivate(_Workbook* Wb, Window* pWindow)
		{
			long h = 0;
			pWindow->get_Hwnd(&h);
			HWND hWnd = (HWND)h;// ::GetActiveWindow();
			HWND m_hClientWnd = ::FindWindowEx(hWnd, NULL, _T("XLDESK"), NULL);
			HWND m_hInputWnd = ::FindWindowEx(hWnd, NULL, _T("EXCEL<"), NULL);
			HWND m_hWorkBookWnd = (HWND) ::SendMessage(m_hClientWnd, WM_MDIGETACTIVE, 0, 0);
			CTangramExcelPlusWBWnd* pExcelWorkBookWnd = (CTangramExcelPlusWBWnd*)::SendMessage(m_hWorkBookWnd, WM_TANGRAMDATA, 0, 0);
			if (pExcelWorkBookWnd)
			{
				if (pExcelWorkBookWnd->m_hInputWnd2 == NULL)
					pExcelWorkBookWnd->m_hInputWnd2 = ::FindWindowEx(m_hClientWnd, NULL, _T("EXCEL6"), NULL);
				theApp.m_hExcelEdit2 = pExcelWorkBookWnd->m_hInputWnd2;
			}

			theApp.m_hExcelEdit = m_hInputWnd;

			ExcelWorkBookWndDispMapIT it = find(Wb);

			if (it != end())
			{
				CTangramExcelPlusWB* pWorkBook = it->second;
				ExcelWorkBookWndMapIT it2 = pWorkBook->m_mapExcelWorkBookWnd.find(m_hWorkBookWnd);
				if (it2 == pWorkBook->m_mapExcelWorkBookWnd.end())
				{
					pExcelWorkBookWnd = new CTangramExcelPlusWBWnd();
					pExcelWorkBookWnd->m_hInputWnd = m_hInputWnd;
					pExcelWorkBookWnd->SubclassWindow(m_hWorkBookWnd);
					pExcelWorkBookWnd->m_hTaskPaneWnd = ::CreateWindowEx(NULL, _T("Tangram Remote Helper Window"), L"Tangram TaskPane Helper Window", WS_CHILD, 0, 0, 0, 0, pExcelWorkBookWnd->m_hWnd, NULL, theApp.m_hInstance, NULL);
					pExcelWorkBookWnd->m_hTaskPaneChildWnd = ::CreateWindowEx(NULL, _T("Tangram Remote Helper Window"), L"Tangram TaskPane Helper Window", WS_CHILD, 0, 0, 0, 0, (HWND)pExcelWorkBookWnd->m_hTaskPaneWnd, NULL, theApp.m_hInstance, NULL);
					pExcelWorkBookWnd->m_pWorkBook = pWorkBook;
					CComPtr<IDispatch> pDisp;
					pExcelWorkBookWnd->m_pWorkBook->m_pWorkBook->get_ActiveSheet(&pDisp);
					CComQIPtr<Excel::_Worksheet> pSheet(pDisp);
					if (pSheet)
					{
						CComBSTR bstrName(L"");
						pSheet->get_Name(&bstrName);
						pExcelWorkBookWnd->m_strActiveSheetName = OLE2T(bstrName);
					}
					if(pExcelWorkBookWnd->m_hInputWnd2==NULL)
						pExcelWorkBookWnd->m_hInputWnd2 = ::FindWindowEx(m_hClientWnd, NULL, _T("EXCEL6"), NULL);
					theApp.m_hExcelEdit2 = pExcelWorkBookWnd->m_hInputWnd2;
					it->second->m_mapExcelWorkBookWnd[m_hWorkBookWnd] = pExcelWorkBookWnd;
				}

				m_pActiveWnd = pExcelWorkBookWnd;
				if (pWorkBook->m_pFrame)
					pWorkBook->m_pFrame->ModifyHost((LONGLONG)m_hWorkBookWnd);
				if (pWorkBook->m_pTaskPaneFrame)
				{
					if (pExcelWorkBookWnd->m_hTaskPane)
					{
						pWorkBook->m_pTaskPaneFrame->ModifyHost((LONGLONG)pExcelWorkBookWnd->m_hTaskPane);
					}
					else 
						pWorkBook->m_pTaskPaneFrame->ModifyHost((LONGLONG)pExcelWorkBookWnd->m_hTaskPaneChildWnd);
				}

				if (pExcelWorkBookWnd->m_strActiveSheetName != _T(""))
				{
					CTangramXmlParse* pParse2 = pExcelWorkBookWnd->m_pWorkBook->GetChild(pExcelWorkBookWnd->m_strActiveSheetName);
					if (pParse2 == NULL)
						pParse2 = pExcelWorkBookWnd->m_pWorkBook->GetChild(_T("Default"));
					if (pParse2)
					{
						CComPtr<ITangramNode> pNode;
						pExcelWorkBookWnd->m_pWorkBook->m_pFrame->Extend(pExcelWorkBookWnd->m_strActiveSheetName.AllocSysString(), CComBSTR(pParse2->xml()), &pNode);
					}
				}
			}
		}

		HRESULT CTangramExcelAddin::Tangram_Command(IDispatch* RibbonControl)
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
			long hMainWnd = 0;
			pWindow->get_Hwnd(&hMainWnd);
			HWND hWnd = (HWND)hMainWnd;// ::GetActiveWindow();
			HWND m_hClientWnd = ::FindWindowEx(hWnd, NULL, _T("XLDESK"), NULL);
			HWND m_hWorkBookWnd = (HWND) ::SendMessage(m_hClientWnd, WM_MDIGETACTIVE, 0, 0);
			CTangramExcelPlusWBWnd* pWnd = (CTangramExcelPlusWBWnd*)::SendMessage(m_hWorkBookWnd, WM_TANGRAMDATA, 0, 0);
			//HWND hWnd = ::GetActiveWindow();
			switch (nCmdIndex)
			{
			case 100:
			{
				Excel::_Workbook* Wb = NULL;
				HRESULT hr = m_pApplication->get_ActiveWorkbook(&Wb);
				theApp.m_hExcelEdit = ::FindWindowEx(hWnd, NULL, _T("EXCEL<"), NULL);

				hr = theApp.m_pTangramCore->put_ExternalInfo(CComVariant((long)m_hClientWnd));
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
				AddTangramXml(Wb, CComBSTR(strNewDocInfo), CComBSTR(L"Tangrams"), &bstrRet, &bRet);
				strNewDocInfo = OLE2T(bstrRet);

				if (strNewDocInfo != _T("") && bRet)
				{
					CTangramXmlParse m_Parse;
					if (m_Parse.LoadXml(strNewDocInfo) || m_Parse.LoadFile(strNewDocInfo))
					{
						CTangramXmlParse* pParse = m_Parse.GetChild(_T("TaskPaneUI"));
						if (pParse)
						{
							pWnd->m_pWorkBook->m_strTaskPaneXml = pParse->xml();
						}
						pParse = m_Parse.GetChild(_T("DocumentUI"));
						if (pParse)
						{
							IDispatch* pDisp = NULL;
							Wb->get_ActiveSheet(&pDisp);
							CComQIPtr<Excel::_Worksheet> pSheet(pDisp);
							if (pSheet)
							{
								CComBSTR bstrName(L"");
								pSheet->get_Name(&bstrName);
								CString strName = OLE2T(bstrName);
								CTangramXmlParse* pParse2 = pParse->GetChild(strName);
								if (pParse2 == NULL)
									pParse2 = pParse->GetChild(_T("Default"));
								pWnd->m_pWorkBook->LoadXml(pParse->xml());
								CComPtr<ITangramNode> pNode;
								pNode->get_Frame(&pWnd->m_pWorkBook->m_pFrame);
								pNode->put_Extender(Wb);
								pWnd->m_pWorkBook->m_pFrame->AddRef();
								//if (m_bOldVer)
								//	pExcelWorkBookWnd->m_pWorkBook->m_pFrame->ModifyHost((LONGLONG)m_hClientWnd);
								CComPtr<Sheets> pSheets;
								Wb->get_Worksheets(&pSheets);
								if (pSheets)
								{
									long nCount = 0;
									pSheets->get_Count(&nCount);
									if (nCount)
									{
										for (int i = 1; i <= nCount; i++)
										{
											CComPtr<Excel::_Worksheet> pSheet;
											pSheets->get_Item(CComVariant(i), (IDispatch **)&pSheet);
											if (pSheet)
											{
												CTangramExcelWorkSheet* pExcelWorkSheet = new CTangramExcelWorkSheet();
												pExcelWorkSheet->DispEventAdvise(pSheet.p);
												pExcelWorkSheet->m_pSheet = pSheet.p;
												pExcelWorkSheet->m_pSheet->AddRef();
												(*pWnd->m_pWorkBook)[pExcelWorkSheet->m_pSheet] = pExcelWorkSheet;
											}
										}
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
					m_mapTaskPaneMap[hMainWnd]->put_Visible(true);
				else
				{
					CString strXml = pWnd->m_pWorkBook->m_strTaskPaneXml;
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
								strCap = _T("Tangram for Excel");
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
								CWindow m_Wnd;
								m_Wnd.Attach(hPWnd);
								m_Wnd.ModifyStyle(0, WS_CLIPSIBLINGS | WS_CLIPCHILDREN);
								m_Wnd.Detach();
								CTangramExcelPlusWB* m_pWorkBook = pWnd->m_pWorkBook;
								if (m_pWorkBook->m_pTaskPaneTangram == NULL)
								{
									HRESULT hr = theApp.m_pHostCore->CreateTangram((LONGLONG)hPWnd, &m_pWorkBook->m_pTaskPaneTangram);
									if (m_pWorkBook->m_pTaskPaneTangram)
									{
										m_pWorkBook->m_pTaskPaneTangram->CreateFrame(CComVariant(0), CComVariant(hWnd), CComBSTR(L"TaskPane"), &m_pWorkBook->m_pTaskPaneFrame);
										if (m_pWorkBook->m_pTaskPaneFrame)
										{
											ITangramNode* pNode = NULL;
											m_pWorkBook->m_pTaskPaneFrame->Extend(CComBSTR("Default"), strXml.AllocSysString(), &pNode);
										}
									}
								}
								else
									m_pWorkBook->m_pTaskPaneFrame->ModifyHost(hWnd);
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

		HRESULT CTangramExcelAddin::OnConnection(IDispatch* pHostApp, int ConnectMode)
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
			theApp.EventTrack.cbSize = sizeof(TRACKMOUSEEVENT);
			theApp.EventTrack.dwFlags = TME_LEAVE;

			pHostApp->QueryInterface(__uuidof(IDispatch), (LPVOID*)&m_pApplication);
			HRESULT hr = ((CTangramExcelPlusAppEvents*)this)->DispEventAdvise(m_pApplication);
			return S_OK;
		}

		HRESULT CTangramExcelAddin::OnDisconnection(int DisConnectMode)
		{
			HRESULT hr = ((CTangramExcelPlusAppEvents*)this)->DispEventUnadvise(m_pApplication);
			m_pApplication.p->Release();
			m_pApplication.Detach();
			return S_OK;
		}

		HRESULT CTangramExcelAddin::GetCustomAddinUI(BSTR RibbonID, BSTR* RibbonXml)
		{
			if (!RibbonXml)
				return E_POINTER;
			*RibbonXml = m_strRibbonXml.AllocSysString();
			return (*RibbonXml ? S_OK : E_OUTOFMEMORY);
		}

		void CTangramExcelAddin::WindowCreated(LPCTSTR lpszClass, LPCTSTR strName, HWND hPWnd, HWND hWnd)
		{
		}

		STDMETHODIMP CTangramExcelAddin::ShowOfficeDocument(VARIANT_BOOL bNewDoc, BSTR bstrKey, BSTR bstrXml, IDispatch** ppRetNode)
		{
			if (bNewDoc)
			{
				CComPtr<Workbooks> pWorkBooksDisp2;
				m_pApplication->get_Workbooks(&pWorkBooksDisp2);
				if (pWorkBooksDisp2)
				{
					CComPtr<_Workbook> pDoc;
					CComVariant varTemplate(L"");
					pWorkBooksDisp2->Add(varTemplate, 0, &pDoc);
					if (pDoc)
					{
						CComPtr<Windows> pWindows;
						pDoc->get_Windows(&pWindows);
						CComPtr<Window> pWnd;
						pWindows->get_Item(CComVariant(1), &pWnd);
						if (pWnd)
						{
							long h = 0;
							pWnd->get_Hwnd(&h);
							HWND hWnd = (HWND)h;
							HWND m_hClientWnd = ::FindWindowEx(hWnd, NULL, _T("XLDESK"), NULL);
							HWND m_hWorkBookWnd = (HWND) ::SendMessage(m_hClientWnd, WM_MDIGETACTIVE, 0, 0);
							ITangramNode* pNode = NULL;
							ITangramFrame* pFrame = NULL;
							theApp.m_pTangramCore->GetTangramFrame((LONGLONG)m_hWorkBookWnd, &pFrame);
							if (pFrame)
							{
								pFrame->Extend(bstrKey, bstrXml, &pNode);
								*ppRetNode = pNode;
							}
							if (::IsWindow(hWnd))
							{
								::BringWindowToTop(hWnd);
							}
						}
					}
				}
			}

			return S_OK;
		}
	}
}
