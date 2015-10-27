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

// TangramVBAForm.h : CTangramVBAForm µÄÉùÃ÷

#pragma once

#include "Tangram.h"
#include "_ITangramVBAFormEvents_CP.h"
#include "MSForms.h"
using namespace MSForm;
namespace TangramOfficePlus
{
	namespace VBA
	{
		// CTangramVBAForm
		class ATL_NO_VTABLE CTangramVBAForm :
			public CComObjectRootEx<CComSingleThreadModel>,
			public CWindowImpl<CTangramVBAForm, CWindow>,
			public IConnectionPointContainerImpl<CTangramVBAForm>,
			public CProxy_ITangramVBAFormEvents<CTangramVBAForm>,
			public IDispatchImpl<ITangramVBAForm, &IID_ITangramVBAForm, &LIBID_Tangram, /*wMajor =*/ 1, /*wMinor =*/ 0>
		{
		public:
			CTangramVBAForm();

			BEGIN_COM_MAP(CTangramVBAForm)
				COM_INTERFACE_ENTRY(ITangramVBAForm)
				COM_INTERFACE_ENTRY(IDispatch)
				COM_INTERFACE_ENTRY(IConnectionPointContainer)
			END_COM_MAP()

			BEGIN_CONNECTION_POINT_MAP(CTangramVBAForm)
				CONNECTION_POINT_ENTRY(__uuidof(_ITangramVBAFormEvents))
			END_CONNECTION_POINT_MAP()


			DECLARE_PROTECT_FINAL_CONSTRUCT()

			BEGIN_MSG_MAP(CTangramHelperWnd)
			END_MSG_MAP()

			HRESULT FinalConstruct()
			{
				return S_OK;
			}

			void FinalRelease()
			{
			}

			HWND m_hFormChild;
			ITangram* m_pTangram;
			ITangramFrame* m_pTangramFrame;
			virtual void OnFinalMessage(HWND hWnd);
		protected:
			ULONG InternalAddRef() { return 1; }
			ULONG InternalRelease() { return 1; }
		public:
			STDMETHOD(get_TangramFrame)(ITangramFrame** ppRetFrame);
			STDMETHOD(get_Sizable)(BOOL* pVal);
			STDMETHOD(put_Sizable)(BOOL newVal);
		};
	}
}// namespace TangramOfficePlus
 