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

#include "../stdafx.h"
#include "TangramVSAddin.h"


namespace TangramVisualStudioPlus
{
	namespace VisualStudioPlus
	{
		CTangramVSAddin::CTangramVSAddin()
		{
			m_pOutputWindowPane = NULL;
		}

		CTangramVSAddin::~CTangramVSAddin()
		{
		}

		IDispatch* CTangramVSAddin::GetOutputPane()
		{
			IDispatch* pRetDisp = NULL;
			CComBSTR bstrDTE(L"DTE");
			CComPtr<IDispatch> pDisp;
			if (theApp.m_pTangramCore)
			{
				theApp.m_pTangramCore->get_TangramExtender(bstrDTE, &pDisp);
				if (pDisp)
				{
					//pDisp.p->Release();
					CComQIPtr<DTE2> pDTE2(pDisp);
					CComPtr<Window> pWnd;
					pDTE2->get_MainWindow(&pWnd);
					long h = 0;
					if (pWnd)
						pWnd->get_HWnd(&h);
					CComPtr<ToolWindows> pToolWindows;
					pDTE2->get_ToolWindows(&pToolWindows);
					if (pToolWindows)
					{
						CComPtr<VxDTE::OutputWindow> pOutWnd;
						pToolWindows->get_OutputWindow(&pOutWnd);
						if (pOutWnd)
						{
							CComPtr<OutputWindowPane> pPane;
							CComPtr<OutputWindowPanes> pPanes;
							pOutWnd->get_OutputWindowPanes(&pPanes);
							pPanes->Add(CComBSTR(L"Tangram"), &pPane);
							pPane->OutputString(CComBSTR(L"Welcome to Tangram!\r\n"));
							pRetDisp = pPane.p;
							pRetDisp->AddRef();
							m_pOutputWindowPane = pPane.Detach();
							//m_pOutputWindowPane->AddRef();
						}
					}
				}
			}

			return S_OK;
		}

		void CTangramVSAddin::PutTextToOutputPane(BSTR bstrMsg)
		{
			if (m_pOutputWindowPane)
			{
				m_pOutputWindowPane->OutputString(bstrMsg);
			}
		}

		void CTangramVSAddin::ClearOutputPane()
		{
			if (m_pOutputWindowPane)
			{
				m_pOutputWindowPane->Clear();
			}
		}

		HWND CTangramVSAddin::GetHWnd()
		{
			CComBSTR bstrDTE(L"DTE");
			CComPtr<IDispatch> pDisp;
			if (theApp.m_pTangramCore)
			{
				theApp.m_pTangramCore->get_TangramExtender(bstrDTE, &pDisp);
				if (pDisp)
				{
					CComQIPtr<DTE2> pDTE2(pDisp);
					CComPtr<Window> pWnd;
					pDTE2->get_MainWindow(&pWnd);
					if (pWnd)
					{
						long h = 0;
						pWnd->get_HWnd(&h);
						return (HWND)h;
					}
				}
			}

			return NULL;
		}
	}
}

