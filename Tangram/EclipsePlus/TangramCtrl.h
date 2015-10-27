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

// TangramCtrl.h : CTangramCtrl 的声明
#pragma once
#include "../resource.h"       // 主符号
#include <atlctl.h>
#include "Tangram.h"
#include "TangramEclipseAddin.h"

namespace TangramEclipsePlus
{
	namespace EclipsePlus
	{
		class CTangramEclipseWnd;
		// CTangramCtrl
		class ATL_NO_VTABLE CTangramCtrl :
			public CComObjectRootEx<CComSingleThreadModel>,
			public IDispatchImpl<ITangramCtrl, &IID_ITangramCtrl, &LIBID_Tangram, /*wMajor =*/ 1, /*wMinor =*/ 0>,
			public IOleControlImpl<CTangramCtrl>,
			public IOleObjectImpl<CTangramCtrl>,
			public IOleInPlaceActiveObjectImpl<CTangramCtrl>,
			public IViewObjectExImpl<CTangramCtrl>,
			public IOleInPlaceObjectWindowlessImpl<CTangramCtrl>,
			public IQuickActivateImpl<CTangramCtrl>,
			public CComCoClass<CTangramCtrl, &CLSID_TangramCtrl>,
			public CComControl<CTangramCtrl>
		{
		public:
			CTangramCtrl();
			HWND m_hDocWnd;

		DECLARE_OLEMISC_STATUS(OLEMISC_RECOMPOSEONRESIZE |
			OLEMISC_CANTLINKINSIDE |
			OLEMISC_INSIDEOUT |
			OLEMISC_ACTIVATEWHENVISIBLE |
			OLEMISC_SETCLIENTSITEFIRST
		)

		DECLARE_REGISTRY_RESOURCEID(IDR_TANGRAMCTRL)

		DECLARE_WND_CLASS(_T("Tangram Helper Control Class"))
		DECLARE_NOT_AGGREGATABLE(CTangramCtrl)

		BEGIN_COM_MAP(CTangramCtrl)
			COM_INTERFACE_ENTRY(ITangramCtrl)
			COM_INTERFACE_ENTRY(IDispatch)
			COM_INTERFACE_ENTRY(IViewObjectEx)
			COM_INTERFACE_ENTRY(IViewObject2)
			COM_INTERFACE_ENTRY(IViewObject)
			COM_INTERFACE_ENTRY(IOleInPlaceObjectWindowless)
			COM_INTERFACE_ENTRY(IOleInPlaceObject)
			COM_INTERFACE_ENTRY2(IOleWindow, IOleInPlaceObjectWindowless)
			COM_INTERFACE_ENTRY(IOleInPlaceActiveObject)
			COM_INTERFACE_ENTRY(IOleControl)
			COM_INTERFACE_ENTRY(IOleObject)
			COM_INTERFACE_ENTRY(IQuickActivate)
		END_COM_MAP()

		BEGIN_PROP_MAP(CTangramCtrl)
			PROP_DATA_ENTRY("_cx", m_sizeExtent.cx, VT_UI4)
			PROP_DATA_ENTRY("_cy", m_sizeExtent.cy, VT_UI4)
		END_PROP_MAP()


		BEGIN_MSG_MAP(CTangramCtrl)
			CHAIN_MSG_MAP(CComControl<CTangramCtrl>)
			DEFAULT_REFLECTION_HANDLER()
			MESSAGE_HANDLER(WM_CREATE, OnCreate)
			MESSAGE_HANDLER(WM_DESTROY, OnDestroy)
		END_MSG_MAP()

		// IViewObjectEx
			DECLARE_VIEW_STATUS(0)

		// ITangramCtrl
		public:
			DECLARE_PROTECT_FINAL_CONSTRUCT()
			HRESULT OnDraw(ATL_DRAWINFO& di)
			{
				RECT& rc = *(RECT*)di.prcBounds;
				// 将剪辑区域设置为 di.prcBounds 指定的矩形
				HRGN hRgnOld = NULL;
				if (GetClipRgn(di.hdcDraw, hRgnOld) != 1)
					hRgnOld = NULL;
				bool bSelectOldRgn = false;

				HRGN hRgnNew = CreateRectRgn(rc.left, rc.top, rc.right, rc.bottom);

				if (hRgnNew != NULL)
				{
					bSelectOldRgn = (SelectClipRgn(di.hdcDraw, hRgnNew) != ERROR);
				}

				::Rectangle(di.hdcDraw, rc.left, rc.top, rc.right, rc.bottom);
				SetTextAlign(di.hdcDraw, TA_CENTER | TA_BASELINE);
				LPCTSTR pszText = _T("Tangram");
#ifndef _WIN32_WCE
				TextOut(di.hdcDraw,
					(rc.left + rc.right) / 2,
					(rc.top + rc.bottom) / 2,
					pszText,
					lstrlen(pszText));
#else
				ExtTextOut(di.hdcDraw,
					(rc.left + rc.right) / 2,
					(rc.top + rc.bottom) / 2,
					ETO_OPAQUE,
					NULL,
					pszText,
					ATL::lstrlen(pszText),
					NULL);
#endif

				if (bSelectOldRgn)
					SelectClipRgn(di.hdcDraw, hRgnOld);

				DeleteObject(hRgnNew);

				return S_OK;
			}

		private:
			BOOL m_bSWTCtrl;
			HWND m_hHostWnd;
			HWND m_hTangramWnd;

			CString m_strURL;
			ITangramNode* m_pCurNode;
			CTangramEclipseWnd* m_pEclipseWnd;
			LRESULT OnCreate(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
			LRESULT OnDestroy(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
		public:
			ITangram* m_pTangram;
			ITangramFrame* m_pFrame;

			STDMETHOD(get_HWND)(LONGLONG* pVal);
			STDMETHOD(put_SWTURL)(BSTR newVal);
			STDMETHOD(get_TangramFrame)(ITangramFrame** pVal);
			STDMETHOD(SWTExtend)(LONGLONG nHandle, BSTR bstrKey, BSTR bstrXml, ITangramNode** ppNode);
			STDMETHOD(GetCtrlText)(LONGLONG nHandle, BSTR bstrNodeName, BSTR bstrCtrlName, BSTR* bstrVal);
		};

		OBJECT_ENTRY_AUTO(__uuidof(TangramCtrl), CTangramCtrl)
	}
}
