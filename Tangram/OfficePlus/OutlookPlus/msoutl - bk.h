﻿/********************************************************************************
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
// Created by Microsoft (R) C/C++ Compiler Version 15.00.21022.08 (daf897ee).
// C++ source equivalent of type library C:\Program Files\Microsoft Office\Office15\MSOUTL.OLB
// compiler-generated file created 08/05/12 at 15:21:36 - DO NOT EDIT!

//
// Cross-referenced type libraries:
//
#include "mso.h"
//

#pragma once
#pragma pack(push, 8)

#include <comdef.h>

namespace OutLook {

//
// Forward references and typedefs
//

struct __declspec(uuid("00062fff-0000-0000-c000-000000000046"))
/* LIBID */ __Outlook;
struct __declspec(uuid("d87e7e16-6897-11ce-a6c0-00aa00608faa"))
/* interface */ _IRecipientControl;
struct __declspec(uuid("0006f025-0000-0000-c000-000000000046"))
/* dispinterface */ _DRecipientControl;
struct __declspec(uuid("d87e7e17-6897-11ce-a6c0-00aa00608faa"))
/* dispinterface */ _DRecipientControlEvents;
struct /* coclass */ _RecipientControl;
struct __declspec(uuid("43507dd0-811d-11ce-b565-00aa00608faa"))
/* interface */ _IDocSiteControl;
struct __declspec(uuid("0006f026-0000-0000-c000-000000000046"))
/* dispinterface */ _DDocSiteControl;
struct __declspec(uuid("50bb9b50-811d-11ce-b565-00aa00608faa"))
/* dispinterface */ _DDocSiteControlEvents;
struct /* coclass */ _DocSiteControl;
enum OlMousePointer;
enum OlScrollBars;
enum OlBackStyle;
enum OlBorderStyle;
enum OlEnterFieldBehavior;
enum OlDragBehavior;
enum OlComboBoxStyle;
enum OlAlignment;
enum OlMultiSelect;
enum OlTextAlign;
enum OlMatchEntry;
enum OlPageType;
enum OlTimeStyle;
enum OlShiftState;
enum OlMouseButton;
enum OlPictureAlignment;
enum OlAppointmentTimeField;
enum OlHorizontalLayout;
enum OlVerticalLayout;
struct __declspec(uuid("00067366-0000-0000-c000-000000000046"))
/* dual interface */ OlkControl;
struct __declspec(uuid("000672da-0000-0000-c000-000000000046"))
/* dual interface */ _OlkTextBox;
struct __declspec(uuid("000672e6-0000-0000-c000-000000000046"))
/* dispinterface */ OlkTextBoxEvents;
struct /* coclass */ OlkTextBox;
struct __declspec(uuid("000672d9-0000-0000-c000-000000000046"))
/* dual interface */ _OlkLabel;
struct __declspec(uuid("000672e5-0000-0000-c000-000000000046"))
/* dispinterface */ OlkLabelEvents;
struct /* coclass */ OlkLabel;
struct __declspec(uuid("000672db-0000-0000-c000-000000000046"))
/* dual interface */ _OlkCommandButton;
struct __declspec(uuid("000672e0-0000-0000-c000-000000000046"))
/* dispinterface */ OlkCommandButtonEvents;
struct /* coclass */ OlkCommandButton;
struct __declspec(uuid("000672dd-0000-0000-c000-000000000046"))
/* dual interface */ _OlkCheckBox;
struct __declspec(uuid("000672e2-0000-0000-c000-000000000046"))
/* dispinterface */ OlkCheckBoxEvents;
struct /* coclass */ OlkCheckBox;
struct __declspec(uuid("000672dc-0000-0000-c000-000000000046"))
/* dual interface */ _OlkOptionButton;
struct __declspec(uuid("000672e1-0000-0000-c000-000000000046"))
/* dispinterface */ OlkOptionButtonEvents;
struct /* coclass */ OlkOptionButton;
struct __declspec(uuid("000672de-0000-0000-c000-000000000046"))
/* dual interface */ _OlkComboBox;
struct __declspec(uuid("000672e3-0000-0000-c000-000000000046"))
/* dispinterface */ OlkComboBoxEvents;
struct /* coclass */ OlkComboBox;
struct __declspec(uuid("000672df-0000-0000-c000-000000000046"))
/* dual interface */ _OlkListBox;
struct __declspec(uuid("000672e4-0000-0000-c000-000000000046"))
/* dispinterface */ OlkListBoxEvents;
struct /* coclass */ OlkListBox;
struct __declspec(uuid("000672f6-0000-0000-c000-000000000046"))
/* dual interface */ _OlkInfoBar;
struct __declspec(uuid("000672f7-0000-0000-c000-000000000046"))
/* dispinterface */ OlkInfoBarEvents;
struct /* coclass */ OlkInfoBar;
struct __declspec(uuid("000672eb-0000-0000-c000-000000000046"))
/* dual interface */ _OlkContactPhoto;
struct __declspec(uuid("000672ec-0000-0000-c000-000000000046"))
/* dispinterface */ OlkContactPhotoEvents;
struct /* coclass */ OlkContactPhoto;
struct __declspec(uuid("000672ed-0000-0000-c000-000000000046"))
/* dual interface */ _OlkBusinessCardControl;
struct __declspec(uuid("000672ee-0000-0000-c000-000000000046"))
/* dispinterface */ OlkBusinessCardControlEvents;
struct /* coclass */ OlkBusinessCardControl;
struct __declspec(uuid("000672f8-0000-0000-c000-000000000046"))
/* dual interface */ _OlkPageControl;
struct __declspec(uuid("000672f9-0000-0000-c000-000000000046"))
/* dispinterface */ OlkPageControlEvents;
struct /* coclass */ OlkPageControl;
struct __declspec(uuid("000672fa-0000-0000-c000-000000000046"))
/* dual interface */ _OlkDateControl;
struct __declspec(uuid("000672fb-0000-0000-c000-000000000046"))
/* dispinterface */ OlkDateControlEvents;
struct /* coclass */ OlkDateControl;
struct __declspec(uuid("000672ef-0000-0000-c000-000000000046"))
/* dual interface */ _OlkTimeControl;
struct __declspec(uuid("000672f0-0000-0000-c000-000000000046"))
/* dispinterface */ OlkTimeControlEvents;
struct /* coclass */ OlkTimeControl;
struct __declspec(uuid("000672f4-0000-0000-c000-000000000046"))
/* dual interface */ _OlkCategory;
struct __declspec(uuid("000672f5-0000-0000-c000-000000000046"))
/* dispinterface */ OlkCategoryEvents;
struct /* coclass */ OlkCategory;
struct __declspec(uuid("00067352-0000-0000-c000-000000000046"))
/* dual interface */ _OlkFrameHeader;
struct __declspec(uuid("00067353-0000-0000-c000-000000000046"))
/* dispinterface */ OlkFrameHeaderEvents;
struct /* coclass */ OlkFrameHeader;
struct __declspec(uuid("00067355-0000-0000-c000-000000000046"))
/* dual interface */ _OlkSenderPhoto;
struct __declspec(uuid("00067356-0000-0000-c000-000000000046"))
/* dispinterface */ OlkSenderPhotoEvents;
struct /* coclass */ OlkSenderPhoto;
struct __declspec(uuid("000630fd-0000-0000-c000-000000000046"))
/* dual interface */ _TimeZone;
struct __declspec(uuid("00063001-0000-0000-c000-000000000046"))
/* dual interface */ _Application;
enum OlObjectClass;
struct __declspec(uuid("00063002-0000-0000-c000-000000000046"))
/* dual interface */ _NameSpace;
struct __declspec(uuid("00063045-0000-0000-c000-000000000046"))
/* dual interface */ Recipient;
struct __declspec(uuid("0006304b-0000-0000-c000-000000000046"))
/* dual interface */ AddressEntry;
enum OlDisplayType;
struct __declspec(uuid("0006304a-0000-0000-c000-000000000046"))
/* dual interface */ AddressEntries;
struct __declspec(uuid("00063021-0000-0000-c000-000000000046"))
/* dual interface */ _ContactItem;
struct __declspec(uuid("0006303e-0000-0000-c000-000000000046"))
/* dual interface */ Actions;
struct __declspec(uuid("00063043-0000-0000-c000-000000000046"))
/* dual interface */ Action;
enum OlActionCopyLike;
enum OlActionReplyStyle;
enum OlActionResponseStyle;
enum OlActionShowOn;
struct __declspec(uuid("0006303c-0000-0000-c000-000000000046"))
/* dual interface */ Attachments;
struct __declspec(uuid("00063007-0000-0000-c000-000000000046"))
/* dual interface */ Attachment;
enum OlAttachmentType;
struct /* coclass */ PropertyAccessor;
struct __declspec(uuid("0006302d-0000-0000-c000-000000000046"))
/* dual interface */ _PropertyAccessor;
enum OlAttachmentBlockLevel;
struct __declspec(uuid("00063046-0000-0000-c000-000000000046"))
/* dual interface */ FormDescription;
enum OlFormRegistry;
struct __declspec(uuid("00063005-0000-0000-c000-000000000046"))
/* dual interface */ _Inspector;
enum OlEditorType;
enum OlInspectorClose;
enum OlWindowState;
struct __declspec(uuid("000630f9-0000-0000-c000-000000000046"))
/* dual interface */ _AttachmentSelection;
enum OlSelectionLocation;
enum OlSelectionContents;
struct __declspec(uuid("00063087-0000-0000-c000-000000000046"))
/* dual interface */ Selection;
enum OlImportance;
enum OlSensitivity;
struct __declspec(uuid("0006303d-0000-0000-c000-000000000046"))
/* dual interface */ UserProperties;
struct __declspec(uuid("00063042-0000-0000-c000-000000000046"))
/* dual interface */ UserProperty;
enum OlUserPropertyType;
struct __declspec(uuid("00063006-0000-0000-c000-000000000046"))
/* dual interface */ MAPIFolder;
enum OlItemType;
struct __declspec(uuid("00063040-0000-0000-c000-000000000046"))
/* dual interface */ _Folders;
struct __declspec(uuid("00063041-0000-0000-c000-000000000046"))
/* dual interface */ _Items;
struct __declspec(uuid("00063003-0000-0000-c000-000000000046"))
/* dual interface */ _Explorer;
struct __declspec(uuid("00063009-0000-0000-c000-000000000046"))
/* dual interface */ Panes;
enum OlPane;
struct __declspec(uuid("000630e6-0000-0000-c000-000000000046"))
/* dual interface */ _NavigationPane;
struct /* coclass */ NavigationModule;
struct __declspec(uuid("000630e8-0000-0000-c000-000000000046"))
/* dual interface */ _NavigationModule;
enum OlNavigationModuleType;
struct /* coclass */ NavigationModules;
struct __declspec(uuid("000630e7-0000-0000-c000-000000000046"))
/* dual interface */ _NavigationModules;
enum OlSearchScope;
struct __declspec(uuid("00063103-0000-0000-c000-000000000046"))
/* dual interface */ _AccountSelector;
struct __declspec(uuid("000630c5-0000-0000-c000-000000000046"))
/* dual interface */ _Account;
enum OlAccountType;
enum OlAutoDiscoverConnectionMode;
struct /* coclass */ Store;
struct __declspec(uuid("000630c7-0000-0000-c000-000000000046"))
/* dual interface */ _Store;
enum OlExchangeStoreType;
struct /* coclass */ Rules;
struct __declspec(uuid("000630cc-0000-0000-c000-000000000046"))
/* dual interface */ _Rules;
struct __declspec(uuid("000630cd-0000-0000-c000-000000000046"))
/* dual interface */ _Rule;
enum OlRuleType;
struct /* coclass */ RuleActions;
struct __declspec(uuid("000630ce-0000-0000-c000-000000000046"))
/* dual interface */ _RuleActions;
struct __declspec(uuid("000630cf-0000-0000-c000-000000000046"))
/* dual interface */ _RuleAction;
enum OlRuleActionType;
struct /* coclass */ MoveOrCopyRuleAction;
struct __declspec(uuid("000630d0-0000-0000-c000-000000000046"))
/* dual interface */ _MoveOrCopyRuleAction;
struct /* coclass */ RuleAction;
struct /* coclass */ SendRuleAction;
struct __declspec(uuid("000630d1-0000-0000-c000-000000000046"))
/* dual interface */ _SendRuleAction;
struct __declspec(uuid("0006303b-0000-0000-c000-000000000046"))
/* dual interface */ Recipients;
struct /* coclass */ AssignToCategoryRuleAction;
struct __declspec(uuid("000630d4-0000-0000-c000-000000000046"))
/* dual interface */ _AssignToCategoryRuleAction;
struct /* coclass */ PlaySoundRuleAction;
struct __declspec(uuid("000630d5-0000-0000-c000-000000000046"))
/* dual interface */ _PlaySoundRuleAction;
struct /* coclass */ MarkAsTaskRuleAction;
struct __declspec(uuid("000630d6-0000-0000-c000-000000000046"))
/* dual interface */ _MarkAsTaskRuleAction;
enum OlMarkInterval;
struct /* coclass */ NewItemAlertRuleAction;
struct __declspec(uuid("000630d7-0000-0000-c000-000000000046"))
/* dual interface */ _NewItemAlertRuleAction;
struct /* coclass */ RuleConditions;
struct __declspec(uuid("000630d8-0000-0000-c000-000000000046"))
/* dual interface */ _RuleConditions;
struct __declspec(uuid("000630d9-0000-0000-c000-000000000046"))
/* dual interface */ _RuleCondition;
enum OlRuleConditionType;
struct /* coclass */ RuleCondition;
struct /* coclass */ ImportanceRuleCondition;
struct __declspec(uuid("000630da-0000-0000-c000-000000000046"))
/* dual interface */ _ImportanceRuleCondition;
struct /* coclass */ AccountRuleCondition;
struct __declspec(uuid("000630db-0000-0000-c000-000000000046"))
/* dual interface */ _AccountRuleCondition;
struct /* coclass */ Account;
struct /* coclass */ TextRuleCondition;
struct __declspec(uuid("000630e0-0000-0000-c000-000000000046"))
/* dual interface */ _TextRuleCondition;
struct /* coclass */ CategoryRuleCondition;
struct __declspec(uuid("000630dc-0000-0000-c000-000000000046"))
/* dual interface */ _CategoryRuleCondition;
struct /* coclass */ FormNameRuleCondition;
struct __declspec(uuid("000630dd-0000-0000-c000-000000000046"))
/* dual interface */ _FormNameRuleCondition;
struct /* coclass */ ToOrFromRuleCondition;
struct __declspec(uuid("000630de-0000-0000-c000-000000000046"))
/* dual interface */ _ToOrFromRuleCondition;
struct /* coclass */ AddressRuleCondition;
struct __declspec(uuid("000630fa-0000-0000-c000-000000000046"))
/* dual interface */ _AddressRuleCondition;
struct /* coclass */ SenderInAddressListRuleCondition;
struct __declspec(uuid("000630df-0000-0000-c000-000000000046"))
/* dual interface */ _SenderInAddressListRuleCondition;
struct __declspec(uuid("00063049-0000-0000-c000-000000000046"))
/* dual interface */ AddressList;
enum OlAddressListType;
struct /* coclass */ FromRssFeedRuleCondition;
struct __declspec(uuid("000630fb-0000-0000-c000-000000000046"))
/* dual interface */ _FromRssFeedRuleCondition;
struct /* coclass */ Rule;
enum OlSpecialFolders;
enum OlDefaultFolders;
struct /* coclass */ Categories;
struct __declspec(uuid("000630e4-0000-0000-c000-000000000046"))
/* dual interface */ _Categories;
struct __declspec(uuid("000630e3-0000-0000-c000-000000000046"))
/* dual interface */ _Category;
enum OlCategoryColor;
enum OlCategoryShortcutKey;
struct /* coclass */ Category;
enum OlExchangeConnectionMode;
struct __declspec(uuid("00063095-0000-0000-c000-000000000046"))
/* dual interface */ View;
enum OlViewSaveOption;
enum OlViewType;
struct __declspec(uuid("0006308d-0000-0000-c000-000000000046"))
/* dual interface */ _Views;
enum OlShowItemCount;
enum OlStorageIdentifierType;
struct __declspec(uuid("000630cb-0000-0000-c000-000000000046"))
/* dual interface */ _StorageItem;
struct /* coclass */ Table;
struct __declspec(uuid("000630d2-0000-0000-c000-000000000046"))
/* dual interface */ _Table;
struct /* coclass */ Row;
struct __declspec(uuid("000630d3-0000-0000-c000-000000000046"))
/* dual interface */ _Row;
struct /* coclass */ Columns;
struct __declspec(uuid("000630e1-0000-0000-c000-000000000046"))
/* dual interface */ _Columns;
struct __declspec(uuid("000630e5-0000-0000-c000-000000000046"))
/* dual interface */ _Column;
struct /* coclass */ Column;
struct /* coclass */ CalendarSharing;
struct __declspec(uuid("000630e2-0000-0000-c000-000000000046"))
/* dual interface */ _CalendarSharing;
enum OlCalendarMailFormat;
struct /* coclass */ MailItem;
struct __declspec(uuid("00063034-0000-0000-c000-000000000046"))
/* dual interface */ _MailItem;
enum OlFlagStatus;
enum OlRemoteStatus;
struct __declspec(uuid("0006308a-0000-0000-c000-000000000046"))
/* dual interface */ Links;
struct __declspec(uuid("00063089-0000-0000-c000-000000000046"))
/* dual interface */ Link;
struct __declspec(uuid("000630a8-0000-0000-c000-000000000046"))
/* dual interface */ ItemProperties;
struct __declspec(uuid("000630a7-0000-0000-c000-000000000046"))
/* dual interface */ ItemProperty;
enum OlBodyFormat;
enum OlDownloadState;
enum OlFlagIcon;
struct __declspec(uuid("000630c2-0000-0000-c000-000000000046"))
/* dual interface */ Conflicts;
struct __declspec(uuid("000630c3-0000-0000-c000-000000000046"))
/* dual interface */ Conflict;
enum OlPermission;
enum OlPermissionService;
struct /* coclass */ ContactItem;
struct __declspec(uuid("0006303a-0000-0000-c000-000000000046"))
/* dispinterface */ ItemEvents;
struct __declspec(uuid("0006302b-0000-0000-c000-000000000046"))
/* dispinterface */ ItemEvents_10;
struct __declspec(uuid("00063101-0000-0000-c000-000000000046"))
/* dual interface */ _Conversation;
struct /* coclass */ SimpleItems;
struct __declspec(uuid("00063102-0000-0000-c000-000000000046"))
/* dual interface */ _SimpleItems;
enum OlAlwaysDeleteConversation;
enum OlCalendarDetail;
struct /* coclass */ UserDefinedProperties;
struct __declspec(uuid("00063047-0000-0000-c000-000000000046"))
/* dual interface */ _UserDefinedProperties;
struct __declspec(uuid("0006305c-0000-0000-c000-000000000046"))
/* dual interface */ _UserDefinedProperty;
struct /* coclass */ UserDefinedProperty;
enum OlGender;
enum OlMailingAddress;
enum OlContactPhoneNumber;
enum OlBusinessCardType;
struct /* coclass */ ExchangeUser;
struct __declspec(uuid("000630c9-0000-0000-c000-000000000046"))
/* dual interface */ _ExchangeUser;
enum OlAddressEntryUserType;
struct /* coclass */ ExchangeDistributionList;
struct __declspec(uuid("000630ca-0000-0000-c000-000000000046"))
/* dual interface */ _ExchangeDistributionList;
enum OlResponseStatus;
enum OlTrackingStatus;
struct __declspec(uuid("00063048-0000-0000-c000-000000000046"))
/* dual interface */ AddressLists;
struct __declspec(uuid("00063086-0000-0000-c000-000000000046"))
/* dual interface */ SyncObjects;
struct /* coclass */ SyncObject;
struct __declspec(uuid("00063083-0000-0000-c000-000000000046"))
/* dual interface */ _SyncObject;
struct __declspec(uuid("00063085-0000-0000-c000-000000000046"))
/* dispinterface */ SyncObjectEvents;
enum OlSyncState;
enum OlStoreType;
struct /* coclass */ Accounts;
struct __declspec(uuid("000630c4-0000-0000-c000-000000000046"))
/* dual interface */ _Accounts;
struct __declspec(uuid("00063105-0000-0000-c000-000000000046"))
/* dispinterface */ AccountsEvents;
struct /* coclass */ Stores;
struct __declspec(uuid("000630c6-0000-0000-c000-000000000046"))
/* dual interface */ _Stores;
struct __declspec(uuid("000630f8-0000-0000-c000-000000000046"))
/* dispinterface */ StoresEvents_12;
struct /* coclass */ SelectNamesDialog;
struct __declspec(uuid("000630c8-0000-0000-c000-000000000046"))
/* dual interface */ _SelectNamesDialog;
enum OlRecipientSelectors;
enum OlDefaultSelectNamesDisplayMode;
struct /* coclass */ SharingItem;
struct __declspec(uuid("0006302f-0000-0000-c000-000000000046"))
/* dual interface */ _SharingItem;
enum OlSharingProvider;
enum OlSharingMsgType;
struct __declspec(uuid("0006300a-0000-0000-c000-000000000046"))
/* dual interface */ _Explorers;
struct /* coclass */ Explorer;
struct __declspec(uuid("0006304f-0000-0000-c000-000000000046"))
/* dispinterface */ ExplorerEvents;
struct __declspec(uuid("0006300f-0000-0000-c000-000000000046"))
/* dispinterface */ ExplorerEvents_10;
enum OlFolderDisplayMode;
struct __declspec(uuid("00063008-0000-0000-c000-000000000046"))
/* dual interface */ _Inspectors;
struct /* coclass */ Inspector;
struct __declspec(uuid("0006307d-0000-0000-c000-000000000046"))
/* dispinterface */ InspectorEvents;
struct __declspec(uuid("0006302a-0000-0000-c000-000000000046"))
/* dispinterface */ InspectorEvents_10;
struct __declspec(uuid("0006300b-0000-0000-c000-000000000046"))
/* dual interface */ Search;
struct __declspec(uuid("0006300c-0000-0000-c000-000000000046"))
/* dual interface */ _Results;
struct __declspec(uuid("000630b1-0000-0000-c000-000000000046"))
/* dual interface */ _Reminders;
struct __declspec(uuid("000630b0-0000-0000-c000-000000000046"))
/* dual interface */ _Reminder;
enum OlReferenceType;
struct /* coclass */ TimeZones;
struct __declspec(uuid("000630fc-0000-0000-c000-000000000046"))
/* dual interface */ _TimeZones;
struct __declspec(uuid("00067367-0000-0000-c000-000000000046"))
/* dual interface */ _OlkTimeZoneControl;
struct __declspec(uuid("00067368-0000-0000-c000-000000000046"))
/* dispinterface */ OlkTimeZoneControlEvents;
struct /* coclass */ OlkTimeZoneControl;
enum OlBusyStatus;
enum OlDaysOfWeek;
enum OlJournalRecipientType;
enum OlMailRecipientType;
enum OlMeetingRecipientType;
enum OlMeetingResponse;
enum OlMeetingStatus;
enum OlNetMeetingType;
enum OlNoteColor;
enum OlOutlookBarViewType;
enum OlRecurrenceState;
enum OlRecurrenceType;
enum OlSaveAsType;
enum OlSortOrder;
enum OlTaskDelegationState;
enum OlTaskOwnership;
enum OlTaskRecipientType;
enum OlTaskResponse;
enum OlTaskStatus;
enum OlOfficeDocItemsType;
enum OlFormRegionMode;
enum OlFormRegionSize;
enum OlRuleExecuteOption;
enum OlDefaultExpandCollapseSetting;
enum OlMultiLine;
enum OlGridLineStyle;
enum OlIconViewType;
enum OlIconViewPlacement;
enum OlCalendarViewMode;
enum OlDayWeekTimeScale;
enum OlTimelineViewMode;
enum OlAutoPreview;
enum OlColor;
enum OlAlign;
enum OlFormatCurrency;
enum OlFormatDateTime;
enum OlFormatDuration;
enum OlFormatInteger;
enum OlFormatKeywords;
enum OlFormatNumber;
enum OlFormatPercent;
enum OlFormatYesNo;
enum OlFormatEnumeration;
enum OlFormatSmartFrom;
enum OlContextMenu;
enum OlFormatText;
enum OlGroupType;
enum OlTableContents;
enum OlFormRegionIcon;
enum OlSolutionScope;
enum OlMobileFormat;
enum OlAppointmentCopyOptions;
struct __declspec(uuid("0006304e-0000-0000-c000-000000000046"))
/* dispinterface */ ApplicationEvents;
struct __declspec(uuid("00063080-0000-0000-c000-000000000046"))
/* dual interface */ PropertyPages;
struct __declspec(uuid("00063044-0000-0000-c000-000000000046"))
/* dual interface */ RecurrencePattern;
struct __declspec(uuid("0006304c-0000-0000-c000-000000000046"))
/* dual interface */ Exceptions;
struct __declspec(uuid("0006304d-0000-0000-c000-000000000046"))
/* dual interface */ Exception;
struct /* coclass */ AppointmentItem;
struct __declspec(uuid("00063033-0000-0000-c000-000000000046"))
/* dual interface */ _AppointmentItem;
struct /* coclass */ MeetingItem;
struct __declspec(uuid("00063062-0000-0000-c000-000000000046"))
/* dual interface */ _MeetingItem;
struct __declspec(uuid("00063078-0000-0000-c000-000000000046"))
/* dispinterface */ ExplorersEvents;
struct __declspec(uuid("00063076-0000-0000-c000-000000000046"))
/* dispinterface */ FoldersEvents;
struct __declspec(uuid("00063079-0000-0000-c000-000000000046"))
/* dispinterface */ InspectorsEvents;
struct __declspec(uuid("00063077-0000-0000-c000-000000000046"))
/* dispinterface */ ItemsEvents;
struct __declspec(uuid("0006308c-0000-0000-c000-000000000046"))
/* dispinterface */ NameSpaceEvents;
struct __declspec(uuid("00063073-0000-0000-c000-000000000046"))
/* dual interface */ OutlookBarGroup;
struct __declspec(uuid("00063074-0000-0000-c000-000000000046"))
/* dual interface */ _OutlookBarShortcuts;
struct __declspec(uuid("00063075-0000-0000-c000-000000000046"))
/* dual interface */ OutlookBarShortcut;
struct __declspec(uuid("00063072-0000-0000-c000-000000000046"))
/* dual interface */ _OutlookBarGroups;
struct __declspec(uuid("0006307b-0000-0000-c000-000000000046"))
/* dispinterface */ OutlookBarGroupsEvents;
struct __declspec(uuid("00063070-0000-0000-c000-000000000046"))
/* dual interface */ _OutlookBarPane;
struct __declspec(uuid("00063071-0000-0000-c000-000000000046"))
/* dual interface */ OutlookBarStorage;
struct __declspec(uuid("0006307a-0000-0000-c000-000000000046"))
/* dispinterface */ OutlookBarPaneEvents;
struct __declspec(uuid("0006307c-0000-0000-c000-000000000046"))
/* dispinterface */ OutlookBarShortcutsEvents;
struct __declspec(uuid("0006307e-0000-0000-c000-000000000046"))
/* interface */ PropertyPage;
struct __declspec(uuid("0006307f-0000-0000-c000-000000000046"))
/* dual interface */ PropertyPageSite;
struct __declspec(uuid("0006303f-0000-0000-c000-000000000046"))
/* dual interface */ Pages;
struct __declspec(uuid("0006300e-0000-0000-c000-000000000046"))
/* dispinterface */ ApplicationEvents_10;
struct __declspec(uuid("0006302c-0000-0000-c000-000000000046"))
/* dispinterface */ ApplicationEvents_11;
struct /* coclass */ AttachmentSelection;
struct /* coclass */ Folder;
struct __declspec(uuid("000630f7-0000-0000-c000-000000000046"))
/* dispinterface */ MAPIFolderEvents_12;
struct __declspec(uuid("0006300d-0000-0000-c000-000000000046"))
/* dispinterface */ ResultsEvents;
struct __declspec(uuid("000630a5-0000-0000-c000-000000000046"))
/* dispinterface */ _ViewsEvents;
struct __declspec(uuid("000630b2-0000-0000-c000-000000000046"))
/* dispinterface */ ReminderCollectionEvents;
struct __declspec(uuid("00063020-0000-0000-c000-000000000046"))
/* dual interface */ _DocumentItem;
struct __declspec(uuid("00063025-0000-0000-c000-000000000046"))
/* dual interface */ _NoteItem;
struct __declspec(uuid("0006305b-0000-0000-c000-000000000046"))
/* dispinterface */ FormRegionEvents;
struct __declspec(uuid("000630a0-0000-0000-c000-000000000046"))
/* dual interface */ _ViewField;
struct /* coclass */ ColumnFormat;
struct __declspec(uuid("0006309e-0000-0000-c000-000000000046"))
/* dual interface */ _ColumnFormat;
struct __declspec(uuid("000630a1-0000-0000-c000-000000000046"))
/* dual interface */ _ViewFields;
struct /* coclass */ ViewField;
struct __declspec(uuid("00063097-0000-0000-c000-000000000046"))
/* dual interface */ _IconView;
struct /* coclass */ OrderFields;
struct __declspec(uuid("0006309a-0000-0000-c000-000000000046"))
/* dual interface */ _OrderFields;
struct __declspec(uuid("0006309b-0000-0000-c000-000000000046"))
/* dual interface */ _OrderField;
struct /* coclass */ OrderField;
struct __declspec(uuid("00063098-0000-0000-c000-000000000046"))
/* dual interface */ _CardView;
struct /* coclass */ ViewFields;
struct /* coclass */ ViewFont;
struct __declspec(uuid("0006309d-0000-0000-c000-000000000046"))
/* dual interface */ _ViewFont;
struct /* coclass */ AutoFormatRules;
struct __declspec(uuid("00063094-0000-0000-c000-000000000046"))
/* dual interface */ _AutoFormatRules;
struct /* coclass */ AutoFormatRule;
struct __declspec(uuid("00063093-0000-0000-c000-000000000046"))
/* dual interface */ _AutoFormatRule;
struct __declspec(uuid("0006309c-0000-0000-c000-000000000046"))
/* dual interface */ _TimelineView;
struct __declspec(uuid("000630e9-0000-0000-c000-000000000046"))
/* dual interface */ _MailModule;
struct __declspec(uuid("000630ef-0000-0000-c000-000000000046"))
/* dual interface */ _NavigationGroups;
struct __declspec(uuid("000630f0-0000-0000-c000-000000000046"))
/* dual interface */ _NavigationGroup;
struct /* coclass */ NavigationFolders;
struct __declspec(uuid("000630f1-0000-0000-c000-000000000046"))
/* dual interface */ _NavigationFolders;
struct __declspec(uuid("000630f2-0000-0000-c000-000000000046"))
/* dual interface */ _NavigationFolder;
struct /* coclass */ NavigationFolder;
struct /* coclass */ NavigationGroup;
struct __declspec(uuid("000630ea-0000-0000-c000-000000000046"))
/* dual interface */ _CalendarModule;
struct __declspec(uuid("000630eb-0000-0000-c000-000000000046"))
/* dual interface */ _ContactsModule;
struct __declspec(uuid("000630ec-0000-0000-c000-000000000046"))
/* dual interface */ _TasksModule;
struct __declspec(uuid("000630ed-0000-0000-c000-000000000046"))
/* dual interface */ _JournalModule;
struct __declspec(uuid("000630ee-0000-0000-c000-000000000046"))
/* dual interface */ _NotesModule;
struct __declspec(uuid("000630f3-0000-0000-c000-000000000046"))
/* dispinterface */ NavigationPaneEvents_12;
struct __declspec(uuid("000630f4-0000-0000-c000-000000000046"))
/* dispinterface */ NavigationGroupsEvents_12;
struct __declspec(uuid("000630a2-0000-0000-c000-000000000046"))
/* dual interface */ _BusinessCardView;
struct __declspec(uuid("00063059-0000-0000-c000-000000000046"))
/* dual interface */ _FormRegionStartup;
struct /* coclass */ FormRegion;
struct __declspec(uuid("0006305a-0000-0000-c000-000000000046"))
/* dual interface */ _FormRegion;
struct __declspec(uuid("000630ff-0000-0000-c000-000000000046"))
/* dual interface */ _SolutionsModule;
struct __declspec(uuid("00063099-0000-0000-c000-000000000046"))
/* dual interface */ _CalendarView;
struct __declspec(uuid("00063096-0000-0000-c000-000000000046"))
/* dual interface */ _TableView;
struct __declspec(uuid("000630fe-0000-0000-c000-000000000046"))
/* dual interface */ _MobileItem;
struct /* coclass */ MobileItem;
struct __declspec(uuid("00063022-0000-0000-c000-000000000046"))
/* dual interface */ _JournalItem;
struct __declspec(uuid("00063024-0000-0000-c000-000000000046"))
/* dual interface */ _PostItem;
struct __declspec(uuid("00063035-0000-0000-c000-000000000046"))
/* dual interface */ _TaskItem;
struct /* coclass */ TaskItem;
struct __declspec(uuid("00063104-0000-0000-c000-000000000046"))
/* dispinterface */ AccountSelectorEvents;
struct __declspec(uuid("00063081-0000-0000-c000-000000000046"))
/* dual interface */ _DistListItem;
struct __declspec(uuid("00063026-0000-0000-c000-000000000046"))
/* dual interface */ _ReportItem;
struct __declspec(uuid("00063023-0000-0000-c000-000000000046"))
/* dual interface */ _RemoteItem;
struct __declspec(uuid("00063036-0000-0000-c000-000000000046"))
/* dual interface */ _TaskRequestItem;
struct __declspec(uuid("00063038-0000-0000-c000-000000000046"))
/* dual interface */ _TaskRequestAcceptItem;
struct __declspec(uuid("00063039-0000-0000-c000-000000000046"))
/* dual interface */ _TaskRequestDeclineItem;
struct __declspec(uuid("00063037-0000-0000-c000-000000000046"))
/* dual interface */ _TaskRequestUpdateItem;
struct __declspec(uuid("00063107-0000-0000-c000-000000000046"))
/* dual interface */ _ConversationHeader;
struct __declspec(uuid("000630a3-0000-0000-c000-000000000046"))
/* dual interface */ _PeopleView;
struct /* coclass */ Application;
struct /* coclass */ DistListItem;
struct /* coclass */ DocumentItem;
struct /* coclass */ Explorers;
struct /* coclass */ Inspectors;
struct /* coclass */ Folders;
struct /* coclass */ Items;
struct /* coclass */ JournalItem;
struct /* coclass */ NameSpace;
struct /* coclass */ NoteItem;
struct /* coclass */ OutlookBarGroups;
struct /* coclass */ OutlookBarPane;
struct /* coclass */ OutlookBarShortcuts;
struct /* coclass */ PostItem;
struct /* coclass */ RemoteItem;
struct /* coclass */ ReportItem;
struct /* coclass */ TaskRequestAcceptItem;
struct /* coclass */ TaskRequestDeclineItem;
struct /* coclass */ TaskRequestItem;
struct /* coclass */ TaskRequestUpdateItem;
struct /* coclass */ Results;
struct /* coclass */ Views;
struct /* coclass */ Reminder;
struct /* coclass */ Reminders;
struct /* coclass */ StorageItem;
struct /* coclass */ NavigationPane;
struct /* coclass */ NavigationGroups;
struct /* coclass */ DoNotUseMeFolder;
struct /* coclass */ TimelineView;
struct /* coclass */ MailModule;
struct /* coclass */ CalendarModule;
struct /* coclass */ ContactsModule;
struct /* coclass */ TasksModule;
struct /* coclass */ JournalModule;
struct /* coclass */ NotesModule;
struct /* coclass */ TableView;
struct /* coclass */ IconView;
struct /* coclass */ CardView;
struct /* coclass */ CalendarView;
struct /* coclass */ BusinessCardView;
struct /* coclass */ FormRegionStartup;
struct /* coclass */ TimeZone;
struct /* coclass */ SolutionsModule;
struct /* coclass */ Conversation;
struct /* coclass */ AccountSelector;
struct /* coclass */ ConversationHeader;
struct /* coclass */ PeopleView;

//
// Smart pointer typedef declarations
//

_COM_SMARTPTR_TYPEDEF(_IRecipientControl, __uuidof(_IRecipientControl));
_COM_SMARTPTR_TYPEDEF(_DRecipientControl, __uuidof(_DRecipientControl));
_COM_SMARTPTR_TYPEDEF(_DRecipientControlEvents, __uuidof(_DRecipientControlEvents));
_COM_SMARTPTR_TYPEDEF(_IDocSiteControl, __uuidof(_IDocSiteControl));
_COM_SMARTPTR_TYPEDEF(_DDocSiteControl, __uuidof(_DDocSiteControl));
_COM_SMARTPTR_TYPEDEF(_DDocSiteControlEvents, __uuidof(_DDocSiteControlEvents));
_COM_SMARTPTR_TYPEDEF(OlkControl, __uuidof(OlkControl));
_COM_SMARTPTR_TYPEDEF(_OlkTextBox, __uuidof(_OlkTextBox));
_COM_SMARTPTR_TYPEDEF(OlkTextBoxEvents, __uuidof(OlkTextBoxEvents));
_COM_SMARTPTR_TYPEDEF(_OlkLabel, __uuidof(_OlkLabel));
_COM_SMARTPTR_TYPEDEF(OlkLabelEvents, __uuidof(OlkLabelEvents));
_COM_SMARTPTR_TYPEDEF(_OlkCommandButton, __uuidof(_OlkCommandButton));
_COM_SMARTPTR_TYPEDEF(OlkCommandButtonEvents, __uuidof(OlkCommandButtonEvents));
_COM_SMARTPTR_TYPEDEF(_OlkCheckBox, __uuidof(_OlkCheckBox));
_COM_SMARTPTR_TYPEDEF(OlkCheckBoxEvents, __uuidof(OlkCheckBoxEvents));
_COM_SMARTPTR_TYPEDEF(_OlkOptionButton, __uuidof(_OlkOptionButton));
_COM_SMARTPTR_TYPEDEF(OlkOptionButtonEvents, __uuidof(OlkOptionButtonEvents));
_COM_SMARTPTR_TYPEDEF(_OlkComboBox, __uuidof(_OlkComboBox));
_COM_SMARTPTR_TYPEDEF(OlkComboBoxEvents, __uuidof(OlkComboBoxEvents));
_COM_SMARTPTR_TYPEDEF(_OlkListBox, __uuidof(_OlkListBox));
_COM_SMARTPTR_TYPEDEF(OlkListBoxEvents, __uuidof(OlkListBoxEvents));
_COM_SMARTPTR_TYPEDEF(_OlkInfoBar, __uuidof(_OlkInfoBar));
_COM_SMARTPTR_TYPEDEF(OlkInfoBarEvents, __uuidof(OlkInfoBarEvents));
_COM_SMARTPTR_TYPEDEF(_OlkContactPhoto, __uuidof(_OlkContactPhoto));
_COM_SMARTPTR_TYPEDEF(OlkContactPhotoEvents, __uuidof(OlkContactPhotoEvents));
_COM_SMARTPTR_TYPEDEF(_OlkBusinessCardControl, __uuidof(_OlkBusinessCardControl));
_COM_SMARTPTR_TYPEDEF(OlkBusinessCardControlEvents, __uuidof(OlkBusinessCardControlEvents));
_COM_SMARTPTR_TYPEDEF(_OlkPageControl, __uuidof(_OlkPageControl));
_COM_SMARTPTR_TYPEDEF(OlkPageControlEvents, __uuidof(OlkPageControlEvents));
_COM_SMARTPTR_TYPEDEF(_OlkDateControl, __uuidof(_OlkDateControl));
_COM_SMARTPTR_TYPEDEF(OlkDateControlEvents, __uuidof(OlkDateControlEvents));
_COM_SMARTPTR_TYPEDEF(_OlkTimeControl, __uuidof(_OlkTimeControl));
_COM_SMARTPTR_TYPEDEF(OlkTimeControlEvents, __uuidof(OlkTimeControlEvents));
_COM_SMARTPTR_TYPEDEF(_OlkCategory, __uuidof(_OlkCategory));
_COM_SMARTPTR_TYPEDEF(OlkCategoryEvents, __uuidof(OlkCategoryEvents));
_COM_SMARTPTR_TYPEDEF(_OlkFrameHeader, __uuidof(_OlkFrameHeader));
_COM_SMARTPTR_TYPEDEF(OlkFrameHeaderEvents, __uuidof(OlkFrameHeaderEvents));
_COM_SMARTPTR_TYPEDEF(_OlkSenderPhoto, __uuidof(_OlkSenderPhoto));
_COM_SMARTPTR_TYPEDEF(OlkSenderPhotoEvents, __uuidof(OlkSenderPhotoEvents));
_COM_SMARTPTR_TYPEDEF(ItemEvents, __uuidof(ItemEvents));
_COM_SMARTPTR_TYPEDEF(ItemEvents_10, __uuidof(ItemEvents_10));
_COM_SMARTPTR_TYPEDEF(SyncObjectEvents, __uuidof(SyncObjectEvents));
_COM_SMARTPTR_TYPEDEF(AccountsEvents, __uuidof(AccountsEvents));
_COM_SMARTPTR_TYPEDEF(StoresEvents_12, __uuidof(StoresEvents_12));
_COM_SMARTPTR_TYPEDEF(ExplorerEvents, __uuidof(ExplorerEvents));
_COM_SMARTPTR_TYPEDEF(ExplorerEvents_10, __uuidof(ExplorerEvents_10));
_COM_SMARTPTR_TYPEDEF(InspectorEvents, __uuidof(InspectorEvents));
_COM_SMARTPTR_TYPEDEF(InspectorEvents_10, __uuidof(InspectorEvents_10));
_COM_SMARTPTR_TYPEDEF(_OlkTimeZoneControl, __uuidof(_OlkTimeZoneControl));
_COM_SMARTPTR_TYPEDEF(OlkTimeZoneControlEvents, __uuidof(OlkTimeZoneControlEvents));
_COM_SMARTPTR_TYPEDEF(ApplicationEvents, __uuidof(ApplicationEvents));
_COM_SMARTPTR_TYPEDEF(ExplorersEvents, __uuidof(ExplorersEvents));
_COM_SMARTPTR_TYPEDEF(FoldersEvents, __uuidof(FoldersEvents));
_COM_SMARTPTR_TYPEDEF(InspectorsEvents, __uuidof(InspectorsEvents));
_COM_SMARTPTR_TYPEDEF(ItemsEvents, __uuidof(ItemsEvents));
_COM_SMARTPTR_TYPEDEF(NameSpaceEvents, __uuidof(NameSpaceEvents));
_COM_SMARTPTR_TYPEDEF(OutlookBarGroupsEvents, __uuidof(OutlookBarGroupsEvents));
_COM_SMARTPTR_TYPEDEF(OutlookBarPaneEvents, __uuidof(OutlookBarPaneEvents));
_COM_SMARTPTR_TYPEDEF(OutlookBarShortcutsEvents, __uuidof(OutlookBarShortcutsEvents));
_COM_SMARTPTR_TYPEDEF(PropertyPage, __uuidof(PropertyPage));
_COM_SMARTPTR_TYPEDEF(ApplicationEvents_10, __uuidof(ApplicationEvents_10));
_COM_SMARTPTR_TYPEDEF(ApplicationEvents_11, __uuidof(ApplicationEvents_11));
_COM_SMARTPTR_TYPEDEF(MAPIFolderEvents_12, __uuidof(MAPIFolderEvents_12));
_COM_SMARTPTR_TYPEDEF(ResultsEvents, __uuidof(ResultsEvents));
_COM_SMARTPTR_TYPEDEF(_ViewsEvents, __uuidof(_ViewsEvents));
_COM_SMARTPTR_TYPEDEF(ReminderCollectionEvents, __uuidof(ReminderCollectionEvents));
_COM_SMARTPTR_TYPEDEF(FormRegionEvents, __uuidof(FormRegionEvents));
_COM_SMARTPTR_TYPEDEF(NavigationPaneEvents_12, __uuidof(NavigationPaneEvents_12));
_COM_SMARTPTR_TYPEDEF(NavigationGroupsEvents_12, __uuidof(NavigationGroupsEvents_12));
_COM_SMARTPTR_TYPEDEF(_FormRegionStartup, __uuidof(_FormRegionStartup));
_COM_SMARTPTR_TYPEDEF(AccountSelectorEvents, __uuidof(AccountSelectorEvents));
_COM_SMARTPTR_TYPEDEF(_TimeZone, __uuidof(_TimeZone));
_COM_SMARTPTR_TYPEDEF(_Application, __uuidof(_Application));
_COM_SMARTPTR_TYPEDEF(_NameSpace, __uuidof(_NameSpace));
_COM_SMARTPTR_TYPEDEF(Action, __uuidof(Action));
_COM_SMARTPTR_TYPEDEF(Actions, __uuidof(Actions));
_COM_SMARTPTR_TYPEDEF(Attachment, __uuidof(Attachment));
_COM_SMARTPTR_TYPEDEF(Attachments, __uuidof(Attachments));
_COM_SMARTPTR_TYPEDEF(_PropertyAccessor, __uuidof(_PropertyAccessor));
_COM_SMARTPTR_TYPEDEF(FormDescription, __uuidof(FormDescription));
_COM_SMARTPTR_TYPEDEF(Selection, __uuidof(Selection));
_COM_SMARTPTR_TYPEDEF(_AttachmentSelection, __uuidof(_AttachmentSelection));
_COM_SMARTPTR_TYPEDEF(_Inspector, __uuidof(_Inspector));
_COM_SMARTPTR_TYPEDEF(UserProperty, __uuidof(UserProperty));
_COM_SMARTPTR_TYPEDEF(UserProperties, __uuidof(UserProperties));
_COM_SMARTPTR_TYPEDEF(_Items, __uuidof(_Items));
_COM_SMARTPTR_TYPEDEF(Panes, __uuidof(Panes));
_COM_SMARTPTR_TYPEDEF(_NavigationPane, __uuidof(_NavigationPane));
_COM_SMARTPTR_TYPEDEF(_NavigationModule, __uuidof(_NavigationModule));
_COM_SMARTPTR_TYPEDEF(_NavigationModules, __uuidof(_NavigationModules));
_COM_SMARTPTR_TYPEDEF(_Rule, __uuidof(_Rule));
_COM_SMARTPTR_TYPEDEF(_Rules, __uuidof(_Rules));
_COM_SMARTPTR_TYPEDEF(_RuleAction, __uuidof(_RuleAction));
_COM_SMARTPTR_TYPEDEF(_RuleActions, __uuidof(_RuleActions));
_COM_SMARTPTR_TYPEDEF(_AssignToCategoryRuleAction, __uuidof(_AssignToCategoryRuleAction));
_COM_SMARTPTR_TYPEDEF(_PlaySoundRuleAction, __uuidof(_PlaySoundRuleAction));
_COM_SMARTPTR_TYPEDEF(_MarkAsTaskRuleAction, __uuidof(_MarkAsTaskRuleAction));
_COM_SMARTPTR_TYPEDEF(_NewItemAlertRuleAction, __uuidof(_NewItemAlertRuleAction));
_COM_SMARTPTR_TYPEDEF(_RuleCondition, __uuidof(_RuleCondition));
_COM_SMARTPTR_TYPEDEF(_RuleConditions, __uuidof(_RuleConditions));
_COM_SMARTPTR_TYPEDEF(_ImportanceRuleCondition, __uuidof(_ImportanceRuleCondition));
_COM_SMARTPTR_TYPEDEF(_AccountRuleCondition, __uuidof(_AccountRuleCondition));
_COM_SMARTPTR_TYPEDEF(_TextRuleCondition, __uuidof(_TextRuleCondition));
_COM_SMARTPTR_TYPEDEF(_CategoryRuleCondition, __uuidof(_CategoryRuleCondition));
_COM_SMARTPTR_TYPEDEF(_FormNameRuleCondition, __uuidof(_FormNameRuleCondition));
_COM_SMARTPTR_TYPEDEF(_AddressRuleCondition, __uuidof(_AddressRuleCondition));
_COM_SMARTPTR_TYPEDEF(_FromRssFeedRuleCondition, __uuidof(_FromRssFeedRuleCondition));
_COM_SMARTPTR_TYPEDEF(_Category, __uuidof(_Category));
_COM_SMARTPTR_TYPEDEF(_Categories, __uuidof(_Categories));
_COM_SMARTPTR_TYPEDEF(View, __uuidof(View));
_COM_SMARTPTR_TYPEDEF(_Views, __uuidof(_Views));
_COM_SMARTPTR_TYPEDEF(_StorageItem, __uuidof(_StorageItem));
_COM_SMARTPTR_TYPEDEF(_Table, __uuidof(_Table));
_COM_SMARTPTR_TYPEDEF(_Row, __uuidof(_Row));
_COM_SMARTPTR_TYPEDEF(_Column, __uuidof(_Column));
_COM_SMARTPTR_TYPEDEF(_Columns, __uuidof(_Columns));
_COM_SMARTPTR_TYPEDEF(Link, __uuidof(Link));
_COM_SMARTPTR_TYPEDEF(Links, __uuidof(Links));
_COM_SMARTPTR_TYPEDEF(ItemProperty, __uuidof(ItemProperty));
_COM_SMARTPTR_TYPEDEF(ItemProperties, __uuidof(ItemProperties));
_COM_SMARTPTR_TYPEDEF(Conflict, __uuidof(Conflict));
_COM_SMARTPTR_TYPEDEF(Conflicts, __uuidof(Conflicts));
_COM_SMARTPTR_TYPEDEF(_SimpleItems, __uuidof(_SimpleItems));
_COM_SMARTPTR_TYPEDEF(_UserDefinedProperty, __uuidof(_UserDefinedProperty));
_COM_SMARTPTR_TYPEDEF(_UserDefinedProperties, __uuidof(_UserDefinedProperties));
_COM_SMARTPTR_TYPEDEF(_SyncObject, __uuidof(_SyncObject));
_COM_SMARTPTR_TYPEDEF(SyncObjects, __uuidof(SyncObjects));
_COM_SMARTPTR_TYPEDEF(_Inspectors, __uuidof(_Inspectors));
_COM_SMARTPTR_TYPEDEF(_Results, __uuidof(_Results));
_COM_SMARTPTR_TYPEDEF(_Reminder, __uuidof(_Reminder));
_COM_SMARTPTR_TYPEDEF(_Reminders, __uuidof(_Reminders));
_COM_SMARTPTR_TYPEDEF(_TimeZones, __uuidof(_TimeZones));
_COM_SMARTPTR_TYPEDEF(PropertyPages, __uuidof(PropertyPages));
_COM_SMARTPTR_TYPEDEF(Exception, __uuidof(Exception));
_COM_SMARTPTR_TYPEDEF(Exceptions, __uuidof(Exceptions));
_COM_SMARTPTR_TYPEDEF(RecurrencePattern, __uuidof(RecurrencePattern));
_COM_SMARTPTR_TYPEDEF(OutlookBarShortcut, __uuidof(OutlookBarShortcut));
_COM_SMARTPTR_TYPEDEF(_OutlookBarShortcuts, __uuidof(_OutlookBarShortcuts));
_COM_SMARTPTR_TYPEDEF(OutlookBarGroup, __uuidof(OutlookBarGroup));
_COM_SMARTPTR_TYPEDEF(_OutlookBarGroups, __uuidof(_OutlookBarGroups));
_COM_SMARTPTR_TYPEDEF(OutlookBarStorage, __uuidof(OutlookBarStorage));
_COM_SMARTPTR_TYPEDEF(_OutlookBarPane, __uuidof(_OutlookBarPane));
_COM_SMARTPTR_TYPEDEF(PropertyPageSite, __uuidof(PropertyPageSite));
_COM_SMARTPTR_TYPEDEF(Pages, __uuidof(Pages));
_COM_SMARTPTR_TYPEDEF(_ViewField, __uuidof(_ViewField));
_COM_SMARTPTR_TYPEDEF(_ColumnFormat, __uuidof(_ColumnFormat));
_COM_SMARTPTR_TYPEDEF(_ViewFields, __uuidof(_ViewFields));
_COM_SMARTPTR_TYPEDEF(_IconView, __uuidof(_IconView));
_COM_SMARTPTR_TYPEDEF(_OrderField, __uuidof(_OrderField));
_COM_SMARTPTR_TYPEDEF(_OrderFields, __uuidof(_OrderFields));
_COM_SMARTPTR_TYPEDEF(_CardView, __uuidof(_CardView));
_COM_SMARTPTR_TYPEDEF(_ViewFont, __uuidof(_ViewFont));
_COM_SMARTPTR_TYPEDEF(_AutoFormatRules, __uuidof(_AutoFormatRules));
_COM_SMARTPTR_TYPEDEF(_AutoFormatRule, __uuidof(_AutoFormatRule));
_COM_SMARTPTR_TYPEDEF(_TimelineView, __uuidof(_TimelineView));
_COM_SMARTPTR_TYPEDEF(_NavigationGroup, __uuidof(_NavigationGroup));
_COM_SMARTPTR_TYPEDEF(_NavigationGroups, __uuidof(_NavigationGroups));
_COM_SMARTPTR_TYPEDEF(_MailModule, __uuidof(_MailModule));
_COM_SMARTPTR_TYPEDEF(_CalendarModule, __uuidof(_CalendarModule));
_COM_SMARTPTR_TYPEDEF(_ContactsModule, __uuidof(_ContactsModule));
_COM_SMARTPTR_TYPEDEF(_TasksModule, __uuidof(_TasksModule));
_COM_SMARTPTR_TYPEDEF(_JournalModule, __uuidof(_JournalModule));
_COM_SMARTPTR_TYPEDEF(_NotesModule, __uuidof(_NotesModule));
_COM_SMARTPTR_TYPEDEF(_BusinessCardView, __uuidof(_BusinessCardView));
_COM_SMARTPTR_TYPEDEF(_FormRegion, __uuidof(_FormRegion));
_COM_SMARTPTR_TYPEDEF(_CalendarView, __uuidof(_CalendarView));
_COM_SMARTPTR_TYPEDEF(_TableView, __uuidof(_TableView));
_COM_SMARTPTR_TYPEDEF(_PeopleView, __uuidof(_PeopleView));
_COM_SMARTPTR_TYPEDEF(Recipient, __uuidof(Recipient));
_COM_SMARTPTR_TYPEDEF(Recipients, __uuidof(Recipients));
_COM_SMARTPTR_TYPEDEF(_SendRuleAction, __uuidof(_SendRuleAction));
_COM_SMARTPTR_TYPEDEF(_ToOrFromRuleCondition, __uuidof(_ToOrFromRuleCondition));
_COM_SMARTPTR_TYPEDEF(AddressEntry, __uuidof(AddressEntry));
_COM_SMARTPTR_TYPEDEF(AddressEntries, __uuidof(AddressEntries));
_COM_SMARTPTR_TYPEDEF(_Account, __uuidof(_Account));
_COM_SMARTPTR_TYPEDEF(_AccountSelector, __uuidof(_AccountSelector));
_COM_SMARTPTR_TYPEDEF(_Accounts, __uuidof(_Accounts));
_COM_SMARTPTR_TYPEDEF(_ContactItem, __uuidof(_ContactItem));
_COM_SMARTPTR_TYPEDEF(_ExchangeUser, __uuidof(_ExchangeUser));
_COM_SMARTPTR_TYPEDEF(_ExchangeDistributionList, __uuidof(_ExchangeDistributionList));
_COM_SMARTPTR_TYPEDEF(MAPIFolder, __uuidof(MAPIFolder));
_COM_SMARTPTR_TYPEDEF(_Folders, __uuidof(_Folders));
_COM_SMARTPTR_TYPEDEF(_Explorer, __uuidof(_Explorer));
_COM_SMARTPTR_TYPEDEF(_Store, __uuidof(_Store));
_COM_SMARTPTR_TYPEDEF(_MoveOrCopyRuleAction, __uuidof(_MoveOrCopyRuleAction));
_COM_SMARTPTR_TYPEDEF(AddressList, __uuidof(AddressList));
_COM_SMARTPTR_TYPEDEF(_SenderInAddressListRuleCondition, __uuidof(_SenderInAddressListRuleCondition));
_COM_SMARTPTR_TYPEDEF(_CalendarSharing, __uuidof(_CalendarSharing));
_COM_SMARTPTR_TYPEDEF(_Conversation, __uuidof(_Conversation));
_COM_SMARTPTR_TYPEDEF(_MailItem, __uuidof(_MailItem));
_COM_SMARTPTR_TYPEDEF(AddressLists, __uuidof(AddressLists));
_COM_SMARTPTR_TYPEDEF(_Stores, __uuidof(_Stores));
_COM_SMARTPTR_TYPEDEF(_SelectNamesDialog, __uuidof(_SelectNamesDialog));
_COM_SMARTPTR_TYPEDEF(_SharingItem, __uuidof(_SharingItem));
_COM_SMARTPTR_TYPEDEF(_Explorers, __uuidof(_Explorers));
_COM_SMARTPTR_TYPEDEF(Search, __uuidof(Search));
_COM_SMARTPTR_TYPEDEF(_AppointmentItem, __uuidof(_AppointmentItem));
_COM_SMARTPTR_TYPEDEF(_MeetingItem, __uuidof(_MeetingItem));
_COM_SMARTPTR_TYPEDEF(_DocumentItem, __uuidof(_DocumentItem));
_COM_SMARTPTR_TYPEDEF(_NoteItem, __uuidof(_NoteItem));
_COM_SMARTPTR_TYPEDEF(_NavigationFolder, __uuidof(_NavigationFolder));
_COM_SMARTPTR_TYPEDEF(_NavigationFolders, __uuidof(_NavigationFolders));
_COM_SMARTPTR_TYPEDEF(_SolutionsModule, __uuidof(_SolutionsModule));
_COM_SMARTPTR_TYPEDEF(_MobileItem, __uuidof(_MobileItem));
_COM_SMARTPTR_TYPEDEF(_JournalItem, __uuidof(_JournalItem));
_COM_SMARTPTR_TYPEDEF(_PostItem, __uuidof(_PostItem));
_COM_SMARTPTR_TYPEDEF(_TaskItem, __uuidof(_TaskItem));
_COM_SMARTPTR_TYPEDEF(_DistListItem, __uuidof(_DistListItem));
_COM_SMARTPTR_TYPEDEF(_ReportItem, __uuidof(_ReportItem));
_COM_SMARTPTR_TYPEDEF(_RemoteItem, __uuidof(_RemoteItem));
_COM_SMARTPTR_TYPEDEF(_TaskRequestItem, __uuidof(_TaskRequestItem));
_COM_SMARTPTR_TYPEDEF(_TaskRequestAcceptItem, __uuidof(_TaskRequestAcceptItem));
_COM_SMARTPTR_TYPEDEF(_TaskRequestDeclineItem, __uuidof(_TaskRequestDeclineItem));
_COM_SMARTPTR_TYPEDEF(_TaskRequestUpdateItem, __uuidof(_TaskRequestUpdateItem));
_COM_SMARTPTR_TYPEDEF(_ConversationHeader, __uuidof(_ConversationHeader));

//
// Type library items
//

struct __declspec(uuid("d87e7e16-6897-11ce-a6c0-00aa00608faa"))
_IRecipientControl : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ char * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ char Enabled ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ long * BackColor ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ long BackColor ) = 0;
      virtual HRESULT __stdcall get_ForeColor (
        /*[out,retval]*/ long * ForeColor ) = 0;
      virtual HRESULT __stdcall put_ForeColor (
        /*[in]*/ long ForeColor ) = 0;
      virtual HRESULT __stdcall get_ReadOnly (
        /*[out,retval]*/ char * ReadOnly ) = 0;
      virtual HRESULT __stdcall put_ReadOnly (
        /*[in]*/ char ReadOnly ) = 0;
      virtual HRESULT __stdcall get_Font (
        /*[out,retval]*/ IDispatch * * Font ) = 0;
      virtual HRESULT __stdcall put_Font (
        /*[in]*/ IDispatch * Font ) = 0;
      virtual HRESULT __stdcall get_SpecialEffect (
        /*[out,retval]*/ long * Effect ) = 0;
      virtual HRESULT __stdcall put_SpecialEffect (
        /*[in]*/ long Effect ) = 0;
};

struct __declspec(uuid("0006f025-0000-0000-c000-000000000046"))
_DRecipientControl : IDispatch
{};

struct __declspec(uuid("d87e7e17-6897-11ce-a6c0-00aa00608faa"))
_DRecipientControlEvents : IDispatch
{};

struct __declspec(uuid("0006f023-0000-0000-c000-000000000046"))
_RecipientControl;
    // [ default ] dispinterface _DRecipientControl
    // [ default, source ] dispinterface _DRecipientControlEvents

struct __declspec(uuid("43507dd0-811d-11ce-b565-00aa00608faa"))
_IDocSiteControl : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_ReadOnly (
        /*[out,retval]*/ char * ReadOnly ) = 0;
      virtual HRESULT __stdcall put_ReadOnly (
        /*[in]*/ char ReadOnly ) = 0;
      virtual HRESULT __stdcall get_SuppressAttachments (
        /*[out,retval]*/ char * SuppressAttachments ) = 0;
      virtual HRESULT __stdcall put_SuppressAttachments (
        /*[in]*/ char SuppressAttachments ) = 0;
};

struct __declspec(uuid("0006f026-0000-0000-c000-000000000046"))
_DDocSiteControl : IDispatch
{};

struct __declspec(uuid("50bb9b50-811d-11ce-b565-00aa00608faa"))
_DDocSiteControlEvents : IDispatch
{};

struct __declspec(uuid("0006f024-0000-0000-c000-000000000046"))
_DocSiteControl;
    // [ default ] dispinterface _DDocSiteControl
    // [ default, source ] dispinterface _DDocSiteControlEvents

enum __declspec(uuid("1ba5fcb6-05e9-4721-979d-3ce2c9084479"))
OlMousePointer
{
    olMousePointerDefault = 0,
    olMousePointerArrow = 1,
    olMousePointerCross = 2,
    olMousePointerIBeam = 3,
    olMousePointerSizeNESW = 6,
    olMousePointerSizeNS = 7,
    olMousePointerSizeNWSE = 8,
    olMousePointerSizeWE = 9,
    olMousePointerUpArrow = 10,
    olMousePointerHourGlass = 11,
    olMousePointerNoDrop = 12,
    olMousePointerAppStarting = 13,
    olMousePointerHelp = 14,
    olMousePointerSizeAll = 15,
    olMousePointerCustom = 99
};

enum __declspec(uuid("d1788312-edee-4673-ae33-b3c3bc0753ea"))
OlScrollBars
{
    olScrollBarsNone = 0,
    olScrollBarsHorizontal = 1,
    olScrollBarsVertical = 2,
    olScrollBarsBoth = 3
};

enum __declspec(uuid("aa3e840f-7079-4aa4-91a9-6f3546da6a95"))
OlBackStyle
{
    olBackStyleTransparent = 0,
    olBackStyleOpaque = 1
};

enum __declspec(uuid("0b17239e-c724-444b-acb1-579893197a3c"))
OlBorderStyle
{
    olBorderStyleNone = 0,
    olBorderStyleSingle = 1
};

enum __declspec(uuid("7e29fd73-540b-4f03-a890-53c6b0ae7dd1"))
OlEnterFieldBehavior
{
    olEnterFieldBehaviorSelectAll = 0,
    olEnterFieldBehaviorRecallSelection = 1
};

enum __declspec(uuid("25b06f72-02c5-4af8-8366-28c2c65cb035"))
OlDragBehavior
{
    olDragBehaviorDisabled = 0,
    olDragBehaviorEnabled = 1
};

enum __declspec(uuid("382f8459-84ad-4ceb-8705-a8f8e2dc15e1"))
OlComboBoxStyle
{
    olComboBoxStyleCombo = 0,
    olComboBoxStyleList = 2
};

enum __declspec(uuid("35a805a1-009f-4307-a6d9-3654104862b5"))
OlAlignment
{
    olAlignmentLeft = 0,
    olAlignmentRight = 1
};

enum __declspec(uuid("5a0fb768-aaf4-4e8c-9c57-89aca8b6249f"))
OlMultiSelect
{
    olMultiSelectSingle = 0,
    olMultiSelectMulti = 1,
    olMultiSelectExtended = 2
};

enum __declspec(uuid("03fadfe8-2527-46c3-9ccd-dbbbcd05156b"))
OlTextAlign
{
    olTextAlignLeft = 1,
    olTextAlignCenter = 2,
    olTextAlignRight = 3
};

enum __declspec(uuid("73628d00-b812-419f-8212-3d62079e22db"))
OlMatchEntry
{
    olMatchEntryFirstLetter = 0,
    olMatchEntryComplete = 1,
    olMatchEntryNone = 2
};

enum __declspec(uuid("35d15973-23ed-4504-866b-c0b5c937a058"))
OlPageType
{
    olPageTypePlanner = 0,
    olPageTypeTracker = 1
};

enum __declspec(uuid("4fd8b708-e730-49b5-bdd3-b807f48e5b83"))
OlTimeStyle
{
    olTimeStyleTimeOnly = 0,
    olTimeStyleTimeDuration = 1,
    olTimeStyleShortDuration = 4
};

enum __declspec(uuid("b791ac59-1e79-4007-a6a1-4a4fe62f8d03"))
OlShiftState
{
    olShiftStateShiftMask = 1,
    olShiftStateCtrlMask = 2,
    olShiftStateAltMask = 4
};

enum __declspec(uuid("0dcb2f52-1065-4fd4-bc45-1c11e6d1b279"))
OlMouseButton
{
    olMouseButtonLeft = 1,
    olMouseButtonRight = 2,
    olMouseButtonMiddle = 4
};

enum __declspec(uuid("0beab7d8-3ba8-4960-899b-096fce2ee60f"))
OlPictureAlignment
{
    olPictureAlignmentLeft = 0,
    olPictureAlignmentTop = 1
};

enum __declspec(uuid("ba5537f4-8941-4e26-871e-0d53d647b9fc"))
OlAppointmentTimeField
{
    olAppointmentTimeFieldNone = 1,
    olAppointmentTimeFieldStart = 2,
    olAppointmentTimeFieldEnd = 3
};

enum __declspec(uuid("634ee3c4-6bcb-4bd6-8997-30c9db02e223"))
OlHorizontalLayout
{
    olHorizontalLayoutAlignLeft = 0,
    olHorizontalLayoutAlignCenter = 1,
    olHorizontalLayoutAlignRight = 2,
    olHorizontalLayoutGrow = 3
};

enum __declspec(uuid("ea33f29d-6159-4e76-8a14-bceaa808fa91"))
OlVerticalLayout
{
    olVerticalLayoutAlignTop = 0,
    olVerticalLayoutAlignMiddle = 1,
    olVerticalLayoutAlignBottom = 2,
    olVerticalLayoutGrow = 3
};

struct __declspec(uuid("00067366-0000-0000-c000-000000000046"))
OlkControl : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_ItemProperty (
        /*[out,retval]*/ BSTR * ItemProperty ) = 0;
      virtual HRESULT __stdcall put_ItemProperty (
        /*[in]*/ BSTR ItemProperty ) = 0;
      virtual HRESULT __stdcall get_ControlProperty (
        /*[out,retval]*/ BSTR * ControlProperty ) = 0;
      virtual HRESULT __stdcall put_ControlProperty (
        /*[in]*/ BSTR ControlProperty ) = 0;
      virtual HRESULT __stdcall get_PossibleValues (
        /*[out,retval]*/ BSTR * PossibleValues ) = 0;
      virtual HRESULT __stdcall put_PossibleValues (
        /*[in]*/ BSTR PossibleValues ) = 0;
      virtual HRESULT __stdcall get_Format (
        /*[out,retval]*/ long * Format ) = 0;
      virtual HRESULT __stdcall put_Format (
        /*[in]*/ long Format ) = 0;
      virtual HRESULT __stdcall get_EnableAutoLayout (
        /*[out,retval]*/ VARIANT_BOOL * EnableAutoLayout ) = 0;
      virtual HRESULT __stdcall put_EnableAutoLayout (
        /*[in]*/ VARIANT_BOOL EnableAutoLayout ) = 0;
      virtual HRESULT __stdcall get_MinimumWidth (
        /*[out,retval]*/ long * MinimumWidth ) = 0;
      virtual HRESULT __stdcall put_MinimumWidth (
        /*[in]*/ long MinimumWidth ) = 0;
      virtual HRESULT __stdcall get_MinimumHeight (
        /*[out,retval]*/ long * MinimumHeight ) = 0;
      virtual HRESULT __stdcall put_MinimumHeight (
        /*[in]*/ long MinimumHeight ) = 0;
      virtual HRESULT __stdcall get_HorizontalLayout (
        /*[out,retval]*/ enum OlHorizontalLayout * HorizontalLayout ) = 0;
      virtual HRESULT __stdcall put_HorizontalLayout (
        /*[in]*/ enum OlHorizontalLayout HorizontalLayout ) = 0;
      virtual HRESULT __stdcall get_VerticalLayout (
        /*[out,retval]*/ enum OlVerticalLayout * VerticalLayout ) = 0;
      virtual HRESULT __stdcall put_VerticalLayout (
        /*[in]*/ enum OlVerticalLayout VerticalLayout ) = 0;
};

struct __declspec(uuid("000672da-0000-0000-c000-000000000046"))
_OlkTextBox : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_AutoSize (
        /*[out,retval]*/ VARIANT_BOOL * AutoSize ) = 0;
      virtual HRESULT __stdcall put_AutoSize (
        /*[in]*/ VARIANT_BOOL AutoSize ) = 0;
      virtual HRESULT __stdcall get_AutoTab (
        /*[out,retval]*/ VARIANT_BOOL * AutoTab ) = 0;
      virtual HRESULT __stdcall put_AutoTab (
        /*[in]*/ VARIANT_BOOL AutoTab ) = 0;
      virtual HRESULT __stdcall get_AutoWordSelect (
        /*[out,retval]*/ VARIANT_BOOL * AutoWordSelect ) = 0;
      virtual HRESULT __stdcall put_AutoWordSelect (
        /*[in]*/ VARIANT_BOOL AutoWordSelect ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ OLE_COLOR * BackColor ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ OLE_COLOR BackColor ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ enum OlBorderStyle * BorderStyle ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ enum OlBorderStyle BorderStyle ) = 0;
      virtual HRESULT __stdcall get_DragBehavior (
        /*[out,retval]*/ enum OlDragBehavior * DragBehavior ) = 0;
      virtual HRESULT __stdcall put_DragBehavior (
        /*[in]*/ enum OlDragBehavior DragBehavior ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_EnterFieldBehavior (
        /*[out,retval]*/ enum OlEnterFieldBehavior * EnterFieldBehavior ) = 0;
      virtual HRESULT __stdcall put_EnterFieldBehavior (
        /*[in]*/ enum OlEnterFieldBehavior EnterFieldBehavior ) = 0;
      virtual HRESULT __stdcall get_EnterKeyBehavior (
        /*[out,retval]*/ VARIANT_BOOL * EnterKeyBehavior ) = 0;
      virtual HRESULT __stdcall put_EnterKeyBehavior (
        /*[in]*/ VARIANT_BOOL EnterKeyBehavior ) = 0;
      virtual HRESULT __stdcall get_Font (
        /*[out,retval]*/ struct Font * * Font ) = 0;
      virtual HRESULT __stdcall get_ForeColor (
        /*[out,retval]*/ OLE_COLOR * ForeColor ) = 0;
      virtual HRESULT __stdcall put_ForeColor (
        /*[in]*/ OLE_COLOR ForeColor ) = 0;
      virtual HRESULT __stdcall get_HideSelection (
        /*[out,retval]*/ VARIANT_BOOL * HideSelection ) = 0;
      virtual HRESULT __stdcall put_HideSelection (
        /*[in]*/ VARIANT_BOOL HideSelection ) = 0;
      virtual HRESULT __stdcall get_IntegralHeight (
        /*[out,retval]*/ VARIANT_BOOL * IntegralHeight ) = 0;
      virtual HRESULT __stdcall put_IntegralHeight (
        /*[in]*/ VARIANT_BOOL IntegralHeight ) = 0;
      virtual HRESULT __stdcall get_Locked (
        /*[out,retval]*/ VARIANT_BOOL * Locked ) = 0;
      virtual HRESULT __stdcall put_Locked (
        /*[in]*/ VARIANT_BOOL Locked ) = 0;
      virtual HRESULT __stdcall get_MaxLength (
        /*[out,retval]*/ long * MaxLength ) = 0;
      virtual HRESULT __stdcall put_MaxLength (
        /*[in]*/ long MaxLength ) = 0;
      virtual HRESULT __stdcall get_MouseIcon (
        /*[out,retval]*/ struct Picture * * MouseIcon ) = 0;
      virtual HRESULT __stdcall put_MouseIcon (
        /*[in]*/ struct Picture * MouseIcon ) = 0;
      virtual HRESULT __stdcall get_MousePointer (
        /*[out,retval]*/ enum OlMousePointer * MousePointer ) = 0;
      virtual HRESULT __stdcall put_MousePointer (
        /*[in]*/ enum OlMousePointer MousePointer ) = 0;
      virtual HRESULT __stdcall get_MultiLine (
        /*[out,retval]*/ VARIANT_BOOL * MultiLine ) = 0;
      virtual HRESULT __stdcall put_MultiLine (
        /*[in]*/ VARIANT_BOOL MultiLine ) = 0;
      virtual HRESULT __stdcall get_PasswordChar (
        /*[out,retval]*/ BSTR * PasswordChar ) = 0;
      virtual HRESULT __stdcall put_PasswordChar (
        /*[in]*/ BSTR PasswordChar ) = 0;
      virtual HRESULT __stdcall get_Scrollbars (
        /*[out,retval]*/ enum OlScrollBars * Scrollbars ) = 0;
      virtual HRESULT __stdcall put_Scrollbars (
        /*[in]*/ enum OlScrollBars Scrollbars ) = 0;
      virtual HRESULT __stdcall get_SelectionMargin (
        /*[out,retval]*/ VARIANT_BOOL * SelectionMargin ) = 0;
      virtual HRESULT __stdcall put_SelectionMargin (
        /*[in]*/ VARIANT_BOOL SelectionMargin ) = 0;
      virtual HRESULT __stdcall get_TabKeyBehavior (
        /*[out,retval]*/ VARIANT_BOOL * TabKeyBehavior ) = 0;
      virtual HRESULT __stdcall put_TabKeyBehavior (
        /*[in]*/ VARIANT_BOOL TabKeyBehavior ) = 0;
      virtual HRESULT __stdcall get_Text (
        /*[out,retval]*/ BSTR * Text ) = 0;
      virtual HRESULT __stdcall put_Text (
        /*[in]*/ BSTR Text ) = 0;
      virtual HRESULT __stdcall get_TextAlign (
        /*[out,retval]*/ enum OlTextAlign * TextAlign ) = 0;
      virtual HRESULT __stdcall put_TextAlign (
        /*[in]*/ enum OlTextAlign TextAlign ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * Value ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT Value ) = 0;
      virtual HRESULT __stdcall get_WordWrap (
        /*[out,retval]*/ VARIANT_BOOL * WordWrap ) = 0;
      virtual HRESULT __stdcall put_WordWrap (
        /*[in]*/ VARIANT_BOOL WordWrap ) = 0;
      virtual HRESULT __stdcall get_SelStart (
        /*[out,retval]*/ long * SelStart ) = 0;
      virtual HRESULT __stdcall put_SelStart (
        /*[in]*/ long SelStart ) = 0;
      virtual HRESULT __stdcall get_SelLength (
        /*[out,retval]*/ long * SelLength ) = 0;
      virtual HRESULT __stdcall put_SelLength (
        /*[in]*/ long SelLength ) = 0;
      virtual HRESULT __stdcall get_SelText (
        /*[out,retval]*/ BSTR * SelText ) = 0;
      virtual HRESULT __stdcall Cut ( ) = 0;
      virtual HRESULT __stdcall Copy ( ) = 0;
      virtual HRESULT __stdcall Paste ( ) = 0;
      virtual HRESULT __stdcall Clear ( ) = 0;
      virtual HRESULT __stdcall get_EnableRichText (
        /*[out,retval]*/ VARIANT_BOOL * EnableRichText ) = 0;
      virtual HRESULT __stdcall put_EnableRichText (
        /*[in]*/ VARIANT_BOOL EnableRichText ) = 0;
};

struct __declspec(uuid("000672e6-0000-0000-c000-000000000046"))
OlkTextBoxEvents : IDispatch
{};

struct __declspec(uuid("0006f068-0000-0000-c000-000000000046"))
OlkTextBox;
    // [ default ] interface _OlkTextBox
    // [ default, source ] dispinterface OlkTextBoxEvents

struct __declspec(uuid("000672d9-0000-0000-c000-000000000046"))
_OlkLabel : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Accelerator (
        /*[out,retval]*/ BSTR * AcceleratorChar ) = 0;
      virtual HRESULT __stdcall put_Accelerator (
        /*[in]*/ BSTR AcceleratorChar ) = 0;
      virtual HRESULT __stdcall get_AutoSize (
        /*[out,retval]*/ VARIANT_BOOL * AutoSize ) = 0;
      virtual HRESULT __stdcall put_AutoSize (
        /*[in]*/ VARIANT_BOOL AutoSize ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ OLE_COLOR * BackColor ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ OLE_COLOR BackColor ) = 0;
      virtual HRESULT __stdcall get_BackStyle (
        /*[out,retval]*/ enum OlBackStyle * BackStyle ) = 0;
      virtual HRESULT __stdcall put_BackStyle (
        /*[in]*/ enum OlBackStyle BackStyle ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ enum OlBorderStyle * BorderStyle ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ enum OlBorderStyle BorderStyle ) = 0;
      virtual HRESULT __stdcall get_Caption (
        /*[out,retval]*/ BSTR * Caption ) = 0;
      virtual HRESULT __stdcall put_Caption (
        /*[in]*/ BSTR Caption ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_Font (
        /*[out,retval]*/ struct Font * * Font ) = 0;
      virtual HRESULT __stdcall get_ForeColor (
        /*[out,retval]*/ OLE_COLOR * ForeColor ) = 0;
      virtual HRESULT __stdcall put_ForeColor (
        /*[in]*/ OLE_COLOR ForeColor ) = 0;
      virtual HRESULT __stdcall get_MouseIcon (
        /*[out,retval]*/ struct Picture * * MouseIcon ) = 0;
      virtual HRESULT __stdcall put_MouseIcon (
        /*[in]*/ struct Picture * MouseIcon ) = 0;
      virtual HRESULT __stdcall get_MousePointer (
        /*[out,retval]*/ enum OlMousePointer * MousePointer ) = 0;
      virtual HRESULT __stdcall put_MousePointer (
        /*[in]*/ enum OlMousePointer MousePointer ) = 0;
      virtual HRESULT __stdcall get_TextAlign (
        /*[out,retval]*/ enum OlTextAlign * TextAlign ) = 0;
      virtual HRESULT __stdcall put_TextAlign (
        /*[in]*/ enum OlTextAlign TextAlign ) = 0;
      virtual HRESULT __stdcall get_WordWrap (
        /*[out,retval]*/ VARIANT_BOOL * WordWrap ) = 0;
      virtual HRESULT __stdcall put_WordWrap (
        /*[in]*/ VARIANT_BOOL WordWrap ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * Value ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT Value ) = 0;
      virtual HRESULT __stdcall get_UseHeaderColor (
        /*[out,retval]*/ VARIANT_BOOL * UseHeaderColor ) = 0;
      virtual HRESULT __stdcall put_UseHeaderColor (
        /*[in]*/ VARIANT_BOOL UseHeaderColor ) = 0;
};

struct __declspec(uuid("000672e5-0000-0000-c000-000000000046"))
OlkLabelEvents : IDispatch
{};

struct __declspec(uuid("0006f067-0000-0000-c000-000000000046"))
OlkLabel;
    // [ default ] interface _OlkLabel
    // [ default, source ] dispinterface OlkLabelEvents

struct __declspec(uuid("000672db-0000-0000-c000-000000000046"))
_OlkCommandButton : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Accelerator (
        /*[out,retval]*/ BSTR * AcceleratorChar ) = 0;
      virtual HRESULT __stdcall put_Accelerator (
        /*[in]*/ BSTR AcceleratorChar ) = 0;
      virtual HRESULT __stdcall get_AutoSize (
        /*[out,retval]*/ VARIANT_BOOL * AutoSize ) = 0;
      virtual HRESULT __stdcall put_AutoSize (
        /*[in]*/ VARIANT_BOOL AutoSize ) = 0;
      virtual HRESULT __stdcall get_Caption (
        /*[out,retval]*/ BSTR * Caption ) = 0;
      virtual HRESULT __stdcall put_Caption (
        /*[in]*/ BSTR Caption ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_Font (
        /*[out,retval]*/ struct Font * * Font ) = 0;
      virtual HRESULT __stdcall get_MouseIcon (
        /*[out,retval]*/ struct Picture * * MouseIcon ) = 0;
      virtual HRESULT __stdcall put_MouseIcon (
        /*[in]*/ struct Picture * MouseIcon ) = 0;
      virtual HRESULT __stdcall get_MousePointer (
        /*[out,retval]*/ enum OlMousePointer * MousePointer ) = 0;
      virtual HRESULT __stdcall put_MousePointer (
        /*[in]*/ enum OlMousePointer MousePointer ) = 0;
      virtual HRESULT __stdcall get_WordWrap (
        /*[out,retval]*/ VARIANT_BOOL * WordWrap ) = 0;
      virtual HRESULT __stdcall put_WordWrap (
        /*[in]*/ VARIANT_BOOL WordWrap ) = 0;
      virtual HRESULT __stdcall get_TextAlign (
        /*[out,retval]*/ enum OlTextAlign * TextAlign ) = 0;
      virtual HRESULT __stdcall put_TextAlign (
        /*[in]*/ enum OlTextAlign TextAlign ) = 0;
      virtual HRESULT __stdcall get_Picture (
        /*[out,retval]*/ struct Picture * * Picture ) = 0;
      virtual HRESULT __stdcall put_Picture (
        /*[in]*/ struct Picture * Picture ) = 0;
      virtual HRESULT __stdcall get_PictureAlignment (
        /*[out,retval]*/ enum OlPictureAlignment * PictureAlignment ) = 0;
      virtual HRESULT __stdcall put_PictureAlignment (
        /*[in]*/ enum OlPictureAlignment PictureAlignment ) = 0;
      virtual HRESULT __stdcall get_DisplayDropArrow (
        /*[out,retval]*/ VARIANT_BOOL * DisplayDropArrow ) = 0;
      virtual HRESULT __stdcall put_DisplayDropArrow (
        /*[in]*/ VARIANT_BOOL DisplayDropArrow ) = 0;
};

struct __declspec(uuid("000672e0-0000-0000-c000-000000000046"))
OlkCommandButtonEvents : IDispatch
{};

struct __declspec(uuid("0006f04a-0000-0000-c000-000000000046"))
OlkCommandButton;
    // [ default ] interface _OlkCommandButton
    // [ default, source ] dispinterface OlkCommandButtonEvents

struct __declspec(uuid("000672dd-0000-0000-c000-000000000046"))
_OlkCheckBox : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Accelerator (
        /*[out,retval]*/ BSTR * AcceleratorChar ) = 0;
      virtual HRESULT __stdcall put_Accelerator (
        /*[in]*/ BSTR AcceleratorChar ) = 0;
      virtual HRESULT __stdcall get_Alignment (
        /*[out,retval]*/ enum OlAlignment * Alignment ) = 0;
      virtual HRESULT __stdcall put_Alignment (
        /*[in]*/ enum OlAlignment Alignment ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ OLE_COLOR * BackColor ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ OLE_COLOR BackColor ) = 0;
      virtual HRESULT __stdcall get_BackStyle (
        /*[out,retval]*/ enum OlBackStyle * BackStyle ) = 0;
      virtual HRESULT __stdcall put_BackStyle (
        /*[in]*/ enum OlBackStyle BackStyle ) = 0;
      virtual HRESULT __stdcall get_Caption (
        /*[out,retval]*/ BSTR * Caption ) = 0;
      virtual HRESULT __stdcall put_Caption (
        /*[in]*/ BSTR Caption ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_Font (
        /*[out,retval]*/ struct Font * * Font ) = 0;
      virtual HRESULT __stdcall get_ForeColor (
        /*[out,retval]*/ OLE_COLOR * ForeColor ) = 0;
      virtual HRESULT __stdcall put_ForeColor (
        /*[in]*/ OLE_COLOR ForeColor ) = 0;
      virtual HRESULT __stdcall get_MouseIcon (
        /*[out,retval]*/ struct Picture * * MouseIcon ) = 0;
      virtual HRESULT __stdcall put_MouseIcon (
        /*[in]*/ struct Picture * MouseIcon ) = 0;
      virtual HRESULT __stdcall get_MousePointer (
        /*[out,retval]*/ enum OlMousePointer * MousePointer ) = 0;
      virtual HRESULT __stdcall put_MousePointer (
        /*[in]*/ enum OlMousePointer MousePointer ) = 0;
      virtual HRESULT __stdcall get_TripleState (
        /*[out,retval]*/ VARIANT_BOOL * TripleState ) = 0;
      virtual HRESULT __stdcall put_TripleState (
        /*[in]*/ VARIANT_BOOL TripleState ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * Value ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT Value ) = 0;
      virtual HRESULT __stdcall get_WordWrap (
        /*[out,retval]*/ VARIANT_BOOL * WordWrap ) = 0;
      virtual HRESULT __stdcall put_WordWrap (
        /*[in]*/ VARIANT_BOOL WordWrap ) = 0;
};

struct __declspec(uuid("000672e2-0000-0000-c000-000000000046"))
OlkCheckBoxEvents : IDispatch
{};

struct __declspec(uuid("0006f04c-0000-0000-c000-000000000046"))
OlkCheckBox;
    // [ default ] interface _OlkCheckBox
    // [ default, source ] dispinterface OlkCheckBoxEvents

struct __declspec(uuid("000672dc-0000-0000-c000-000000000046"))
_OlkOptionButton : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Accelerator (
        /*[out,retval]*/ BSTR * AcceleratorChar ) = 0;
      virtual HRESULT __stdcall put_Accelerator (
        /*[in]*/ BSTR AcceleratorChar ) = 0;
      virtual HRESULT __stdcall get_Alignment (
        /*[out,retval]*/ enum OlAlignment * Alignment ) = 0;
      virtual HRESULT __stdcall put_Alignment (
        /*[in]*/ enum OlAlignment Alignment ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ OLE_COLOR * BackColor ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ OLE_COLOR BackColor ) = 0;
      virtual HRESULT __stdcall get_BackStyle (
        /*[out,retval]*/ enum OlBackStyle * BackStyle ) = 0;
      virtual HRESULT __stdcall put_BackStyle (
        /*[in]*/ enum OlBackStyle BackStyle ) = 0;
      virtual HRESULT __stdcall get_Caption (
        /*[out,retval]*/ BSTR * Caption ) = 0;
      virtual HRESULT __stdcall put_Caption (
        /*[in]*/ BSTR Caption ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_Font (
        /*[out,retval]*/ struct Font * * Font ) = 0;
      virtual HRESULT __stdcall get_ForeColor (
        /*[out,retval]*/ OLE_COLOR * ForeColor ) = 0;
      virtual HRESULT __stdcall put_ForeColor (
        /*[in]*/ OLE_COLOR ForeColor ) = 0;
      virtual HRESULT __stdcall get_GroupName (
        /*[out,retval]*/ BSTR * GroupName ) = 0;
      virtual HRESULT __stdcall put_GroupName (
        /*[in]*/ BSTR GroupName ) = 0;
      virtual HRESULT __stdcall get_MouseIcon (
        /*[out,retval]*/ struct Picture * * MouseIcon ) = 0;
      virtual HRESULT __stdcall put_MouseIcon (
        /*[in]*/ struct Picture * MouseIcon ) = 0;
      virtual HRESULT __stdcall get_MousePointer (
        /*[out,retval]*/ enum OlMousePointer * MousePointer ) = 0;
      virtual HRESULT __stdcall put_MousePointer (
        /*[in]*/ enum OlMousePointer MousePointer ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * Value ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT Value ) = 0;
      virtual HRESULT __stdcall get_WordWrap (
        /*[out,retval]*/ VARIANT_BOOL * WordWrap ) = 0;
      virtual HRESULT __stdcall put_WordWrap (
        /*[in]*/ VARIANT_BOOL WordWrap ) = 0;
};

struct __declspec(uuid("000672e1-0000-0000-c000-000000000046"))
OlkOptionButtonEvents : IDispatch
{};

struct __declspec(uuid("0006f04b-0000-0000-c000-000000000046"))
OlkOptionButton;
    // [ default ] interface _OlkOptionButton
    // [ default, source ] dispinterface OlkOptionButtonEvents

struct __declspec(uuid("000672de-0000-0000-c000-000000000046"))
_OlkComboBox : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_AutoSize (
        /*[out,retval]*/ VARIANT_BOOL * AutoSize ) = 0;
      virtual HRESULT __stdcall put_AutoSize (
        /*[in]*/ VARIANT_BOOL AutoSize ) = 0;
      virtual HRESULT __stdcall get_AutoTab (
        /*[out,retval]*/ VARIANT_BOOL * AutoTab ) = 0;
      virtual HRESULT __stdcall put_AutoTab (
        /*[in]*/ VARIANT_BOOL AutoTab ) = 0;
      virtual HRESULT __stdcall get_AutoWordSelect (
        /*[out,retval]*/ VARIANT_BOOL * AutoWordSelect ) = 0;
      virtual HRESULT __stdcall put_AutoWordSelect (
        /*[in]*/ VARIANT_BOOL AutoWordSelect ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ OLE_COLOR * BackColor ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ OLE_COLOR BackColor ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ enum OlBorderStyle * BorderStyle ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ enum OlBorderStyle BorderStyle ) = 0;
      virtual HRESULT __stdcall get_DragBehavior (
        /*[out,retval]*/ enum OlDragBehavior * DragBehavior ) = 0;
      virtual HRESULT __stdcall put_DragBehavior (
        /*[in]*/ enum OlDragBehavior DragBehavior ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_EnterFieldBehavior (
        /*[out,retval]*/ enum OlEnterFieldBehavior * EnterFieldBehavior ) = 0;
      virtual HRESULT __stdcall put_EnterFieldBehavior (
        /*[in]*/ enum OlEnterFieldBehavior EnterFieldBehavior ) = 0;
      virtual HRESULT __stdcall get_Font (
        /*[out,retval]*/ struct Font * * Font ) = 0;
      virtual HRESULT __stdcall get_ForeColor (
        /*[out,retval]*/ OLE_COLOR * ForeColor ) = 0;
      virtual HRESULT __stdcall put_ForeColor (
        /*[in]*/ OLE_COLOR ForeColor ) = 0;
      virtual HRESULT __stdcall get_HideSelection (
        /*[out,retval]*/ VARIANT_BOOL * HideSelection ) = 0;
      virtual HRESULT __stdcall put_HideSelection (
        /*[in]*/ VARIANT_BOOL HideSelection ) = 0;
      virtual HRESULT __stdcall get_Locked (
        /*[out,retval]*/ VARIANT_BOOL * Locked ) = 0;
      virtual HRESULT __stdcall put_Locked (
        /*[in]*/ VARIANT_BOOL Locked ) = 0;
      virtual HRESULT __stdcall get_MaxLength (
        /*[out,retval]*/ long * MaxLength ) = 0;
      virtual HRESULT __stdcall put_MaxLength (
        /*[in]*/ long MaxLength ) = 0;
      virtual HRESULT __stdcall get_MouseIcon (
        /*[out,retval]*/ struct Picture * * MouseIcon ) = 0;
      virtual HRESULT __stdcall put_MouseIcon (
        /*[in]*/ struct Picture * MouseIcon ) = 0;
      virtual HRESULT __stdcall get_MousePointer (
        /*[out,retval]*/ enum OlMousePointer * MousePointer ) = 0;
      virtual HRESULT __stdcall put_MousePointer (
        /*[in]*/ enum OlMousePointer MousePointer ) = 0;
      virtual HRESULT __stdcall get_SelectionMargin (
        /*[out,retval]*/ VARIANT_BOOL * SelectionMargin ) = 0;
      virtual HRESULT __stdcall put_SelectionMargin (
        /*[in]*/ VARIANT_BOOL SelectionMargin ) = 0;
      virtual HRESULT __stdcall get_Style (
        /*[out,retval]*/ enum OlComboBoxStyle * Style ) = 0;
      virtual HRESULT __stdcall put_Style (
        /*[in]*/ enum OlComboBoxStyle Style ) = 0;
      virtual HRESULT __stdcall get_Text (
        /*[out,retval]*/ BSTR * Text ) = 0;
      virtual HRESULT __stdcall put_Text (
        /*[in]*/ BSTR Text ) = 0;
      virtual HRESULT __stdcall get_TextAlign (
        /*[out,retval]*/ enum OlTextAlign * TextAlign ) = 0;
      virtual HRESULT __stdcall put_TextAlign (
        /*[in]*/ enum OlTextAlign TextAlign ) = 0;
      virtual HRESULT __stdcall get_TopIndex (
        /*[out,retval]*/ long * TopIndex ) = 0;
      virtual HRESULT __stdcall put_TopIndex (
        /*[in]*/ long TopIndex ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * Value ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT Value ) = 0;
      virtual HRESULT __stdcall get_ListIndex (
        /*[out,retval]*/ long * ListIndex ) = 0;
      virtual HRESULT __stdcall put_ListIndex (
        /*[in]*/ long ListIndex ) = 0;
      virtual HRESULT __stdcall get_ListCount (
        /*[out,retval]*/ long * ListCount ) = 0;
      virtual HRESULT __stdcall get_SelStart (
        /*[out,retval]*/ long * SelStart ) = 0;
      virtual HRESULT __stdcall put_SelStart (
        /*[in]*/ long SelStart ) = 0;
      virtual HRESULT __stdcall get_SelLength (
        /*[out,retval]*/ long * SelLength ) = 0;
      virtual HRESULT __stdcall put_SelLength (
        /*[in]*/ long SelLength ) = 0;
      virtual HRESULT __stdcall get_SelText (
        /*[out,retval]*/ BSTR * SelText ) = 0;
      virtual HRESULT __stdcall GetItem (
        /*[in]*/ long Index,
        /*[out,retval]*/ BSTR * Item ) = 0;
      virtual HRESULT __stdcall SetItem (
        /*[in]*/ long Index,
        /*[in]*/ BSTR Item ) = 0;
      virtual HRESULT __stdcall Cut ( ) = 0;
      virtual HRESULT __stdcall Copy ( ) = 0;
      virtual HRESULT __stdcall Paste ( ) = 0;
      virtual HRESULT __stdcall Clear ( ) = 0;
      virtual HRESULT __stdcall AddItem (
        /*[in]*/ BSTR ItemText,
        /*[in]*/ VARIANT Index = vtMissing ) = 0;
      virtual HRESULT __stdcall RemoveItem (
        /*[in]*/ long Index ) = 0;
      virtual HRESULT __stdcall DropDown ( ) = 0;
};

struct __declspec(uuid("000672e3-0000-0000-c000-000000000046"))
OlkComboBoxEvents : IDispatch
{};

struct __declspec(uuid("0006f04d-0000-0000-c000-000000000046"))
OlkComboBox;
    // [ default ] interface _OlkComboBox
    // [ default, source ] dispinterface OlkComboBoxEvents

struct __declspec(uuid("000672df-0000-0000-c000-000000000046"))
_OlkListBox : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ enum OlBorderStyle * BorderStyle ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ enum OlBorderStyle BorderStyle ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ OLE_COLOR * BackColor ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ OLE_COLOR BackColor ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_Font (
        /*[out,retval]*/ struct Font * * Font ) = 0;
      virtual HRESULT __stdcall get_ForeColor (
        /*[out,retval]*/ OLE_COLOR * ForeColor ) = 0;
      virtual HRESULT __stdcall put_ForeColor (
        /*[in]*/ OLE_COLOR ForeColor ) = 0;
      virtual HRESULT __stdcall get_Locked (
        /*[out,retval]*/ VARIANT_BOOL * Locked ) = 0;
      virtual HRESULT __stdcall put_Locked (
        /*[in]*/ VARIANT_BOOL Locked ) = 0;
      virtual HRESULT __stdcall get_MatchEntry (
        /*[out,retval]*/ enum OlMatchEntry * MatchEntry ) = 0;
      virtual HRESULT __stdcall put_MatchEntry (
        /*[in]*/ enum OlMatchEntry MatchEntry ) = 0;
      virtual HRESULT __stdcall get_MouseIcon (
        /*[out,retval]*/ struct Picture * * MouseIcon ) = 0;
      virtual HRESULT __stdcall put_MouseIcon (
        /*[in]*/ struct Picture * MouseIcon ) = 0;
      virtual HRESULT __stdcall get_MousePointer (
        /*[out,retval]*/ enum OlMousePointer * MousePointer ) = 0;
      virtual HRESULT __stdcall put_MousePointer (
        /*[in]*/ enum OlMousePointer MousePointer ) = 0;
      virtual HRESULT __stdcall get_MultiSelect (
        /*[out,retval]*/ enum OlMultiSelect * MultiSelect ) = 0;
      virtual HRESULT __stdcall put_MultiSelect (
        /*[in]*/ enum OlMultiSelect MultiSelect ) = 0;
      virtual HRESULT __stdcall get_Text (
        /*[out,retval]*/ BSTR * Text ) = 0;
      virtual HRESULT __stdcall put_Text (
        /*[in]*/ BSTR Text ) = 0;
      virtual HRESULT __stdcall get_TextAlign (
        /*[out,retval]*/ enum OlTextAlign * TextAlign ) = 0;
      virtual HRESULT __stdcall put_TextAlign (
        /*[in]*/ enum OlTextAlign TextAlign ) = 0;
      virtual HRESULT __stdcall get_TopIndex (
        /*[out,retval]*/ long * TopIndex ) = 0;
      virtual HRESULT __stdcall put_TopIndex (
        /*[in]*/ long TopIndex ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * Value ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT Value ) = 0;
      virtual HRESULT __stdcall get_ListIndex (
        /*[out,retval]*/ long * ListIndex ) = 0;
      virtual HRESULT __stdcall put_ListIndex (
        /*[in]*/ long ListIndex ) = 0;
      virtual HRESULT __stdcall get_ListCount (
        /*[out,retval]*/ long * ListCount ) = 0;
      virtual HRESULT __stdcall GetItem (
        /*[in]*/ long Index,
        /*[out,retval]*/ BSTR * Item ) = 0;
      virtual HRESULT __stdcall SetItem (
        /*[in]*/ long Index,
        /*[in]*/ BSTR Item ) = 0;
      virtual HRESULT __stdcall GetSelected (
        /*[in]*/ long Index,
        /*[out,retval]*/ VARIANT_BOOL * Selected ) = 0;
      virtual HRESULT __stdcall SetSelected (
        /*[in]*/ long Index,
        /*[in]*/ VARIANT_BOOL Selected ) = 0;
      virtual HRESULT __stdcall Copy ( ) = 0;
      virtual HRESULT __stdcall Clear ( ) = 0;
      virtual HRESULT __stdcall AddItem (
        /*[in]*/ BSTR ItemText,
        /*[in]*/ VARIANT Index = vtMissing ) = 0;
      virtual HRESULT __stdcall RemoveItem (
        /*[in]*/ long Index ) = 0;
};

struct __declspec(uuid("000672e4-0000-0000-c000-000000000046"))
OlkListBoxEvents : IDispatch
{};

struct __declspec(uuid("0006f04e-0000-0000-c000-000000000046"))
OlkListBox;
    // [ default ] interface _OlkListBox
    // [ default, source ] dispinterface OlkListBoxEvents

struct __declspec(uuid("000672f6-0000-0000-c000-000000000046"))
_OlkInfoBar : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_MouseIcon (
        /*[out,retval]*/ struct Picture * * MouseIcon ) = 0;
      virtual HRESULT __stdcall put_MouseIcon (
        /*[in]*/ struct Picture * MouseIcon ) = 0;
      virtual HRESULT __stdcall get_MousePointer (
        /*[out,retval]*/ enum OlMousePointer * MousePointer ) = 0;
      virtual HRESULT __stdcall put_MousePointer (
        /*[in]*/ enum OlMousePointer MousePointer ) = 0;
};

struct __declspec(uuid("000672f7-0000-0000-c000-000000000046"))
OlkInfoBarEvents : IDispatch
{};

struct __declspec(uuid("0006f054-0000-0000-c000-000000000046"))
OlkInfoBar;
    // [ default ] interface _OlkInfoBar
    // [ default, source ] dispinterface OlkInfoBarEvents

struct __declspec(uuid("000672eb-0000-0000-c000-000000000046"))
_OlkContactPhoto : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_MouseIcon (
        /*[out,retval]*/ struct Picture * * MouseIcon ) = 0;
      virtual HRESULT __stdcall put_MouseIcon (
        /*[in]*/ struct Picture * MouseIcon ) = 0;
      virtual HRESULT __stdcall get_MousePointer (
        /*[out,retval]*/ enum OlMousePointer * MousePointer ) = 0;
      virtual HRESULT __stdcall put_MousePointer (
        /*[in]*/ enum OlMousePointer MousePointer ) = 0;
};

struct __declspec(uuid("000672ec-0000-0000-c000-000000000046"))
OlkContactPhotoEvents : IDispatch
{};

struct __declspec(uuid("0006f04f-0000-0000-c000-000000000046"))
OlkContactPhoto;
    // [ default ] interface _OlkContactPhoto
    // [ default, source ] dispinterface OlkContactPhotoEvents

struct __declspec(uuid("000672ed-0000-0000-c000-000000000046"))
_OlkBusinessCardControl : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_MouseIcon (
        /*[out,retval]*/ struct Picture * * MouseIcon ) = 0;
      virtual HRESULT __stdcall put_MouseIcon (
        /*[in]*/ struct Picture * MouseIcon ) = 0;
      virtual HRESULT __stdcall get_MousePointer (
        /*[out,retval]*/ enum OlMousePointer * MousePointer ) = 0;
      virtual HRESULT __stdcall put_MousePointer (
        /*[in]*/ enum OlMousePointer MousePointer ) = 0;
};

struct __declspec(uuid("000672ee-0000-0000-c000-000000000046"))
OlkBusinessCardControlEvents : IDispatch
{};

struct __declspec(uuid("0006f050-0000-0000-c000-000000000046"))
OlkBusinessCardControl;
    // [ default ] interface _OlkBusinessCardControl
    // [ default, source ] dispinterface OlkBusinessCardControlEvents

struct __declspec(uuid("000672f8-0000-0000-c000-000000000046"))
_OlkPageControl : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Page (
        /*[out,retval]*/ enum OlPageType * PageID ) = 0;
      virtual HRESULT __stdcall put_Page (
        /*[in]*/ enum OlPageType PageID ) = 0;
};

struct __declspec(uuid("000672f9-0000-0000-c000-000000000046"))
OlkPageControlEvents : IDispatch
{};

struct __declspec(uuid("0006f055-0000-0000-c000-000000000046"))
OlkPageControl;
    // [ default ] interface _OlkPageControl
    // [ default, source ] dispinterface OlkPageControlEvents

struct __declspec(uuid("000672fa-0000-0000-c000-000000000046"))
_OlkDateControl : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_AutoSize (
        /*[out,retval]*/ VARIANT_BOOL * AutoSize ) = 0;
      virtual HRESULT __stdcall put_AutoSize (
        /*[in]*/ VARIANT_BOOL AutoSize ) = 0;
      virtual HRESULT __stdcall get_AutoWordSelect (
        /*[out,retval]*/ VARIANT_BOOL * AutoWordSelect ) = 0;
      virtual HRESULT __stdcall put_AutoWordSelect (
        /*[in]*/ VARIANT_BOOL AutoWordSelect ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ OLE_COLOR * BackColor ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ OLE_COLOR BackColor ) = 0;
      virtual HRESULT __stdcall get_BackStyle (
        /*[out,retval]*/ enum OlBackStyle * BackStyle ) = 0;
      virtual HRESULT __stdcall put_BackStyle (
        /*[in]*/ enum OlBackStyle BackStyle ) = 0;
      virtual HRESULT __stdcall get_Date (
        /*[out,retval]*/ DATE * Date ) = 0;
      virtual HRESULT __stdcall put_Date (
        /*[in]*/ DATE Date ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_EnterFieldBehavior (
        /*[out,retval]*/ enum OlEnterFieldBehavior * EnterFieldBehavior ) = 0;
      virtual HRESULT __stdcall put_EnterFieldBehavior (
        /*[in]*/ enum OlEnterFieldBehavior EnterFieldBehavior ) = 0;
      virtual HRESULT __stdcall get_Font (
        /*[out,retval]*/ struct Font * * Font ) = 0;
      virtual HRESULT __stdcall get_ForeColor (
        /*[out,retval]*/ OLE_COLOR * ForeColor ) = 0;
      virtual HRESULT __stdcall put_ForeColor (
        /*[in]*/ OLE_COLOR ForeColor ) = 0;
      virtual HRESULT __stdcall get_HideSelection (
        /*[out,retval]*/ VARIANT_BOOL * HideSelection ) = 0;
      virtual HRESULT __stdcall put_HideSelection (
        /*[in]*/ VARIANT_BOOL HideSelection ) = 0;
      virtual HRESULT __stdcall get_Locked (
        /*[out,retval]*/ VARIANT_BOOL * Locked ) = 0;
      virtual HRESULT __stdcall put_Locked (
        /*[in]*/ VARIANT_BOOL Locked ) = 0;
      virtual HRESULT __stdcall get_MouseIcon (
        /*[out,retval]*/ struct Picture * * MouseIcon ) = 0;
      virtual HRESULT __stdcall put_MouseIcon (
        /*[in]*/ struct Picture * MouseIcon ) = 0;
      virtual HRESULT __stdcall get_MousePointer (
        /*[out,retval]*/ enum OlMousePointer * MousePointer ) = 0;
      virtual HRESULT __stdcall put_MousePointer (
        /*[in]*/ enum OlMousePointer MousePointer ) = 0;
      virtual HRESULT __stdcall get_ShowNoneButton (
        /*[out,retval]*/ VARIANT_BOOL * ShowNoneButton ) = 0;
      virtual HRESULT __stdcall put_ShowNoneButton (
        /*[in]*/ VARIANT_BOOL ShowNoneButton ) = 0;
      virtual HRESULT __stdcall get_Text (
        /*[out,retval]*/ BSTR * Text ) = 0;
      virtual HRESULT __stdcall put_Text (
        /*[in]*/ BSTR Text ) = 0;
      virtual HRESULT __stdcall get_TextAlign (
        /*[out,retval]*/ enum OlTextAlign * TextAlign ) = 0;
      virtual HRESULT __stdcall put_TextAlign (
        /*[in]*/ enum OlTextAlign TextAlign ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * Value ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT Value ) = 0;
      virtual HRESULT __stdcall DropDown ( ) = 0;
};

struct __declspec(uuid("000672fb-0000-0000-c000-000000000046"))
OlkDateControlEvents : IDispatch
{};

struct __declspec(uuid("0006f056-0000-0000-c000-000000000046"))
OlkDateControl;
    // [ default ] interface _OlkDateControl
    // [ default, source ] dispinterface OlkDateControlEvents

struct __declspec(uuid("000672ef-0000-0000-c000-000000000046"))
_OlkTimeControl : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_AutoSize (
        /*[out,retval]*/ VARIANT_BOOL * AutoSize ) = 0;
      virtual HRESULT __stdcall put_AutoSize (
        /*[in]*/ VARIANT_BOOL AutoSize ) = 0;
      virtual HRESULT __stdcall get_AutoWordSelect (
        /*[out,retval]*/ VARIANT_BOOL * AutoWordSelect ) = 0;
      virtual HRESULT __stdcall put_AutoWordSelect (
        /*[in]*/ VARIANT_BOOL AutoWordSelect ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ OLE_COLOR * BackColor ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ OLE_COLOR BackColor ) = 0;
      virtual HRESULT __stdcall get_BackStyle (
        /*[out,retval]*/ enum OlBackStyle * BackStyle ) = 0;
      virtual HRESULT __stdcall put_BackStyle (
        /*[in]*/ enum OlBackStyle BackStyle ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_EnterFieldBehavior (
        /*[out,retval]*/ enum OlEnterFieldBehavior * EnterFieldBehavior ) = 0;
      virtual HRESULT __stdcall put_EnterFieldBehavior (
        /*[in]*/ enum OlEnterFieldBehavior EnterFieldBehavior ) = 0;
      virtual HRESULT __stdcall get_Font (
        /*[out,retval]*/ struct Font * * Font ) = 0;
      virtual HRESULT __stdcall get_ForeColor (
        /*[out,retval]*/ OLE_COLOR * ForeColor ) = 0;
      virtual HRESULT __stdcall put_ForeColor (
        /*[in]*/ OLE_COLOR ForeColor ) = 0;
      virtual HRESULT __stdcall get_HideSelection (
        /*[out,retval]*/ VARIANT_BOOL * HideSelection ) = 0;
      virtual HRESULT __stdcall put_HideSelection (
        /*[in]*/ VARIANT_BOOL HideSelection ) = 0;
      virtual HRESULT __stdcall get_Locked (
        /*[out,retval]*/ VARIANT_BOOL * Locked ) = 0;
      virtual HRESULT __stdcall put_Locked (
        /*[in]*/ VARIANT_BOOL Locked ) = 0;
      virtual HRESULT __stdcall get_MouseIcon (
        /*[out,retval]*/ struct Picture * * MouseIcon ) = 0;
      virtual HRESULT __stdcall put_MouseIcon (
        /*[in]*/ struct Picture * MouseIcon ) = 0;
      virtual HRESULT __stdcall get_MousePointer (
        /*[out,retval]*/ enum OlMousePointer * MousePointer ) = 0;
      virtual HRESULT __stdcall put_MousePointer (
        /*[in]*/ enum OlMousePointer MousePointer ) = 0;
      virtual HRESULT __stdcall get_ReferenceTime (
        /*[out,retval]*/ DATE * ReferenceTime ) = 0;
      virtual HRESULT __stdcall put_ReferenceTime (
        /*[in]*/ DATE ReferenceTime ) = 0;
      virtual HRESULT __stdcall get_Style (
        /*[out,retval]*/ enum OlTimeStyle * TimeStyle ) = 0;
      virtual HRESULT __stdcall put_Style (
        /*[in]*/ enum OlTimeStyle TimeStyle ) = 0;
      virtual HRESULT __stdcall get_Time (
        /*[out,retval]*/ DATE * Time ) = 0;
      virtual HRESULT __stdcall put_Time (
        /*[in]*/ DATE Time ) = 0;
      virtual HRESULT __stdcall get_Text (
        /*[out,retval]*/ BSTR * Text ) = 0;
      virtual HRESULT __stdcall put_Text (
        /*[in]*/ BSTR Text ) = 0;
      virtual HRESULT __stdcall get_TextAlign (
        /*[out,retval]*/ enum OlTextAlign * TextAlign ) = 0;
      virtual HRESULT __stdcall put_TextAlign (
        /*[in]*/ enum OlTextAlign TextAlign ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * Value ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT Value ) = 0;
      virtual HRESULT __stdcall get_IntervalTime (
        /*[out,retval]*/ DATE * IntervalTime ) = 0;
      virtual HRESULT __stdcall put_IntervalTime (
        /*[in]*/ DATE IntervalTime ) = 0;
      virtual HRESULT __stdcall DropDown ( ) = 0;
};

struct __declspec(uuid("000672f0-0000-0000-c000-000000000046"))
OlkTimeControlEvents : IDispatch
{};

struct __declspec(uuid("0006f051-0000-0000-c000-000000000046"))
OlkTimeControl;
    // [ default ] interface _OlkTimeControl
    // [ default, source ] dispinterface OlkTimeControlEvents

struct __declspec(uuid("000672f4-0000-0000-c000-000000000046"))
_OlkCategory : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_AutoSize (
        /*[out,retval]*/ VARIANT_BOOL * AutoSize ) = 0;
      virtual HRESULT __stdcall put_AutoSize (
        /*[in]*/ VARIANT_BOOL AutoSize ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ OLE_COLOR * BackColor ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ OLE_COLOR BackColor ) = 0;
      virtual HRESULT __stdcall get_BackStyle (
        /*[out,retval]*/ enum OlBackStyle * BackStyle ) = 0;
      virtual HRESULT __stdcall put_BackStyle (
        /*[in]*/ enum OlBackStyle BackStyle ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_ForeColor (
        /*[out,retval]*/ OLE_COLOR * ForeColor ) = 0;
      virtual HRESULT __stdcall put_ForeColor (
        /*[in]*/ OLE_COLOR ForeColor ) = 0;
      virtual HRESULT __stdcall get_MouseIcon (
        /*[out,retval]*/ struct Picture * * MouseIcon ) = 0;
      virtual HRESULT __stdcall put_MouseIcon (
        /*[in]*/ struct Picture * MouseIcon ) = 0;
      virtual HRESULT __stdcall get_MousePointer (
        /*[out,retval]*/ enum OlMousePointer * MousePointer ) = 0;
      virtual HRESULT __stdcall put_MousePointer (
        /*[in]*/ enum OlMousePointer MousePointer ) = 0;
};

struct __declspec(uuid("000672f5-0000-0000-c000-000000000046"))
OlkCategoryEvents : IDispatch
{};

struct __declspec(uuid("0006f053-0000-0000-c000-000000000046"))
OlkCategory;
    // [ default ] interface _OlkCategory
    // [ default, source ] dispinterface OlkCategoryEvents

struct __declspec(uuid("00067352-0000-0000-c000-000000000046"))
_OlkFrameHeader : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Alignment (
        /*[out,retval]*/ enum OlAlignment * Alignment ) = 0;
      virtual HRESULT __stdcall put_Alignment (
        /*[in]*/ enum OlAlignment Alignment ) = 0;
      virtual HRESULT __stdcall get_Caption (
        /*[out,retval]*/ BSTR * Caption ) = 0;
      virtual HRESULT __stdcall put_Caption (
        /*[in]*/ BSTR Caption ) = 0;
      virtual HRESULT __stdcall get_Font (
        /*[out,retval]*/ struct Font * * Font ) = 0;
      virtual HRESULT __stdcall get_ForeColor (
        /*[out,retval]*/ OLE_COLOR * ForeColor ) = 0;
      virtual HRESULT __stdcall put_ForeColor (
        /*[in]*/ OLE_COLOR ForeColor ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_MouseIcon (
        /*[out,retval]*/ struct Picture * * MouseIcon ) = 0;
      virtual HRESULT __stdcall put_MouseIcon (
        /*[in]*/ struct Picture * MouseIcon ) = 0;
      virtual HRESULT __stdcall get_MousePointer (
        /*[out,retval]*/ enum OlMousePointer * MousePointer ) = 0;
      virtual HRESULT __stdcall put_MousePointer (
        /*[in]*/ enum OlMousePointer MousePointer ) = 0;
};

struct __declspec(uuid("00067353-0000-0000-c000-000000000046"))
OlkFrameHeaderEvents : IDispatch
{};

struct __declspec(uuid("0006f057-0000-0000-c000-000000000046"))
OlkFrameHeader;
    // [ default ] interface _OlkFrameHeader
    // [ default, source ] dispinterface OlkFrameHeaderEvents

struct __declspec(uuid("00067355-0000-0000-c000-000000000046"))
_OlkSenderPhoto : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_MouseIcon (
        /*[out,retval]*/ struct Picture * * MouseIcon ) = 0;
      virtual HRESULT __stdcall put_MouseIcon (
        /*[in]*/ struct Picture * MouseIcon ) = 0;
      virtual HRESULT __stdcall get_MousePointer (
        /*[out,retval]*/ enum OlMousePointer * MousePointer ) = 0;
      virtual HRESULT __stdcall put_MousePointer (
        /*[in]*/ enum OlMousePointer MousePointer ) = 0;
      virtual HRESULT __stdcall get_PreferredWidth (
        /*[out,retval]*/ long * PreferredWidth ) = 0;
      virtual HRESULT __stdcall get_PreferredHeight (
        /*[out,retval]*/ long * PreferredHeight ) = 0;
};

struct __declspec(uuid("00067356-0000-0000-c000-000000000046"))
OlkSenderPhotoEvents : IDispatch
{};

struct __declspec(uuid("0006f058-0000-0000-c000-000000000046"))
OlkSenderPhoto;
    // [ default ] interface _OlkSenderPhoto
    // [ default, source ] dispinterface OlkSenderPhotoEvents

enum OlObjectClass
{
    olApplication = 0,
    olNamespace = 1,
    olFolder = 2,
    olRecipient = 4,
    olAttachment = 5,
    olAddressList = 7,
    olAddressEntry = 8,
    olFolders = 15,
    olItems = 16,
    olRecipients = 17,
    olAttachments = 18,
    olAddressLists = 20,
    olAddressEntries = 21,
    olAppointment = 26,
    olMeetingRequest = 53,
    olMeetingCancellation = 54,
    olMeetingResponseNegative = 55,
    olMeetingResponsePositive = 56,
    olMeetingResponseTentative = 57,
    olRecurrencePattern = 28,
    olExceptions = 29,
    olException = 30,
    olAction = 32,
    olActions = 33,
    olExplorer = 34,
    olInspector = 35,
    olPages = 36,
    olFormDescription = 37,
    olUserProperties = 38,
    olUserProperty = 39,
    olContact = 40,
    olDocument = 41,
    olJournal = 42,
    olMail = 43,
    olNote = 44,
    olPost = 45,
    olReport = 46,
    olRemote = 47,
    olTask = 48,
    olTaskRequest = 49,
    olTaskRequestUpdate = 50,
    olTaskRequestAccept = 51,
    olTaskRequestDecline = 52,
    olExplorers = 60,
    olInspectors = 61,
    olPanes = 62,
    olOutlookBarPane = 63,
    olOutlookBarStorage = 64,
    olOutlookBarGroups = 65,
    olOutlookBarGroup = 66,
    olOutlookBarShortcuts = 67,
    olOutlookBarShortcut = 68,
    olDistributionList = 69,
    olPropertyPageSite = 70,
    olPropertyPages = 71,
    olSyncObject = 72,
    olSyncObjects = 73,
    olSelection = 74,
    olLink = 75,
    olLinks = 76,
    olSearch = 77,
    olResults = 78,
    olViews = 79,
    olView = 80,
    olItemProperties = 98,
    olItemProperty = 99,
    olReminders = 100,
    olReminder = 101,
    olConflict = 102,
    olConflicts = 103,
    olSharing = 104,
    olAccount = 105,
    olAccounts = 106,
    olStore = 107,
    olStores = 108,
    olSelectNamesDialog = 109,
    olExchangeUser = 110,
    olExchangeDistributionList = 111,
    olPropertyAccessor = 112,
    olStorageItem = 113,
    olRules = 114,
    olRule = 115,
    olRuleActions = 116,
    olRuleAction = 117,
    olMoveOrCopyRuleAction = 118,
    olSendRuleAction = 119,
    olTable = 120,
    olRow = 121,
    olAssignToCategoryRuleAction = 122,
    olPlaySoundRuleAction = 123,
    olMarkAsTaskRuleAction = 124,
    olNewItemAlertRuleAction = 125,
    olRuleConditions = 126,
    olRuleCondition = 127,
    olImportanceRuleCondition = 128,
    olFormRegion = 129,
    olCategoryRuleCondition = 130,
    olFormNameRuleCondition = 131,
    olFromRuleCondition = 132,
    olSenderInAddressListRuleCondition = 133,
    olTextRuleCondition = 134,
    olAccountRuleCondition = 135,
    olClassTableView = 136,
    olClassIconView = 137,
    olClassCardView = 138,
    olClassCalendarView = 139,
    olClassTimeLineView = 140,
    olViewFields = 141,
    olViewField = 142,
    olOrderField = 144,
    olOrderFields = 145,
    olViewFont = 146,
    olAutoFormatRule = 147,
    olAutoFormatRules = 148,
    olColumnFormat = 149,
    olColumns = 150,
    olCalendarSharing = 151,
    olCategory = 152,
    olCategories = 153,
    olColumn = 154,
    olClassNavigationPane = 155,
    olNavigationModules = 156,
    olNavigationModule = 157,
    olMailModule = 158,
    olCalendarModule = 159,
    olContactsModule = 160,
    olTasksModule = 161,
    olJournalModule = 162,
    olNotesModule = 163,
    olNavigationGroups = 164,
    olNavigationGroup = 165,
    olNavigationFolders = 166,
    olNavigationFolder = 167,
    olClassBusinessCardView = 168,
    olAttachmentSelection = 169,
    olAddressRuleCondition = 170,
    olUserDefinedProperty = 171,
    olUserDefinedProperties = 172,
    olFromRssFeedRuleCondition = 173,
    olClassTimeZone = 174,
    olClassTimeZones = 175,
    olMobile = 176,
    olSolutionsModule = 177,
    olConversation = 178,
    olSimpleItems = 179,
    olOutspace = 180,
    olMeetingForwardNotification = 181,
    olConversationHeader = 182,
    olClassPeopleView = 183
};

enum OlDisplayType
{
    olUser = 0,
    olDistList = 1,
    olForum = 2,
    olAgent = 3,
    olOrganization = 4,
    olPrivateDistList = 5,
    olRemoteUser = 6
};

enum OlActionCopyLike
{
    olReply = 0,
    olReplyAll = 1,
    olForward = 2,
    olReplyFolder = 3,
    olRespond = 4
};

enum OlActionReplyStyle
{
    olOmitOriginalText = 0,
    olEmbedOriginalItem = 1,
    olIncludeOriginalText = 2,
    olIndentOriginalText = 3,
    olLinkOriginalItem = 4,
    olUserPreference = 5,
    olReplyTickOriginalText = 1000
};

enum OlActionResponseStyle
{
    olOpen = 0,
    olSend = 1,
    olPrompt = 2
};

enum OlActionShowOn
{
    olDontShow = 0,
    olMenu = 1,
    olMenuAndToolbar = 2
};

enum OlAttachmentType
{
    olByValue = 1,
    olByReference = 4,
    olEmbeddeditem = 5,
    olOLE = 6
};

struct __declspec(uuid("0006102d-0000-0000-c000-000000000046"))
PropertyAccessor;
    // [ default ] interface _PropertyAccessor

enum OlAttachmentBlockLevel
{
    olAttachmentBlockLevelNone = 0,
    olAttachmentBlockLevelOpen = 1
};

enum OlFormRegistry
{
    olDefaultRegistry = 0,
    olPersonalRegistry = 2,
    olFolderRegistry = 3,
    olOrganizationRegistry = 4
};

enum OlEditorType
{
    olEditorText = 1,
    olEditorHTML = 2,
    olEditorRTF = 3,
    olEditorWord = 4
};

enum OlInspectorClose
{
    olSave = 0,
    olDiscard = 1,
    olPromptForSave = 2
};

enum OlWindowState
{
    olMaximized = 0,
    olMinimized = 1,
    olNormalWindow = 2
};

enum OlSelectionLocation
{
    olViewList = 0,
    olToDoBarTaskList = 1,
    olToDoBarAppointmentList = 2,
    olDailyTaskList = 3,
    olAttachmentWell = 4
};

enum OlSelectionContents
{
    olConversationHeaders = 1
};

enum OlImportance
{
    olImportanceLow = 0,
    olImportanceNormal = 1,
    olImportanceHigh = 2
};

enum OlSensitivity
{
    olNormal = 0,
    olPersonal = 1,
    olPrivate = 2,
    olConfidential = 3
};

enum OlUserPropertyType
{
    olOutlookInternal = 0,
    olText = 1,
    olNumber = 3,
    olDateTime = 5,
    olYesNo = 6,
    olDuration = 7,
    olKeywords = 11,
    olPercent = 12,
    olCurrency = 14,
    olFormula = 18,
    olCombination = 19,
    olInteger = 20,
    olEnumeration = 21,
    olSmartFrom = 22
};

enum OlItemType
{
    olMailItem = 0,
    olAppointmentItem = 1,
    olContactItem = 2,
    olTaskItem = 3,
    olJournalItem = 4,
    olNoteItem = 5,
    olPostItem = 6,
    olDistributionListItem = 7,
    olMobileItemSMS = 11,
    olMobileItemMMS = 12
};

enum OlPane
{
    olOutlookBar = 1,
    olFolderList = 2,
    olPreview = 3,
    olNavigationPane = 4,
    olToDoBar = 5
};

struct __declspec(uuid("000610e8-0000-0000-c000-000000000046"))
NavigationModule;
    // [ default ] interface _NavigationModule

enum OlNavigationModuleType
{
    olModuleMail = 0,
    olModuleCalendar = 1,
    olModuleContacts = 2,
    olModuleTasks = 3,
    olModuleJournal = 4,
    olModuleNotes = 5,
    olModuleFolderList = 6,
    olModuleShortcuts = 7,
    olModuleSolutions = 8
};

struct __declspec(uuid("000610e7-0000-0000-c000-000000000046"))
NavigationModules;
    // [ default ] interface _NavigationModules

enum OlSearchScope
{
    olSearchScopeCurrentFolder = 0,
    olSearchScopeAllFolders = 1,
    olSearchScopeAllOutlookItems = 2,
    olSearchScopeSubfolders = 3,
    olSearchScopeCurrentStore = 4
};

enum OlAccountType
{
    olExchange = 0,
    olImap = 1,
    olPop3 = 2,
    olHttp = 3,
    olEas = 4,
    olOtherAccount = 5
};

enum OlAutoDiscoverConnectionMode
{
    olAutoDiscoverConnectionUnknown = 0,
    olAutoDiscoverConnectionExternal = 1,
    olAutoDiscoverConnectionInternal = 2,
    olAutoDiscoverConnectionInternalDomain = 3
};

struct __declspec(uuid("000610c7-0000-0000-c000-000000000046"))
Store;
    // [ default ] interface _Store

enum OlExchangeStoreType
{
    olPrimaryExchangeMailbox = 0,
    olExchangeMailbox = 1,
    olExchangePublicFolder = 2,
    olNotExchange = 3,
    olAdditionalExchangeMailbox = 4
};

struct __declspec(uuid("000610cc-0000-0000-c000-000000000046"))
Rules;
    // [ default ] interface _Rules

enum OlRuleType
{
    olRuleReceive = 0,
    olRuleSend = 1
};

struct __declspec(uuid("000610ce-0000-0000-c000-000000000046"))
RuleActions;
    // [ default ] interface _RuleActions

enum OlRuleActionType
{
    olRuleActionUnknown = 0,
    olRuleActionMoveToFolder = 1,
    olRuleActionAssignToCategory = 2,
    olRuleActionDelete = 3,
    olRuleActionDeletePermanently = 4,
    olRuleActionCopyToFolder = 5,
    olRuleActionForward = 6,
    olRuleActionForwardAsAttachment = 7,
    olRuleActionRedirect = 8,
    olRuleActionServerReply = 9,
    olRuleActionTemplate = 10,
    olRuleActionFlagForActionInDays = 11,
    olRuleActionFlagColor = 12,
    olRuleActionFlagClear = 13,
    olRuleActionImportance = 14,
    olRuleActionSensitivity = 15,
    olRuleActionPrint = 16,
    olRuleActionPlaySound = 17,
    olRuleActionStartApplication = 18,
    olRuleActionMarkRead = 19,
    olRuleActionRunScript = 20,
    olRuleActionStop = 21,
    olRuleActionCustomAction = 22,
    olRuleActionNewItemAlert = 23,
    olRuleActionDesktopAlert = 24,
    olRuleActionNotifyRead = 25,
    olRuleActionNotifyDelivery = 26,
    olRuleActionCcMessage = 27,
    olRuleActionDefer = 28,
    olRuleActionMarkAsTask = 29,
    olRuleActionClearCategories = 30
};

struct __declspec(uuid("000610d0-0000-0000-c000-000000000046"))
MoveOrCopyRuleAction;
    // [ default ] interface _MoveOrCopyRuleAction

struct __declspec(uuid("000610cf-0000-0000-c000-000000000046"))
RuleAction;
    // [ default ] interface _RuleAction

struct __declspec(uuid("000610d1-0000-0000-c000-000000000046"))
SendRuleAction;
    // [ default ] interface _SendRuleAction

struct __declspec(uuid("000610d4-0000-0000-c000-000000000046"))
AssignToCategoryRuleAction;
    // [ default ] interface _AssignToCategoryRuleAction

struct __declspec(uuid("000610d5-0000-0000-c000-000000000046"))
PlaySoundRuleAction;
    // [ default ] interface _PlaySoundRuleAction

struct __declspec(uuid("000610d6-0000-0000-c000-000000000046"))
MarkAsTaskRuleAction;
    // [ default ] interface _MarkAsTaskRuleAction

enum OlMarkInterval
{
    olMarkToday = 0,
    olMarkTomorrow = 1,
    olMarkThisWeek = 2,
    olMarkNextWeek = 3,
    olMarkNoDate = 4,
    olMarkComplete = 5
};

struct __declspec(uuid("000610d7-0000-0000-c000-000000000046"))
NewItemAlertRuleAction;
    // [ default ] interface _NewItemAlertRuleAction

struct __declspec(uuid("000610d8-0000-0000-c000-000000000046"))
RuleConditions;
    // [ default ] interface _RuleConditions

enum OlRuleConditionType
{
    olConditionUnknown = 0,
    olConditionFrom = 1,
    olConditionSubject = 2,
    olConditionAccount = 3,
    olConditionOnlyToMe = 4,
    olConditionTo = 5,
    olConditionImportance = 6,
    olConditionSensitivity = 7,
    olConditionFlaggedForAction = 8,
    olConditionCc = 9,
    olConditionToOrCc = 10,
    olConditionNotTo = 11,
    olConditionSentTo = 12,
    olConditionBody = 13,
    olConditionBodyOrSubject = 14,
    olConditionMessageHeader = 15,
    olConditionRecipientAddress = 16,
    olConditionSenderAddress = 17,
    olConditionCategory = 18,
    olConditionOOF = 19,
    olConditionHasAttachment = 20,
    olConditionSizeRange = 21,
    olConditionDateRange = 22,
    olConditionFormName = 23,
    olConditionProperty = 24,
    olConditionSenderInAddressBook = 25,
    olConditionMeetingInviteOrUpdate = 26,
    olConditionLocalMachineOnly = 27,
    olConditionOtherMachine = 28,
    olConditionAnyCategory = 29,
    olConditionFromRssFeed = 30,
    olConditionFromAnyRssFeed = 31
};

struct __declspec(uuid("000610d9-0000-0000-c000-000000000046"))
RuleCondition;
    // [ default ] interface _RuleCondition

struct __declspec(uuid("000610da-0000-0000-c000-000000000046"))
ImportanceRuleCondition;
    // [ default ] interface _ImportanceRuleCondition

struct __declspec(uuid("000610db-0000-0000-c000-000000000046"))
AccountRuleCondition;
    // [ default ] interface _AccountRuleCondition

struct __declspec(uuid("000610c5-0000-0000-c000-000000000046"))
Account;
    // [ default ] interface _Account

struct __declspec(uuid("000610e0-0000-0000-c000-000000000046"))
TextRuleCondition;
    // [ default ] interface _TextRuleCondition

struct __declspec(uuid("000610dc-0000-0000-c000-000000000046"))
CategoryRuleCondition;
    // [ default ] interface _CategoryRuleCondition

struct __declspec(uuid("000610dd-0000-0000-c000-000000000046"))
FormNameRuleCondition;
    // [ default ] interface _FormNameRuleCondition

struct __declspec(uuid("000610de-0000-0000-c000-000000000046"))
ToOrFromRuleCondition;
    // [ default ] interface _ToOrFromRuleCondition

struct __declspec(uuid("000610fa-0000-0000-c000-000000000046"))
AddressRuleCondition;
    // [ default ] interface _AddressRuleCondition

struct __declspec(uuid("000610df-0000-0000-c000-000000000046"))
SenderInAddressListRuleCondition;
    // [ default ] interface _SenderInAddressListRuleCondition

enum OlAddressListType
{
    olExchangeGlobalAddressList = 0,
    olExchangeContainer = 1,
    olOutlookAddressList = 2,
    olOutlookLdapAddressList = 3,
    olCustomAddressList = 4
};

struct __declspec(uuid("000610fb-0000-0000-c000-000000000046"))
FromRssFeedRuleCondition;
    // [ default ] interface _FromRssFeedRuleCondition

struct __declspec(uuid("000610cd-0000-0000-c000-000000000046"))
Rule;
    // [ default ] interface _Rule

enum OlSpecialFolders
{
    olSpecialFolderAllTasks = 0,
    olSpecialFolderReminders = 1
};

enum OlDefaultFolders
{
    olFolderDeletedItems = 3,
    olFolderOutbox = 4,
    olFolderSentMail = 5,
    olFolderInbox = 6,
    olFolderCalendar = 9,
    olFolderContacts = 10,
    olFolderJournal = 11,
    olFolderNotes = 12,
    olFolderTasks = 13,
    olFolderDrafts = 16,
    olPublicFoldersAllPublicFolders = 18,
    olFolderConflicts = 19,
    olFolderSyncIssues = 20,
    olFolderLocalFailures = 21,
    olFolderServerFailures = 22,
    olFolderJunk = 23,
    olFolderRssFeeds = 25,
    olFolderToDo = 28,
    olFolderManagedEmail = 29,
    olFolderSuggestedContacts = 30
};

struct __declspec(uuid("000610e4-0000-0000-c000-000000000046"))
Categories;
    // [ default ] interface _Categories

enum OlCategoryColor
{
    olCategoryColorNone = 0,
    olCategoryColorRed = 1,
    olCategoryColorOrange = 2,
    olCategoryColorPeach = 3,
    olCategoryColorYellow = 4,
    olCategoryColorGreen = 5,
    olCategoryColorTeal = 6,
    olCategoryColorOlive = 7,
    olCategoryColorBlue = 8,
    olCategoryColorPurple = 9,
    olCategoryColorMaroon = 10,
    olCategoryColorSteel = 11,
    olCategoryColorDarkSteel = 12,
    olCategoryColorGray = 13,
    olCategoryColorDarkGray = 14,
    olCategoryColorBlack = 15,
    olCategoryColorDarkRed = 16,
    olCategoryColorDarkOrange = 17,
    olCategoryColorDarkPeach = 18,
    olCategoryColorDarkYellow = 19,
    olCategoryColorDarkGreen = 20,
    olCategoryColorDarkTeal = 21,
    olCategoryColorDarkOlive = 22,
    olCategoryColorDarkBlue = 23,
    olCategoryColorDarkPurple = 24,
    olCategoryColorDarkMaroon = 25
};

enum OlCategoryShortcutKey
{
    olCategoryShortcutKeyNone = 0,
    olCategoryShortcutKeyCtrlF2 = 1,
    olCategoryShortcutKeyCtrlF3 = 2,
    olCategoryShortcutKeyCtrlF4 = 3,
    olCategoryShortcutKeyCtrlF5 = 4,
    olCategoryShortcutKeyCtrlF6 = 5,
    olCategoryShortcutKeyCtrlF7 = 6,
    olCategoryShortcutKeyCtrlF8 = 7,
    olCategoryShortcutKeyCtrlF9 = 8,
    olCategoryShortcutKeyCtrlF10 = 9,
    olCategoryShortcutKeyCtrlF11 = 10,
    olCategoryShortcutKeyCtrlF12 = 11
};

struct __declspec(uuid("000610e3-0000-0000-c000-000000000046"))
Category;
    // [ default ] interface _Category

enum OlExchangeConnectionMode
{
    olNoExchange = 0,
    olOffline = 100,
    olCachedOffline = 200,
    olDisconnected = 300,
    olCachedDisconnected = 400,
    olCachedConnectedHeaders = 500,
    olCachedConnectedDrizzle = 600,
    olCachedConnectedFull = 700,
    olOnline = 800
};

enum OlViewSaveOption
{
    olViewSaveOptionThisFolderEveryone = 0,
    olViewSaveOptionThisFolderOnlyMe = 1,
    olViewSaveOptionAllFoldersOfType = 2
};

enum OlViewType
{
    olTableView = 0,
    olCardView = 1,
    olCalendarView = 2,
    olIconView = 3,
    olTimelineView = 4,
    olBusinessCardView = 5,
    olDailyTaskListView = 6,
    olPeopleView = 7
};

enum OlShowItemCount
{
    olNoItemCount = 0,
    olShowUnreadItemCount = 1,
    olShowTotalItemCount = 2
};

enum OlStorageIdentifierType
{
    olIdentifyBySubject = 0,
    olIdentifyByEntryID = 1,
    olIdentifyByMessageClass = 2
};

struct __declspec(uuid("000610d2-0000-0000-c000-000000000046"))
Table;
    // [ default ] interface _Table

struct __declspec(uuid("000610d3-0000-0000-c000-000000000046"))
Row;
    // [ default ] interface _Row

struct __declspec(uuid("000610e1-0000-0000-c000-000000000046"))
Columns;
    // [ default ] interface _Columns

struct __declspec(uuid("000610e5-0000-0000-c000-000000000046"))
Column;
    // [ default ] interface _Column

struct __declspec(uuid("000610e2-0000-0000-c000-000000000046"))
CalendarSharing;
    // [ default ] interface _CalendarSharing

enum OlCalendarMailFormat
{
    olCalendarMailFormatDailySchedule = 0,
    olCalendarMailFormatEventList = 1
};

struct __declspec(uuid("00061033-0000-0000-c000-000000000046"))
MailItem;
    // [ default ] interface _MailItem
    // [ source ] dispinterface ItemEvents
    // [ default, source ] dispinterface ItemEvents_10

enum OlFlagStatus
{
    olNoFlag = 0,
    olFlagComplete = 1,
    olFlagMarked = 2
};

enum OlRemoteStatus
{
    olRemoteStatusNone = 0,
    olUnMarked = 1,
    olMarkedForDownload = 2,
    olMarkedForCopy = 3,
    olMarkedForDelete = 4
};

enum OlBodyFormat
{
    olFormatUnspecified = 0,
    olFormatPlain = 1,
    olFormatHTML = 2,
    olFormatRichText = 3
};

enum OlDownloadState
{
    olHeaderOnly = 0,
    olFullItem = 1
};

enum OlFlagIcon
{
    olNoFlagIcon = 0,
    olPurpleFlagIcon = 1,
    olOrangeFlagIcon = 2,
    olGreenFlagIcon = 3,
    olYellowFlagIcon = 4,
    olBlueFlagIcon = 5,
    olRedFlagIcon = 6
};

enum OlPermission
{
    olUnrestricted = 0,
    olDoNotForward = 1,
    olPermissionTemplate = 2
};

enum OlPermissionService
{
    olUnknown = 0,
    olWindows = 1,
    olPassport = 2
};

struct __declspec(uuid("00061031-0000-0000-c000-000000000046"))
ContactItem;
    // [ default ] interface _ContactItem
    // [ source ] dispinterface ItemEvents
    // [ default, source ] dispinterface ItemEvents_10

struct __declspec(uuid("0006303a-0000-0000-c000-000000000046"))
ItemEvents : IDispatch
{};

struct __declspec(uuid("0006302b-0000-0000-c000-000000000046"))
ItemEvents_10 : IDispatch
{};

struct __declspec(uuid("00061102-0000-0000-c000-000000000046"))
SimpleItems;
    // [ default ] interface _SimpleItems

enum OlAlwaysDeleteConversation
{
    olDoNotDelete = 0,
    olAlwaysDelete = 1,
    olAlwaysDeleteUnsupported = 2
};

enum OlCalendarDetail
{
    olFreeBusyOnly = 0,
    olFreeBusyAndSubject = 1,
    olFullDetails = 2
};

struct __declspec(uuid("00061047-0000-0000-c000-000000000046"))
UserDefinedProperties;
    // [ default ] interface _UserDefinedProperties

struct __declspec(uuid("0006105c-0000-0000-c000-000000000046"))
UserDefinedProperty;
    // [ default ] interface _UserDefinedProperty

enum OlGender
{
    olUnspecified = 0,
    olFemale = 1,
    olMale = 2
};

enum OlMailingAddress
{
    olNone = 0,
    olHome = 1,
    olBusiness = 2,
    olOther = 3
};

enum OlContactPhoneNumber
{
    olContactPhoneAssistant = 0,
    olContactPhoneBusiness = 1,
    olContactPhoneBusiness2 = 2,
    olContactPhoneBusinessFax = 3,
    olContactPhoneCallback = 4,
    olContactPhoneCar = 5,
    olContactPhoneCompany = 6,
    olContactPhoneHome = 7,
    olContactPhoneHome2 = 8,
    olContactPhoneHomeFax = 9,
    olContactPhoneISDN = 10,
    olContactPhoneMobile = 11,
    olContactPhoneOther = 12,
    olContactPhoneOtherFax = 13,
    olContactPhonePager = 14,
    olContactPhonePrimary = 15,
    olContactPhoneRadio = 16,
    olContactPhoneTelex = 17,
    olContactPhoneTTYTTD = 18
};

enum OlBusinessCardType
{
    olBusinessCardTypeOutlook = 0,
    olBusinessCardTypeInterConnect = 1
};

struct __declspec(uuid("000610c9-0000-0000-c000-000000000046"))
ExchangeUser;
    // [ default ] interface _ExchangeUser

enum OlAddressEntryUserType
{
    olExchangeUserAddressEntry = 0,
    olExchangeDistributionListAddressEntry = 1,
    olExchangePublicFolderAddressEntry = 2,
    olExchangeAgentAddressEntry = 3,
    olExchangeOrganizationAddressEntry = 4,
    olExchangeRemoteUserAddressEntry = 5,
    olOutlookContactAddressEntry = 10,
    olOutlookDistributionListAddressEntry = 11,
    olLdapAddressEntry = 20,
    olSmtpAddressEntry = 30,
    olOtherAddressEntry = 40
};

struct __declspec(uuid("000610ca-0000-0000-c000-000000000046"))
ExchangeDistributionList;
    // [ default ] interface _ExchangeDistributionList

enum OlResponseStatus
{
    olResponseNone = 0,
    olResponseOrganized = 1,
    olResponseTentative = 2,
    olResponseAccepted = 3,
    olResponseDeclined = 4,
    olResponseNotResponded = 5
};

enum OlTrackingStatus
{
    olTrackingNone = 0,
    olTrackingDelivered = 1,
    olTrackingNotDelivered = 2,
    olTrackingNotRead = 3,
    olTrackingRecallFailure = 4,
    olTrackingRecallSuccess = 5,
    olTrackingRead = 6,
    olTrackingReplied = 7
};

struct __declspec(uuid("00063084-0000-0000-c000-000000000046"))
SyncObject;
    // [ default ] interface _SyncObject
    // [ default, source ] dispinterface SyncObjectEvents

struct __declspec(uuid("00063085-0000-0000-c000-000000000046"))
SyncObjectEvents : IDispatch
{};

enum OlSyncState
{
    olSyncStopped = 0,
    olSyncStarted = 1
};

enum OlStoreType
{
    olStoreDefault = 1,
    olStoreUnicode = 2,
    olStoreANSI = 3
};

struct __declspec(uuid("000610c4-0000-0000-c000-000000000046"))
Accounts;
    // [ default ] interface _Accounts
    // [ default, source ] dispinterface AccountsEvents

struct __declspec(uuid("00063105-0000-0000-c000-000000000046"))
AccountsEvents : IDispatch
{};

struct __declspec(uuid("000610c6-0000-0000-c000-000000000046"))
Stores;
    // [ default ] interface _Stores
    // [ default, source ] dispinterface StoresEvents_12

struct __declspec(uuid("000630f8-0000-0000-c000-000000000046"))
StoresEvents_12 : IDispatch
{};

struct __declspec(uuid("000610c8-0000-0000-c000-000000000046"))
SelectNamesDialog;
    // [ default ] interface _SelectNamesDialog

enum OlRecipientSelectors
{
    olShowNone = 0,
    olShowTo = 1,
    olShowToCc = 2,
    olShowToCcBcc = 3
};

enum OlDefaultSelectNamesDisplayMode
{
    olDefaultMail = 1,
    olDefaultMeeting = 2,
    olDefaultSharingRequest = 4,
    olDefaultTask = 3,
    olDefaultMembers = 5,
    olDefaultDelegates = 6,
    olDefaultSingleName = 7,
    olDefaultPickRooms = 8
};

struct __declspec(uuid("00061067-0000-0000-c000-000000000046"))
SharingItem;
    // [ default ] interface _SharingItem
    // [ default, source ] dispinterface ItemEvents_10
    // [ source ] dispinterface ItemEvents

enum OlSharingProvider
{
    olProviderUnknown = 0,
    olProviderExchange = 1,
    olProviderWebCal = 2,
    olProviderPubCal = 3,
    olProviderICal = 4,
    olProviderSharePoint = 5,
    olProviderRSS = 6,
    olProviderFederate = 7
};

enum OlSharingMsgType
{
    olSharingMsgTypeUnknown = 0,
    olSharingMsgTypeRequest = 1,
    olSharingMsgTypeInvite = 2,
    olSharingMsgTypeInviteAndRequest = 3,
    olSharingMsgTypeResponseAllow = 4,
    olSharingMsgTypeResponseDeny = 5
};

struct __declspec(uuid("00063050-0000-0000-c000-000000000046"))
Explorer;
    // [ default ] interface _Explorer
    // [ source ] dispinterface ExplorerEvents
    // [ default, source ] dispinterface ExplorerEvents_10

struct __declspec(uuid("0006304f-0000-0000-c000-000000000046"))
ExplorerEvents : IDispatch
{};

struct __declspec(uuid("0006300f-0000-0000-c000-000000000046"))
ExplorerEvents_10 : IDispatch
{};

enum OlFolderDisplayMode
{
    olFolderDisplayNormal = 0,
    olFolderDisplayFolderOnly = 1,
    olFolderDisplayNoNavigation = 2
};

struct __declspec(uuid("00063058-0000-0000-c000-000000000046"))
Inspector;
    // [ default ] interface _Inspector
    // [ source ] dispinterface InspectorEvents
    // [ default, source ] dispinterface InspectorEvents_10

struct __declspec(uuid("0006307d-0000-0000-c000-000000000046"))
InspectorEvents : IDispatch
{};

struct __declspec(uuid("0006302a-0000-0000-c000-000000000046"))
InspectorEvents_10 : IDispatch
{};

enum OlReferenceType
{
    olWeak = 0,
    olStrong = 1
};

struct __declspec(uuid("000610fc-0000-0000-c000-000000000046"))
TimeZones;
    // [ default ] interface _TimeZones

struct __declspec(uuid("00067367-0000-0000-c000-000000000046"))
_OlkTimeZoneControl : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_AppointmentTimeField (
        /*[out,retval]*/ enum OlAppointmentTimeField * AppointmentTimeField ) = 0;
      virtual HRESULT __stdcall put_AppointmentTimeField (
        /*[in]*/ enum OlAppointmentTimeField AppointmentTimeField ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ enum OlBorderStyle * BorderStyle ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ enum OlBorderStyle BorderStyle ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_Locked (
        /*[out,retval]*/ VARIANT_BOOL * Locked ) = 0;
      virtual HRESULT __stdcall put_Locked (
        /*[in]*/ VARIANT_BOOL Locked ) = 0;
      virtual HRESULT __stdcall get_MouseIcon (
        /*[out,retval]*/ struct Picture * * MouseIcon ) = 0;
      virtual HRESULT __stdcall put_MouseIcon (
        /*[in]*/ struct Picture * MouseIcon ) = 0;
      virtual HRESULT __stdcall get_MousePointer (
        /*[out,retval]*/ enum OlMousePointer * MousePointer ) = 0;
      virtual HRESULT __stdcall put_MousePointer (
        /*[in]*/ enum OlMousePointer MousePointer ) = 0;
      virtual HRESULT __stdcall get_SelectedTimeZoneIndex (
        /*[out,retval]*/ long * SelectedTimeZoneIndex ) = 0;
      virtual HRESULT __stdcall put_SelectedTimeZoneIndex (
        /*[in]*/ long SelectedTimeZoneIndex ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * Value ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT Value ) = 0;
      virtual HRESULT __stdcall DropDown ( ) = 0;
};

struct __declspec(uuid("00067368-0000-0000-c000-000000000046"))
OlkTimeZoneControlEvents : IDispatch
{};

struct __declspec(uuid("0006f059-0000-0000-c000-000000000046"))
OlkTimeZoneControl;
    // [ default ] interface _OlkTimeZoneControl
    // [ default, source ] dispinterface OlkTimeZoneControlEvents

enum OlBusyStatus
{
    olFree = 0,
    olTentative = 1,
    olBusy = 2,
    olOutOfOffice = 3,
    olWorkingElsewhere = 4
};

enum OlDaysOfWeek
{
    olSunday = 1,
    olMonday = 2,
    olTuesday = 4,
    olWednesday = 8,
    olThursday = 16,
    olFriday = 32,
    olSaturday = 64
};

enum OlJournalRecipientType
{
    olAssociatedContact = 1
};

enum OlMailRecipientType
{
    olOriginator = 0,
    olTo = 1,
    olCC = 2,
    olBCC = 3
};

enum OlMeetingRecipientType
{
    olOrganizer = 0,
    olRequired = 1,
    olOptional = 2,
    olResource = 3
};

enum OlMeetingResponse
{
    olMeetingTentative = 2,
    olMeetingAccepted = 3,
    olMeetingDeclined = 4
};

enum OlMeetingStatus
{
    olNonMeeting = 0,
    olMeeting = 1,
    olMeetingReceived = 3,
    olMeetingCanceled = 5,
    olMeetingReceivedAndCanceled = 7
};

enum OlNetMeetingType
{
    olNetMeeting = 0,
    olNetShow = 1,
    olExchangeConferencing = 2
};

enum OlNoteColor
{
    olBlue = 0,
    olGreen = 1,
    olPink = 2,
    olYellow = 3,
    olWhite = 4
};

enum OlOutlookBarViewType
{
    olLargeIcon = 0,
    olSmallIcon = 1
};

enum OlRecurrenceState
{
    olApptNotRecurring = 0,
    olApptMaster = 1,
    olApptOccurrence = 2,
    olApptException = 3
};

enum OlRecurrenceType
{
    olRecursDaily = 0,
    olRecursWeekly = 1,
    olRecursMonthly = 2,
    olRecursMonthNth = 3,
    olRecursYearly = 5,
    olRecursYearNth = 6
};

enum OlSaveAsType
{
    olTXT = 0,
    olRTF = 1,
    olTemplate = 2,
    olMSG = 3,
    olDoc = 4,
    olHTML = 5,
    olVCard = 6,
    olVCal = 7,
    olICal = 8,
    olMSGUnicode = 9,
    olMHTML = 10
};

enum OlSortOrder
{
    olSortNone = 0,
    olAscending = 1,
    olDescending = 2
};

enum OlTaskDelegationState
{
    olTaskNotDelegated = 0,
    olTaskDelegationUnknown = 1,
    olTaskDelegationAccepted = 2,
    olTaskDelegationDeclined = 3
};

enum OlTaskOwnership
{
    olNewTask = 0,
    olDelegatedTask = 1,
    olOwnTask = 2
};

enum OlTaskRecipientType
{
    olUpdate = 2,
    olFinalStatus = 3
};

enum OlTaskResponse
{
    olTaskSimple = 0,
    olTaskAssign = 1,
    olTaskAccept = 2,
    olTaskDecline = 3
};

enum OlTaskStatus
{
    olTaskNotStarted = 0,
    olTaskInProgress = 1,
    olTaskComplete = 2,
    olTaskWaiting = 3,
    olTaskDeferred = 4
};

enum OlOfficeDocItemsType
{
    olExcelWorkSheetItem = 8,
    olWordDocumentItem = 9,
    olPowerPointShowItem = 10
};

enum OlFormRegionMode
{
    olFormRegionRead = 0,
    olFormRegionCompose = 1,
    olFormRegionPreview = 2
};

enum OlFormRegionSize
{
    olFormRegionTypeSeparate = 0,
    olFormRegionTypeAdjoining = 1
};

enum OlRuleExecuteOption
{
    olRuleExecuteAllMessages = 0,
    olRuleExecuteReadMessages = 1,
    olRuleExecuteUnreadMessages = 2
};

enum OlDefaultExpandCollapseSetting
{
    olAllExpanded = 0,
    olAllCollapsed = 1,
    olLastViewed = 2
};

enum OlMultiLine
{
    olWidthMultiLine = 0,
    olAlwaysSingleLine = 1,
    olAlwaysMultiLine = 2
};

enum OlGridLineStyle
{
    olGridLineNone = 0,
    olGridLineSmallDots = 1,
    olGridLineLargeDots = 2,
    olGridLineDashes = 3,
    olGridLineSolid = 4
};

enum OlIconViewType
{
    olIconViewLarge = 0,
    olIconViewSmall = 1,
    olIconViewList = 2
};

enum OlIconViewPlacement
{
    olIconDoNotArrange = 0,
    olIconLineUp = 1,
    olIconAutoArrange = 2,
    olIconSortAndAutoArrange = 3
};

enum OlCalendarViewMode
{
    olCalendarViewDay = 0,
    olCalendarViewWeek = 1,
    olCalendarViewMonth = 2,
    olCalendarViewMultiDay = 3,
    olCalendarView5DayWeek = 4
};

enum OlDayWeekTimeScale
{
    olTimeScale5Minutes = 0,
    olTimeScale6Minutes = 1,
    olTimeScale10Minutes = 2,
    olTimeScale15Minutes = 3,
    olTimeScale30Minutes = 4,
    olTimeScale60Minutes = 5
};

enum OlTimelineViewMode
{
    olTimelineViewDay = 0,
    olTimelineViewWeek = 1,
    olTimelineViewMonth = 2
};

enum OlAutoPreview
{
    olAutoPreviewAll = 0,
    olAutoPreviewUnread = 1,
    olAutoPreviewNone = 2
};

enum OlColor
{
    olAutoColor = 0,
    olColorBlack = 1,
    olColorMaroon = 2,
    olColorGreen = 3,
    olColorOlive = 4,
    olColorNavy = 5,
    olColorPurple = 6,
    olColorTeal = 7,
    olColorGray = 8,
    olColorSilver = 9,
    olColorRed = 10,
    olColorLime = 11,
    olColorYellow = 12,
    olColorBlue = 13,
    olColorFuchsia = 14,
    olColorAqua = 15,
    olColorWhite = 16
};

enum OlAlign
{
    olAlignLeft = 0,
    olAlignCenter = 1,
    olAlignRight = 2
};

enum OlFormatCurrency
{
    olFormatCurrencyDecimal = 1,
    olFormatCurrencyNonDecimal = 2
};

enum OlFormatDateTime
{
    olFormatDateTimeLongDayDateTime = 1,
    olFormatDateTimeShortDateTime = 2,
    olFormatDateTimeShortDayDateTime = 3,
    olFormatDateTimeShortDayMonthDateTime = 4,
    OlFormatDateTimeLongDayDate = 5,
    olFormatDateTimeLongDate = 6,
    olFormatDateTimeLongDateReversed = 7,
    olFormatDateTimeShortDate = 8,
    olFormatDateTimeShortDateNumOnly = 9,
    olFormatDateTimeShortDayMonth = 10,
    olFormatDateTimeShortMonthYear = 11,
    olFormatDateTimeShortMonthYearNumOnly = 12,
    olFormatDateTimeShortDayDate = 13,
    olFormatDateTimeLongTime = 15,
    olFormatDateTimeShortTime = 16,
    olFormatDateTimeBestFit = 17
};

enum OlFormatDuration
{
    olFormatDurationShort = 1,
    olFormatDurationLong = 2,
    olFormatDurationShortBusiness = 3,
    olFormatDurationLongBusiness = 4
};

enum OlFormatInteger
{
    olFormatIntegerPlain = 1,
    olFormatIntegerComputer1 = 2,
    olFormatIntegerComputer2 = 3,
    olFormatIntegerComputer3 = 4
};

enum OlFormatKeywords
{
    olFormatKeywordsText = 1
};

enum OlFormatNumber
{
    olFormatNumberAllDigits = 1,
    olFormatNumberTruncated = 2,
    olFormatNumber1Decimal = 3,
    olFormatNumber2Decimal = 4,
    olFormatNumberScientific = 5,
    olFormatNumberComputer1 = 6,
    olFormatNumberComputer2 = 7,
    olFormatNumberComputer3 = 8,
    olFormatNumberRaw = 9
};

enum OlFormatPercent
{
    olFormatPercentRounded = 1,
    olFormatPercent1Decimal = 2,
    olFormatPercent2Decimal = 3,
    olFormatPercentAllDigits = 4
};

enum OlFormatYesNo
{
    olFormatYesNoYesNo = 1,
    olFormatYesNoOnOff = 2,
    olFormatYesNoTrueFalse = 3,
    olFormatYesNoIcon = 4
};

enum OlFormatEnumeration
{
    olFormatEnumBitmap = 1,
    olFormatEnumText = 2
};

enum OlFormatSmartFrom
{
    olFormatSmartFromFromTo = 1,
    olFormatSmartFromFromOnly = 2
};

enum OlContextMenu
{
    olItemContextMenu = 0,
    olViewContextMenu = 1,
    olFolderContextMenu = 2,
    olAttachmentContextMenu = 3,
    olStoreContextMenu = 4,
    olShortcutContextMenu = 5
};

enum OlFormatText
{
    olFormatTextText = 1
};

enum OlGroupType
{
    olCustomFoldersGroup = 0,
    olMyFoldersGroup = 1,
    olPeopleFoldersGroup = 2,
    olOtherFoldersGroup = 3,
    olFavoriteFoldersGroup = 4,
    olRoomsGroup = 5,
    olReadOnlyGroup = 6
};

enum OlTableContents
{
    olUserItems = 0,
    olHiddenItems = 1
};

enum OlFormRegionIcon
{
    olFormRegionIconDefault = 1,
    olFormRegionIconUnread = 2,
    olFormRegionIconRead = 3,
    olFormRegionIconReplied = 4,
    olFormRegionIconForwarded = 5,
    olFormRegionIconUnsent = 6,
    olFormRegionIconSubmitted = 7,
    olFormRegionIconSigned = 8,
    olFormRegionIconEncrypted = 9,
    olFormRegionIconWindow = 10,
    olFormRegionIconPage = 11,
    olFormRegionIconRecurring = 12
};

enum OlSolutionScope
{
    olHideInDefaultModules = 0,
    olShowInDefaultModules = 1
};

enum OlMobileFormat
{
    olSMS = 0,
    olMMS = 1
};

enum OlAppointmentCopyOptions
{
    olPromptUser = 0,
    olCreateAppointment = 1,
    olCopyAsAccept = 2
};

struct __declspec(uuid("0006304e-0000-0000-c000-000000000046"))
ApplicationEvents : IDispatch
{};

struct __declspec(uuid("00061030-0000-0000-c000-000000000046"))
AppointmentItem;
    // [ default ] interface _AppointmentItem
    // [ source ] dispinterface ItemEvents
    // [ default, source ] dispinterface ItemEvents_10

struct __declspec(uuid("00061036-0000-0000-c000-000000000046"))
MeetingItem;
    // [ default ] interface _MeetingItem
    // [ source ] dispinterface ItemEvents
    // [ default, source ] dispinterface ItemEvents_10

struct __declspec(uuid("00063078-0000-0000-c000-000000000046"))
ExplorersEvents : IDispatch
{};

struct __declspec(uuid("00063076-0000-0000-c000-000000000046"))
FoldersEvents : IDispatch
{};

struct __declspec(uuid("00063079-0000-0000-c000-000000000046"))
InspectorsEvents : IDispatch
{};

struct __declspec(uuid("00063077-0000-0000-c000-000000000046"))
ItemsEvents : IDispatch
{};

struct __declspec(uuid("0006308c-0000-0000-c000-000000000046"))
NameSpaceEvents : IDispatch
{};

struct __declspec(uuid("0006307b-0000-0000-c000-000000000046"))
OutlookBarGroupsEvents : IDispatch
{};

struct __declspec(uuid("0006307a-0000-0000-c000-000000000046"))
OutlookBarPaneEvents : IDispatch
{};

struct __declspec(uuid("0006307c-0000-0000-c000-000000000046"))
OutlookBarShortcutsEvents : IDispatch
{};

struct __declspec(uuid("0006307e-0000-0000-c000-000000000046"))
PropertyPage : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall GetPageInfo (
        /*[in,out]*/ BSTR * HelpFile,
        /*[in,out]*/ long * HelpContext ) = 0;
      virtual HRESULT __stdcall get_Dirty (
        /*[out,retval]*/ VARIANT_BOOL * Dirty ) = 0;
      virtual HRESULT __stdcall Apply ( ) = 0;
};

struct __declspec(uuid("0006300e-0000-0000-c000-000000000046"))
ApplicationEvents_10 : IDispatch
{};

struct __declspec(uuid("0006302c-0000-0000-c000-000000000046"))
ApplicationEvents_11 : IDispatch
{};

struct __declspec(uuid("000610f9-0000-0000-c000-000000000046"))
AttachmentSelection;
    // [ default ] interface _AttachmentSelection

struct __declspec(uuid("000610f7-0000-0000-c000-000000000046"))
Folder;
    // [ default, source ] dispinterface MAPIFolderEvents_12
    // [ default ] interface MAPIFolder

struct __declspec(uuid("000630f7-0000-0000-c000-000000000046"))
MAPIFolderEvents_12 : IDispatch
{};

struct __declspec(uuid("0006300d-0000-0000-c000-000000000046"))
ResultsEvents : IDispatch
{};

struct __declspec(uuid("000630a5-0000-0000-c000-000000000046"))
_ViewsEvents : IDispatch
{};

struct __declspec(uuid("000630b2-0000-0000-c000-000000000046"))
ReminderCollectionEvents : IDispatch
{};

struct __declspec(uuid("0006305b-0000-0000-c000-000000000046"))
FormRegionEvents : IDispatch
{};

struct __declspec(uuid("0006109e-0000-0000-c000-000000000046"))
ColumnFormat;
    // [ default ] interface _ColumnFormat

struct __declspec(uuid("0006f09f-0000-0000-c000-000000000046"))
ViewField;
    // [ default ] interface _ViewField

struct __declspec(uuid("0006109a-0000-0000-c000-000000000046"))
OrderFields;
    // [ default ] interface _OrderFields

struct __declspec(uuid("0006109b-0000-0000-c000-000000000046"))
OrderField;
    // [ default ] interface _OrderField

struct __declspec(uuid("000610a1-0000-0000-c000-000000000046"))
ViewFields;
    // [ default ] interface _ViewFields

struct __declspec(uuid("0006109d-0000-0000-c000-000000000046"))
ViewFont;
    // [ default ] interface _ViewFont

struct __declspec(uuid("0006f0a2-0000-0000-c000-000000000046"))
AutoFormatRules;
    // [ default ] interface _AutoFormatRules

struct __declspec(uuid("0006f0a1-0000-0000-c000-000000000046"))
AutoFormatRule;
    // [ default ] interface _AutoFormatRule

struct __declspec(uuid("000610f1-0000-0000-c000-000000000046"))
NavigationFolders;
    // [ default ] interface _NavigationFolders

struct __declspec(uuid("000610f2-0000-0000-c000-000000000046"))
NavigationFolder;
    // [ default ] interface _NavigationFolder

struct __declspec(uuid("000610f0-0000-0000-c000-000000000046"))
NavigationGroup;
    // [ default ] interface _NavigationGroup

struct __declspec(uuid("000630f3-0000-0000-c000-000000000046"))
NavigationPaneEvents_12 : IDispatch
{};

struct __declspec(uuid("000630f4-0000-0000-c000-000000000046"))
NavigationGroupsEvents_12 : IDispatch
{};

struct __declspec(uuid("0006315a-0000-0000-c000-000000000046"))
FormRegion;
    // [ default ] interface _FormRegion
    // [ default, source ] dispinterface FormRegionEvents

struct __declspec(uuid("00063059-0000-0000-c000-000000000046"))
_FormRegionStartup : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall GetFormRegionStorage (
        /*[in]*/ BSTR FormRegionName,
        /*[in]*/ IDispatch * Item,
        /*[in]*/ long LCID,
        /*[in]*/ enum OlFormRegionMode FormRegionMode,
        /*[in]*/ enum OlFormRegionSize FormRegionSize,
        /*[out,retval]*/ VARIANT * Storage ) = 0;
      virtual HRESULT __stdcall BeforeFormRegionShow (
        /*[in]*/ struct _FormRegion * FormRegion ) = 0;
      virtual HRESULT __stdcall GetFormRegionManifest (
        /*[in]*/ BSTR FormRegionName,
        /*[in]*/ long LCID,
        /*[out,retval]*/ VARIANT * Manifest ) = 0;
      virtual HRESULT __stdcall GetFormRegionIcon (
        /*[in]*/ BSTR FormRegionName,
        /*[in]*/ long LCID,
        /*[in]*/ enum OlFormRegionIcon Icon,
        /*[out,retval]*/ VARIANT * Result ) = 0;
};

struct __declspec(uuid("000610fe-0000-0000-c000-000000000046"))
MobileItem;
    // [ default ] interface _MobileItem
    // [ source ] dispinterface ItemEvents
    // [ default, source ] dispinterface ItemEvents_10

struct __declspec(uuid("00061032-0000-0000-c000-000000000046"))
TaskItem;
    // [ default ] interface _TaskItem
    // [ source ] dispinterface ItemEvents
    // [ default, source ] dispinterface ItemEvents_10

struct __declspec(uuid("00063104-0000-0000-c000-000000000046"))
AccountSelectorEvents : IDispatch
{};

struct __declspec(uuid("0006f03a-0000-0000-c000-000000000046"))
Application;
    // [ default ] interface _Application
    // [ source ] dispinterface ApplicationEvents
    // [ source ] dispinterface ApplicationEvents_10
    // [ default, source ] dispinterface ApplicationEvents_11

struct __declspec(uuid("0006103c-0000-0000-c000-000000000046"))
DistListItem;
    // [ default ] interface _DistListItem
    // [ source ] dispinterface ItemEvents
    // [ default, source ] dispinterface ItemEvents_10

struct __declspec(uuid("00061061-0000-0000-c000-000000000046"))
DocumentItem;
    // [ default ] interface _DocumentItem
    // [ source ] dispinterface ItemEvents
    // [ default, source ] dispinterface ItemEvents_10

struct __declspec(uuid("00063053-0000-0000-c000-000000000046"))
Explorers;
    // [ default ] interface _Explorers
    // [ default, source ] dispinterface ExplorersEvents

struct __declspec(uuid("00063054-0000-0000-c000-000000000046"))
Inspectors;
    // [ default ] interface _Inspectors
    // [ default, source ] dispinterface InspectorsEvents

struct __declspec(uuid("00063051-0000-0000-c000-000000000046"))
Folders;
    // [ default ] interface _Folders
    // [ default, source ] dispinterface FoldersEvents

struct __declspec(uuid("00063052-0000-0000-c000-000000000046"))
Items;
    // [ default ] interface _Items
    // [ default, source ] dispinterface ItemsEvents

struct __declspec(uuid("00061037-0000-0000-c000-000000000046"))
JournalItem;
    // [ default ] interface _JournalItem
    // [ source ] dispinterface ItemEvents
    // [ default, source ] dispinterface ItemEvents_10

struct __declspec(uuid("0006308b-0000-0000-c000-000000000046"))
NameSpace;
    // [ default ] interface _NameSpace
    // [ default, source ] dispinterface NameSpaceEvents

struct __declspec(uuid("00061034-0000-0000-c000-000000000046"))
NoteItem;
    // [ default ] interface _NoteItem

struct __declspec(uuid("00063056-0000-0000-c000-000000000046"))
OutlookBarGroups;
    // [ default ] interface _OutlookBarGroups
    // [ default, source ] dispinterface OutlookBarGroupsEvents

struct __declspec(uuid("00063055-0000-0000-c000-000000000046"))
OutlookBarPane;
    // [ default ] interface _OutlookBarPane
    // [ default, source ] dispinterface OutlookBarPaneEvents

struct __declspec(uuid("00063057-0000-0000-c000-000000000046"))
OutlookBarShortcuts;
    // [ default ] interface _OutlookBarShortcuts
    // [ default, source ] dispinterface OutlookBarShortcutsEvents

struct __declspec(uuid("0006103a-0000-0000-c000-000000000046"))
PostItem;
    // [ default ] interface _PostItem
    // [ source ] dispinterface ItemEvents
    // [ default, source ] dispinterface ItemEvents_10

struct __declspec(uuid("00061060-0000-0000-c000-000000000046"))
RemoteItem;
    // [ default ] interface _RemoteItem
    // [ source ] dispinterface ItemEvents
    // [ default, source ] dispinterface ItemEvents_10

struct __declspec(uuid("00061035-0000-0000-c000-000000000046"))
ReportItem;
    // [ default ] interface _ReportItem
    // [ source ] dispinterface ItemEvents
    // [ default, source ] dispinterface ItemEvents_10

struct __declspec(uuid("00061052-0000-0000-c000-000000000046"))
TaskRequestAcceptItem;
    // [ default ] interface _TaskRequestAcceptItem
    // [ source ] dispinterface ItemEvents
    // [ default, source ] dispinterface ItemEvents_10

struct __declspec(uuid("00061053-0000-0000-c000-000000000046"))
TaskRequestDeclineItem;
    // [ default ] interface _TaskRequestDeclineItem
    // [ source ] dispinterface ItemEvents
    // [ default, source ] dispinterface ItemEvents_10

struct __declspec(uuid("00061050-0000-0000-c000-000000000046"))
TaskRequestItem;
    // [ default ] interface _TaskRequestItem
    // [ source ] dispinterface ItemEvents
    // [ default, source ] dispinterface ItemEvents_10

struct __declspec(uuid("00061051-0000-0000-c000-000000000046"))
TaskRequestUpdateItem;
    // [ default ] interface _TaskRequestUpdateItem
    // [ source ] dispinterface ItemEvents
    // [ default, source ] dispinterface ItemEvents_10

struct __declspec(uuid("00061039-0000-0000-c000-000000000046"))
Results;
    // [ default ] interface _Results
    // [ default, source ] dispinterface ResultsEvents

struct __declspec(uuid("0006f027-0000-0000-c000-000000000046"))
Views;
    // [ default ] interface _Views
    // [ default, source ] dispinterface _ViewsEvents

struct __declspec(uuid("0006f028-0000-0000-c000-000000000046"))
Reminder;
    // [ default ] interface _Reminder

struct __declspec(uuid("0006f029-0000-0000-c000-000000000046"))
Reminders;
    // [ default ] interface _Reminders
    // [ default, source ] dispinterface ReminderCollectionEvents

struct __declspec(uuid("000610cb-0000-0000-c000-000000000046"))
StorageItem;
    // [ default ] interface _StorageItem

struct __declspec(uuid("000610f3-0000-0000-c000-000000000046"))
NavigationPane;
    // [ default ] interface _NavigationPane
    // [ default, source ] dispinterface NavigationPaneEvents_12

struct __declspec(uuid("000610f4-0000-0000-c000-000000000046"))
NavigationGroups;
    // [ default ] interface _NavigationGroups
    // [ default, source ] dispinterface NavigationGroupsEvents_12

struct __declspec(uuid("000610f8-0000-0000-c000-000000000046"))
DoNotUseMeFolder;
    // [ default ] interface MAPIFolder

struct __declspec(uuid("00062001-0000-0000-c000-000000000046"))
TimelineView;
    // [ default ] interface _TimelineView

struct __declspec(uuid("000610e9-0000-0000-c000-000000000046"))
MailModule;
    // [ default ] interface _MailModule

struct __declspec(uuid("000610ea-0000-0000-c000-000000000046"))
CalendarModule;
    // [ default ] interface _CalendarModule

struct __declspec(uuid("000610eb-0000-0000-c000-000000000046"))
ContactsModule;
    // [ default ] interface _ContactsModule

struct __declspec(uuid("000610ec-0000-0000-c000-000000000046"))
TasksModule;
    // [ default ] interface _TasksModule

struct __declspec(uuid("000610ed-0000-0000-c000-000000000046"))
JournalModule;
    // [ default ] interface _JournalModule

struct __declspec(uuid("000610ee-0000-0000-c000-000000000046"))
NotesModule;
    // [ default ] interface _NotesModule

struct __declspec(uuid("00062000-0000-0000-c000-000000000046"))
TableView;
    // [ default ] interface _TableView

struct __declspec(uuid("00062004-0000-0000-c000-000000000046"))
IconView;
    // [ default ] interface _IconView

struct __declspec(uuid("00062002-0000-0000-c000-000000000046"))
CardView;
    // [ default ] interface _CardView

struct __declspec(uuid("00062003-0000-0000-c000-000000000046"))
CalendarView;
    // [ default ] interface _CalendarView

struct __declspec(uuid("0006200b-0000-0000-c000-000000000046"))
BusinessCardView;
    // [ default ] interface _BusinessCardView

struct __declspec(uuid("00061059-0000-0000-c000-000000000046"))
FormRegionStartup;
    // [ default ] interface _FormRegionStartup

struct __declspec(uuid("000610fd-0000-0000-c000-000000000046"))
TimeZone;
    // [ default ] interface _TimeZone

struct __declspec(uuid("000610ff-0000-0000-c000-000000000046"))
SolutionsModule;
    // [ default ] interface _SolutionsModule

struct __declspec(uuid("00061101-0000-0000-c000-000000000046"))
Conversation;
    // [ default ] interface _Conversation

struct __declspec(uuid("00061103-0000-0000-c000-000000000046"))
AccountSelector;
    // [ default ] interface _AccountSelector
    // [ default, source ] dispinterface AccountSelectorEvents

struct __declspec(uuid("00061107-0000-0000-c000-000000000046"))
ConversationHeader;
    // [ default ] interface _ConversationHeader

struct __declspec(uuid("0006200c-0000-0000-c000-000000000046"))
PeopleView;
    // [ default ] interface _PeopleView

struct __declspec(uuid("000630fd-0000-0000-c000-000000000046"))
_TimeZone : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall get_DaylightDesignation (
        /*[out,retval]*/ BSTR * DaylightDesignation ) = 0;
      virtual HRESULT __stdcall get_StandardDesignation (
        /*[out,retval]*/ BSTR * StandardDesignation ) = 0;
      virtual HRESULT __stdcall get_Bias (
        /*[out,retval]*/ long * Bias ) = 0;
      virtual HRESULT __stdcall get_StandardBias (
        /*[out,retval]*/ long * StandardBias ) = 0;
      virtual HRESULT __stdcall get_DaylightBias (
        /*[out,retval]*/ long * DaylightBias ) = 0;
      virtual HRESULT __stdcall get_StandardDate (
        /*[out,retval]*/ DATE * StandardDate ) = 0;
      virtual HRESULT __stdcall get_DaylightDate (
        /*[out,retval]*/ DATE * DaylightDate ) = 0;
      virtual HRESULT __stdcall get_ID (
        /*[out,retval]*/ BSTR * ID ) = 0;
};

struct __declspec(uuid("00063001-0000-0000-c000-000000000046"))
_Application : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Assistant (
        /*[out,retval]*/ struct Office::Assistant * * Assistant ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall get_Version (
        /*[out,retval]*/ BSTR * Version ) = 0;
      virtual HRESULT __stdcall ActiveExplorer (
        /*[out,retval]*/ struct _Explorer * * ActiveExplorer ) = 0;
      virtual HRESULT __stdcall ActiveInspector (
        /*[out,retval]*/ struct _Inspector * * ActiveInspector ) = 0;
      virtual HRESULT __stdcall CreateItem (
        /*[in]*/ enum OlItemType ItemType,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall CreateItemFromTemplate (
        /*[in]*/ BSTR TemplatePath,
        /*[in]*/ VARIANT InFolder,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall CreateObject (
        /*[in]*/ BSTR ObjectName,
        /*[out,retval]*/ IDispatch * * Object ) = 0;
      virtual HRESULT __stdcall GetNamespace (
        /*[in]*/ BSTR Type,
        /*[out,retval]*/ struct _NameSpace * * NameSpace ) = 0;
      virtual HRESULT __stdcall Quit ( ) = 0;
      virtual HRESULT __stdcall get_COMAddIns (
        /*[out,retval]*/ struct Office::COMAddIns * * COMAddIns ) = 0;
      virtual HRESULT __stdcall get_Explorers (
        /*[out,retval]*/ struct _Explorers * * Explorers ) = 0;
      virtual HRESULT __stdcall get_Inspectors (
        /*[out,retval]*/ struct _Inspectors * * Inspectors ) = 0;
      virtual HRESULT __stdcall get_LanguageSettings (
        /*[out,retval]*/ struct Office::LanguageSettings * * LanguageSettings ) = 0;
      virtual HRESULT __stdcall get_ProductCode (
        /*[out,retval]*/ BSTR * ProductCode ) = 0;
      virtual HRESULT __stdcall get_AnswerWizard (
        /*[out,retval]*/ struct Office::AnswerWizard * * AnswerWizard ) = 0;
      virtual HRESULT __stdcall get_FeatureInstall (
        /*[out,retval]*/ enum Office::MsoFeatureInstall * FeatureInstall ) = 0;
      virtual HRESULT __stdcall put_FeatureInstall (
        /*[in]*/ enum Office::MsoFeatureInstall FeatureInstall ) = 0;
      virtual HRESULT __stdcall ActiveWindow (
        /*[out,retval]*/ IDispatch * * ActiveWindow ) = 0;
      virtual HRESULT __stdcall CopyFile (
        /*[in]*/ BSTR FilePath,
        /*[in]*/ BSTR DestFolderPath,
        /*[out,retval]*/ IDispatch * * DocItem ) = 0;
      virtual HRESULT __stdcall AdvancedSearch (
        /*[in]*/ BSTR Scope,
        /*[in]*/ VARIANT Filter,
        /*[in]*/ VARIANT SearchSubFolders,
        /*[in]*/ VARIANT Tag,
        /*[out,retval]*/ struct Search * * AdvancedSearch ) = 0;
      virtual HRESULT __stdcall IsSearchSynchronous (
        /*[in]*/ BSTR LookInFolders,
        /*[out,retval]*/ VARIANT_BOOL * IsSearchSynchronous ) = 0;
      virtual HRESULT __stdcall GetNewNickNames (
        /*[in]*/ VARIANT * pvar ) = 0;
      virtual HRESULT __stdcall get_Reminders (
        /*[out,retval]*/ struct _Reminders * * Reminders ) = 0;
      virtual HRESULT __stdcall get_DefaultProfileName (
        /*[out,retval]*/ BSTR * DefaultProfileName ) = 0;
      virtual HRESULT __stdcall get_IsTrusted (
        /*[out,retval]*/ VARIANT_BOOL * IsTrusted ) = 0;
      virtual HRESULT __stdcall GetObjectReference (
        /*[in]*/ IDispatch * Item,
        /*[in]*/ enum OlReferenceType ReferenceType,
        /*[out,retval]*/ IDispatch * * NewObject ) = 0;
      virtual HRESULT __stdcall get_Assistance (
        /*[out,retval]*/ struct Office::IAssistance * * Assistance ) = 0;
      virtual HRESULT __stdcall get_TimeZones (
        /*[out,retval]*/ struct _TimeZones * * TimeZones ) = 0;
      virtual HRESULT __stdcall get_PickerDialog (
        /*[out,retval]*/ struct Office::PickerDialog * * PickerDialog ) = 0;
      virtual HRESULT __stdcall RefreshFormRegionDefinition (
        /*[in]*/ BSTR RegionName ) = 0;
};

struct __declspec(uuid("00063002-0000-0000-c000-000000000046"))
_NameSpace : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_CurrentUser (
        /*[out,retval]*/ struct Recipient * * CurrentUser ) = 0;
      virtual HRESULT __stdcall get_Folders (
        /*[out,retval]*/ struct _Folders * * Folders ) = 0;
      virtual HRESULT __stdcall get_Type (
        /*[out,retval]*/ BSTR * Type ) = 0;
      virtual HRESULT __stdcall get_AddressLists (
        /*[out,retval]*/ struct AddressLists * * AddressLists ) = 0;
      virtual HRESULT __stdcall CreateRecipient (
        /*[in]*/ BSTR RecipientName,
        /*[out,retval]*/ struct Recipient * * Recipient ) = 0;
      virtual HRESULT __stdcall GetDefaultFolder (
        /*[in]*/ enum OlDefaultFolders FolderType,
        /*[out,retval]*/ struct MAPIFolder * * Folder ) = 0;
      virtual HRESULT __stdcall GetFolderFromID (
        /*[in]*/ BSTR EntryIDFolder,
        /*[in]*/ VARIANT EntryIDStore,
        /*[out,retval]*/ struct MAPIFolder * * Folder ) = 0;
      virtual HRESULT __stdcall GetItemFromID (
        /*[in]*/ BSTR EntryIDItem,
        /*[in]*/ VARIANT EntryIDStore,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall GetRecipientFromID (
        /*[in]*/ BSTR EntryID,
        /*[out,retval]*/ struct Recipient * * Recipient ) = 0;
      virtual HRESULT __stdcall GetSharedDefaultFolder (
        /*[in]*/ struct Recipient * Recipient,
        /*[in]*/ enum OlDefaultFolders FolderType,
        /*[out,retval]*/ struct MAPIFolder * * Folder ) = 0;
      virtual HRESULT __stdcall Logoff ( ) = 0;
      virtual HRESULT __stdcall Logon (
        /*[in]*/ VARIANT Profile = vtMissing,
        /*[in]*/ VARIANT Password = vtMissing,
        /*[in]*/ VARIANT ShowDialog = vtMissing,
        /*[in]*/ VARIANT NewSession = vtMissing ) = 0;
      virtual HRESULT __stdcall PickFolder (
        /*[out,retval]*/ struct MAPIFolder * * Folder ) = 0;
      virtual HRESULT __stdcall RefreshRemoteHeaders ( ) = 0;
      virtual HRESULT __stdcall get_SyncObjects (
        /*[out,retval]*/ struct SyncObjects * * SyncObjects ) = 0;
      virtual HRESULT __stdcall AddStore (
        /*[in]*/ VARIANT Store ) = 0;
      virtual HRESULT __stdcall RemoveStore (
        /*[in]*/ struct MAPIFolder * Folder ) = 0;
      virtual HRESULT __stdcall get_Offline (
        /*[out,retval]*/ VARIANT_BOOL * Offline ) = 0;
      virtual HRESULT __stdcall Dial (
        /*[in]*/ VARIANT ContactItem = vtMissing ) = 0;
      virtual HRESULT __stdcall get_MAPIOBJECT (
        /*[out,retval]*/ IUnknown * * MAPIOBJECT ) = 0;
      virtual HRESULT __stdcall get_ExchangeConnectionMode (
        /*[out,retval]*/ enum OlExchangeConnectionMode * ExchangeConnectionMode ) = 0;
      virtual HRESULT __stdcall AddStoreEx (
        /*[in]*/ VARIANT Store,
        /*[in]*/ enum OlStoreType Type ) = 0;
      virtual HRESULT __stdcall get_Accounts (
        /*[out,retval]*/ struct _Accounts * * Accounts ) = 0;
      virtual HRESULT __stdcall get_CurrentProfileName (
        /*[out,retval]*/ BSTR * CurrentProfileName ) = 0;
      virtual HRESULT __stdcall get_Stores (
        /*[out,retval]*/ struct _Stores * * Stores ) = 0;
      virtual HRESULT __stdcall GetSelectNamesDialog (
        /*[out,retval]*/ struct _SelectNamesDialog * * SelectNamesDialog ) = 0;
      virtual HRESULT __stdcall SendAndReceive (
        /*[in]*/ VARIANT_BOOL showProgressDialog ) = 0;
      virtual HRESULT __stdcall get_DefaultStore (
        /*[out,retval]*/ struct _Store * * DefaultStore ) = 0;
      virtual HRESULT __stdcall GetAddressEntryFromID (
        /*[in]*/ BSTR ID,
        /*[out,retval]*/ struct AddressEntry * * AddressEntry ) = 0;
      virtual HRESULT __stdcall GetGlobalAddressList (
        /*[out,retval]*/ struct AddressList * * globalAddressList ) = 0;
      virtual HRESULT __stdcall GetStoreFromID (
        /*[in]*/ BSTR ID,
        /*[out,retval]*/ struct _Store * * Store ) = 0;
      virtual HRESULT __stdcall get_Categories (
        /*[out,retval]*/ struct _Categories * * Categories ) = 0;
      virtual HRESULT __stdcall OpenSharedFolder (
        /*[in]*/ BSTR Path,
        /*[in]*/ VARIANT Name,
        /*[in]*/ VARIANT DownloadAttachments,
        /*[in]*/ VARIANT UseTTL,
        /*[out,retval]*/ struct MAPIFolder * * ret ) = 0;
      virtual HRESULT __stdcall OpenSharedItem (
        /*[in]*/ BSTR Path,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall CreateSharingItem (
        /*[in]*/ VARIANT Context,
        /*[in]*/ VARIANT Provider,
        /*[out,retval]*/ struct _SharingItem * * Item ) = 0;
      virtual HRESULT __stdcall get_ExchangeMailboxServerName (
        /*[out,retval]*/ BSTR * ExchangeMailboxServerName ) = 0;
      virtual HRESULT __stdcall get_ExchangeMailboxServerVersion (
        /*[out,retval]*/ BSTR * ExchangeMailboxServerVersion ) = 0;
      virtual HRESULT __stdcall CompareEntryIDs (
        /*[in]*/ BSTR FirstEntryID,
        /*[in]*/ BSTR SecondEntryID,
        /*[out,retval]*/ VARIANT_BOOL * Result ) = 0;
      virtual HRESULT __stdcall get_AutoDiscoverXml (
        /*[out,retval]*/ BSTR * AutoDiscoverXml ) = 0;
      virtual HRESULT __stdcall get_AutoDiscoverConnectionMode (
        /*[out,retval]*/ enum OlAutoDiscoverConnectionMode * AutoDiscoverConnectionMode ) = 0;
      virtual HRESULT __stdcall CreateContactCard (
        /*[in]*/ struct AddressEntry * AddressEntry,
        /*[out,retval]*/ struct Office::ContactCard * * Card ) = 0;
};

struct __declspec(uuid("00063043-0000-0000-c000-000000000046"))
Action : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_CopyLike (
        /*[out,retval]*/ enum OlActionCopyLike * CopyLike ) = 0;
      virtual HRESULT __stdcall put_CopyLike (
        /*[in]*/ enum OlActionCopyLike CopyLike ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_MessageClass (
        /*[out,retval]*/ BSTR * MessageClass ) = 0;
      virtual HRESULT __stdcall put_MessageClass (
        /*[in]*/ BSTR MessageClass ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR Name ) = 0;
      virtual HRESULT __stdcall get_Prefix (
        /*[out,retval]*/ BSTR * Prefix ) = 0;
      virtual HRESULT __stdcall put_Prefix (
        /*[in]*/ BSTR Prefix ) = 0;
      virtual HRESULT __stdcall get_ReplyStyle (
        /*[out,retval]*/ enum OlActionReplyStyle * ReplyStyle ) = 0;
      virtual HRESULT __stdcall put_ReplyStyle (
        /*[in]*/ enum OlActionReplyStyle ReplyStyle ) = 0;
      virtual HRESULT __stdcall get_ResponseStyle (
        /*[out,retval]*/ enum OlActionResponseStyle * ResponseStyle ) = 0;
      virtual HRESULT __stdcall put_ResponseStyle (
        /*[in]*/ enum OlActionResponseStyle ResponseStyle ) = 0;
      virtual HRESULT __stdcall get_ShowOn (
        /*[out,retval]*/ enum OlActionShowOn * ShowOn ) = 0;
      virtual HRESULT __stdcall put_ShowOn (
        /*[in]*/ enum OlActionShowOn ShowOn ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Execute (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
};

struct __declspec(uuid("0006303e-0000-0000-c000-000000000046"))
Actions : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct Action * * Item ) = 0;
      virtual HRESULT __stdcall Add (
        /*[out,retval]*/ struct Action * * Action ) = 0;
      virtual HRESULT __stdcall Remove (
        /*[in]*/ long Index ) = 0;
};

struct __declspec(uuid("00063007-0000-0000-c000-000000000046"))
Attachment : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_DisplayName (
        /*[out,retval]*/ BSTR * DisplayName ) = 0;
      virtual HRESULT __stdcall put_DisplayName (
        /*[in]*/ BSTR DisplayName ) = 0;
      virtual HRESULT __stdcall get_FileName (
        /*[out,retval]*/ BSTR * FileName ) = 0;
      virtual HRESULT __stdcall get_Index (
        /*[out,retval]*/ long * Index ) = 0;
      virtual HRESULT __stdcall get_MAPIOBJECT (
        /*[out,retval]*/ IUnknown * * MAPIOBJECT ) = 0;
      virtual HRESULT __stdcall get_PathName (
        /*[out,retval]*/ BSTR * PathName ) = 0;
      virtual HRESULT __stdcall get_Position (
        /*[out,retval]*/ long * Position ) = 0;
      virtual HRESULT __stdcall put_Position (
        /*[in]*/ long Position ) = 0;
      virtual HRESULT __stdcall get_Type (
        /*[out,retval]*/ enum OlAttachmentType * Type ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall SaveAsFile (
        /*[in]*/ BSTR Path ) = 0;
      virtual HRESULT __stdcall get_PropertyAccessor (
        /*[out,retval]*/ struct _PropertyAccessor * * PropertyAccessor ) = 0;
      virtual HRESULT __stdcall get_Size (
        /*[out,retval]*/ long * Size ) = 0;
      virtual HRESULT __stdcall get_BlockLevel (
        /*[out,retval]*/ enum OlAttachmentBlockLevel * BlockLevel ) = 0;
      virtual HRESULT __stdcall GetTemporaryFilePath (
        /*[out,retval]*/ BSTR * ptRet ) = 0;
};

struct __declspec(uuid("0006303c-0000-0000-c000-000000000046"))
Attachments : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct Attachment * * Item ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ VARIANT Source,
        /*[in]*/ VARIANT Type,
        /*[in]*/ VARIANT Position,
        /*[in]*/ VARIANT DisplayName,
        /*[out,retval]*/ struct Attachment * * Attachment ) = 0;
      virtual HRESULT __stdcall Remove (
        /*[in]*/ long Index ) = 0;
};

struct __declspec(uuid("0006302d-0000-0000-c000-000000000046"))
_PropertyAccessor : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall GetProperty (
        /*[in]*/ BSTR SchemaName,
        /*[out,retval]*/ VARIANT * Value ) = 0;
      virtual HRESULT __stdcall SetProperty (
        /*[in]*/ BSTR SchemaName,
        /*[in]*/ VARIANT Value ) = 0;
      virtual HRESULT __stdcall GetProperties (
        /*[in]*/ VARIANT SchemaNames,
        /*[out,retval]*/ VARIANT * Values ) = 0;
      virtual HRESULT __stdcall SetProperties (
        /*[in]*/ VARIANT SchemaNames,
        /*[in]*/ VARIANT Values,
        /*[out,retval]*/ VARIANT * ErrorResults ) = 0;
      virtual HRESULT __stdcall UTCToLocalTime (
        /*[in]*/ DATE Value,
        /*[out,retval]*/ DATE * ReturnValue ) = 0;
      virtual HRESULT __stdcall LocalTimeToUTC (
        /*[in]*/ DATE Value,
        /*[out,retval]*/ DATE * ReturnValue ) = 0;
      virtual HRESULT __stdcall StringToBinary (
        /*[in]*/ BSTR Value,
        /*[out,retval]*/ VARIANT * ReturnValue ) = 0;
      virtual HRESULT __stdcall BinaryToString (
        /*[in]*/ VARIANT Value,
        /*[out,retval]*/ BSTR * ReturnValue ) = 0;
      virtual HRESULT __stdcall DeleteProperty (
        /*[in]*/ BSTR SchemaName ) = 0;
      virtual HRESULT __stdcall DeleteProperties (
        /*[in]*/ VARIANT * SchemaNames,
        /*[out,retval]*/ VARIANT * ErrorResults ) = 0;
};

struct __declspec(uuid("00063046-0000-0000-c000-000000000046"))
FormDescription : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Category (
        /*[out,retval]*/ BSTR * Category ) = 0;
      virtual HRESULT __stdcall put_Category (
        /*[in]*/ BSTR Category ) = 0;
      virtual HRESULT __stdcall get_CategorySub (
        /*[out,retval]*/ BSTR * CategorySub ) = 0;
      virtual HRESULT __stdcall put_CategorySub (
        /*[in]*/ BSTR CategorySub ) = 0;
      virtual HRESULT __stdcall get_Comment (
        /*[out,retval]*/ BSTR * Comment ) = 0;
      virtual HRESULT __stdcall put_Comment (
        /*[in]*/ BSTR Comment ) = 0;
      virtual HRESULT __stdcall get_ContactName (
        /*[out,retval]*/ BSTR * ContactName ) = 0;
      virtual HRESULT __stdcall put_ContactName (
        /*[in]*/ BSTR ContactName ) = 0;
      virtual HRESULT __stdcall get_DisplayName (
        /*[out,retval]*/ BSTR * DisplayName ) = 0;
      virtual HRESULT __stdcall put_DisplayName (
        /*[in]*/ BSTR DisplayName ) = 0;
      virtual HRESULT __stdcall get_Hidden (
        /*[out,retval]*/ VARIANT_BOOL * Hidden ) = 0;
      virtual HRESULT __stdcall put_Hidden (
        /*[in]*/ VARIANT_BOOL Hidden ) = 0;
      virtual HRESULT __stdcall get_Icon (
        /*[out,retval]*/ BSTR * Icon ) = 0;
      virtual HRESULT __stdcall put_Icon (
        /*[in]*/ BSTR Icon ) = 0;
      virtual HRESULT __stdcall get_Locked (
        /*[out,retval]*/ VARIANT_BOOL * Locked ) = 0;
      virtual HRESULT __stdcall put_Locked (
        /*[in]*/ VARIANT_BOOL Locked ) = 0;
      virtual HRESULT __stdcall get_MessageClass (
        /*[out,retval]*/ BSTR * MessageClass ) = 0;
      virtual HRESULT __stdcall get_MiniIcon (
        /*[out,retval]*/ BSTR * MiniIcon ) = 0;
      virtual HRESULT __stdcall put_MiniIcon (
        /*[in]*/ BSTR MiniIcon ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR Name ) = 0;
      virtual HRESULT __stdcall get_Number (
        /*[out,retval]*/ BSTR * Number ) = 0;
      virtual HRESULT __stdcall put_Number (
        /*[in]*/ BSTR Number ) = 0;
      virtual HRESULT __stdcall get_OneOff (
        /*[out,retval]*/ VARIANT_BOOL * OneOff ) = 0;
      virtual HRESULT __stdcall put_OneOff (
        /*[in]*/ VARIANT_BOOL OneOff ) = 0;
      virtual HRESULT __stdcall get_Password (
        /*[out,retval]*/ BSTR * Password ) = 0;
      virtual HRESULT __stdcall put_Password (
        /*[in]*/ BSTR Password ) = 0;
      virtual HRESULT __stdcall get_ScriptText (
        /*[out,retval]*/ BSTR * ScriptText ) = 0;
      virtual HRESULT __stdcall get_Template (
        /*[out,retval]*/ BSTR * Template ) = 0;
      virtual HRESULT __stdcall put_Template (
        /*[in]*/ BSTR Template ) = 0;
      virtual HRESULT __stdcall get_UseWordMail (
        /*[out,retval]*/ VARIANT_BOOL * UseWordMail ) = 0;
      virtual HRESULT __stdcall put_UseWordMail (
        /*[in]*/ VARIANT_BOOL UseWordMail ) = 0;
      virtual HRESULT __stdcall get_Version (
        /*[out,retval]*/ BSTR * Version ) = 0;
      virtual HRESULT __stdcall put_Version (
        /*[in]*/ BSTR Version ) = 0;
      virtual HRESULT __stdcall PublishForm (
        /*[in]*/ enum OlFormRegistry Registry,
        /*[in]*/ VARIANT Folder = vtMissing ) = 0;
};

struct __declspec(uuid("00063087-0000-0000-c000-000000000046"))
Selection : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall get_Location (
        /*[out,retval]*/ enum OlSelectionLocation * Location ) = 0;
      virtual HRESULT __stdcall GetSelection (
        /*[in]*/ enum OlSelectionContents SelectionContents,
        /*[out,retval]*/ struct Selection * * SelectionOut ) = 0;
};

struct __declspec(uuid("000630f9-0000-0000-c000-000000000046"))
_AttachmentSelection : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct Attachment * * Item ) = 0;
      virtual HRESULT __stdcall get_Location (
        /*[out,retval]*/ enum OlSelectionLocation * Location ) = 0;
      virtual HRESULT __stdcall GetSelection (
        /*[in]*/ enum OlSelectionContents SelectionContents,
        /*[out,retval]*/ struct Selection * * SelectionOut ) = 0;
};

struct __declspec(uuid("00063005-0000-0000-c000-000000000046"))
_Inspector : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_CommandBars (
        /*[out,retval]*/ struct Office::_CommandBars * * CommandBars ) = 0;
      virtual HRESULT __stdcall get_CurrentItem (
        /*[out,retval]*/ IDispatch * * CurrentItem ) = 0;
      virtual HRESULT __stdcall get_EditorType (
        /*[out,retval]*/ enum OlEditorType * EditorType ) = 0;
      virtual HRESULT __stdcall get_ModifiedFormPages (
        /*[out,retval]*/ IDispatch * * ModifiedFormPages ) = 0;
      virtual HRESULT __stdcall Close (
        /*[in]*/ enum OlInspectorClose SaveMode ) = 0;
      virtual HRESULT __stdcall Display (
        /*[in]*/ VARIANT Modal = vtMissing ) = 0;
      virtual HRESULT __stdcall HideFormPage (
        /*[in]*/ BSTR PageName ) = 0;
      virtual HRESULT __stdcall IsWordMail (
        /*[out,retval]*/ VARIANT_BOOL * IsWordMail ) = 0;
      virtual HRESULT __stdcall SetCurrentFormPage (
        /*[in]*/ BSTR PageName ) = 0;
      virtual HRESULT __stdcall ShowFormPage (
        /*[in]*/ BSTR PageName ) = 0;
      virtual HRESULT __stdcall get_HTMLEditor (
        /*[out,retval]*/ IDispatch * * HTMLEditor ) = 0;
      virtual HRESULT __stdcall get_WordEditor (
        /*[out,retval]*/ IDispatch * * WordEditor ) = 0;
      virtual HRESULT __stdcall get_Caption (
        /*[out,retval]*/ BSTR * Caption ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ long * Height ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ long Height ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ long * Left ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ long Left ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ long * Top ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ long Top ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ long * Width ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ long Width ) = 0;
      virtual HRESULT __stdcall get_WindowState (
        /*[out,retval]*/ enum OlWindowState * WindowState ) = 0;
      virtual HRESULT __stdcall put_WindowState (
        /*[in]*/ enum OlWindowState WindowState ) = 0;
      virtual HRESULT __stdcall Activate ( ) = 0;
      virtual HRESULT __stdcall SetControlItemProperty (
        /*[in]*/ IDispatch * Control,
        /*[in]*/ BSTR PropertyName ) = 0;
      virtual HRESULT __stdcall NewFormRegion (
        /*[out,retval]*/ IDispatch * * Form ) = 0;
      virtual HRESULT __stdcall OpenFormRegion (
        /*[in]*/ BSTR Path,
        /*[out,retval]*/ IDispatch * * Form ) = 0;
      virtual HRESULT __stdcall SaveFormRegion (
        /*[in]*/ IDispatch * Page,
        /*[in]*/ BSTR FileName ) = 0;
      virtual HRESULT __stdcall get_AttachmentSelection (
        /*[out,retval]*/ struct _AttachmentSelection * * AttachmentSelection ) = 0;
      virtual HRESULT __stdcall SetSchedulingStartTime (
        /*[in]*/ DATE Start ) = 0;
};

struct __declspec(uuid("00063042-0000-0000-c000-000000000046"))
UserProperty : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Formula (
        /*[out,retval]*/ BSTR * Formula ) = 0;
      virtual HRESULT __stdcall put_Formula (
        /*[in]*/ BSTR Formula ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall get_Type (
        /*[out,retval]*/ enum OlUserPropertyType * Type ) = 0;
      virtual HRESULT __stdcall get_ValidationFormula (
        /*[out,retval]*/ BSTR * ValidationFormula ) = 0;
      virtual HRESULT __stdcall put_ValidationFormula (
        /*[in]*/ BSTR ValidationFormula ) = 0;
      virtual HRESULT __stdcall get_ValidationText (
        /*[out,retval]*/ BSTR * ValidationText ) = 0;
      virtual HRESULT __stdcall put_ValidationText (
        /*[in]*/ BSTR ValidationText ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * Value ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT Value ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall get_IsUserProperty (
        /*[out,retval]*/ VARIANT_BOOL * IsUserProperty ) = 0;
};

struct __declspec(uuid("0006303d-0000-0000-c000-000000000046"))
UserProperties : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct UserProperty * * Item ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ BSTR Name,
        /*[in]*/ enum OlUserPropertyType Type,
        /*[in]*/ VARIANT AddToFolderFields,
        /*[in]*/ VARIANT DisplayFormat,
        /*[out,retval]*/ struct UserProperty * * UserProperty ) = 0;
      virtual HRESULT __stdcall Find (
        /*[in]*/ BSTR Name,
        /*[in]*/ VARIANT Custom,
        /*[out,retval]*/ struct UserProperty * * UserProperty ) = 0;
      virtual HRESULT __stdcall Remove (
        /*[in]*/ long Index ) = 0;
};

struct __declspec(uuid("00063041-0000-0000-c000-000000000046"))
_Items : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall get_RawTable (
        /*[out,retval]*/ IUnknown * * RawTable ) = 0;
      virtual HRESULT __stdcall get_IncludeRecurrences (
        /*[out,retval]*/ VARIANT_BOOL * IncludeRecurrences ) = 0;
      virtual HRESULT __stdcall put_IncludeRecurrences (
        /*[in]*/ VARIANT_BOOL IncludeRecurrences ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ VARIANT Type,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall Find (
        /*[in]*/ BSTR Filter,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall FindNext (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall GetFirst (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall GetLast (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall GetNext (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall GetPrevious (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall Remove (
        /*[in]*/ long Index ) = 0;
      virtual HRESULT __stdcall ResetColumns ( ) = 0;
      virtual HRESULT __stdcall Restrict (
        /*[in]*/ BSTR Filter,
        /*[out,retval]*/ struct _Items * * Items ) = 0;
      virtual HRESULT __stdcall SetColumns (
        /*[in]*/ BSTR Columns ) = 0;
      virtual HRESULT __stdcall Sort (
        /*[in]*/ BSTR Property,
        /*[in]*/ VARIANT Descending = vtMissing ) = 0;
};

struct __declspec(uuid("00063009-0000-0000-c000-000000000046"))
Panes : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
};

struct __declspec(uuid("000630e6-0000-0000-c000-000000000046"))
_NavigationPane : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_IsCollapsed (
        /*[out,retval]*/ VARIANT_BOOL * IsCollapsed ) = 0;
      virtual HRESULT __stdcall put_IsCollapsed (
        /*[in]*/ VARIANT_BOOL IsCollapsed ) = 0;
      virtual HRESULT __stdcall get_CurrentModule (
        /*[out,retval]*/ struct _NavigationModule * * CurrentModule ) = 0;
      virtual HRESULT __stdcall putref_CurrentModule (
        /*[in]*/ struct _NavigationModule * CurrentModule ) = 0;
      virtual HRESULT __stdcall get_DisplayedModuleCount (
        /*[out,retval]*/ long * DisplayedModuleCount ) = 0;
      virtual HRESULT __stdcall put_DisplayedModuleCount (
        /*[in]*/ long DisplayedModuleCount ) = 0;
      virtual HRESULT __stdcall get_Modules (
        /*[out,retval]*/ struct _NavigationModules * * Modules ) = 0;
};

struct __declspec(uuid("000630e8-0000-0000-c000-000000000046"))
_NavigationModule : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_NavigationModuleType (
        /*[out,retval]*/ enum OlNavigationModuleType * NavigationModuleType ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall get_Position (
        /*[out,retval]*/ long * Position ) = 0;
      virtual HRESULT __stdcall put_Position (
        /*[in]*/ long Position ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * Visible ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL Visible ) = 0;
};

struct __declspec(uuid("000630e7-0000-0000-c000-000000000046"))
_NavigationModules : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _NavigationModule * * Item ) = 0;
      virtual HRESULT __stdcall GetNavigationModule (
        /*[in]*/ enum OlNavigationModuleType ModuleType,
        /*[out,retval]*/ struct _NavigationModule * * NavigationModule ) = 0;
};

struct __declspec(uuid("000630cd-0000-0000-c000-000000000046"))
_Rule : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR Name ) = 0;
      virtual HRESULT __stdcall get_ExecutionOrder (
        /*[out,retval]*/ long * ExecutionOrder ) = 0;
      virtual HRESULT __stdcall put_ExecutionOrder (
        /*[in]*/ long ExecutionOrder ) = 0;
      virtual HRESULT __stdcall get_RuleType (
        /*[out,retval]*/ enum OlRuleType * RuleType ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_IsLocalRule (
        /*[out,retval]*/ VARIANT_BOOL * IsLocalRule ) = 0;
      virtual HRESULT __stdcall Execute (
        /*[in]*/ VARIANT ShowProgress = vtMissing,
        /*[in]*/ VARIANT Folder = vtMissing,
        /*[in]*/ VARIANT IncludeSubfolders = vtMissing,
        /*[in]*/ VARIANT RuleExecuteOption = vtMissing ) = 0;
      virtual HRESULT __stdcall get_Actions (
        /*[out,retval]*/ struct _RuleActions * * Actions ) = 0;
      virtual HRESULT __stdcall get_Conditions (
        /*[out,retval]*/ struct _RuleConditions * * Conditions ) = 0;
      virtual HRESULT __stdcall get_Exceptions (
        /*[out,retval]*/ struct _RuleConditions * * Exceptions ) = 0;
};

struct __declspec(uuid("000630cc-0000-0000-c000-000000000046"))
_Rules : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _Rule * * Item ) = 0;
      virtual HRESULT __stdcall Create (
        /*[in]*/ BSTR Name,
        /*[in]*/ enum OlRuleType RuleType,
        /*[out,retval]*/ struct _Rule * * Rule ) = 0;
      virtual HRESULT __stdcall Save (
        /*[in]*/ VARIANT ShowProgress = vtMissing ) = 0;
      virtual HRESULT __stdcall Remove (
        /*[in]*/ VARIANT Index ) = 0;
      virtual HRESULT __stdcall get_IsRssRulesProcessingEnabled (
        /*[out,retval]*/ VARIANT_BOOL * IsRssRulesProcessingEnabled ) = 0;
      virtual HRESULT __stdcall put_IsRssRulesProcessingEnabled (
        /*[in]*/ VARIANT_BOOL IsRssRulesProcessingEnabled ) = 0;
};

struct __declspec(uuid("000630cf-0000-0000-c000-000000000046"))
_RuleAction : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_ActionType (
        /*[out,retval]*/ enum OlRuleActionType * ActionType ) = 0;
};

struct __declspec(uuid("000630ce-0000-0000-c000-000000000046"))
_RuleActions : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ long Index,
        /*[out,retval]*/ struct _RuleAction * * Item ) = 0;
      virtual HRESULT __stdcall get_CopyToFolder (
        /*[out,retval]*/ struct _MoveOrCopyRuleAction * * CopyToFolder ) = 0;
      virtual HRESULT __stdcall get_DeletePermanently (
        /*[out,retval]*/ struct _RuleAction * * DeletePermanently ) = 0;
      virtual HRESULT __stdcall get_Delete (
        /*[out,retval]*/ struct _RuleAction * * Delete ) = 0;
      virtual HRESULT __stdcall get_DesktopAlert (
        /*[out,retval]*/ struct _RuleAction * * DesktopAlert ) = 0;
      virtual HRESULT __stdcall get_NotifyDelivery (
        /*[out,retval]*/ struct _RuleAction * * NotifyDelivery ) = 0;
      virtual HRESULT __stdcall get_NotifyRead (
        /*[out,retval]*/ struct _RuleAction * * NotifyRead ) = 0;
      virtual HRESULT __stdcall get_Stop (
        /*[out,retval]*/ struct _RuleAction * * Stop ) = 0;
      virtual HRESULT __stdcall get_MoveToFolder (
        /*[out,retval]*/ struct _MoveOrCopyRuleAction * * MoveToFolder ) = 0;
      virtual HRESULT __stdcall get_CC (
        /*[out,retval]*/ struct _SendRuleAction * * CC ) = 0;
      virtual HRESULT __stdcall get_Forward (
        /*[out,retval]*/ struct _SendRuleAction * * Forward ) = 0;
      virtual HRESULT __stdcall get_ForwardAsAttachment (
        /*[out,retval]*/ struct _SendRuleAction * * ForwardAsAttachment ) = 0;
      virtual HRESULT __stdcall get_Redirect (
        /*[out,retval]*/ struct _SendRuleAction * * Redirect ) = 0;
      virtual HRESULT __stdcall get_AssignToCategory (
        /*[out,retval]*/ struct _AssignToCategoryRuleAction * * AssignToCategory ) = 0;
      virtual HRESULT __stdcall get_PlaySound (
        /*[out,retval]*/ struct _PlaySoundRuleAction * * PlaySound ) = 0;
      virtual HRESULT __stdcall get_MarkAsTask (
        /*[out,retval]*/ struct _MarkAsTaskRuleAction * * MarkAsTask ) = 0;
      virtual HRESULT __stdcall get_NewItemAlert (
        /*[out,retval]*/ struct _NewItemAlertRuleAction * * NewItemAlert ) = 0;
      virtual HRESULT __stdcall get_ClearCategories (
        /*[out,retval]*/ struct _RuleAction * * ClearCategories ) = 0;
};

struct __declspec(uuid("000630d4-0000-0000-c000-000000000046"))
_AssignToCategoryRuleAction : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_ActionType (
        /*[out,retval]*/ enum OlRuleActionType * ActionType ) = 0;
      virtual HRESULT __stdcall get_Categories (
        /*[out,retval]*/ VARIANT * Categories ) = 0;
      virtual HRESULT __stdcall put_Categories (
        /*[in]*/ VARIANT Categories ) = 0;
};

struct __declspec(uuid("000630d5-0000-0000-c000-000000000046"))
_PlaySoundRuleAction : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_ActionType (
        /*[out,retval]*/ enum OlRuleActionType * ActionType ) = 0;
      virtual HRESULT __stdcall get_FilePath (
        /*[out,retval]*/ BSTR * FilePath ) = 0;
      virtual HRESULT __stdcall put_FilePath (
        /*[in]*/ BSTR FilePath ) = 0;
};

struct __declspec(uuid("000630d6-0000-0000-c000-000000000046"))
_MarkAsTaskRuleAction : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_ActionType (
        /*[out,retval]*/ enum OlRuleActionType * ActionType ) = 0;
      virtual HRESULT __stdcall get_FlagTo (
        /*[out,retval]*/ BSTR * FlagTo ) = 0;
      virtual HRESULT __stdcall put_FlagTo (
        /*[in]*/ BSTR FlagTo ) = 0;
      virtual HRESULT __stdcall get_MarkInterval (
        /*[out,retval]*/ enum OlMarkInterval * MarkInterval ) = 0;
      virtual HRESULT __stdcall put_MarkInterval (
        /*[in]*/ enum OlMarkInterval MarkInterval ) = 0;
};

struct __declspec(uuid("000630d7-0000-0000-c000-000000000046"))
_NewItemAlertRuleAction : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_ActionType (
        /*[out,retval]*/ enum OlRuleActionType * ActionType ) = 0;
      virtual HRESULT __stdcall get_Text (
        /*[out,retval]*/ BSTR * Text ) = 0;
      virtual HRESULT __stdcall put_Text (
        /*[in]*/ BSTR Text ) = 0;
};

struct __declspec(uuid("000630d9-0000-0000-c000-000000000046"))
_RuleCondition : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_ConditionType (
        /*[out,retval]*/ enum OlRuleConditionType * ConditionType ) = 0;
};

struct __declspec(uuid("000630d8-0000-0000-c000-000000000046"))
_RuleConditions : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ long Index,
        /*[out,retval]*/ struct _RuleCondition * * Item ) = 0;
      virtual HRESULT __stdcall get_CC (
        /*[out,retval]*/ struct _RuleCondition * * CC ) = 0;
      virtual HRESULT __stdcall get_HasAttachment (
        /*[out,retval]*/ struct _RuleCondition * * HasAttachment ) = 0;
      virtual HRESULT __stdcall get_Importance (
        /*[out,retval]*/ struct _ImportanceRuleCondition * * Importance ) = 0;
      virtual HRESULT __stdcall get_MeetingInviteOrUpdate (
        /*[out,retval]*/ struct _RuleCondition * * MeetingInviteOrUpdate ) = 0;
      virtual HRESULT __stdcall get_NotTo (
        /*[out,retval]*/ struct _RuleCondition * * NotTo ) = 0;
      virtual HRESULT __stdcall get_OnlyToMe (
        /*[out,retval]*/ struct _RuleCondition * * OnlyToMe ) = 0;
      virtual HRESULT __stdcall get_ToMe (
        /*[out,retval]*/ struct _RuleCondition * * ToMe ) = 0;
      virtual HRESULT __stdcall get_ToOrCc (
        /*[out,retval]*/ struct _RuleCondition * * ToOrCc ) = 0;
      virtual HRESULT __stdcall get_Account (
        /*[out,retval]*/ struct _AccountRuleCondition * * Account ) = 0;
      virtual HRESULT __stdcall get_Body (
        /*[out,retval]*/ struct _TextRuleCondition * * Body ) = 0;
      virtual HRESULT __stdcall get_BodyOrSubject (
        /*[out,retval]*/ struct _TextRuleCondition * * BodyOrSubject ) = 0;
      virtual HRESULT __stdcall get_Category (
        /*[out,retval]*/ struct _CategoryRuleCondition * * Category ) = 0;
      virtual HRESULT __stdcall get_FormName (
        /*[out,retval]*/ struct _FormNameRuleCondition * * FormName ) = 0;
      virtual HRESULT __stdcall get_From (
        /*[out,retval]*/ struct _ToOrFromRuleCondition * * From ) = 0;
      virtual HRESULT __stdcall get_MessageHeader (
        /*[out,retval]*/ struct _TextRuleCondition * * MessageHeader ) = 0;
      virtual HRESULT __stdcall get_RecipientAddress (
        /*[out,retval]*/ struct _AddressRuleCondition * * RecipientAddress ) = 0;
      virtual HRESULT __stdcall get_SenderAddress (
        /*[out,retval]*/ struct _AddressRuleCondition * * SenderAddress ) = 0;
      virtual HRESULT __stdcall get_SenderInAddressList (
        /*[out,retval]*/ struct _SenderInAddressListRuleCondition * * SenderInAddressList ) = 0;
      virtual HRESULT __stdcall get_Subject (
        /*[out,retval]*/ struct _TextRuleCondition * * Subject ) = 0;
      virtual HRESULT __stdcall get_SentTo (
        /*[out,retval]*/ struct _ToOrFromRuleCondition * * SentTo ) = 0;
      virtual HRESULT __stdcall get_OnLocalMachine (
        /*[out,retval]*/ struct _RuleCondition * * OnLocalMachine ) = 0;
      virtual HRESULT __stdcall get_OnOtherMachine (
        /*[out,retval]*/ struct _RuleCondition * * OnOtherMachine ) = 0;
      virtual HRESULT __stdcall get_AnyCategory (
        /*[out,retval]*/ struct _RuleCondition * * AnyCategory ) = 0;
      virtual HRESULT __stdcall get_FromAnyRSSFeed (
        /*[out,retval]*/ struct _RuleCondition * * FromAnyRSSFeed ) = 0;
      virtual HRESULT __stdcall get_FromRssFeed (
        /*[out,retval]*/ struct _FromRssFeedRuleCondition * * FromRssFeed ) = 0;
};

struct __declspec(uuid("000630da-0000-0000-c000-000000000046"))
_ImportanceRuleCondition : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_ConditionType (
        /*[out,retval]*/ enum OlRuleConditionType * ConditionType ) = 0;
      virtual HRESULT __stdcall get_Importance (
        /*[out,retval]*/ enum OlImportance * Importance ) = 0;
      virtual HRESULT __stdcall put_Importance (
        /*[in]*/ enum OlImportance Importance ) = 0;
};

struct __declspec(uuid("000630db-0000-0000-c000-000000000046"))
_AccountRuleCondition : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_ConditionType (
        /*[out,retval]*/ enum OlRuleConditionType * ConditionType ) = 0;
      virtual HRESULT __stdcall get_Account (
        /*[out,retval]*/ struct _Account * * Account ) = 0;
      virtual HRESULT __stdcall put_Account (
        /*[in]*/ struct _Account * Account ) = 0;
};

struct __declspec(uuid("000630e0-0000-0000-c000-000000000046"))
_TextRuleCondition : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_ConditionType (
        /*[out,retval]*/ enum OlRuleConditionType * ConditionType ) = 0;
      virtual HRESULT __stdcall get_Text (
        /*[out,retval]*/ VARIANT * Text ) = 0;
      virtual HRESULT __stdcall put_Text (
        /*[in]*/ VARIANT Text ) = 0;
};

struct __declspec(uuid("000630dc-0000-0000-c000-000000000046"))
_CategoryRuleCondition : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_ConditionType (
        /*[out,retval]*/ enum OlRuleConditionType * ConditionType ) = 0;
      virtual HRESULT __stdcall get_Categories (
        /*[out,retval]*/ VARIANT * Categories ) = 0;
      virtual HRESULT __stdcall put_Categories (
        /*[in]*/ VARIANT Categories ) = 0;
};

struct __declspec(uuid("000630dd-0000-0000-c000-000000000046"))
_FormNameRuleCondition : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_ConditionType (
        /*[out,retval]*/ enum OlRuleConditionType * ConditionType ) = 0;
      virtual HRESULT __stdcall get_FormName (
        /*[out,retval]*/ VARIANT * FormName ) = 0;
      virtual HRESULT __stdcall put_FormName (
        /*[in]*/ VARIANT FormName ) = 0;
};

struct __declspec(uuid("000630fa-0000-0000-c000-000000000046"))
_AddressRuleCondition : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_ConditionType (
        /*[out,retval]*/ enum OlRuleConditionType * ConditionType ) = 0;
      virtual HRESULT __stdcall get_Address (
        /*[out,retval]*/ VARIANT * Address ) = 0;
      virtual HRESULT __stdcall put_Address (
        /*[in]*/ VARIANT Address ) = 0;
};

struct __declspec(uuid("000630fb-0000-0000-c000-000000000046"))
_FromRssFeedRuleCondition : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_ConditionType (
        /*[out,retval]*/ enum OlRuleConditionType * ConditionType ) = 0;
      virtual HRESULT __stdcall get_FromRssFeed (
        /*[out,retval]*/ VARIANT * FromRssFeed ) = 0;
      virtual HRESULT __stdcall put_FromRssFeed (
        /*[in]*/ VARIANT FromRssFeed ) = 0;
};

struct __declspec(uuid("000630e3-0000-0000-c000-000000000046"))
_Category : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR Name ) = 0;
      virtual HRESULT __stdcall get_Color (
        /*[out,retval]*/ enum OlCategoryColor * Color ) = 0;
      virtual HRESULT __stdcall put_Color (
        /*[in]*/ enum OlCategoryColor Color ) = 0;
      virtual HRESULT __stdcall get_ShortcutKey (
        /*[out,retval]*/ enum OlCategoryShortcutKey * ShortcutKey ) = 0;
      virtual HRESULT __stdcall put_ShortcutKey (
        /*[in]*/ enum OlCategoryShortcutKey ShortcutKey ) = 0;
      virtual HRESULT __stdcall get_CategoryID (
        /*[out,retval]*/ BSTR * CategoryID ) = 0;
      virtual HRESULT __stdcall get_CategoryBorderColor (
        /*[out,retval]*/ OLE_COLOR * CategoryBorderColor ) = 0;
      virtual HRESULT __stdcall get_CategoryGradientTopColor (
        /*[out,retval]*/ OLE_COLOR * CategoryGradientTopColor ) = 0;
      virtual HRESULT __stdcall get_CategoryGradientBottomColor (
        /*[out,retval]*/ OLE_COLOR * CategoryGradientBottomColor ) = 0;
};

struct __declspec(uuid("000630e4-0000-0000-c000-000000000046"))
_Categories : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _Category * * Item ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ BSTR Name,
        /*[in]*/ VARIANT Color,
        /*[in]*/ VARIANT ShortcutKey,
        /*[out,retval]*/ struct _Category * * ppCategory ) = 0;
      virtual HRESULT __stdcall Remove (
        /*[in]*/ VARIANT Index ) = 0;
};

struct __declspec(uuid("00063095-0000-0000-c000-000000000046"))
View : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall Apply ( ) = 0;
      virtual HRESULT __stdcall Copy (
        /*[in]*/ BSTR Name,
        /*[in]*/ enum OlViewSaveOption SaveOption,
        /*[out,retval]*/ struct View * * ppview ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Reset ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall get_Language (
        /*[out,retval]*/ BSTR * Language ) = 0;
      virtual HRESULT __stdcall put_Language (
        /*[in]*/ BSTR Language ) = 0;
      virtual HRESULT __stdcall get_LockUserChanges (
        /*[out,retval]*/ VARIANT_BOOL * LockUserChanges ) = 0;
      virtual HRESULT __stdcall put_LockUserChanges (
        /*[in]*/ VARIANT_BOOL LockUserChanges ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR Name ) = 0;
      virtual HRESULT __stdcall get_SaveOption (
        /*[out,retval]*/ enum OlViewSaveOption * SaveOption ) = 0;
      virtual HRESULT __stdcall get_Standard (
        /*[out,retval]*/ VARIANT_BOOL * Standard ) = 0;
      virtual HRESULT __stdcall get_ViewType (
        /*[out,retval]*/ enum OlViewType * ViewType ) = 0;
      virtual HRESULT __stdcall get_XML (
        /*[out,retval]*/ BSTR * XML ) = 0;
      virtual HRESULT __stdcall put_XML (
        /*[in]*/ BSTR XML ) = 0;
      virtual HRESULT __stdcall GoToDate (
        /*[in]*/ DATE Date ) = 0;
      virtual HRESULT __stdcall get_Filter (
        /*[out,retval]*/ BSTR * Filter ) = 0;
      virtual HRESULT __stdcall put_Filter (
        /*[in]*/ BSTR Filter ) = 0;
};

struct __declspec(uuid("0006308d-0000-0000-c000-000000000046"))
_Views : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct View * * Item ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ BSTR Name,
        /*[in]*/ enum OlViewType ViewType,
        /*[in]*/ enum OlViewSaveOption SaveOption,
        /*[out,retval]*/ struct View * * ppview ) = 0;
      virtual HRESULT __stdcall Remove (
        /*[in]*/ VARIANT Index ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * ppvObject ) = 0;
};

struct __declspec(uuid("000630cb-0000-0000-c000-000000000046"))
_StorageItem : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_CreationTime (
        /*[out,retval]*/ DATE * CreationTime ) = 0;
      virtual HRESULT __stdcall get_LastModificationTime (
        /*[out,retval]*/ DATE * LastModificationTime ) = 0;
      virtual HRESULT __stdcall get_EntryID (
        /*[out,retval]*/ BSTR * EntryID ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall get_Body (
        /*[out,retval]*/ BSTR * Body ) = 0;
      virtual HRESULT __stdcall put_Body (
        /*[in]*/ BSTR Body ) = 0;
      virtual HRESULT __stdcall get_Attachments (
        /*[out,retval]*/ struct Attachments * * Attachments ) = 0;
      virtual HRESULT __stdcall get_Size (
        /*[out,retval]*/ long * Size ) = 0;
      virtual HRESULT __stdcall get_UserProperties (
        /*[out,retval]*/ struct UserProperties * * UserProperties ) = 0;
      virtual HRESULT __stdcall get_PropertyAccessor (
        /*[out,retval]*/ struct _PropertyAccessor * * PropertyAccessor ) = 0;
      virtual HRESULT __stdcall get_Subject (
        /*[out,retval]*/ BSTR * Subject ) = 0;
      virtual HRESULT __stdcall put_Subject (
        /*[in]*/ BSTR Subject ) = 0;
      virtual HRESULT __stdcall get_Creator (
        /*[out,retval]*/ BSTR * Creator ) = 0;
      virtual HRESULT __stdcall put_Creator (
        /*[in]*/ BSTR Creator ) = 0;
};

struct __declspec(uuid("000630d2-0000-0000-c000-000000000046"))
_Table : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall FindRow (
        /*[in]*/ BSTR Filter,
        /*[out,retval]*/ struct _Row * * Row ) = 0;
      virtual HRESULT __stdcall FindNextRow (
        /*[out,retval]*/ struct _Row * * Row ) = 0;
      virtual HRESULT __stdcall GetArray (
        /*[in]*/ long MaxRows,
        /*[out,retval]*/ VARIANT * Rows ) = 0;
      virtual HRESULT __stdcall GetNextRow (
        /*[out,retval]*/ struct _Row * * NextRow ) = 0;
      virtual HRESULT __stdcall GetRowCount (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall MoveToStart ( ) = 0;
      virtual HRESULT __stdcall Restrict (
        /*[in]*/ BSTR Filter,
        /*[out,retval]*/ struct _Table * * Table ) = 0;
      virtual HRESULT __stdcall Sort (
        /*[in]*/ BSTR SortProperty,
        /*[in]*/ VARIANT Descending = vtMissing ) = 0;
      virtual HRESULT __stdcall get_Columns (
        /*[out,retval]*/ struct _Columns * * Columns ) = 0;
      virtual HRESULT __stdcall get_EndOfTable (
        /*[out,retval]*/ VARIANT_BOOL * EndOfTable ) = 0;
};

struct __declspec(uuid("000630d3-0000-0000-c000-000000000046"))
_Row : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall BinaryToString (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ BSTR * Value ) = 0;
      virtual HRESULT __stdcall GetValues (
        /*[out,retval]*/ VARIANT * Values ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ VARIANT * Value ) = 0;
      virtual HRESULT __stdcall LocalTimeToUTC (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ DATE * Value ) = 0;
      virtual HRESULT __stdcall UTCToLocalTime (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ DATE * Value ) = 0;
};

struct __declspec(uuid("000630e5-0000-0000-c000-000000000046"))
_Column : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
};

struct __declspec(uuid("000630e1-0000-0000-c000-000000000046"))
_Columns : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _Column * * Item ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ BSTR Name,
        /*[out,retval]*/ struct _Column * * Column ) = 0;
      virtual HRESULT __stdcall Remove (
        /*[in]*/ VARIANT Index ) = 0;
      virtual HRESULT __stdcall RemoveAll ( ) = 0;
};

struct __declspec(uuid("00063089-0000-0000-c000-000000000046"))
Link : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall get_Type (
        /*[out,retval]*/ enum OlObjectClass * Type ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
};

struct __declspec(uuid("0006308a-0000-0000-c000-000000000046"))
Links : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct Link * * Item ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ IDispatch * Item,
        /*[out,retval]*/ struct Link * * Link ) = 0;
      virtual HRESULT __stdcall Remove (
        /*[in]*/ VARIANT Index ) = 0;
};

struct __declspec(uuid("000630a7-0000-0000-c000-000000000046"))
ItemProperty : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Formula (
        /*[out,retval]*/ BSTR * Formula ) = 0;
      virtual HRESULT __stdcall put_Formula (
        /*[in]*/ BSTR Formula ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall get_Type (
        /*[out,retval]*/ enum OlUserPropertyType * Type ) = 0;
      virtual HRESULT __stdcall get_ValidationFormula (
        /*[out,retval]*/ BSTR * ValidationFormula ) = 0;
      virtual HRESULT __stdcall put_ValidationFormula (
        /*[in]*/ BSTR ValidationFormula ) = 0;
      virtual HRESULT __stdcall get_ValidationText (
        /*[out,retval]*/ BSTR * ValidationText ) = 0;
      virtual HRESULT __stdcall put_ValidationText (
        /*[in]*/ BSTR ValidationText ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * Value ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT Value ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall get_IsUserProperty (
        /*[out,retval]*/ VARIANT_BOOL * IsUserProperty ) = 0;
};

struct __declspec(uuid("000630a8-0000-0000-c000-000000000046"))
ItemProperties : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct ItemProperty * * Item ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * ppvObject ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ BSTR Name,
        /*[in]*/ enum OlUserPropertyType Type,
        /*[in]*/ VARIANT AddToFolderFields,
        /*[in]*/ VARIANT DisplayFormat,
        /*[out,retval]*/ struct ItemProperty * * ItemProperty ) = 0;
      virtual HRESULT __stdcall Remove (
        /*[in]*/ long Index ) = 0;
};

struct __declspec(uuid("000630c3-0000-0000-c000-000000000046"))
Conflict : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall get_Type (
        /*[out,retval]*/ enum OlObjectClass * Type ) = 0;
};

struct __declspec(uuid("000630c2-0000-0000-c000-000000000046"))
Conflicts : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct Conflict * * Item ) = 0;
      virtual HRESULT __stdcall GetFirst (
        /*[out,retval]*/ struct Conflict * * Item ) = 0;
      virtual HRESULT __stdcall GetLast (
        /*[out,retval]*/ struct Conflict * * Item ) = 0;
      virtual HRESULT __stdcall GetNext (
        /*[out,retval]*/ struct Conflict * * Item ) = 0;
      virtual HRESULT __stdcall GetPrevious (
        /*[out,retval]*/ struct Conflict * * Item ) = 0;
};

struct __declspec(uuid("00063102-0000-0000-c000-000000000046"))
_SimpleItems : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
};

struct __declspec(uuid("0006305c-0000-0000-c000-000000000046"))
_UserDefinedProperty : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Formula (
        /*[out,retval]*/ BSTR * Formula ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall get_Type (
        /*[out,retval]*/ enum OlUserPropertyType * Type ) = 0;
      virtual HRESULT __stdcall get_DisplayFormat (
        /*[out,retval]*/ long * DisplayFormat ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
};

struct __declspec(uuid("00063047-0000-0000-c000-000000000046"))
_UserDefinedProperties : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _UserDefinedProperty * * Item ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ BSTR Name,
        /*[in]*/ enum OlUserPropertyType Type,
        /*[in]*/ VARIANT DisplayFormat,
        /*[in]*/ VARIANT Formula,
        /*[out,retval]*/ struct _UserDefinedProperty * * UserDefinedProperty ) = 0;
      virtual HRESULT __stdcall Find (
        /*[in]*/ BSTR Name,
        /*[out,retval]*/ struct _UserDefinedProperty * * UserDefinedProperty ) = 0;
      virtual HRESULT __stdcall Remove (
        /*[in]*/ long Index ) = 0;
      virtual HRESULT __stdcall Refresh ( ) = 0;
};

struct __declspec(uuid("00063083-0000-0000-c000-000000000046"))
_SyncObject : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall Start ( ) = 0;
      virtual HRESULT __stdcall Stop ( ) = 0;
};

struct __declspec(uuid("00063086-0000-0000-c000-000000000046"))
SyncObjects : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _SyncObject * * Item ) = 0;
      virtual HRESULT __stdcall get_AppFolders (
        /*[out,retval]*/ struct _SyncObject * * AppFolders ) = 0;
};

struct __declspec(uuid("00063008-0000-0000-c000-000000000046"))
_Inspectors : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _Inspector * * Item ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ IDispatch * Item,
        /*[out,retval]*/ struct _Inspector * * Inspector ) = 0;
};

struct __declspec(uuid("0006300c-0000-0000-c000-000000000046"))
_Results : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall get_RawTable (
        /*[out,retval]*/ IUnknown * * RawTable ) = 0;
      virtual HRESULT __stdcall GetFirst (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall GetLast (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall GetNext (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall GetPrevious (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall ResetColumns ( ) = 0;
      virtual HRESULT __stdcall SetColumns (
        /*[in]*/ BSTR Columns ) = 0;
      virtual HRESULT __stdcall Sort (
        /*[in]*/ BSTR Property,
        /*[in]*/ VARIANT Descending = vtMissing ) = 0;
      virtual HRESULT __stdcall get_DefaultItemType (
        /*[out,retval]*/ enum OlItemType * DefaultItemType ) = 0;
      virtual HRESULT __stdcall put_DefaultItemType (
        /*[in]*/ enum OlItemType DefaultItemType ) = 0;
};

struct __declspec(uuid("000630b0-0000-0000-c000-000000000046"))
_Reminder : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall Dismiss ( ) = 0;
      virtual HRESULT __stdcall Snooze (
        /*[in]*/ VARIANT SnoozeTime = vtMissing ) = 0;
      virtual HRESULT __stdcall get_Caption (
        /*[out,retval]*/ BSTR * Caption ) = 0;
      virtual HRESULT __stdcall get_IsVisible (
        /*[out,retval]*/ VARIANT_BOOL * IsVisible ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall get_NextReminderDate (
        /*[out,retval]*/ DATE * NextReminderDate ) = 0;
      virtual HRESULT __stdcall get_OriginalReminderDate (
        /*[out,retval]*/ DATE * OriginalReminderDate ) = 0;
};

struct __declspec(uuid("000630b1-0000-0000-c000-000000000046"))
_Reminders : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _Reminder * * Item ) = 0;
      virtual HRESULT __stdcall Remove (
        /*[in]*/ VARIANT Index ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * ppvObject ) = 0;
};

struct __declspec(uuid("000630fc-0000-0000-c000-000000000046"))
_TimeZones : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _TimeZone * * Item ) = 0;
      virtual HRESULT __stdcall ConvertTime (
        /*[in]*/ DATE SourceDateTime,
        /*[in]*/ struct _TimeZone * SourceTimeZone,
        /*[in]*/ struct _TimeZone * DestinationTimeZone,
        /*[out,retval]*/ DATE * DestinationDateTime ) = 0;
      virtual HRESULT __stdcall get_CurrentTimeZone (
        /*[out,retval]*/ struct _TimeZone * * CurrentTimeZone ) = 0;
};

struct __declspec(uuid("00063080-0000-0000-c000-000000000046"))
PropertyPages : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ VARIANT Page,
        /*[in]*/ BSTR Title ) = 0;
      virtual HRESULT __stdcall Remove (
        /*[in]*/ VARIANT Index ) = 0;
};

struct __declspec(uuid("0006304d-0000-0000-c000-000000000046"))
Exception : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_AppointmentItem (
        /*[out,retval]*/ struct _AppointmentItem * * AppointmentItem ) = 0;
      virtual HRESULT __stdcall get_Deleted (
        /*[out,retval]*/ VARIANT_BOOL * Deleted ) = 0;
      virtual HRESULT __stdcall get_OriginalDate (
        /*[out,retval]*/ DATE * OriginalDate ) = 0;
      virtual HRESULT __stdcall get_ItemProperties (
        /*[out,retval]*/ struct ItemProperties * * ItemProperties ) = 0;
};

struct __declspec(uuid("0006304c-0000-0000-c000-000000000046"))
Exceptions : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct Exception * * Item ) = 0;
};

struct __declspec(uuid("00063044-0000-0000-c000-000000000046"))
RecurrencePattern : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_DayOfMonth (
        /*[out,retval]*/ long * DayOfMonth ) = 0;
      virtual HRESULT __stdcall put_DayOfMonth (
        /*[in]*/ long DayOfMonth ) = 0;
      virtual HRESULT __stdcall get_DayOfWeekMask (
        /*[out,retval]*/ enum OlDaysOfWeek * DayOfWeekMask ) = 0;
      virtual HRESULT __stdcall put_DayOfWeekMask (
        /*[in]*/ enum OlDaysOfWeek DayOfWeekMask ) = 0;
      virtual HRESULT __stdcall get_Duration (
        /*[out,retval]*/ long * Duration ) = 0;
      virtual HRESULT __stdcall put_Duration (
        /*[in]*/ long Duration ) = 0;
      virtual HRESULT __stdcall get_EndTime (
        /*[out,retval]*/ DATE * EndTime ) = 0;
      virtual HRESULT __stdcall put_EndTime (
        /*[in]*/ DATE EndTime ) = 0;
      virtual HRESULT __stdcall get_Exceptions (
        /*[out,retval]*/ struct Exceptions * * Exceptions ) = 0;
      virtual HRESULT __stdcall get_Instance (
        /*[out,retval]*/ long * Instance ) = 0;
      virtual HRESULT __stdcall put_Instance (
        /*[in]*/ long Instance ) = 0;
      virtual HRESULT __stdcall get_Interval (
        /*[out,retval]*/ long * Interval ) = 0;
      virtual HRESULT __stdcall put_Interval (
        /*[in]*/ long Interval ) = 0;
      virtual HRESULT __stdcall get_MonthOfYear (
        /*[out,retval]*/ long * MonthOfYear ) = 0;
      virtual HRESULT __stdcall put_MonthOfYear (
        /*[in]*/ long MonthOfYear ) = 0;
      virtual HRESULT __stdcall get_NoEndDate (
        /*[out,retval]*/ VARIANT_BOOL * NoEndDate ) = 0;
      virtual HRESULT __stdcall put_NoEndDate (
        /*[in]*/ VARIANT_BOOL NoEndDate ) = 0;
      virtual HRESULT __stdcall get_Occurrences (
        /*[out,retval]*/ long * Occurrences ) = 0;
      virtual HRESULT __stdcall put_Occurrences (
        /*[in]*/ long Occurrences ) = 0;
      virtual HRESULT __stdcall get_PatternEndDate (
        /*[out,retval]*/ DATE * PatternEndDate ) = 0;
      virtual HRESULT __stdcall put_PatternEndDate (
        /*[in]*/ DATE PatternEndDate ) = 0;
      virtual HRESULT __stdcall get_PatternStartDate (
        /*[out,retval]*/ DATE * PatternStartDate ) = 0;
      virtual HRESULT __stdcall put_PatternStartDate (
        /*[in]*/ DATE PatternStartDate ) = 0;
      virtual HRESULT __stdcall get_RecurrenceType (
        /*[out,retval]*/ enum OlRecurrenceType * RecurrenceType ) = 0;
      virtual HRESULT __stdcall put_RecurrenceType (
        /*[in]*/ enum OlRecurrenceType RecurrenceType ) = 0;
      virtual HRESULT __stdcall get_Regenerate (
        /*[out,retval]*/ VARIANT_BOOL * Regenerate ) = 0;
      virtual HRESULT __stdcall put_Regenerate (
        /*[in]*/ VARIANT_BOOL Regenerate ) = 0;
      virtual HRESULT __stdcall get_StartTime (
        /*[out,retval]*/ DATE * StartTime ) = 0;
      virtual HRESULT __stdcall put_StartTime (
        /*[in]*/ DATE StartTime ) = 0;
      virtual HRESULT __stdcall GetOccurrence (
        /*[in]*/ DATE StartDate,
        /*[out,retval]*/ struct _AppointmentItem * * AppointmentItem ) = 0;
};

struct __declspec(uuid("00063075-0000-0000-c000-000000000046"))
OutlookBarShortcut : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR Name ) = 0;
      virtual HRESULT __stdcall get_Target (
        /*[out,retval]*/ VARIANT * Target ) = 0;
      virtual HRESULT __stdcall SetIcon (
        /*[in]*/ VARIANT Icon ) = 0;
};

struct __declspec(uuid("00063074-0000-0000-c000-000000000046"))
_OutlookBarShortcuts : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct OutlookBarShortcut * * Item ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ VARIANT Target,
        /*[in]*/ BSTR Name,
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct OutlookBarShortcut * * Shortcut ) = 0;
      virtual HRESULT __stdcall Remove (
        /*[in]*/ VARIANT Index ) = 0;
};

struct __declspec(uuid("00063073-0000-0000-c000-000000000046"))
OutlookBarGroup : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR Name ) = 0;
      virtual HRESULT __stdcall get_Shortcuts (
        /*[out,retval]*/ struct _OutlookBarShortcuts * * Shortcuts ) = 0;
      virtual HRESULT __stdcall get_ViewType (
        /*[out,retval]*/ enum OlOutlookBarViewType * ViewType ) = 0;
      virtual HRESULT __stdcall put_ViewType (
        /*[in]*/ enum OlOutlookBarViewType ViewType ) = 0;
};

struct __declspec(uuid("00063072-0000-0000-c000-000000000046"))
_OutlookBarGroups : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct OutlookBarGroup * * Item ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ BSTR Name,
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct OutlookBarGroup * * Group ) = 0;
      virtual HRESULT __stdcall Remove (
        /*[in]*/ VARIANT Index ) = 0;
};

struct __declspec(uuid("00063071-0000-0000-c000-000000000046"))
OutlookBarStorage : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Groups (
        /*[out,retval]*/ struct _OutlookBarGroups * * Groups ) = 0;
};

struct __declspec(uuid("00063070-0000-0000-c000-000000000046"))
_OutlookBarPane : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Contents (
        /*[out,retval]*/ struct OutlookBarStorage * * Contents ) = 0;
      virtual HRESULT __stdcall get_CurrentGroup (
        /*[out,retval]*/ struct OutlookBarGroup * * CurrentGroup ) = 0;
      virtual HRESULT __stdcall putref_CurrentGroup (
        /*[in]*/ struct OutlookBarGroup * CurrentGroup ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * Visible ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL Visible ) = 0;
};

struct __declspec(uuid("0006307f-0000-0000-c000-000000000046"))
PropertyPageSite : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall OnStatusChange ( ) = 0;
};

struct __declspec(uuid("0006303f-0000-0000-c000-000000000046"))
Pages : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ VARIANT Name,
        /*[out,retval]*/ IDispatch * * Page ) = 0;
      virtual HRESULT __stdcall Remove (
        /*[in]*/ long Index ) = 0;
};

struct __declspec(uuid("000630a0-0000-0000-c000-000000000046"))
_ViewField : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_ViewXMLSchemaName (
        /*[out,retval]*/ BSTR * ViewXMLSchemaName ) = 0;
      virtual HRESULT __stdcall get_ColumnFormat (
        /*[out,retval]*/ struct _ColumnFormat * * ColumnFormat ) = 0;
};

struct __declspec(uuid("0006309e-0000-0000-c000-000000000046"))
_ColumnFormat : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Label (
        /*[out,retval]*/ BSTR * Label ) = 0;
      virtual HRESULT __stdcall put_Label (
        /*[in]*/ BSTR Label ) = 0;
      virtual HRESULT __stdcall get_FieldFormat (
        /*[out,retval]*/ long * FieldFormat ) = 0;
      virtual HRESULT __stdcall put_FieldFormat (
        /*[in]*/ long FieldFormat ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ long * Width ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ long Width ) = 0;
      virtual HRESULT __stdcall get_Align (
        /*[out,retval]*/ enum OlAlign * Align ) = 0;
      virtual HRESULT __stdcall put_Align (
        /*[in]*/ enum OlAlign Align ) = 0;
      virtual HRESULT __stdcall get_FieldType (
        /*[out,retval]*/ enum OlUserPropertyType * FieldType ) = 0;
};

struct __declspec(uuid("000630a1-0000-0000-c000-000000000046"))
_ViewFields : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _ViewField * * Item ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ BSTR PropertyName,
        /*[out,retval]*/ struct _ViewField * * ViewField ) = 0;
      virtual HRESULT __stdcall Insert (
        /*[in]*/ BSTR PropertyName,
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _ViewField * * ViewField ) = 0;
      virtual HRESULT __stdcall Remove (
        /*[in]*/ VARIANT Index ) = 0;
};

struct __declspec(uuid("00063097-0000-0000-c000-000000000046"))
_IconView : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall Apply ( ) = 0;
      virtual HRESULT __stdcall Copy (
        /*[in]*/ BSTR Name,
        /*[in]*/ enum OlViewSaveOption SaveOption,
        /*[out,retval]*/ struct View * * ppview ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Reset ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall get_Language (
        /*[out,retval]*/ BSTR * Language ) = 0;
      virtual HRESULT __stdcall put_Language (
        /*[in]*/ BSTR Language ) = 0;
      virtual HRESULT __stdcall get_LockUserChanges (
        /*[out,retval]*/ VARIANT_BOOL * LockUserChanges ) = 0;
      virtual HRESULT __stdcall put_LockUserChanges (
        /*[in]*/ VARIANT_BOOL LockUserChanges ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR Name ) = 0;
      virtual HRESULT __stdcall get_SaveOption (
        /*[out,retval]*/ enum OlViewSaveOption * SaveOption ) = 0;
      virtual HRESULT __stdcall get_Standard (
        /*[out,retval]*/ VARIANT_BOOL * Standard ) = 0;
      virtual HRESULT __stdcall get_ViewType (
        /*[out,retval]*/ enum OlViewType * ViewType ) = 0;
      virtual HRESULT __stdcall get_XML (
        /*[out,retval]*/ BSTR * XML ) = 0;
      virtual HRESULT __stdcall put_XML (
        /*[in]*/ BSTR XML ) = 0;
      virtual HRESULT __stdcall GoToDate (
        /*[in]*/ DATE Date ) = 0;
      virtual HRESULT __stdcall get_Filter (
        /*[out,retval]*/ BSTR * Filter ) = 0;
      virtual HRESULT __stdcall put_Filter (
        /*[in]*/ BSTR Filter ) = 0;
      virtual HRESULT __stdcall get_SortFields (
        /*[out,retval]*/ struct _OrderFields * * SortFields ) = 0;
      virtual HRESULT __stdcall get_IconViewType (
        /*[out,retval]*/ enum OlIconViewType * IconViewType ) = 0;
      virtual HRESULT __stdcall put_IconViewType (
        /*[in]*/ enum OlIconViewType IconViewType ) = 0;
      virtual HRESULT __stdcall get_IconPlacement (
        /*[out,retval]*/ enum OlIconViewPlacement * IconPlacement ) = 0;
      virtual HRESULT __stdcall put_IconPlacement (
        /*[in]*/ enum OlIconViewPlacement IconPlacement ) = 0;
};

struct __declspec(uuid("0006309b-0000-0000-c000-000000000046"))
_OrderField : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_ViewXMLSchemaName (
        /*[out,retval]*/ BSTR * ViewXMLSchemaName ) = 0;
      virtual HRESULT __stdcall get_IsDescending (
        /*[out,retval]*/ VARIANT_BOOL * IsDescending ) = 0;
      virtual HRESULT __stdcall put_IsDescending (
        /*[in]*/ VARIANT_BOOL IsDescending ) = 0;
};

struct __declspec(uuid("0006309a-0000-0000-c000-000000000046"))
_OrderFields : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _OrderField * * Item ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ BSTR PropertyName,
        /*[in]*/ VARIANT IsDescending,
        /*[out,retval]*/ struct _OrderField * * OrderField ) = 0;
      virtual HRESULT __stdcall Remove (
        /*[in]*/ VARIANT Index ) = 0;
      virtual HRESULT __stdcall RemoveAll ( ) = 0;
      virtual HRESULT __stdcall Insert (
        /*[in]*/ BSTR PropertyName,
        /*[in]*/ VARIANT Index,
        /*[in]*/ VARIANT IsDescending,
        /*[out,retval]*/ struct _OrderField * * OrderField ) = 0;
};

struct __declspec(uuid("00063098-0000-0000-c000-000000000046"))
_CardView : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall Apply ( ) = 0;
      virtual HRESULT __stdcall Copy (
        /*[in]*/ BSTR Name,
        /*[in]*/ enum OlViewSaveOption SaveOption,
        /*[out,retval]*/ struct View * * ppview ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Reset ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall get_Language (
        /*[out,retval]*/ BSTR * Language ) = 0;
      virtual HRESULT __stdcall put_Language (
        /*[in]*/ BSTR Language ) = 0;
      virtual HRESULT __stdcall get_LockUserChanges (
        /*[out,retval]*/ VARIANT_BOOL * LockUserChanges ) = 0;
      virtual HRESULT __stdcall put_LockUserChanges (
        /*[in]*/ VARIANT_BOOL LockUserChanges ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR Name ) = 0;
      virtual HRESULT __stdcall get_SaveOption (
        /*[out,retval]*/ enum OlViewSaveOption * SaveOption ) = 0;
      virtual HRESULT __stdcall get_Standard (
        /*[out,retval]*/ VARIANT_BOOL * Standard ) = 0;
      virtual HRESULT __stdcall get_ViewType (
        /*[out,retval]*/ enum OlViewType * ViewType ) = 0;
      virtual HRESULT __stdcall get_XML (
        /*[out,retval]*/ BSTR * XML ) = 0;
      virtual HRESULT __stdcall put_XML (
        /*[in]*/ BSTR XML ) = 0;
      virtual HRESULT __stdcall GoToDate (
        /*[in]*/ DATE Date ) = 0;
      virtual HRESULT __stdcall get_Filter (
        /*[out,retval]*/ BSTR * Filter ) = 0;
      virtual HRESULT __stdcall put_Filter (
        /*[in]*/ BSTR Filter ) = 0;
      virtual HRESULT __stdcall get_SortFields (
        /*[out,retval]*/ struct _OrderFields * * SortFields ) = 0;
      virtual HRESULT __stdcall get_AllowInCellEditing (
        /*[out,retval]*/ VARIANT_BOOL * AllowInCellEditing ) = 0;
      virtual HRESULT __stdcall put_AllowInCellEditing (
        /*[in]*/ VARIANT_BOOL AllowInCellEditing ) = 0;
      virtual HRESULT __stdcall get_ShowEmptyFields (
        /*[out,retval]*/ VARIANT_BOOL * ShowEmptyFields ) = 0;
      virtual HRESULT __stdcall put_ShowEmptyFields (
        /*[in]*/ VARIANT_BOOL ShowEmptyFields ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ long * Width ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ long Width ) = 0;
      virtual HRESULT __stdcall get_MultiLineFieldHeight (
        /*[out,retval]*/ long * MultiLineFieldHeight ) = 0;
      virtual HRESULT __stdcall put_MultiLineFieldHeight (
        /*[in]*/ long MultiLineFieldHeight ) = 0;
      virtual HRESULT __stdcall get_ViewFields (
        /*[out,retval]*/ struct _ViewFields * * ViewFields ) = 0;
      virtual HRESULT __stdcall get_HeadingsFont (
        /*[out,retval]*/ struct _ViewFont * * HeadingsFont ) = 0;
      virtual HRESULT __stdcall get_BodyFont (
        /*[out,retval]*/ struct _ViewFont * * BodyFont ) = 0;
      virtual HRESULT __stdcall get_AutoFormatRules (
        /*[out,retval]*/ struct _AutoFormatRules * * AutoFormatRules ) = 0;
};

struct __declspec(uuid("0006309d-0000-0000-c000-000000000046"))
_ViewFont : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Bold (
        /*[out,retval]*/ VARIANT_BOOL * Bold ) = 0;
      virtual HRESULT __stdcall put_Bold (
        /*[in]*/ VARIANT_BOOL Bold ) = 0;
      virtual HRESULT __stdcall get_Italic (
        /*[out,retval]*/ VARIANT_BOOL * Italic ) = 0;
      virtual HRESULT __stdcall put_Italic (
        /*[in]*/ VARIANT_BOOL Italic ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR Name ) = 0;
      virtual HRESULT __stdcall get_Size (
        /*[out,retval]*/ long * Size ) = 0;
      virtual HRESULT __stdcall put_Size (
        /*[in]*/ long Size ) = 0;
      virtual HRESULT __stdcall get_Strikethrough (
        /*[out,retval]*/ VARIANT_BOOL * Strikethrough ) = 0;
      virtual HRESULT __stdcall put_Strikethrough (
        /*[in]*/ VARIANT_BOOL Strikethrough ) = 0;
      virtual HRESULT __stdcall get_Underline (
        /*[out,retval]*/ VARIANT_BOOL * Underline ) = 0;
      virtual HRESULT __stdcall put_Underline (
        /*[in]*/ VARIANT_BOOL Underline ) = 0;
      virtual HRESULT __stdcall get_Color (
        /*[out,retval]*/ enum OlColor * Color ) = 0;
      virtual HRESULT __stdcall put_Color (
        /*[in]*/ enum OlColor Color ) = 0;
      virtual HRESULT __stdcall get_ExtendedColor (
        /*[out,retval]*/ enum OlCategoryColor * ExtendedColor ) = 0;
      virtual HRESULT __stdcall put_ExtendedColor (
        /*[in]*/ enum OlCategoryColor ExtendedColor ) = 0;
};

struct __declspec(uuid("00063094-0000-0000-c000-000000000046"))
_AutoFormatRules : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _AutoFormatRule * * Item ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ BSTR Name,
        /*[out,retval]*/ struct _AutoFormatRule * * AutoFormatRule ) = 0;
      virtual HRESULT __stdcall Insert (
        /*[in]*/ BSTR Name,
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _AutoFormatRule * * AutoFormatRule ) = 0;
      virtual HRESULT __stdcall Remove (
        /*[in]*/ VARIANT Index ) = 0;
      virtual HRESULT __stdcall RemoveAll ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
};

struct __declspec(uuid("00063093-0000-0000-c000-000000000046"))
_AutoFormatRule : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR Name ) = 0;
      virtual HRESULT __stdcall get_Filter (
        /*[out,retval]*/ BSTR * Filter ) = 0;
      virtual HRESULT __stdcall put_Filter (
        /*[in]*/ BSTR Filter ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_Font (
        /*[out,retval]*/ struct _ViewFont * * Font ) = 0;
      virtual HRESULT __stdcall put_Font (
        /*[in]*/ struct _ViewFont * Font ) = 0;
      virtual HRESULT __stdcall get_Standard (
        /*[out,retval]*/ VARIANT_BOOL * Standard ) = 0;
};

struct __declspec(uuid("0006309c-0000-0000-c000-000000000046"))
_TimelineView : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall Apply ( ) = 0;
      virtual HRESULT __stdcall Copy (
        /*[in]*/ BSTR Name,
        /*[in]*/ enum OlViewSaveOption SaveOption,
        /*[out,retval]*/ struct View * * ppview ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Reset ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall get_Language (
        /*[out,retval]*/ BSTR * Language ) = 0;
      virtual HRESULT __stdcall put_Language (
        /*[in]*/ BSTR Language ) = 0;
      virtual HRESULT __stdcall get_LockUserChanges (
        /*[out,retval]*/ VARIANT_BOOL * LockUserChanges ) = 0;
      virtual HRESULT __stdcall put_LockUserChanges (
        /*[in]*/ VARIANT_BOOL LockUserChanges ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR Name ) = 0;
      virtual HRESULT __stdcall get_SaveOption (
        /*[out,retval]*/ enum OlViewSaveOption * SaveOption ) = 0;
      virtual HRESULT __stdcall get_Standard (
        /*[out,retval]*/ VARIANT_BOOL * Standard ) = 0;
      virtual HRESULT __stdcall get_ViewType (
        /*[out,retval]*/ enum OlViewType * ViewType ) = 0;
      virtual HRESULT __stdcall get_XML (
        /*[out,retval]*/ BSTR * XML ) = 0;
      virtual HRESULT __stdcall put_XML (
        /*[in]*/ BSTR XML ) = 0;
      virtual HRESULT __stdcall GoToDate (
        /*[in]*/ DATE Date ) = 0;
      virtual HRESULT __stdcall get_Filter (
        /*[out,retval]*/ BSTR * Filter ) = 0;
      virtual HRESULT __stdcall put_Filter (
        /*[in]*/ BSTR Filter ) = 0;
      virtual HRESULT __stdcall get_StartField (
        /*[out,retval]*/ BSTR * StartField ) = 0;
      virtual HRESULT __stdcall put_StartField (
        /*[in]*/ BSTR StartField ) = 0;
      virtual HRESULT __stdcall get_EndField (
        /*[out,retval]*/ BSTR * EndField ) = 0;
      virtual HRESULT __stdcall put_EndField (
        /*[in]*/ BSTR EndField ) = 0;
      virtual HRESULT __stdcall get_GroupByFields (
        /*[out,retval]*/ struct _OrderFields * * GroupByFields ) = 0;
      virtual HRESULT __stdcall get_DefaultExpandCollapseSetting (
        /*[out,retval]*/ enum OlDefaultExpandCollapseSetting * DefaultExpandCollapseSetting ) = 0;
      virtual HRESULT __stdcall put_DefaultExpandCollapseSetting (
        /*[in]*/ enum OlDefaultExpandCollapseSetting DefaultExpandCollapseSetting ) = 0;
      virtual HRESULT __stdcall get_ShowWeekNumbers (
        /*[out,retval]*/ VARIANT_BOOL * ShowWeekNumbers ) = 0;
      virtual HRESULT __stdcall put_ShowWeekNumbers (
        /*[in]*/ VARIANT_BOOL ShowWeekNumbers ) = 0;
      virtual HRESULT __stdcall get_MaxLabelWidth (
        /*[out,retval]*/ long * MaxLabelWidth ) = 0;
      virtual HRESULT __stdcall put_MaxLabelWidth (
        /*[in]*/ long MaxLabelWidth ) = 0;
      virtual HRESULT __stdcall get_ShowLabelWhenViewingByMonth (
        /*[out,retval]*/ VARIANT_BOOL * ShowLabelWhenViewingByMonth ) = 0;
      virtual HRESULT __stdcall put_ShowLabelWhenViewingByMonth (
        /*[in]*/ VARIANT_BOOL ShowLabelWhenViewingByMonth ) = 0;
      virtual HRESULT __stdcall get_UpperScaleFont (
        /*[out,retval]*/ struct _ViewFont * * UpperScaleFont ) = 0;
      virtual HRESULT __stdcall get_LowerScaleFont (
        /*[out,retval]*/ struct _ViewFont * * LowerScaleFont ) = 0;
      virtual HRESULT __stdcall get_ItemFont (
        /*[out,retval]*/ struct _ViewFont * * ItemFont ) = 0;
      virtual HRESULT __stdcall get_TimelineViewMode (
        /*[out,retval]*/ enum OlTimelineViewMode * TimelineViewMode ) = 0;
      virtual HRESULT __stdcall put_TimelineViewMode (
        /*[in]*/ enum OlTimelineViewMode TimelineViewMode ) = 0;
};

struct __declspec(uuid("000630f0-0000-0000-c000-000000000046"))
_NavigationGroup : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_GroupType (
        /*[out,retval]*/ enum OlGroupType * GroupType ) = 0;
      virtual HRESULT __stdcall get_NavigationFolders (
        /*[out,retval]*/ struct _NavigationFolders * * NavigationFolders ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR Name ) = 0;
      virtual HRESULT __stdcall get_Position (
        /*[out,retval]*/ long * Position ) = 0;
      virtual HRESULT __stdcall put_Position (
        /*[in]*/ long Position ) = 0;
};

struct __declspec(uuid("000630ef-0000-0000-c000-000000000046"))
_NavigationGroups : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _NavigationGroup * * Item ) = 0;
      virtual HRESULT __stdcall Create (
        /*[in]*/ BSTR GroupDisplayName,
        /*[out,retval]*/ struct _NavigationGroup * * NavigationGroup ) = 0;
      virtual HRESULT __stdcall Delete (
        /*[in]*/ struct _NavigationGroup * Group ) = 0;
      virtual HRESULT __stdcall GetDefaultNavigationGroup (
        /*[in]*/ enum OlGroupType DefaultFolderGroup,
        /*[out,retval]*/ struct _NavigationGroup * * NavigationGroup ) = 0;
};

struct __declspec(uuid("000630e9-0000-0000-c000-000000000046"))
_MailModule : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_NavigationModuleType (
        /*[out,retval]*/ enum OlNavigationModuleType * NavigationModuleType ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall get_Position (
        /*[out,retval]*/ long * Position ) = 0;
      virtual HRESULT __stdcall put_Position (
        /*[in]*/ long Position ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * Visible ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL Visible ) = 0;
      virtual HRESULT __stdcall get_NavigationGroups (
        /*[out,retval]*/ struct _NavigationGroups * * NavigationGroups ) = 0;
};

struct __declspec(uuid("000630ea-0000-0000-c000-000000000046"))
_CalendarModule : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_NavigationModuleType (
        /*[out,retval]*/ enum OlNavigationModuleType * NavigationModuleType ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall get_Position (
        /*[out,retval]*/ long * Position ) = 0;
      virtual HRESULT __stdcall put_Position (
        /*[in]*/ long Position ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * Visible ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL Visible ) = 0;
      virtual HRESULT __stdcall get_NavigationGroups (
        /*[out,retval]*/ struct _NavigationGroups * * NavigationGroups ) = 0;
};

struct __declspec(uuid("000630eb-0000-0000-c000-000000000046"))
_ContactsModule : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_NavigationModuleType (
        /*[out,retval]*/ enum OlNavigationModuleType * NavigationModuleType ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall get_Position (
        /*[out,retval]*/ long * Position ) = 0;
      virtual HRESULT __stdcall put_Position (
        /*[in]*/ long Position ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * Visible ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL Visible ) = 0;
      virtual HRESULT __stdcall get_NavigationGroups (
        /*[out,retval]*/ struct _NavigationGroups * * NavigationGroups ) = 0;
};

struct __declspec(uuid("000630ec-0000-0000-c000-000000000046"))
_TasksModule : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_NavigationModuleType (
        /*[out,retval]*/ enum OlNavigationModuleType * NavigationModuleType ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall get_Position (
        /*[out,retval]*/ long * Position ) = 0;
      virtual HRESULT __stdcall put_Position (
        /*[in]*/ long Position ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * Visible ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL Visible ) = 0;
      virtual HRESULT __stdcall get_NavigationGroups (
        /*[out,retval]*/ struct _NavigationGroups * * NavigationGroups ) = 0;
};

struct __declspec(uuid("000630ed-0000-0000-c000-000000000046"))
_JournalModule : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_NavigationModuleType (
        /*[out,retval]*/ enum OlNavigationModuleType * NavigationModuleType ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall get_Position (
        /*[out,retval]*/ long * Position ) = 0;
      virtual HRESULT __stdcall put_Position (
        /*[in]*/ long Position ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * Visible ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL Visible ) = 0;
      virtual HRESULT __stdcall get_NavigationGroups (
        /*[out,retval]*/ struct _NavigationGroups * * NavigationGroups ) = 0;
};

struct __declspec(uuid("000630ee-0000-0000-c000-000000000046"))
_NotesModule : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_NavigationModuleType (
        /*[out,retval]*/ enum OlNavigationModuleType * NavigationModuleType ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall get_Position (
        /*[out,retval]*/ long * Position ) = 0;
      virtual HRESULT __stdcall put_Position (
        /*[in]*/ long Position ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * Visible ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL Visible ) = 0;
      virtual HRESULT __stdcall get_NavigationGroups (
        /*[out,retval]*/ struct _NavigationGroups * * NavigationGroups ) = 0;
};

struct __declspec(uuid("000630a2-0000-0000-c000-000000000046"))
_BusinessCardView : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall Apply ( ) = 0;
      virtual HRESULT __stdcall Copy (
        /*[in]*/ BSTR Name,
        /*[in]*/ enum OlViewSaveOption SaveOption,
        /*[out,retval]*/ struct View * * ppview ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Reset ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall get_Language (
        /*[out,retval]*/ BSTR * Language ) = 0;
      virtual HRESULT __stdcall put_Language (
        /*[in]*/ BSTR Language ) = 0;
      virtual HRESULT __stdcall get_LockUserChanges (
        /*[out,retval]*/ VARIANT_BOOL * LockUserChanges ) = 0;
      virtual HRESULT __stdcall put_LockUserChanges (
        /*[in]*/ VARIANT_BOOL LockUserChanges ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR Name ) = 0;
      virtual HRESULT __stdcall get_SaveOption (
        /*[out,retval]*/ enum OlViewSaveOption * SaveOption ) = 0;
      virtual HRESULT __stdcall get_Standard (
        /*[out,retval]*/ VARIANT_BOOL * Standard ) = 0;
      virtual HRESULT __stdcall get_ViewType (
        /*[out,retval]*/ enum OlViewType * ViewType ) = 0;
      virtual HRESULT __stdcall get_XML (
        /*[out,retval]*/ BSTR * XML ) = 0;
      virtual HRESULT __stdcall put_XML (
        /*[in]*/ BSTR XML ) = 0;
      virtual HRESULT __stdcall GoToDate (
        /*[in]*/ DATE Date ) = 0;
      virtual HRESULT __stdcall get_Filter (
        /*[out,retval]*/ BSTR * Filter ) = 0;
      virtual HRESULT __stdcall put_Filter (
        /*[in]*/ BSTR Filter ) = 0;
      virtual HRESULT __stdcall get_HeadingsFont (
        /*[out,retval]*/ struct _ViewFont * * HeadingsFont ) = 0;
      virtual HRESULT __stdcall get_SortFields (
        /*[out,retval]*/ struct _OrderFields * * SortFields ) = 0;
      virtual HRESULT __stdcall get_CardSize (
        /*[out,retval]*/ long * CardSize ) = 0;
      virtual HRESULT __stdcall put_CardSize (
        /*[in]*/ long CardSize ) = 0;
};

struct __declspec(uuid("0006305a-0000-0000-c000-000000000046"))
_FormRegion : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_IsExpanded (
        /*[out,retval]*/ VARIANT_BOOL * IsExpanded ) = 0;
      virtual HRESULT __stdcall get_Form (
        /*[out,retval]*/ IDispatch * * Form ) = 0;
      virtual HRESULT __stdcall get_Detail (
        /*[out,retval]*/ BSTR * Detail ) = 0;
      virtual HRESULT __stdcall put_Detail (
        /*[in]*/ BSTR Detail ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall get_Inspector (
        /*[out,retval]*/ struct _Inspector * * Inspector ) = 0;
      virtual HRESULT __stdcall get_FormRegionMode (
        /*[out,retval]*/ enum OlFormRegionMode * FormRegionMode ) = 0;
      virtual HRESULT __stdcall get_Language (
        /*[out,retval]*/ long * Language ) = 0;
      virtual HRESULT __stdcall Reflow ( ) = 0;
      virtual HRESULT __stdcall get_DisplayName (
        /*[out,retval]*/ BSTR * DisplayName ) = 0;
      virtual HRESULT __stdcall get_InternalName (
        /*[out,retval]*/ BSTR * InternalName ) = 0;
      virtual HRESULT __stdcall SetControlItemProperty (
        /*[in]*/ IDispatch * Control,
        /*[in]*/ BSTR PropertyName ) = 0;
      virtual HRESULT __stdcall get_SuppressControlReplacement (
        /*[out,retval]*/ VARIANT_BOOL * SuppressControlReplacement ) = 0;
      virtual HRESULT __stdcall put_SuppressControlReplacement (
        /*[in]*/ VARIANT_BOOL SuppressControlReplacement ) = 0;
      virtual HRESULT __stdcall Select ( ) = 0;
      virtual HRESULT __stdcall get_EnableAutoLayout (
        /*[out,retval]*/ VARIANT_BOOL * EnableAutoLayout ) = 0;
      virtual HRESULT __stdcall put_EnableAutoLayout (
        /*[in]*/ VARIANT_BOOL EnableAutoLayout ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * Visible ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL Visible ) = 0;
};

struct __declspec(uuid("00063099-0000-0000-c000-000000000046"))
_CalendarView : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall Apply ( ) = 0;
      virtual HRESULT __stdcall Copy (
        /*[in]*/ BSTR Name,
        /*[in]*/ enum OlViewSaveOption SaveOption,
        /*[out,retval]*/ struct View * * ppview ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Reset ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall get_Language (
        /*[out,retval]*/ BSTR * Language ) = 0;
      virtual HRESULT __stdcall put_Language (
        /*[in]*/ BSTR Language ) = 0;
      virtual HRESULT __stdcall get_LockUserChanges (
        /*[out,retval]*/ VARIANT_BOOL * LockUserChanges ) = 0;
      virtual HRESULT __stdcall put_LockUserChanges (
        /*[in]*/ VARIANT_BOOL LockUserChanges ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR Name ) = 0;
      virtual HRESULT __stdcall get_SaveOption (
        /*[out,retval]*/ enum OlViewSaveOption * SaveOption ) = 0;
      virtual HRESULT __stdcall get_Standard (
        /*[out,retval]*/ VARIANT_BOOL * Standard ) = 0;
      virtual HRESULT __stdcall get_ViewType (
        /*[out,retval]*/ enum OlViewType * ViewType ) = 0;
      virtual HRESULT __stdcall get_XML (
        /*[out,retval]*/ BSTR * XML ) = 0;
      virtual HRESULT __stdcall put_XML (
        /*[in]*/ BSTR XML ) = 0;
      virtual HRESULT __stdcall GoToDate (
        /*[in]*/ DATE Date ) = 0;
      virtual HRESULT __stdcall get_Filter (
        /*[out,retval]*/ BSTR * Filter ) = 0;
      virtual HRESULT __stdcall put_Filter (
        /*[in]*/ BSTR Filter ) = 0;
      virtual HRESULT __stdcall get_StartField (
        /*[out,retval]*/ BSTR * StartField ) = 0;
      virtual HRESULT __stdcall put_StartField (
        /*[in]*/ BSTR StartField ) = 0;
      virtual HRESULT __stdcall get_EndField (
        /*[out,retval]*/ BSTR * EndField ) = 0;
      virtual HRESULT __stdcall put_EndField (
        /*[in]*/ BSTR EndField ) = 0;
      virtual HRESULT __stdcall get_CalendarViewMode (
        /*[out,retval]*/ enum OlCalendarViewMode * CalendarViewMode ) = 0;
      virtual HRESULT __stdcall put_CalendarViewMode (
        /*[in]*/ enum OlCalendarViewMode CalendarViewMode ) = 0;
      virtual HRESULT __stdcall get_DayWeekTimeScale (
        /*[out,retval]*/ enum OlDayWeekTimeScale * DayWeekTimeScale ) = 0;
      virtual HRESULT __stdcall put_DayWeekTimeScale (
        /*[in]*/ enum OlDayWeekTimeScale DayWeekTimeScale ) = 0;
      virtual HRESULT __stdcall get_MonthShowEndTime (
        /*[out,retval]*/ VARIANT_BOOL * MonthShowEndTime ) = 0;
      virtual HRESULT __stdcall put_MonthShowEndTime (
        /*[in]*/ VARIANT_BOOL MonthShowEndTime ) = 0;
      virtual HRESULT __stdcall get_BoldDatesWithItems (
        /*[out,retval]*/ VARIANT_BOOL * BoldDatesWithItems ) = 0;
      virtual HRESULT __stdcall put_BoldDatesWithItems (
        /*[in]*/ VARIANT_BOOL BoldDatesWithItems ) = 0;
      virtual HRESULT __stdcall get_DayWeekTimeFont (
        /*[out,retval]*/ struct _ViewFont * * DayWeekTimeFont ) = 0;
      virtual HRESULT __stdcall get_DayWeekFont (
        /*[out,retval]*/ struct _ViewFont * * DayWeekFont ) = 0;
      virtual HRESULT __stdcall get_MonthFont (
        /*[out,retval]*/ struct _ViewFont * * MonthFont ) = 0;
      virtual HRESULT __stdcall get_AutoFormatRules (
        /*[out,retval]*/ struct _AutoFormatRules * * AutoFormatRules ) = 0;
      virtual HRESULT __stdcall get_DaysInMultiDayMode (
        /*[out,retval]*/ long * DaysInMultiDayMode ) = 0;
      virtual HRESULT __stdcall put_DaysInMultiDayMode (
        /*[in]*/ long DaysInMultiDayMode ) = 0;
      virtual HRESULT __stdcall get_DisplayedDates (
        /*[out,retval]*/ VARIANT * DisplayedDates ) = 0;
      virtual HRESULT __stdcall get_BoldSubjects (
        /*[out,retval]*/ VARIANT_BOOL * BoldSubjects ) = 0;
      virtual HRESULT __stdcall put_BoldSubjects (
        /*[in]*/ VARIANT_BOOL BoldSubjects ) = 0;
      virtual HRESULT __stdcall get_SelectedStartTime (
        /*[out,retval]*/ DATE * SelectedStartTime ) = 0;
      virtual HRESULT __stdcall get_SelectedEndTime (
        /*[out,retval]*/ DATE * SelectedEndTime ) = 0;
};

struct __declspec(uuid("00063096-0000-0000-c000-000000000046"))
_TableView : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall Apply ( ) = 0;
      virtual HRESULT __stdcall Copy (
        /*[in]*/ BSTR Name,
        /*[in]*/ enum OlViewSaveOption SaveOption,
        /*[out,retval]*/ struct View * * ppview ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Reset ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall get_Language (
        /*[out,retval]*/ BSTR * Language ) = 0;
      virtual HRESULT __stdcall put_Language (
        /*[in]*/ BSTR Language ) = 0;
      virtual HRESULT __stdcall get_LockUserChanges (
        /*[out,retval]*/ VARIANT_BOOL * LockUserChanges ) = 0;
      virtual HRESULT __stdcall put_LockUserChanges (
        /*[in]*/ VARIANT_BOOL LockUserChanges ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR Name ) = 0;
      virtual HRESULT __stdcall get_SaveOption (
        /*[out,retval]*/ enum OlViewSaveOption * SaveOption ) = 0;
      virtual HRESULT __stdcall get_Standard (
        /*[out,retval]*/ VARIANT_BOOL * Standard ) = 0;
      virtual HRESULT __stdcall get_ViewType (
        /*[out,retval]*/ enum OlViewType * ViewType ) = 0;
      virtual HRESULT __stdcall get_XML (
        /*[out,retval]*/ BSTR * XML ) = 0;
      virtual HRESULT __stdcall put_XML (
        /*[in]*/ BSTR XML ) = 0;
      virtual HRESULT __stdcall GoToDate (
        /*[in]*/ DATE Date ) = 0;
      virtual HRESULT __stdcall get_Filter (
        /*[out,retval]*/ BSTR * Filter ) = 0;
      virtual HRESULT __stdcall put_Filter (
        /*[in]*/ BSTR Filter ) = 0;
      virtual HRESULT __stdcall get_ViewFields (
        /*[out,retval]*/ struct _ViewFields * * ViewFields ) = 0;
      virtual HRESULT __stdcall get_GroupByFields (
        /*[out,retval]*/ struct _OrderFields * * GroupByFields ) = 0;
      virtual HRESULT __stdcall get_SortFields (
        /*[out,retval]*/ struct _OrderFields * * SortFields ) = 0;
      virtual HRESULT __stdcall get_MaxLinesInMultiLineView (
        /*[out,retval]*/ long * MaxLinesInMultiLineView ) = 0;
      virtual HRESULT __stdcall put_MaxLinesInMultiLineView (
        /*[in]*/ long MaxLinesInMultiLineView ) = 0;
      virtual HRESULT __stdcall get_AutomaticGrouping (
        /*[out,retval]*/ VARIANT_BOOL * AutomaticGrouping ) = 0;
      virtual HRESULT __stdcall put_AutomaticGrouping (
        /*[in]*/ VARIANT_BOOL AutomaticGrouping ) = 0;
      virtual HRESULT __stdcall get_DefaultExpandCollapseSetting (
        /*[out,retval]*/ enum OlDefaultExpandCollapseSetting * DefaultExpandCollapseSetting ) = 0;
      virtual HRESULT __stdcall put_DefaultExpandCollapseSetting (
        /*[in]*/ enum OlDefaultExpandCollapseSetting DefaultExpandCollapseSetting ) = 0;
      virtual HRESULT __stdcall get_AutomaticColumnSizing (
        /*[out,retval]*/ VARIANT_BOOL * AutomaticColumnSizing ) = 0;
      virtual HRESULT __stdcall put_AutomaticColumnSizing (
        /*[in]*/ VARIANT_BOOL AutomaticColumnSizing ) = 0;
      virtual HRESULT __stdcall get_MultiLine (
        /*[out,retval]*/ enum OlMultiLine * MultiLine ) = 0;
      virtual HRESULT __stdcall put_MultiLine (
        /*[in]*/ enum OlMultiLine MultiLine ) = 0;
      virtual HRESULT __stdcall get_MultiLineWidth (
        /*[out,retval]*/ long * MultiLineWidth ) = 0;
      virtual HRESULT __stdcall put_MultiLineWidth (
        /*[in]*/ long MultiLineWidth ) = 0;
      virtual HRESULT __stdcall get_AllowInCellEditing (
        /*[out,retval]*/ VARIANT_BOOL * AllowInCellEditing ) = 0;
      virtual HRESULT __stdcall put_AllowInCellEditing (
        /*[in]*/ VARIANT_BOOL AllowInCellEditing ) = 0;
      virtual HRESULT __stdcall get_ShowNewItemRow (
        /*[out,retval]*/ VARIANT_BOOL * ShowNewItemRow ) = 0;
      virtual HRESULT __stdcall put_ShowNewItemRow (
        /*[in]*/ VARIANT_BOOL ShowNewItemRow ) = 0;
      virtual HRESULT __stdcall get_GridLineStyle (
        /*[out,retval]*/ enum OlGridLineStyle * GridLineStyle ) = 0;
      virtual HRESULT __stdcall put_GridLineStyle (
        /*[in]*/ enum OlGridLineStyle GridLineStyle ) = 0;
      virtual HRESULT __stdcall get_ShowItemsInGroups (
        /*[out,retval]*/ VARIANT_BOOL * ShowItemsInGroups ) = 0;
      virtual HRESULT __stdcall put_ShowItemsInGroups (
        /*[in]*/ VARIANT_BOOL ShowItemsInGroups ) = 0;
      virtual HRESULT __stdcall get_ShowReadingPane (
        /*[out,retval]*/ VARIANT_BOOL * ShowReadingPane ) = 0;
      virtual HRESULT __stdcall put_ShowReadingPane (
        /*[in]*/ VARIANT_BOOL ShowReadingPane ) = 0;
      virtual HRESULT __stdcall get_HideReadingPaneHeaderInfo (
        /*[out,retval]*/ VARIANT_BOOL * HideReadingPaneHeaderInfo ) = 0;
      virtual HRESULT __stdcall put_HideReadingPaneHeaderInfo (
        /*[in]*/ VARIANT_BOOL HideReadingPaneHeaderInfo ) = 0;
      virtual HRESULT __stdcall get_ShowUnreadAndFlaggedMessages (
        /*[out,retval]*/ VARIANT_BOOL * ShowUnreadAndFlaggedMessages ) = 0;
      virtual HRESULT __stdcall put_ShowUnreadAndFlaggedMessages (
        /*[in]*/ VARIANT_BOOL ShowUnreadAndFlaggedMessages ) = 0;
      virtual HRESULT __stdcall get_RowFont (
        /*[out,retval]*/ struct _ViewFont * * RowFont ) = 0;
      virtual HRESULT __stdcall get_ColumnFont (
        /*[out,retval]*/ struct _ViewFont * * ColumnFont ) = 0;
      virtual HRESULT __stdcall get_AutoPreviewFont (
        /*[out,retval]*/ struct _ViewFont * * AutoPreviewFont ) = 0;
      virtual HRESULT __stdcall get_AutoPreview (
        /*[out,retval]*/ enum OlAutoPreview * AutoPreview ) = 0;
      virtual HRESULT __stdcall put_AutoPreview (
        /*[in]*/ enum OlAutoPreview AutoPreview ) = 0;
      virtual HRESULT __stdcall get_AutoFormatRules (
        /*[out,retval]*/ struct _AutoFormatRules * * AutoFormatRules ) = 0;
      virtual HRESULT __stdcall GetTable (
        /*[out,retval]*/ struct _Table * * Table ) = 0;
      virtual HRESULT __stdcall get_ShowConversationByDate (
        /*[out,retval]*/ VARIANT_BOOL * ShowConversationByDate ) = 0;
      virtual HRESULT __stdcall put_ShowConversationByDate (
        /*[in]*/ VARIANT_BOOL ShowConversationByDate ) = 0;
      virtual HRESULT __stdcall get_ShowFullConversations (
        /*[out,retval]*/ VARIANT_BOOL * ShowFullConversations ) = 0;
      virtual HRESULT __stdcall put_ShowFullConversations (
        /*[in]*/ VARIANT_BOOL ShowFullConversations ) = 0;
      virtual HRESULT __stdcall get_AlwaysExpandConversation (
        /*[out,retval]*/ VARIANT_BOOL * AlwaysExpandConversation ) = 0;
      virtual HRESULT __stdcall put_AlwaysExpandConversation (
        /*[in]*/ VARIANT_BOOL AlwaysExpandConversation ) = 0;
      virtual HRESULT __stdcall get_ShowConversationSendersAboveSubject (
        /*[out,retval]*/ VARIANT_BOOL * ShowConversationSendersAboveSubject ) = 0;
      virtual HRESULT __stdcall put_ShowConversationSendersAboveSubject (
        /*[in]*/ VARIANT_BOOL ShowConversationSendersAboveSubject ) = 0;
};

struct __declspec(uuid("000630a3-0000-0000-c000-000000000046"))
_PeopleView : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall Apply ( ) = 0;
      virtual HRESULT __stdcall Copy (
        /*[in]*/ BSTR Name,
        /*[in]*/ enum OlViewSaveOption SaveOption,
        /*[out,retval]*/ struct View * * ppview ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Reset ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall get_Language (
        /*[out,retval]*/ BSTR * Language ) = 0;
      virtual HRESULT __stdcall put_Language (
        /*[in]*/ BSTR Language ) = 0;
      virtual HRESULT __stdcall get_LockUserChanges (
        /*[out,retval]*/ VARIANT_BOOL * LockUserChanges ) = 0;
      virtual HRESULT __stdcall put_LockUserChanges (
        /*[in]*/ VARIANT_BOOL LockUserChanges ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR Name ) = 0;
      virtual HRESULT __stdcall get_SaveOption (
        /*[out,retval]*/ enum OlViewSaveOption * SaveOption ) = 0;
      virtual HRESULT __stdcall get_Standard (
        /*[out,retval]*/ VARIANT_BOOL * Standard ) = 0;
      virtual HRESULT __stdcall get_ViewType (
        /*[out,retval]*/ enum OlViewType * ViewType ) = 0;
      virtual HRESULT __stdcall get_XML (
        /*[out,retval]*/ BSTR * XML ) = 0;
      virtual HRESULT __stdcall put_XML (
        /*[in]*/ BSTR XML ) = 0;
      virtual HRESULT __stdcall GoToDate (
        /*[in]*/ DATE Date ) = 0;
      virtual HRESULT __stdcall get_Filter (
        /*[out,retval]*/ BSTR * Filter ) = 0;
      virtual HRESULT __stdcall put_Filter (
        /*[in]*/ BSTR Filter ) = 0;
      virtual HRESULT __stdcall get_SortFields (
        /*[out,retval]*/ struct _OrderFields * * SortFields ) = 0;
};

struct __declspec(uuid("00063045-0000-0000-c000-000000000046"))
Recipient : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Address (
        /*[out,retval]*/ BSTR * Address ) = 0;
      virtual HRESULT __stdcall get_AddressEntry (
        /*[out,retval]*/ struct AddressEntry * * AddressEntry ) = 0;
      virtual HRESULT __stdcall putref_AddressEntry (
        /*[in]*/ struct AddressEntry * AddressEntry ) = 0;
      virtual HRESULT __stdcall get_AutoResponse (
        /*[out,retval]*/ BSTR * AutoResponse ) = 0;
      virtual HRESULT __stdcall put_AutoResponse (
        /*[in]*/ BSTR AutoResponse ) = 0;
      virtual HRESULT __stdcall get_DisplayType (
        /*[out,retval]*/ enum OlDisplayType * DisplayType ) = 0;
      virtual HRESULT __stdcall get_EntryID (
        /*[out,retval]*/ BSTR * EntryID ) = 0;
      virtual HRESULT __stdcall get_Index (
        /*[out,retval]*/ long * Index ) = 0;
      virtual HRESULT __stdcall get_MeetingResponseStatus (
        /*[out,retval]*/ enum OlResponseStatus * MeetingResponseStatus ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall get_Resolved (
        /*[out,retval]*/ VARIANT_BOOL * Resolved ) = 0;
      virtual HRESULT __stdcall get_TrackingStatus (
        /*[out,retval]*/ enum OlTrackingStatus * TrackingStatus ) = 0;
      virtual HRESULT __stdcall put_TrackingStatus (
        /*[in]*/ enum OlTrackingStatus TrackingStatus ) = 0;
      virtual HRESULT __stdcall get_TrackingStatusTime (
        /*[out,retval]*/ DATE * TrackingStatusTime ) = 0;
      virtual HRESULT __stdcall put_TrackingStatusTime (
        /*[in]*/ DATE TrackingStatusTime ) = 0;
      virtual HRESULT __stdcall get_Type (
        /*[out,retval]*/ long * Type ) = 0;
      virtual HRESULT __stdcall put_Type (
        /*[in]*/ long Type ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall FreeBusy (
        /*[in]*/ DATE Start,
        /*[in]*/ long MinPerChar,
        /*[in]*/ VARIANT CompleteFormat,
        /*[out,retval]*/ BSTR * FreeBusyInfo ) = 0;
      virtual HRESULT __stdcall Resolve (
        /*[out,retval]*/ VARIANT_BOOL * Success ) = 0;
      virtual HRESULT __stdcall get_PropertyAccessor (
        /*[out,retval]*/ struct _PropertyAccessor * * PropertyAccessor ) = 0;
      virtual HRESULT __stdcall get_Sendable (
        /*[out,retval]*/ VARIANT_BOOL * Sendable ) = 0;
      virtual HRESULT __stdcall put_Sendable (
        /*[in]*/ VARIANT_BOOL Sendable ) = 0;
};

struct __declspec(uuid("0006303b-0000-0000-c000-000000000046"))
Recipients : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct Recipient * * Item ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ BSTR Name,
        /*[out,retval]*/ struct Recipient * * Recipient ) = 0;
      virtual HRESULT __stdcall Remove (
        /*[in]*/ long Index ) = 0;
      virtual HRESULT __stdcall ResolveAll (
        /*[out,retval]*/ VARIANT_BOOL * Success ) = 0;
};

struct __declspec(uuid("000630d1-0000-0000-c000-000000000046"))
_SendRuleAction : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_ActionType (
        /*[out,retval]*/ enum OlRuleActionType * ActionType ) = 0;
      virtual HRESULT __stdcall get_Recipients (
        /*[out,retval]*/ struct Recipients * * Recipients ) = 0;
};

struct __declspec(uuid("000630de-0000-0000-c000-000000000046"))
_ToOrFromRuleCondition : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_ConditionType (
        /*[out,retval]*/ enum OlRuleConditionType * ConditionType ) = 0;
      virtual HRESULT __stdcall get_Recipients (
        /*[out,retval]*/ struct Recipients * * Recipients ) = 0;
};

struct __declspec(uuid("0006304b-0000-0000-c000-000000000046"))
AddressEntry : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Address (
        /*[out,retval]*/ BSTR * Address ) = 0;
      virtual HRESULT __stdcall put_Address (
        /*[in]*/ BSTR Address ) = 0;
      virtual HRESULT __stdcall get_DisplayType (
        /*[out,retval]*/ enum OlDisplayType * DisplayType ) = 0;
      virtual HRESULT __stdcall get_ID (
        /*[out,retval]*/ BSTR * ID ) = 0;
      virtual HRESULT __stdcall get_Manager (
        /*[out,retval]*/ struct AddressEntry * * Manager ) = 0;
      virtual HRESULT __stdcall get_MAPIOBJECT (
        /*[out,retval]*/ IUnknown * * MAPIOBJECT ) = 0;
      virtual HRESULT __stdcall put_MAPIOBJECT (
        /*[in]*/ IUnknown * MAPIOBJECT ) = 0;
      virtual HRESULT __stdcall get_Members (
        /*[out,retval]*/ struct AddressEntries * * Members ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR Name ) = 0;
      virtual HRESULT __stdcall get_Type (
        /*[out,retval]*/ BSTR * Type ) = 0;
      virtual HRESULT __stdcall put_Type (
        /*[in]*/ BSTR Type ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Details (
        /*[in]*/ VARIANT HWnd = vtMissing ) = 0;
      virtual HRESULT __stdcall GetFreeBusy (
        /*[in]*/ DATE Start,
        /*[in]*/ long MinPerChar,
        /*[in]*/ VARIANT CompleteFormat,
        /*[out,retval]*/ BSTR * FreeBusyInfo ) = 0;
      virtual HRESULT __stdcall Update (
        /*[in]*/ VARIANT MakePermanent = vtMissing,
        /*[in]*/ VARIANT Refresh = vtMissing ) = 0;
      virtual HRESULT __stdcall UpdateFreeBusy ( ) = 0;
      virtual HRESULT __stdcall GetContact (
        /*[out,retval]*/ struct _ContactItem * * ret ) = 0;
      virtual HRESULT __stdcall GetExchangeUser (
        /*[out,retval]*/ struct _ExchangeUser * * ret ) = 0;
      virtual HRESULT __stdcall get_AddressEntryUserType (
        /*[out,retval]*/ enum OlAddressEntryUserType * AddressEntryUserType ) = 0;
      virtual HRESULT __stdcall GetExchangeDistributionList (
        /*[out,retval]*/ struct _ExchangeDistributionList * * ret ) = 0;
      virtual HRESULT __stdcall get_PropertyAccessor (
        /*[out,retval]*/ struct _PropertyAccessor * * PropertyAccessor ) = 0;
};

struct __declspec(uuid("0006304a-0000-0000-c000-000000000046"))
AddressEntries : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct AddressEntry * * Item ) = 0;
      virtual HRESULT __stdcall get_RawTable (
        /*[out,retval]*/ IUnknown * * RawTable ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ BSTR Type,
        /*[in]*/ VARIANT Name,
        /*[in]*/ VARIANT Address,
        /*[out,retval]*/ struct AddressEntry * * Entry ) = 0;
      virtual HRESULT __stdcall GetFirst (
        /*[out,retval]*/ struct AddressEntry * * AddressEntry ) = 0;
      virtual HRESULT __stdcall GetLast (
        /*[out,retval]*/ struct AddressEntry * * AddressEntry ) = 0;
      virtual HRESULT __stdcall GetNext (
        /*[out,retval]*/ struct AddressEntry * * AddressEntry ) = 0;
      virtual HRESULT __stdcall GetPrevious (
        /*[out,retval]*/ struct AddressEntry * * AddressEntry ) = 0;
      virtual HRESULT __stdcall Sort (
        /*[in]*/ VARIANT Property = vtMissing,
        /*[in]*/ VARIANT Order = vtMissing ) = 0;
};

struct __declspec(uuid("000630c5-0000-0000-c000-000000000046"))
_Account : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_AccountType (
        /*[out,retval]*/ enum OlAccountType * AccountType ) = 0;
      virtual HRESULT __stdcall get_DisplayName (
        /*[out,retval]*/ BSTR * DisplayName ) = 0;
      virtual HRESULT __stdcall get_UserName (
        /*[out,retval]*/ BSTR * UserName ) = 0;
      virtual HRESULT __stdcall get_SmtpAddress (
        /*[out,retval]*/ BSTR * SmtpAddress ) = 0;
      virtual HRESULT __stdcall get_AutoDiscoverConnectionMode (
        /*[out,retval]*/ enum OlAutoDiscoverConnectionMode * AutoDiscoverConnectionMode ) = 0;
      virtual HRESULT __stdcall get_CurrentUser (
        /*[out,retval]*/ struct Recipient * * CurrentUser ) = 0;
      virtual HRESULT __stdcall get_AutoDiscoverXml (
        /*[out,retval]*/ BSTR * AutoDiscoverXml ) = 0;
      virtual HRESULT __stdcall get_DeliveryStore (
        /*[out,retval]*/ struct _Store * * DeliveryStore ) = 0;
      virtual HRESULT __stdcall get_ExchangeConnectionMode (
        /*[out,retval]*/ enum OlExchangeConnectionMode * ExchangeConnectionMode ) = 0;
      virtual HRESULT __stdcall get_ExchangeMailboxServerName (
        /*[out,retval]*/ BSTR * ExchangeMailboxServerName ) = 0;
      virtual HRESULT __stdcall get_ExchangeMailboxServerVersion (
        /*[out,retval]*/ BSTR * ExchangeMailboxServerVersion ) = 0;
      virtual HRESULT __stdcall GetAddressEntryFromID (
        /*[in]*/ BSTR ID,
        /*[out,retval]*/ struct AddressEntry * * AddressEntry ) = 0;
      virtual HRESULT __stdcall GetRecipientFromID (
        /*[in]*/ BSTR EntryID,
        /*[out,retval]*/ struct Recipient * * Recipient ) = 0;
      virtual HRESULT __stdcall get_IOlkAccount (
        /*[out,retval]*/ IUnknown * * IOlkAccount ) = 0;
};

struct __declspec(uuid("00063103-0000-0000-c000-000000000046"))
_AccountSelector : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_SelectedAccount (
        /*[out,retval]*/ struct _Account * * SelectedAccount ) = 0;
};

struct __declspec(uuid("000630c4-0000-0000-c000-000000000046"))
_Accounts : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _Account * * Item ) = 0;
};

struct __declspec(uuid("00063021-0000-0000-c000-000000000046"))
_ContactItem : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Actions (
        /*[out,retval]*/ struct Actions * * Actions ) = 0;
      virtual HRESULT __stdcall get_Attachments (
        /*[out,retval]*/ struct Attachments * * Attachments ) = 0;
      virtual HRESULT __stdcall get_BillingInformation (
        /*[out,retval]*/ BSTR * BillingInformation ) = 0;
      virtual HRESULT __stdcall put_BillingInformation (
        /*[in]*/ BSTR BillingInformation ) = 0;
      virtual HRESULT __stdcall get_Body (
        /*[out,retval]*/ BSTR * Body ) = 0;
      virtual HRESULT __stdcall put_Body (
        /*[in]*/ BSTR Body ) = 0;
      virtual HRESULT __stdcall get_Categories (
        /*[out,retval]*/ BSTR * Categories ) = 0;
      virtual HRESULT __stdcall put_Categories (
        /*[in]*/ BSTR Categories ) = 0;
      virtual HRESULT __stdcall get_Companies (
        /*[out,retval]*/ BSTR * Companies ) = 0;
      virtual HRESULT __stdcall put_Companies (
        /*[in]*/ BSTR Companies ) = 0;
      virtual HRESULT __stdcall get_ConversationIndex (
        /*[out,retval]*/ BSTR * ConversationIndex ) = 0;
      virtual HRESULT __stdcall get_ConversationTopic (
        /*[out,retval]*/ BSTR * ConversationTopic ) = 0;
      virtual HRESULT __stdcall get_CreationTime (
        /*[out,retval]*/ DATE * CreationTime ) = 0;
      virtual HRESULT __stdcall get_EntryID (
        /*[out,retval]*/ BSTR * EntryID ) = 0;
      virtual HRESULT __stdcall get_FormDescription (
        /*[out,retval]*/ struct FormDescription * * FormDescription ) = 0;
      virtual HRESULT __stdcall get_GetInspector (
        /*[out,retval]*/ struct _Inspector * * GetInspector ) = 0;
      virtual HRESULT __stdcall get_Importance (
        /*[out,retval]*/ enum OlImportance * Importance ) = 0;
      virtual HRESULT __stdcall put_Importance (
        /*[in]*/ enum OlImportance Importance ) = 0;
      virtual HRESULT __stdcall get_LastModificationTime (
        /*[out,retval]*/ DATE * LastModificationTime ) = 0;
      virtual HRESULT __stdcall get_MAPIOBJECT (
        /*[out,retval]*/ IUnknown * * MAPIOBJECT ) = 0;
      virtual HRESULT __stdcall get_MessageClass (
        /*[out,retval]*/ BSTR * MessageClass ) = 0;
      virtual HRESULT __stdcall put_MessageClass (
        /*[in]*/ BSTR MessageClass ) = 0;
      virtual HRESULT __stdcall get_Mileage (
        /*[out,retval]*/ BSTR * Mileage ) = 0;
      virtual HRESULT __stdcall put_Mileage (
        /*[in]*/ BSTR Mileage ) = 0;
      virtual HRESULT __stdcall get_NoAging (
        /*[out,retval]*/ VARIANT_BOOL * NoAging ) = 0;
      virtual HRESULT __stdcall put_NoAging (
        /*[in]*/ VARIANT_BOOL NoAging ) = 0;
      virtual HRESULT __stdcall get_OutlookInternalVersion (
        /*[out,retval]*/ long * OutlookInternalVersion ) = 0;
      virtual HRESULT __stdcall get_OutlookVersion (
        /*[out,retval]*/ BSTR * OutlookVersion ) = 0;
      virtual HRESULT __stdcall get_Saved (
        /*[out,retval]*/ VARIANT_BOOL * Saved ) = 0;
      virtual HRESULT __stdcall get_Sensitivity (
        /*[out,retval]*/ enum OlSensitivity * Sensitivity ) = 0;
      virtual HRESULT __stdcall put_Sensitivity (
        /*[in]*/ enum OlSensitivity Sensitivity ) = 0;
      virtual HRESULT __stdcall get_Size (
        /*[out,retval]*/ long * Size ) = 0;
      virtual HRESULT __stdcall get_Subject (
        /*[out,retval]*/ BSTR * Subject ) = 0;
      virtual HRESULT __stdcall put_Subject (
        /*[in]*/ BSTR Subject ) = 0;
      virtual HRESULT __stdcall get_UnRead (
        /*[out,retval]*/ VARIANT_BOOL * UnRead ) = 0;
      virtual HRESULT __stdcall put_UnRead (
        /*[in]*/ VARIANT_BOOL UnRead ) = 0;
      virtual HRESULT __stdcall get_UserProperties (
        /*[out,retval]*/ struct UserProperties * * UserProperties ) = 0;
      virtual HRESULT __stdcall Close (
        /*[in]*/ enum OlInspectorClose SaveMode ) = 0;
      virtual HRESULT __stdcall Copy (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Display (
        /*[in]*/ VARIANT Modal = vtMissing ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ struct MAPIFolder * DestFldr,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall PrintOut ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall SaveAs (
        /*[in]*/ BSTR Path,
        /*[in]*/ VARIANT Type = vtMissing ) = 0;
      virtual HRESULT __stdcall get_Account (
        /*[out,retval]*/ BSTR * Account ) = 0;
      virtual HRESULT __stdcall put_Account (
        /*[in]*/ BSTR Account ) = 0;
      virtual HRESULT __stdcall get_Anniversary (
        /*[out,retval]*/ DATE * Anniversary ) = 0;
      virtual HRESULT __stdcall put_Anniversary (
        /*[in]*/ DATE Anniversary ) = 0;
      virtual HRESULT __stdcall get_AssistantName (
        /*[out,retval]*/ BSTR * AssistantName ) = 0;
      virtual HRESULT __stdcall put_AssistantName (
        /*[in]*/ BSTR AssistantName ) = 0;
      virtual HRESULT __stdcall get_AssistantTelephoneNumber (
        /*[out,retval]*/ BSTR * AssistantTelephoneNumber ) = 0;
      virtual HRESULT __stdcall put_AssistantTelephoneNumber (
        /*[in]*/ BSTR AssistantTelephoneNumber ) = 0;
      virtual HRESULT __stdcall get_Birthday (
        /*[out,retval]*/ DATE * Birthday ) = 0;
      virtual HRESULT __stdcall put_Birthday (
        /*[in]*/ DATE Birthday ) = 0;
      virtual HRESULT __stdcall get_Business2TelephoneNumber (
        /*[out,retval]*/ BSTR * Business2TelephoneNumber ) = 0;
      virtual HRESULT __stdcall put_Business2TelephoneNumber (
        /*[in]*/ BSTR Business2TelephoneNumber ) = 0;
      virtual HRESULT __stdcall get_BusinessAddress (
        /*[out,retval]*/ BSTR * BusinessAddress ) = 0;
      virtual HRESULT __stdcall put_BusinessAddress (
        /*[in]*/ BSTR BusinessAddress ) = 0;
      virtual HRESULT __stdcall get_BusinessAddressCity (
        /*[out,retval]*/ BSTR * BusinessAddressCity ) = 0;
      virtual HRESULT __stdcall put_BusinessAddressCity (
        /*[in]*/ BSTR BusinessAddressCity ) = 0;
      virtual HRESULT __stdcall get_BusinessAddressCountry (
        /*[out,retval]*/ BSTR * BusinessAddressCountry ) = 0;
      virtual HRESULT __stdcall put_BusinessAddressCountry (
        /*[in]*/ BSTR BusinessAddressCountry ) = 0;
      virtual HRESULT __stdcall get_BusinessAddressPostalCode (
        /*[out,retval]*/ BSTR * BusinessAddressPostalCode ) = 0;
      virtual HRESULT __stdcall put_BusinessAddressPostalCode (
        /*[in]*/ BSTR BusinessAddressPostalCode ) = 0;
      virtual HRESULT __stdcall get_BusinessAddressPostOfficeBox (
        /*[out,retval]*/ BSTR * BusinessAddressPostOfficeBox ) = 0;
      virtual HRESULT __stdcall put_BusinessAddressPostOfficeBox (
        /*[in]*/ BSTR BusinessAddressPostOfficeBox ) = 0;
      virtual HRESULT __stdcall get_BusinessAddressState (
        /*[out,retval]*/ BSTR * BusinessAddressState ) = 0;
      virtual HRESULT __stdcall put_BusinessAddressState (
        /*[in]*/ BSTR BusinessAddressState ) = 0;
      virtual HRESULT __stdcall get_BusinessAddressStreet (
        /*[out,retval]*/ BSTR * BusinessAddressStreet ) = 0;
      virtual HRESULT __stdcall put_BusinessAddressStreet (
        /*[in]*/ BSTR BusinessAddressStreet ) = 0;
      virtual HRESULT __stdcall get_BusinessFaxNumber (
        /*[out,retval]*/ BSTR * BusinessFaxNumber ) = 0;
      virtual HRESULT __stdcall put_BusinessFaxNumber (
        /*[in]*/ BSTR BusinessFaxNumber ) = 0;
      virtual HRESULT __stdcall get_BusinessHomePage (
        /*[out,retval]*/ BSTR * BusinessHomePage ) = 0;
      virtual HRESULT __stdcall put_BusinessHomePage (
        /*[in]*/ BSTR BusinessHomePage ) = 0;
      virtual HRESULT __stdcall get_BusinessTelephoneNumber (
        /*[out,retval]*/ BSTR * BusinessTelephoneNumber ) = 0;
      virtual HRESULT __stdcall put_BusinessTelephoneNumber (
        /*[in]*/ BSTR BusinessTelephoneNumber ) = 0;
      virtual HRESULT __stdcall get_CallbackTelephoneNumber (
        /*[out,retval]*/ BSTR * CallbackTelephoneNumber ) = 0;
      virtual HRESULT __stdcall put_CallbackTelephoneNumber (
        /*[in]*/ BSTR CallbackTelephoneNumber ) = 0;
      virtual HRESULT __stdcall get_CarTelephoneNumber (
        /*[out,retval]*/ BSTR * CarTelephoneNumber ) = 0;
      virtual HRESULT __stdcall put_CarTelephoneNumber (
        /*[in]*/ BSTR CarTelephoneNumber ) = 0;
      virtual HRESULT __stdcall get_Children (
        /*[out,retval]*/ BSTR * Children ) = 0;
      virtual HRESULT __stdcall put_Children (
        /*[in]*/ BSTR Children ) = 0;
      virtual HRESULT __stdcall get_CompanyAndFullName (
        /*[out,retval]*/ BSTR * CompanyAndFullName ) = 0;
      virtual HRESULT __stdcall get_CompanyLastFirstNoSpace (
        /*[out,retval]*/ BSTR * CompanyLastFirstNoSpace ) = 0;
      virtual HRESULT __stdcall get_CompanyLastFirstSpaceOnly (
        /*[out,retval]*/ BSTR * CompanyLastFirstSpaceOnly ) = 0;
      virtual HRESULT __stdcall get_CompanyMainTelephoneNumber (
        /*[out,retval]*/ BSTR * CompanyMainTelephoneNumber ) = 0;
      virtual HRESULT __stdcall put_CompanyMainTelephoneNumber (
        /*[in]*/ BSTR CompanyMainTelephoneNumber ) = 0;
      virtual HRESULT __stdcall get_CompanyName (
        /*[out,retval]*/ BSTR * CompanyName ) = 0;
      virtual HRESULT __stdcall put_CompanyName (
        /*[in]*/ BSTR CompanyName ) = 0;
      virtual HRESULT __stdcall get_ComputerNetworkName (
        /*[out,retval]*/ BSTR * ComputerNetworkName ) = 0;
      virtual HRESULT __stdcall put_ComputerNetworkName (
        /*[in]*/ BSTR ComputerNetworkName ) = 0;
      virtual HRESULT __stdcall get_CustomerID (
        /*[out,retval]*/ BSTR * CustomerID ) = 0;
      virtual HRESULT __stdcall put_CustomerID (
        /*[in]*/ BSTR CustomerID ) = 0;
      virtual HRESULT __stdcall get_Department (
        /*[out,retval]*/ BSTR * Department ) = 0;
      virtual HRESULT __stdcall put_Department (
        /*[in]*/ BSTR Department ) = 0;
      virtual HRESULT __stdcall get_Email1Address (
        /*[out,retval]*/ BSTR * Email1Address ) = 0;
      virtual HRESULT __stdcall put_Email1Address (
        /*[in]*/ BSTR Email1Address ) = 0;
      virtual HRESULT __stdcall get_Email1AddressType (
        /*[out,retval]*/ BSTR * Email1AddressType ) = 0;
      virtual HRESULT __stdcall put_Email1AddressType (
        /*[in]*/ BSTR Email1AddressType ) = 0;
      virtual HRESULT __stdcall get_Email1DisplayName (
        /*[out,retval]*/ BSTR * Email1DisplayName ) = 0;
      virtual HRESULT __stdcall get_Email1EntryID (
        /*[out,retval]*/ BSTR * Email1EntryID ) = 0;
      virtual HRESULT __stdcall get_Email2Address (
        /*[out,retval]*/ BSTR * Email2Address ) = 0;
      virtual HRESULT __stdcall put_Email2Address (
        /*[in]*/ BSTR Email2Address ) = 0;
      virtual HRESULT __stdcall get_Email2AddressType (
        /*[out,retval]*/ BSTR * Email2AddressType ) = 0;
      virtual HRESULT __stdcall put_Email2AddressType (
        /*[in]*/ BSTR Email2AddressType ) = 0;
      virtual HRESULT __stdcall get_Email2DisplayName (
        /*[out,retval]*/ BSTR * Email2DisplayName ) = 0;
      virtual HRESULT __stdcall get_Email2EntryID (
        /*[out,retval]*/ BSTR * Email2EntryID ) = 0;
      virtual HRESULT __stdcall get_Email3Address (
        /*[out,retval]*/ BSTR * Email3Address ) = 0;
      virtual HRESULT __stdcall put_Email3Address (
        /*[in]*/ BSTR Email3Address ) = 0;
      virtual HRESULT __stdcall get_Email3AddressType (
        /*[out,retval]*/ BSTR * Email3AddressType ) = 0;
      virtual HRESULT __stdcall put_Email3AddressType (
        /*[in]*/ BSTR Email3AddressType ) = 0;
      virtual HRESULT __stdcall get_Email3DisplayName (
        /*[out,retval]*/ BSTR * Email3DisplayName ) = 0;
      virtual HRESULT __stdcall get_Email3EntryID (
        /*[out,retval]*/ BSTR * Email3EntryID ) = 0;
      virtual HRESULT __stdcall get_FileAs (
        /*[out,retval]*/ BSTR * FileAs ) = 0;
      virtual HRESULT __stdcall put_FileAs (
        /*[in]*/ BSTR FileAs ) = 0;
      virtual HRESULT __stdcall get_FirstName (
        /*[out,retval]*/ BSTR * FirstName ) = 0;
      virtual HRESULT __stdcall put_FirstName (
        /*[in]*/ BSTR FirstName ) = 0;
      virtual HRESULT __stdcall get_FTPSite (
        /*[out,retval]*/ BSTR * FTPSite ) = 0;
      virtual HRESULT __stdcall put_FTPSite (
        /*[in]*/ BSTR FTPSite ) = 0;
      virtual HRESULT __stdcall get_FullName (
        /*[out,retval]*/ BSTR * FullName ) = 0;
      virtual HRESULT __stdcall put_FullName (
        /*[in]*/ BSTR FullName ) = 0;
      virtual HRESULT __stdcall get_FullNameAndCompany (
        /*[out,retval]*/ BSTR * FullNameAndCompany ) = 0;
      virtual HRESULT __stdcall get_Gender (
        /*[out,retval]*/ enum OlGender * Gender ) = 0;
      virtual HRESULT __stdcall put_Gender (
        /*[in]*/ enum OlGender Gender ) = 0;
      virtual HRESULT __stdcall get_GovernmentIDNumber (
        /*[out,retval]*/ BSTR * GovernmentIDNumber ) = 0;
      virtual HRESULT __stdcall put_GovernmentIDNumber (
        /*[in]*/ BSTR GovernmentIDNumber ) = 0;
      virtual HRESULT __stdcall get_Hobby (
        /*[out,retval]*/ BSTR * Hobby ) = 0;
      virtual HRESULT __stdcall put_Hobby (
        /*[in]*/ BSTR Hobby ) = 0;
      virtual HRESULT __stdcall get_Home2TelephoneNumber (
        /*[out,retval]*/ BSTR * Home2TelephoneNumber ) = 0;
      virtual HRESULT __stdcall put_Home2TelephoneNumber (
        /*[in]*/ BSTR Home2TelephoneNumber ) = 0;
      virtual HRESULT __stdcall get_HomeAddress (
        /*[out,retval]*/ BSTR * HomeAddress ) = 0;
      virtual HRESULT __stdcall put_HomeAddress (
        /*[in]*/ BSTR HomeAddress ) = 0;
      virtual HRESULT __stdcall get_HomeAddressCity (
        /*[out,retval]*/ BSTR * HomeAddressCity ) = 0;
      virtual HRESULT __stdcall put_HomeAddressCity (
        /*[in]*/ BSTR HomeAddressCity ) = 0;
      virtual HRESULT __stdcall get_HomeAddressCountry (
        /*[out,retval]*/ BSTR * HomeAddressCountry ) = 0;
      virtual HRESULT __stdcall put_HomeAddressCountry (
        /*[in]*/ BSTR HomeAddressCountry ) = 0;
      virtual HRESULT __stdcall get_HomeAddressPostalCode (
        /*[out,retval]*/ BSTR * HomeAddressPostalCode ) = 0;
      virtual HRESULT __stdcall put_HomeAddressPostalCode (
        /*[in]*/ BSTR HomeAddressPostalCode ) = 0;
      virtual HRESULT __stdcall get_HomeAddressPostOfficeBox (
        /*[out,retval]*/ BSTR * HomeAddressPostOfficeBox ) = 0;
      virtual HRESULT __stdcall put_HomeAddressPostOfficeBox (
        /*[in]*/ BSTR HomeAddressPostOfficeBox ) = 0;
      virtual HRESULT __stdcall get_HomeAddressState (
        /*[out,retval]*/ BSTR * HomeAddressState ) = 0;
      virtual HRESULT __stdcall put_HomeAddressState (
        /*[in]*/ BSTR HomeAddressState ) = 0;
      virtual HRESULT __stdcall get_HomeAddressStreet (
        /*[out,retval]*/ BSTR * HomeAddressStreet ) = 0;
      virtual HRESULT __stdcall put_HomeAddressStreet (
        /*[in]*/ BSTR HomeAddressStreet ) = 0;
      virtual HRESULT __stdcall get_HomeFaxNumber (
        /*[out,retval]*/ BSTR * HomeFaxNumber ) = 0;
      virtual HRESULT __stdcall put_HomeFaxNumber (
        /*[in]*/ BSTR HomeFaxNumber ) = 0;
      virtual HRESULT __stdcall get_HomeTelephoneNumber (
        /*[out,retval]*/ BSTR * HomeTelephoneNumber ) = 0;
      virtual HRESULT __stdcall put_HomeTelephoneNumber (
        /*[in]*/ BSTR HomeTelephoneNumber ) = 0;
      virtual HRESULT __stdcall get_Initials (
        /*[out,retval]*/ BSTR * Initials ) = 0;
      virtual HRESULT __stdcall put_Initials (
        /*[in]*/ BSTR Initials ) = 0;
      virtual HRESULT __stdcall get_InternetFreeBusyAddress (
        /*[out,retval]*/ BSTR * InternetFreeBusyAddress ) = 0;
      virtual HRESULT __stdcall put_InternetFreeBusyAddress (
        /*[in]*/ BSTR InternetFreeBusyAddress ) = 0;
      virtual HRESULT __stdcall get_ISDNNumber (
        /*[out,retval]*/ BSTR * ISDNNumber ) = 0;
      virtual HRESULT __stdcall put_ISDNNumber (
        /*[in]*/ BSTR ISDNNumber ) = 0;
      virtual HRESULT __stdcall get_JobTitle (
        /*[out,retval]*/ BSTR * JobTitle ) = 0;
      virtual HRESULT __stdcall put_JobTitle (
        /*[in]*/ BSTR JobTitle ) = 0;
      virtual HRESULT __stdcall get_Journal (
        /*[out,retval]*/ VARIANT_BOOL * Journal ) = 0;
      virtual HRESULT __stdcall put_Journal (
        /*[in]*/ VARIANT_BOOL Journal ) = 0;
      virtual HRESULT __stdcall get_Language (
        /*[out,retval]*/ BSTR * Language ) = 0;
      virtual HRESULT __stdcall put_Language (
        /*[in]*/ BSTR Language ) = 0;
      virtual HRESULT __stdcall get_LastFirstAndSuffix (
        /*[out,retval]*/ BSTR * LastFirstAndSuffix ) = 0;
      virtual HRESULT __stdcall get_LastFirstNoSpace (
        /*[out,retval]*/ BSTR * LastFirstNoSpace ) = 0;
      virtual HRESULT __stdcall get_LastFirstNoSpaceCompany (
        /*[out,retval]*/ BSTR * LastFirstNoSpaceCompany ) = 0;
      virtual HRESULT __stdcall get_LastFirstSpaceOnly (
        /*[out,retval]*/ BSTR * LastFirstSpaceOnly ) = 0;
      virtual HRESULT __stdcall get_LastFirstSpaceOnlyCompany (
        /*[out,retval]*/ BSTR * LastFirstSpaceOnlyCompany ) = 0;
      virtual HRESULT __stdcall get_LastName (
        /*[out,retval]*/ BSTR * LastName ) = 0;
      virtual HRESULT __stdcall put_LastName (
        /*[in]*/ BSTR LastName ) = 0;
      virtual HRESULT __stdcall get_LastNameAndFirstName (
        /*[out,retval]*/ BSTR * LastNameAndFirstName ) = 0;
      virtual HRESULT __stdcall get_MailingAddress (
        /*[out,retval]*/ BSTR * MailingAddress ) = 0;
      virtual HRESULT __stdcall put_MailingAddress (
        /*[in]*/ BSTR MailingAddress ) = 0;
      virtual HRESULT __stdcall get_MailingAddressCity (
        /*[out,retval]*/ BSTR * MailingAddressCity ) = 0;
      virtual HRESULT __stdcall put_MailingAddressCity (
        /*[in]*/ BSTR MailingAddressCity ) = 0;
      virtual HRESULT __stdcall get_MailingAddressCountry (
        /*[out,retval]*/ BSTR * MailingAddressCountry ) = 0;
      virtual HRESULT __stdcall put_MailingAddressCountry (
        /*[in]*/ BSTR MailingAddressCountry ) = 0;
      virtual HRESULT __stdcall get_MailingAddressPostalCode (
        /*[out,retval]*/ BSTR * MailingAddressPostalCode ) = 0;
      virtual HRESULT __stdcall put_MailingAddressPostalCode (
        /*[in]*/ BSTR MailingAddressPostalCode ) = 0;
      virtual HRESULT __stdcall get_MailingAddressPostOfficeBox (
        /*[out,retval]*/ BSTR * MailingAddressPostOfficeBox ) = 0;
      virtual HRESULT __stdcall put_MailingAddressPostOfficeBox (
        /*[in]*/ BSTR MailingAddressPostOfficeBox ) = 0;
      virtual HRESULT __stdcall get_MailingAddressState (
        /*[out,retval]*/ BSTR * MailingAddressState ) = 0;
      virtual HRESULT __stdcall put_MailingAddressState (
        /*[in]*/ BSTR MailingAddressState ) = 0;
      virtual HRESULT __stdcall get_MailingAddressStreet (
        /*[out,retval]*/ BSTR * MailingAddressStreet ) = 0;
      virtual HRESULT __stdcall put_MailingAddressStreet (
        /*[in]*/ BSTR MailingAddressStreet ) = 0;
      virtual HRESULT __stdcall get_ManagerName (
        /*[out,retval]*/ BSTR * ManagerName ) = 0;
      virtual HRESULT __stdcall put_ManagerName (
        /*[in]*/ BSTR ManagerName ) = 0;
      virtual HRESULT __stdcall get_MiddleName (
        /*[out,retval]*/ BSTR * MiddleName ) = 0;
      virtual HRESULT __stdcall put_MiddleName (
        /*[in]*/ BSTR MiddleName ) = 0;
      virtual HRESULT __stdcall get_MobileTelephoneNumber (
        /*[out,retval]*/ BSTR * MobileTelephoneNumber ) = 0;
      virtual HRESULT __stdcall put_MobileTelephoneNumber (
        /*[in]*/ BSTR MobileTelephoneNumber ) = 0;
      virtual HRESULT __stdcall get_NetMeetingAlias (
        /*[out,retval]*/ BSTR * NetMeetingAlias ) = 0;
      virtual HRESULT __stdcall put_NetMeetingAlias (
        /*[in]*/ BSTR NetMeetingAlias ) = 0;
      virtual HRESULT __stdcall get_NetMeetingServer (
        /*[out,retval]*/ BSTR * NetMeetingServer ) = 0;
      virtual HRESULT __stdcall put_NetMeetingServer (
        /*[in]*/ BSTR NetMeetingServer ) = 0;
      virtual HRESULT __stdcall get_NickName (
        /*[out,retval]*/ BSTR * NickName ) = 0;
      virtual HRESULT __stdcall put_NickName (
        /*[in]*/ BSTR NickName ) = 0;
      virtual HRESULT __stdcall get_OfficeLocation (
        /*[out,retval]*/ BSTR * OfficeLocation ) = 0;
      virtual HRESULT __stdcall put_OfficeLocation (
        /*[in]*/ BSTR OfficeLocation ) = 0;
      virtual HRESULT __stdcall get_OrganizationalIDNumber (
        /*[out,retval]*/ BSTR * OrganizationalIDNumber ) = 0;
      virtual HRESULT __stdcall put_OrganizationalIDNumber (
        /*[in]*/ BSTR OrganizationalIDNumber ) = 0;
      virtual HRESULT __stdcall get_OtherAddress (
        /*[out,retval]*/ BSTR * OtherAddress ) = 0;
      virtual HRESULT __stdcall put_OtherAddress (
        /*[in]*/ BSTR OtherAddress ) = 0;
      virtual HRESULT __stdcall get_OtherAddressCity (
        /*[out,retval]*/ BSTR * OtherAddressCity ) = 0;
      virtual HRESULT __stdcall put_OtherAddressCity (
        /*[in]*/ BSTR OtherAddressCity ) = 0;
      virtual HRESULT __stdcall get_OtherAddressCountry (
        /*[out,retval]*/ BSTR * OtherAddressCountry ) = 0;
      virtual HRESULT __stdcall put_OtherAddressCountry (
        /*[in]*/ BSTR OtherAddressCountry ) = 0;
      virtual HRESULT __stdcall get_OtherAddressPostalCode (
        /*[out,retval]*/ BSTR * OtherAddressPostalCode ) = 0;
      virtual HRESULT __stdcall put_OtherAddressPostalCode (
        /*[in]*/ BSTR OtherAddressPostalCode ) = 0;
      virtual HRESULT __stdcall get_OtherAddressPostOfficeBox (
        /*[out,retval]*/ BSTR * OtherAddressPostOfficeBox ) = 0;
      virtual HRESULT __stdcall put_OtherAddressPostOfficeBox (
        /*[in]*/ BSTR OtherAddressPostOfficeBox ) = 0;
      virtual HRESULT __stdcall get_OtherAddressState (
        /*[out,retval]*/ BSTR * OtherAddressState ) = 0;
      virtual HRESULT __stdcall put_OtherAddressState (
        /*[in]*/ BSTR OtherAddressState ) = 0;
      virtual HRESULT __stdcall get_OtherAddressStreet (
        /*[out,retval]*/ BSTR * OtherAddressStreet ) = 0;
      virtual HRESULT __stdcall put_OtherAddressStreet (
        /*[in]*/ BSTR OtherAddressStreet ) = 0;
      virtual HRESULT __stdcall get_OtherFaxNumber (
        /*[out,retval]*/ BSTR * OtherFaxNumber ) = 0;
      virtual HRESULT __stdcall put_OtherFaxNumber (
        /*[in]*/ BSTR OtherFaxNumber ) = 0;
      virtual HRESULT __stdcall get_OtherTelephoneNumber (
        /*[out,retval]*/ BSTR * OtherTelephoneNumber ) = 0;
      virtual HRESULT __stdcall put_OtherTelephoneNumber (
        /*[in]*/ BSTR OtherTelephoneNumber ) = 0;
      virtual HRESULT __stdcall get_PagerNumber (
        /*[out,retval]*/ BSTR * PagerNumber ) = 0;
      virtual HRESULT __stdcall put_PagerNumber (
        /*[in]*/ BSTR PagerNumber ) = 0;
      virtual HRESULT __stdcall get_PersonalHomePage (
        /*[out,retval]*/ BSTR * PersonalHomePage ) = 0;
      virtual HRESULT __stdcall put_PersonalHomePage (
        /*[in]*/ BSTR PersonalHomePage ) = 0;
      virtual HRESULT __stdcall get_PrimaryTelephoneNumber (
        /*[out,retval]*/ BSTR * PrimaryTelephoneNumber ) = 0;
      virtual HRESULT __stdcall put_PrimaryTelephoneNumber (
        /*[in]*/ BSTR PrimaryTelephoneNumber ) = 0;
      virtual HRESULT __stdcall get_Profession (
        /*[out,retval]*/ BSTR * Profession ) = 0;
      virtual HRESULT __stdcall put_Profession (
        /*[in]*/ BSTR Profession ) = 0;
      virtual HRESULT __stdcall get_RadioTelephoneNumber (
        /*[out,retval]*/ BSTR * RadioTelephoneNumber ) = 0;
      virtual HRESULT __stdcall put_RadioTelephoneNumber (
        /*[in]*/ BSTR RadioTelephoneNumber ) = 0;
      virtual HRESULT __stdcall get_ReferredBy (
        /*[out,retval]*/ BSTR * ReferredBy ) = 0;
      virtual HRESULT __stdcall put_ReferredBy (
        /*[in]*/ BSTR ReferredBy ) = 0;
      virtual HRESULT __stdcall get_SelectedMailingAddress (
        /*[out,retval]*/ enum OlMailingAddress * SelectedMailingAddress ) = 0;
      virtual HRESULT __stdcall put_SelectedMailingAddress (
        /*[in]*/ enum OlMailingAddress SelectedMailingAddress ) = 0;
      virtual HRESULT __stdcall get_Spouse (
        /*[out,retval]*/ BSTR * Spouse ) = 0;
      virtual HRESULT __stdcall put_Spouse (
        /*[in]*/ BSTR Spouse ) = 0;
      virtual HRESULT __stdcall get_Suffix (
        /*[out,retval]*/ BSTR * Suffix ) = 0;
      virtual HRESULT __stdcall put_Suffix (
        /*[in]*/ BSTR Suffix ) = 0;
      virtual HRESULT __stdcall get_TelexNumber (
        /*[out,retval]*/ BSTR * TelexNumber ) = 0;
      virtual HRESULT __stdcall put_TelexNumber (
        /*[in]*/ BSTR TelexNumber ) = 0;
      virtual HRESULT __stdcall get_Title (
        /*[out,retval]*/ BSTR * Title ) = 0;
      virtual HRESULT __stdcall put_Title (
        /*[in]*/ BSTR Title ) = 0;
      virtual HRESULT __stdcall get_TTYTDDTelephoneNumber (
        /*[out,retval]*/ BSTR * TTYTDDTelephoneNumber ) = 0;
      virtual HRESULT __stdcall put_TTYTDDTelephoneNumber (
        /*[in]*/ BSTR TTYTDDTelephoneNumber ) = 0;
      virtual HRESULT __stdcall get_User1 (
        /*[out,retval]*/ BSTR * User1 ) = 0;
      virtual HRESULT __stdcall put_User1 (
        /*[in]*/ BSTR User1 ) = 0;
      virtual HRESULT __stdcall get_User2 (
        /*[out,retval]*/ BSTR * User2 ) = 0;
      virtual HRESULT __stdcall put_User2 (
        /*[in]*/ BSTR User2 ) = 0;
      virtual HRESULT __stdcall get_User3 (
        /*[out,retval]*/ BSTR * User3 ) = 0;
      virtual HRESULT __stdcall put_User3 (
        /*[in]*/ BSTR User3 ) = 0;
      virtual HRESULT __stdcall get_User4 (
        /*[out,retval]*/ BSTR * User4 ) = 0;
      virtual HRESULT __stdcall put_User4 (
        /*[in]*/ BSTR User4 ) = 0;
      virtual HRESULT __stdcall get_UserCertificate (
        /*[out,retval]*/ BSTR * UserCertificate ) = 0;
      virtual HRESULT __stdcall put_UserCertificate (
        /*[in]*/ BSTR UserCertificate ) = 0;
      virtual HRESULT __stdcall get_WebPage (
        /*[out,retval]*/ BSTR * WebPage ) = 0;
      virtual HRESULT __stdcall put_WebPage (
        /*[in]*/ BSTR WebPage ) = 0;
      virtual HRESULT __stdcall get_YomiCompanyName (
        /*[out,retval]*/ BSTR * YomiCompanyName ) = 0;
      virtual HRESULT __stdcall put_YomiCompanyName (
        /*[in]*/ BSTR YomiCompanyName ) = 0;
      virtual HRESULT __stdcall get_YomiFirstName (
        /*[out,retval]*/ BSTR * YomiFirstName ) = 0;
      virtual HRESULT __stdcall put_YomiFirstName (
        /*[in]*/ BSTR YomiFirstName ) = 0;
      virtual HRESULT __stdcall get_YomiLastName (
        /*[out,retval]*/ BSTR * YomiLastName ) = 0;
      virtual HRESULT __stdcall put_YomiLastName (
        /*[in]*/ BSTR YomiLastName ) = 0;
      virtual HRESULT __stdcall ForwardAsVcard (
        /*[out,retval]*/ struct _MailItem * * Item ) = 0;
      virtual HRESULT __stdcall get_Links (
        /*[out,retval]*/ struct Links * * Links ) = 0;
      virtual HRESULT __stdcall get_ItemProperties (
        /*[out,retval]*/ struct ItemProperties * * ItemProperties ) = 0;
      virtual HRESULT __stdcall get_LastFirstNoSpaceAndSuffix (
        /*[out,retval]*/ BSTR * LastFirstNoSpaceAndSuffix ) = 0;
      virtual HRESULT __stdcall get_DownloadState (
        /*[out,retval]*/ enum OlDownloadState * DownloadState ) = 0;
      virtual HRESULT __stdcall ShowCategoriesDialog ( ) = 0;
      virtual HRESULT __stdcall get_IMAddress (
        /*[out,retval]*/ BSTR * IMAddress ) = 0;
      virtual HRESULT __stdcall put_IMAddress (
        /*[in]*/ BSTR IMAddress ) = 0;
      virtual HRESULT __stdcall get_MarkForDownload (
        /*[out,retval]*/ enum OlRemoteStatus * MarkForDownload ) = 0;
      virtual HRESULT __stdcall put_MarkForDownload (
        /*[in]*/ enum OlRemoteStatus MarkForDownload ) = 0;
      virtual HRESULT __stdcall put_Email1DisplayName (
        /*[in]*/ BSTR Email1DisplayName ) = 0;
      virtual HRESULT __stdcall put_Email2DisplayName (
        /*[in]*/ BSTR Email2DisplayName ) = 0;
      virtual HRESULT __stdcall put_Email3DisplayName (
        /*[in]*/ BSTR Email3DisplayName ) = 0;
      virtual HRESULT __stdcall get_IsConflict (
        /*[out,retval]*/ VARIANT_BOOL * IsConflict ) = 0;
      virtual HRESULT __stdcall get_AutoResolvedWinner (
        /*[out,retval]*/ VARIANT_BOOL * AutoResolvedWinner ) = 0;
      virtual HRESULT __stdcall get_Conflicts (
        /*[out,retval]*/ struct Conflicts * * Conflicts ) = 0;
      virtual HRESULT __stdcall AddPicture (
        /*[in]*/ BSTR Path ) = 0;
      virtual HRESULT __stdcall RemovePicture ( ) = 0;
      virtual HRESULT __stdcall get_HasPicture (
        /*[out,retval]*/ VARIANT_BOOL * HasPicture ) = 0;
      virtual HRESULT __stdcall get_PropertyAccessor (
        /*[out,retval]*/ struct _PropertyAccessor * * PropertyAccessor ) = 0;
      virtual HRESULT __stdcall ForwardAsBusinessCard (
        /*[out,retval]*/ struct _MailItem * * Item ) = 0;
      virtual HRESULT __stdcall ShowBusinessCardEditor ( ) = 0;
      virtual HRESULT __stdcall SaveBusinessCardImage (
        /*[in]*/ BSTR Path ) = 0;
      virtual HRESULT __stdcall ShowCheckPhoneDialog (
        /*[in]*/ enum OlContactPhoneNumber PhoneNumber ) = 0;
      virtual HRESULT __stdcall get_TaskSubject (
        /*[out,retval]*/ BSTR * TaskSubject ) = 0;
      virtual HRESULT __stdcall put_TaskSubject (
        /*[in]*/ BSTR TaskSubject ) = 0;
      virtual HRESULT __stdcall get_TaskDueDate (
        /*[out,retval]*/ DATE * TaskDueDate ) = 0;
      virtual HRESULT __stdcall put_TaskDueDate (
        /*[in]*/ DATE TaskDueDate ) = 0;
      virtual HRESULT __stdcall get_TaskStartDate (
        /*[out,retval]*/ DATE * TaskStartDate ) = 0;
      virtual HRESULT __stdcall put_TaskStartDate (
        /*[in]*/ DATE TaskStartDate ) = 0;
      virtual HRESULT __stdcall get_TaskCompletedDate (
        /*[out,retval]*/ DATE * TaskCompletedDate ) = 0;
      virtual HRESULT __stdcall put_TaskCompletedDate (
        /*[in]*/ DATE TaskCompletedDate ) = 0;
      virtual HRESULT __stdcall get_ToDoTaskOrdinal (
        /*[out,retval]*/ DATE * ToDoTaskOrdinal ) = 0;
      virtual HRESULT __stdcall put_ToDoTaskOrdinal (
        /*[in]*/ DATE ToDoTaskOrdinal ) = 0;
      virtual HRESULT __stdcall get_ReminderOverrideDefault (
        /*[out,retval]*/ VARIANT_BOOL * ReminderOverrideDefault ) = 0;
      virtual HRESULT __stdcall put_ReminderOverrideDefault (
        /*[in]*/ VARIANT_BOOL ReminderOverrideDefault ) = 0;
      virtual HRESULT __stdcall get_ReminderPlaySound (
        /*[out,retval]*/ VARIANT_BOOL * ReminderPlaySound ) = 0;
      virtual HRESULT __stdcall put_ReminderPlaySound (
        /*[in]*/ VARIANT_BOOL ReminderPlaySound ) = 0;
      virtual HRESULT __stdcall get_ReminderSet (
        /*[out,retval]*/ VARIANT_BOOL * ReminderSet ) = 0;
      virtual HRESULT __stdcall put_ReminderSet (
        /*[in]*/ VARIANT_BOOL ReminderSet ) = 0;
      virtual HRESULT __stdcall get_ReminderSoundFile (
        /*[out,retval]*/ BSTR * ReminderSoundFile ) = 0;
      virtual HRESULT __stdcall put_ReminderSoundFile (
        /*[in]*/ BSTR ReminderSoundFile ) = 0;
      virtual HRESULT __stdcall get_ReminderTime (
        /*[out,retval]*/ DATE * ReminderTime ) = 0;
      virtual HRESULT __stdcall put_ReminderTime (
        /*[in]*/ DATE ReminderTime ) = 0;
      virtual HRESULT __stdcall MarkAsTask (
        /*[in]*/ enum OlMarkInterval MarkInterval ) = 0;
      virtual HRESULT __stdcall ClearTaskFlag ( ) = 0;
      virtual HRESULT __stdcall get_IsMarkedAsTask (
        /*[out,retval]*/ VARIANT_BOOL * IsMarkedAsTask ) = 0;
      virtual HRESULT __stdcall get_BusinessCardLayoutXml (
        /*[out,retval]*/ BSTR * BusinessCardLayoutXml ) = 0;
      virtual HRESULT __stdcall put_BusinessCardLayoutXml (
        /*[in]*/ BSTR BusinessCardLayoutXml ) = 0;
      virtual HRESULT __stdcall ResetBusinessCard ( ) = 0;
      virtual HRESULT __stdcall AddBusinessCardLogoPicture (
        /*[in]*/ BSTR Path ) = 0;
      virtual HRESULT __stdcall get_BusinessCardType (
        /*[out,retval]*/ enum OlBusinessCardType * BusinessCardType ) = 0;
      virtual HRESULT __stdcall GetConversation (
        /*[out,retval]*/ struct _Conversation * * Conversation ) = 0;
      virtual HRESULT __stdcall get_ConversationID (
        /*[out,retval]*/ BSTR * ConversationID ) = 0;
      virtual HRESULT __stdcall get_RTFBody (
        /*[out,retval]*/ VARIANT * RTFBody ) = 0;
      virtual HRESULT __stdcall put_RTFBody (
        /*[in]*/ VARIANT RTFBody ) = 0;
      virtual HRESULT __stdcall ShowCheckFullNameDialog ( ) = 0;
      virtual HRESULT __stdcall ShowCheckAddressDialog (
        /*[in]*/ enum OlMailingAddress MailingAddress ) = 0;
};

struct __declspec(uuid("000630c9-0000-0000-c000-000000000046"))
_ExchangeUser : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Address (
        /*[out,retval]*/ BSTR * Address ) = 0;
      virtual HRESULT __stdcall put_Address (
        /*[in]*/ BSTR Address ) = 0;
      virtual HRESULT __stdcall get_DisplayType (
        /*[out,retval]*/ enum OlDisplayType * DisplayType ) = 0;
      virtual HRESULT __stdcall get_ID (
        /*[out,retval]*/ BSTR * ID ) = 0;
      virtual HRESULT __stdcall get_Manager (
        /*[out,retval]*/ struct AddressEntry * * Manager ) = 0;
      virtual HRESULT __stdcall get_MAPIOBJECT (
        /*[out,retval]*/ IUnknown * * MAPIOBJECT ) = 0;
      virtual HRESULT __stdcall put_MAPIOBJECT (
        /*[in]*/ IUnknown * MAPIOBJECT ) = 0;
      virtual HRESULT __stdcall get_Members (
        /*[out,retval]*/ struct AddressEntries * * Members ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR Name ) = 0;
      virtual HRESULT __stdcall get_Type (
        /*[out,retval]*/ BSTR * Type ) = 0;
      virtual HRESULT __stdcall put_Type (
        /*[in]*/ BSTR Type ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Details (
        /*[in]*/ VARIANT HWnd = vtMissing ) = 0;
      virtual HRESULT __stdcall GetFreeBusy (
        /*[in]*/ DATE Start,
        /*[in]*/ long MinPerChar,
        /*[in]*/ VARIANT CompleteFormat,
        /*[out,retval]*/ BSTR * FreeBusyInfo ) = 0;
      virtual HRESULT __stdcall Update (
        /*[in]*/ VARIANT MakePermanent = vtMissing,
        /*[in]*/ VARIANT Refresh = vtMissing ) = 0;
      virtual HRESULT __stdcall UpdateFreeBusy ( ) = 0;
      virtual HRESULT __stdcall GetContact (
        /*[out,retval]*/ struct _ContactItem * * ret ) = 0;
      virtual HRESULT __stdcall GetExchangeUser (
        /*[out,retval]*/ struct _ExchangeUser * * ret ) = 0;
      virtual HRESULT __stdcall get_AddressEntryUserType (
        /*[out,retval]*/ enum OlAddressEntryUserType * AddressEntryUserType ) = 0;
      virtual HRESULT __stdcall GetExchangeDistributionList (
        /*[out,retval]*/ struct _ExchangeDistributionList * * ret ) = 0;
      virtual HRESULT __stdcall get_PropertyAccessor (
        /*[out,retval]*/ struct _PropertyAccessor * * PropertyAccessor ) = 0;
      virtual HRESULT __stdcall GetDirectReports (
        /*[out,retval]*/ struct AddressEntries * * ret ) = 0;
      virtual HRESULT __stdcall GetMemberOfList (
        /*[out,retval]*/ struct AddressEntries * * ret ) = 0;
      virtual HRESULT __stdcall get_Alias (
        /*[out,retval]*/ BSTR * Alias ) = 0;
      virtual HRESULT __stdcall get_AssistantName (
        /*[out,retval]*/ BSTR * AssistantName ) = 0;
      virtual HRESULT __stdcall put_AssistantName (
        /*[in]*/ BSTR AssistantName ) = 0;
      virtual HRESULT __stdcall get_BusinessTelephoneNumber (
        /*[out,retval]*/ BSTR * BusinessTelephoneNumber ) = 0;
      virtual HRESULT __stdcall put_BusinessTelephoneNumber (
        /*[in]*/ BSTR BusinessTelephoneNumber ) = 0;
      virtual HRESULT __stdcall get_City (
        /*[out,retval]*/ BSTR * City ) = 0;
      virtual HRESULT __stdcall put_City (
        /*[in]*/ BSTR City ) = 0;
      virtual HRESULT __stdcall get_Comments (
        /*[out,retval]*/ BSTR * Comments ) = 0;
      virtual HRESULT __stdcall put_Comments (
        /*[in]*/ BSTR Comments ) = 0;
      virtual HRESULT __stdcall get_CompanyName (
        /*[out,retval]*/ BSTR * CompanyName ) = 0;
      virtual HRESULT __stdcall put_CompanyName (
        /*[in]*/ BSTR CompanyName ) = 0;
      virtual HRESULT __stdcall get_Department (
        /*[out,retval]*/ BSTR * Department ) = 0;
      virtual HRESULT __stdcall put_Department (
        /*[in]*/ BSTR Department ) = 0;
      virtual HRESULT __stdcall get_FirstName (
        /*[out,retval]*/ BSTR * FirstName ) = 0;
      virtual HRESULT __stdcall put_FirstName (
        /*[in]*/ BSTR FirstName ) = 0;
      virtual HRESULT __stdcall get_JobTitle (
        /*[out,retval]*/ BSTR * JobTitle ) = 0;
      virtual HRESULT __stdcall put_JobTitle (
        /*[in]*/ BSTR JobTitle ) = 0;
      virtual HRESULT __stdcall get_LastName (
        /*[out,retval]*/ BSTR * LastName ) = 0;
      virtual HRESULT __stdcall put_LastName (
        /*[in]*/ BSTR LastName ) = 0;
      virtual HRESULT __stdcall get_MobileTelephoneNumber (
        /*[out,retval]*/ BSTR * MobileTelephoneNumber ) = 0;
      virtual HRESULT __stdcall put_MobileTelephoneNumber (
        /*[in]*/ BSTR MobileTelephoneNumber ) = 0;
      virtual HRESULT __stdcall get_OfficeLocation (
        /*[out,retval]*/ BSTR * OfficeLocation ) = 0;
      virtual HRESULT __stdcall put_OfficeLocation (
        /*[in]*/ BSTR OfficeLocation ) = 0;
      virtual HRESULT __stdcall get_PostalCode (
        /*[out,retval]*/ BSTR * PostalCode ) = 0;
      virtual HRESULT __stdcall put_PostalCode (
        /*[in]*/ BSTR PostalCode ) = 0;
      virtual HRESULT __stdcall get_PrimarySmtpAddress (
        /*[out,retval]*/ BSTR * PrimarySmtpAddress ) = 0;
      virtual HRESULT __stdcall get_StateOrProvince (
        /*[out,retval]*/ BSTR * StateOrProvince ) = 0;
      virtual HRESULT __stdcall put_StateOrProvince (
        /*[in]*/ BSTR StateOrProvince ) = 0;
      virtual HRESULT __stdcall get_StreetAddress (
        /*[out,retval]*/ BSTR * StreetAddress ) = 0;
      virtual HRESULT __stdcall put_StreetAddress (
        /*[in]*/ BSTR StreetAddress ) = 0;
      virtual HRESULT __stdcall GetExchangeUserManager (
        /*[out,retval]*/ struct _ExchangeUser * * ret ) = 0;
      virtual HRESULT __stdcall get_YomiCompanyName (
        /*[out,retval]*/ BSTR * YomiCompanyName ) = 0;
      virtual HRESULT __stdcall put_YomiCompanyName (
        /*[in]*/ BSTR YomiCompanyName ) = 0;
      virtual HRESULT __stdcall get_YomiFirstName (
        /*[out,retval]*/ BSTR * YomiFirstName ) = 0;
      virtual HRESULT __stdcall put_YomiFirstName (
        /*[in]*/ BSTR YomiFirstName ) = 0;
      virtual HRESULT __stdcall get_YomiLastName (
        /*[out,retval]*/ BSTR * YomiLastName ) = 0;
      virtual HRESULT __stdcall put_YomiLastName (
        /*[in]*/ BSTR YomiLastName ) = 0;
      virtual HRESULT __stdcall get_YomiDisplayName (
        /*[out,retval]*/ BSTR * YomiDisplayName ) = 0;
      virtual HRESULT __stdcall put_YomiDisplayName (
        /*[in]*/ BSTR YomiDisplayName ) = 0;
      virtual HRESULT __stdcall get_YomiDepartment (
        /*[out,retval]*/ BSTR * YomiDepartment ) = 0;
      virtual HRESULT __stdcall put_YomiDepartment (
        /*[in]*/ BSTR YomiDepartment ) = 0;
      virtual HRESULT __stdcall GetPicture (
        /*[out,retval]*/ struct Picture * * ppPictureDisp ) = 0;
};

struct __declspec(uuid("000630ca-0000-0000-c000-000000000046"))
_ExchangeDistributionList : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Address (
        /*[out,retval]*/ BSTR * Address ) = 0;
      virtual HRESULT __stdcall put_Address (
        /*[in]*/ BSTR Address ) = 0;
      virtual HRESULT __stdcall get_DisplayType (
        /*[out,retval]*/ enum OlDisplayType * DisplayType ) = 0;
      virtual HRESULT __stdcall get_ID (
        /*[out,retval]*/ BSTR * ID ) = 0;
      virtual HRESULT __stdcall get_Manager (
        /*[out,retval]*/ struct AddressEntry * * Manager ) = 0;
      virtual HRESULT __stdcall get_MAPIOBJECT (
        /*[out,retval]*/ IUnknown * * MAPIOBJECT ) = 0;
      virtual HRESULT __stdcall put_MAPIOBJECT (
        /*[in]*/ IUnknown * MAPIOBJECT ) = 0;
      virtual HRESULT __stdcall get_Members (
        /*[out,retval]*/ struct AddressEntries * * Members ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR Name ) = 0;
      virtual HRESULT __stdcall get_Type (
        /*[out,retval]*/ BSTR * Type ) = 0;
      virtual HRESULT __stdcall put_Type (
        /*[in]*/ BSTR Type ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Details (
        /*[in]*/ VARIANT HWnd = vtMissing ) = 0;
      virtual HRESULT __stdcall GetFreeBusy (
        /*[in]*/ DATE Start,
        /*[in]*/ long MinPerChar,
        /*[in]*/ VARIANT CompleteFormat,
        /*[out,retval]*/ BSTR * FreeBusyInfo ) = 0;
      virtual HRESULT __stdcall Update (
        /*[in]*/ VARIANT MakePermanent = vtMissing,
        /*[in]*/ VARIANT Refresh = vtMissing ) = 0;
      virtual HRESULT __stdcall UpdateFreeBusy ( ) = 0;
      virtual HRESULT __stdcall GetContact (
        /*[out,retval]*/ struct _ContactItem * * ret ) = 0;
      virtual HRESULT __stdcall GetExchangeUser (
        /*[out,retval]*/ struct _ExchangeUser * * ret ) = 0;
      virtual HRESULT __stdcall get_AddressEntryUserType (
        /*[out,retval]*/ enum OlAddressEntryUserType * AddressEntryUserType ) = 0;
      virtual HRESULT __stdcall GetExchangeDistributionList (
        /*[out,retval]*/ struct _ExchangeDistributionList * * ret ) = 0;
      virtual HRESULT __stdcall get_PropertyAccessor (
        /*[out,retval]*/ struct _PropertyAccessor * * PropertyAccessor ) = 0;
      virtual HRESULT __stdcall GetMemberOfList (
        /*[out,retval]*/ struct AddressEntries * * ret ) = 0;
      virtual HRESULT __stdcall GetExchangeDistributionListMembers (
        /*[out,retval]*/ struct AddressEntries * * ret ) = 0;
      virtual HRESULT __stdcall get_Alias (
        /*[out,retval]*/ BSTR * Alias ) = 0;
      virtual HRESULT __stdcall get_Comments (
        /*[out,retval]*/ BSTR * Comments ) = 0;
      virtual HRESULT __stdcall put_Comments (
        /*[in]*/ BSTR Comments ) = 0;
      virtual HRESULT __stdcall get_PrimarySmtpAddress (
        /*[out,retval]*/ BSTR * PrimarySmtpAddress ) = 0;
      virtual HRESULT __stdcall GetOwners (
        /*[out,retval]*/ struct AddressEntries * * ret ) = 0;
};

struct __declspec(uuid("00063006-0000-0000-c000-000000000046"))
MAPIFolder : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_DefaultItemType (
        /*[out,retval]*/ enum OlItemType * DefaultItemType ) = 0;
      virtual HRESULT __stdcall get_DefaultMessageClass (
        /*[out,retval]*/ BSTR * DefaultMessageClass ) = 0;
      virtual HRESULT __stdcall get_Description (
        /*[out,retval]*/ BSTR * Description ) = 0;
      virtual HRESULT __stdcall put_Description (
        /*[in]*/ BSTR Description ) = 0;
      virtual HRESULT __stdcall get_EntryID (
        /*[out,retval]*/ BSTR * EntryID ) = 0;
      virtual HRESULT __stdcall get_Folders (
        /*[out,retval]*/ struct _Folders * * Folders ) = 0;
      virtual HRESULT __stdcall get_Items (
        /*[out,retval]*/ struct _Items * * Items ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR Name ) = 0;
      virtual HRESULT __stdcall get_StoreID (
        /*[out,retval]*/ BSTR * StoreID ) = 0;
      virtual HRESULT __stdcall get_UnReadItemCount (
        /*[out,retval]*/ long * UnReadItemCount ) = 0;
      virtual HRESULT __stdcall CopyTo (
        /*[in]*/ struct MAPIFolder * DestinationFolder,
        /*[out,retval]*/ struct MAPIFolder * * Folder ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Display ( ) = 0;
      virtual HRESULT __stdcall GetExplorer (
        /*[in]*/ VARIANT DisplayMode,
        /*[out,retval]*/ struct _Explorer * * Explorer ) = 0;
      virtual HRESULT __stdcall MoveTo (
        /*[in]*/ struct MAPIFolder * DestinationFolder ) = 0;
      virtual HRESULT __stdcall get_UserPermissions (
        /*[out,retval]*/ IDispatch * * UserPermissions ) = 0;
      virtual HRESULT __stdcall get_WebViewOn (
        /*[out,retval]*/ VARIANT_BOOL * WebViewOn ) = 0;
      virtual HRESULT __stdcall put_WebViewOn (
        /*[in]*/ VARIANT_BOOL WebViewOn ) = 0;
      virtual HRESULT __stdcall get_WebViewURL (
        /*[out,retval]*/ BSTR * WebViewURL ) = 0;
      virtual HRESULT __stdcall put_WebViewURL (
        /*[in]*/ BSTR WebViewURL ) = 0;
      virtual HRESULT __stdcall get_WebViewAllowNavigation (
        /*[out,retval]*/ VARIANT_BOOL * WebViewAllowNavigation ) = 0;
      virtual HRESULT __stdcall put_WebViewAllowNavigation (
        /*[in]*/ VARIANT_BOOL WebViewAllowNavigation ) = 0;
      virtual HRESULT __stdcall AddToPFFavorites ( ) = 0;
      virtual HRESULT __stdcall get_AddressBookName (
        /*[out,retval]*/ BSTR * AddressBookName ) = 0;
      virtual HRESULT __stdcall put_AddressBookName (
        /*[in]*/ BSTR AddressBookName ) = 0;
      virtual HRESULT __stdcall get_ShowAsOutlookAB (
        /*[out,retval]*/ VARIANT_BOOL * ShowAsOutlookAB ) = 0;
      virtual HRESULT __stdcall put_ShowAsOutlookAB (
        /*[in]*/ VARIANT_BOOL ShowAsOutlookAB ) = 0;
      virtual HRESULT __stdcall get_FolderPath (
        /*[out,retval]*/ BSTR * FolderPath ) = 0;
      virtual HRESULT __stdcall AddToFavorites (
        /*[in]*/ VARIANT fNoUI = vtMissing,
        /*[in]*/ VARIANT Name = vtMissing ) = 0;
      virtual HRESULT __stdcall get_InAppFolderSyncObject (
        /*[out,retval]*/ VARIANT_BOOL * InAppFolderSyncObject ) = 0;
      virtual HRESULT __stdcall put_InAppFolderSyncObject (
        /*[in]*/ VARIANT_BOOL InAppFolderSyncObject ) = 0;
      virtual HRESULT __stdcall get_CurrentView (
        /*[out,retval]*/ struct View * * CurrentView ) = 0;
      virtual HRESULT __stdcall get_CustomViewsOnly (
        /*[out,retval]*/ VARIANT_BOOL * CustomViewsOnly ) = 0;
      virtual HRESULT __stdcall put_CustomViewsOnly (
        /*[in]*/ VARIANT_BOOL CustomViewsOnly ) = 0;
      virtual HRESULT __stdcall get_Views (
        /*[out,retval]*/ struct _Views * * Views ) = 0;
      virtual HRESULT __stdcall get_MAPIOBJECT (
        /*[out,retval]*/ IUnknown * * MAPIOBJECT ) = 0;
      virtual HRESULT __stdcall get_FullFolderPath (
        /*[out,retval]*/ BSTR * FullFolderPath ) = 0;
      virtual HRESULT __stdcall get_IsSharePointFolder (
        /*[out,retval]*/ VARIANT_BOOL * IsSharePointFolder ) = 0;
      virtual HRESULT __stdcall get_ShowItemCount (
        /*[out,retval]*/ enum OlShowItemCount * ShowItemCount ) = 0;
      virtual HRESULT __stdcall put_ShowItemCount (
        /*[in]*/ enum OlShowItemCount ShowItemCount ) = 0;
      virtual HRESULT __stdcall get_Store (
        /*[out,retval]*/ struct _Store * * Store ) = 0;
      virtual HRESULT __stdcall GetStorage (
        /*[in]*/ BSTR StorageIdentifier,
        /*[in]*/ enum OlStorageIdentifierType StorageIdentifierType,
        /*[out,retval]*/ struct _StorageItem * * StorageItem ) = 0;
      virtual HRESULT __stdcall GetTable (
        /*[in]*/ VARIANT Filter,
        /*[in]*/ VARIANT TableContents,
        /*[out,retval]*/ struct _Table * * Table ) = 0;
      virtual HRESULT __stdcall get_PropertyAccessor (
        /*[out,retval]*/ struct _PropertyAccessor * * PropertyAccessor ) = 0;
      virtual HRESULT __stdcall GetCalendarExporter (
        /*[out,retval]*/ struct _CalendarSharing * * Exporter ) = 0;
      virtual HRESULT __stdcall get_UserDefinedProperties (
        /*[out,retval]*/ struct _UserDefinedProperties * * UserDefinedProperties ) = 0;
      virtual HRESULT __stdcall GetCustomIcon (
        /*[out,retval]*/ struct Picture * * Picture ) = 0;
      virtual HRESULT __stdcall SetCustomIcon (
        /*[in]*/ struct Picture * Picture ) = 0;
};

struct __declspec(uuid("00063040-0000-0000-c000-000000000046"))
_Folders : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct MAPIFolder * * Item ) = 0;
      virtual HRESULT __stdcall get_RawTable (
        /*[out,retval]*/ IUnknown * * RawTable ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ BSTR Name,
        /*[in]*/ VARIANT Type,
        /*[out,retval]*/ struct MAPIFolder * * Folder ) = 0;
      virtual HRESULT __stdcall GetFirst (
        /*[out,retval]*/ struct MAPIFolder * * Folder ) = 0;
      virtual HRESULT __stdcall GetLast (
        /*[out,retval]*/ struct MAPIFolder * * Folder ) = 0;
      virtual HRESULT __stdcall GetNext (
        /*[out,retval]*/ struct MAPIFolder * * Folder ) = 0;
      virtual HRESULT __stdcall GetPrevious (
        /*[out,retval]*/ struct MAPIFolder * * Folder ) = 0;
      virtual HRESULT __stdcall Remove (
        /*[in]*/ long Index ) = 0;
};

struct __declspec(uuid("00063003-0000-0000-c000-000000000046"))
_Explorer : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_CommandBars (
        /*[out,retval]*/ struct Office::_CommandBars * * CommandBars ) = 0;
      virtual HRESULT __stdcall get_CurrentFolder (
        /*[out,retval]*/ struct MAPIFolder * * CurrentFolder ) = 0;
      virtual HRESULT __stdcall putref_CurrentFolder (
        /*[in]*/ struct MAPIFolder * CurrentFolder ) = 0;
      virtual HRESULT __stdcall Close ( ) = 0;
      virtual HRESULT __stdcall Display ( ) = 0;
      virtual HRESULT __stdcall get_Caption (
        /*[out,retval]*/ BSTR * Caption ) = 0;
      virtual HRESULT __stdcall get_CurrentView (
        /*[out,retval]*/ VARIANT * CurrentView ) = 0;
      virtual HRESULT __stdcall put_CurrentView (
        /*[in]*/ VARIANT CurrentView ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ long * Height ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ long Height ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ long * Left ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ long Left ) = 0;
      virtual HRESULT __stdcall get_Panes (
        /*[out,retval]*/ struct Panes * * Panes ) = 0;
      virtual HRESULT __stdcall get_Selection (
        /*[out,retval]*/ struct Selection * * Selection ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ long * Top ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ long Top ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ long * Width ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ long Width ) = 0;
      virtual HRESULT __stdcall get_WindowState (
        /*[out,retval]*/ enum OlWindowState * WindowState ) = 0;
      virtual HRESULT __stdcall put_WindowState (
        /*[in]*/ enum OlWindowState WindowState ) = 0;
      virtual HRESULT __stdcall Activate ( ) = 0;
      virtual HRESULT __stdcall IsPaneVisible (
        /*[in]*/ enum OlPane Pane,
        /*[out,retval]*/ VARIANT_BOOL * IsPaneVisible ) = 0;
      virtual HRESULT __stdcall ShowPane (
        /*[in]*/ enum OlPane Pane,
        /*[in]*/ VARIANT_BOOL Visible ) = 0;
      virtual HRESULT __stdcall get_Views (
        /*[out,retval]*/ IDispatch * * Views ) = 0;
      virtual HRESULT __stdcall get_HTMLDocument (
        /*[out,retval]*/ IDispatch * * HTMLDocument ) = 0;
      virtual HRESULT __stdcall SelectFolder (
        /*[in]*/ struct MAPIFolder * Folder ) = 0;
      virtual HRESULT __stdcall DeselectFolder (
        /*[in]*/ struct MAPIFolder * Folder ) = 0;
      virtual HRESULT __stdcall IsFolderSelected (
        /*[in]*/ struct MAPIFolder * Folder,
        /*[out,retval]*/ VARIANT_BOOL * fIsSelected ) = 0;
      virtual HRESULT __stdcall get_NavigationPane (
        /*[out,retval]*/ struct _NavigationPane * * NavigationPane ) = 0;
      virtual HRESULT __stdcall ClearSearch ( ) = 0;
      virtual HRESULT __stdcall Search (
        /*[in]*/ BSTR Query,
        /*[in]*/ enum OlSearchScope SearchScope ) = 0;
      virtual HRESULT __stdcall IsItemSelectableInView (
        /*[in]*/ IDispatch * Item,
        /*[out,retval]*/ VARIANT_BOOL * fIsSelectable ) = 0;
      virtual HRESULT __stdcall AddToSelection (
        /*[in]*/ IDispatch * Item ) = 0;
      virtual HRESULT __stdcall RemoveFromSelection (
        /*[in]*/ IDispatch * Item ) = 0;
      virtual HRESULT __stdcall SelectAllItems ( ) = 0;
      virtual HRESULT __stdcall ClearSelection ( ) = 0;
      virtual HRESULT __stdcall get_AccountSelector (
        /*[out,retval]*/ struct _AccountSelector * * AccountSelector ) = 0;
      virtual HRESULT __stdcall get_AttachmentSelection (
        /*[out,retval]*/ struct _AttachmentSelection * * AttachmentSelection ) = 0;
      virtual HRESULT __stdcall get_ActiveInlineResponse (
        /*[out,retval]*/ IDispatch * * ActiveInlineResponse ) = 0;
      virtual HRESULT __stdcall get_ActiveInlineResponseWordEditor (
        /*[out,retval]*/ IDispatch * * ActiveInlineResponseWordEditor ) = 0;
};

struct __declspec(uuid("000630c7-0000-0000-c000-000000000046"))
_Store : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_DisplayName (
        /*[out,retval]*/ BSTR * DisplayName ) = 0;
      virtual HRESULT __stdcall get_StoreID (
        /*[out,retval]*/ BSTR * StoreID ) = 0;
      virtual HRESULT __stdcall get_ExchangeStoreType (
        /*[out,retval]*/ enum OlExchangeStoreType * ExchangeStoreType ) = 0;
      virtual HRESULT __stdcall get_FilePath (
        /*[out,retval]*/ BSTR * FilePath ) = 0;
      virtual HRESULT __stdcall get_IsCachedExchange (
        /*[out,retval]*/ VARIANT_BOOL * IsCachedExchange ) = 0;
      virtual HRESULT __stdcall get_IsDataFileStore (
        /*[out,retval]*/ VARIANT_BOOL * IsDataFileStore ) = 0;
      virtual HRESULT __stdcall GetRootFolder (
        /*[out,retval]*/ struct MAPIFolder * * RootFolder ) = 0;
      virtual HRESULT __stdcall GetSearchFolders (
        /*[out,retval]*/ struct _Folders * * SearchFolders ) = 0;
      virtual HRESULT __stdcall get_IsOpen (
        /*[out,retval]*/ VARIANT_BOOL * IsOpen ) = 0;
      virtual HRESULT __stdcall get_MAPIOBJECT (
        /*[out,retval]*/ IUnknown * * MAPIOBJECT ) = 0;
      virtual HRESULT __stdcall GetRules (
        /*[out,retval]*/ struct _Rules * * Rules ) = 0;
      virtual HRESULT __stdcall get_PropertyAccessor (
        /*[out,retval]*/ struct _PropertyAccessor * * PropertyAccessor ) = 0;
      virtual HRESULT __stdcall GetSpecialFolder (
        /*[in]*/ enum OlSpecialFolders FolderType,
        /*[out,retval]*/ struct MAPIFolder * * Folder ) = 0;
      virtual HRESULT __stdcall get_IsInstantSearchEnabled (
        /*[out,retval]*/ VARIANT_BOOL * IsInstantSearchEnabled ) = 0;
      virtual HRESULT __stdcall RefreshQuotaDisplay ( ) = 0;
      virtual HRESULT __stdcall GetDefaultFolder (
        /*[in]*/ enum OlDefaultFolders FolderType,
        /*[out,retval]*/ struct MAPIFolder * * Folder ) = 0;
      virtual HRESULT __stdcall get_IsConversationEnabled (
        /*[out,retval]*/ VARIANT_BOOL * IsConversationEnabled ) = 0;
      virtual HRESULT __stdcall get_Categories (
        /*[out,retval]*/ struct _Categories * * Categories ) = 0;
};

struct __declspec(uuid("000630d0-0000-0000-c000-000000000046"))
_MoveOrCopyRuleAction : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_ActionType (
        /*[out,retval]*/ enum OlRuleActionType * ActionType ) = 0;
      virtual HRESULT __stdcall get_Folder (
        /*[out,retval]*/ struct MAPIFolder * * Folder ) = 0;
      virtual HRESULT __stdcall put_Folder (
        /*[in]*/ struct MAPIFolder * Folder ) = 0;
};

struct __declspec(uuid("00063049-0000-0000-c000-000000000046"))
AddressList : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_AddressEntries (
        /*[out,retval]*/ struct AddressEntries * * AddressEntries ) = 0;
      virtual HRESULT __stdcall get_ID (
        /*[out,retval]*/ BSTR * ID ) = 0;
      virtual HRESULT __stdcall get_Index (
        /*[out,retval]*/ long * Index ) = 0;
      virtual HRESULT __stdcall get_IsReadOnly (
        /*[out,retval]*/ VARIANT_BOOL * IsReadOnly ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall GetContactsFolder (
        /*[out,retval]*/ struct MAPIFolder * * ret ) = 0;
      virtual HRESULT __stdcall get_AddressListType (
        /*[out,retval]*/ enum OlAddressListType * AddressListType ) = 0;
      virtual HRESULT __stdcall get_ResolutionOrder (
        /*[out,retval]*/ long * ResolutionOrder ) = 0;
      virtual HRESULT __stdcall get_IsInitialAddressList (
        /*[out,retval]*/ VARIANT_BOOL * IsInitialAddressList ) = 0;
      virtual HRESULT __stdcall get_PropertyAccessor (
        /*[out,retval]*/ struct _PropertyAccessor * * PropertyAccessor ) = 0;
};

struct __declspec(uuid("000630df-0000-0000-c000-000000000046"))
_SenderInAddressListRuleCondition : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * Enabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL Enabled ) = 0;
      virtual HRESULT __stdcall get_ConditionType (
        /*[out,retval]*/ enum OlRuleConditionType * ConditionType ) = 0;
      virtual HRESULT __stdcall get_AddressList (
        /*[out,retval]*/ struct AddressList * * AddressList ) = 0;
      virtual HRESULT __stdcall put_AddressList (
        /*[in]*/ struct AddressList * AddressList ) = 0;
};

struct __declspec(uuid("000630e2-0000-0000-c000-000000000046"))
_CalendarSharing : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall SaveAsICal (
        /*[in]*/ BSTR Path ) = 0;
      virtual HRESULT __stdcall ForwardAsICal (
        /*[in]*/ enum OlCalendarMailFormat MailFormat,
        /*[out,retval]*/ struct _MailItem * * RetVal ) = 0;
      virtual HRESULT __stdcall get_CalendarDetail (
        /*[out,retval]*/ enum OlCalendarDetail * CalendarDetail ) = 0;
      virtual HRESULT __stdcall put_CalendarDetail (
        /*[in]*/ enum OlCalendarDetail CalendarDetail ) = 0;
      virtual HRESULT __stdcall get_EndDate (
        /*[out,retval]*/ DATE * EndDate ) = 0;
      virtual HRESULT __stdcall put_EndDate (
        /*[in]*/ DATE EndDate ) = 0;
      virtual HRESULT __stdcall get_Folder (
        /*[out,retval]*/ struct MAPIFolder * * Folder ) = 0;
      virtual HRESULT __stdcall get_IncludeAttachments (
        /*[out,retval]*/ VARIANT_BOOL * IncludeAttachments ) = 0;
      virtual HRESULT __stdcall put_IncludeAttachments (
        /*[in]*/ VARIANT_BOOL IncludeAttachments ) = 0;
      virtual HRESULT __stdcall get_IncludePrivateDetails (
        /*[out,retval]*/ VARIANT_BOOL * IncludePrivateDetails ) = 0;
      virtual HRESULT __stdcall put_IncludePrivateDetails (
        /*[in]*/ VARIANT_BOOL IncludePrivateDetails ) = 0;
      virtual HRESULT __stdcall get_RestrictToWorkingHours (
        /*[out,retval]*/ VARIANT_BOOL * RestrictToWorkingHours ) = 0;
      virtual HRESULT __stdcall put_RestrictToWorkingHours (
        /*[in]*/ VARIANT_BOOL RestrictToWorkingHours ) = 0;
      virtual HRESULT __stdcall get_StartDate (
        /*[out,retval]*/ DATE * StartDate ) = 0;
      virtual HRESULT __stdcall put_StartDate (
        /*[in]*/ DATE StartDate ) = 0;
      virtual HRESULT __stdcall get_IncludeWholeCalendar (
        /*[out,retval]*/ VARIANT_BOOL * IncludeWholeCalendar ) = 0;
      virtual HRESULT __stdcall put_IncludeWholeCalendar (
        /*[in]*/ VARIANT_BOOL IncludeWholeCalendar ) = 0;
};

struct __declspec(uuid("00063101-0000-0000-c000-000000000046"))
_Conversation : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall GetTable (
        /*[out,retval]*/ struct _Table * * Table ) = 0;
      virtual HRESULT __stdcall GetChildren (
        /*[in]*/ IDispatch * Item,
        /*[out,retval]*/ struct _SimpleItems * * SimpleItems ) = 0;
      virtual HRESULT __stdcall GetParent (
        /*[in]*/ IDispatch * Item,
        /*[out,retval]*/ IDispatch * * itemParent ) = 0;
      virtual HRESULT __stdcall GetRootItems (
        /*[out,retval]*/ struct _SimpleItems * * SimpleItems ) = 0;
      virtual HRESULT __stdcall GetAlwaysAssignCategories (
        /*[in]*/ struct _Store * Store,
        /*[out,retval]*/ BSTR * Categories ) = 0;
      virtual HRESULT __stdcall GetAlwaysDelete (
        /*[in]*/ struct _Store * Store,
        /*[out,retval]*/ enum OlAlwaysDeleteConversation * AlwaysDelete ) = 0;
      virtual HRESULT __stdcall GetAlwaysMoveToFolder (
        /*[in]*/ struct _Store * Store,
        /*[out,retval]*/ struct MAPIFolder * * MoveToFolder ) = 0;
      virtual HRESULT __stdcall MarkAsRead ( ) = 0;
      virtual HRESULT __stdcall MarkAsUnread ( ) = 0;
      virtual HRESULT __stdcall SetAlwaysAssignCategories (
        /*[in]*/ BSTR Categories,
        /*[in]*/ struct _Store * Store ) = 0;
      virtual HRESULT __stdcall SetAlwaysDelete (
        /*[in]*/ enum OlAlwaysDeleteConversation AlwaysDelete,
        /*[in]*/ struct _Store * Store ) = 0;
      virtual HRESULT __stdcall SetAlwaysMoveToFolder (
        /*[in]*/ struct MAPIFolder * MoveToFolder,
        /*[in]*/ struct _Store * Store ) = 0;
      virtual HRESULT __stdcall ClearAlwaysAssignCategories (
        /*[in]*/ struct _Store * Store ) = 0;
      virtual HRESULT __stdcall StopAlwaysDelete (
        /*[in]*/ struct _Store * Store ) = 0;
      virtual HRESULT __stdcall StopAlwaysMoveToFolder (
        /*[in]*/ struct _Store * Store ) = 0;
      virtual HRESULT __stdcall get_ConversationID (
        /*[out,retval]*/ BSTR * ConversationID ) = 0;
};

struct __declspec(uuid("00063034-0000-0000-c000-000000000046"))
_MailItem : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Actions (
        /*[out,retval]*/ struct Actions * * Actions ) = 0;
      virtual HRESULT __stdcall get_Attachments (
        /*[out,retval]*/ struct Attachments * * Attachments ) = 0;
      virtual HRESULT __stdcall get_BillingInformation (
        /*[out,retval]*/ BSTR * BillingInformation ) = 0;
      virtual HRESULT __stdcall put_BillingInformation (
        /*[in]*/ BSTR BillingInformation ) = 0;
      virtual HRESULT __stdcall get_Body (
        /*[out,retval]*/ BSTR * Body ) = 0;
      virtual HRESULT __stdcall put_Body (
        /*[in]*/ BSTR Body ) = 0;
      virtual HRESULT __stdcall get_Categories (
        /*[out,retval]*/ BSTR * Categories ) = 0;
      virtual HRESULT __stdcall put_Categories (
        /*[in]*/ BSTR Categories ) = 0;
      virtual HRESULT __stdcall get_Companies (
        /*[out,retval]*/ BSTR * Companies ) = 0;
      virtual HRESULT __stdcall put_Companies (
        /*[in]*/ BSTR Companies ) = 0;
      virtual HRESULT __stdcall get_ConversationIndex (
        /*[out,retval]*/ BSTR * ConversationIndex ) = 0;
      virtual HRESULT __stdcall get_ConversationTopic (
        /*[out,retval]*/ BSTR * ConversationTopic ) = 0;
      virtual HRESULT __stdcall get_CreationTime (
        /*[out,retval]*/ DATE * CreationTime ) = 0;
      virtual HRESULT __stdcall get_EntryID (
        /*[out,retval]*/ BSTR * EntryID ) = 0;
      virtual HRESULT __stdcall get_FormDescription (
        /*[out,retval]*/ struct FormDescription * * FormDescription ) = 0;
      virtual HRESULT __stdcall get_GetInspector (
        /*[out,retval]*/ struct _Inspector * * GetInspector ) = 0;
      virtual HRESULT __stdcall get_Importance (
        /*[out,retval]*/ enum OlImportance * Importance ) = 0;
      virtual HRESULT __stdcall put_Importance (
        /*[in]*/ enum OlImportance Importance ) = 0;
      virtual HRESULT __stdcall get_LastModificationTime (
        /*[out,retval]*/ DATE * LastModificationTime ) = 0;
      virtual HRESULT __stdcall get_MAPIOBJECT (
        /*[out,retval]*/ IUnknown * * MAPIOBJECT ) = 0;
      virtual HRESULT __stdcall get_MessageClass (
        /*[out,retval]*/ BSTR * MessageClass ) = 0;
      virtual HRESULT __stdcall put_MessageClass (
        /*[in]*/ BSTR MessageClass ) = 0;
      virtual HRESULT __stdcall get_Mileage (
        /*[out,retval]*/ BSTR * Mileage ) = 0;
      virtual HRESULT __stdcall put_Mileage (
        /*[in]*/ BSTR Mileage ) = 0;
      virtual HRESULT __stdcall get_NoAging (
        /*[out,retval]*/ VARIANT_BOOL * NoAging ) = 0;
      virtual HRESULT __stdcall put_NoAging (
        /*[in]*/ VARIANT_BOOL NoAging ) = 0;
      virtual HRESULT __stdcall get_OutlookInternalVersion (
        /*[out,retval]*/ long * OutlookInternalVersion ) = 0;
      virtual HRESULT __stdcall get_OutlookVersion (
        /*[out,retval]*/ BSTR * OutlookVersion ) = 0;
      virtual HRESULT __stdcall get_Saved (
        /*[out,retval]*/ VARIANT_BOOL * Saved ) = 0;
      virtual HRESULT __stdcall get_Sensitivity (
        /*[out,retval]*/ enum OlSensitivity * Sensitivity ) = 0;
      virtual HRESULT __stdcall put_Sensitivity (
        /*[in]*/ enum OlSensitivity Sensitivity ) = 0;
      virtual HRESULT __stdcall get_Size (
        /*[out,retval]*/ long * Size ) = 0;
      virtual HRESULT __stdcall get_Subject (
        /*[out,retval]*/ BSTR * Subject ) = 0;
      virtual HRESULT __stdcall put_Subject (
        /*[in]*/ BSTR Subject ) = 0;
      virtual HRESULT __stdcall get_UnRead (
        /*[out,retval]*/ VARIANT_BOOL * UnRead ) = 0;
      virtual HRESULT __stdcall put_UnRead (
        /*[in]*/ VARIANT_BOOL UnRead ) = 0;
      virtual HRESULT __stdcall get_UserProperties (
        /*[out,retval]*/ struct UserProperties * * UserProperties ) = 0;
      virtual HRESULT __stdcall Close (
        /*[in]*/ enum OlInspectorClose SaveMode ) = 0;
      virtual HRESULT __stdcall Copy (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Display (
        /*[in]*/ VARIANT Modal = vtMissing ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ struct MAPIFolder * DestFldr,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall PrintOut ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall SaveAs (
        /*[in]*/ BSTR Path,
        /*[in]*/ VARIANT Type = vtMissing ) = 0;
      virtual HRESULT __stdcall get_AlternateRecipientAllowed (
        /*[out,retval]*/ VARIANT_BOOL * AlternateRecipientAllowed ) = 0;
      virtual HRESULT __stdcall put_AlternateRecipientAllowed (
        /*[in]*/ VARIANT_BOOL AlternateRecipientAllowed ) = 0;
      virtual HRESULT __stdcall get_AutoForwarded (
        /*[out,retval]*/ VARIANT_BOOL * AutoForwarded ) = 0;
      virtual HRESULT __stdcall put_AutoForwarded (
        /*[in]*/ VARIANT_BOOL AutoForwarded ) = 0;
      virtual HRESULT __stdcall get_BCC (
        /*[out,retval]*/ BSTR * BCC ) = 0;
      virtual HRESULT __stdcall put_BCC (
        /*[in]*/ BSTR BCC ) = 0;
      virtual HRESULT __stdcall get_CC (
        /*[out,retval]*/ BSTR * CC ) = 0;
      virtual HRESULT __stdcall put_CC (
        /*[in]*/ BSTR CC ) = 0;
      virtual HRESULT __stdcall get_DeferredDeliveryTime (
        /*[out,retval]*/ DATE * DeferredDeliveryTime ) = 0;
      virtual HRESULT __stdcall put_DeferredDeliveryTime (
        /*[in]*/ DATE DeferredDeliveryTime ) = 0;
      virtual HRESULT __stdcall get_DeleteAfterSubmit (
        /*[out,retval]*/ VARIANT_BOOL * DeleteAfterSubmit ) = 0;
      virtual HRESULT __stdcall put_DeleteAfterSubmit (
        /*[in]*/ VARIANT_BOOL DeleteAfterSubmit ) = 0;
      virtual HRESULT __stdcall get_ExpiryTime (
        /*[out,retval]*/ DATE * ExpiryTime ) = 0;
      virtual HRESULT __stdcall put_ExpiryTime (
        /*[in]*/ DATE ExpiryTime ) = 0;
      virtual HRESULT __stdcall get_FlagDueBy (
        /*[out,retval]*/ DATE * FlagDueBy ) = 0;
      virtual HRESULT __stdcall put_FlagDueBy (
        /*[in]*/ DATE FlagDueBy ) = 0;
      virtual HRESULT __stdcall get_FlagRequest (
        /*[out,retval]*/ BSTR * FlagRequest ) = 0;
      virtual HRESULT __stdcall put_FlagRequest (
        /*[in]*/ BSTR FlagRequest ) = 0;
      virtual HRESULT __stdcall get_FlagStatus (
        /*[out,retval]*/ enum OlFlagStatus * FlagStatus ) = 0;
      virtual HRESULT __stdcall put_FlagStatus (
        /*[in]*/ enum OlFlagStatus FlagStatus ) = 0;
      virtual HRESULT __stdcall get_HTMLBody (
        /*[out,retval]*/ BSTR * HTMLBody ) = 0;
      virtual HRESULT __stdcall put_HTMLBody (
        /*[in]*/ BSTR HTMLBody ) = 0;
      virtual HRESULT __stdcall get_OriginatorDeliveryReportRequested (
        /*[out,retval]*/ VARIANT_BOOL * OriginatorDeliveryReportRequested ) = 0;
      virtual HRESULT __stdcall put_OriginatorDeliveryReportRequested (
        /*[in]*/ VARIANT_BOOL OriginatorDeliveryReportRequested ) = 0;
      virtual HRESULT __stdcall get_ReadReceiptRequested (
        /*[out,retval]*/ VARIANT_BOOL * ReadReceiptRequested ) = 0;
      virtual HRESULT __stdcall put_ReadReceiptRequested (
        /*[in]*/ VARIANT_BOOL ReadReceiptRequested ) = 0;
      virtual HRESULT __stdcall get_ReceivedByEntryID (
        /*[out,retval]*/ BSTR * ReceivedByEntryID ) = 0;
      virtual HRESULT __stdcall get_ReceivedByName (
        /*[out,retval]*/ BSTR * ReceivedByName ) = 0;
      virtual HRESULT __stdcall get_ReceivedOnBehalfOfEntryID (
        /*[out,retval]*/ BSTR * ReceivedOnBehalfOfEntryID ) = 0;
      virtual HRESULT __stdcall get_ReceivedOnBehalfOfName (
        /*[out,retval]*/ BSTR * ReceivedOnBehalfOfName ) = 0;
      virtual HRESULT __stdcall get_ReceivedTime (
        /*[out,retval]*/ DATE * ReceivedTime ) = 0;
      virtual HRESULT __stdcall get_RecipientReassignmentProhibited (
        /*[out,retval]*/ VARIANT_BOOL * RecipientReassignmentProhibited ) = 0;
      virtual HRESULT __stdcall put_RecipientReassignmentProhibited (
        /*[in]*/ VARIANT_BOOL RecipientReassignmentProhibited ) = 0;
      virtual HRESULT __stdcall get_Recipients (
        /*[out,retval]*/ struct Recipients * * Recipients ) = 0;
      virtual HRESULT __stdcall get_ReminderOverrideDefault (
        /*[out,retval]*/ VARIANT_BOOL * ReminderOverrideDefault ) = 0;
      virtual HRESULT __stdcall put_ReminderOverrideDefault (
        /*[in]*/ VARIANT_BOOL ReminderOverrideDefault ) = 0;
      virtual HRESULT __stdcall get_ReminderPlaySound (
        /*[out,retval]*/ VARIANT_BOOL * ReminderPlaySound ) = 0;
      virtual HRESULT __stdcall put_ReminderPlaySound (
        /*[in]*/ VARIANT_BOOL ReminderPlaySound ) = 0;
      virtual HRESULT __stdcall get_ReminderSet (
        /*[out,retval]*/ VARIANT_BOOL * ReminderSet ) = 0;
      virtual HRESULT __stdcall put_ReminderSet (
        /*[in]*/ VARIANT_BOOL ReminderSet ) = 0;
      virtual HRESULT __stdcall get_ReminderSoundFile (
        /*[out,retval]*/ BSTR * ReminderSoundFile ) = 0;
      virtual HRESULT __stdcall put_ReminderSoundFile (
        /*[in]*/ BSTR ReminderSoundFile ) = 0;
      virtual HRESULT __stdcall get_ReminderTime (
        /*[out,retval]*/ DATE * ReminderTime ) = 0;
      virtual HRESULT __stdcall put_ReminderTime (
        /*[in]*/ DATE ReminderTime ) = 0;
      virtual HRESULT __stdcall get_RemoteStatus (
        /*[out,retval]*/ enum OlRemoteStatus * RemoteStatus ) = 0;
      virtual HRESULT __stdcall put_RemoteStatus (
        /*[in]*/ enum OlRemoteStatus RemoteStatus ) = 0;
      virtual HRESULT __stdcall get_ReplyRecipientNames (
        /*[out,retval]*/ BSTR * ReplyRecipientNames ) = 0;
      virtual HRESULT __stdcall get_ReplyRecipients (
        /*[out,retval]*/ struct Recipients * * ReplyRecipients ) = 0;
      virtual HRESULT __stdcall get_SaveSentMessageFolder (
        /*[out,retval]*/ struct MAPIFolder * * SaveSentMessageFolder ) = 0;
      virtual HRESULT __stdcall putref_SaveSentMessageFolder (
        /*[in]*/ struct MAPIFolder * SaveSentMessageFolder ) = 0;
      virtual HRESULT __stdcall get_SenderName (
        /*[out,retval]*/ BSTR * SenderName ) = 0;
      virtual HRESULT __stdcall get_Sent (
        /*[out,retval]*/ VARIANT_BOOL * Sent ) = 0;
      virtual HRESULT __stdcall get_SentOn (
        /*[out,retval]*/ DATE * SentOn ) = 0;
      virtual HRESULT __stdcall get_SentOnBehalfOfName (
        /*[out,retval]*/ BSTR * SentOnBehalfOfName ) = 0;
      virtual HRESULT __stdcall put_SentOnBehalfOfName (
        /*[in]*/ BSTR SentOnBehalfOfName ) = 0;
      virtual HRESULT __stdcall get_Submitted (
        /*[out,retval]*/ VARIANT_BOOL * Submitted ) = 0;
      virtual HRESULT __stdcall get_To (
        /*[out,retval]*/ BSTR * To ) = 0;
      virtual HRESULT __stdcall put_To (
        /*[in]*/ BSTR To ) = 0;
      virtual HRESULT __stdcall get_VotingOptions (
        /*[out,retval]*/ BSTR * VotingOptions ) = 0;
      virtual HRESULT __stdcall put_VotingOptions (
        /*[in]*/ BSTR VotingOptions ) = 0;
      virtual HRESULT __stdcall get_VotingResponse (
        /*[out,retval]*/ BSTR * VotingResponse ) = 0;
      virtual HRESULT __stdcall put_VotingResponse (
        /*[in]*/ BSTR VotingResponse ) = 0;
      virtual HRESULT __stdcall ClearConversationIndex ( ) = 0;
      virtual HRESULT __stdcall Forward (
        /*[out,retval]*/ struct _MailItem * * Item ) = 0;
      virtual HRESULT __stdcall Reply (
        /*[out,retval]*/ struct _MailItem * * Item ) = 0;
      virtual HRESULT __stdcall ReplyAll (
        /*[out,retval]*/ struct _MailItem * * Item ) = 0;
      virtual HRESULT __stdcall Send ( ) = 0;
      virtual HRESULT __stdcall get_Links (
        /*[out,retval]*/ struct Links * * Links ) = 0;
      virtual HRESULT __stdcall get_ItemProperties (
        /*[out,retval]*/ struct ItemProperties * * ItemProperties ) = 0;
      virtual HRESULT __stdcall get_BodyFormat (
        /*[out,retval]*/ enum OlBodyFormat * BodyFormat ) = 0;
      virtual HRESULT __stdcall put_BodyFormat (
        /*[in]*/ enum OlBodyFormat BodyFormat ) = 0;
      virtual HRESULT __stdcall get_DownloadState (
        /*[out,retval]*/ enum OlDownloadState * DownloadState ) = 0;
      virtual HRESULT __stdcall ShowCategoriesDialog ( ) = 0;
      virtual HRESULT __stdcall get_InternetCodepage (
        /*[out,retval]*/ long * InternetCodepage ) = 0;
      virtual HRESULT __stdcall put_InternetCodepage (
        /*[in]*/ long InternetCodepage ) = 0;
      virtual HRESULT __stdcall get_MarkForDownload (
        /*[out,retval]*/ enum OlRemoteStatus * MarkForDownload ) = 0;
      virtual HRESULT __stdcall put_MarkForDownload (
        /*[in]*/ enum OlRemoteStatus MarkForDownload ) = 0;
      virtual HRESULT __stdcall get_IsConflict (
        /*[out,retval]*/ VARIANT_BOOL * IsConflict ) = 0;
      virtual HRESULT __stdcall get_IsIPFax (
        /*[out,retval]*/ VARIANT_BOOL * IsIPFax ) = 0;
      virtual HRESULT __stdcall put_IsIPFax (
        /*[in]*/ VARIANT_BOOL IsIPFax ) = 0;
      virtual HRESULT __stdcall get_FlagIcon (
        /*[out,retval]*/ enum OlFlagIcon * FlagIcon ) = 0;
      virtual HRESULT __stdcall put_FlagIcon (
        /*[in]*/ enum OlFlagIcon FlagIcon ) = 0;
      virtual HRESULT __stdcall get_HasCoverSheet (
        /*[out,retval]*/ VARIANT_BOOL * HasCoverSheet ) = 0;
      virtual HRESULT __stdcall put_HasCoverSheet (
        /*[in]*/ VARIANT_BOOL HasCoverSheet ) = 0;
      virtual HRESULT __stdcall get_AutoResolvedWinner (
        /*[out,retval]*/ VARIANT_BOOL * AutoResolvedWinner ) = 0;
      virtual HRESULT __stdcall get_Conflicts (
        /*[out,retval]*/ struct Conflicts * * Conflicts ) = 0;
      virtual HRESULT __stdcall get_SenderEmailAddress (
        /*[out,retval]*/ BSTR * SenderEmailAddress ) = 0;
      virtual HRESULT __stdcall get_SenderEmailType (
        /*[out,retval]*/ BSTR * SenderEmailType ) = 0;
      virtual HRESULT __stdcall get_EnableSharedAttachments (
        /*[out,retval]*/ VARIANT_BOOL * EnableSharedAttachments ) = 0;
      virtual HRESULT __stdcall put_EnableSharedAttachments (
        /*[in]*/ VARIANT_BOOL EnableSharedAttachments ) = 0;
      virtual HRESULT __stdcall get_Permission (
        /*[out,retval]*/ enum OlPermission * Permission ) = 0;
      virtual HRESULT __stdcall put_Permission (
        /*[in]*/ enum OlPermission Permission ) = 0;
      virtual HRESULT __stdcall get_PermissionService (
        /*[out,retval]*/ enum OlPermissionService * PermissionService ) = 0;
      virtual HRESULT __stdcall put_PermissionService (
        /*[in]*/ enum OlPermissionService PermissionService ) = 0;
      virtual HRESULT __stdcall get_PropertyAccessor (
        /*[out,retval]*/ struct _PropertyAccessor * * PropertyAccessor ) = 0;
      virtual HRESULT __stdcall AddBusinessCard (
        /*[in]*/ struct _ContactItem * contact ) = 0;
      virtual HRESULT __stdcall get_SendUsingAccount (
        /*[out,retval]*/ struct _Account * * SendUsingAccount ) = 0;
      virtual HRESULT __stdcall put_SendUsingAccount (
        /*[in]*/ struct _Account * SendUsingAccount ) = 0;
      virtual HRESULT __stdcall get_TaskSubject (
        /*[out,retval]*/ BSTR * TaskSubject ) = 0;
      virtual HRESULT __stdcall put_TaskSubject (
        /*[in]*/ BSTR TaskSubject ) = 0;
      virtual HRESULT __stdcall get_TaskDueDate (
        /*[out,retval]*/ DATE * TaskDueDate ) = 0;
      virtual HRESULT __stdcall put_TaskDueDate (
        /*[in]*/ DATE TaskDueDate ) = 0;
      virtual HRESULT __stdcall get_TaskStartDate (
        /*[out,retval]*/ DATE * TaskStartDate ) = 0;
      virtual HRESULT __stdcall put_TaskStartDate (
        /*[in]*/ DATE TaskStartDate ) = 0;
      virtual HRESULT __stdcall get_TaskCompletedDate (
        /*[out,retval]*/ DATE * TaskCompletedDate ) = 0;
      virtual HRESULT __stdcall put_TaskCompletedDate (
        /*[in]*/ DATE TaskCompletedDate ) = 0;
      virtual HRESULT __stdcall get_ToDoTaskOrdinal (
        /*[out,retval]*/ DATE * ToDoTaskOrdinal ) = 0;
      virtual HRESULT __stdcall put_ToDoTaskOrdinal (
        /*[in]*/ DATE ToDoTaskOrdinal ) = 0;
      virtual HRESULT __stdcall MarkAsTask (
        /*[in]*/ enum OlMarkInterval MarkInterval ) = 0;
      virtual HRESULT __stdcall ClearTaskFlag ( ) = 0;
      virtual HRESULT __stdcall get_IsMarkedAsTask (
        /*[out,retval]*/ VARIANT_BOOL * IsMarkedAsTask ) = 0;
      virtual HRESULT __stdcall GetConversation (
        /*[out,retval]*/ struct _Conversation * * Conversation ) = 0;
      virtual HRESULT __stdcall get_ConversationID (
        /*[out,retval]*/ BSTR * ConversationID ) = 0;
      virtual HRESULT __stdcall get_Sender (
        /*[out,retval]*/ struct AddressEntry * * Sender ) = 0;
      virtual HRESULT __stdcall put_Sender (
        /*[in]*/ struct AddressEntry * Sender ) = 0;
      virtual HRESULT __stdcall get_PermissionTemplateGuid (
        /*[out,retval]*/ BSTR * PermissionTemplateGuid ) = 0;
      virtual HRESULT __stdcall put_PermissionTemplateGuid (
        /*[in]*/ BSTR PermissionTemplateGuid ) = 0;
      virtual HRESULT __stdcall get_RTFBody (
        /*[out,retval]*/ VARIANT * RTFBody ) = 0;
      virtual HRESULT __stdcall put_RTFBody (
        /*[in]*/ VARIANT RTFBody ) = 0;
      virtual HRESULT __stdcall get_RetentionPolicyName (
        /*[out,retval]*/ BSTR * RetentionPolicyName ) = 0;
      virtual HRESULT __stdcall get_RetentionExpirationDate (
        /*[out,retval]*/ DATE * RetentionExpirationDate ) = 0;
};

struct __declspec(uuid("00063048-0000-0000-c000-000000000046"))
AddressLists : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct AddressList * * Item ) = 0;
};

struct __declspec(uuid("000630c6-0000-0000-c000-000000000046"))
_Stores : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _Store * * Item ) = 0;
};

struct __declspec(uuid("000630c8-0000-0000-c000-000000000046"))
_SelectNamesDialog : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Caption (
        /*[out,retval]*/ BSTR * Caption ) = 0;
      virtual HRESULT __stdcall put_Caption (
        /*[in]*/ BSTR Caption ) = 0;
      virtual HRESULT __stdcall Display (
        /*[out,retval]*/ VARIANT_BOOL * ret ) = 0;
      virtual HRESULT __stdcall get_Recipients (
        /*[out,retval]*/ struct Recipients * * Recipients ) = 0;
      virtual HRESULT __stdcall put_Recipients (
        /*[in]*/ struct Recipients * Recipients ) = 0;
      virtual HRESULT __stdcall get_BccLabel (
        /*[out,retval]*/ BSTR * BccLabel ) = 0;
      virtual HRESULT __stdcall put_BccLabel (
        /*[in]*/ BSTR BccLabel ) = 0;
      virtual HRESULT __stdcall get_CcLabel (
        /*[out,retval]*/ BSTR * CcLabel ) = 0;
      virtual HRESULT __stdcall put_CcLabel (
        /*[in]*/ BSTR CcLabel ) = 0;
      virtual HRESULT __stdcall get_ToLabel (
        /*[out,retval]*/ BSTR * ToLabel ) = 0;
      virtual HRESULT __stdcall put_ToLabel (
        /*[in]*/ BSTR ToLabel ) = 0;
      virtual HRESULT __stdcall get_AllowMultipleSelection (
        /*[out,retval]*/ VARIANT_BOOL * AllowMultipleSelection ) = 0;
      virtual HRESULT __stdcall put_AllowMultipleSelection (
        /*[in]*/ VARIANT_BOOL AllowMultipleSelection ) = 0;
      virtual HRESULT __stdcall get_ForceResolution (
        /*[out,retval]*/ VARIANT_BOOL * ForceResolution ) = 0;
      virtual HRESULT __stdcall put_ForceResolution (
        /*[in]*/ VARIANT_BOOL ForceResolution ) = 0;
      virtual HRESULT __stdcall get_ShowOnlyInitialAddressList (
        /*[out,retval]*/ VARIANT_BOOL * ShowOnlyInitialAddressList ) = 0;
      virtual HRESULT __stdcall put_ShowOnlyInitialAddressList (
        /*[in]*/ VARIANT_BOOL ShowOnlyInitialAddressList ) = 0;
      virtual HRESULT __stdcall get_NumberOfRecipientSelectors (
        /*[out,retval]*/ enum OlRecipientSelectors * NumberOfRecipientSelectors ) = 0;
      virtual HRESULT __stdcall put_NumberOfRecipientSelectors (
        /*[in]*/ enum OlRecipientSelectors NumberOfRecipientSelectors ) = 0;
      virtual HRESULT __stdcall get_InitialAddressList (
        /*[out,retval]*/ struct AddressList * * InitialAddressList ) = 0;
      virtual HRESULT __stdcall put_InitialAddressList (
        /*[in]*/ struct AddressList * InitialAddressList ) = 0;
      virtual HRESULT __stdcall SetDefaultDisplayMode (
        /*[in]*/ enum OlDefaultSelectNamesDisplayMode defaultMode ) = 0;
};

struct __declspec(uuid("0006302f-0000-0000-c000-000000000046"))
_SharingItem : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Actions (
        /*[out,retval]*/ struct Actions * * Actions ) = 0;
      virtual HRESULT __stdcall get_Attachments (
        /*[out,retval]*/ struct Attachments * * Attachments ) = 0;
      virtual HRESULT __stdcall get_BillingInformation (
        /*[out,retval]*/ BSTR * BillingInformation ) = 0;
      virtual HRESULT __stdcall put_BillingInformation (
        /*[in]*/ BSTR BillingInformation ) = 0;
      virtual HRESULT __stdcall get_Body (
        /*[out,retval]*/ BSTR * Body ) = 0;
      virtual HRESULT __stdcall put_Body (
        /*[in]*/ BSTR Body ) = 0;
      virtual HRESULT __stdcall get_Categories (
        /*[out,retval]*/ BSTR * Categories ) = 0;
      virtual HRESULT __stdcall put_Categories (
        /*[in]*/ BSTR Categories ) = 0;
      virtual HRESULT __stdcall get_Companies (
        /*[out,retval]*/ BSTR * Companies ) = 0;
      virtual HRESULT __stdcall put_Companies (
        /*[in]*/ BSTR Companies ) = 0;
      virtual HRESULT __stdcall get_ConversationIndex (
        /*[out,retval]*/ BSTR * ConversationIndex ) = 0;
      virtual HRESULT __stdcall get_ConversationTopic (
        /*[out,retval]*/ BSTR * ConversationTopic ) = 0;
      virtual HRESULT __stdcall get_CreationTime (
        /*[out,retval]*/ DATE * CreationTime ) = 0;
      virtual HRESULT __stdcall get_EntryID (
        /*[out,retval]*/ BSTR * EntryID ) = 0;
      virtual HRESULT __stdcall get_FormDescription (
        /*[out,retval]*/ struct FormDescription * * FormDescription ) = 0;
      virtual HRESULT __stdcall get_GetInspector (
        /*[out,retval]*/ struct _Inspector * * GetInspector ) = 0;
      virtual HRESULT __stdcall get_Importance (
        /*[out,retval]*/ enum OlImportance * Importance ) = 0;
      virtual HRESULT __stdcall put_Importance (
        /*[in]*/ enum OlImportance Importance ) = 0;
      virtual HRESULT __stdcall get_LastModificationTime (
        /*[out,retval]*/ DATE * LastModificationTime ) = 0;
      virtual HRESULT __stdcall get_MAPIOBJECT (
        /*[out,retval]*/ IUnknown * * MAPIOBJECT ) = 0;
      virtual HRESULT __stdcall get_MessageClass (
        /*[out,retval]*/ BSTR * MessageClass ) = 0;
      virtual HRESULT __stdcall put_MessageClass (
        /*[in]*/ BSTR MessageClass ) = 0;
      virtual HRESULT __stdcall get_Mileage (
        /*[out,retval]*/ BSTR * Mileage ) = 0;
      virtual HRESULT __stdcall put_Mileage (
        /*[in]*/ BSTR Mileage ) = 0;
      virtual HRESULT __stdcall get_NoAging (
        /*[out,retval]*/ VARIANT_BOOL * NoAging ) = 0;
      virtual HRESULT __stdcall put_NoAging (
        /*[in]*/ VARIANT_BOOL NoAging ) = 0;
      virtual HRESULT __stdcall get_OutlookInternalVersion (
        /*[out,retval]*/ long * OutlookInternalVersion ) = 0;
      virtual HRESULT __stdcall get_OutlookVersion (
        /*[out,retval]*/ BSTR * OutlookVersion ) = 0;
      virtual HRESULT __stdcall get_Saved (
        /*[out,retval]*/ VARIANT_BOOL * Saved ) = 0;
      virtual HRESULT __stdcall get_Sensitivity (
        /*[out,retval]*/ enum OlSensitivity * Sensitivity ) = 0;
      virtual HRESULT __stdcall put_Sensitivity (
        /*[in]*/ enum OlSensitivity Sensitivity ) = 0;
      virtual HRESULT __stdcall get_Size (
        /*[out,retval]*/ long * Size ) = 0;
      virtual HRESULT __stdcall get_Subject (
        /*[out,retval]*/ BSTR * Subject ) = 0;
      virtual HRESULT __stdcall put_Subject (
        /*[in]*/ BSTR Subject ) = 0;
      virtual HRESULT __stdcall get_UnRead (
        /*[out,retval]*/ VARIANT_BOOL * UnRead ) = 0;
      virtual HRESULT __stdcall put_UnRead (
        /*[in]*/ VARIANT_BOOL UnRead ) = 0;
      virtual HRESULT __stdcall get_UserProperties (
        /*[out,retval]*/ struct UserProperties * * UserProperties ) = 0;
      virtual HRESULT __stdcall Close (
        /*[in]*/ enum OlInspectorClose SaveMode ) = 0;
      virtual HRESULT __stdcall Copy (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Display (
        /*[in]*/ VARIANT Modal = vtMissing ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ struct MAPIFolder * DestFldr,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall PrintOut ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall SaveAs (
        /*[in]*/ BSTR Path,
        /*[in]*/ VARIANT Type = vtMissing ) = 0;
      virtual HRESULT __stdcall Allow ( ) = 0;
      virtual HRESULT __stdcall Deny (
        /*[out,retval]*/ struct _SharingItem * * denyMailItem ) = 0;
      virtual HRESULT __stdcall get_PropertyAccessor (
        /*[out,retval]*/ struct _PropertyAccessor * * PropertyAccessor ) = 0;
      virtual HRESULT __stdcall get_RemoteName (
        /*[out,retval]*/ BSTR * RemoteName ) = 0;
      virtual HRESULT __stdcall get_RemoteID (
        /*[out,retval]*/ BSTR * RemoteID ) = 0;
      virtual HRESULT __stdcall get_RemotePath (
        /*[out,retval]*/ BSTR * RemotePath ) = 0;
      virtual HRESULT __stdcall get_SharingProviderGuid (
        /*[out,retval]*/ BSTR * SharingProviderGuid ) = 0;
      virtual HRESULT __stdcall OpenSharedFolder (
        /*[out,retval]*/ struct MAPIFolder * * sf ) = 0;
      virtual HRESULT __stdcall get_SharingProvider (
        /*[out,retval]*/ enum OlSharingProvider * SharingProvider ) = 0;
      virtual HRESULT __stdcall get_AllowWriteAccess (
        /*[out,retval]*/ VARIANT_BOOL * AllowWriteAccess ) = 0;
      virtual HRESULT __stdcall put_AllowWriteAccess (
        /*[in]*/ VARIANT_BOOL AllowWriteAccess ) = 0;
      virtual HRESULT __stdcall get_Type (
        /*[out,retval]*/ enum OlSharingMsgType * Type ) = 0;
      virtual HRESULT __stdcall put_Type (
        /*[in]*/ enum OlSharingMsgType Type ) = 0;
      virtual HRESULT __stdcall get_RequestedFolder (
        /*[out,retval]*/ enum OlDefaultFolders * RequestedFolder ) = 0;
      virtual HRESULT __stdcall get_SendUsingAccount (
        /*[out,retval]*/ struct _Account * * SendUsingAccount ) = 0;
      virtual HRESULT __stdcall put_SendUsingAccount (
        /*[in]*/ struct _Account * SendUsingAccount ) = 0;
      virtual HRESULT __stdcall get_AlternateRecipientAllowed (
        /*[out,retval]*/ VARIANT_BOOL * AlternateRecipientAllowed ) = 0;
      virtual HRESULT __stdcall put_AlternateRecipientAllowed (
        /*[in]*/ VARIANT_BOOL AlternateRecipientAllowed ) = 0;
      virtual HRESULT __stdcall get_AutoForwarded (
        /*[out,retval]*/ VARIANT_BOOL * AutoForwarded ) = 0;
      virtual HRESULT __stdcall put_AutoForwarded (
        /*[in]*/ VARIANT_BOOL AutoForwarded ) = 0;
      virtual HRESULT __stdcall get_BCC (
        /*[out,retval]*/ BSTR * BCC ) = 0;
      virtual HRESULT __stdcall put_BCC (
        /*[in]*/ BSTR BCC ) = 0;
      virtual HRESULT __stdcall get_CC (
        /*[out,retval]*/ BSTR * CC ) = 0;
      virtual HRESULT __stdcall put_CC (
        /*[in]*/ BSTR CC ) = 0;
      virtual HRESULT __stdcall get_DeferredDeliveryTime (
        /*[out,retval]*/ DATE * DeferredDeliveryTime ) = 0;
      virtual HRESULT __stdcall put_DeferredDeliveryTime (
        /*[in]*/ DATE DeferredDeliveryTime ) = 0;
      virtual HRESULT __stdcall get_DeleteAfterSubmit (
        /*[out,retval]*/ VARIANT_BOOL * DeleteAfterSubmit ) = 0;
      virtual HRESULT __stdcall put_DeleteAfterSubmit (
        /*[in]*/ VARIANT_BOOL DeleteAfterSubmit ) = 0;
      virtual HRESULT __stdcall get_ExpiryTime (
        /*[out,retval]*/ DATE * ExpiryTime ) = 0;
      virtual HRESULT __stdcall put_ExpiryTime (
        /*[in]*/ DATE ExpiryTime ) = 0;
      virtual HRESULT __stdcall get_FlagDueBy (
        /*[out,retval]*/ DATE * FlagDueBy ) = 0;
      virtual HRESULT __stdcall put_FlagDueBy (
        /*[in]*/ DATE FlagDueBy ) = 0;
      virtual HRESULT __stdcall get_FlagRequest (
        /*[out,retval]*/ BSTR * FlagRequest ) = 0;
      virtual HRESULT __stdcall put_FlagRequest (
        /*[in]*/ BSTR FlagRequest ) = 0;
      virtual HRESULT __stdcall get_FlagStatus (
        /*[out,retval]*/ enum OlFlagStatus * FlagStatus ) = 0;
      virtual HRESULT __stdcall put_FlagStatus (
        /*[in]*/ enum OlFlagStatus FlagStatus ) = 0;
      virtual HRESULT __stdcall get_HTMLBody (
        /*[out,retval]*/ BSTR * HTMLBody ) = 0;
      virtual HRESULT __stdcall put_HTMLBody (
        /*[in]*/ BSTR HTMLBody ) = 0;
      virtual HRESULT __stdcall get_OriginatorDeliveryReportRequested (
        /*[out,retval]*/ VARIANT_BOOL * OriginatorDeliveryReportRequested ) = 0;
      virtual HRESULT __stdcall put_OriginatorDeliveryReportRequested (
        /*[in]*/ VARIANT_BOOL OriginatorDeliveryReportRequested ) = 0;
      virtual HRESULT __stdcall get_ReadReceiptRequested (
        /*[out,retval]*/ VARIANT_BOOL * ReadReceiptRequested ) = 0;
      virtual HRESULT __stdcall put_ReadReceiptRequested (
        /*[in]*/ VARIANT_BOOL ReadReceiptRequested ) = 0;
      virtual HRESULT __stdcall get_ReceivedByEntryID (
        /*[out,retval]*/ BSTR * ReceivedByEntryID ) = 0;
      virtual HRESULT __stdcall get_ReceivedByName (
        /*[out,retval]*/ BSTR * ReceivedByName ) = 0;
      virtual HRESULT __stdcall get_ReceivedOnBehalfOfEntryID (
        /*[out,retval]*/ BSTR * ReceivedOnBehalfOfEntryID ) = 0;
      virtual HRESULT __stdcall get_ReceivedOnBehalfOfName (
        /*[out,retval]*/ BSTR * ReceivedOnBehalfOfName ) = 0;
      virtual HRESULT __stdcall get_ReceivedTime (
        /*[out,retval]*/ DATE * ReceivedTime ) = 0;
      virtual HRESULT __stdcall get_RecipientReassignmentProhibited (
        /*[out,retval]*/ VARIANT_BOOL * RecipientReassignmentProhibited ) = 0;
      virtual HRESULT __stdcall put_RecipientReassignmentProhibited (
        /*[in]*/ VARIANT_BOOL RecipientReassignmentProhibited ) = 0;
      virtual HRESULT __stdcall get_Recipients (
        /*[out,retval]*/ struct Recipients * * Recipients ) = 0;
      virtual HRESULT __stdcall get_ReminderOverrideDefault (
        /*[out,retval]*/ VARIANT_BOOL * ReminderOverrideDefault ) = 0;
      virtual HRESULT __stdcall put_ReminderOverrideDefault (
        /*[in]*/ VARIANT_BOOL ReminderOverrideDefault ) = 0;
      virtual HRESULT __stdcall get_ReminderPlaySound (
        /*[out,retval]*/ VARIANT_BOOL * ReminderPlaySound ) = 0;
      virtual HRESULT __stdcall put_ReminderPlaySound (
        /*[in]*/ VARIANT_BOOL ReminderPlaySound ) = 0;
      virtual HRESULT __stdcall get_ReminderSet (
        /*[out,retval]*/ VARIANT_BOOL * ReminderSet ) = 0;
      virtual HRESULT __stdcall put_ReminderSet (
        /*[in]*/ VARIANT_BOOL ReminderSet ) = 0;
      virtual HRESULT __stdcall get_ReminderSoundFile (
        /*[out,retval]*/ BSTR * ReminderSoundFile ) = 0;
      virtual HRESULT __stdcall put_ReminderSoundFile (
        /*[in]*/ BSTR ReminderSoundFile ) = 0;
      virtual HRESULT __stdcall get_ReminderTime (
        /*[out,retval]*/ DATE * ReminderTime ) = 0;
      virtual HRESULT __stdcall put_ReminderTime (
        /*[in]*/ DATE ReminderTime ) = 0;
      virtual HRESULT __stdcall get_RemoteStatus (
        /*[out,retval]*/ enum OlRemoteStatus * RemoteStatus ) = 0;
      virtual HRESULT __stdcall put_RemoteStatus (
        /*[in]*/ enum OlRemoteStatus RemoteStatus ) = 0;
      virtual HRESULT __stdcall get_ReplyRecipientNames (
        /*[out,retval]*/ BSTR * ReplyRecipientNames ) = 0;
      virtual HRESULT __stdcall get_ReplyRecipients (
        /*[out,retval]*/ struct Recipients * * ReplyRecipients ) = 0;
      virtual HRESULT __stdcall get_SaveSentMessageFolder (
        /*[out,retval]*/ struct MAPIFolder * * SaveSentMessageFolder ) = 0;
      virtual HRESULT __stdcall putref_SaveSentMessageFolder (
        /*[in]*/ struct MAPIFolder * SaveSentMessageFolder ) = 0;
      virtual HRESULT __stdcall get_SenderName (
        /*[out,retval]*/ BSTR * SenderName ) = 0;
      virtual HRESULT __stdcall get_Sent (
        /*[out,retval]*/ VARIANT_BOOL * Sent ) = 0;
      virtual HRESULT __stdcall get_SentOn (
        /*[out,retval]*/ DATE * SentOn ) = 0;
      virtual HRESULT __stdcall get_SentOnBehalfOfName (
        /*[out,retval]*/ BSTR * SentOnBehalfOfName ) = 0;
      virtual HRESULT __stdcall put_SentOnBehalfOfName (
        /*[in]*/ BSTR SentOnBehalfOfName ) = 0;
      virtual HRESULT __stdcall get_Submitted (
        /*[out,retval]*/ VARIANT_BOOL * Submitted ) = 0;
      virtual HRESULT __stdcall get_To (
        /*[out,retval]*/ BSTR * To ) = 0;
      virtual HRESULT __stdcall put_To (
        /*[in]*/ BSTR To ) = 0;
      virtual HRESULT __stdcall ClearConversationIndex ( ) = 0;
      virtual HRESULT __stdcall Forward (
        /*[out,retval]*/ struct _SharingItem * * Item ) = 0;
      virtual HRESULT __stdcall Reply (
        /*[out,retval]*/ struct _MailItem * * Item ) = 0;
      virtual HRESULT __stdcall ReplyAll (
        /*[out,retval]*/ struct _MailItem * * Item ) = 0;
      virtual HRESULT __stdcall Send ( ) = 0;
      virtual HRESULT __stdcall get_ItemProperties (
        /*[out,retval]*/ struct ItemProperties * * ItemProperties ) = 0;
      virtual HRESULT __stdcall get_BodyFormat (
        /*[out,retval]*/ enum OlBodyFormat * BodyFormat ) = 0;
      virtual HRESULT __stdcall put_BodyFormat (
        /*[in]*/ enum OlBodyFormat BodyFormat ) = 0;
      virtual HRESULT __stdcall get_DownloadState (
        /*[out,retval]*/ enum OlDownloadState * DownloadState ) = 0;
      virtual HRESULT __stdcall ShowCategoriesDialog ( ) = 0;
      virtual HRESULT __stdcall get_InternetCodepage (
        /*[out,retval]*/ long * InternetCodepage ) = 0;
      virtual HRESULT __stdcall put_InternetCodepage (
        /*[in]*/ long InternetCodepage ) = 0;
      virtual HRESULT __stdcall get_MarkForDownload (
        /*[out,retval]*/ enum OlRemoteStatus * MarkForDownload ) = 0;
      virtual HRESULT __stdcall put_MarkForDownload (
        /*[in]*/ enum OlRemoteStatus MarkForDownload ) = 0;
      virtual HRESULT __stdcall get_IsConflict (
        /*[out,retval]*/ VARIANT_BOOL * IsConflict ) = 0;
      virtual HRESULT __stdcall AddBusinessCard (
        /*[in]*/ struct _ContactItem * contact ) = 0;
      virtual HRESULT __stdcall get_TaskSubject (
        /*[out,retval]*/ BSTR * TaskSubject ) = 0;
      virtual HRESULT __stdcall put_TaskSubject (
        /*[in]*/ BSTR TaskSubject ) = 0;
      virtual HRESULT __stdcall get_TaskDueDate (
        /*[out,retval]*/ DATE * TaskDueDate ) = 0;
      virtual HRESULT __stdcall put_TaskDueDate (
        /*[in]*/ DATE TaskDueDate ) = 0;
      virtual HRESULT __stdcall get_TaskStartDate (
        /*[out,retval]*/ DATE * TaskStartDate ) = 0;
      virtual HRESULT __stdcall put_TaskStartDate (
        /*[in]*/ DATE TaskStartDate ) = 0;
      virtual HRESULT __stdcall get_TaskCompletedDate (
        /*[out,retval]*/ DATE * TaskCompletedDate ) = 0;
      virtual HRESULT __stdcall put_TaskCompletedDate (
        /*[in]*/ DATE TaskCompletedDate ) = 0;
      virtual HRESULT __stdcall get_ToDoTaskOrdinal (
        /*[out,retval]*/ DATE * ToDoTaskOrdinal ) = 0;
      virtual HRESULT __stdcall put_ToDoTaskOrdinal (
        /*[in]*/ DATE ToDoTaskOrdinal ) = 0;
      virtual HRESULT __stdcall get_FlagIcon (
        /*[out,retval]*/ enum OlFlagIcon * FlagIcon ) = 0;
      virtual HRESULT __stdcall put_FlagIcon (
        /*[in]*/ enum OlFlagIcon FlagIcon ) = 0;
      virtual HRESULT __stdcall get_Conflicts (
        /*[out,retval]*/ struct Conflicts * * Conflicts ) = 0;
      virtual HRESULT __stdcall get_SenderEmailAddress (
        /*[out,retval]*/ BSTR * SenderEmailAddress ) = 0;
      virtual HRESULT __stdcall get_SenderEmailType (
        /*[out,retval]*/ BSTR * SenderEmailType ) = 0;
      virtual HRESULT __stdcall get_EnableSharedAttachments (
        /*[out,retval]*/ VARIANT_BOOL * EnableSharedAttachments ) = 0;
      virtual HRESULT __stdcall put_EnableSharedAttachments (
        /*[in]*/ VARIANT_BOOL EnableSharedAttachments ) = 0;
      virtual HRESULT __stdcall get_Permission (
        /*[out,retval]*/ enum OlPermission * Permission ) = 0;
      virtual HRESULT __stdcall put_Permission (
        /*[in]*/ enum OlPermission Permission ) = 0;
      virtual HRESULT __stdcall get_PermissionService (
        /*[out,retval]*/ enum OlPermissionService * PermissionService ) = 0;
      virtual HRESULT __stdcall put_PermissionService (
        /*[in]*/ enum OlPermissionService PermissionService ) = 0;
      virtual HRESULT __stdcall MarkAsTask (
        /*[in]*/ enum OlMarkInterval MarkInterval ) = 0;
      virtual HRESULT __stdcall ClearTaskFlag ( ) = 0;
      virtual HRESULT __stdcall get_IsMarkedAsTask (
        /*[out,retval]*/ VARIANT_BOOL * IsMarkedAsTask ) = 0;
      virtual HRESULT __stdcall GetConversation (
        /*[out,retval]*/ struct _Conversation * * Conversation ) = 0;
      virtual HRESULT __stdcall get_ConversationID (
        /*[out,retval]*/ BSTR * ConversationID ) = 0;
      virtual HRESULT __stdcall get_PermissionTemplateGuid (
        /*[out,retval]*/ BSTR * PermissionTemplateGuid ) = 0;
      virtual HRESULT __stdcall put_PermissionTemplateGuid (
        /*[in]*/ BSTR PermissionTemplateGuid ) = 0;
      virtual HRESULT __stdcall get_RTFBody (
        /*[out,retval]*/ VARIANT * RTFBody ) = 0;
      virtual HRESULT __stdcall put_RTFBody (
        /*[in]*/ VARIANT RTFBody ) = 0;
      virtual HRESULT __stdcall get_RetentionPolicyName (
        /*[out,retval]*/ BSTR * RetentionPolicyName ) = 0;
      virtual HRESULT __stdcall get_RetentionExpirationDate (
        /*[out,retval]*/ DATE * RetentionExpirationDate ) = 0;
};

struct __declspec(uuid("0006300a-0000-0000-c000-000000000046"))
_Explorers : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _Explorer * * Item ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ VARIANT Folder,
        /*[in]*/ enum OlFolderDisplayMode DisplayMode,
        /*[out,retval]*/ struct _Explorer * * Explorer ) = 0;
};

struct __declspec(uuid("0006300b-0000-0000-c000-000000000046"))
Search : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Filter (
        /*[out,retval]*/ BSTR * Filter ) = 0;
      virtual HRESULT __stdcall get_IsSynchronous (
        /*[out,retval]*/ VARIANT_BOOL * IsSynchronous ) = 0;
      virtual HRESULT __stdcall get_Results (
        /*[out,retval]*/ struct _Results * * Results ) = 0;
      virtual HRESULT __stdcall get_SearchSubFolders (
        /*[out,retval]*/ VARIANT_BOOL * SearchSubFolders ) = 0;
      virtual HRESULT __stdcall Stop ( ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * Tag ) = 0;
      virtual HRESULT __stdcall get_Scope (
        /*[out,retval]*/ BSTR * Scope ) = 0;
      virtual HRESULT __stdcall Save (
        /*[in]*/ BSTR Name,
        /*[out,retval]*/ struct MAPIFolder * * Folder ) = 0;
      virtual HRESULT __stdcall GetTable (
        /*[out,retval]*/ struct _Table * * Table ) = 0;
};

struct __declspec(uuid("00063033-0000-0000-c000-000000000046"))
_AppointmentItem : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Actions (
        /*[out,retval]*/ struct Actions * * Actions ) = 0;
      virtual HRESULT __stdcall get_Attachments (
        /*[out,retval]*/ struct Attachments * * Attachments ) = 0;
      virtual HRESULT __stdcall get_BillingInformation (
        /*[out,retval]*/ BSTR * BillingInformation ) = 0;
      virtual HRESULT __stdcall put_BillingInformation (
        /*[in]*/ BSTR BillingInformation ) = 0;
      virtual HRESULT __stdcall get_Body (
        /*[out,retval]*/ BSTR * Body ) = 0;
      virtual HRESULT __stdcall put_Body (
        /*[in]*/ BSTR Body ) = 0;
      virtual HRESULT __stdcall get_Categories (
        /*[out,retval]*/ BSTR * Categories ) = 0;
      virtual HRESULT __stdcall put_Categories (
        /*[in]*/ BSTR Categories ) = 0;
      virtual HRESULT __stdcall get_Companies (
        /*[out,retval]*/ BSTR * Companies ) = 0;
      virtual HRESULT __stdcall put_Companies (
        /*[in]*/ BSTR Companies ) = 0;
      virtual HRESULT __stdcall get_ConversationIndex (
        /*[out,retval]*/ BSTR * ConversationIndex ) = 0;
      virtual HRESULT __stdcall get_ConversationTopic (
        /*[out,retval]*/ BSTR * ConversationTopic ) = 0;
      virtual HRESULT __stdcall get_CreationTime (
        /*[out,retval]*/ DATE * CreationTime ) = 0;
      virtual HRESULT __stdcall get_EntryID (
        /*[out,retval]*/ BSTR * EntryID ) = 0;
      virtual HRESULT __stdcall get_FormDescription (
        /*[out,retval]*/ struct FormDescription * * FormDescription ) = 0;
      virtual HRESULT __stdcall get_GetInspector (
        /*[out,retval]*/ struct _Inspector * * GetInspector ) = 0;
      virtual HRESULT __stdcall get_Importance (
        /*[out,retval]*/ enum OlImportance * Importance ) = 0;
      virtual HRESULT __stdcall put_Importance (
        /*[in]*/ enum OlImportance Importance ) = 0;
      virtual HRESULT __stdcall get_LastModificationTime (
        /*[out,retval]*/ DATE * LastModificationTime ) = 0;
      virtual HRESULT __stdcall get_MAPIOBJECT (
        /*[out,retval]*/ IUnknown * * MAPIOBJECT ) = 0;
      virtual HRESULT __stdcall get_MessageClass (
        /*[out,retval]*/ BSTR * MessageClass ) = 0;
      virtual HRESULT __stdcall put_MessageClass (
        /*[in]*/ BSTR MessageClass ) = 0;
      virtual HRESULT __stdcall get_Mileage (
        /*[out,retval]*/ BSTR * Mileage ) = 0;
      virtual HRESULT __stdcall put_Mileage (
        /*[in]*/ BSTR Mileage ) = 0;
      virtual HRESULT __stdcall get_NoAging (
        /*[out,retval]*/ VARIANT_BOOL * NoAging ) = 0;
      virtual HRESULT __stdcall put_NoAging (
        /*[in]*/ VARIANT_BOOL NoAging ) = 0;
      virtual HRESULT __stdcall get_OutlookInternalVersion (
        /*[out,retval]*/ long * OutlookInternalVersion ) = 0;
      virtual HRESULT __stdcall get_OutlookVersion (
        /*[out,retval]*/ BSTR * OutlookVersion ) = 0;
      virtual HRESULT __stdcall get_Saved (
        /*[out,retval]*/ VARIANT_BOOL * Saved ) = 0;
      virtual HRESULT __stdcall get_Sensitivity (
        /*[out,retval]*/ enum OlSensitivity * Sensitivity ) = 0;
      virtual HRESULT __stdcall put_Sensitivity (
        /*[in]*/ enum OlSensitivity Sensitivity ) = 0;
      virtual HRESULT __stdcall get_Size (
        /*[out,retval]*/ long * Size ) = 0;
      virtual HRESULT __stdcall get_Subject (
        /*[out,retval]*/ BSTR * Subject ) = 0;
      virtual HRESULT __stdcall put_Subject (
        /*[in]*/ BSTR Subject ) = 0;
      virtual HRESULT __stdcall get_UnRead (
        /*[out,retval]*/ VARIANT_BOOL * UnRead ) = 0;
      virtual HRESULT __stdcall put_UnRead (
        /*[in]*/ VARIANT_BOOL UnRead ) = 0;
      virtual HRESULT __stdcall get_UserProperties (
        /*[out,retval]*/ struct UserProperties * * UserProperties ) = 0;
      virtual HRESULT __stdcall Close (
        /*[in]*/ enum OlInspectorClose SaveMode ) = 0;
      virtual HRESULT __stdcall Copy (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Display (
        /*[in]*/ VARIANT Modal = vtMissing ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ struct MAPIFolder * DestFldr,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall PrintOut ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall SaveAs (
        /*[in]*/ BSTR Path,
        /*[in]*/ VARIANT Type = vtMissing ) = 0;
      virtual HRESULT __stdcall get_AllDayEvent (
        /*[out,retval]*/ VARIANT_BOOL * AllDayEvent ) = 0;
      virtual HRESULT __stdcall put_AllDayEvent (
        /*[in]*/ VARIANT_BOOL AllDayEvent ) = 0;
      virtual HRESULT __stdcall get_BusyStatus (
        /*[out,retval]*/ enum OlBusyStatus * BusyStatus ) = 0;
      virtual HRESULT __stdcall put_BusyStatus (
        /*[in]*/ enum OlBusyStatus BusyStatus ) = 0;
      virtual HRESULT __stdcall get_Duration (
        /*[out,retval]*/ long * Duration ) = 0;
      virtual HRESULT __stdcall put_Duration (
        /*[in]*/ long Duration ) = 0;
      virtual HRESULT __stdcall get_End (
        /*[out,retval]*/ DATE * End ) = 0;
      virtual HRESULT __stdcall put_End (
        /*[in]*/ DATE End ) = 0;
      virtual HRESULT __stdcall get_IsOnlineMeeting (
        /*[out,retval]*/ VARIANT_BOOL * IsOnlineMeeting ) = 0;
      virtual HRESULT __stdcall put_IsOnlineMeeting (
        /*[in]*/ VARIANT_BOOL IsOnlineMeeting ) = 0;
      virtual HRESULT __stdcall get_IsRecurring (
        /*[out,retval]*/ VARIANT_BOOL * IsRecurring ) = 0;
      virtual HRESULT __stdcall get_Location (
        /*[out,retval]*/ BSTR * Location ) = 0;
      virtual HRESULT __stdcall put_Location (
        /*[in]*/ BSTR Location ) = 0;
      virtual HRESULT __stdcall get_MeetingStatus (
        /*[out,retval]*/ enum OlMeetingStatus * MeetingStatus ) = 0;
      virtual HRESULT __stdcall put_MeetingStatus (
        /*[in]*/ enum OlMeetingStatus MeetingStatus ) = 0;
      virtual HRESULT __stdcall get_NetMeetingAutoStart (
        /*[out,retval]*/ VARIANT_BOOL * NetMeetingAutoStart ) = 0;
      virtual HRESULT __stdcall put_NetMeetingAutoStart (
        /*[in]*/ VARIANT_BOOL NetMeetingAutoStart ) = 0;
      virtual HRESULT __stdcall get_NetMeetingOrganizerAlias (
        /*[out,retval]*/ BSTR * NetMeetingOrganizerAlias ) = 0;
      virtual HRESULT __stdcall put_NetMeetingOrganizerAlias (
        /*[in]*/ BSTR NetMeetingOrganizerAlias ) = 0;
      virtual HRESULT __stdcall get_NetMeetingServer (
        /*[out,retval]*/ BSTR * NetMeetingServer ) = 0;
      virtual HRESULT __stdcall put_NetMeetingServer (
        /*[in]*/ BSTR NetMeetingServer ) = 0;
      virtual HRESULT __stdcall get_NetMeetingType (
        /*[out,retval]*/ enum OlNetMeetingType * NetMeetingType ) = 0;
      virtual HRESULT __stdcall put_NetMeetingType (
        /*[in]*/ enum OlNetMeetingType NetMeetingType ) = 0;
      virtual HRESULT __stdcall get_OptionalAttendees (
        /*[out,retval]*/ BSTR * OptionalAttendees ) = 0;
      virtual HRESULT __stdcall put_OptionalAttendees (
        /*[in]*/ BSTR OptionalAttendees ) = 0;
      virtual HRESULT __stdcall get_Organizer (
        /*[out,retval]*/ BSTR * Organizer ) = 0;
      virtual HRESULT __stdcall get_Recipients (
        /*[out,retval]*/ struct Recipients * * Recipients ) = 0;
      virtual HRESULT __stdcall get_RecurrenceState (
        /*[out,retval]*/ enum OlRecurrenceState * RecurrenceState ) = 0;
      virtual HRESULT __stdcall get_ReminderMinutesBeforeStart (
        /*[out,retval]*/ long * ReminderMinutesBeforeStart ) = 0;
      virtual HRESULT __stdcall put_ReminderMinutesBeforeStart (
        /*[in]*/ long ReminderMinutesBeforeStart ) = 0;
      virtual HRESULT __stdcall get_ReminderOverrideDefault (
        /*[out,retval]*/ VARIANT_BOOL * ReminderOverrideDefault ) = 0;
      virtual HRESULT __stdcall put_ReminderOverrideDefault (
        /*[in]*/ VARIANT_BOOL ReminderOverrideDefault ) = 0;
      virtual HRESULT __stdcall get_ReminderPlaySound (
        /*[out,retval]*/ VARIANT_BOOL * ReminderPlaySound ) = 0;
      virtual HRESULT __stdcall put_ReminderPlaySound (
        /*[in]*/ VARIANT_BOOL ReminderPlaySound ) = 0;
      virtual HRESULT __stdcall get_ReminderSet (
        /*[out,retval]*/ VARIANT_BOOL * ReminderSet ) = 0;
      virtual HRESULT __stdcall put_ReminderSet (
        /*[in]*/ VARIANT_BOOL ReminderSet ) = 0;
      virtual HRESULT __stdcall get_ReminderSoundFile (
        /*[out,retval]*/ BSTR * ReminderSoundFile ) = 0;
      virtual HRESULT __stdcall put_ReminderSoundFile (
        /*[in]*/ BSTR ReminderSoundFile ) = 0;
      virtual HRESULT __stdcall get_ReplyTime (
        /*[out,retval]*/ DATE * ReplyTime ) = 0;
      virtual HRESULT __stdcall put_ReplyTime (
        /*[in]*/ DATE ReplyTime ) = 0;
      virtual HRESULT __stdcall get_RequiredAttendees (
        /*[out,retval]*/ BSTR * RequiredAttendees ) = 0;
      virtual HRESULT __stdcall put_RequiredAttendees (
        /*[in]*/ BSTR RequiredAttendees ) = 0;
      virtual HRESULT __stdcall get_Resources (
        /*[out,retval]*/ BSTR * Resources ) = 0;
      virtual HRESULT __stdcall put_Resources (
        /*[in]*/ BSTR Resources ) = 0;
      virtual HRESULT __stdcall get_ResponseRequested (
        /*[out,retval]*/ VARIANT_BOOL * ResponseRequested ) = 0;
      virtual HRESULT __stdcall put_ResponseRequested (
        /*[in]*/ VARIANT_BOOL ResponseRequested ) = 0;
      virtual HRESULT __stdcall get_ResponseStatus (
        /*[out,retval]*/ enum OlResponseStatus * ResponseStatus ) = 0;
      virtual HRESULT __stdcall get_Start (
        /*[out,retval]*/ DATE * Start ) = 0;
      virtual HRESULT __stdcall put_Start (
        /*[in]*/ DATE Start ) = 0;
      virtual HRESULT __stdcall ClearRecurrencePattern ( ) = 0;
      virtual HRESULT __stdcall ForwardAsVcal (
        /*[out,retval]*/ struct _MailItem * * Item ) = 0;
      virtual HRESULT __stdcall GetRecurrencePattern (
        /*[out,retval]*/ struct RecurrencePattern * * RecurrencPattern ) = 0;
      virtual HRESULT __stdcall Respond (
        /*[in]*/ enum OlMeetingResponse Response,
        /*[in]*/ VARIANT fNoUI,
        /*[in]*/ VARIANT fAdditionalTextDialog,
        /*[out,retval]*/ struct _MeetingItem * * ResponseItem ) = 0;
      virtual HRESULT __stdcall Send ( ) = 0;
      virtual HRESULT __stdcall get_NetMeetingDocPathName (
        /*[out,retval]*/ BSTR * NetMeetingDocPathName ) = 0;
      virtual HRESULT __stdcall put_NetMeetingDocPathName (
        /*[in]*/ BSTR NetMeetingDocPathName ) = 0;
      virtual HRESULT __stdcall get_NetShowURL (
        /*[out,retval]*/ BSTR * NetShowURL ) = 0;
      virtual HRESULT __stdcall put_NetShowURL (
        /*[in]*/ BSTR NetShowURL ) = 0;
      virtual HRESULT __stdcall get_Links (
        /*[out,retval]*/ struct Links * * Links ) = 0;
      virtual HRESULT __stdcall get_ConferenceServerAllowExternal (
        /*[out,retval]*/ VARIANT_BOOL * ConferenceServerAllowExternal ) = 0;
      virtual HRESULT __stdcall put_ConferenceServerAllowExternal (
        /*[in]*/ VARIANT_BOOL ConferenceServerAllowExternal ) = 0;
      virtual HRESULT __stdcall get_ConferenceServerPassword (
        /*[out,retval]*/ BSTR * ConferenceServerPassword ) = 0;
      virtual HRESULT __stdcall put_ConferenceServerPassword (
        /*[in]*/ BSTR ConferenceServerPassword ) = 0;
      virtual HRESULT __stdcall get_ItemProperties (
        /*[out,retval]*/ struct ItemProperties * * ItemProperties ) = 0;
      virtual HRESULT __stdcall get_DownloadState (
        /*[out,retval]*/ enum OlDownloadState * DownloadState ) = 0;
      virtual HRESULT __stdcall ShowCategoriesDialog ( ) = 0;
      virtual HRESULT __stdcall get_InternetCodepage (
        /*[out,retval]*/ long * InternetCodepage ) = 0;
      virtual HRESULT __stdcall put_InternetCodepage (
        /*[in]*/ long InternetCodepage ) = 0;
      virtual HRESULT __stdcall get_MarkForDownload (
        /*[out,retval]*/ enum OlRemoteStatus * MarkForDownload ) = 0;
      virtual HRESULT __stdcall put_MarkForDownload (
        /*[in]*/ enum OlRemoteStatus MarkForDownload ) = 0;
      virtual HRESULT __stdcall get_IsConflict (
        /*[out,retval]*/ VARIANT_BOOL * IsConflict ) = 0;
      virtual HRESULT __stdcall get_MeetingWorkspaceURL (
        /*[out,retval]*/ BSTR * MeetingWorkspaceURL ) = 0;
      virtual HRESULT __stdcall get_AutoResolvedWinner (
        /*[out,retval]*/ VARIANT_BOOL * AutoResolvedWinner ) = 0;
      virtual HRESULT __stdcall get_Conflicts (
        /*[out,retval]*/ struct Conflicts * * Conflicts ) = 0;
      virtual HRESULT __stdcall get_PropertyAccessor (
        /*[out,retval]*/ struct _PropertyAccessor * * PropertyAccessor ) = 0;
      virtual HRESULT __stdcall get_SendUsingAccount (
        /*[out,retval]*/ struct _Account * * SendUsingAccount ) = 0;
      virtual HRESULT __stdcall put_SendUsingAccount (
        /*[in]*/ struct _Account * SendUsingAccount ) = 0;
      virtual HRESULT __stdcall get_GlobalAppointmentID (
        /*[out,retval]*/ BSTR * GlobalAppointmentID ) = 0;
      virtual HRESULT __stdcall get_ForceUpdateToAllAttendees (
        /*[out,retval]*/ VARIANT_BOOL * ForceUpdateToAllAttendees ) = 0;
      virtual HRESULT __stdcall put_ForceUpdateToAllAttendees (
        /*[in]*/ VARIANT_BOOL ForceUpdateToAllAttendees ) = 0;
      virtual HRESULT __stdcall get_StartUTC (
        /*[out,retval]*/ DATE * StartUTC ) = 0;
      virtual HRESULT __stdcall put_StartUTC (
        /*[in]*/ DATE StartUTC ) = 0;
      virtual HRESULT __stdcall get_EndUTC (
        /*[out,retval]*/ DATE * EndUTC ) = 0;
      virtual HRESULT __stdcall put_EndUTC (
        /*[in]*/ DATE EndUTC ) = 0;
      virtual HRESULT __stdcall get_StartInStartTimeZone (
        /*[out,retval]*/ DATE * StartInStartTimeZone ) = 0;
      virtual HRESULT __stdcall put_StartInStartTimeZone (
        /*[in]*/ DATE StartInStartTimeZone ) = 0;
      virtual HRESULT __stdcall get_EndInEndTimeZone (
        /*[out,retval]*/ DATE * EndInEndTimeZone ) = 0;
      virtual HRESULT __stdcall put_EndInEndTimeZone (
        /*[in]*/ DATE EndInEndTimeZone ) = 0;
      virtual HRESULT __stdcall get_StartTimeZone (
        /*[out,retval]*/ struct _TimeZone * * StartTimeZone ) = 0;
      virtual HRESULT __stdcall put_StartTimeZone (
        /*[in]*/ struct _TimeZone * StartTimeZone ) = 0;
      virtual HRESULT __stdcall get_EndTimeZone (
        /*[out,retval]*/ struct _TimeZone * * EndTimeZone ) = 0;
      virtual HRESULT __stdcall put_EndTimeZone (
        /*[in]*/ struct _TimeZone * EndTimeZone ) = 0;
      virtual HRESULT __stdcall GetConversation (
        /*[out,retval]*/ struct _Conversation * * Conversation ) = 0;
      virtual HRESULT __stdcall get_ConversationID (
        /*[out,retval]*/ BSTR * ConversationID ) = 0;
      virtual HRESULT __stdcall CopyTo (
        /*[in]*/ struct MAPIFolder * DestinationFolder,
        /*[in]*/ enum OlAppointmentCopyOptions CopyOptions,
        /*[out,retval]*/ struct _AppointmentItem * * Item ) = 0;
      virtual HRESULT __stdcall get_RTFBody (
        /*[out,retval]*/ VARIANT * RTFBody ) = 0;
      virtual HRESULT __stdcall put_RTFBody (
        /*[in]*/ VARIANT RTFBody ) = 0;
      virtual HRESULT __stdcall GetOrganizer (
        /*[out,retval]*/ struct AddressEntry * * Organizer ) = 0;
};

struct __declspec(uuid("00063062-0000-0000-c000-000000000046"))
_MeetingItem : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Actions (
        /*[out,retval]*/ struct Actions * * Actions ) = 0;
      virtual HRESULT __stdcall get_Attachments (
        /*[out,retval]*/ struct Attachments * * Attachments ) = 0;
      virtual HRESULT __stdcall get_BillingInformation (
        /*[out,retval]*/ BSTR * BillingInformation ) = 0;
      virtual HRESULT __stdcall put_BillingInformation (
        /*[in]*/ BSTR BillingInformation ) = 0;
      virtual HRESULT __stdcall get_Body (
        /*[out,retval]*/ BSTR * Body ) = 0;
      virtual HRESULT __stdcall put_Body (
        /*[in]*/ BSTR Body ) = 0;
      virtual HRESULT __stdcall get_Categories (
        /*[out,retval]*/ BSTR * Categories ) = 0;
      virtual HRESULT __stdcall put_Categories (
        /*[in]*/ BSTR Categories ) = 0;
      virtual HRESULT __stdcall get_Companies (
        /*[out,retval]*/ BSTR * Companies ) = 0;
      virtual HRESULT __stdcall put_Companies (
        /*[in]*/ BSTR Companies ) = 0;
      virtual HRESULT __stdcall get_ConversationIndex (
        /*[out,retval]*/ BSTR * ConversationIndex ) = 0;
      virtual HRESULT __stdcall get_ConversationTopic (
        /*[out,retval]*/ BSTR * ConversationTopic ) = 0;
      virtual HRESULT __stdcall get_CreationTime (
        /*[out,retval]*/ DATE * CreationTime ) = 0;
      virtual HRESULT __stdcall get_EntryID (
        /*[out,retval]*/ BSTR * EntryID ) = 0;
      virtual HRESULT __stdcall get_FormDescription (
        /*[out,retval]*/ struct FormDescription * * FormDescription ) = 0;
      virtual HRESULT __stdcall get_GetInspector (
        /*[out,retval]*/ struct _Inspector * * GetInspector ) = 0;
      virtual HRESULT __stdcall get_Importance (
        /*[out,retval]*/ enum OlImportance * Importance ) = 0;
      virtual HRESULT __stdcall put_Importance (
        /*[in]*/ enum OlImportance Importance ) = 0;
      virtual HRESULT __stdcall get_LastModificationTime (
        /*[out,retval]*/ DATE * LastModificationTime ) = 0;
      virtual HRESULT __stdcall get_MAPIOBJECT (
        /*[out,retval]*/ IUnknown * * MAPIOBJECT ) = 0;
      virtual HRESULT __stdcall get_MessageClass (
        /*[out,retval]*/ BSTR * MessageClass ) = 0;
      virtual HRESULT __stdcall put_MessageClass (
        /*[in]*/ BSTR MessageClass ) = 0;
      virtual HRESULT __stdcall get_Mileage (
        /*[out,retval]*/ BSTR * Mileage ) = 0;
      virtual HRESULT __stdcall put_Mileage (
        /*[in]*/ BSTR Mileage ) = 0;
      virtual HRESULT __stdcall get_NoAging (
        /*[out,retval]*/ VARIANT_BOOL * NoAging ) = 0;
      virtual HRESULT __stdcall put_NoAging (
        /*[in]*/ VARIANT_BOOL NoAging ) = 0;
      virtual HRESULT __stdcall get_OutlookInternalVersion (
        /*[out,retval]*/ long * OutlookInternalVersion ) = 0;
      virtual HRESULT __stdcall get_OutlookVersion (
        /*[out,retval]*/ BSTR * OutlookVersion ) = 0;
      virtual HRESULT __stdcall get_Saved (
        /*[out,retval]*/ VARIANT_BOOL * Saved ) = 0;
      virtual HRESULT __stdcall get_Sensitivity (
        /*[out,retval]*/ enum OlSensitivity * Sensitivity ) = 0;
      virtual HRESULT __stdcall put_Sensitivity (
        /*[in]*/ enum OlSensitivity Sensitivity ) = 0;
      virtual HRESULT __stdcall get_Size (
        /*[out,retval]*/ long * Size ) = 0;
      virtual HRESULT __stdcall get_Subject (
        /*[out,retval]*/ BSTR * Subject ) = 0;
      virtual HRESULT __stdcall put_Subject (
        /*[in]*/ BSTR Subject ) = 0;
      virtual HRESULT __stdcall get_UnRead (
        /*[out,retval]*/ VARIANT_BOOL * UnRead ) = 0;
      virtual HRESULT __stdcall put_UnRead (
        /*[in]*/ VARIANT_BOOL UnRead ) = 0;
      virtual HRESULT __stdcall get_UserProperties (
        /*[out,retval]*/ struct UserProperties * * UserProperties ) = 0;
      virtual HRESULT __stdcall Close (
        /*[in]*/ enum OlInspectorClose SaveMode ) = 0;
      virtual HRESULT __stdcall Copy (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Display (
        /*[in]*/ VARIANT Modal = vtMissing ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ struct MAPIFolder * DestFldr,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall PrintOut ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall SaveAs (
        /*[in]*/ BSTR Path,
        /*[in]*/ VARIANT Type = vtMissing ) = 0;
      virtual HRESULT __stdcall get_AutoForwarded (
        /*[out,retval]*/ VARIANT_BOOL * AutoForwarded ) = 0;
      virtual HRESULT __stdcall put_AutoForwarded (
        /*[in]*/ VARIANT_BOOL AutoForwarded ) = 0;
      virtual HRESULT __stdcall get_DeferredDeliveryTime (
        /*[out,retval]*/ DATE * DeferredDeliveryTime ) = 0;
      virtual HRESULT __stdcall put_DeferredDeliveryTime (
        /*[in]*/ DATE DeferredDeliveryTime ) = 0;
      virtual HRESULT __stdcall get_DeleteAfterSubmit (
        /*[out,retval]*/ VARIANT_BOOL * DeleteAfterSubmit ) = 0;
      virtual HRESULT __stdcall put_DeleteAfterSubmit (
        /*[in]*/ VARIANT_BOOL DeleteAfterSubmit ) = 0;
      virtual HRESULT __stdcall get_ExpiryTime (
        /*[out,retval]*/ DATE * ExpiryTime ) = 0;
      virtual HRESULT __stdcall put_ExpiryTime (
        /*[in]*/ DATE ExpiryTime ) = 0;
      virtual HRESULT __stdcall get_FlagDueBy (
        /*[out,retval]*/ DATE * FlagDueBy ) = 0;
      virtual HRESULT __stdcall put_FlagDueBy (
        /*[in]*/ DATE FlagDueBy ) = 0;
      virtual HRESULT __stdcall get_FlagRequest (
        /*[out,retval]*/ BSTR * FlagRequest ) = 0;
      virtual HRESULT __stdcall put_FlagRequest (
        /*[in]*/ BSTR FlagRequest ) = 0;
      virtual HRESULT __stdcall get_FlagStatus (
        /*[out,retval]*/ enum OlFlagStatus * FlagStatus ) = 0;
      virtual HRESULT __stdcall put_FlagStatus (
        /*[in]*/ enum OlFlagStatus FlagStatus ) = 0;
      virtual HRESULT __stdcall get_OriginatorDeliveryReportRequested (
        /*[out,retval]*/ VARIANT_BOOL * OriginatorDeliveryReportRequested ) = 0;
      virtual HRESULT __stdcall put_OriginatorDeliveryReportRequested (
        /*[in]*/ VARIANT_BOOL OriginatorDeliveryReportRequested ) = 0;
      virtual HRESULT __stdcall get_ReceivedTime (
        /*[out,retval]*/ DATE * ReceivedTime ) = 0;
      virtual HRESULT __stdcall put_ReceivedTime (
        /*[in]*/ DATE ReceivedTime ) = 0;
      virtual HRESULT __stdcall get_Recipients (
        /*[out,retval]*/ struct Recipients * * Recipients ) = 0;
      virtual HRESULT __stdcall get_ReminderSet (
        /*[out,retval]*/ VARIANT_BOOL * ReminderSet ) = 0;
      virtual HRESULT __stdcall put_ReminderSet (
        /*[in]*/ VARIANT_BOOL ReminderSet ) = 0;
      virtual HRESULT __stdcall get_ReminderTime (
        /*[out,retval]*/ DATE * ReminderTime ) = 0;
      virtual HRESULT __stdcall put_ReminderTime (
        /*[in]*/ DATE ReminderTime ) = 0;
      virtual HRESULT __stdcall get_ReplyRecipients (
        /*[out,retval]*/ struct Recipients * * ReplyRecipients ) = 0;
      virtual HRESULT __stdcall get_SaveSentMessageFolder (
        /*[out,retval]*/ struct MAPIFolder * * SaveSentMessageFolder ) = 0;
      virtual HRESULT __stdcall putref_SaveSentMessageFolder (
        /*[in]*/ struct MAPIFolder * SaveSentMessageFolder ) = 0;
      virtual HRESULT __stdcall get_SenderName (
        /*[out,retval]*/ BSTR * SenderName ) = 0;
      virtual HRESULT __stdcall get_Sent (
        /*[out,retval]*/ VARIANT_BOOL * Sent ) = 0;
      virtual HRESULT __stdcall get_SentOn (
        /*[out,retval]*/ DATE * SentOn ) = 0;
      virtual HRESULT __stdcall get_Submitted (
        /*[out,retval]*/ VARIANT_BOOL * Submitted ) = 0;
      virtual HRESULT __stdcall Forward (
        /*[out,retval]*/ struct _MeetingItem * * Item ) = 0;
      virtual HRESULT __stdcall GetAssociatedAppointment (
        /*[in]*/ VARIANT_BOOL AddToCalendar,
        /*[out,retval]*/ struct _AppointmentItem * * Item ) = 0;
      virtual HRESULT __stdcall Reply (
        /*[out,retval]*/ struct _MailItem * * Item ) = 0;
      virtual HRESULT __stdcall ReplyAll (
        /*[out,retval]*/ struct _MailItem * * Item ) = 0;
      virtual HRESULT __stdcall Send ( ) = 0;
      virtual HRESULT __stdcall get_Links (
        /*[out,retval]*/ struct Links * * Links ) = 0;
      virtual HRESULT __stdcall get_DownloadState (
        /*[out,retval]*/ enum OlDownloadState * DownloadState ) = 0;
      virtual HRESULT __stdcall ShowCategoriesDialog ( ) = 0;
      virtual HRESULT __stdcall get_ItemProperties (
        /*[out,retval]*/ struct ItemProperties * * ItemProperties ) = 0;
      virtual HRESULT __stdcall get_MarkForDownload (
        /*[out,retval]*/ enum OlRemoteStatus * MarkForDownload ) = 0;
      virtual HRESULT __stdcall put_MarkForDownload (
        /*[in]*/ enum OlRemoteStatus MarkForDownload ) = 0;
      virtual HRESULT __stdcall get_IsConflict (
        /*[out,retval]*/ VARIANT_BOOL * IsConflict ) = 0;
      virtual HRESULT __stdcall get_MeetingWorkspaceURL (
        /*[out,retval]*/ BSTR * MeetingWorkspaceURL ) = 0;
      virtual HRESULT __stdcall get_FlagIcon (
        /*[out,retval]*/ enum OlFlagIcon * FlagIcon ) = 0;
      virtual HRESULT __stdcall put_FlagIcon (
        /*[in]*/ enum OlFlagIcon FlagIcon ) = 0;
      virtual HRESULT __stdcall get_AutoResolvedWinner (
        /*[out,retval]*/ VARIANT_BOOL * AutoResolvedWinner ) = 0;
      virtual HRESULT __stdcall get_Conflicts (
        /*[out,retval]*/ struct Conflicts * * Conflicts ) = 0;
      virtual HRESULT __stdcall get_SenderEmailAddress (
        /*[out,retval]*/ BSTR * SenderEmailAddress ) = 0;
      virtual HRESULT __stdcall get_SenderEmailType (
        /*[out,retval]*/ BSTR * SenderEmailType ) = 0;
      virtual HRESULT __stdcall get_PropertyAccessor (
        /*[out,retval]*/ struct _PropertyAccessor * * PropertyAccessor ) = 0;
      virtual HRESULT __stdcall GetConversation (
        /*[out,retval]*/ struct _Conversation * * Conversation ) = 0;
      virtual HRESULT __stdcall get_ConversationID (
        /*[out,retval]*/ BSTR * ConversationID ) = 0;
      virtual HRESULT __stdcall get_SendUsingAccount (
        /*[out,retval]*/ struct _Account * * SendUsingAccount ) = 0;
      virtual HRESULT __stdcall put_SendUsingAccount (
        /*[in]*/ struct _Account * SendUsingAccount ) = 0;
      virtual HRESULT __stdcall get_IsLatestVersion (
        /*[out,retval]*/ VARIANT_BOOL * IsLatestVersion ) = 0;
      virtual HRESULT __stdcall get_RTFBody (
        /*[out,retval]*/ VARIANT * RTFBody ) = 0;
      virtual HRESULT __stdcall put_RTFBody (
        /*[in]*/ VARIANT RTFBody ) = 0;
      virtual HRESULT __stdcall get_RetentionExpirationDate (
        /*[out,retval]*/ DATE * RetentionExpirationDate ) = 0;
      virtual HRESULT __stdcall get_RetentionPolicyName (
        /*[out,retval]*/ BSTR * RetentionPolicyName ) = 0;
};

struct __declspec(uuid("00063020-0000-0000-c000-000000000046"))
_DocumentItem : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Actions (
        /*[out,retval]*/ struct Actions * * Actions ) = 0;
      virtual HRESULT __stdcall get_Attachments (
        /*[out,retval]*/ struct Attachments * * Attachments ) = 0;
      virtual HRESULT __stdcall get_BillingInformation (
        /*[out,retval]*/ BSTR * BillingInformation ) = 0;
      virtual HRESULT __stdcall put_BillingInformation (
        /*[in]*/ BSTR BillingInformation ) = 0;
      virtual HRESULT __stdcall get_Body (
        /*[out,retval]*/ BSTR * Body ) = 0;
      virtual HRESULT __stdcall put_Body (
        /*[in]*/ BSTR Body ) = 0;
      virtual HRESULT __stdcall get_Categories (
        /*[out,retval]*/ BSTR * Categories ) = 0;
      virtual HRESULT __stdcall put_Categories (
        /*[in]*/ BSTR Categories ) = 0;
      virtual HRESULT __stdcall get_Companies (
        /*[out,retval]*/ BSTR * Companies ) = 0;
      virtual HRESULT __stdcall put_Companies (
        /*[in]*/ BSTR Companies ) = 0;
      virtual HRESULT __stdcall get_ConversationIndex (
        /*[out,retval]*/ BSTR * ConversationIndex ) = 0;
      virtual HRESULT __stdcall get_ConversationTopic (
        /*[out,retval]*/ BSTR * ConversationTopic ) = 0;
      virtual HRESULT __stdcall get_CreationTime (
        /*[out,retval]*/ DATE * CreationTime ) = 0;
      virtual HRESULT __stdcall get_EntryID (
        /*[out,retval]*/ BSTR * EntryID ) = 0;
      virtual HRESULT __stdcall get_FormDescription (
        /*[out,retval]*/ struct FormDescription * * FormDescription ) = 0;
      virtual HRESULT __stdcall get_GetInspector (
        /*[out,retval]*/ struct _Inspector * * GetInspector ) = 0;
      virtual HRESULT __stdcall get_Importance (
        /*[out,retval]*/ enum OlImportance * Importance ) = 0;
      virtual HRESULT __stdcall put_Importance (
        /*[in]*/ enum OlImportance Importance ) = 0;
      virtual HRESULT __stdcall get_LastModificationTime (
        /*[out,retval]*/ DATE * LastModificationTime ) = 0;
      virtual HRESULT __stdcall get_MAPIOBJECT (
        /*[out,retval]*/ IUnknown * * MAPIOBJECT ) = 0;
      virtual HRESULT __stdcall get_MessageClass (
        /*[out,retval]*/ BSTR * MessageClass ) = 0;
      virtual HRESULT __stdcall put_MessageClass (
        /*[in]*/ BSTR MessageClass ) = 0;
      virtual HRESULT __stdcall get_Mileage (
        /*[out,retval]*/ BSTR * Mileage ) = 0;
      virtual HRESULT __stdcall put_Mileage (
        /*[in]*/ BSTR Mileage ) = 0;
      virtual HRESULT __stdcall get_NoAging (
        /*[out,retval]*/ VARIANT_BOOL * NoAging ) = 0;
      virtual HRESULT __stdcall put_NoAging (
        /*[in]*/ VARIANT_BOOL NoAging ) = 0;
      virtual HRESULT __stdcall get_OutlookInternalVersion (
        /*[out,retval]*/ long * OutlookInternalVersion ) = 0;
      virtual HRESULT __stdcall get_OutlookVersion (
        /*[out,retval]*/ BSTR * OutlookVersion ) = 0;
      virtual HRESULT __stdcall get_Saved (
        /*[out,retval]*/ VARIANT_BOOL * Saved ) = 0;
      virtual HRESULT __stdcall get_Sensitivity (
        /*[out,retval]*/ enum OlSensitivity * Sensitivity ) = 0;
      virtual HRESULT __stdcall put_Sensitivity (
        /*[in]*/ enum OlSensitivity Sensitivity ) = 0;
      virtual HRESULT __stdcall get_Size (
        /*[out,retval]*/ long * Size ) = 0;
      virtual HRESULT __stdcall get_Subject (
        /*[out,retval]*/ BSTR * Subject ) = 0;
      virtual HRESULT __stdcall put_Subject (
        /*[in]*/ BSTR Subject ) = 0;
      virtual HRESULT __stdcall get_UnRead (
        /*[out,retval]*/ VARIANT_BOOL * UnRead ) = 0;
      virtual HRESULT __stdcall put_UnRead (
        /*[in]*/ VARIANT_BOOL UnRead ) = 0;
      virtual HRESULT __stdcall get_UserProperties (
        /*[out,retval]*/ struct UserProperties * * UserProperties ) = 0;
      virtual HRESULT __stdcall Close (
        /*[in]*/ enum OlInspectorClose SaveMode ) = 0;
      virtual HRESULT __stdcall Copy (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Display (
        /*[in]*/ VARIANT Modal = vtMissing ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ struct MAPIFolder * DestFldr,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall PrintOut ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall SaveAs (
        /*[in]*/ BSTR Path,
        /*[in]*/ VARIANT Type = vtMissing ) = 0;
      virtual HRESULT __stdcall get_Links (
        /*[out,retval]*/ struct Links * * Links ) = 0;
      virtual HRESULT __stdcall get_DownloadState (
        /*[out,retval]*/ enum OlDownloadState * DownloadState ) = 0;
      virtual HRESULT __stdcall ShowCategoriesDialog ( ) = 0;
      virtual HRESULT __stdcall get_ItemProperties (
        /*[out,retval]*/ struct ItemProperties * * ItemProperties ) = 0;
      virtual HRESULT __stdcall get_MarkForDownload (
        /*[out,retval]*/ enum OlRemoteStatus * MarkForDownload ) = 0;
      virtual HRESULT __stdcall put_MarkForDownload (
        /*[in]*/ enum OlRemoteStatus MarkForDownload ) = 0;
      virtual HRESULT __stdcall get_IsConflict (
        /*[out,retval]*/ VARIANT_BOOL * IsConflict ) = 0;
      virtual HRESULT __stdcall get_AutoResolvedWinner (
        /*[out,retval]*/ VARIANT_BOOL * AutoResolvedWinner ) = 0;
      virtual HRESULT __stdcall get_Conflicts (
        /*[out,retval]*/ struct Conflicts * * Conflicts ) = 0;
      virtual HRESULT __stdcall get_PropertyAccessor (
        /*[out,retval]*/ struct _PropertyAccessor * * PropertyAccessor ) = 0;
};

struct __declspec(uuid("00063025-0000-0000-c000-000000000046"))
_NoteItem : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Body (
        /*[out,retval]*/ BSTR * Body ) = 0;
      virtual HRESULT __stdcall put_Body (
        /*[in]*/ BSTR Body ) = 0;
      virtual HRESULT __stdcall get_Categories (
        /*[out,retval]*/ BSTR * Categories ) = 0;
      virtual HRESULT __stdcall put_Categories (
        /*[in]*/ BSTR Categories ) = 0;
      virtual HRESULT __stdcall get_Color (
        /*[out,retval]*/ enum OlNoteColor * Color ) = 0;
      virtual HRESULT __stdcall put_Color (
        /*[in]*/ enum OlNoteColor Color ) = 0;
      virtual HRESULT __stdcall get_CreationTime (
        /*[out,retval]*/ DATE * CreationTime ) = 0;
      virtual HRESULT __stdcall get_EntryID (
        /*[out,retval]*/ BSTR * EntryID ) = 0;
      virtual HRESULT __stdcall get_GetInspector (
        /*[out,retval]*/ struct _Inspector * * GetInspector ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ long * Height ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ long Height ) = 0;
      virtual HRESULT __stdcall get_LastModificationTime (
        /*[out,retval]*/ DATE * LastModificationTime ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ long * Left ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ long Left ) = 0;
      virtual HRESULT __stdcall get_MessageClass (
        /*[out,retval]*/ BSTR * MessageClass ) = 0;
      virtual HRESULT __stdcall put_MessageClass (
        /*[in]*/ BSTR MessageClass ) = 0;
      virtual HRESULT __stdcall get_Saved (
        /*[out,retval]*/ VARIANT_BOOL * Saved ) = 0;
      virtual HRESULT __stdcall get_Size (
        /*[out,retval]*/ long * Size ) = 0;
      virtual HRESULT __stdcall get_Subject (
        /*[out,retval]*/ BSTR * Subject ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ long * Top ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ long Top ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ long * Width ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ long Width ) = 0;
      virtual HRESULT __stdcall Close (
        /*[in]*/ enum OlInspectorClose SaveMode ) = 0;
      virtual HRESULT __stdcall Copy (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Display (
        /*[in]*/ VARIANT Modal = vtMissing ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ struct MAPIFolder * DestFldr,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall PrintOut ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall SaveAs (
        /*[in]*/ BSTR Path,
        /*[in]*/ VARIANT Type = vtMissing ) = 0;
      virtual HRESULT __stdcall get_Links (
        /*[out,retval]*/ struct Links * * Links ) = 0;
      virtual HRESULT __stdcall get_DownloadState (
        /*[out,retval]*/ enum OlDownloadState * DownloadState ) = 0;
      virtual HRESULT __stdcall get_ItemProperties (
        /*[out,retval]*/ struct ItemProperties * * ItemProperties ) = 0;
      virtual HRESULT __stdcall get_MarkForDownload (
        /*[out,retval]*/ enum OlRemoteStatus * MarkForDownload ) = 0;
      virtual HRESULT __stdcall put_MarkForDownload (
        /*[in]*/ enum OlRemoteStatus MarkForDownload ) = 0;
      virtual HRESULT __stdcall get_IsConflict (
        /*[out,retval]*/ VARIANT_BOOL * IsConflict ) = 0;
      virtual HRESULT __stdcall get_AutoResolvedWinner (
        /*[out,retval]*/ VARIANT_BOOL * AutoResolvedWinner ) = 0;
      virtual HRESULT __stdcall get_Conflicts (
        /*[out,retval]*/ struct Conflicts * * Conflicts ) = 0;
      virtual HRESULT __stdcall get_PropertyAccessor (
        /*[out,retval]*/ struct _PropertyAccessor * * PropertyAccessor ) = 0;
};

struct __declspec(uuid("000630f2-0000-0000-c000-000000000046"))
_NavigationFolder : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Folder (
        /*[out,retval]*/ struct MAPIFolder * * Folder ) = 0;
      virtual HRESULT __stdcall get_IsSelected (
        /*[out,retval]*/ VARIANT_BOOL * IsSelected ) = 0;
      virtual HRESULT __stdcall put_IsSelected (
        /*[in]*/ VARIANT_BOOL IsSelected ) = 0;
      virtual HRESULT __stdcall get_IsSideBySide (
        /*[out,retval]*/ VARIANT_BOOL * IsSideBySide ) = 0;
      virtual HRESULT __stdcall put_IsSideBySide (
        /*[in]*/ VARIANT_BOOL IsSideBySide ) = 0;
      virtual HRESULT __stdcall get_Position (
        /*[out,retval]*/ long * Position ) = 0;
      virtual HRESULT __stdcall put_Position (
        /*[in]*/ long Position ) = 0;
      virtual HRESULT __stdcall get_IsRemovable (
        /*[out,retval]*/ VARIANT_BOOL * IsRemovable ) = 0;
      virtual HRESULT __stdcall get_DisplayName (
        /*[out,retval]*/ BSTR * DisplayName ) = 0;
};

struct __declspec(uuid("000630f1-0000-0000-c000-000000000046"))
_NavigationFolders : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _NavigationFolder * * Item ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ struct MAPIFolder * Folder,
        /*[out,retval]*/ struct _NavigationFolder * * NavigationFolder ) = 0;
      virtual HRESULT __stdcall Remove (
        /*[in]*/ struct _NavigationFolder * RemovableFolder ) = 0;
};

struct __declspec(uuid("000630ff-0000-0000-c000-000000000046"))
_SolutionsModule : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_NavigationModuleType (
        /*[out,retval]*/ enum OlNavigationModuleType * NavigationModuleType ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall get_Position (
        /*[out,retval]*/ long * Position ) = 0;
      virtual HRESULT __stdcall put_Position (
        /*[in]*/ long Position ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * Visible ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL Visible ) = 0;
      virtual HRESULT __stdcall AddSolution (
        /*[in]*/ struct MAPIFolder * Solution,
        /*[in]*/ enum OlSolutionScope Scope ) = 0;
};

struct __declspec(uuid("000630fe-0000-0000-c000-000000000046"))
_MobileItem : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Actions (
        /*[out,retval]*/ struct Actions * * Actions ) = 0;
      virtual HRESULT __stdcall get_Attachments (
        /*[out,retval]*/ struct Attachments * * Attachments ) = 0;
      virtual HRESULT __stdcall get_BillingInformation (
        /*[out,retval]*/ BSTR * BillingInformation ) = 0;
      virtual HRESULT __stdcall put_BillingInformation (
        /*[in]*/ BSTR BillingInformation ) = 0;
      virtual HRESULT __stdcall get_Body (
        /*[out,retval]*/ BSTR * Body ) = 0;
      virtual HRESULT __stdcall put_Body (
        /*[in]*/ BSTR Body ) = 0;
      virtual HRESULT __stdcall get_Categories (
        /*[out,retval]*/ BSTR * Categories ) = 0;
      virtual HRESULT __stdcall put_Categories (
        /*[in]*/ BSTR Categories ) = 0;
      virtual HRESULT __stdcall get_Companies (
        /*[out,retval]*/ BSTR * Companies ) = 0;
      virtual HRESULT __stdcall put_Companies (
        /*[in]*/ BSTR Companies ) = 0;
      virtual HRESULT __stdcall get_ConversationIndex (
        /*[out,retval]*/ BSTR * ConversationIndex ) = 0;
      virtual HRESULT __stdcall get_ConversationTopic (
        /*[out,retval]*/ BSTR * ConversationTopic ) = 0;
      virtual HRESULT __stdcall get_CreationTime (
        /*[out,retval]*/ DATE * CreationTime ) = 0;
      virtual HRESULT __stdcall get_EntryID (
        /*[out,retval]*/ BSTR * EntryID ) = 0;
      virtual HRESULT __stdcall get_FormDescription (
        /*[out,retval]*/ struct FormDescription * * FormDescription ) = 0;
      virtual HRESULT __stdcall get_GetInspector (
        /*[out,retval]*/ struct _Inspector * * GetInspector ) = 0;
      virtual HRESULT __stdcall get_Importance (
        /*[out,retval]*/ enum OlImportance * Importance ) = 0;
      virtual HRESULT __stdcall put_Importance (
        /*[in]*/ enum OlImportance Importance ) = 0;
      virtual HRESULT __stdcall get_LastModificationTime (
        /*[out,retval]*/ DATE * LastModificationTime ) = 0;
      virtual HRESULT __stdcall get_MAPIOBJECT (
        /*[out,retval]*/ IUnknown * * MAPIOBJECT ) = 0;
      virtual HRESULT __stdcall get_MessageClass (
        /*[out,retval]*/ BSTR * MessageClass ) = 0;
      virtual HRESULT __stdcall put_MessageClass (
        /*[in]*/ BSTR MessageClass ) = 0;
      virtual HRESULT __stdcall get_Mileage (
        /*[out,retval]*/ BSTR * Mileage ) = 0;
      virtual HRESULT __stdcall put_Mileage (
        /*[in]*/ BSTR Mileage ) = 0;
      virtual HRESULT __stdcall get_NoAging (
        /*[out,retval]*/ VARIANT_BOOL * NoAging ) = 0;
      virtual HRESULT __stdcall put_NoAging (
        /*[in]*/ VARIANT_BOOL NoAging ) = 0;
      virtual HRESULT __stdcall get_OutlookInternalVersion (
        /*[out,retval]*/ long * OutlookInternalVersion ) = 0;
      virtual HRESULT __stdcall get_OutlookVersion (
        /*[out,retval]*/ BSTR * OutlookVersion ) = 0;
      virtual HRESULT __stdcall get_Saved (
        /*[out,retval]*/ VARIANT_BOOL * Saved ) = 0;
      virtual HRESULT __stdcall get_Sensitivity (
        /*[out,retval]*/ enum OlSensitivity * Sensitivity ) = 0;
      virtual HRESULT __stdcall put_Sensitivity (
        /*[in]*/ enum OlSensitivity Sensitivity ) = 0;
      virtual HRESULT __stdcall get_Size (
        /*[out,retval]*/ long * Size ) = 0;
      virtual HRESULT __stdcall get_Subject (
        /*[out,retval]*/ BSTR * Subject ) = 0;
      virtual HRESULT __stdcall put_Subject (
        /*[in]*/ BSTR Subject ) = 0;
      virtual HRESULT __stdcall get_UnRead (
        /*[out,retval]*/ VARIANT_BOOL * UnRead ) = 0;
      virtual HRESULT __stdcall put_UnRead (
        /*[in]*/ VARIANT_BOOL UnRead ) = 0;
      virtual HRESULT __stdcall get_UserProperties (
        /*[out,retval]*/ struct UserProperties * * UserProperties ) = 0;
      virtual HRESULT __stdcall Close (
        /*[in]*/ enum OlInspectorClose SaveMode ) = 0;
      virtual HRESULT __stdcall Copy (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Display (
        /*[in]*/ VARIANT Modal = vtMissing ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ struct MAPIFolder * DestFldr,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall PrintOut ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall SaveAs (
        /*[in]*/ BSTR Path,
        /*[in]*/ VARIANT Type = vtMissing ) = 0;
      virtual HRESULT __stdcall get_HTMLBody (
        /*[out,retval]*/ BSTR * HTMLBody ) = 0;
      virtual HRESULT __stdcall put_HTMLBody (
        /*[in]*/ BSTR HTMLBody ) = 0;
      virtual HRESULT __stdcall get_MobileFormat (
        /*[out,retval]*/ enum OlMobileFormat * MobileFormat ) = 0;
      virtual HRESULT __stdcall get_SMILBody (
        /*[out,retval]*/ BSTR * SMILBody ) = 0;
      virtual HRESULT __stdcall put_SMILBody (
        /*[in]*/ BSTR SMILBody ) = 0;
      virtual HRESULT __stdcall Reply (
        /*[out,retval]*/ struct _MobileItem * * Item ) = 0;
      virtual HRESULT __stdcall ReplyAll (
        /*[out,retval]*/ struct _MobileItem * * Item ) = 0;
      virtual HRESULT __stdcall Send (
        /*[in]*/ VARIANT_BOOL ForceSend ) = 0;
      virtual HRESULT __stdcall get_Recipients (
        /*[out,retval]*/ struct Recipients * * Recipients ) = 0;
      virtual HRESULT __stdcall get_To (
        /*[out,retval]*/ BSTR * To ) = 0;
      virtual HRESULT __stdcall put_To (
        /*[in]*/ BSTR To ) = 0;
      virtual HRESULT __stdcall Forward (
        /*[out,retval]*/ struct _MobileItem * * Item ) = 0;
      virtual HRESULT __stdcall get_ReplyRecipientNames (
        /*[out,retval]*/ BSTR * ReplyRecipientNames ) = 0;
      virtual HRESULT __stdcall get_ReplyRecipients (
        /*[out,retval]*/ struct Recipients * * ReplyRecipients ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall get_Submitted (
        /*[out,retval]*/ VARIANT_BOOL * Submitted ) = 0;
      virtual HRESULT __stdcall get_ItemProperties (
        /*[out,retval]*/ struct ItemProperties * * ItemProperties ) = 0;
      virtual HRESULT __stdcall get_ReceivedTime (
        /*[out,retval]*/ DATE * ReceivedTime ) = 0;
      virtual HRESULT __stdcall get_SendUsingAccount (
        /*[out,retval]*/ struct _Account * * SendUsingAccount ) = 0;
      virtual HRESULT __stdcall put_SendUsingAccount (
        /*[in]*/ struct _Account * SendUsingAccount ) = 0;
      virtual HRESULT __stdcall get_Sent (
        /*[out,retval]*/ VARIANT_BOOL * Sent ) = 0;
      virtual HRESULT __stdcall get_SentOn (
        /*[out,retval]*/ DATE * SentOn ) = 0;
      virtual HRESULT __stdcall get_PropertyAccessor (
        /*[out,retval]*/ struct _PropertyAccessor * * PropertyAccessor ) = 0;
      virtual HRESULT __stdcall get_ReceivedByEntryID (
        /*[out,retval]*/ BSTR * ReceivedByEntryID ) = 0;
      virtual HRESULT __stdcall get_ReceivedByName (
        /*[out,retval]*/ BSTR * ReceivedByName ) = 0;
      virtual HRESULT __stdcall get_SenderEmailAddress (
        /*[out,retval]*/ BSTR * SenderEmailAddress ) = 0;
      virtual HRESULT __stdcall get_SenderEmailType (
        /*[out,retval]*/ BSTR * SenderEmailType ) = 0;
      virtual HRESULT __stdcall get_SenderName (
        /*[out,retval]*/ BSTR * SenderName ) = 0;
};

struct __declspec(uuid("00063022-0000-0000-c000-000000000046"))
_JournalItem : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Actions (
        /*[out,retval]*/ struct Actions * * Actions ) = 0;
      virtual HRESULT __stdcall get_Attachments (
        /*[out,retval]*/ struct Attachments * * Attachments ) = 0;
      virtual HRESULT __stdcall get_BillingInformation (
        /*[out,retval]*/ BSTR * BillingInformation ) = 0;
      virtual HRESULT __stdcall put_BillingInformation (
        /*[in]*/ BSTR BillingInformation ) = 0;
      virtual HRESULT __stdcall get_Body (
        /*[out,retval]*/ BSTR * Body ) = 0;
      virtual HRESULT __stdcall put_Body (
        /*[in]*/ BSTR Body ) = 0;
      virtual HRESULT __stdcall get_Categories (
        /*[out,retval]*/ BSTR * Categories ) = 0;
      virtual HRESULT __stdcall put_Categories (
        /*[in]*/ BSTR Categories ) = 0;
      virtual HRESULT __stdcall get_Companies (
        /*[out,retval]*/ BSTR * Companies ) = 0;
      virtual HRESULT __stdcall put_Companies (
        /*[in]*/ BSTR Companies ) = 0;
      virtual HRESULT __stdcall get_ConversationIndex (
        /*[out,retval]*/ BSTR * ConversationIndex ) = 0;
      virtual HRESULT __stdcall get_ConversationTopic (
        /*[out,retval]*/ BSTR * ConversationTopic ) = 0;
      virtual HRESULT __stdcall get_CreationTime (
        /*[out,retval]*/ DATE * CreationTime ) = 0;
      virtual HRESULT __stdcall get_EntryID (
        /*[out,retval]*/ BSTR * EntryID ) = 0;
      virtual HRESULT __stdcall get_FormDescription (
        /*[out,retval]*/ struct FormDescription * * FormDescription ) = 0;
      virtual HRESULT __stdcall get_GetInspector (
        /*[out,retval]*/ struct _Inspector * * GetInspector ) = 0;
      virtual HRESULT __stdcall get_Importance (
        /*[out,retval]*/ enum OlImportance * Importance ) = 0;
      virtual HRESULT __stdcall put_Importance (
        /*[in]*/ enum OlImportance Importance ) = 0;
      virtual HRESULT __stdcall get_LastModificationTime (
        /*[out,retval]*/ DATE * LastModificationTime ) = 0;
      virtual HRESULT __stdcall get_MAPIOBJECT (
        /*[out,retval]*/ IUnknown * * MAPIOBJECT ) = 0;
      virtual HRESULT __stdcall get_MessageClass (
        /*[out,retval]*/ BSTR * MessageClass ) = 0;
      virtual HRESULT __stdcall put_MessageClass (
        /*[in]*/ BSTR MessageClass ) = 0;
      virtual HRESULT __stdcall get_Mileage (
        /*[out,retval]*/ BSTR * Mileage ) = 0;
      virtual HRESULT __stdcall put_Mileage (
        /*[in]*/ BSTR Mileage ) = 0;
      virtual HRESULT __stdcall get_NoAging (
        /*[out,retval]*/ VARIANT_BOOL * NoAging ) = 0;
      virtual HRESULT __stdcall put_NoAging (
        /*[in]*/ VARIANT_BOOL NoAging ) = 0;
      virtual HRESULT __stdcall get_OutlookInternalVersion (
        /*[out,retval]*/ long * OutlookInternalVersion ) = 0;
      virtual HRESULT __stdcall get_OutlookVersion (
        /*[out,retval]*/ BSTR * OutlookVersion ) = 0;
      virtual HRESULT __stdcall get_Saved (
        /*[out,retval]*/ VARIANT_BOOL * Saved ) = 0;
      virtual HRESULT __stdcall get_Sensitivity (
        /*[out,retval]*/ enum OlSensitivity * Sensitivity ) = 0;
      virtual HRESULT __stdcall put_Sensitivity (
        /*[in]*/ enum OlSensitivity Sensitivity ) = 0;
      virtual HRESULT __stdcall get_Size (
        /*[out,retval]*/ long * Size ) = 0;
      virtual HRESULT __stdcall get_Subject (
        /*[out,retval]*/ BSTR * Subject ) = 0;
      virtual HRESULT __stdcall put_Subject (
        /*[in]*/ BSTR Subject ) = 0;
      virtual HRESULT __stdcall get_UnRead (
        /*[out,retval]*/ VARIANT_BOOL * UnRead ) = 0;
      virtual HRESULT __stdcall put_UnRead (
        /*[in]*/ VARIANT_BOOL UnRead ) = 0;
      virtual HRESULT __stdcall get_UserProperties (
        /*[out,retval]*/ struct UserProperties * * UserProperties ) = 0;
      virtual HRESULT __stdcall Close (
        /*[in]*/ enum OlInspectorClose SaveMode ) = 0;
      virtual HRESULT __stdcall Copy (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Display (
        /*[in]*/ VARIANT Modal = vtMissing ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ struct MAPIFolder * DestFldr,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall PrintOut ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall SaveAs (
        /*[in]*/ BSTR Path,
        /*[in]*/ VARIANT Type = vtMissing ) = 0;
      virtual HRESULT __stdcall get_ContactNames (
        /*[out,retval]*/ BSTR * ContactNames ) = 0;
      virtual HRESULT __stdcall put_ContactNames (
        /*[in]*/ BSTR ContactNames ) = 0;
      virtual HRESULT __stdcall get_DocPosted (
        /*[out,retval]*/ VARIANT_BOOL * DocPosted ) = 0;
      virtual HRESULT __stdcall put_DocPosted (
        /*[in]*/ VARIANT_BOOL DocPosted ) = 0;
      virtual HRESULT __stdcall get_DocPrinted (
        /*[out,retval]*/ VARIANT_BOOL * DocPrinted ) = 0;
      virtual HRESULT __stdcall put_DocPrinted (
        /*[in]*/ VARIANT_BOOL DocPrinted ) = 0;
      virtual HRESULT __stdcall get_DocRouted (
        /*[out,retval]*/ VARIANT_BOOL * DocRouted ) = 0;
      virtual HRESULT __stdcall put_DocRouted (
        /*[in]*/ VARIANT_BOOL DocRouted ) = 0;
      virtual HRESULT __stdcall get_DocSaved (
        /*[out,retval]*/ VARIANT_BOOL * DocSaved ) = 0;
      virtual HRESULT __stdcall put_DocSaved (
        /*[in]*/ VARIANT_BOOL DocSaved ) = 0;
      virtual HRESULT __stdcall get_Duration (
        /*[out,retval]*/ long * Duration ) = 0;
      virtual HRESULT __stdcall put_Duration (
        /*[in]*/ long Duration ) = 0;
      virtual HRESULT __stdcall get_End (
        /*[out,retval]*/ DATE * End ) = 0;
      virtual HRESULT __stdcall put_End (
        /*[in]*/ DATE End ) = 0;
      virtual HRESULT __stdcall get_Type (
        /*[out,retval]*/ BSTR * Type ) = 0;
      virtual HRESULT __stdcall put_Type (
        /*[in]*/ BSTR Type ) = 0;
      virtual HRESULT __stdcall get_Recipients (
        /*[out,retval]*/ struct Recipients * * Recipients ) = 0;
      virtual HRESULT __stdcall get_Start (
        /*[out,retval]*/ DATE * Start ) = 0;
      virtual HRESULT __stdcall put_Start (
        /*[in]*/ DATE Start ) = 0;
      virtual HRESULT __stdcall Forward (
        /*[out,retval]*/ struct _MailItem * * Item ) = 0;
      virtual HRESULT __stdcall Reply (
        /*[out,retval]*/ struct _MailItem * * Item ) = 0;
      virtual HRESULT __stdcall ReplyAll (
        /*[out,retval]*/ struct _MailItem * * Item ) = 0;
      virtual HRESULT __stdcall StartTimer ( ) = 0;
      virtual HRESULT __stdcall StopTimer ( ) = 0;
      virtual HRESULT __stdcall get_Links (
        /*[out,retval]*/ struct Links * * Links ) = 0;
      virtual HRESULT __stdcall get_DownloadState (
        /*[out,retval]*/ enum OlDownloadState * DownloadState ) = 0;
      virtual HRESULT __stdcall ShowCategoriesDialog ( ) = 0;
      virtual HRESULT __stdcall get_ItemProperties (
        /*[out,retval]*/ struct ItemProperties * * ItemProperties ) = 0;
      virtual HRESULT __stdcall get_MarkForDownload (
        /*[out,retval]*/ enum OlRemoteStatus * MarkForDownload ) = 0;
      virtual HRESULT __stdcall put_MarkForDownload (
        /*[in]*/ enum OlRemoteStatus MarkForDownload ) = 0;
      virtual HRESULT __stdcall get_IsConflict (
        /*[out,retval]*/ VARIANT_BOOL * IsConflict ) = 0;
      virtual HRESULT __stdcall get_AutoResolvedWinner (
        /*[out,retval]*/ VARIANT_BOOL * AutoResolvedWinner ) = 0;
      virtual HRESULT __stdcall get_Conflicts (
        /*[out,retval]*/ struct Conflicts * * Conflicts ) = 0;
      virtual HRESULT __stdcall get_PropertyAccessor (
        /*[out,retval]*/ struct _PropertyAccessor * * PropertyAccessor ) = 0;
      virtual HRESULT __stdcall GetConversation (
        /*[out,retval]*/ struct _Conversation * * Conversation ) = 0;
      virtual HRESULT __stdcall get_ConversationID (
        /*[out,retval]*/ BSTR * ConversationID ) = 0;
};

struct __declspec(uuid("00063024-0000-0000-c000-000000000046"))
_PostItem : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Actions (
        /*[out,retval]*/ struct Actions * * Actions ) = 0;
      virtual HRESULT __stdcall get_Attachments (
        /*[out,retval]*/ struct Attachments * * Attachments ) = 0;
      virtual HRESULT __stdcall get_BillingInformation (
        /*[out,retval]*/ BSTR * BillingInformation ) = 0;
      virtual HRESULT __stdcall put_BillingInformation (
        /*[in]*/ BSTR BillingInformation ) = 0;
      virtual HRESULT __stdcall get_Body (
        /*[out,retval]*/ BSTR * Body ) = 0;
      virtual HRESULT __stdcall put_Body (
        /*[in]*/ BSTR Body ) = 0;
      virtual HRESULT __stdcall get_Categories (
        /*[out,retval]*/ BSTR * Categories ) = 0;
      virtual HRESULT __stdcall put_Categories (
        /*[in]*/ BSTR Categories ) = 0;
      virtual HRESULT __stdcall get_Companies (
        /*[out,retval]*/ BSTR * Companies ) = 0;
      virtual HRESULT __stdcall put_Companies (
        /*[in]*/ BSTR Companies ) = 0;
      virtual HRESULT __stdcall get_ConversationIndex (
        /*[out,retval]*/ BSTR * ConversationIndex ) = 0;
      virtual HRESULT __stdcall get_ConversationTopic (
        /*[out,retval]*/ BSTR * ConversationTopic ) = 0;
      virtual HRESULT __stdcall get_CreationTime (
        /*[out,retval]*/ DATE * CreationTime ) = 0;
      virtual HRESULT __stdcall get_EntryID (
        /*[out,retval]*/ BSTR * EntryID ) = 0;
      virtual HRESULT __stdcall get_FormDescription (
        /*[out,retval]*/ struct FormDescription * * FormDescription ) = 0;
      virtual HRESULT __stdcall get_GetInspector (
        /*[out,retval]*/ struct _Inspector * * GetInspector ) = 0;
      virtual HRESULT __stdcall get_Importance (
        /*[out,retval]*/ enum OlImportance * Importance ) = 0;
      virtual HRESULT __stdcall put_Importance (
        /*[in]*/ enum OlImportance Importance ) = 0;
      virtual HRESULT __stdcall get_LastModificationTime (
        /*[out,retval]*/ DATE * LastModificationTime ) = 0;
      virtual HRESULT __stdcall get_MAPIOBJECT (
        /*[out,retval]*/ IUnknown * * MAPIOBJECT ) = 0;
      virtual HRESULT __stdcall get_MessageClass (
        /*[out,retval]*/ BSTR * MessageClass ) = 0;
      virtual HRESULT __stdcall put_MessageClass (
        /*[in]*/ BSTR MessageClass ) = 0;
      virtual HRESULT __stdcall get_Mileage (
        /*[out,retval]*/ BSTR * Mileage ) = 0;
      virtual HRESULT __stdcall put_Mileage (
        /*[in]*/ BSTR Mileage ) = 0;
      virtual HRESULT __stdcall get_NoAging (
        /*[out,retval]*/ VARIANT_BOOL * NoAging ) = 0;
      virtual HRESULT __stdcall put_NoAging (
        /*[in]*/ VARIANT_BOOL NoAging ) = 0;
      virtual HRESULT __stdcall get_OutlookInternalVersion (
        /*[out,retval]*/ long * OutlookInternalVersion ) = 0;
      virtual HRESULT __stdcall get_OutlookVersion (
        /*[out,retval]*/ BSTR * OutlookVersion ) = 0;
      virtual HRESULT __stdcall get_Saved (
        /*[out,retval]*/ VARIANT_BOOL * Saved ) = 0;
      virtual HRESULT __stdcall get_Sensitivity (
        /*[out,retval]*/ enum OlSensitivity * Sensitivity ) = 0;
      virtual HRESULT __stdcall put_Sensitivity (
        /*[in]*/ enum OlSensitivity Sensitivity ) = 0;
      virtual HRESULT __stdcall get_Size (
        /*[out,retval]*/ long * Size ) = 0;
      virtual HRESULT __stdcall get_Subject (
        /*[out,retval]*/ BSTR * Subject ) = 0;
      virtual HRESULT __stdcall put_Subject (
        /*[in]*/ BSTR Subject ) = 0;
      virtual HRESULT __stdcall get_UnRead (
        /*[out,retval]*/ VARIANT_BOOL * UnRead ) = 0;
      virtual HRESULT __stdcall put_UnRead (
        /*[in]*/ VARIANT_BOOL UnRead ) = 0;
      virtual HRESULT __stdcall get_UserProperties (
        /*[out,retval]*/ struct UserProperties * * UserProperties ) = 0;
      virtual HRESULT __stdcall Close (
        /*[in]*/ enum OlInspectorClose SaveMode ) = 0;
      virtual HRESULT __stdcall Copy (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Display (
        /*[in]*/ VARIANT Modal = vtMissing ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ struct MAPIFolder * DestFldr,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall PrintOut ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall SaveAs (
        /*[in]*/ BSTR Path,
        /*[in]*/ VARIANT Type = vtMissing ) = 0;
      virtual HRESULT __stdcall get_ExpiryTime (
        /*[out,retval]*/ DATE * ExpiryTime ) = 0;
      virtual HRESULT __stdcall put_ExpiryTime (
        /*[in]*/ DATE ExpiryTime ) = 0;
      virtual HRESULT __stdcall get_HTMLBody (
        /*[out,retval]*/ BSTR * HTMLBody ) = 0;
      virtual HRESULT __stdcall put_HTMLBody (
        /*[in]*/ BSTR HTMLBody ) = 0;
      virtual HRESULT __stdcall get_ReceivedTime (
        /*[out,retval]*/ DATE * ReceivedTime ) = 0;
      virtual HRESULT __stdcall get_SenderName (
        /*[out,retval]*/ BSTR * SenderName ) = 0;
      virtual HRESULT __stdcall get_SentOn (
        /*[out,retval]*/ DATE * SentOn ) = 0;
      virtual HRESULT __stdcall ClearConversationIndex ( ) = 0;
      virtual HRESULT __stdcall Forward (
        /*[out,retval]*/ struct _MailItem * * Item ) = 0;
      virtual HRESULT __stdcall Post ( ) = 0;
      virtual HRESULT __stdcall Reply (
        /*[out,retval]*/ struct _MailItem * * Item ) = 0;
      virtual HRESULT __stdcall get_Links (
        /*[out,retval]*/ struct Links * * Links ) = 0;
      virtual HRESULT __stdcall get_ItemProperties (
        /*[out,retval]*/ struct ItemProperties * * ItemProperties ) = 0;
      virtual HRESULT __stdcall get_BodyFormat (
        /*[out,retval]*/ enum OlBodyFormat * BodyFormat ) = 0;
      virtual HRESULT __stdcall put_BodyFormat (
        /*[in]*/ enum OlBodyFormat BodyFormat ) = 0;
      virtual HRESULT __stdcall get_DownloadState (
        /*[out,retval]*/ enum OlDownloadState * DownloadState ) = 0;
      virtual HRESULT __stdcall ShowCategoriesDialog ( ) = 0;
      virtual HRESULT __stdcall get_InternetCodepage (
        /*[out,retval]*/ long * InternetCodepage ) = 0;
      virtual HRESULT __stdcall put_InternetCodepage (
        /*[in]*/ long InternetCodepage ) = 0;
      virtual HRESULT __stdcall get_MarkForDownload (
        /*[out,retval]*/ enum OlRemoteStatus * MarkForDownload ) = 0;
      virtual HRESULT __stdcall put_MarkForDownload (
        /*[in]*/ enum OlRemoteStatus MarkForDownload ) = 0;
      virtual HRESULT __stdcall SetACLs (
        /*[out,retval]*/ VARIANT_BOOL * AllOkay ) = 0;
      virtual HRESULT __stdcall get_IsConflict (
        /*[out,retval]*/ VARIANT_BOOL * IsConflict ) = 0;
      virtual HRESULT __stdcall get_AutoResolvedWinner (
        /*[out,retval]*/ VARIANT_BOOL * AutoResolvedWinner ) = 0;
      virtual HRESULT __stdcall get_Conflicts (
        /*[out,retval]*/ struct Conflicts * * Conflicts ) = 0;
      virtual HRESULT __stdcall get_SenderEmailAddress (
        /*[out,retval]*/ BSTR * SenderEmailAddress ) = 0;
      virtual HRESULT __stdcall get_SenderEmailType (
        /*[out,retval]*/ BSTR * SenderEmailType ) = 0;
      virtual HRESULT __stdcall get_PropertyAccessor (
        /*[out,retval]*/ struct _PropertyAccessor * * PropertyAccessor ) = 0;
      virtual HRESULT __stdcall get_TaskSubject (
        /*[out,retval]*/ BSTR * TaskSubject ) = 0;
      virtual HRESULT __stdcall put_TaskSubject (
        /*[in]*/ BSTR TaskSubject ) = 0;
      virtual HRESULT __stdcall get_TaskDueDate (
        /*[out,retval]*/ DATE * TaskDueDate ) = 0;
      virtual HRESULT __stdcall put_TaskDueDate (
        /*[in]*/ DATE TaskDueDate ) = 0;
      virtual HRESULT __stdcall get_TaskStartDate (
        /*[out,retval]*/ DATE * TaskStartDate ) = 0;
      virtual HRESULT __stdcall put_TaskStartDate (
        /*[in]*/ DATE TaskStartDate ) = 0;
      virtual HRESULT __stdcall get_TaskCompletedDate (
        /*[out,retval]*/ DATE * TaskCompletedDate ) = 0;
      virtual HRESULT __stdcall put_TaskCompletedDate (
        /*[in]*/ DATE TaskCompletedDate ) = 0;
      virtual HRESULT __stdcall get_ToDoTaskOrdinal (
        /*[out,retval]*/ DATE * ToDoTaskOrdinal ) = 0;
      virtual HRESULT __stdcall put_ToDoTaskOrdinal (
        /*[in]*/ DATE ToDoTaskOrdinal ) = 0;
      virtual HRESULT __stdcall get_ReminderOverrideDefault (
        /*[out,retval]*/ VARIANT_BOOL * ReminderOverrideDefault ) = 0;
      virtual HRESULT __stdcall put_ReminderOverrideDefault (
        /*[in]*/ VARIANT_BOOL ReminderOverrideDefault ) = 0;
      virtual HRESULT __stdcall get_ReminderPlaySound (
        /*[out,retval]*/ VARIANT_BOOL * ReminderPlaySound ) = 0;
      virtual HRESULT __stdcall put_ReminderPlaySound (
        /*[in]*/ VARIANT_BOOL ReminderPlaySound ) = 0;
      virtual HRESULT __stdcall get_ReminderSet (
        /*[out,retval]*/ VARIANT_BOOL * ReminderSet ) = 0;
      virtual HRESULT __stdcall put_ReminderSet (
        /*[in]*/ VARIANT_BOOL ReminderSet ) = 0;
      virtual HRESULT __stdcall get_ReminderSoundFile (
        /*[out,retval]*/ BSTR * ReminderSoundFile ) = 0;
      virtual HRESULT __stdcall put_ReminderSoundFile (
        /*[in]*/ BSTR ReminderSoundFile ) = 0;
      virtual HRESULT __stdcall get_ReminderTime (
        /*[out,retval]*/ DATE * ReminderTime ) = 0;
      virtual HRESULT __stdcall put_ReminderTime (
        /*[in]*/ DATE ReminderTime ) = 0;
      virtual HRESULT __stdcall MarkAsTask (
        /*[in]*/ enum OlMarkInterval MarkInterval ) = 0;
      virtual HRESULT __stdcall ClearTaskFlag ( ) = 0;
      virtual HRESULT __stdcall get_IsMarkedAsTask (
        /*[out,retval]*/ VARIANT_BOOL * IsMarkedAsTask ) = 0;
      virtual HRESULT __stdcall GetConversation (
        /*[out,retval]*/ struct _Conversation * * Conversation ) = 0;
      virtual HRESULT __stdcall get_ConversationID (
        /*[out,retval]*/ BSTR * ConversationID ) = 0;
      virtual HRESULT __stdcall get_RTFBody (
        /*[out,retval]*/ VARIANT * RTFBody ) = 0;
      virtual HRESULT __stdcall put_RTFBody (
        /*[in]*/ VARIANT RTFBody ) = 0;
};

struct __declspec(uuid("00063035-0000-0000-c000-000000000046"))
_TaskItem : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Actions (
        /*[out,retval]*/ struct Actions * * Actions ) = 0;
      virtual HRESULT __stdcall get_Attachments (
        /*[out,retval]*/ struct Attachments * * Attachments ) = 0;
      virtual HRESULT __stdcall get_BillingInformation (
        /*[out,retval]*/ BSTR * BillingInformation ) = 0;
      virtual HRESULT __stdcall put_BillingInformation (
        /*[in]*/ BSTR BillingInformation ) = 0;
      virtual HRESULT __stdcall get_Body (
        /*[out,retval]*/ BSTR * Body ) = 0;
      virtual HRESULT __stdcall put_Body (
        /*[in]*/ BSTR Body ) = 0;
      virtual HRESULT __stdcall get_Categories (
        /*[out,retval]*/ BSTR * Categories ) = 0;
      virtual HRESULT __stdcall put_Categories (
        /*[in]*/ BSTR Categories ) = 0;
      virtual HRESULT __stdcall get_Companies (
        /*[out,retval]*/ BSTR * Companies ) = 0;
      virtual HRESULT __stdcall put_Companies (
        /*[in]*/ BSTR Companies ) = 0;
      virtual HRESULT __stdcall get_ConversationIndex (
        /*[out,retval]*/ BSTR * ConversationIndex ) = 0;
      virtual HRESULT __stdcall get_ConversationTopic (
        /*[out,retval]*/ BSTR * ConversationTopic ) = 0;
      virtual HRESULT __stdcall get_CreationTime (
        /*[out,retval]*/ DATE * CreationTime ) = 0;
      virtual HRESULT __stdcall get_EntryID (
        /*[out,retval]*/ BSTR * EntryID ) = 0;
      virtual HRESULT __stdcall get_FormDescription (
        /*[out,retval]*/ struct FormDescription * * FormDescription ) = 0;
      virtual HRESULT __stdcall get_GetInspector (
        /*[out,retval]*/ struct _Inspector * * GetInspector ) = 0;
      virtual HRESULT __stdcall get_Importance (
        /*[out,retval]*/ enum OlImportance * Importance ) = 0;
      virtual HRESULT __stdcall put_Importance (
        /*[in]*/ enum OlImportance Importance ) = 0;
      virtual HRESULT __stdcall get_LastModificationTime (
        /*[out,retval]*/ DATE * LastModificationTime ) = 0;
      virtual HRESULT __stdcall get_MAPIOBJECT (
        /*[out,retval]*/ IUnknown * * MAPIOBJECT ) = 0;
      virtual HRESULT __stdcall get_MessageClass (
        /*[out,retval]*/ BSTR * MessageClass ) = 0;
      virtual HRESULT __stdcall put_MessageClass (
        /*[in]*/ BSTR MessageClass ) = 0;
      virtual HRESULT __stdcall get_Mileage (
        /*[out,retval]*/ BSTR * Mileage ) = 0;
      virtual HRESULT __stdcall put_Mileage (
        /*[in]*/ BSTR Mileage ) = 0;
      virtual HRESULT __stdcall get_NoAging (
        /*[out,retval]*/ VARIANT_BOOL * NoAging ) = 0;
      virtual HRESULT __stdcall put_NoAging (
        /*[in]*/ VARIANT_BOOL NoAging ) = 0;
      virtual HRESULT __stdcall get_OutlookInternalVersion (
        /*[out,retval]*/ long * OutlookInternalVersion ) = 0;
      virtual HRESULT __stdcall get_OutlookVersion (
        /*[out,retval]*/ BSTR * OutlookVersion ) = 0;
      virtual HRESULT __stdcall get_Saved (
        /*[out,retval]*/ VARIANT_BOOL * Saved ) = 0;
      virtual HRESULT __stdcall get_Sensitivity (
        /*[out,retval]*/ enum OlSensitivity * Sensitivity ) = 0;
      virtual HRESULT __stdcall put_Sensitivity (
        /*[in]*/ enum OlSensitivity Sensitivity ) = 0;
      virtual HRESULT __stdcall get_Size (
        /*[out,retval]*/ long * Size ) = 0;
      virtual HRESULT __stdcall get_Subject (
        /*[out,retval]*/ BSTR * Subject ) = 0;
      virtual HRESULT __stdcall put_Subject (
        /*[in]*/ BSTR Subject ) = 0;
      virtual HRESULT __stdcall get_UnRead (
        /*[out,retval]*/ VARIANT_BOOL * UnRead ) = 0;
      virtual HRESULT __stdcall put_UnRead (
        /*[in]*/ VARIANT_BOOL UnRead ) = 0;
      virtual HRESULT __stdcall get_UserProperties (
        /*[out,retval]*/ struct UserProperties * * UserProperties ) = 0;
      virtual HRESULT __stdcall Close (
        /*[in]*/ enum OlInspectorClose SaveMode ) = 0;
      virtual HRESULT __stdcall Copy (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Display (
        /*[in]*/ VARIANT Modal = vtMissing ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ struct MAPIFolder * DestFldr,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall PrintOut ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall SaveAs (
        /*[in]*/ BSTR Path,
        /*[in]*/ VARIANT Type = vtMissing ) = 0;
      virtual HRESULT __stdcall get_ActualWork (
        /*[out,retval]*/ long * ActualWork ) = 0;
      virtual HRESULT __stdcall put_ActualWork (
        /*[in]*/ long ActualWork ) = 0;
      virtual HRESULT __stdcall get_CardData (
        /*[out,retval]*/ BSTR * CardData ) = 0;
      virtual HRESULT __stdcall put_CardData (
        /*[in]*/ BSTR CardData ) = 0;
      virtual HRESULT __stdcall get_Complete (
        /*[out,retval]*/ VARIANT_BOOL * Complete ) = 0;
      virtual HRESULT __stdcall put_Complete (
        /*[in]*/ VARIANT_BOOL Complete ) = 0;
      virtual HRESULT __stdcall get_Contacts (
        /*[out,retval]*/ BSTR * Contacts ) = 0;
      virtual HRESULT __stdcall put_Contacts (
        /*[in]*/ BSTR Contacts ) = 0;
      virtual HRESULT __stdcall get_ContactNames (
        /*[out,retval]*/ BSTR * ContactNames ) = 0;
      virtual HRESULT __stdcall put_ContactNames (
        /*[in]*/ BSTR ContactNames ) = 0;
      virtual HRESULT __stdcall get_DateCompleted (
        /*[out,retval]*/ DATE * DateCompleted ) = 0;
      virtual HRESULT __stdcall put_DateCompleted (
        /*[in]*/ DATE DateCompleted ) = 0;
      virtual HRESULT __stdcall get_DelegationState (
        /*[out,retval]*/ enum OlTaskDelegationState * DelegationState ) = 0;
      virtual HRESULT __stdcall get_Delegator (
        /*[out,retval]*/ BSTR * Delegator ) = 0;
      virtual HRESULT __stdcall get_DueDate (
        /*[out,retval]*/ DATE * DueDate ) = 0;
      virtual HRESULT __stdcall put_DueDate (
        /*[in]*/ DATE DueDate ) = 0;
      virtual HRESULT __stdcall get_IsRecurring (
        /*[out,retval]*/ VARIANT_BOOL * IsRecurring ) = 0;
      virtual HRESULT __stdcall get_Ordinal (
        /*[out,retval]*/ long * Ordinal ) = 0;
      virtual HRESULT __stdcall put_Ordinal (
        /*[in]*/ long Ordinal ) = 0;
      virtual HRESULT __stdcall get_Owner (
        /*[out,retval]*/ BSTR * Owner ) = 0;
      virtual HRESULT __stdcall put_Owner (
        /*[in]*/ BSTR Owner ) = 0;
      virtual HRESULT __stdcall get_Ownership (
        /*[out,retval]*/ enum OlTaskOwnership * Ownership ) = 0;
      virtual HRESULT __stdcall get_PercentComplete (
        /*[out,retval]*/ long * PercentComplete ) = 0;
      virtual HRESULT __stdcall put_PercentComplete (
        /*[in]*/ long PercentComplete ) = 0;
      virtual HRESULT __stdcall get_Recipients (
        /*[out,retval]*/ struct Recipients * * Recipients ) = 0;
      virtual HRESULT __stdcall get_ReminderTime (
        /*[out,retval]*/ DATE * ReminderTime ) = 0;
      virtual HRESULT __stdcall put_ReminderTime (
        /*[in]*/ DATE ReminderTime ) = 0;
      virtual HRESULT __stdcall get_ReminderOverrideDefault (
        /*[out,retval]*/ VARIANT_BOOL * ReminderOverrideDefault ) = 0;
      virtual HRESULT __stdcall put_ReminderOverrideDefault (
        /*[in]*/ VARIANT_BOOL ReminderOverrideDefault ) = 0;
      virtual HRESULT __stdcall get_ReminderPlaySound (
        /*[out,retval]*/ VARIANT_BOOL * ReminderPlaySound ) = 0;
      virtual HRESULT __stdcall put_ReminderPlaySound (
        /*[in]*/ VARIANT_BOOL ReminderPlaySound ) = 0;
      virtual HRESULT __stdcall get_ReminderSet (
        /*[out,retval]*/ VARIANT_BOOL * ReminderSet ) = 0;
      virtual HRESULT __stdcall put_ReminderSet (
        /*[in]*/ VARIANT_BOOL ReminderSet ) = 0;
      virtual HRESULT __stdcall get_ReminderSoundFile (
        /*[out,retval]*/ BSTR * ReminderSoundFile ) = 0;
      virtual HRESULT __stdcall put_ReminderSoundFile (
        /*[in]*/ BSTR ReminderSoundFile ) = 0;
      virtual HRESULT __stdcall get_ResponseState (
        /*[out,retval]*/ enum OlTaskResponse * ResponseState ) = 0;
      virtual HRESULT __stdcall get_Role (
        /*[out,retval]*/ BSTR * Role ) = 0;
      virtual HRESULT __stdcall put_Role (
        /*[in]*/ BSTR Role ) = 0;
      virtual HRESULT __stdcall get_SchedulePlusPriority (
        /*[out,retval]*/ BSTR * SchedulePlusPriority ) = 0;
      virtual HRESULT __stdcall put_SchedulePlusPriority (
        /*[in]*/ BSTR SchedulePlusPriority ) = 0;
      virtual HRESULT __stdcall get_StartDate (
        /*[out,retval]*/ DATE * StartDate ) = 0;
      virtual HRESULT __stdcall put_StartDate (
        /*[in]*/ DATE StartDate ) = 0;
      virtual HRESULT __stdcall get_Status (
        /*[out,retval]*/ enum OlTaskStatus * Status ) = 0;
      virtual HRESULT __stdcall put_Status (
        /*[in]*/ enum OlTaskStatus Status ) = 0;
      virtual HRESULT __stdcall get_StatusOnCompletionRecipients (
        /*[out,retval]*/ BSTR * StatusOnCompletionRecipients ) = 0;
      virtual HRESULT __stdcall put_StatusOnCompletionRecipients (
        /*[in]*/ BSTR StatusOnCompletionRecipients ) = 0;
      virtual HRESULT __stdcall get_StatusUpdateRecipients (
        /*[out,retval]*/ BSTR * StatusUpdateRecipients ) = 0;
      virtual HRESULT __stdcall put_StatusUpdateRecipients (
        /*[in]*/ BSTR StatusUpdateRecipients ) = 0;
      virtual HRESULT __stdcall get_TeamTask (
        /*[out,retval]*/ VARIANT_BOOL * TeamTask ) = 0;
      virtual HRESULT __stdcall put_TeamTask (
        /*[in]*/ VARIANT_BOOL TeamTask ) = 0;
      virtual HRESULT __stdcall get_TotalWork (
        /*[out,retval]*/ long * TotalWork ) = 0;
      virtual HRESULT __stdcall put_TotalWork (
        /*[in]*/ long TotalWork ) = 0;
      virtual HRESULT __stdcall Assign (
        /*[out,retval]*/ struct _TaskItem * * Item ) = 0;
      virtual HRESULT __stdcall CancelResponseState ( ) = 0;
      virtual HRESULT __stdcall ClearRecurrencePattern ( ) = 0;
      virtual HRESULT __stdcall GetRecurrencePattern (
        /*[out,retval]*/ struct RecurrencePattern * * RecurrencPattern ) = 0;
      virtual HRESULT __stdcall MarkComplete ( ) = 0;
      virtual HRESULT __stdcall Respond (
        /*[in]*/ enum OlTaskResponse Response,
        /*[in]*/ VARIANT fNoUI,
        /*[in]*/ VARIANT fAdditionalTextDialog,
        /*[out,retval]*/ struct _TaskItem * * Item ) = 0;
      virtual HRESULT __stdcall Send ( ) = 0;
      virtual HRESULT __stdcall SkipRecurrence (
        /*[out,retval]*/ VARIANT_BOOL * flg ) = 0;
      virtual HRESULT __stdcall StatusReport (
        /*[out,retval]*/ IDispatch * * StatusReport ) = 0;
      virtual HRESULT __stdcall get_Links (
        /*[out,retval]*/ struct Links * * Links ) = 0;
      virtual HRESULT __stdcall get_DownloadState (
        /*[out,retval]*/ enum OlDownloadState * DownloadState ) = 0;
      virtual HRESULT __stdcall ShowCategoriesDialog ( ) = 0;
      virtual HRESULT __stdcall get_ItemProperties (
        /*[out,retval]*/ struct ItemProperties * * ItemProperties ) = 0;
      virtual HRESULT __stdcall get_InternetCodepage (
        /*[out,retval]*/ long * InternetCodepage ) = 0;
      virtual HRESULT __stdcall put_InternetCodepage (
        /*[in]*/ long InternetCodepage ) = 0;
      virtual HRESULT __stdcall get_MarkForDownload (
        /*[out,retval]*/ enum OlRemoteStatus * MarkForDownload ) = 0;
      virtual HRESULT __stdcall put_MarkForDownload (
        /*[in]*/ enum OlRemoteStatus MarkForDownload ) = 0;
      virtual HRESULT __stdcall get_IsConflict (
        /*[out,retval]*/ VARIANT_BOOL * IsConflict ) = 0;
      virtual HRESULT __stdcall get_AutoResolvedWinner (
        /*[out,retval]*/ VARIANT_BOOL * AutoResolvedWinner ) = 0;
      virtual HRESULT __stdcall get_Conflicts (
        /*[out,retval]*/ struct Conflicts * * Conflicts ) = 0;
      virtual HRESULT __stdcall get_PropertyAccessor (
        /*[out,retval]*/ struct _PropertyAccessor * * PropertyAccessor ) = 0;
      virtual HRESULT __stdcall get_SendUsingAccount (
        /*[out,retval]*/ struct _Account * * SendUsingAccount ) = 0;
      virtual HRESULT __stdcall put_SendUsingAccount (
        /*[in]*/ struct _Account * SendUsingAccount ) = 0;
      virtual HRESULT __stdcall get_ToDoTaskOrdinal (
        /*[out,retval]*/ DATE * ToDoTaskOrdinal ) = 0;
      virtual HRESULT __stdcall put_ToDoTaskOrdinal (
        /*[in]*/ DATE ToDoTaskOrdinal ) = 0;
      virtual HRESULT __stdcall GetConversation (
        /*[out,retval]*/ struct _Conversation * * Conversation ) = 0;
      virtual HRESULT __stdcall get_ConversationID (
        /*[out,retval]*/ BSTR * ConversationID ) = 0;
      virtual HRESULT __stdcall get_RTFBody (
        /*[out,retval]*/ VARIANT * RTFBody ) = 0;
      virtual HRESULT __stdcall put_RTFBody (
        /*[in]*/ VARIANT RTFBody ) = 0;
};

struct __declspec(uuid("00063081-0000-0000-c000-000000000046"))
_DistListItem : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Actions (
        /*[out,retval]*/ struct Actions * * Actions ) = 0;
      virtual HRESULT __stdcall get_Attachments (
        /*[out,retval]*/ struct Attachments * * Attachments ) = 0;
      virtual HRESULT __stdcall get_BillingInformation (
        /*[out,retval]*/ BSTR * BillingInformation ) = 0;
      virtual HRESULT __stdcall put_BillingInformation (
        /*[in]*/ BSTR BillingInformation ) = 0;
      virtual HRESULT __stdcall get_Body (
        /*[out,retval]*/ BSTR * Body ) = 0;
      virtual HRESULT __stdcall put_Body (
        /*[in]*/ BSTR Body ) = 0;
      virtual HRESULT __stdcall get_Categories (
        /*[out,retval]*/ BSTR * Categories ) = 0;
      virtual HRESULT __stdcall put_Categories (
        /*[in]*/ BSTR Categories ) = 0;
      virtual HRESULT __stdcall get_Companies (
        /*[out,retval]*/ BSTR * Companies ) = 0;
      virtual HRESULT __stdcall put_Companies (
        /*[in]*/ BSTR Companies ) = 0;
      virtual HRESULT __stdcall get_ConversationIndex (
        /*[out,retval]*/ BSTR * ConversationIndex ) = 0;
      virtual HRESULT __stdcall get_ConversationTopic (
        /*[out,retval]*/ BSTR * ConversationTopic ) = 0;
      virtual HRESULT __stdcall get_CreationTime (
        /*[out,retval]*/ DATE * CreationTime ) = 0;
      virtual HRESULT __stdcall get_EntryID (
        /*[out,retval]*/ BSTR * EntryID ) = 0;
      virtual HRESULT __stdcall get_FormDescription (
        /*[out,retval]*/ struct FormDescription * * FormDescription ) = 0;
      virtual HRESULT __stdcall get_GetInspector (
        /*[out,retval]*/ struct _Inspector * * GetInspector ) = 0;
      virtual HRESULT __stdcall get_Importance (
        /*[out,retval]*/ enum OlImportance * Importance ) = 0;
      virtual HRESULT __stdcall put_Importance (
        /*[in]*/ enum OlImportance Importance ) = 0;
      virtual HRESULT __stdcall get_LastModificationTime (
        /*[out,retval]*/ DATE * LastModificationTime ) = 0;
      virtual HRESULT __stdcall get_MAPIOBJECT (
        /*[out,retval]*/ IUnknown * * MAPIOBJECT ) = 0;
      virtual HRESULT __stdcall get_MessageClass (
        /*[out,retval]*/ BSTR * MessageClass ) = 0;
      virtual HRESULT __stdcall put_MessageClass (
        /*[in]*/ BSTR MessageClass ) = 0;
      virtual HRESULT __stdcall get_Mileage (
        /*[out,retval]*/ BSTR * Mileage ) = 0;
      virtual HRESULT __stdcall put_Mileage (
        /*[in]*/ BSTR Mileage ) = 0;
      virtual HRESULT __stdcall get_NoAging (
        /*[out,retval]*/ VARIANT_BOOL * NoAging ) = 0;
      virtual HRESULT __stdcall put_NoAging (
        /*[in]*/ VARIANT_BOOL NoAging ) = 0;
      virtual HRESULT __stdcall get_OutlookInternalVersion (
        /*[out,retval]*/ long * OutlookInternalVersion ) = 0;
      virtual HRESULT __stdcall get_OutlookVersion (
        /*[out,retval]*/ BSTR * OutlookVersion ) = 0;
      virtual HRESULT __stdcall get_Saved (
        /*[out,retval]*/ VARIANT_BOOL * Saved ) = 0;
      virtual HRESULT __stdcall get_Sensitivity (
        /*[out,retval]*/ enum OlSensitivity * Sensitivity ) = 0;
      virtual HRESULT __stdcall put_Sensitivity (
        /*[in]*/ enum OlSensitivity Sensitivity ) = 0;
      virtual HRESULT __stdcall get_Size (
        /*[out,retval]*/ long * Size ) = 0;
      virtual HRESULT __stdcall get_Subject (
        /*[out,retval]*/ BSTR * Subject ) = 0;
      virtual HRESULT __stdcall put_Subject (
        /*[in]*/ BSTR Subject ) = 0;
      virtual HRESULT __stdcall get_UnRead (
        /*[out,retval]*/ VARIANT_BOOL * UnRead ) = 0;
      virtual HRESULT __stdcall put_UnRead (
        /*[in]*/ VARIANT_BOOL UnRead ) = 0;
      virtual HRESULT __stdcall get_UserProperties (
        /*[out,retval]*/ struct UserProperties * * UserProperties ) = 0;
      virtual HRESULT __stdcall Close (
        /*[in]*/ enum OlInspectorClose SaveMode ) = 0;
      virtual HRESULT __stdcall Copy (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Display (
        /*[in]*/ VARIANT Modal = vtMissing ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ struct MAPIFolder * DestFldr,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall PrintOut ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall SaveAs (
        /*[in]*/ BSTR Path,
        /*[in]*/ VARIANT Type = vtMissing ) = 0;
      virtual HRESULT __stdcall get_DLName (
        /*[out,retval]*/ BSTR * DLName ) = 0;
      virtual HRESULT __stdcall put_DLName (
        /*[in]*/ BSTR DLName ) = 0;
      virtual HRESULT __stdcall get_MemberCount (
        /*[out,retval]*/ long * MemberCount ) = 0;
      virtual HRESULT __stdcall get_CheckSum (
        /*[out,retval]*/ long * CheckSum ) = 0;
      virtual HRESULT __stdcall get_Members (
        /*[out,retval]*/ VARIANT * Members ) = 0;
      virtual HRESULT __stdcall put_Members (
        /*[in]*/ VARIANT Members ) = 0;
      virtual HRESULT __stdcall get_OneOffMembers (
        /*[out,retval]*/ VARIANT * OneOffMembers ) = 0;
      virtual HRESULT __stdcall put_OneOffMembers (
        /*[in]*/ VARIANT OneOffMembers ) = 0;
      virtual HRESULT __stdcall get_Links (
        /*[out,retval]*/ struct Links * * Links ) = 0;
      virtual HRESULT __stdcall AddMembers (
        /*[in]*/ struct Recipients * Recipients ) = 0;
      virtual HRESULT __stdcall RemoveMembers (
        /*[in]*/ struct Recipients * Recipients ) = 0;
      virtual HRESULT __stdcall GetMember (
        /*[in]*/ long Index,
        /*[out,retval]*/ struct Recipient * * Recipient ) = 0;
      virtual HRESULT __stdcall get_DownloadState (
        /*[out,retval]*/ enum OlDownloadState * DownloadState ) = 0;
      virtual HRESULT __stdcall ShowCategoriesDialog ( ) = 0;
      virtual HRESULT __stdcall AddMember (
        /*[in]*/ struct Recipient * Recipient ) = 0;
      virtual HRESULT __stdcall RemoveMember (
        /*[in]*/ struct Recipient * Recipient ) = 0;
      virtual HRESULT __stdcall get_ItemProperties (
        /*[out,retval]*/ struct ItemProperties * * ItemProperties ) = 0;
      virtual HRESULT __stdcall get_MarkForDownload (
        /*[out,retval]*/ enum OlRemoteStatus * MarkForDownload ) = 0;
      virtual HRESULT __stdcall put_MarkForDownload (
        /*[in]*/ enum OlRemoteStatus MarkForDownload ) = 0;
      virtual HRESULT __stdcall get_IsConflict (
        /*[out,retval]*/ VARIANT_BOOL * IsConflict ) = 0;
      virtual HRESULT __stdcall get_AutoResolvedWinner (
        /*[out,retval]*/ VARIANT_BOOL * AutoResolvedWinner ) = 0;
      virtual HRESULT __stdcall get_Conflicts (
        /*[out,retval]*/ struct Conflicts * * Conflicts ) = 0;
      virtual HRESULT __stdcall get_PropertyAccessor (
        /*[out,retval]*/ struct _PropertyAccessor * * PropertyAccessor ) = 0;
      virtual HRESULT __stdcall get_TaskSubject (
        /*[out,retval]*/ BSTR * TaskSubject ) = 0;
      virtual HRESULT __stdcall put_TaskSubject (
        /*[in]*/ BSTR TaskSubject ) = 0;
      virtual HRESULT __stdcall get_TaskDueDate (
        /*[out,retval]*/ DATE * TaskDueDate ) = 0;
      virtual HRESULT __stdcall put_TaskDueDate (
        /*[in]*/ DATE TaskDueDate ) = 0;
      virtual HRESULT __stdcall get_TaskStartDate (
        /*[out,retval]*/ DATE * TaskStartDate ) = 0;
      virtual HRESULT __stdcall put_TaskStartDate (
        /*[in]*/ DATE TaskStartDate ) = 0;
      virtual HRESULT __stdcall get_TaskCompletedDate (
        /*[out,retval]*/ DATE * TaskCompletedDate ) = 0;
      virtual HRESULT __stdcall put_TaskCompletedDate (
        /*[in]*/ DATE TaskCompletedDate ) = 0;
      virtual HRESULT __stdcall get_ToDoTaskOrdinal (
        /*[out,retval]*/ DATE * ToDoTaskOrdinal ) = 0;
      virtual HRESULT __stdcall put_ToDoTaskOrdinal (
        /*[in]*/ DATE ToDoTaskOrdinal ) = 0;
      virtual HRESULT __stdcall get_ReminderOverrideDefault (
        /*[out,retval]*/ VARIANT_BOOL * ReminderOverrideDefault ) = 0;
      virtual HRESULT __stdcall put_ReminderOverrideDefault (
        /*[in]*/ VARIANT_BOOL ReminderOverrideDefault ) = 0;
      virtual HRESULT __stdcall get_ReminderPlaySound (
        /*[out,retval]*/ VARIANT_BOOL * ReminderPlaySound ) = 0;
      virtual HRESULT __stdcall put_ReminderPlaySound (
        /*[in]*/ VARIANT_BOOL ReminderPlaySound ) = 0;
      virtual HRESULT __stdcall get_ReminderSet (
        /*[out,retval]*/ VARIANT_BOOL * ReminderSet ) = 0;
      virtual HRESULT __stdcall put_ReminderSet (
        /*[in]*/ VARIANT_BOOL ReminderSet ) = 0;
      virtual HRESULT __stdcall get_ReminderSoundFile (
        /*[out,retval]*/ BSTR * ReminderSoundFile ) = 0;
      virtual HRESULT __stdcall put_ReminderSoundFile (
        /*[in]*/ BSTR ReminderSoundFile ) = 0;
      virtual HRESULT __stdcall get_ReminderTime (
        /*[out,retval]*/ DATE * ReminderTime ) = 0;
      virtual HRESULT __stdcall put_ReminderTime (
        /*[in]*/ DATE ReminderTime ) = 0;
      virtual HRESULT __stdcall MarkAsTask (
        /*[in]*/ enum OlMarkInterval MarkInterval ) = 0;
      virtual HRESULT __stdcall ClearTaskFlag ( ) = 0;
      virtual HRESULT __stdcall get_IsMarkedAsTask (
        /*[out,retval]*/ VARIANT_BOOL * IsMarkedAsTask ) = 0;
      virtual HRESULT __stdcall get_ConversationID (
        /*[out,retval]*/ BSTR * ConversationID ) = 0;
      virtual HRESULT __stdcall GetConversation (
        /*[out,retval]*/ struct _Conversation * * Conversation ) = 0;
      virtual HRESULT __stdcall get_RTFBody (
        /*[out,retval]*/ VARIANT * RTFBody ) = 0;
      virtual HRESULT __stdcall put_RTFBody (
        /*[in]*/ VARIANT RTFBody ) = 0;
};

struct __declspec(uuid("00063026-0000-0000-c000-000000000046"))
_ReportItem : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Actions (
        /*[out,retval]*/ struct Actions * * Actions ) = 0;
      virtual HRESULT __stdcall get_Attachments (
        /*[out,retval]*/ struct Attachments * * Attachments ) = 0;
      virtual HRESULT __stdcall get_BillingInformation (
        /*[out,retval]*/ BSTR * BillingInformation ) = 0;
      virtual HRESULT __stdcall put_BillingInformation (
        /*[in]*/ BSTR BillingInformation ) = 0;
      virtual HRESULT __stdcall get_Body (
        /*[out,retval]*/ BSTR * Body ) = 0;
      virtual HRESULT __stdcall put_Body (
        /*[in]*/ BSTR Body ) = 0;
      virtual HRESULT __stdcall get_Categories (
        /*[out,retval]*/ BSTR * Categories ) = 0;
      virtual HRESULT __stdcall put_Categories (
        /*[in]*/ BSTR Categories ) = 0;
      virtual HRESULT __stdcall get_Companies (
        /*[out,retval]*/ BSTR * Companies ) = 0;
      virtual HRESULT __stdcall put_Companies (
        /*[in]*/ BSTR Companies ) = 0;
      virtual HRESULT __stdcall get_ConversationIndex (
        /*[out,retval]*/ BSTR * ConversationIndex ) = 0;
      virtual HRESULT __stdcall get_ConversationTopic (
        /*[out,retval]*/ BSTR * ConversationTopic ) = 0;
      virtual HRESULT __stdcall get_CreationTime (
        /*[out,retval]*/ DATE * CreationTime ) = 0;
      virtual HRESULT __stdcall get_EntryID (
        /*[out,retval]*/ BSTR * EntryID ) = 0;
      virtual HRESULT __stdcall get_FormDescription (
        /*[out,retval]*/ struct FormDescription * * FormDescription ) = 0;
      virtual HRESULT __stdcall get_GetInspector (
        /*[out,retval]*/ struct _Inspector * * GetInspector ) = 0;
      virtual HRESULT __stdcall get_Importance (
        /*[out,retval]*/ enum OlImportance * Importance ) = 0;
      virtual HRESULT __stdcall put_Importance (
        /*[in]*/ enum OlImportance Importance ) = 0;
      virtual HRESULT __stdcall get_LastModificationTime (
        /*[out,retval]*/ DATE * LastModificationTime ) = 0;
      virtual HRESULT __stdcall get_MAPIOBJECT (
        /*[out,retval]*/ IUnknown * * MAPIOBJECT ) = 0;
      virtual HRESULT __stdcall get_MessageClass (
        /*[out,retval]*/ BSTR * MessageClass ) = 0;
      virtual HRESULT __stdcall put_MessageClass (
        /*[in]*/ BSTR MessageClass ) = 0;
      virtual HRESULT __stdcall get_Mileage (
        /*[out,retval]*/ BSTR * Mileage ) = 0;
      virtual HRESULT __stdcall put_Mileage (
        /*[in]*/ BSTR Mileage ) = 0;
      virtual HRESULT __stdcall get_NoAging (
        /*[out,retval]*/ VARIANT_BOOL * NoAging ) = 0;
      virtual HRESULT __stdcall put_NoAging (
        /*[in]*/ VARIANT_BOOL NoAging ) = 0;
      virtual HRESULT __stdcall get_OutlookInternalVersion (
        /*[out,retval]*/ long * OutlookInternalVersion ) = 0;
      virtual HRESULT __stdcall get_OutlookVersion (
        /*[out,retval]*/ BSTR * OutlookVersion ) = 0;
      virtual HRESULT __stdcall get_Saved (
        /*[out,retval]*/ VARIANT_BOOL * Saved ) = 0;
      virtual HRESULT __stdcall get_Sensitivity (
        /*[out,retval]*/ enum OlSensitivity * Sensitivity ) = 0;
      virtual HRESULT __stdcall put_Sensitivity (
        /*[in]*/ enum OlSensitivity Sensitivity ) = 0;
      virtual HRESULT __stdcall get_Size (
        /*[out,retval]*/ long * Size ) = 0;
      virtual HRESULT __stdcall get_Subject (
        /*[out,retval]*/ BSTR * Subject ) = 0;
      virtual HRESULT __stdcall put_Subject (
        /*[in]*/ BSTR Subject ) = 0;
      virtual HRESULT __stdcall get_UnRead (
        /*[out,retval]*/ VARIANT_BOOL * UnRead ) = 0;
      virtual HRESULT __stdcall put_UnRead (
        /*[in]*/ VARIANT_BOOL UnRead ) = 0;
      virtual HRESULT __stdcall get_UserProperties (
        /*[out,retval]*/ struct UserProperties * * UserProperties ) = 0;
      virtual HRESULT __stdcall Close (
        /*[in]*/ enum OlInspectorClose SaveMode ) = 0;
      virtual HRESULT __stdcall Copy (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Display (
        /*[in]*/ VARIANT Modal = vtMissing ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ struct MAPIFolder * DestFldr,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall PrintOut ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall SaveAs (
        /*[in]*/ BSTR Path,
        /*[in]*/ VARIANT Type = vtMissing ) = 0;
      virtual HRESULT __stdcall get_Links (
        /*[out,retval]*/ struct Links * * Links ) = 0;
      virtual HRESULT __stdcall get_DownloadState (
        /*[out,retval]*/ enum OlDownloadState * DownloadState ) = 0;
      virtual HRESULT __stdcall ShowCategoriesDialog ( ) = 0;
      virtual HRESULT __stdcall get_ItemProperties (
        /*[out,retval]*/ struct ItemProperties * * ItemProperties ) = 0;
      virtual HRESULT __stdcall get_MarkForDownload (
        /*[out,retval]*/ enum OlRemoteStatus * MarkForDownload ) = 0;
      virtual HRESULT __stdcall put_MarkForDownload (
        /*[in]*/ enum OlRemoteStatus MarkForDownload ) = 0;
      virtual HRESULT __stdcall get_IsConflict (
        /*[out,retval]*/ VARIANT_BOOL * IsConflict ) = 0;
      virtual HRESULT __stdcall get_AutoResolvedWinner (
        /*[out,retval]*/ VARIANT_BOOL * AutoResolvedWinner ) = 0;
      virtual HRESULT __stdcall get_Conflicts (
        /*[out,retval]*/ struct Conflicts * * Conflicts ) = 0;
      virtual HRESULT __stdcall get_PropertyAccessor (
        /*[out,retval]*/ struct _PropertyAccessor * * PropertyAccessor ) = 0;
      virtual HRESULT __stdcall GetConversation (
        /*[out,retval]*/ struct _Conversation * * Conversation ) = 0;
      virtual HRESULT __stdcall get_ConversationID (
        /*[out,retval]*/ BSTR * ConversationID ) = 0;
      virtual HRESULT __stdcall get_RetentionPolicyName (
        /*[out,retval]*/ BSTR * RetentionPolicyName ) = 0;
      virtual HRESULT __stdcall get_RetentionExpirationDate (
        /*[out,retval]*/ DATE * RetentionExpirationDate ) = 0;
};

struct __declspec(uuid("00063023-0000-0000-c000-000000000046"))
_RemoteItem : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Actions (
        /*[out,retval]*/ struct Actions * * Actions ) = 0;
      virtual HRESULT __stdcall get_Attachments (
        /*[out,retval]*/ struct Attachments * * Attachments ) = 0;
      virtual HRESULT __stdcall get_BillingInformation (
        /*[out,retval]*/ BSTR * BillingInformation ) = 0;
      virtual HRESULT __stdcall put_BillingInformation (
        /*[in]*/ BSTR BillingInformation ) = 0;
      virtual HRESULT __stdcall get_Body (
        /*[out,retval]*/ BSTR * Body ) = 0;
      virtual HRESULT __stdcall put_Body (
        /*[in]*/ BSTR Body ) = 0;
      virtual HRESULT __stdcall get_Categories (
        /*[out,retval]*/ BSTR * Categories ) = 0;
      virtual HRESULT __stdcall put_Categories (
        /*[in]*/ BSTR Categories ) = 0;
      virtual HRESULT __stdcall get_Companies (
        /*[out,retval]*/ BSTR * Companies ) = 0;
      virtual HRESULT __stdcall put_Companies (
        /*[in]*/ BSTR Companies ) = 0;
      virtual HRESULT __stdcall get_ConversationIndex (
        /*[out,retval]*/ BSTR * ConversationIndex ) = 0;
      virtual HRESULT __stdcall get_ConversationTopic (
        /*[out,retval]*/ BSTR * ConversationTopic ) = 0;
      virtual HRESULT __stdcall get_CreationTime (
        /*[out,retval]*/ DATE * CreationTime ) = 0;
      virtual HRESULT __stdcall get_EntryID (
        /*[out,retval]*/ BSTR * EntryID ) = 0;
      virtual HRESULT __stdcall get_FormDescription (
        /*[out,retval]*/ struct FormDescription * * FormDescription ) = 0;
      virtual HRESULT __stdcall get_GetInspector (
        /*[out,retval]*/ struct _Inspector * * GetInspector ) = 0;
      virtual HRESULT __stdcall get_Importance (
        /*[out,retval]*/ enum OlImportance * Importance ) = 0;
      virtual HRESULT __stdcall put_Importance (
        /*[in]*/ enum OlImportance Importance ) = 0;
      virtual HRESULT __stdcall get_LastModificationTime (
        /*[out,retval]*/ DATE * LastModificationTime ) = 0;
      virtual HRESULT __stdcall get_MAPIOBJECT (
        /*[out,retval]*/ IUnknown * * MAPIOBJECT ) = 0;
      virtual HRESULT __stdcall get_MessageClass (
        /*[out,retval]*/ BSTR * MessageClass ) = 0;
      virtual HRESULT __stdcall put_MessageClass (
        /*[in]*/ BSTR MessageClass ) = 0;
      virtual HRESULT __stdcall get_Mileage (
        /*[out,retval]*/ BSTR * Mileage ) = 0;
      virtual HRESULT __stdcall put_Mileage (
        /*[in]*/ BSTR Mileage ) = 0;
      virtual HRESULT __stdcall get_NoAging (
        /*[out,retval]*/ VARIANT_BOOL * NoAging ) = 0;
      virtual HRESULT __stdcall put_NoAging (
        /*[in]*/ VARIANT_BOOL NoAging ) = 0;
      virtual HRESULT __stdcall get_OutlookInternalVersion (
        /*[out,retval]*/ long * OutlookInternalVersion ) = 0;
      virtual HRESULT __stdcall get_OutlookVersion (
        /*[out,retval]*/ BSTR * OutlookVersion ) = 0;
      virtual HRESULT __stdcall get_Saved (
        /*[out,retval]*/ VARIANT_BOOL * Saved ) = 0;
      virtual HRESULT __stdcall get_Sensitivity (
        /*[out,retval]*/ enum OlSensitivity * Sensitivity ) = 0;
      virtual HRESULT __stdcall put_Sensitivity (
        /*[in]*/ enum OlSensitivity Sensitivity ) = 0;
      virtual HRESULT __stdcall get_Size (
        /*[out,retval]*/ long * Size ) = 0;
      virtual HRESULT __stdcall get_Subject (
        /*[out,retval]*/ BSTR * Subject ) = 0;
      virtual HRESULT __stdcall put_Subject (
        /*[in]*/ BSTR Subject ) = 0;
      virtual HRESULT __stdcall get_UnRead (
        /*[out,retval]*/ VARIANT_BOOL * UnRead ) = 0;
      virtual HRESULT __stdcall put_UnRead (
        /*[in]*/ VARIANT_BOOL UnRead ) = 0;
      virtual HRESULT __stdcall get_UserProperties (
        /*[out,retval]*/ struct UserProperties * * UserProperties ) = 0;
      virtual HRESULT __stdcall Close (
        /*[in]*/ enum OlInspectorClose SaveMode ) = 0;
      virtual HRESULT __stdcall Copy (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Display (
        /*[in]*/ VARIANT Modal = vtMissing ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ struct MAPIFolder * DestFldr,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall PrintOut ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall SaveAs (
        /*[in]*/ BSTR Path,
        /*[in]*/ VARIANT Type = vtMissing ) = 0;
      virtual HRESULT __stdcall get_HasAttachment (
        /*[out,retval]*/ VARIANT_BOOL * HasAttachment ) = 0;
      virtual HRESULT __stdcall get_RemoteMessageClass (
        /*[out,retval]*/ BSTR * RemoteMessageClass ) = 0;
      virtual HRESULT __stdcall get_TransferSize (
        /*[out,retval]*/ long * TransferSize ) = 0;
      virtual HRESULT __stdcall get_TransferTime (
        /*[out,retval]*/ long * TransferTime ) = 0;
      virtual HRESULT __stdcall get_Links (
        /*[out,retval]*/ struct Links * * Links ) = 0;
      virtual HRESULT __stdcall get_DownloadState (
        /*[out,retval]*/ enum OlDownloadState * DownloadState ) = 0;
      virtual HRESULT __stdcall ShowCategoriesDialog ( ) = 0;
      virtual HRESULT __stdcall get_ItemProperties (
        /*[out,retval]*/ struct ItemProperties * * ItemProperties ) = 0;
      virtual HRESULT __stdcall get_MarkForDownload (
        /*[out,retval]*/ enum OlRemoteStatus * MarkForDownload ) = 0;
      virtual HRESULT __stdcall put_MarkForDownload (
        /*[in]*/ enum OlRemoteStatus MarkForDownload ) = 0;
      virtual HRESULT __stdcall get_IsConflict (
        /*[out,retval]*/ VARIANT_BOOL * IsConflict ) = 0;
      virtual HRESULT __stdcall get_AutoResolvedWinner (
        /*[out,retval]*/ VARIANT_BOOL * AutoResolvedWinner ) = 0;
      virtual HRESULT __stdcall get_Conflicts (
        /*[out,retval]*/ struct Conflicts * * Conflicts ) = 0;
      virtual HRESULT __stdcall get_PropertyAccessor (
        /*[out,retval]*/ struct _PropertyAccessor * * PropertyAccessor ) = 0;
      virtual HRESULT __stdcall GetConversation (
        /*[out,retval]*/ struct _Conversation * * Conversation ) = 0;
      virtual HRESULT __stdcall get_ConversationID (
        /*[out,retval]*/ BSTR * ConversationID ) = 0;
};

struct __declspec(uuid("00063036-0000-0000-c000-000000000046"))
_TaskRequestItem : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Actions (
        /*[out,retval]*/ struct Actions * * Actions ) = 0;
      virtual HRESULT __stdcall get_Attachments (
        /*[out,retval]*/ struct Attachments * * Attachments ) = 0;
      virtual HRESULT __stdcall get_BillingInformation (
        /*[out,retval]*/ BSTR * BillingInformation ) = 0;
      virtual HRESULT __stdcall put_BillingInformation (
        /*[in]*/ BSTR BillingInformation ) = 0;
      virtual HRESULT __stdcall get_Body (
        /*[out,retval]*/ BSTR * Body ) = 0;
      virtual HRESULT __stdcall put_Body (
        /*[in]*/ BSTR Body ) = 0;
      virtual HRESULT __stdcall get_Categories (
        /*[out,retval]*/ BSTR * Categories ) = 0;
      virtual HRESULT __stdcall put_Categories (
        /*[in]*/ BSTR Categories ) = 0;
      virtual HRESULT __stdcall get_Companies (
        /*[out,retval]*/ BSTR * Companies ) = 0;
      virtual HRESULT __stdcall put_Companies (
        /*[in]*/ BSTR Companies ) = 0;
      virtual HRESULT __stdcall get_ConversationIndex (
        /*[out,retval]*/ BSTR * ConversationIndex ) = 0;
      virtual HRESULT __stdcall get_ConversationTopic (
        /*[out,retval]*/ BSTR * ConversationTopic ) = 0;
      virtual HRESULT __stdcall get_CreationTime (
        /*[out,retval]*/ DATE * CreationTime ) = 0;
      virtual HRESULT __stdcall get_EntryID (
        /*[out,retval]*/ BSTR * EntryID ) = 0;
      virtual HRESULT __stdcall get_FormDescription (
        /*[out,retval]*/ struct FormDescription * * FormDescription ) = 0;
      virtual HRESULT __stdcall get_GetInspector (
        /*[out,retval]*/ struct _Inspector * * GetInspector ) = 0;
      virtual HRESULT __stdcall get_Importance (
        /*[out,retval]*/ enum OlImportance * Importance ) = 0;
      virtual HRESULT __stdcall put_Importance (
        /*[in]*/ enum OlImportance Importance ) = 0;
      virtual HRESULT __stdcall get_LastModificationTime (
        /*[out,retval]*/ DATE * LastModificationTime ) = 0;
      virtual HRESULT __stdcall get_MAPIOBJECT (
        /*[out,retval]*/ IUnknown * * MAPIOBJECT ) = 0;
      virtual HRESULT __stdcall get_MessageClass (
        /*[out,retval]*/ BSTR * MessageClass ) = 0;
      virtual HRESULT __stdcall put_MessageClass (
        /*[in]*/ BSTR MessageClass ) = 0;
      virtual HRESULT __stdcall get_Mileage (
        /*[out,retval]*/ BSTR * Mileage ) = 0;
      virtual HRESULT __stdcall put_Mileage (
        /*[in]*/ BSTR Mileage ) = 0;
      virtual HRESULT __stdcall get_NoAging (
        /*[out,retval]*/ VARIANT_BOOL * NoAging ) = 0;
      virtual HRESULT __stdcall put_NoAging (
        /*[in]*/ VARIANT_BOOL NoAging ) = 0;
      virtual HRESULT __stdcall get_OutlookInternalVersion (
        /*[out,retval]*/ long * OutlookInternalVersion ) = 0;
      virtual HRESULT __stdcall get_OutlookVersion (
        /*[out,retval]*/ BSTR * OutlookVersion ) = 0;
      virtual HRESULT __stdcall get_Saved (
        /*[out,retval]*/ VARIANT_BOOL * Saved ) = 0;
      virtual HRESULT __stdcall get_Sensitivity (
        /*[out,retval]*/ enum OlSensitivity * Sensitivity ) = 0;
      virtual HRESULT __stdcall put_Sensitivity (
        /*[in]*/ enum OlSensitivity Sensitivity ) = 0;
      virtual HRESULT __stdcall get_Size (
        /*[out,retval]*/ long * Size ) = 0;
      virtual HRESULT __stdcall get_Subject (
        /*[out,retval]*/ BSTR * Subject ) = 0;
      virtual HRESULT __stdcall put_Subject (
        /*[in]*/ BSTR Subject ) = 0;
      virtual HRESULT __stdcall get_UnRead (
        /*[out,retval]*/ VARIANT_BOOL * UnRead ) = 0;
      virtual HRESULT __stdcall put_UnRead (
        /*[in]*/ VARIANT_BOOL UnRead ) = 0;
      virtual HRESULT __stdcall get_UserProperties (
        /*[out,retval]*/ struct UserProperties * * UserProperties ) = 0;
      virtual HRESULT __stdcall Close (
        /*[in]*/ enum OlInspectorClose SaveMode ) = 0;
      virtual HRESULT __stdcall Copy (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Display (
        /*[in]*/ VARIANT Modal = vtMissing ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ struct MAPIFolder * DestFldr,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall PrintOut ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall SaveAs (
        /*[in]*/ BSTR Path,
        /*[in]*/ VARIANT Type = vtMissing ) = 0;
      virtual HRESULT __stdcall GetAssociatedTask (
        /*[in]*/ VARIANT_BOOL AddToTaskList,
        /*[out,retval]*/ struct _TaskItem * * Item ) = 0;
      virtual HRESULT __stdcall get_Links (
        /*[out,retval]*/ struct Links * * Links ) = 0;
      virtual HRESULT __stdcall get_DownloadState (
        /*[out,retval]*/ enum OlDownloadState * DownloadState ) = 0;
      virtual HRESULT __stdcall ShowCategoriesDialog ( ) = 0;
      virtual HRESULT __stdcall get_ItemProperties (
        /*[out,retval]*/ struct ItemProperties * * ItemProperties ) = 0;
      virtual HRESULT __stdcall get_MarkForDownload (
        /*[out,retval]*/ enum OlRemoteStatus * MarkForDownload ) = 0;
      virtual HRESULT __stdcall put_MarkForDownload (
        /*[in]*/ enum OlRemoteStatus MarkForDownload ) = 0;
      virtual HRESULT __stdcall get_IsConflict (
        /*[out,retval]*/ VARIANT_BOOL * IsConflict ) = 0;
      virtual HRESULT __stdcall get_AutoResolvedWinner (
        /*[out,retval]*/ VARIANT_BOOL * AutoResolvedWinner ) = 0;
      virtual HRESULT __stdcall get_Conflicts (
        /*[out,retval]*/ struct Conflicts * * Conflicts ) = 0;
      virtual HRESULT __stdcall get_PropertyAccessor (
        /*[out,retval]*/ struct _PropertyAccessor * * PropertyAccessor ) = 0;
      virtual HRESULT __stdcall GetConversation (
        /*[out,retval]*/ struct _Conversation * * Conversation ) = 0;
      virtual HRESULT __stdcall get_ConversationID (
        /*[out,retval]*/ BSTR * ConversationID ) = 0;
      virtual HRESULT __stdcall get_RTFBody (
        /*[out,retval]*/ VARIANT * RTFBody ) = 0;
      virtual HRESULT __stdcall put_RTFBody (
        /*[in]*/ VARIANT RTFBody ) = 0;
};

struct __declspec(uuid("00063038-0000-0000-c000-000000000046"))
_TaskRequestAcceptItem : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Actions (
        /*[out,retval]*/ struct Actions * * Actions ) = 0;
      virtual HRESULT __stdcall get_Attachments (
        /*[out,retval]*/ struct Attachments * * Attachments ) = 0;
      virtual HRESULT __stdcall get_BillingInformation (
        /*[out,retval]*/ BSTR * BillingInformation ) = 0;
      virtual HRESULT __stdcall put_BillingInformation (
        /*[in]*/ BSTR BillingInformation ) = 0;
      virtual HRESULT __stdcall get_Body (
        /*[out,retval]*/ BSTR * Body ) = 0;
      virtual HRESULT __stdcall put_Body (
        /*[in]*/ BSTR Body ) = 0;
      virtual HRESULT __stdcall get_Categories (
        /*[out,retval]*/ BSTR * Categories ) = 0;
      virtual HRESULT __stdcall put_Categories (
        /*[in]*/ BSTR Categories ) = 0;
      virtual HRESULT __stdcall get_Companies (
        /*[out,retval]*/ BSTR * Companies ) = 0;
      virtual HRESULT __stdcall put_Companies (
        /*[in]*/ BSTR Companies ) = 0;
      virtual HRESULT __stdcall get_ConversationIndex (
        /*[out,retval]*/ BSTR * ConversationIndex ) = 0;
      virtual HRESULT __stdcall get_ConversationTopic (
        /*[out,retval]*/ BSTR * ConversationTopic ) = 0;
      virtual HRESULT __stdcall get_CreationTime (
        /*[out,retval]*/ DATE * CreationTime ) = 0;
      virtual HRESULT __stdcall get_EntryID (
        /*[out,retval]*/ BSTR * EntryID ) = 0;
      virtual HRESULT __stdcall get_FormDescription (
        /*[out,retval]*/ struct FormDescription * * FormDescription ) = 0;
      virtual HRESULT __stdcall get_GetInspector (
        /*[out,retval]*/ struct _Inspector * * GetInspector ) = 0;
      virtual HRESULT __stdcall get_Importance (
        /*[out,retval]*/ enum OlImportance * Importance ) = 0;
      virtual HRESULT __stdcall put_Importance (
        /*[in]*/ enum OlImportance Importance ) = 0;
      virtual HRESULT __stdcall get_LastModificationTime (
        /*[out,retval]*/ DATE * LastModificationTime ) = 0;
      virtual HRESULT __stdcall get_MAPIOBJECT (
        /*[out,retval]*/ IUnknown * * MAPIOBJECT ) = 0;
      virtual HRESULT __stdcall get_MessageClass (
        /*[out,retval]*/ BSTR * MessageClass ) = 0;
      virtual HRESULT __stdcall put_MessageClass (
        /*[in]*/ BSTR MessageClass ) = 0;
      virtual HRESULT __stdcall get_Mileage (
        /*[out,retval]*/ BSTR * Mileage ) = 0;
      virtual HRESULT __stdcall put_Mileage (
        /*[in]*/ BSTR Mileage ) = 0;
      virtual HRESULT __stdcall get_NoAging (
        /*[out,retval]*/ VARIANT_BOOL * NoAging ) = 0;
      virtual HRESULT __stdcall put_NoAging (
        /*[in]*/ VARIANT_BOOL NoAging ) = 0;
      virtual HRESULT __stdcall get_OutlookInternalVersion (
        /*[out,retval]*/ long * OutlookInternalVersion ) = 0;
      virtual HRESULT __stdcall get_OutlookVersion (
        /*[out,retval]*/ BSTR * OutlookVersion ) = 0;
      virtual HRESULT __stdcall get_Saved (
        /*[out,retval]*/ VARIANT_BOOL * Saved ) = 0;
      virtual HRESULT __stdcall get_Sensitivity (
        /*[out,retval]*/ enum OlSensitivity * Sensitivity ) = 0;
      virtual HRESULT __stdcall put_Sensitivity (
        /*[in]*/ enum OlSensitivity Sensitivity ) = 0;
      virtual HRESULT __stdcall get_Size (
        /*[out,retval]*/ long * Size ) = 0;
      virtual HRESULT __stdcall get_Subject (
        /*[out,retval]*/ BSTR * Subject ) = 0;
      virtual HRESULT __stdcall put_Subject (
        /*[in]*/ BSTR Subject ) = 0;
      virtual HRESULT __stdcall get_UnRead (
        /*[out,retval]*/ VARIANT_BOOL * UnRead ) = 0;
      virtual HRESULT __stdcall put_UnRead (
        /*[in]*/ VARIANT_BOOL UnRead ) = 0;
      virtual HRESULT __stdcall get_UserProperties (
        /*[out,retval]*/ struct UserProperties * * UserProperties ) = 0;
      virtual HRESULT __stdcall Close (
        /*[in]*/ enum OlInspectorClose SaveMode ) = 0;
      virtual HRESULT __stdcall Copy (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Display (
        /*[in]*/ VARIANT Modal = vtMissing ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ struct MAPIFolder * DestFldr,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall PrintOut ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall SaveAs (
        /*[in]*/ BSTR Path,
        /*[in]*/ VARIANT Type = vtMissing ) = 0;
      virtual HRESULT __stdcall GetAssociatedTask (
        /*[in]*/ VARIANT_BOOL AddToTaskList,
        /*[out,retval]*/ struct _TaskItem * * Item ) = 0;
      virtual HRESULT __stdcall get_Links (
        /*[out,retval]*/ struct Links * * Links ) = 0;
      virtual HRESULT __stdcall get_DownloadState (
        /*[out,retval]*/ enum OlDownloadState * DownloadState ) = 0;
      virtual HRESULT __stdcall ShowCategoriesDialog ( ) = 0;
      virtual HRESULT __stdcall get_ItemProperties (
        /*[out,retval]*/ struct ItemProperties * * ItemProperties ) = 0;
      virtual HRESULT __stdcall get_MarkForDownload (
        /*[out,retval]*/ enum OlRemoteStatus * MarkForDownload ) = 0;
      virtual HRESULT __stdcall put_MarkForDownload (
        /*[in]*/ enum OlRemoteStatus MarkForDownload ) = 0;
      virtual HRESULT __stdcall get_IsConflict (
        /*[out,retval]*/ VARIANT_BOOL * IsConflict ) = 0;
      virtual HRESULT __stdcall get_AutoResolvedWinner (
        /*[out,retval]*/ VARIANT_BOOL * AutoResolvedWinner ) = 0;
      virtual HRESULT __stdcall get_Conflicts (
        /*[out,retval]*/ struct Conflicts * * Conflicts ) = 0;
      virtual HRESULT __stdcall get_PropertyAccessor (
        /*[out,retval]*/ struct _PropertyAccessor * * PropertyAccessor ) = 0;
      virtual HRESULT __stdcall GetConversation (
        /*[out,retval]*/ struct _Conversation * * Conversation ) = 0;
      virtual HRESULT __stdcall get_ConversationID (
        /*[out,retval]*/ BSTR * ConversationID ) = 0;
      virtual HRESULT __stdcall get_RTFBody (
        /*[out,retval]*/ VARIANT * RTFBody ) = 0;
      virtual HRESULT __stdcall put_RTFBody (
        /*[in]*/ VARIANT RTFBody ) = 0;
};

struct __declspec(uuid("00063039-0000-0000-c000-000000000046"))
_TaskRequestDeclineItem : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Actions (
        /*[out,retval]*/ struct Actions * * Actions ) = 0;
      virtual HRESULT __stdcall get_Attachments (
        /*[out,retval]*/ struct Attachments * * Attachments ) = 0;
      virtual HRESULT __stdcall get_BillingInformation (
        /*[out,retval]*/ BSTR * BillingInformation ) = 0;
      virtual HRESULT __stdcall put_BillingInformation (
        /*[in]*/ BSTR BillingInformation ) = 0;
      virtual HRESULT __stdcall get_Body (
        /*[out,retval]*/ BSTR * Body ) = 0;
      virtual HRESULT __stdcall put_Body (
        /*[in]*/ BSTR Body ) = 0;
      virtual HRESULT __stdcall get_Categories (
        /*[out,retval]*/ BSTR * Categories ) = 0;
      virtual HRESULT __stdcall put_Categories (
        /*[in]*/ BSTR Categories ) = 0;
      virtual HRESULT __stdcall get_Companies (
        /*[out,retval]*/ BSTR * Companies ) = 0;
      virtual HRESULT __stdcall put_Companies (
        /*[in]*/ BSTR Companies ) = 0;
      virtual HRESULT __stdcall get_ConversationIndex (
        /*[out,retval]*/ BSTR * ConversationIndex ) = 0;
      virtual HRESULT __stdcall get_ConversationTopic (
        /*[out,retval]*/ BSTR * ConversationTopic ) = 0;
      virtual HRESULT __stdcall get_CreationTime (
        /*[out,retval]*/ DATE * CreationTime ) = 0;
      virtual HRESULT __stdcall get_EntryID (
        /*[out,retval]*/ BSTR * EntryID ) = 0;
      virtual HRESULT __stdcall get_FormDescription (
        /*[out,retval]*/ struct FormDescription * * FormDescription ) = 0;
      virtual HRESULT __stdcall get_GetInspector (
        /*[out,retval]*/ struct _Inspector * * GetInspector ) = 0;
      virtual HRESULT __stdcall get_Importance (
        /*[out,retval]*/ enum OlImportance * Importance ) = 0;
      virtual HRESULT __stdcall put_Importance (
        /*[in]*/ enum OlImportance Importance ) = 0;
      virtual HRESULT __stdcall get_LastModificationTime (
        /*[out,retval]*/ DATE * LastModificationTime ) = 0;
      virtual HRESULT __stdcall get_MAPIOBJECT (
        /*[out,retval]*/ IUnknown * * MAPIOBJECT ) = 0;
      virtual HRESULT __stdcall get_MessageClass (
        /*[out,retval]*/ BSTR * MessageClass ) = 0;
      virtual HRESULT __stdcall put_MessageClass (
        /*[in]*/ BSTR MessageClass ) = 0;
      virtual HRESULT __stdcall get_Mileage (
        /*[out,retval]*/ BSTR * Mileage ) = 0;
      virtual HRESULT __stdcall put_Mileage (
        /*[in]*/ BSTR Mileage ) = 0;
      virtual HRESULT __stdcall get_NoAging (
        /*[out,retval]*/ VARIANT_BOOL * NoAging ) = 0;
      virtual HRESULT __stdcall put_NoAging (
        /*[in]*/ VARIANT_BOOL NoAging ) = 0;
      virtual HRESULT __stdcall get_OutlookInternalVersion (
        /*[out,retval]*/ long * OutlookInternalVersion ) = 0;
      virtual HRESULT __stdcall get_OutlookVersion (
        /*[out,retval]*/ BSTR * OutlookVersion ) = 0;
      virtual HRESULT __stdcall get_Saved (
        /*[out,retval]*/ VARIANT_BOOL * Saved ) = 0;
      virtual HRESULT __stdcall get_Sensitivity (
        /*[out,retval]*/ enum OlSensitivity * Sensitivity ) = 0;
      virtual HRESULT __stdcall put_Sensitivity (
        /*[in]*/ enum OlSensitivity Sensitivity ) = 0;
      virtual HRESULT __stdcall get_Size (
        /*[out,retval]*/ long * Size ) = 0;
      virtual HRESULT __stdcall get_Subject (
        /*[out,retval]*/ BSTR * Subject ) = 0;
      virtual HRESULT __stdcall put_Subject (
        /*[in]*/ BSTR Subject ) = 0;
      virtual HRESULT __stdcall get_UnRead (
        /*[out,retval]*/ VARIANT_BOOL * UnRead ) = 0;
      virtual HRESULT __stdcall put_UnRead (
        /*[in]*/ VARIANT_BOOL UnRead ) = 0;
      virtual HRESULT __stdcall get_UserProperties (
        /*[out,retval]*/ struct UserProperties * * UserProperties ) = 0;
      virtual HRESULT __stdcall Close (
        /*[in]*/ enum OlInspectorClose SaveMode ) = 0;
      virtual HRESULT __stdcall Copy (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Display (
        /*[in]*/ VARIANT Modal = vtMissing ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ struct MAPIFolder * DestFldr,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall PrintOut ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall SaveAs (
        /*[in]*/ BSTR Path,
        /*[in]*/ VARIANT Type = vtMissing ) = 0;
      virtual HRESULT __stdcall GetAssociatedTask (
        /*[in]*/ VARIANT_BOOL AddToTaskList,
        /*[out,retval]*/ struct _TaskItem * * Item ) = 0;
      virtual HRESULT __stdcall get_Links (
        /*[out,retval]*/ struct Links * * Links ) = 0;
      virtual HRESULT __stdcall get_DownloadState (
        /*[out,retval]*/ enum OlDownloadState * DownloadState ) = 0;
      virtual HRESULT __stdcall ShowCategoriesDialog ( ) = 0;
      virtual HRESULT __stdcall get_ItemProperties (
        /*[out,retval]*/ struct ItemProperties * * ItemProperties ) = 0;
      virtual HRESULT __stdcall get_MarkForDownload (
        /*[out,retval]*/ enum OlRemoteStatus * MarkForDownload ) = 0;
      virtual HRESULT __stdcall put_MarkForDownload (
        /*[in]*/ enum OlRemoteStatus MarkForDownload ) = 0;
      virtual HRESULT __stdcall get_IsConflict (
        /*[out,retval]*/ VARIANT_BOOL * IsConflict ) = 0;
      virtual HRESULT __stdcall get_AutoResolvedWinner (
        /*[out,retval]*/ VARIANT_BOOL * AutoResolvedWinner ) = 0;
      virtual HRESULT __stdcall get_Conflicts (
        /*[out,retval]*/ struct Conflicts * * Conflicts ) = 0;
      virtual HRESULT __stdcall get_PropertyAccessor (
        /*[out,retval]*/ struct _PropertyAccessor * * PropertyAccessor ) = 0;
      virtual HRESULT __stdcall GetConversation (
        /*[out,retval]*/ struct _Conversation * * Conversation ) = 0;
      virtual HRESULT __stdcall get_ConversationID (
        /*[out,retval]*/ BSTR * ConversationID ) = 0;
      virtual HRESULT __stdcall get_RTFBody (
        /*[out,retval]*/ VARIANT * RTFBody ) = 0;
      virtual HRESULT __stdcall put_RTFBody (
        /*[in]*/ VARIANT RTFBody ) = 0;
};

struct __declspec(uuid("00063037-0000-0000-c000-000000000046"))
_TaskRequestUpdateItem : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall get_Actions (
        /*[out,retval]*/ struct Actions * * Actions ) = 0;
      virtual HRESULT __stdcall get_Attachments (
        /*[out,retval]*/ struct Attachments * * Attachments ) = 0;
      virtual HRESULT __stdcall get_BillingInformation (
        /*[out,retval]*/ BSTR * BillingInformation ) = 0;
      virtual HRESULT __stdcall put_BillingInformation (
        /*[in]*/ BSTR BillingInformation ) = 0;
      virtual HRESULT __stdcall get_Body (
        /*[out,retval]*/ BSTR * Body ) = 0;
      virtual HRESULT __stdcall put_Body (
        /*[in]*/ BSTR Body ) = 0;
      virtual HRESULT __stdcall get_Categories (
        /*[out,retval]*/ BSTR * Categories ) = 0;
      virtual HRESULT __stdcall put_Categories (
        /*[in]*/ BSTR Categories ) = 0;
      virtual HRESULT __stdcall get_Companies (
        /*[out,retval]*/ BSTR * Companies ) = 0;
      virtual HRESULT __stdcall put_Companies (
        /*[in]*/ BSTR Companies ) = 0;
      virtual HRESULT __stdcall get_ConversationIndex (
        /*[out,retval]*/ BSTR * ConversationIndex ) = 0;
      virtual HRESULT __stdcall get_ConversationTopic (
        /*[out,retval]*/ BSTR * ConversationTopic ) = 0;
      virtual HRESULT __stdcall get_CreationTime (
        /*[out,retval]*/ DATE * CreationTime ) = 0;
      virtual HRESULT __stdcall get_EntryID (
        /*[out,retval]*/ BSTR * EntryID ) = 0;
      virtual HRESULT __stdcall get_FormDescription (
        /*[out,retval]*/ struct FormDescription * * FormDescription ) = 0;
      virtual HRESULT __stdcall get_GetInspector (
        /*[out,retval]*/ struct _Inspector * * GetInspector ) = 0;
      virtual HRESULT __stdcall get_Importance (
        /*[out,retval]*/ enum OlImportance * Importance ) = 0;
      virtual HRESULT __stdcall put_Importance (
        /*[in]*/ enum OlImportance Importance ) = 0;
      virtual HRESULT __stdcall get_LastModificationTime (
        /*[out,retval]*/ DATE * LastModificationTime ) = 0;
      virtual HRESULT __stdcall get_MAPIOBJECT (
        /*[out,retval]*/ IUnknown * * MAPIOBJECT ) = 0;
      virtual HRESULT __stdcall get_MessageClass (
        /*[out,retval]*/ BSTR * MessageClass ) = 0;
      virtual HRESULT __stdcall put_MessageClass (
        /*[in]*/ BSTR MessageClass ) = 0;
      virtual HRESULT __stdcall get_Mileage (
        /*[out,retval]*/ BSTR * Mileage ) = 0;
      virtual HRESULT __stdcall put_Mileage (
        /*[in]*/ BSTR Mileage ) = 0;
      virtual HRESULT __stdcall get_NoAging (
        /*[out,retval]*/ VARIANT_BOOL * NoAging ) = 0;
      virtual HRESULT __stdcall put_NoAging (
        /*[in]*/ VARIANT_BOOL NoAging ) = 0;
      virtual HRESULT __stdcall get_OutlookInternalVersion (
        /*[out,retval]*/ long * OutlookInternalVersion ) = 0;
      virtual HRESULT __stdcall get_OutlookVersion (
        /*[out,retval]*/ BSTR * OutlookVersion ) = 0;
      virtual HRESULT __stdcall get_Saved (
        /*[out,retval]*/ VARIANT_BOOL * Saved ) = 0;
      virtual HRESULT __stdcall get_Sensitivity (
        /*[out,retval]*/ enum OlSensitivity * Sensitivity ) = 0;
      virtual HRESULT __stdcall put_Sensitivity (
        /*[in]*/ enum OlSensitivity Sensitivity ) = 0;
      virtual HRESULT __stdcall get_Size (
        /*[out,retval]*/ long * Size ) = 0;
      virtual HRESULT __stdcall get_Subject (
        /*[out,retval]*/ BSTR * Subject ) = 0;
      virtual HRESULT __stdcall put_Subject (
        /*[in]*/ BSTR Subject ) = 0;
      virtual HRESULT __stdcall get_UnRead (
        /*[out,retval]*/ VARIANT_BOOL * UnRead ) = 0;
      virtual HRESULT __stdcall put_UnRead (
        /*[in]*/ VARIANT_BOOL UnRead ) = 0;
      virtual HRESULT __stdcall get_UserProperties (
        /*[out,retval]*/ struct UserProperties * * UserProperties ) = 0;
      virtual HRESULT __stdcall Close (
        /*[in]*/ enum OlInspectorClose SaveMode ) = 0;
      virtual HRESULT __stdcall Copy (
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall Display (
        /*[in]*/ VARIANT Modal = vtMissing ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ struct MAPIFolder * DestFldr,
        /*[out,retval]*/ IDispatch * * Item ) = 0;
      virtual HRESULT __stdcall PrintOut ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall SaveAs (
        /*[in]*/ BSTR Path,
        /*[in]*/ VARIANT Type = vtMissing ) = 0;
      virtual HRESULT __stdcall GetAssociatedTask (
        /*[in]*/ VARIANT_BOOL AddToTaskList,
        /*[out,retval]*/ struct _TaskItem * * Item ) = 0;
      virtual HRESULT __stdcall get_Links (
        /*[out,retval]*/ struct Links * * Links ) = 0;
      virtual HRESULT __stdcall get_DownloadState (
        /*[out,retval]*/ enum OlDownloadState * DownloadState ) = 0;
      virtual HRESULT __stdcall ShowCategoriesDialog ( ) = 0;
      virtual HRESULT __stdcall get_ItemProperties (
        /*[out,retval]*/ struct ItemProperties * * ItemProperties ) = 0;
      virtual HRESULT __stdcall get_MarkForDownload (
        /*[out,retval]*/ enum OlRemoteStatus * MarkForDownload ) = 0;
      virtual HRESULT __stdcall put_MarkForDownload (
        /*[in]*/ enum OlRemoteStatus MarkForDownload ) = 0;
      virtual HRESULT __stdcall get_IsConflict (
        /*[out,retval]*/ VARIANT_BOOL * IsConflict ) = 0;
      virtual HRESULT __stdcall get_AutoResolvedWinner (
        /*[out,retval]*/ VARIANT_BOOL * AutoResolvedWinner ) = 0;
      virtual HRESULT __stdcall get_Conflicts (
        /*[out,retval]*/ struct Conflicts * * Conflicts ) = 0;
      virtual HRESULT __stdcall get_PropertyAccessor (
        /*[out,retval]*/ struct _PropertyAccessor * * PropertyAccessor ) = 0;
      virtual HRESULT __stdcall GetConversation (
        /*[out,retval]*/ struct _Conversation * * Conversation ) = 0;
      virtual HRESULT __stdcall get_ConversationID (
        /*[out,retval]*/ BSTR * ConversationID ) = 0;
      virtual HRESULT __stdcall get_RTFBody (
        /*[out,retval]*/ VARIANT * RTFBody ) = 0;
      virtual HRESULT __stdcall put_RTFBody (
        /*[in]*/ VARIANT RTFBody ) = 0;
};

struct __declspec(uuid("00063107-0000-0000-c000-000000000046"))
_ConversationHeader : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * Application ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ enum OlObjectClass * Class ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ struct _NameSpace * * Session ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * Parent ) = 0;
      virtual HRESULT __stdcall GetConversation (
        /*[out,retval]*/ struct _Conversation * * Conversation ) = 0;
      virtual HRESULT __stdcall get_ConversationID (
        /*[out,retval]*/ BSTR * ConversationID ) = 0;
      virtual HRESULT __stdcall get_ConversationTopic (
        /*[out,retval]*/ BSTR * ConversationTopic ) = 0;
      virtual HRESULT __stdcall GetItems (
        /*[out,retval]*/ struct _SimpleItems * * SimpleItems ) = 0;
};

//
// Named GUID constants initializations
//

extern "C" const GUID __declspec(selectany) LIBID_Outlook =
    {0x00062fff,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__IRecipientControl =
    {0xd87e7e16,0x6897,0x11ce,{0xa6,0xc0,0x00,0xaa,0x00,0x60,0x8f,0xaa}};
extern "C" const GUID __declspec(selectany) DIID__DRecipientControl =
    {0x0006f025,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID__DRecipientControlEvents =
    {0xd87e7e17,0x6897,0x11ce,{0xa6,0xc0,0x00,0xaa,0x00,0x60,0x8f,0xaa}};
extern "C" const GUID __declspec(selectany) CLSID__RecipientControl =
    {0x0006f023,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__IDocSiteControl =
    {0x43507dd0,0x811d,0x11ce,{0xb5,0x65,0x00,0xaa,0x00,0x60,0x8f,0xaa}};
extern "C" const GUID __declspec(selectany) DIID__DDocSiteControl =
    {0x0006f026,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID__DDocSiteControlEvents =
    {0x50bb9b50,0x811d,0x11ce,{0xb5,0x65,0x00,0xaa,0x00,0x60,0x8f,0xaa}};
extern "C" const GUID __declspec(selectany) CLSID__DocSiteControl =
    {0x0006f024,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_OlkControl =
    {0x00067366,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__OlkTextBox =
    {0x000672da,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_OlkTextBoxEvents =
    {0x000672e6,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_OlkTextBox =
    {0x0006f068,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__OlkLabel =
    {0x000672d9,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_OlkLabelEvents =
    {0x000672e5,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_OlkLabel =
    {0x0006f067,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__OlkCommandButton =
    {0x000672db,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_OlkCommandButtonEvents =
    {0x000672e0,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_OlkCommandButton =
    {0x0006f04a,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__OlkCheckBox =
    {0x000672dd,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_OlkCheckBoxEvents =
    {0x000672e2,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_OlkCheckBox =
    {0x0006f04c,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__OlkOptionButton =
    {0x000672dc,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_OlkOptionButtonEvents =
    {0x000672e1,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_OlkOptionButton =
    {0x0006f04b,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__OlkComboBox =
    {0x000672de,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_OlkComboBoxEvents =
    {0x000672e3,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_OlkComboBox =
    {0x0006f04d,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__OlkListBox =
    {0x000672df,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_OlkListBoxEvents =
    {0x000672e4,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_OlkListBox =
    {0x0006f04e,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__OlkInfoBar =
    {0x000672f6,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_OlkInfoBarEvents =
    {0x000672f7,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_OlkInfoBar =
    {0x0006f054,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__OlkContactPhoto =
    {0x000672eb,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_OlkContactPhotoEvents =
    {0x000672ec,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_OlkContactPhoto =
    {0x0006f04f,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__OlkBusinessCardControl =
    {0x000672ed,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_OlkBusinessCardControlEvents =
    {0x000672ee,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_OlkBusinessCardControl =
    {0x0006f050,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__OlkPageControl =
    {0x000672f8,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_OlkPageControlEvents =
    {0x000672f9,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_OlkPageControl =
    {0x0006f055,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__OlkDateControl =
    {0x000672fa,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_OlkDateControlEvents =
    {0x000672fb,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_OlkDateControl =
    {0x0006f056,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__OlkTimeControl =
    {0x000672ef,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_OlkTimeControlEvents =
    {0x000672f0,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_OlkTimeControl =
    {0x0006f051,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__OlkCategory =
    {0x000672f4,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_OlkCategoryEvents =
    {0x000672f5,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_OlkCategory =
    {0x0006f053,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__OlkFrameHeader =
    {0x00067352,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_OlkFrameHeaderEvents =
    {0x00067353,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_OlkFrameHeader =
    {0x0006f057,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__OlkSenderPhoto =
    {0x00067355,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_OlkSenderPhotoEvents =
    {0x00067356,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_OlkSenderPhoto =
    {0x0006f058,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_PropertyAccessor =
    {0x0006102d,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_NavigationModule =
    {0x000610e8,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_NavigationModules =
    {0x000610e7,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_Store =
    {0x000610c7,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_Rules =
    {0x000610cc,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_RuleActions =
    {0x000610ce,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_MoveOrCopyRuleAction =
    {0x000610d0,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_RuleAction =
    {0x000610cf,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_SendRuleAction =
    {0x000610d1,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_AssignToCategoryRuleAction =
    {0x000610d4,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_PlaySoundRuleAction =
    {0x000610d5,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_MarkAsTaskRuleAction =
    {0x000610d6,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_NewItemAlertRuleAction =
    {0x000610d7,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_RuleConditions =
    {0x000610d8,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_RuleCondition =
    {0x000610d9,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_ImportanceRuleCondition =
    {0x000610da,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_AccountRuleCondition =
    {0x000610db,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_Account =
    {0x000610c5,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_TextRuleCondition =
    {0x000610e0,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_CategoryRuleCondition =
    {0x000610dc,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_FormNameRuleCondition =
    {0x000610dd,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_ToOrFromRuleCondition =
    {0x000610de,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_AddressRuleCondition =
    {0x000610fa,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_SenderInAddressListRuleCondition =
    {0x000610df,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_FromRssFeedRuleCondition =
    {0x000610fb,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_Rule =
    {0x000610cd,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_Categories =
    {0x000610e4,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_Category =
    {0x000610e3,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_Table =
    {0x000610d2,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_Row =
    {0x000610d3,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_Columns =
    {0x000610e1,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_Column =
    {0x000610e5,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_CalendarSharing =
    {0x000610e2,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_MailItem =
    {0x00061033,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_ContactItem =
    {0x00061031,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_ItemEvents =
    {0x0006303a,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_ItemEvents_10 =
    {0x0006302b,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_SimpleItems =
    {0x00061102,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_UserDefinedProperties =
    {0x00061047,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_UserDefinedProperty =
    {0x0006105c,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_ExchangeUser =
    {0x000610c9,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_ExchangeDistributionList =
    {0x000610ca,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_SyncObject =
    {0x00063084,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_SyncObjectEvents =
    {0x00063085,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_Accounts =
    {0x000610c4,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_AccountsEvents =
    {0x00063105,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_Stores =
    {0x000610c6,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_StoresEvents_12 =
    {0x000630f8,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_SelectNamesDialog =
    {0x000610c8,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_SharingItem =
    {0x00061067,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_Explorer =
    {0x00063050,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_ExplorerEvents =
    {0x0006304f,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_ExplorerEvents_10 =
    {0x0006300f,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_Inspector =
    {0x00063058,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_InspectorEvents =
    {0x0006307d,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_InspectorEvents_10 =
    {0x0006302a,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_TimeZones =
    {0x000610fc,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__OlkTimeZoneControl =
    {0x00067367,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_OlkTimeZoneControlEvents =
    {0x00067368,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_OlkTimeZoneControl =
    {0x0006f059,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_OutLookApplicationEvents =
    {0x0006304e,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_AppointmentItem =
    {0x00061030,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_MeetingItem =
    {0x00061036,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_ExplorersEvents =
    {0x00063078,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_FoldersEvents =
    {0x00063076,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_InspectorsEvents =
    {0x00063079,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_ItemsEvents =
    {0x00063077,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_NameSpaceEvents =
    {0x0006308c,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_OutlookBarGroupsEvents =
    {0x0006307b,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_OutlookBarPaneEvents =
    {0x0006307a,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_OutlookBarShortcutsEvents =
    {0x0006307c,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_PropertyPage =
    {0x0006307e,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_OutLookApplicationEvents_10 =
    {0x0006300e,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_OutLookApplicationEvents_11 =
    {0x0006302c,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_AttachmentSelection =
    {0x000610f9,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_Folder =
    {0x000610f7,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_MAPIFolderEvents_12 =
    {0x000630f7,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_ResultsEvents =
    {0x0006300d,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID__ViewsEvents =
    {0x000630a5,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_ReminderCollectionEvents =
    {0x000630b2,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_FormRegionEvents =
    {0x0006305b,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_ColumnFormat =
    {0x0006109e,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_ViewField =
    {0x0006f09f,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_OrderFields =
    {0x0006109a,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_OrderField =
    {0x0006109b,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_ViewFields =
    {0x000610a1,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_ViewFont =
    {0x0006109d,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_AutoFormatRules =
    {0x0006f0a2,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_AutoFormatRule =
    {0x0006f0a1,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_NavigationFolders =
    {0x000610f1,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_NavigationFolder =
    {0x000610f2,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_NavigationGroup =
    {0x000610f0,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_NavigationPaneEvents_12 =
    {0x000630f3,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_NavigationGroupsEvents_12 =
    {0x000630f4,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_FormRegion =
    {0x0006315a,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__FormRegionStartup =
    {0x00063059,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_MobileItem =
    {0x000610fe,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_TaskItem =
    {0x00061032,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) DIID_AccountSelectorEvents =
    {0x00063104,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_OutLookApplication =
    {0x0006f03a,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_DistListItem =
    {0x0006103c,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_DocumentItem =
    {0x00061061,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_Explorers =
    {0x00063053,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_Inspectors =
    {0x00063054,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_Folders =
    {0x00063051,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_Items =
    {0x00063052,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_JournalItem =
    {0x00061037,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_NameSpace =
    {0x0006308b,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_NoteItem =
    {0x00061034,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_OutlookBarGroups =
    {0x00063056,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_OutlookBarPane =
    {0x00063055,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_OutlookBarShortcuts =
    {0x00063057,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_PostItem =
    {0x0006103a,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_RemoteItem =
    {0x00061060,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_ReportItem =
    {0x00061035,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_TaskRequestAcceptItem =
    {0x00061052,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_TaskRequestDeclineItem =
    {0x00061053,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_TaskRequestItem =
    {0x00061050,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_TaskRequestUpdateItem =
    {0x00061051,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_Results =
    {0x00061039,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_Views =
    {0x0006f027,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_Reminder =
    {0x0006f028,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_Reminders =
    {0x0006f029,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_StorageItem =
    {0x000610cb,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_NavigationPane =
    {0x000610f3,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_NavigationGroups =
    {0x000610f4,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_DoNotUseMeFolder =
    {0x000610f8,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_TimelineView =
    {0x00062001,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_MailModule =
    {0x000610e9,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_CalendarModule =
    {0x000610ea,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_ContactsModule =
    {0x000610eb,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_TasksModule =
    {0x000610ec,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_JournalModule =
    {0x000610ed,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_NotesModule =
    {0x000610ee,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_TableView =
    {0x00062000,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_IconView =
    {0x00062004,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_CardView =
    {0x00062002,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_CalendarView =
    {0x00062003,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_BusinessCardView =
    {0x0006200b,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_FormRegionStartup =
    {0x00061059,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_TimeZone =
    {0x000610fd,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_SolutionsModule =
    {0x000610ff,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
//extern "C" const GUID __declspec(selectany) CLSID_Conversation =
//    {0x00061101,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_AccountSelector =
    {0x00061103,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_ConversationHeader =
    {0x00061107,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) CLSID_PeopleView =
    {0x0006200c,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__TimeZone =
    {0x000630fd,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__OutLookApplication =
    {0x00063001,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__NameSpace =
    {0x00063002,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_Action =
    {0x00063043,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_Actions =
    {0x0006303e,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_Attachment =
    {0x00063007,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_Attachments =
    {0x0006303c,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__PropertyAccessor =
    {0x0006302d,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_FormDescription =
    {0x00063046,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_OutLookSelection =
    {0x00063087,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__AttachmentSelection =
    {0x000630f9,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__Inspector =
    {0x00063005,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_UserProperty =
    {0x00063042,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_UserProperties =
    {0x0006303d,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__Items =
    {0x00063041,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_OutLookPanes =
    {0x00063009,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__NavigationPane =
    {0x000630e6,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__NavigationModule =
    {0x000630e8,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__NavigationModules =
    {0x000630e7,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__Rule =
    {0x000630cd,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__Rules =
    {0x000630cc,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__RuleAction =
    {0x000630cf,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__RuleActions =
    {0x000630ce,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__AssignToCategoryRuleAction =
    {0x000630d4,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__PlaySoundRuleAction =
    {0x000630d5,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__MarkAsTaskRuleAction =
    {0x000630d6,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__NewItemAlertRuleAction =
    {0x000630d7,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__RuleCondition =
    {0x000630d9,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__RuleConditions =
    {0x000630d8,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__ImportanceRuleCondition =
    {0x000630da,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__AccountRuleCondition =
    {0x000630db,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__TextRuleCondition =
    {0x000630e0,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__CategoryRuleCondition =
    {0x000630dc,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__FormNameRuleCondition =
    {0x000630dd,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__AddressRuleCondition =
    {0x000630fa,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__FromRssFeedRuleCondition =
    {0x000630fb,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__Category =
    {0x000630e3,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__Categories =
    {0x000630e4,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_OutLookView =
    {0x00063095,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__Views =
    {0x0006308d,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__StorageItem =
    {0x000630cb,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__Table =
    {0x000630d2,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__Row =
    {0x000630d3,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__Column =
    {0x000630e5,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__Columns =
    {0x000630e1,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_Link =
    {0x00063089,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_Links =
    {0x0006308a,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_ItemProperty =
    {0x000630a7,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_ItemProperties =
    {0x000630a8,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_OutLookConflict =
    {0x000630c3,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_OutLookConflicts =
    {0x000630c2,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__SimpleItems =
    {0x00063102,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__UserDefinedProperty =
    {0x0006305c,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__UserDefinedProperties =
    {0x00063047,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__SyncObject =
    {0x00063083,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_SyncObjects =
    {0x00063086,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__Inspectors =
    {0x00063008,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__Results =
    {0x0006300c,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__Reminder =
    {0x000630b0,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__Reminders =
    {0x000630b1,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__TimeZones =
    {0x000630fc,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_PropertyPages =
    {0x00063080,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_Exception =
    {0x0006304d,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_Exceptions =
    {0x0006304c,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_RecurrencePattern =
    {0x00063044,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_OutlookBarShortcut =
    {0x00063075,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__OutlookBarShortcuts =
    {0x00063074,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_OutlookBarGroup =
    {0x00063073,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__OutlookBarGroups =
    {0x00063072,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_OutlookBarStorage =
    {0x00063071,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__OutlookBarPane =
    {0x00063070,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_PropertyPageSite =
    {0x0006307f,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_OutLookPages =
    {0x0006303f,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__ViewField =
    {0x000630a0,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__ColumnFormat =
    {0x0006309e,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__ViewFields =
    {0x000630a1,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__IconView =
    {0x00063097,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__OrderField =
    {0x0006309b,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__OrderFields =
    {0x0006309a,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__CardView =
    {0x00063098,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__ViewFont =
    {0x0006309d,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__AutoFormatRules =
    {0x00063094,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__AutoFormatRule =
    {0x00063093,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__TimelineView =
    {0x0006309c,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__NavigationGroup =
    {0x000630f0,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__NavigationGroups =
    {0x000630ef,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__MailModule =
    {0x000630e9,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__CalendarModule =
    {0x000630ea,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__ContactsModule =
    {0x000630eb,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__TasksModule =
    {0x000630ec,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__JournalModule =
    {0x000630ed,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__NotesModule =
    {0x000630ee,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__BusinessCardView =
    {0x000630a2,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__FormRegion =
    {0x0006305a,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__CalendarView =
    {0x00063099,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__TableView =
    {0x00063096,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__PeopleView =
    {0x000630a3,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_Recipient =
    {0x00063045,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_Recipients =
    {0x0006303b,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__SendRuleAction =
    {0x000630d1,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__ToOrFromRuleCondition =
    {0x000630de,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_AddressEntry =
    {0x0006304b,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_AddressEntries =
    {0x0006304a,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__Account =
    {0x000630c5,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__AccountSelector =
    {0x00063103,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__Accounts =
    {0x000630c4,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__ContactItem =
    {0x00063021,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__ExchangeUser =
    {0x000630c9,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__ExchangeDistributionList =
    {0x000630ca,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_MAPIFolder =
    {0x00063006,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__Folders =
    {0x00063040,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__Explorer =
    {0x00063003,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__Store =
    {0x000630c7,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__MoveOrCopyRuleAction =
    {0x000630d0,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_AddressList =
    {0x00063049,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__SenderInAddressListRuleCondition =
    {0x000630df,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__CalendarSharing =
    {0x000630e2,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__Conversation =
    {0x00063101,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__MailItem =
    {0x00063034,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_AddressLists =
    {0x00063048,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__Stores =
    {0x000630c6,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__SelectNamesDialog =
    {0x000630c8,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__SharingItem =
    {0x0006302f,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__Explorers =
    {0x0006300a,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID_Search =
    {0x0006300b,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__AppointmentItem =
    {0x00063033,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__MeetingItem =
    {0x00063062,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__DocumentItem =
    {0x00063020,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__NoteItem =
    {0x00063025,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__NavigationFolder =
    {0x000630f2,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__NavigationFolders =
    {0x000630f1,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__SolutionsModule =
    {0x000630ff,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__MobileItem =
    {0x000630fe,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__JournalItem =
    {0x00063022,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__PostItem =
    {0x00063024,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__TaskItem =
    {0x00063035,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__DistListItem =
    {0x00063081,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__ReportItem =
    {0x00063026,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__RemoteItem =
    {0x00063023,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__TaskRequestItem =
    {0x00063036,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__TaskRequestAcceptItem =
    {0x00063038,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__TaskRequestDeclineItem =
    {0x00063039,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__TaskRequestUpdateItem =
    {0x00063037,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
extern "C" const GUID __declspec(selectany) IID__ConversationHeader =
    {0x00063107,0x0000,0x0000,{0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};

} // namespace Outlook

#pragma pack(pop)
