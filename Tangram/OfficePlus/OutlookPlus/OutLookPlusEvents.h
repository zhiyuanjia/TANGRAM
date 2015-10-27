/********************************************************************************
*					Tangram Library - version 8.0								*
*********************************************************************************
* Copyright (C) 2006-2013 by Tangram Team.   All Rights Reserved.					*
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

#include "outlctl.h"
#include "msoutl.h"
using namespace Office;
using namespace OutLook;

namespace TangramOfficePlus
{
	namespace OutLookPlus
	{
		namespace OutLookPlusEvent
		{
			extern _ATL_FUNC_INFO ViewAdd;
			extern _ATL_FUNC_INFO ViewRemove;
			class CTangramOutLookPlus_ViewsEvents : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlus_ViewsEvents, &__uuidof(_ViewsEvents)>
			{
			public:
				virtual void __stdcall OnViewAdd(OutLook::View* View) {}
				virtual void __stdcall OnViewRemove(OutLook::View* View) {}


				BEGIN_SINK_MAP(CTangramOutLookPlus_ViewsEvents)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(_ViewsEvents), /*dispid =*/ 0x00000190, OnViewAdd, &ViewAdd)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(_ViewsEvents), /*dispid =*/ 0x0000fa47, OnViewRemove, &ViewRemove)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO SelectedAccountChange;
			class CTangramOutLookPlusAccountSelectorEvents : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusAccountSelectorEvents, &__uuidof(AccountSelectorEvents)>
			{
			public:
				virtual void __stdcall OnSelectedAccountChange(Account* SelectedAccount) {}


				BEGIN_SINK_MAP(CTangramOutLookPlusAccountSelectorEvents)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(AccountSelectorEvents), /*dispid =*/ 0x0000fc73, OnSelectedAccountChange, &SelectedAccountChange)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO AutoDiscoverComplete;
			class CTangramOutLookPlusAccountsEvents : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusAccountsEvents, &__uuidof(AccountsEvents)>
			{
			public:
				virtual void __stdcall OnAutoDiscoverComplete(Account* Account) {}


				BEGIN_SINK_MAP(CTangramOutLookPlusAccountsEvents)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(AccountsEvents), /*dispid =*/ 0x0000fc6c, OnAutoDiscoverComplete, &AutoDiscoverComplete)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO ItemSend;
			extern _ATL_FUNC_INFO NewMail;
			extern _ATL_FUNC_INFO Reminder;
			extern _ATL_FUNC_INFO OptionsPagesAdd;
			extern _ATL_FUNC_INFO Startup;
			extern _ATL_FUNC_INFO Quit;
			class CTangramOutLookPlusApplicationEvents : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusApplicationEvents, &__uuidof(OutLook::ApplicationEvents)>
			{
			public:
				virtual void __stdcall OnItemSend(IDispatch* Item, VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnNewMail() {}
				virtual void __stdcall OnReminder(IDispatch* Item) {}
				virtual void __stdcall OnOptionsPagesAdd(PropertyPages* Pages) {}
				virtual void __stdcall OnStartup() {}
				virtual void __stdcall OnQuit() {}


				BEGIN_SINK_MAP(CTangramOutLookPlusApplicationEvents)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OutLook::ApplicationEvents), /*dispid =*/ 0x0000f002, OnItemSend, &ItemSend)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OutLook::ApplicationEvents), /*dispid =*/ 0x0000f003, OnNewMail, &NewMail)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OutLook::ApplicationEvents), /*dispid =*/ 0x0000f004, OnReminder, &Reminder)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OutLook::ApplicationEvents), /*dispid =*/ 0x0000f005, OnOptionsPagesAdd, &OptionsPagesAdd)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OutLook::ApplicationEvents), /*dispid =*/ 0x0000f006, OnStartup, &Startup)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OutLook::ApplicationEvents), /*dispid =*/ 0x0000f007, OnQuit, &Quit)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO AdvancedSearchComplete;
			extern _ATL_FUNC_INFO AdvancedSearchStopped;
			extern _ATL_FUNC_INFO MAPILogonComplete;
			class CTangramOutLookPlusApplicationEvents_10 : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusApplicationEvents_10, &__uuidof(ApplicationEvents_10)>
			{
			public:
				virtual void __stdcall OnAdvancedSearchComplete(Search* SearchObject) {}
				virtual void __stdcall OnAdvancedSearchStopped(Search* SearchObject) {}
				virtual void __stdcall OnMAPILogonComplete() {}


				BEGIN_SINK_MAP(CTangramOutLookPlusApplicationEvents_10)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ApplicationEvents_10), /*dispid =*/ 0x0000fa6a, OnAdvancedSearchComplete, &AdvancedSearchComplete)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ApplicationEvents_10), /*dispid =*/ 0x0000fa6b, OnAdvancedSearchStopped, &AdvancedSearchStopped)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ApplicationEvents_10), /*dispid =*/ 0x0000fa90, OnMAPILogonComplete, &MAPILogonComplete)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO NewMailEx;
			extern _ATL_FUNC_INFO AttachmentContextMenuDisplay;
			extern _ATL_FUNC_INFO FolderContextMenuDisplay;
			extern _ATL_FUNC_INFO StoreContextMenuDisplay;
			extern _ATL_FUNC_INFO ShortcutContextMenuDisplay;
			extern _ATL_FUNC_INFO ViewContextMenuDisplay;
			extern _ATL_FUNC_INFO ItemContextMenuDisplay;
			extern _ATL_FUNC_INFO ContextMenuClose;
			extern _ATL_FUNC_INFO ItemLoad;
			extern _ATL_FUNC_INFO BeforeFolderSharingDialog;
			class CTangramOutLookPlusApplicationEvents_11 : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusApplicationEvents_11, &__uuidof(ApplicationEvents_11)>
			{
			public:
				virtual void __stdcall OnNewMailEx(BSTR EntryIDCollection) {}
				virtual void __stdcall OnAttachmentContextMenuDisplay(CommandBar* CommandBar, AttachmentSelection* Attachments) {}
				virtual void __stdcall OnFolderContextMenuDisplay(CommandBar* CommandBar, OutLook::Folder* Folder) {}
				virtual void __stdcall OnStoreContextMenuDisplay(CommandBar* CommandBar, Store* Store) {}
				virtual void __stdcall OnShortcutContextMenuDisplay(CommandBar* CommandBar, OutlookBarShortcut* Shortcut) {}
				virtual void __stdcall OnViewContextMenuDisplay(CommandBar* CommandBar, OutLook::View* View) {}
				virtual void __stdcall OnItemContextMenuDisplay(CommandBar* CommandBar, OutLook::Selection* Selection) {}
				virtual void __stdcall OnContextMenuClose(OlContextMenu ContextMenu) {}
				virtual void __stdcall OnItemLoad(IDispatch* Item) {}
				virtual void __stdcall OnBeforeFolderSharingDialog(MAPIFolder* FolderToShare, VARIANT_BOOL* Cancel) {}


				BEGIN_SINK_MAP(CTangramOutLookPlusApplicationEvents_11)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ApplicationEvents_11), /*dispid =*/ 0x0000fab5, OnNewMailEx, &NewMailEx)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ApplicationEvents_11), /*dispid =*/ 0x0000fb3e, OnAttachmentContextMenuDisplay, &AttachmentContextMenuDisplay)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ApplicationEvents_11), /*dispid =*/ 0x0000fb42, OnFolderContextMenuDisplay, &FolderContextMenuDisplay)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ApplicationEvents_11), /*dispid =*/ 0x0000fb43, OnStoreContextMenuDisplay, &StoreContextMenuDisplay)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ApplicationEvents_11), /*dispid =*/ 0x0000fb44, OnShortcutContextMenuDisplay, &ShortcutContextMenuDisplay)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ApplicationEvents_11), /*dispid =*/ 0x0000fb40, OnViewContextMenuDisplay, &ViewContextMenuDisplay)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ApplicationEvents_11), /*dispid =*/ 0x0000fb41, OnItemContextMenuDisplay, &ItemContextMenuDisplay)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ApplicationEvents_11), /*dispid =*/ 0x0000fba6, OnContextMenuClose, &ContextMenuClose)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ApplicationEvents_11), /*dispid =*/ 0x0000fba7, OnItemLoad, &ItemLoad)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ApplicationEvents_11), /*dispid =*/ 0x0000fc01, OnBeforeFolderSharingDialog, &BeforeFolderSharingDialog)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO Activate;
			extern _ATL_FUNC_INFO FolderSwitch;
			extern _ATL_FUNC_INFO BeforeFolderSwitch;
			extern _ATL_FUNC_INFO ViewSwitch;
			extern _ATL_FUNC_INFO BeforeViewSwitch;
			extern _ATL_FUNC_INFO Deactivate;
			extern _ATL_FUNC_INFO SelectionChange;
			extern _ATL_FUNC_INFO Close;
			class CTangramOutLookPlusExplorerEvents : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusExplorerEvents, &__uuidof(ExplorerEvents)>
			{
			public:
				virtual void __stdcall OnActivate() {}
				virtual void __stdcall OnFolderSwitch() {}
				virtual void __stdcall OnBeforeFolderSwitch(IDispatch* NewFolder, VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnViewSwitch() {}
				virtual void __stdcall OnBeforeViewSwitch(VARIANT NewView, VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnDeactivate() {}
				virtual void __stdcall OnSelectionChange() {}
				virtual void __stdcall OnClose() {}


				BEGIN_SINK_MAP(CTangramOutLookPlusExplorerEvents)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ExplorerEvents), /*dispid =*/ 0x0000f001, OnActivate, &Activate)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ExplorerEvents), /*dispid =*/ 0x0000f002, OnFolderSwitch, &FolderSwitch)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ExplorerEvents), /*dispid =*/ 0x0000f003, OnBeforeFolderSwitch, &BeforeFolderSwitch)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ExplorerEvents), /*dispid =*/ 0x0000f004, OnViewSwitch, &ViewSwitch)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ExplorerEvents), /*dispid =*/ 0x0000f005, OnBeforeViewSwitch, &BeforeViewSwitch)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ExplorerEvents), /*dispid =*/ 0x0000f006, OnDeactivate, &Deactivate)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ExplorerEvents), /*dispid =*/ 0x0000f007, OnSelectionChange, &SelectionChange)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ExplorerEvents), /*dispid =*/ 0x0000f008, OnClose, &Close)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO BeforeMaximize;
			extern _ATL_FUNC_INFO BeforeMinimize;
			extern _ATL_FUNC_INFO BeforeMove;
			extern _ATL_FUNC_INFO BeforeSize;
			extern _ATL_FUNC_INFO BeforeItemCopy;
			extern _ATL_FUNC_INFO BeforeItemCut;
			extern _ATL_FUNC_INFO BeforeItemPaste;
			extern _ATL_FUNC_INFO AttachmentSelectionChange;
			extern _ATL_FUNC_INFO InlineResponse;
			extern _ATL_FUNC_INFO InlineResponseClose;
			class CTangramOutLookPlusExplorerEvents_10 : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusExplorerEvents_10, &__uuidof(ExplorerEvents_10)>
			{
			public:
				virtual void __stdcall OnBeforeMaximize(VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnBeforeMinimize(VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnBeforeMove(VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnBeforeSize(VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnBeforeItemCopy(VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnBeforeItemCut(VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnBeforeItemPaste(VARIANT* ClipboardContent, MAPIFolder* Target, VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnAttachmentSelectionChange() {}
				virtual void __stdcall OnInlineResponse(IDispatch* Item) {}
				virtual void __stdcall OnInlineResponseClose() {}
				BEGIN_SINK_MAP(CTangramOutLookPlusExplorerEvents_10)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ExplorerEvents_10), /*dispid =*/ 0x0000fa11, OnBeforeMaximize, &BeforeMaximize)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ExplorerEvents_10), /*dispid =*/ 0x0000fa12, OnBeforeMinimize, &BeforeMinimize)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ExplorerEvents_10), /*dispid =*/ 0x0000fa13, OnBeforeMove, &BeforeMove)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ExplorerEvents_10), /*dispid =*/ 0x0000fa14, OnBeforeSize, &BeforeSize)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ExplorerEvents_10), /*dispid =*/ 0x0000fa0e, OnBeforeItemCopy, &BeforeItemCopy)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ExplorerEvents_10), /*dispid =*/ 0x0000fa0f, OnBeforeItemCut, &BeforeItemCut)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ExplorerEvents_10), /*dispid =*/ 0x0000fa10, OnBeforeItemPaste, &BeforeItemPaste)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ExplorerEvents_10), /*dispid =*/ 0x0000fc79, OnAttachmentSelectionChange, &AttachmentSelectionChange)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ExplorerEvents_10), /*dispid =*/ 0x0000fc92, OnInlineResponse, &InlineResponse)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ExplorerEvents_10), /*dispid =*/ 0x0000fc96, OnInlineResponseClose, &InlineResponseClose)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO NewExplorer;
			class CTangramOutLookPlusExplorersEvents : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusExplorersEvents, &__uuidof(ExplorersEvents)>
			{
			public:
				virtual void __stdcall OnNewExplorer(_Explorer* Explorer) {}


				BEGIN_SINK_MAP(CTangramOutLookPlusExplorersEvents)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ExplorersEvents), /*dispid =*/ 0x0000f001, OnNewExplorer, &NewExplorer)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO FolderAdd;
			extern _ATL_FUNC_INFO FolderChange;
			extern _ATL_FUNC_INFO FolderRemove;
			class CTangramOutLookPlusFoldersEvents : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusFoldersEvents, &__uuidof(FoldersEvents)>
			{
			public:
				virtual void __stdcall OnFolderAdd(MAPIFolder* Folder) {}
				virtual void __stdcall OnFolderChange(MAPIFolder* Folder) {}
				virtual void __stdcall OnFolderRemove() {}


				BEGIN_SINK_MAP(CTangramOutLookPlusFoldersEvents)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(FoldersEvents), /*dispid =*/ 0x0000f001, OnFolderAdd, &FolderAdd)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(FoldersEvents), /*dispid =*/ 0x0000f002, OnFolderChange, &FolderChange)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(FoldersEvents), /*dispid =*/ 0x0000f003, OnFolderRemove, &FolderRemove)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO Expanded;
			extern _ATL_FUNC_INFO Close;
			class CTangramOutLookPlusFormRegionEvents : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusFormRegionEvents, &__uuidof(FormRegionEvents)>
			{
			public:
				virtual void __stdcall OnExpanded(VARIANT_BOOL Expand) {}
				virtual void __stdcall OnClose() {}


				BEGIN_SINK_MAP(CTangramOutLookPlusFormRegionEvents)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(FormRegionEvents), /*dispid =*/ 0x0000fb38, OnExpanded, &Expanded)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(FormRegionEvents), /*dispid =*/ 0x0000f004, OnClose, &Close)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO Activate;
			extern _ATL_FUNC_INFO Deactivate;
			extern _ATL_FUNC_INFO Close;
			class CTangramOutLookPlusInspectorEvents : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusInspectorEvents, &__uuidof(InspectorEvents)>
			{
			public:
				virtual void __stdcall OnActivate() {}
				virtual void __stdcall OnDeactivate() {}
				virtual void __stdcall OnClose() {}


				BEGIN_SINK_MAP(CTangramOutLookPlusInspectorEvents)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(InspectorEvents), /*dispid =*/ 0x0000f001, OnActivate, &Activate)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(InspectorEvents), /*dispid =*/ 0x0000f006, OnDeactivate, &Deactivate)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(InspectorEvents), /*dispid =*/ 0x0000f008, OnClose, &Close)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO BeforeMaximize;
			extern _ATL_FUNC_INFO BeforeMinimize;
			extern _ATL_FUNC_INFO BeforeMove;
			extern _ATL_FUNC_INFO BeforeSize;
			extern _ATL_FUNC_INFO PageChange;
			extern _ATL_FUNC_INFO AttachmentSelectionChange;
			class CTangramOutLookPlusInspectorEvents_10 : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusInspectorEvents_10, &__uuidof(InspectorEvents_10)>
			{
			public:
				virtual void __stdcall OnBeforeMaximize(VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnBeforeMinimize(VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnBeforeMove(VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnBeforeSize(VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnPageChange(BSTR* ActivePageName) {}
				virtual void __stdcall OnAttachmentSelectionChange() {}


				BEGIN_SINK_MAP(CTangramOutLookPlusInspectorEvents_10)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(InspectorEvents_10), /*dispid =*/ 0x0000fa11, OnBeforeMaximize, &BeforeMaximize)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(InspectorEvents_10), /*dispid =*/ 0x0000fa12, OnBeforeMinimize, &BeforeMinimize)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(InspectorEvents_10), /*dispid =*/ 0x0000fa13, OnBeforeMove, &BeforeMove)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(InspectorEvents_10), /*dispid =*/ 0x0000fa14, OnBeforeSize, &BeforeSize)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(InspectorEvents_10), /*dispid =*/ 0x0000fbf4, OnPageChange, &PageChange)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(InspectorEvents_10), /*dispid =*/ 0x0000fc79, OnAttachmentSelectionChange, &AttachmentSelectionChange)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO NewInspector;
			class CTangramOutLookPlusInspectorsEvents : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusInspectorsEvents, &__uuidof(InspectorsEvents)>
			{
			public:
				virtual void __stdcall OnNewInspector(_Inspector* Inspector) {}

				BEGIN_SINK_MAP(CTangramOutLookPlusInspectorsEvents)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(InspectorsEvents), /*dispid =*/ 0x0000f001, OnNewInspector, &NewInspector)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO Open;
			extern _ATL_FUNC_INFO CustomAction;
			extern _ATL_FUNC_INFO CustomPropertyChange;
			extern _ATL_FUNC_INFO Forward;
			extern _ATL_FUNC_INFO ItemClose;
			extern _ATL_FUNC_INFO PropertyChange;
			extern _ATL_FUNC_INFO Read;
			extern _ATL_FUNC_INFO Reply;
			extern _ATL_FUNC_INFO ReplyAll;
			extern _ATL_FUNC_INFO Send;
			extern _ATL_FUNC_INFO Write;
			extern _ATL_FUNC_INFO BeforeCheckNames;
			extern _ATL_FUNC_INFO AttachmentAdd;
			extern _ATL_FUNC_INFO AttachmentRead;
			extern _ATL_FUNC_INFO BeforeAttachmentSave;
			class CTangramOutLookPlusItemEvents : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusItemEvents, &__uuidof(ItemEvents)>
			{
			public:
				virtual void __stdcall OnOpen(VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnCustomAction(IDispatch* Action, IDispatch* Response, VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnCustomPropertyChange(BSTR Name) {}
				virtual void __stdcall OnForward(IDispatch* Forward, VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnClose(VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnPropertyChange(BSTR Name) {}
				virtual void __stdcall OnRead() {}
				virtual void __stdcall OnReply(IDispatch* Response, VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnReplyAll(IDispatch* Response, VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnSend(VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnWrite(VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnBeforeCheckNames(VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnAttachmentAdd(OutLook::Attachment* Attachment) {}
				virtual void __stdcall OnAttachmentRead(OutLook::Attachment* Attachment) {}
				virtual void __stdcall OnBeforeAttachmentSave(OutLook::Attachment* Attachment, VARIANT_BOOL* Cancel) {}


				BEGIN_SINK_MAP(CTangramOutLookPlusItemEvents)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemEvents), /*dispid =*/ 0x0000f003, OnOpen, &Open)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemEvents), /*dispid =*/ 0x0000f006, OnCustomAction, &CustomAction)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemEvents), /*dispid =*/ 0x0000f008, OnCustomPropertyChange, &CustomPropertyChange)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemEvents), /*dispid =*/ 0x0000f468, OnForward, &Forward)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemEvents), /*dispid =*/ 0x0000f004, OnClose, &ItemClose)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemEvents), /*dispid =*/ 0x0000f009, OnPropertyChange, &PropertyChange)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemEvents), /*dispid =*/ 0x0000f001, OnRead, &Read)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemEvents), /*dispid =*/ 0x0000f466, OnReply, &Reply)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemEvents), /*dispid =*/ 0x0000f467, OnReplyAll, &ReplyAll)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemEvents), /*dispid =*/ 0x0000f005, OnSend, &Send)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemEvents), /*dispid =*/ 0x0000f002, OnWrite, &Write)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemEvents), /*dispid =*/ 0x0000f00a, OnBeforeCheckNames, &BeforeCheckNames)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemEvents), /*dispid =*/ 0x0000f00b, OnAttachmentAdd, &AttachmentAdd)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemEvents), /*dispid =*/ 0x0000f00c, OnAttachmentRead, &AttachmentRead)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemEvents), /*dispid =*/ 0x0000f00d, OnBeforeAttachmentSave, &BeforeAttachmentSave)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO BeforeDelete;
			extern _ATL_FUNC_INFO AttachmentRemove;
			extern _ATL_FUNC_INFO BeforeAttachmentAdd;
			extern _ATL_FUNC_INFO BeforeAttachmentPreview;
			extern _ATL_FUNC_INFO BeforeAttachmentRead;
			extern _ATL_FUNC_INFO BeforeAttachmentWriteToTempFile;
			extern _ATL_FUNC_INFO Unload;
			extern _ATL_FUNC_INFO BeforeAutoSave;
			extern _ATL_FUNC_INFO BeforeRead;
			extern _ATL_FUNC_INFO AfterWrite;
			extern _ATL_FUNC_INFO ReadComplete;
			class CTangramOutLookPlusItemEvents_10 : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusItemEvents_10, &__uuidof(ItemEvents_10)>
			{
			public:
				virtual void __stdcall OnBeforeDelete(IDispatch* Item, VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnAttachmentRemove(OutLook::Attachment* Attachment) {}
				virtual void __stdcall OnBeforeAttachmentAdd(OutLook::Attachment* Attachment, VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnBeforeAttachmentPreview(OutLook::Attachment* Attachment, VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnBeforeAttachmentRead(OutLook::Attachment* Attachment, VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnBeforeAttachmentWriteToTempFile(OutLook::Attachment* Attachment, VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnUnload() {}
				virtual void __stdcall OnBeforeAutoSave(VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnBeforeRead() {}
				virtual void __stdcall OnAfterWrite() {}
				virtual void __stdcall OnReadComplete(VARIANT_BOOL* Cancel) {}
				BEGIN_SINK_MAP(CTangramOutLookPlusItemEvents_10)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemEvents_10), /*dispid =*/ 0x0000fa75, OnBeforeDelete, &BeforeDelete)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemEvents_10), /*dispid =*/ 0x0000fbae, OnAttachmentRemove, &AttachmentRemove)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemEvents_10), /*dispid =*/ 0x0000fbb0, OnBeforeAttachmentAdd, &BeforeAttachmentAdd)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemEvents_10), /*dispid =*/ 0x0000fbaf, OnBeforeAttachmentPreview, &BeforeAttachmentPreview)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemEvents_10), /*dispid =*/ 0x0000fbab, OnBeforeAttachmentRead, &BeforeAttachmentRead)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemEvents_10), /*dispid =*/ 0x0000fbb2, OnBeforeAttachmentWriteToTempFile, &BeforeAttachmentWriteToTempFile)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemEvents_10), /*dispid =*/ 0x0000fbad, OnUnload, &Unload)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemEvents_10), /*dispid =*/ 0x0000fc02, OnBeforeAutoSave, &BeforeAutoSave)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemEvents_10), /*dispid =*/ 0x0000fc8c, OnBeforeRead, &BeforeRead)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemEvents_10), /*dispid =*/ 0x0000fc8d, OnAfterWrite, &AfterWrite)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemEvents_10), /*dispid =*/ 0x0000fc8f, OnReadComplete, &ReadComplete)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO ItemAdd;
			extern _ATL_FUNC_INFO ItemChange;
			extern _ATL_FUNC_INFO ItemRemove;
			class CTangramOutLookPlusItemsEvents : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusItemsEvents, &__uuidof(ItemsEvents)>
			{
			public:
				virtual void __stdcall OnItemAdd(IDispatch* Item) {}
				virtual void __stdcall OnItemChange(IDispatch* Item) {}
				virtual void __stdcall OnItemRemove() {}


				BEGIN_SINK_MAP(CTangramOutLookPlusItemsEvents)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemsEvents), /*dispid =*/ 0x0000f001, OnItemAdd, &ItemAdd)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemsEvents), /*dispid =*/ 0x0000f002, OnItemChange, &ItemChange)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ItemsEvents), /*dispid =*/ 0x0000f003, OnItemRemove, &ItemRemove)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO BeforeFolderMove;
			extern _ATL_FUNC_INFO BeforeItemMove;
			class CTangramOutLookPlusMAPIFolderEvents_12 : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusMAPIFolderEvents_12, &__uuidof(MAPIFolderEvents_12)>
			{
			public:
				virtual void __stdcall OnBeforeFolderMove(MAPIFolder* MoveTo, VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnBeforeItemMove(IDispatch* Item, MAPIFolder* MoveTo, VARIANT_BOOL* Cancel) {}


				BEGIN_SINK_MAP(CTangramOutLookPlusMAPIFolderEvents_12)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(MAPIFolderEvents_12), /*dispid =*/ 0x0000fba8, OnBeforeFolderMove, &BeforeFolderMove)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(MAPIFolderEvents_12), /*dispid =*/ 0x0000fba9, OnBeforeItemMove, &BeforeItemMove)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO NameSpaceOptionsPagesAdd;
			extern _ATL_FUNC_INFO NameSpaceAutoDiscoverComplete;
			class CTangramOutLookPlusNameSpaceEvents : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusNameSpaceEvents, &__uuidof(NameSpaceEvents)>
			{
			public:
				virtual void __stdcall OnOptionsPagesAdd(PropertyPages* Pages, MAPIFolder* Folder) {}
				virtual void __stdcall OnAutoDiscoverComplete() {}


				BEGIN_SINK_MAP(CTangramOutLookPlusNameSpaceEvents)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(NameSpaceEvents), /*dispid =*/ 0x0000f005, OnOptionsPagesAdd, &NameSpaceOptionsPagesAdd)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(NameSpaceEvents), /*dispid =*/ 0x0000fc2d, OnAutoDiscoverComplete, &NameSpaceAutoDiscoverComplete)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO SelectedChange;
			extern _ATL_FUNC_INFO NavigationFolderAdd;
			extern _ATL_FUNC_INFO NavigationFolderRemove;
			class CTangramOutLookPlusNavigationGroupsEvents_12 : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusNavigationGroupsEvents_12, &__uuidof(NavigationGroupsEvents_12)>
			{
			public:
				virtual void __stdcall OnSelectedChange(NavigationFolder* NavigationFolder) {}
				virtual void __stdcall OnNavigationFolderAdd(NavigationFolder* NavigationFolder) {}
				virtual void __stdcall OnNavigationFolderRemove() {}


				BEGIN_SINK_MAP(CTangramOutLookPlusNavigationGroupsEvents_12)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(NavigationGroupsEvents_12), /*dispid =*/ 0x0000fbca, OnSelectedChange, &SelectedChange)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(NavigationGroupsEvents_12), /*dispid =*/ 0x0000fbcb, OnNavigationFolderAdd, &NavigationFolderAdd)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(NavigationGroupsEvents_12), /*dispid =*/ 0x0000fbcc, OnNavigationFolderRemove, &NavigationFolderRemove)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO ModuleSwitch;
			class CTangramOutLookPlusNavigationPaneEvents_12 : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusNavigationPaneEvents_12, &__uuidof(NavigationPaneEvents_12)>
			{
			public:
				virtual void __stdcall OnModuleSwitch(NavigationModule* CurrentModule) {}


				BEGIN_SINK_MAP(CTangramOutLookPlusNavigationPaneEvents_12)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(NavigationPaneEvents_12), /*dispid =*/ 0x0000fbc9, OnModuleSwitch, &ModuleSwitch)
				END_SINK_MAP()
			};

			//extern _ATL_FUNC_INFO Click;
			//extern _ATL_FUNC_INFO DoubleClick;
			//extern _ATL_FUNC_INFO MouseDown;
			//extern _ATL_FUNC_INFO MouseMove;
			//extern _ATL_FUNC_INFO MouseUp;
			//class CTangramOutLookPlusOlkBusinessCardControlEvents : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusOlkBusinessCardControlEvents, &__uuidof(OlkBusinessCardControlEvents)>
			//{
			//public:
			//	virtual void __stdcall OnClick() {}
			//	virtual void __stdcall OnDoubleClick() {}
			//	virtual void __stdcall OnMouseDown(OlMouseButton Button, OlShiftState Shift, OLE_XPOS_CONTAINER X, OLE_YPOS_CONTAINER Y) {}
			//	virtual void __stdcall OnMouseMove(OlMouseButton Button, OlShiftState Shift, OLE_XPOS_CONTAINER X, OLE_YPOS_CONTAINER Y) {}
			//	virtual void __stdcall OnMouseUp(OlMouseButton Button, OlShiftState Shift, OLE_XPOS_CONTAINER X, OLE_YPOS_CONTAINER Y) {}


			//	BEGIN_SINK_MAP(CTangramOutLookPlusOlkBusinessCardControlEvents)
			//		SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OlkBusinessCardControlEvents), /*dispid =*/ 0xfffffda8, OnClick, &Click)
			//		SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OlkBusinessCardControlEvents), /*dispid =*/ 0xfffffda7, OnDoubleClick, &DoubleClick)
			//		SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OlkBusinessCardControlEvents), /*dispid =*/ 0xfffffda3, OnMouseDown, &MouseDown)
			//		SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OlkBusinessCardControlEvents), /*dispid =*/ 0xfffffda2, OnMouseMove, &MouseMove)
			//		SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OlkBusinessCardControlEvents), /*dispid =*/ 0xfffffda1, OnMouseUp, &MouseUp)
			//	END_SINK_MAP()
			//};

			extern _ATL_FUNC_INFO Click;
			extern _ATL_FUNC_INFO DoubleClick;
			extern _ATL_FUNC_INFO MouseDown;
			extern _ATL_FUNC_INFO MouseMove;
			extern _ATL_FUNC_INFO MouseUp;
			extern _ATL_FUNC_INFO Enter;
			extern _ATL_FUNC_INFO Exit;
			extern _ATL_FUNC_INFO KeyDown;
			extern _ATL_FUNC_INFO KeyPress;
			extern _ATL_FUNC_INFO KeyUp;
			extern _ATL_FUNC_INFO Change;
			//class CTangramOutLookPlusOlkCategoryEvents : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusOlkCategoryEvents, &__uuidof(OlkCategoryEvents)>
			//{
			//public:
			//	virtual void __stdcall OnClick() {}
			//	virtual void __stdcall OnDoubleClick() {}
			//	virtual void __stdcall OnMouseDown(OlMouseButton Button, OlShiftState Shift, OLE_XPOS_CONTAINER X, OLE_YPOS_CONTAINER Y) {}
			//	virtual void __stdcall OnMouseMove(OlMouseButton Button, OlShiftState Shift, OLE_XPOS_CONTAINER X, OLE_YPOS_CONTAINER Y) {}
			//	virtual void __stdcall OnMouseUp(OlMouseButton Button, OlShiftState Shift, OLE_XPOS_CONTAINER X, OLE_YPOS_CONTAINER Y) {}
			//	virtual void __stdcall OnEnter() {}
			//	virtual void __stdcall OnExit(VARIANT_BOOL* Cancel) {}
			//	virtual void __stdcall OnKeyDown(long* KeyCode, OlShiftState Shift) {}
			//	virtual void __stdcall OnKeyPress(long* KeyAscii) {}
			//	virtual void __stdcall OnKeyUp(long* KeyCode, OlShiftState Shift) {}
			//	virtual void __stdcall OnChange() {}


			//	BEGIN_SINK_MAP(CTangramOutLookPlusOlkCategoryEvents)
			//		SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OlkCategoryEvents), /*dispid =*/ 0xfffffda8, OnClick, &Click)
			//		SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OlkCategoryEvents), /*dispid =*/ 0xfffffda7, OnDoubleClick, &DoubleClick)
			//		SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OlkCategoryEvents), /*dispid =*/ 0xfffffda3, OnMouseDown, &MouseDown)
			//		SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OlkCategoryEvents), /*dispid =*/ 0xfffffda2, OnMouseMove, &MouseMove)
			//		SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OlkCategoryEvents), /*dispid =*/ 0xfffffda1, OnMouseUp, &MouseUp)
			//		SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OlkCategoryEvents), /*dispid =*/ 0x80018202, OnEnter, &Enter)
			//		SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OlkCategoryEvents), /*dispid =*/ 0x80018203, OnExit, &Exit)
			//		SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OlkCategoryEvents), /*dispid =*/ 0xfffffda6, OnKeyDown, &KeyDown)
			//		SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OlkCategoryEvents), /*dispid =*/ 0xfffffda5, OnKeyPress, &KeyPress)
			//		SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OlkCategoryEvents), /*dispid =*/ 0xfffffda4, OnKeyUp, &KeyUp)
			//		SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OlkCategoryEvents), /*dispid =*/ 0x00000002, OnChange, &Change)
			//	END_SINK_MAP()
			//};

			extern _ATL_FUNC_INFO Click;
			extern _ATL_FUNC_INFO DoubleClick;
			extern _ATL_FUNC_INFO MouseDown;
			extern _ATL_FUNC_INFO MouseMove;
			extern _ATL_FUNC_INFO MouseUp;
			extern _ATL_FUNC_INFO Enter;
			extern _ATL_FUNC_INFO Exit;
			extern _ATL_FUNC_INFO KeyDown;
			extern _ATL_FUNC_INFO KeyPress;
			extern _ATL_FUNC_INFO KeyUp;
			extern _ATL_FUNC_INFO Change;
			extern _ATL_FUNC_INFO AfterUpdate;
			extern _ATL_FUNC_INFO BeforeUpdate;

			extern _ATL_FUNC_INFO DropButtonClick;

			extern _ATL_FUNC_INFO GroupAdd;
			extern _ATL_FUNC_INFO BeforeGroupAdd;
			extern _ATL_FUNC_INFO BeforeGroupRemove;

			class CTangramOutLookPlusOutlookBarGroupsEvents : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusOutlookBarGroupsEvents, &__uuidof(OutlookBarGroupsEvents)>
			{
			public:
				virtual void __stdcall OnGroupAdd(OutlookBarGroup* NewGroup) {}
				virtual void __stdcall OnBeforeGroupAdd(VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnBeforeGroupRemove(OutlookBarGroup* Group, VARIANT_BOOL* Cancel) {}


				BEGIN_SINK_MAP(CTangramOutLookPlusOutlookBarGroupsEvents)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OutlookBarGroupsEvents), /*dispid =*/ 0x0000f001, OnGroupAdd, &GroupAdd)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OutlookBarGroupsEvents), /*dispid =*/ 0x0000f002, OnBeforeGroupAdd, &BeforeGroupAdd)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OutlookBarGroupsEvents), /*dispid =*/ 0x0000f003, OnBeforeGroupRemove, &BeforeGroupRemove)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO BeforeNavigate;
			extern _ATL_FUNC_INFO BeforeGroupSwitch;


			class CTangramOutLookPlusOutlookBarPaneEvents : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusOutlookBarPaneEvents, &__uuidof(OutlookBarPaneEvents)>
			{
			public:
				virtual void __stdcall OnBeforeNavigate(OutlookBarShortcut* Shortcut, VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnBeforeGroupSwitch(OutlookBarGroup* ToGroup, VARIANT_BOOL* Cancel) {}


				BEGIN_SINK_MAP(CTangramOutLookPlusOutlookBarPaneEvents)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OutlookBarPaneEvents), /*dispid =*/ 0x0000f001, OnBeforeNavigate, &BeforeNavigate)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OutlookBarPaneEvents), /*dispid =*/ 0x0000f002, OnBeforeGroupSwitch, &BeforeGroupSwitch)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO ShortcutAdd;
			extern _ATL_FUNC_INFO BeforeShortcutAdd;
			extern _ATL_FUNC_INFO BeforeShortcutRemove;


			class CTangramOutLookPlusOutlookBarShortcutsEvents : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusOutlookBarShortcutsEvents, &__uuidof(OutlookBarShortcutsEvents)>
			{
			public:
				virtual void __stdcall OnShortcutAdd(OutlookBarShortcut* NewShortcut) {}
				virtual void __stdcall OnBeforeShortcutAdd(VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnBeforeShortcutRemove(OutlookBarShortcut* Shortcut, VARIANT_BOOL* Cancel) {}


				BEGIN_SINK_MAP(CTangramOutLookPlusOutlookBarShortcutsEvents)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OutlookBarShortcutsEvents), /*dispid =*/ 0x0000f001, OnShortcutAdd, &ShortcutAdd)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OutlookBarShortcutsEvents), /*dispid =*/ 0x0000f002, OnBeforeShortcutAdd, &BeforeShortcutAdd)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(OutlookBarShortcutsEvents), /*dispid =*/ 0x0000f003, OnBeforeShortcutRemove, &BeforeShortcutRemove)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO BeforeReminderShow;
			extern _ATL_FUNC_INFO ReminderAdd;
			extern _ATL_FUNC_INFO ReminderChange;
			extern _ATL_FUNC_INFO ReminderFire;
			extern _ATL_FUNC_INFO ReminderRemove;
			extern _ATL_FUNC_INFO Snooze;


			class CTangramOutLookPlusReminderCollectionEvents : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusReminderCollectionEvents, &__uuidof(ReminderCollectionEvents)>
			{
			public:
				virtual void __stdcall OnBeforeReminderShow(VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnReminderAdd(_Reminder* ReminderObject) {}
				virtual void __stdcall OnReminderChange(_Reminder* ReminderObject) {}
				virtual void __stdcall OnReminderFire(_Reminder* ReminderObject) {}
				virtual void __stdcall OnReminderRemove() {}
				virtual void __stdcall OnSnooze(_Reminder* ReminderObject) {}


				BEGIN_SINK_MAP(CTangramOutLookPlusReminderCollectionEvents)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ReminderCollectionEvents), /*dispid =*/ 0x0000fa93, OnBeforeReminderShow, &BeforeReminderShow)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ReminderCollectionEvents), /*dispid =*/ 0x0000fa94, OnReminderAdd, &ReminderAdd)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ReminderCollectionEvents), /*dispid =*/ 0x0000fa95, OnReminderChange, &ReminderChange)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ReminderCollectionEvents), /*dispid =*/ 0x0000fa96, OnReminderFire, &ReminderFire)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ReminderCollectionEvents), /*dispid =*/ 0x0000fa97, OnReminderRemove, &ReminderRemove)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ReminderCollectionEvents), /*dispid =*/ 0x0000fa98, OnSnooze, &Snooze)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO ItemAdd;
			extern _ATL_FUNC_INFO ItemChange;
			extern _ATL_FUNC_INFO ItemRemove;


			class CTangramOutLookPlusResultsEvents : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusResultsEvents, &__uuidof(ResultsEvents)>
			{
			public:
				virtual void __stdcall OnItemAdd(IDispatch* Item) {}
				virtual void __stdcall OnItemChange(IDispatch* Item) {}
				virtual void __stdcall OnItemRemove() {}


				BEGIN_SINK_MAP(CTangramOutLookPlusResultsEvents)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ResultsEvents), /*dispid =*/ 0x0000f001, OnItemAdd, &ItemAdd)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ResultsEvents), /*dispid =*/ 0x0000f002, OnItemChange, &ItemChange)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ResultsEvents), /*dispid =*/ 0x0000f003, OnItemRemove, &ItemRemove)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO BeforeStoreRemove;
			extern _ATL_FUNC_INFO StoreAdd;


			class CTangramOutLookPlusStoresEvents_12 : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusStoresEvents_12, &__uuidof(StoresEvents_12)>
			{
			public:
				virtual void __stdcall OnBeforeStoreRemove(_Store* Store, VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnStoreAdd(_Store* Store) {}


				BEGIN_SINK_MAP(CTangramOutLookPlusStoresEvents_12)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(StoresEvents_12), /*dispid =*/ 0x0000fbb1, OnBeforeStoreRemove, &BeforeStoreRemove)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(StoresEvents_12), /*dispid =*/ 0x0000f001, OnStoreAdd, &StoreAdd)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO SyncStart;
			extern _ATL_FUNC_INFO Progress;
			extern _ATL_FUNC_INFO OnError;
			extern _ATL_FUNC_INFO SyncEnd;


			class CTangramOutLookPlusSyncObjectEvents : public IDispEventSimpleImpl</*nID =*/ 1, CTangramOutLookPlusSyncObjectEvents, &__uuidof(SyncObjectEvents)>
			{
			public:
				virtual void __stdcall OnSyncStart() {}
				virtual void __stdcall OnProgress(OlSyncState State, BSTR Description, long Value, long Max) {}
				virtual void __stdcall OnOnError(long Code, BSTR Description) {}
				virtual void __stdcall OnSyncEnd() {}


				BEGIN_SINK_MAP(CTangramOutLookPlusSyncObjectEvents)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(SyncObjectEvents), /*dispid =*/ 0x0000f001, OnSyncStart, &SyncStart)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(SyncObjectEvents), /*dispid =*/ 0x0000f002, OnProgress, &Progress)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(SyncObjectEvents), /*dispid =*/ 0x0000f003, OnOnError, &OnError)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(SyncObjectEvents), /*dispid =*/ 0x0000f004, OnSyncEnd, &SyncEnd)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO BeforeViewSwitch2;
			extern _ATL_FUNC_INFO SelectionChange;
			class COUTLCTL_ViewCtlEvents : public IDispEventSimpleImpl</*nID =*/ 1, COUTLCTL_ViewCtlEvents, &__uuidof(ViewCtlEvents)>
			{
			public:
				virtual void __stdcall OnBeforeViewSwitch(BSTR newView, VARIANT_BOOL* Cancel) {}
				virtual void __stdcall OnViewSwitch() {}
				virtual void __stdcall OnActivate() {}
				virtual void __stdcall OnSelectionChange() {}


				BEGIN_SINK_MAP(COUTLCTL_ViewCtlEvents)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ViewCtlEvents), /*dispid =*/ 0x00000004, OnBeforeViewSwitch, &BeforeViewSwitch2)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ViewCtlEvents), /*dispid =*/ 0x00000005, OnViewSwitch, &ViewSwitch)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ViewCtlEvents), /*dispid =*/ 0x00000414, OnActivate, &Activate)
					SINK_ENTRY_INFO(/*nID =*/ 1, __uuidof(ViewCtlEvents), /*dispid =*/ 0x0000040d, OnSelectionChange, &SelectionChange)
				END_SINK_MAP()
			};
		}
	}
}