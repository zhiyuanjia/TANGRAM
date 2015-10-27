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

// TangramVBAForm.cpp : CTangramVBAForm µÄÊµÏÖ

#include "../../stdafx.h"
#include "../../TangramApp.h"
#include "TangramVBAForm.h"

ITangramVBAForm* CTangramApp::CreateFormWnd(HWND hFormWnd)
{
	TangramOfficePlus::VBA::CTangramVBAForm * pObj = new CComObject<TangramOfficePlus::VBA::CTangramVBAForm>;
	pObj->SubclassWindow(hFormWnd);
	pObj->m_hFormChild = ::GetWindow(hFormWnd, GW_CHILD);
	return pObj;
}

namespace TangramOfficePlus
{
	namespace VBA
	{
		// CTangramVBAForm
		CTangramVBAForm::CTangramVBAForm()
		{
			m_pTangram = NULL;
			m_pTangramFrame = NULL;
			m_hFormChild = NULL;
			theApp.m_pActiveForm2 = this;
		}

		void CTangramVBAForm::OnFinalMessage(HWND hWnd)
		{
			__super::OnFinalMessage(hWnd);
			delete this;
		}

		STDMETHODIMP CTangramVBAForm::get_TangramFrame(ITangramFrame** ppRetFrame)
		{
			if (m_pTangramFrame == NULL)
			{
				if (m_pTangram == NULL)
				{
					theApp.m_pTangramCore->CreateTangram((LONGLONG)m_hWnd, &m_pTangram);
				}
				if (m_pTangram)
				{
					m_pTangram->CreateFrame(CComVariant(0), CComVariant((LONGLONG)m_hFormChild), CComBSTR(L"Default"), ppRetFrame);
				}
			}
			else
				*ppRetFrame = m_pTangramFrame;

			return S_OK;
		}
		STDMETHODIMP CTangramVBAForm::get_Sizable(BOOL* pVal)
		{
			return S_OK;
		}

		STDMETHODIMP CTangramVBAForm::put_Sizable(BOOL newVal)
		{
			ModifyStyle(0, WS_SIZEBOX | WS_BORDER |WS_MAXIMIZEBOX);

			return S_OK;
		}
	}
}// namespace TangramOfficePlus
