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
#include "../TangramAddin.h"
#include "WordPlusEvents.h"
using namespace TangramOfficePlus::WordPlus::WordPlusEvent;

namespace TangramOfficePlus
{
	namespace WordPlus
	{
		class CTangramWordPlusDoc;
		class CTangramWordPlusDocWnd;
		typedef map<Word::_Document*, LONG> CDocumentMap;
		typedef CDocumentMap::iterator DocumentMapIT;
		typedef map<HWND, CTangramWordPlusDocWnd*> CTangramWordPlusDocWndMap;
		typedef CTangramWordPlusDocWndMap::iterator WordPlusDocWndMapIT;
		typedef map<Word::_Document*, CTangramWordPlusDoc*> CTangramWordPlusDocumentMap;
		typedef CTangramWordPlusDocumentMap::iterator WordPlusDocumentMapIT;
		class CTangramWordAddin :
			public CTangramAddin,
			public CTangramOfficePlusApp,
			public CTangramWordPlusAppEvents2,
			//public CTangramWordPlusAppEvents3,
			//public CTangramWordPlusAppEvents4,
			public map<_Document*, CTangramWordPlusDoc*>
		{
		public:
			CTangramWordAddin();
			virtual ~CTangramWordAddin();

			CComPtr<_Application>				m_pApplication;
			CTangramWordPlusDocWnd*				m_pCurWordPlusDocWnd = NULL;

			void __stdcall OnDocumentOpen(_Document* Doc);
			void __stdcall OnNewDocument(_Document* Doc);
			void __stdcall OnWindowActivate(_Document* Doc, Word::Window* Window);

			HRESULT Tangram_Command(IDispatch* RibbonControl);
			HRESULT OnConnection(IDispatch* pHostApp, int ConnectMode);
			HRESULT OnDisconnection(int DisConnectMode);
			HRESULT GetCustomAddinUI(BSTR RibbonID, BSTR* bstrXmlScript);
			void WindowCreated(LPCTSTR strClassName, LPCTSTR strName, HWND hPWnd, HWND hWnd);

			STDMETHOD(AddTangramXml)(IDispatch* pDocdisp, BSTR bstrXml, BSTR bstrKey, BSTR* bstrRet, VARIANT_BOOL* bSuccess);
			STDMETHOD(GetTangramXml)(IDispatch* pDocdisp, BSTR bstrKey, BSTR* pbstrXml);
			STDMETHOD(ShowOfficeDocument)(VARIANT_BOOL bNewDoc, BSTR bstrKey, BSTR bstrXml, IDispatch** ppRetNode);
		private:
			CTangramWordPlusDocWnd* AttachDocWithWindow(_Document* Doc, HWND hWnd);
		};
	}
}

