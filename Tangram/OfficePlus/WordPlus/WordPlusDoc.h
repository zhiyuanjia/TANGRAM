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
* OUTLINED IN THE TANGRAM LICENSE AGREEMENT.TANGRAM TEAM 
* GRANTS TO YOU (ONE SOFTWARE DEVELOPER) THE LIMITED RIGHT TO USE 
* THIS SOFTWARE ON A SINGLE COMPUTER.
*
* CONTACT INFORMATION:
* mailto:sunhuizlz@yeah.net
* http://www.lyncplus.net
* http://www.tangramdev.com
*
********************************************************************************/
#pragma once
#include "MSWord.h"
using namespace Word;

namespace TangramOfficePlus
{
	namespace WordPlus
	{
		class CTangramWordAddin;
		class CTangramWordPlusDocWnd;
		class CTangramWordPlusDoc : public map<HWND, CTangramWordPlusDocWnd*>
		{
		public:
			CTangramWordPlusDoc(void);
			~CTangramWordPlusDoc(void);

			_Document*					m_pDoc;
			ITangram*					m_pTangram;
			ITangramFrame*				m_pFrame;
			ITangram*					m_pTaskPaneTangram = NULL;
			ITangramFrame*				m_pTaskPaneFrame = NULL;
			CString						m_strTaskPaneXml;
		};

		class CTangramWordPlusDocWnd : 
			public CWindowImpl<CTangramWordPlusDocWnd, CWindow>
		{
		public:
			CTangramWordPlusDocWnd(void);
			~CTangramWordPlusDocWnd(void);


			HWND					m_hDocWnd;
			HWND					m_hTaskPane;
			HWND					m_hTaskPaneWnd;
			HWND					m_hTaskPaneChildWnd;

			CTangramWordAddin*		m_pWordAddin;
			CTangramWordPlusDoc*	m_pWordPlusDoc;
			BEGIN_MSG_MAP(CTangramWordPlusDocWnd)
				MESSAGE_HANDLER(WM_TANGRAMDATA, OnGetData)
				MESSAGE_HANDLER(WM_TANGRAMMSG, OnTangramMsg)
				MESSAGE_HANDLER(WM_OPENDOCUMENT, OOpenDoc)
				MESSAGE_HANDLER(WM_SHOWWINDOW, OnShowWindow)
			END_MSG_MAP()
			LRESULT OOpenDoc(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
			LRESULT OnGetData(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
			LRESULT OnTangramMsg(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
			LRESULT OnShowWindow(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
			virtual void OnFinalMessage(HWND hWnd);
		};
	}
}
