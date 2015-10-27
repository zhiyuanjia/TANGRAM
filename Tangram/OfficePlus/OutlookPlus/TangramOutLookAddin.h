#pragma once
#include "mso.h"
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
#include "def.h"
#include "msoutl.h"
#include "../TangramAddin.h"
#include "OutLookPlusEvents.h"
#include "..\tangram\officeplus\wordplus\msword.h"
using namespace Word;
using namespace Office;
using namespace TangramOfficePlus::OutLookPlus::OutLookPlusEvent;

namespace TangramOfficePlus
{
	namespace OutLookPlus
	{
		class CTangramOutLookPlusExplorer;
		class CTangramOutLookPlusInspector;
		class CTangramOutLookAddin :
			public CTangramAddin,
			public CTangramOfficePlusApp,
			public CTangramOutLookPlusExplorersEvents,
			public CTangramOutLookPlusInspectorsEvents,
			public CTangramOutLookPlusApplicationEvents,
			public CTangramOutLookPlusApplicationEvents_10,
			public CTangramOutLookPlusApplicationEvents_11
		{
		public:
			CTangramOutLookAddin();
			virtual ~CTangramOutLookAddin();

			CComPtr<OutLook::_Application> m_pApplication;
			//CTangramOfficePlusApp:
			HRESULT Tangram_Command(IDispatch* RibbonControl);
			HRESULT OnConnection(IDispatch* pHostApp, int ConnectMode);
			HRESULT OnDisconnection(int DisConnectMode);
			HRESULT GetCustomAddinUI(BSTR RibbonID, BSTR* bstrXmlScript);
			void WindowCreated(LPCTSTR strClassName, LPCTSTR strName, HWND hPWnd, HWND hWnd);

			int								m_nVer;
			HWND							m_hWwbWnd;
			HWND							m_hPWwbWnd;
			HWND							m_hCurWebWnd;
			HWND							m_hOutlookGridWnd;
			HWND							m_hCurOutlookItemWnd;

			CString							m_strSolution;
			CString							m_strSolutionHelper;
			CString							m_strOutLookToday;
			CString							m_strOutLookPlusAsynID;

			IDispatch*						m_pCurLoadItem;
			ITangramFrame*					m_pSolutionFrame;
			ITangramFrame*					m_pSolutionHelperFrame;

			CTangramOutLookPlusExplorer*	m_pFirstOutlookExplorer;
			CTangramOutLookPlusExplorer*	m_pActiveOutlookExplorer;

			CTangramOutLookPlusInspector*	m_pCurOpenItem;

			map<int, CString>				m_mapItemName;
			map<CString, CString>			m_mapUIScript;

			CComPtr<_Explorers>				m_pExplorers;
			CComPtr<_Inspectors >			m_pInspectors;
		};

		typedef
		enum OutLookPlusInspectorType
		{
			OutLookPlusContactItem = 1,
			OutLookPlusPostItem = 2,
			OutLookPlusMailItem = 3,
			OutLookPlusSharingItem = 4,
			OutLookPlusMeetingItem = 5,
			OutLookPlusDistListItem = 6,
			OutLookPlusNoteItem = 7,
			OutLookPlusTaskItem = 8,
			OutLookPlusAppointmentItem = 9,
			OutLookPlusDocumentItem = 10,
			OutLookPlusJournalItem = 11,
			OutLookPlusMobileItem = 12,
			OutLookPlusRemoteItem = 13,
			OutLookPlusReportItem = 14,
			OutLookPlusRequestAcceptItem = 15,
			OutLookPlusRequestDeclineItem = 16,
			OutLookPlusRequestItem = 17,
			OutLookPlusRequestUpdateItem = 18,
		}OutLookPlusInspectorType;

		class CTangramOutLookPlusExplorer :
			public IDispatchImpl<IOutLookExplorer>,
			public CTangramOutLookPlusExplorerEvents,
			public CTangramOutLookPlusExplorerEvents_10,
			public CComObjectRootEx<CComSingleThreadModel>,
			public CTangramOutLookPlusAccountSelectorEvents,
			public CTangramOutLookPlusNavigationPaneEvents_12,
			public CTangramOutLookPlusNavigationGroupsEvents_12,
			public CWindowImpl<CTangramOutLookPlusExplorer, CWindow>
		{
		public:
			CTangramOutLookPlusExplorer(void);
			~CTangramOutLookPlusExplorer(void);

			bool									m_bClosing;
			OlNavigationModuleType					m_nNType;
			CComPtr<_Explorer>						m_pExplorer;
			CComPtr<OutLook::_NavigationPane>				m_pNavigationPane;
			_AccountSelector*						m_pAccountSelector;
			_NavigationModule*						m_pCurrentModule;
			_NavigationGroups*						m_pNavigationGroups;

			IDispatch*								m_pModuleDisp;
			//CTangramOutLookPlusSolutionHostWnd*		m_pTangramSolutionHostWnd;


			//ITangramWindow*							m_pOutLookPlusTodayWnd;
			//ITangramWindow*							m_pOnLineItemHostWindow;

			HWND									m_hButton;
			HWND									m_hNavWnd;
			HWND									m_hGridWnd;
			CString									m_strUIScript;
			map<CString, CString>					m_mapUIScript;

			IDispatch*								m_pOnlineItem;

			DECLARE_NO_REGISTRY()

			BEGIN_COM_MAP(CTangramOutLookPlusExplorer)
				COM_INTERFACE_ENTRY(IOutLookExplorer)
				COM_INTERFACE_ENTRY(IDispatch)
			END_COM_MAP()

			DECLARE_PROTECT_FINAL_CONSTRUCT()

			HRESULT FinalConstruct()
			{
				return S_OK;
			}

			void FinalRelease();

		public:
			STDMETHOD(get_Explorer)(IDispatch** pVal);
			STDMETHOD(get_OutLookItem)(IDispatch** pVal);
			STDMETHOD(get_Application)(IDispatch** pVal);
			STDMETHOD(get_TangramManager)(IDispatch** pVal);
			STDMETHOD(get_UIScript)(BSTR bstrKey,/* [retval][out] */ BSTR *pVal);
			STDMETHOD(put_UIScript)(BSTR bstrKey, /* [in] */ BSTR newVal);

			//begin CTangramOutLookPlusExplorerEvents:
			void __stdcall OnActivate();
			void __stdcall OnFolderSwitch();
			void __stdcall OnBeforeFolderSwitch(IDispatch*, VARIANT_BOOL* Cancel);
			void __stdcall OnViewSwitch();
			void __stdcall OnBeforeViewSwitch(VARIANT NewView, VARIANT_BOOL* Cancel);
			void __stdcall OnDeactivate();
			void __stdcall OnSelectionChange();
			void __stdcall OnClose();
			//end CTangramOutLookPlusExplorerEvents

			//begin CTangramOutLookPlusExplorerEvents_10:
			void __stdcall OnBeforeMaximize(VARIANT_BOOL* Cancel);
			void __stdcall OnBeforeMinimize(VARIANT_BOOL* Cancel);
			void __stdcall OnBeforeMove(VARIANT_BOOL* Cancel);
			void __stdcall OnBeforeSize(VARIANT_BOOL* Cancel);
			void __stdcall OnBeforeItemCopy(VARIANT_BOOL* Cancel);
			void __stdcall OnBeforeItemCut(VARIANT_BOOL* Cancel);
			void __stdcall OnBeforeItemPaste(VARIANT_BOOL* Cancel);
			void __stdcall OnAttachmentSelectionChange();
			void __stdcall OnInlineResponse(IDispatch* Item);
			void __stdcall OnInlineResponseClose();
			//end CTangramOutLookPlusExplorerEvents_10

			//begin CTangramOutLookPlusAccountSelectorEvents:
			void __stdcall OnSelectedAccountChange(Account* SelectedAccount);
			//end CTangramOutLookPlusAccountSelectorEvents

			//begin CTangramOutLookPlusNavigationPaneEvents_12:
			void __stdcall OnModuleSwitch(NavigationModule* CurrentModule);
			//begin CTangramOutLookPlusNavigationPaneEvents_12

			//begin CTangramOutLookPlusNavigationGroupsEvents_12:
			void __stdcall OnSelectedChange(NavigationFolder* NavigationFolder);
			void __stdcall OnNavigationFolderAdd(NavigationFolder* NavigationFolder);
			void __stdcall OnNavigationFolderRemove();
			//end CTangramOutLookPlusNavigationGroupsEvents_12

			BEGIN_MSG_MAP(CTangramOutLookPlusExplorer)
				//MESSAGE_HANDLER(WM_SELCHANGE, OnSelectChanged)
				//MESSAGE_HANDLER(WM_DESTROY, OnDestroy)
				//MESSAGE_HANDLER(WM_HWNDHWNDCREATED, OnNetUINativeHWNDHostCreated)
				//MESSAGE_HANDLER(WM_TANGRAMDATA, OnGetTangramData)
				//MESSAGE_HANDLER(WM_OUTLOOKSTARTUPEND, OnStartUp)
				//MESSAGE_HANDLER(WM_WEBWNDCREATED, OnWebWndCreated)
				MESSAGE_HANDLER(WM_MOUSEACTIVATE, OnMouseActivate)
				MESSAGE_HANDLER(WM_WINDOWPOSCHANGED, OnWindowPosChanged)
			END_MSG_MAP()
			LRESULT OnWindowPosChanged(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
			LRESULT OnNetUINativeHWNDHostCreated(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
			LRESULT OnSelectChanged(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
			LRESULT OnDestroy(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
			LRESULT OnStartUp(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
			LRESULT OnWebWndCreated(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
			LRESULT OnGetTangramData(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
			LRESULT OnMouseActivate(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
			virtual void OnFinalMessage(HWND hWnd);
		};

		class CTangramOutLookPlusInspector :
			public CTangramOutLookPlusItemEvents,
			public IDispatchImpl<IOutLookPlusItem>,
			public CTangramOutLookPlusItemEvents_10,
			public CComObjectRootEx<CComSingleThreadModel>,
			public CWindowImpl<CTangramOutLookPlusInspector, CWindow>
		{
		public:
			CTangramOutLookPlusInspector(void);
			~CTangramOutLookPlusInspector(void);

			BOOL						m_bReadOnly;
			HWND 						m_hItemEditorWnd;
			CString						m_strUIScript;
			CString						m_strEventScripts;
			IDispatch*					m_pDisp;
			IWebBrowser2*				m_pWebDisp;
			//ITangramWindow*				m_pHostWindow;
			OutLookPlusInspectorType	m_nItemType;

			DECLARE_NO_REGISTRY()

			BEGIN_COM_MAP(CTangramOutLookPlusInspector)
				COM_INTERFACE_ENTRY(IOutLookPlusItem)
				COM_INTERFACE_ENTRY(IDispatch)
			END_COM_MAP()

			DECLARE_PROTECT_FINAL_CONSTRUCT()

			HRESULT FinalConstruct()
			{
				return S_OK;
			}

			void FinalRelease();

		public:
			//begin IOutLookPlusItem:
			STDMETHOD(get_Application)(IDispatch** pVal);
			STDMETHOD(get_OutLookItem)(IDispatch** pVal);
			STDMETHOD(get_TangramManager)(IDispatch** pVal);
			STDMETHOD(get_UIScript)(BSTR bstrKey,/* [retval]*/ BSTR *pVal);
			STDMETHOD(put_UIScript)(BSTR bstrKey, /* [in] */ BSTR newVal);
			STDMETHOD(put_EventsScript)(/* [in] */ BSTR newVal);
			//end IOutLookPlusItem

			//begin CTangramOutLookPlusItemEvents:
			void __stdcall OnOpen(VARIANT_BOOL* Cancel);
			void __stdcall OnCustomAction(IDispatch* Action, IDispatch* Response, VARIANT_BOOL* Cancel);
			void __stdcall OnCustomPropertyChange(BSTR Name);
			void __stdcall OnForward(IDispatch* Forward, VARIANT_BOOL* Cancel);
			void __stdcall OnClose(VARIANT_BOOL* Cancel);
			void __stdcall OnPropertyChange(BSTR Name);
			void __stdcall OnRead();
			void __stdcall OnReply(IDispatch* Response, VARIANT_BOOL* Cancel);
			void __stdcall OnReplyAll(IDispatch* Response, VARIANT_BOOL* Cancel);
			void __stdcall OnSend(VARIANT_BOOL* Cancel);
			void __stdcall OnWrite(VARIANT_BOOL* Cancel);
			void __stdcall OnBeforeCheckNames(VARIANT_BOOL* Cancel);
			void __stdcall OnAttachmentAdd(OutLook::Attachment* Attachment);
			void __stdcall OnAttachmentRead(OutLook::Attachment* Attachment);
			void __stdcall OnBeforeAttachmentSave(OutLook::Attachment* Attachment, VARIANT_BOOL* Cancel);
			//end CTangramOutLookPlusItemEvents

			//begin CTangramOutLookPlusItemEvents_10:
			void __stdcall OnBeforeDelete(IDispatch* Item, VARIANT_BOOL* Cancel);
			void __stdcall OnAttachmentRemove(OutLook::Attachment* Attachment);
			void __stdcall OnBeforeAttachmentAdd(OutLook::Attachment* Attachment, VARIANT_BOOL* Cancel);
			void __stdcall OnBeforeAttachmentPreview(OutLook::Attachment* Attachment, VARIANT_BOOL* Cancel);
			void __stdcall OnBeforeAttachmentRead(OutLook::Attachment* Attachment, VARIANT_BOOL* Cancel);
			void __stdcall OnBeforeAttachmentWriteToTempFile(OutLook::Attachment* Attachment, VARIANT_BOOL* Cancel);
			void __stdcall OnUnload();
			void __stdcall OnBeforeAutoSave(VARIANT_BOOL* Cancel);
			void __stdcall OnBeforeRead();
			void __stdcall OnAfterWrite();
			//New for OutLook2013:
			void __stdcall OnReadComplete(VARIANT_BOOL* Cancel);
			//end CTangramOutLookPlusItemEvents_10
			BEGIN_MSG_MAP(CTangramOutLookPlusInspector)
				MESSAGE_HANDLER(WM_SHOWWINDOW, OnShowWindow)
				MESSAGE_HANDLER(WM_TANGRAMDATA, OnGetTangramData)
				MESSAGE_HANDLER(WM_MOUSEACTIVATE, OnMouseActivate)
			END_MSG_MAP()
			LRESULT OnShowWindow(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
			LRESULT OnGetTangramData(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
			LRESULT OnMouseActivate(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);

			void OnFinalMessage(HWND hWnd);
		};
	}
}

