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
#include "../Markup.h"

namespace TangramEclipsePlus
{
	namespace EclipsePlus
	{
		class CTangramCtrl;
		class CTangramEclipseWnd;
		class CTangramEclipseAddin : public CTangramCore,
			public map<HWND, CTangramEclipseWnd*>
		{
		public:
			CTangramEclipseAddin();
			virtual ~CTangramEclipseAddin();
			int m_nIndex;
			long m_nCommandID;
			CString m_strURL;
			CTangramEclipseWnd* m_pNewWnd;

			//static char* BasicToCharString(const BSTR inBasicString)
			//{
			//	char* charString = NULL;
			//	const size_t charStrSize = ::SysStringLen(inBasicString) + 1;
			//	if (charStrSize > 1)
			//	{
			//		charString = new char[charStrSize];
			//		size_t convertedSize;
			//		::wcstombs_s(&convertedSize, charString, charStrSize, inBasicString, charStrSize);
			//	}
			//	else
			//	{
			//		charString = ::_strdup("");
			//	}
			//	return charString;
			//}

		private:
			bool bLoadConfig(CMarkup* pXml);
			bool bFindNode(CMarkup* pXml, LPCTSTR lpName);
			bool _bFindNode(CMarkup* pXml, LPCTSTR lpName);
		};

		class CTangramEclipseWnd :
			public map<HWND, CTangramCtrl*>,
			public CComObjectRootEx<CComSingleThreadModel>,
			public CWindowImpl<CTangramEclipseWnd, CWindow>,
			public IDispatchImpl<ITangramEclipseTopWnd, &IID_ITangramEclipseTopWnd, &LIBID_Tangram, /*wMajor =*/ 1, /*wMinor =*/ 0>
		{
		public:
			CTangramEclipseWnd(void);
			~CTangramEclipseWnd(void);

			int m_nIndex;
			BOOL m_bCreated;
			CString m_strURL;

			ITangram* m_pTangram = NULL;
			ITangramFrame* m_pFrame = NULL;
			ITangramNode* m_pCurNode = NULL;

			BEGIN_COM_MAP(CTangramEclipseWnd)
				COM_INTERFACE_ENTRY(ITangramEclipseTopWnd)
				COM_INTERFACE_ENTRY(IDispatch)
			END_COM_MAP()

			BEGIN_MSG_MAP(CTangramEclipseWnd)
				MESSAGE_HANDLER(WM_COMMAND, OnCommand)
				MESSAGE_HANDLER(WM_TANGRAMDATA, OnGetData)
				MESSAGE_HANDLER(WM_ECLIPSEMAINWNDCREATED, OnChildWndCreate)
			END_MSG_MAP()
			virtual void OnFinalMessage(HWND hWnd);
		protected:
			HWND m_hClient;
			HWND m_hBottom;
			HWND m_hTopBottom;

			ULONG InternalAddRef() { return 1; }
			ULONG InternalRelease() { return 1; }

			LRESULT OnCommand(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
			LRESULT OnGetData(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
			LRESULT OnChildWndCreate(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
		public:
			STDMETHOD(get_Handle)(LONGLONG* pVal);
			STDMETHOD(SWTExtend)(BSTR bstrKey, BSTR bstrXml, ITangramNode** ppNode);
			STDMETHOD(GetCtrlText)(BSTR bstrNodeName, BSTR bstrCtrlName, BSTR* bstrVal);
		};

		class CTangramEclipseSWTWnd :
			public CWindowImpl<CTangramEclipseSWTWnd, CWindow>
		{
		public:
			CTangramEclipseSWTWnd(void);
			~CTangramEclipseSWTWnd(void);

			CTangramCtrl* m_pHostCtrl;
			BEGIN_MSG_MAP(CTangramEclipseWnd)
				MESSAGE_HANDLER(WM_SWTCOMPONENTNOTIFY, OnSWTComponentNotify)
			END_MSG_MAP()
			virtual void OnFinalMessage(HWND hWnd);
			LRESULT OnSWTComponentNotify(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
		};
	}
}

