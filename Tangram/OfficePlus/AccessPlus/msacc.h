﻿// Created by Microsoft (R) C/C++ Compiler Version 15.00.21022.08 (bbc45021).
// C++ source equivalent of Win32 type library C:\Program Files\Microsoft Office\Office14\MSACC.OLB
// compiler-generated file created 01/01/10 at 00:14:59 - DO NOT EDIT!

//
// Cross-referenced type libraries:
//
#include "msado25.h"
#include "mso.h"
#include "acedao.h"
#include "vbe6ext.h"
//

#pragma once
#pragma pack(push, 8)

#include <comdef.h>
namespace MSAccess {

//
// Forward references and typedefs
//

struct __declspec(uuid("4affc9a0-5f99-101b-af4e-00aa003f0f07"))
/* LIBID */ __Access;
enum AcModuleType;
enum AcCloseSave;
enum AcQuitOption;
enum AcSection;
enum AcControlType;
enum AcDataObjectType;
enum AcDataTransferType;
enum AcSendObjectType;
enum AcObjectType;
enum AcFindField;
enum AcFindMatch;
enum AcFormView;
enum AcDataAccessPageView;
enum AcOpenDataMode;
enum AcFormOpenDataMode;
enum AcOutputObjectType;
enum AcPrintQuality;
enum AcPrintRange;
enum AcRecord;
enum AcSearchDirection;
enum AcSysCmdAction;
enum AcTextTransferType;
enum AcView;
enum AcWindowMode;
enum AcFilterType;
enum AcSpreadSheetType;
enum AcImeMode;
enum AcImeSentenceMode;
enum AcHyperlinkPart;
enum AcProjectType;
enum AcCommand;
enum AcShowToolbar;
enum AcFormatConditionType;
enum AcFormatConditionOperator;
enum AcColorIndex;
struct __declspec(uuid("c547e760-9658-101b-81ee-00aa004750e2"))
/* dual interface */ DoCmd;
struct __declspec(uuid("45165490-ef32-11d0-86fb-006097c9818c"))
/* dual interface */ _RecordsetEvents;
struct __declspec(uuid("331fdd00-cf31-11cd-8701-00aa003f0f07"))
/* dual interface */ _AccessProperty;
struct __declspec(uuid("331fdd02-cf31-11cd-8701-00aa003f0f07"))
/* dual interface */ Properties;
struct __declspec(uuid("e27a992c-a330-11d0-81dd-00c04fc2f51b"))
/* dual interface */ _FormatCondition;
struct /* coclass */ FormatCondition;
struct __declspec(uuid("e27a992e-a330-11d0-81dd-00c04fc2f51b"))
/* dual interface */ FormatConditions;
struct __declspec(uuid("31b09710-eadc-11cd-b9f7-00aa004753b5"))
/* dual interface */ _ItemsSelected;
struct __declspec(uuid("3b06e977-e47c-11cd-8701-00aa003f0f07"))
/* dual interface */ Children;
struct __declspec(uuid("b1c1eac1-486f-11ce-a65d-00aa003f0f07"))
/* dual interface */ _AccessField;
struct /* coclass */ AccessField;
struct __declspec(uuid("9cd4a761-a6a9-11ce-a686-00aa003f0f07"))
/* interface */ __Help;
struct __declspec(uuid("50d56611-60ac-11cf-82c9-00aa004b9fe6"))
/* dual interface */ _Hyperlink;
struct /* coclass */ Hyperlink;
struct /* coclass */ Page;
struct __declspec(uuid("3b06e978-e47c-11cd-8701-00aa003f0f07"))
/* dual interface */ Pages;
struct __declspec(uuid("26b96540-8f8e-101b-af4e-00aa003f0f07"))
/* dual interface */ _Control;
struct /* coclass */ Control;
struct __declspec(uuid("90b322a5-f1d9-11cd-8701-00aa003f0f07"))
/* interface */ __ControlInReportEvents;
struct /* coclass */ _ControlInReportEvents;
struct __declspec(uuid("5970c574-eb8c-11cd-8701-00aa003f0f07"))
/* dual interface */ Controls;
struct __declspec(uuid("3b06e948-e47c-11cd-8701-00aa003f0f07"))
/* dual interface */ _Label;
struct __declspec(uuid("bc9e4341-f037-11cd-8701-00aa003f0f07"))
/* interface */ _LabelEvents;
struct /* coclass */ Label;
struct __declspec(uuid("bc9e4358-f037-11cd-8701-00aa003f0f07"))
/* interface */ _ChildLabelEvents;
struct /* coclass */ _ChildLabel;
struct __declspec(uuid("3b06e94a-e47c-11cd-8701-00aa003f0f07"))
/* dual interface */ _Rectangle;
struct __declspec(uuid("bc9e4342-f037-11cd-8701-00aa003f0f07"))
/* interface */ _RectangleEvents;
struct /* coclass */ Rectangle;
struct __declspec(uuid("3b06e94c-e47c-11cd-8701-00aa003f0f07"))
/* dual interface */ _Line;
struct __declspec(uuid("bc9e4343-f037-11cd-8701-00aa003f0f07"))
/* interface */ _LineEvents;
struct /* coclass */ Line;
struct __declspec(uuid("3b06e94e-e47c-11cd-8701-00aa003f0f07"))
/* dual interface */ _Image;
struct __declspec(uuid("bc9e4344-f037-11cd-8701-00aa003f0f07"))
/* interface */ _ImageEvents;
struct /* coclass */ Image;
struct __declspec(uuid("3b06e950-e47c-11cd-8701-00aa003f0f07"))
/* dual interface */ _CommandButton;
struct __declspec(uuid("bc9e4345-f037-11cd-8701-00aa003f0f07"))
/* interface */ _CommandButtonEvents;
struct /* coclass */ CommandButton;
struct __declspec(uuid("3b06e952-e47c-11cd-8701-00aa003f0f07"))
/* dual interface */ _OptionButton;
struct __declspec(uuid("bc9e4346-f037-11cd-8701-00aa003f0f07"))
/* interface */ _OptionButtonEvents;
struct /* coclass */ OptionButton;
struct __declspec(uuid("bc9e435b-f037-11cd-8701-00aa003f0f07"))
/* interface */ _OptionButtonInOptionEvents;
struct /* coclass */ _OptionButtonInOption;
struct __declspec(uuid("3b06e954-e47c-11cd-8701-00aa003f0f07"))
/* dual interface */ _Checkbox;
struct __declspec(uuid("bc9e4347-f037-11cd-8701-00aa003f0f07"))
/* interface */ _CheckBoxEvents;
struct /* coclass */ CheckBox;
struct __declspec(uuid("bc9e435d-f037-11cd-8701-00aa003f0f07"))
/* interface */ _CheckBoxInOptionEvents;
struct /* coclass */ _CheckBoxInOption;
struct __declspec(uuid("3b06e956-e47c-11cd-8701-00aa003f0f07"))
/* dual interface */ _OptionGroup;
struct __declspec(uuid("bc9e4348-f037-11cd-8701-00aa003f0f07"))
/* interface */ _OptionGroupEvents;
struct /* coclass */ OptionGroup;
struct __declspec(uuid("3b06e958-e47c-11cd-8701-00aa003f0f07"))
/* dual interface */ _BoundObjectFrame;
struct __declspec(uuid("bc9e4349-f037-11cd-8701-00aa003f0f07"))
/* interface */ _BoundObjectFrameEvents;
struct /* coclass */ BoundObjectFrame;
struct __declspec(uuid("3b06e946-e47c-11cd-8701-00aa003f0f07"))
/* dual interface */ _Textbox;
struct __declspec(uuid("bc9e4340-f037-11cd-8701-00aa003f0f07"))
/* interface */ _TextBoxEvents;
struct /* coclass */ TextBox;
struct __declspec(uuid("3b06e95a-e47c-11cd-8701-00aa003f0f07"))
/* dual interface */ _ListBox;
struct __declspec(uuid("bc9e434b-f037-11cd-8701-00aa003f0f07"))
/* interface */ _ListBoxEvents;
struct /* coclass */ ListBox;
struct __declspec(uuid("3b06e95c-e47c-11cd-8701-00aa003f0f07"))
/* dual interface */ _Combobox;
struct __declspec(uuid("bc9e434c-f037-11cd-8701-00aa003f0f07"))
/* interface */ _ComboBoxEvents;
struct /* coclass */ ComboBox;
struct __declspec(uuid("3b06e95e-e47c-11cd-8701-00aa003f0f07"))
/* dual interface */ _ObjectFrame;
struct __declspec(uuid("bc9e434d-f037-11cd-8701-00aa003f0f07"))
/* interface */ _ObjectFrameEvents;
struct /* coclass */ ObjectFrame;
struct __declspec(uuid("3b06e960-e47c-11cd-8701-00aa003f0f07"))
/* dual interface */ _PageBreak;
struct __declspec(uuid("bc9e434e-f037-11cd-8701-00aa003f0f07"))
/* interface */ _PageBreakEvents;
struct /* coclass */ PageBreak;
struct __declspec(uuid("3b06e962-e47c-11cd-8701-00aa003f0f07"))
/* dual interface */ _ToggleButton;
struct __declspec(uuid("bc9e434f-f037-11cd-8701-00aa003f0f07"))
/* interface */ _ToggleButtonEvents;
struct /* coclass */ ToggleButton;
struct __declspec(uuid("bc9e435f-f037-11cd-8701-00aa003f0f07"))
/* interface */ _ToggleButtonInOptionEvents;
struct /* coclass */ _ToggleButtonInOption;
struct __declspec(uuid("9cd4a760-a6a9-11ce-a686-00aa003f0f07"))
/* dual interface */ _PaletteButton;
struct __declspec(uuid("a843ccd0-6e2c-11cf-a219-00a0c90542ff"))
/* interface */ _PaletteButtonEvents;
struct /* coclass */ PaletteButton;
struct __declspec(uuid("3b06e964-e47c-11cd-8701-00aa003f0f07"))
/* dual interface */ _SubForm;
struct __declspec(uuid("bc9e4350-f037-11cd-8701-00aa003f0f07"))
/* interface */ _SubFormEvents;
struct /* coclass */ SubForm;
struct __declspec(uuid("3b06e966-e47c-11cd-8701-00aa003f0f07"))
/* dual interface */ _SubReport;
struct __declspec(uuid("bc9e4351-f037-11cd-8701-00aa003f0f07"))
/* interface */ _SubReportEvents;
struct /* coclass */ SubReport;
struct __declspec(uuid("3b06e968-e47c-11cd-8701-00aa003f0f07"))
/* dual interface */ _CustomControl;
struct __declspec(uuid("bc9e4352-f037-11cd-8701-00aa003f0f07"))
/* interface */ _CustomControlEvents;
struct /* coclass */ CustomControl;
struct __declspec(uuid("300471e2-7426-11ce-ab64-00aa0042b7ce"))
/* interface */ _CustomControlInReportEvents;
struct /* coclass */ _CustomControlInReport;
struct __declspec(uuid("3b06e971-e47c-11cd-8701-00aa003f0f07"))
/* dual interface */ _TabControl;
struct __declspec(uuid("3b06e972-e47c-11cd-8701-00aa003f0f07"))
/* interface */ _TabControlEvents;
struct /* coclass */ TabControl;
struct __declspec(uuid("3b06e974-e47c-11cd-8701-00aa003f0f07"))
/* dual interface */ _Page;
struct __declspec(uuid("3b06e975-e47c-11cd-8701-00aa003f0f07"))
/* interface */ _PageEvents;
struct __declspec(uuid("331fdcfc-cf31-11cd-8701-00aa003f0f07"))
/* dual interface */ _Section;
struct __declspec(uuid("bc9e4353-f037-11cd-8701-00aa003f0f07"))
/* interface */ _SectionEvents;
struct /* coclass */ Section;
struct __declspec(uuid("331fdd27-cf31-11cd-8701-00aa003f0f07"))
/* dual interface */ _GroupLevel;
struct /* coclass */ GroupLevel;
struct __declspec(uuid("bc9e4361-f037-11cd-8701-00aa003f0f07"))
/* interface */ _SectionInReportEvents;
struct /* coclass */ _SectionInReport;
struct __declspec(uuid("7ad9e905-baf8-11ce-a68a-00aa003f0f07"))
/* interface */ _PageHdrFtrInReportEvents;
struct /* coclass */ _PageHdrFtrInReport;
enum RefKind;
enum ProcKind;
struct __declspec(uuid("331fdcfe-cf31-11cd-8701-00aa003f0f07"))
/* dual interface */ Module;
struct __declspec(uuid("9dd0af42-6e28-11cf-9008-00aa0042b7ce"))
/* dual interface */ Modules;
struct __declspec(uuid("e5135d80-8f8d-101b-af4e-00aa003f0f07"))
/* dual interface */ _Form;
struct __declspec(uuid("331fdcfb-cf31-11cd-8701-00aa003f0f07"))
/* interface */ _FormEvents;
struct /* coclass */ FormOld;
struct __declspec(uuid("b1bb0e80-6128-101b-af4e-00aa003f0f07"))
/* dual interface */ Forms;
struct __declspec(uuid("3e8b6b00-91ff-101b-af4e-00aa003f0f07"))
/* dual interface */ _Report;
struct __declspec(uuid("bc9e4357-f037-11cd-8701-00aa003f0f07"))
/* interface */ _ReportEvents;
struct /* coclass */ ReportOld;
struct __declspec(uuid("d1523700-6128-101b-af4e-00aa003f0f07"))
/* dual interface */ Reports;
struct __declspec(uuid("dc6b66c0-6128-101b-af4e-00aa003f0f07"))
/* dual interface */ Screen;
struct __declspec(uuid("68cce6c0-6129-101b-af4e-00aa003f0f07"))
/* dual interface */ _Application;
struct /* coclass */ Application;
struct __declspec(uuid("eb106212-9c89-11cf-a2b3-00a0c90542ff"))
/* dual interface */ Reference;
struct __declspec(uuid("eb106213-9c89-11cf-a2b3-00a0c90542ff"))
/* dual interface */ _References;
struct __declspec(uuid("f163f201-ada2-11cf-89a9-00a0c9054129"))
/* dispinterface */ _References_Events;
struct /* coclass */ References;
struct __declspec(uuid("8b06e320-b23c-11cf-89a8-00a0c9054129"))
/* dual interface */ _Dummy;
struct __declspec(uuid("493d8a72-1db1-11d1-98a2-006008197d41"))
/* dual interface */ _DataAccessPage;
struct /* coclass */ DataAccessPage;
struct __declspec(uuid("493d8a71-1db1-11d1-98a2-006008197d41"))
/* dual interface */ DataAccessPages;
struct __declspec(uuid("ddbd4001-44d5-11d1-98c0-006008197d41"))
/* dual interface */ AllObjects;
struct /* coclass */ AllForms;
struct /* coclass */ AllReports;
struct /* coclass */ AllMacros;
struct /* coclass */ AllModules;
struct /* coclass */ AllDataAccessPages;
struct /* coclass */ AllTables;
struct /* coclass */ AllQueries;
struct /* coclass */ AllViews;
struct /* coclass */ AllStoredProcedures;
struct /* coclass */ AllDatabaseDiagrams;
struct __declspec(uuid("1fe3e471-a7d0-11d1-9944-006008197d41"))
/* dual interface */ AccessObjectProperty;
struct __declspec(uuid("0921f331-a7c9-11d1-9944-006008197d41"))
/* dual interface */ AccessObjectProperties;
struct __declspec(uuid("9212ba71-3e79-11d1-98bd-006008197d41"))
/* dual interface */ _CurrentProject;
struct __declspec(uuid("9212ba73-3e79-11d1-98bd-006008197d41"))
/* dual interface */ _CurrentData;
struct /* coclass */ CurrentProject;
struct /* coclass */ CurrentData;
struct /* coclass */ CodeProject;
struct /* coclass */ CodeData;
struct __declspec(uuid("abe316b1-3ff6-11d1-98bd-006008197d41"))
/* dual interface */ AccessObject;
struct __declspec(uuid("cb9d3171-4728-11d1-8334-006008197cc8"))
/* dual interface */ _WizHook;
struct /* coclass */ WizHook;
struct __declspec(uuid("416ed4f0-ab31-11d1-bf72-0060083e43cf"))
/* dual interface */ _DefaultWebOptions;
struct /* coclass */ DefaultWebOptions;
struct __declspec(uuid("416ed4f6-ab31-11d1-bf72-0060083e43cf"))
/* dual interface */ _WebOptions;
struct /* coclass */ WebOptions;
struct __declspec(uuid("58bf3100-b580-11cf-89a8-00a0c9054129"))
/* interface */ _DummyEvents;
struct /* coclass */ Class;
struct __declspec(uuid("dbc5175f-a8ed-11d3-a0dd-00c04f68712b"))
/* dual interface */ _Printer;
struct /* coclass */ Printer;
struct __declspec(uuid("dbc51760-a8ed-11d3-a0dd-00c04f68712b"))
/* dual interface */ Printers;
struct __declspec(uuid("3f4a878e-c395-11d3-8d1f-0050048383fb"))
/* dual interface */ _Form2;
struct /* coclass */ FormOldV10;
struct __declspec(uuid("32a1c62a-d374-11d3-8d21-0050048383fb"))
/* dual interface */ _Report2;
struct /* coclass */ ReportOldV10;
enum AcDefView;
enum AcCurrentView;
enum AcFileFormat;
enum AcExportXMLObjectType;
enum AcExportXMLSchemaFormat;
enum AcExportXMLEncoding;
enum AcPrintColor;
enum AcPrintDuplex;
enum AcPrintOrientation;
enum AcPrintObjQuality;
enum AcPrintPaperBin;
enum AcPrintPaperSize;
enum AcPrintItemLayout;
enum AcImportXMLOption;
struct /* coclass */ AllFunctions;
enum AcExportXMLOtherFlags;
enum AcTransformXMLScriptOption;
struct /* coclass */ AdditionalData;
struct __declspec(uuid("dbc51762-a8ed-11d3-a0dd-00c04f68712b"))
/* dual interface */ _AdditionalData;
struct /* coclass */ AutoCorrect;
struct __declspec(uuid("063a8de5-e2c5-44ea-a90e-6d42207d25c8"))
/* dual interface */ _AutoCorrect;
struct /* coclass */ DependencyObjects;
struct __declspec(uuid("79f41340-18c4-4aa1-86ee-5cde9d2ce600"))
/* dual interface */ _DependencyObjects;
struct /* coclass */ DependencyInfo;
struct __declspec(uuid("d05819c6-8859-418b-a82f-18b6cb743c8e"))
/* dual interface */ _DependencyInfo;
struct /* coclass */ SmartTags;
struct __declspec(uuid("b1f7de76-ae97-48d9-a4fd-2c172b2bd7a9"))
/* dual interface */ _SmartTags;
struct /* coclass */ SmartTagAction;
struct __declspec(uuid("1560be9f-0718-42be-bb2b-d6706593ac40"))
/* dual interface */ _SmartTagAction;
struct /* coclass */ SmartTagActions;
struct __declspec(uuid("3836c9ec-e9cb-4817-a738-50b4dd3ddd8d"))
/* dual interface */ _SmartTagActions;
struct /* coclass */ SmartTagProperty;
struct __declspec(uuid("6a3308ea-73df-436a-a826-41a1f02186c4"))
/* dual interface */ _SmartTagProperty;
struct /* coclass */ SmartTagProperties;
struct __declspec(uuid("3a6a13ff-1162-461d-899c-768d025119fb"))
/* dual interface */ _SmartTagProperties;
struct /* coclass */ SmartTag;
struct __declspec(uuid("9d2ab5d3-cd72-4a9a-a72e-2b3492cbd0ae"))
/* dual interface */ _SmartTag;
struct __declspec(uuid("55b0e0c9-c75d-4f42-ad20-6939c1d05b70"))
/* dual interface */ ImportExportSpecification;
struct __declspec(uuid("77dc8648-f725-4371-88c3-6eb6c4894ca4"))
/* dual interface */ ImportExportSpecifications;
struct __declspec(uuid("66b22fb4-f70e-4f03-a00a-f76e9adbbf10"))
/* dual interface */ _Form3;
struct __declspec(uuid("0ea530dd-5b30-4278-bd28-47c4d11619bd"))
/* dispinterface */ _FormEvents2;
struct /* coclass */ Form;
struct __declspec(uuid("b0e35b78-55b0-47fb-8951-ca616f25ceaf"))
/* dual interface */ _Report3;
struct __declspec(uuid("d7281a87-4b30-41c5-ab7b-fabf9a35442a"))
/* dispinterface */ _ReportEvents2;
struct /* coclass */ Report;
struct __declspec(uuid("3b06e980-e47c-11cd-8701-00aa003f0f07"))
/* dual interface */ _Attachment;
struct __declspec(uuid("3b06e981-e47c-11cd-8701-00aa003f0f07"))
/* dispinterface */ DispAttachmentEvents;
struct /* coclass */ Attachment;
enum AcSplitFormPrinting;
enum AcSplitFormOrientation;
enum AcSplitFormDatasheet;
enum AcLayoutType;
enum AcTextFormat;
enum AcSeparatorCharacters;
enum AcHorizontalAnchor;
enum AcVerticalAnchor;
struct __declspec(uuid("22585ba1-7bd1-40af-8095-e688176cdeb0"))
/* dual interface */ _MacroError;
struct /* coclass */ MacroError;
enum AcDisplayAs;
enum AcExportQuality;
enum AcDefReportView;
enum AcSharePointListTransferType;
struct __declspec(uuid("fb74f43a-9732-4552-b1c2-269abf082492"))
/* dual interface */ _TempVar;
struct /* coclass */ TempVar;
struct __declspec(uuid("9e3f602f-ba36-4865-b3cd-f2eb008f62de"))
/* dual interface */ _TempVars;
struct /* coclass */ TempVars;
enum AcProperty;
enum AcNewDatabaseFormat;
enum AcCursorOnHover;
struct __declspec(uuid("2e70526b-92d1-43cc-a57b-ed48bccc711d"))
/* dispinterface */ DispCommandButtonEvents;
struct __declspec(uuid("2e70526c-92d1-43cc-a57b-ed48bccc711d"))
/* dispinterface */ DispBoundObjectFrameEvents;
struct __declspec(uuid("2e70526d-92d1-43cc-a57b-ed48bccc711d"))
/* dispinterface */ DispObjectFrameEvents;
struct __declspec(uuid("2e70526e-92d1-43cc-a57b-ed48bccc711d"))
/* dispinterface */ DispCustomControlEvents;
struct __declspec(uuid("2e70526a-92d1-43cc-a57b-ed48bccc711d"))
/* dispinterface */ DispCheckBoxEvents;
struct __declspec(uuid("2e705268-92d1-43cc-a57b-ed48bccc711d"))
/* dispinterface */ DispOptionButtonEvents;
struct __declspec(uuid("2e705266-92d1-43cc-a57b-ed48bccc711d"))
/* dispinterface */ DispToggleButtonEvents;
struct __declspec(uuid("2e705271-92d1-43cc-a57b-ed48bccc711d"))
/* dispinterface */ DispRectangleEvents;
struct __declspec(uuid("2e705272-92d1-43cc-a57b-ed48bccc711d"))
/* dispinterface */ DispImageEvents;
struct __declspec(uuid("2e705273-92d1-43cc-a57b-ed48bccc711d"))
/* dispinterface */ DispListBoxEvents;
struct __declspec(uuid("2e705274-92d1-43cc-a57b-ed48bccc711d"))
/* dispinterface */ DispOptionGroupEvents;
struct __declspec(uuid("2e705275-92d1-43cc-a57b-ed48bccc711d"))
/* dispinterface */ DispTextBoxEvents;
struct __declspec(uuid("2e705276-92d1-43cc-a57b-ed48bccc711d"))
/* dispinterface */ DispComboBoxEvents;
struct __declspec(uuid("2e705277-92d1-43cc-a57b-ed48bccc711d"))
/* dispinterface */ DispSubFormEvents;
struct __declspec(uuid("2e705278-92d1-43cc-a57b-ed48bccc711d"))
/* dispinterface */ DispSubReportEvents;
struct __declspec(uuid("2e705279-92d1-43cc-a57b-ed48bccc711d"))
/* dispinterface */ DispLineEvents;
struct __declspec(uuid("2e70527a-92d1-43cc-a57b-ed48bccc711d"))
/* dispinterface */ DispPageBreakEvents;
struct __declspec(uuid("2e70527b-92d1-43cc-a57b-ed48bccc711d"))
/* dispinterface */ DispSectionEvents;
struct __declspec(uuid("2e70527c-92d1-43cc-a57b-ed48bccc711d"))
/* dispinterface */ DispSectionInReportEvents;
struct __declspec(uuid("2e70527d-92d1-43cc-a57b-ed48bccc711d"))
/* dispinterface */ _DispControlInReportEvents;
struct __declspec(uuid("2e70527e-92d1-43cc-a57b-ed48bccc711d"))
/* dispinterface */ DispCustomControlInReportEvents;
struct __declspec(uuid("2e70527f-92d1-43cc-a57b-ed48bccc711d"))
/* dispinterface */ DispPaletteButtonEvents;
struct __declspec(uuid("2e705280-92d1-43cc-a57b-ed48bccc711d"))
/* dispinterface */ DispPageHdrFtrInReportEvents;
struct __declspec(uuid("2e705281-92d1-43cc-a57b-ed48bccc711d"))
/* dispinterface */ DispTabControlEvents;
struct __declspec(uuid("2e705282-92d1-43cc-a57b-ed48bccc711d"))
/* dispinterface */ DispPageEvents;
struct __declspec(uuid("3b06e982-e47c-11cd-8701-00aa003f0f07"))
/* dispinterface */ DispLabelEvents;
enum AcDisplayAsHyperlink;
enum AcPictureCaptionArrangement;
struct __declspec(uuid("2e705270-92d1-43cc-a57b-ed48bccc711d"))
/* dispinterface */ DispChildLabelEvents;
struct __declspec(uuid("3b06e987-e47c-11cd-8701-00aa003f0f07"))
/* dual interface */ _EmptyCell;
struct __declspec(uuid("3b06e988-e47c-11cd-8701-00aa003f0f07"))
/* dispinterface */ DispEmptyCellEvents;
struct /* coclass */ EmptyCell;
enum AcWebBrowserState;
enum AcWebBrowserScrollBars;
struct __declspec(uuid("b01d3066-84bb-44bd-b2f7-64a026bdfa8c"))
/* dual interface */ _WebBrowserControl;
struct __declspec(uuid("eacb9075-68f8-4e3b-b865-e1ce6be0447c"))
/* dispinterface */ DispWebBrowserControlEvents;
struct /* coclass */ WebBrowserControl;
enum AcNavPaneCategory;
enum AcNavPaneSort;
enum AcNavPaneView;
struct __declspec(uuid("0bd6cd37-aff5-428d-8414-6c71a2f5075f"))
/* dual interface */ _NavigationPane;
struct /* coclass */ NavigationPane;
struct __declspec(uuid("2bbbe604-022d-428a-bfc7-68aac0d590ef"))
/* dual interface */ _NavigationPaneCategory;
struct /* coclass */ NavigationPaneCategory;
struct __declspec(uuid("e919538e-dc0e-4e3a-9a26-a4302ae907f5"))
/* dual interface */ _NavigationPaneCategories;
struct /* coclass */ NavigationPaneCategories;
struct __declspec(uuid("2008871b-62f5-48c6-a706-23ab3d985ae7"))
/* dual interface */ _NavigationPaneGroup;
struct /* coclass */ NavigationPaneGroup;
struct __declspec(uuid("15889271-00bd-40aa-904f-8f6b6d3b1f6b"))
/* dual interface */ _NavigationPaneGroups;
struct /* coclass */ NavigationPaneGroups;
struct __declspec(uuid("660c9bcf-f6a7-4296-9fa3-a1806fd72ff0"))
/* dual interface */ _NavigationPaneShortcut;
struct /* coclass */ NavigationPaneShortcut;
struct __declspec(uuid("87412b71-18be-4224-9b80-9747f3ae22fe"))
/* dual interface */ _NavigationPaneShortcuts;
struct /* coclass */ NavigationPaneShortcuts;
enum AcFormatBarLimits;
struct __declspec(uuid("371bf535-7914-4474-bae9-27281d431237"))
/* dual interface */ WebServices;
struct __declspec(uuid("7a7b2b33-a93d-4e04-bfc7-6041aaa0046d"))
/* dual interface */ WebService;
struct __declspec(uuid("4b0e334d-b734-458a-a041-b528d031d4e5"))
/* dual interface */ Entities;
struct __declspec(uuid("3d1e34bd-f23f-46d1-b80a-2ba8aca850a9"))
/* dual interface */ Entity;
struct __declspec(uuid("cb2df2b1-383d-4a3e-bba1-b0e6d1cc48ac"))
/* dual interface */ Operations;
struct __declspec(uuid("96efa5b6-f286-4590-96b5-f944707646a1"))
/* dual interface */ Operation;
struct __declspec(uuid("540fc6d0-9bca-4236-b6c0-e5598cb7a332"))
/* dual interface */ WSParameters;
struct __declspec(uuid("4a99c8db-1308-448b-9ee9-aa6a9ac050e7"))
/* dual interface */ WSParameter;
struct __declspec(uuid("3b06e996-e47c-11cd-8701-00aa003f0f07"))
/* dispinterface */ DispNavigationButtonEvents;
struct __declspec(uuid("3b06e992-e47c-11cd-8701-00aa003f0f07"))
/* dispinterface */ DispNavigationControlEvents;
struct __declspec(uuid("3b06e994-e47c-11cd-8701-00aa003f0f07"))
/* dual interface */ _NavigationButton;
struct /* coclass */ NavigationButton;
struct __declspec(uuid("3b06e990-e47c-11cd-8701-00aa003f0f07"))
/* dual interface */ _NavigationControl;
struct /* coclass */ NavigationControl;
struct __declspec(uuid("8357bb52-95a2-4043-a040-2825facef50d"))
/* dual interface */ _LocalVar;
struct /* coclass */ LocalVar;
struct __declspec(uuid("8357bb54-95a2-4043-a040-2825facef50d"))
/* dual interface */ _LocalVars;
struct /* coclass */ LocalVars;
enum AcBrowseToObjectType;
enum AcWebUserDisplay;
enum AcWebUserGroupsDisplay;
enum AcResourceType;
struct __declspec(uuid("78b78575-c7b7-4179-824a-95adbf5423e7"))
/* dual interface */ SharedResources;
struct __declspec(uuid("4dcf0ac2-53cc-45e5-b417-01f3ddd387e5"))
/* dual interface */ SharedResource;
enum AcNavigationSpan;

//
// Smart pointer typedef declarations
//

_COM_SMARTPTR_TYPEDEF(_RecordsetEvents, __uuidof(_RecordsetEvents));
_COM_SMARTPTR_TYPEDEF(_ItemsSelected, __uuidof(_ItemsSelected));
_COM_SMARTPTR_TYPEDEF(Children, __uuidof(Children));
_COM_SMARTPTR_TYPEDEF(_AccessField, __uuidof(_AccessField));
_COM_SMARTPTR_TYPEDEF(__Help, __uuidof(__Help));
_COM_SMARTPTR_TYPEDEF(_Hyperlink, __uuidof(_Hyperlink));
_COM_SMARTPTR_TYPEDEF(Pages, __uuidof(Pages));
_COM_SMARTPTR_TYPEDEF(__ControlInReportEvents, __uuidof(__ControlInReportEvents));
_COM_SMARTPTR_TYPEDEF(_LabelEvents, __uuidof(_LabelEvents));
_COM_SMARTPTR_TYPEDEF(_ChildLabelEvents, __uuidof(_ChildLabelEvents));
_COM_SMARTPTR_TYPEDEF(_RectangleEvents, __uuidof(_RectangleEvents));
_COM_SMARTPTR_TYPEDEF(_LineEvents, __uuidof(_LineEvents));
_COM_SMARTPTR_TYPEDEF(_ImageEvents, __uuidof(_ImageEvents));
_COM_SMARTPTR_TYPEDEF(_CommandButtonEvents, __uuidof(_CommandButtonEvents));
_COM_SMARTPTR_TYPEDEF(_OptionButtonEvents, __uuidof(_OptionButtonEvents));
_COM_SMARTPTR_TYPEDEF(_OptionButtonInOptionEvents, __uuidof(_OptionButtonInOptionEvents));
_COM_SMARTPTR_TYPEDEF(_CheckBoxEvents, __uuidof(_CheckBoxEvents));
_COM_SMARTPTR_TYPEDEF(_CheckBoxInOptionEvents, __uuidof(_CheckBoxInOptionEvents));
_COM_SMARTPTR_TYPEDEF(_OptionGroupEvents, __uuidof(_OptionGroupEvents));
_COM_SMARTPTR_TYPEDEF(_BoundObjectFrameEvents, __uuidof(_BoundObjectFrameEvents));
_COM_SMARTPTR_TYPEDEF(_TextBoxEvents, __uuidof(_TextBoxEvents));
_COM_SMARTPTR_TYPEDEF(_ListBoxEvents, __uuidof(_ListBoxEvents));
_COM_SMARTPTR_TYPEDEF(_ComboBoxEvents, __uuidof(_ComboBoxEvents));
_COM_SMARTPTR_TYPEDEF(_ObjectFrameEvents, __uuidof(_ObjectFrameEvents));
_COM_SMARTPTR_TYPEDEF(_PageBreakEvents, __uuidof(_PageBreakEvents));
_COM_SMARTPTR_TYPEDEF(_ToggleButtonEvents, __uuidof(_ToggleButtonEvents));
_COM_SMARTPTR_TYPEDEF(_ToggleButtonInOptionEvents, __uuidof(_ToggleButtonInOptionEvents));
_COM_SMARTPTR_TYPEDEF(_PaletteButtonEvents, __uuidof(_PaletteButtonEvents));
_COM_SMARTPTR_TYPEDEF(_SubFormEvents, __uuidof(_SubFormEvents));
_COM_SMARTPTR_TYPEDEF(_SubReportEvents, __uuidof(_SubReportEvents));
_COM_SMARTPTR_TYPEDEF(_CustomControlEvents, __uuidof(_CustomControlEvents));
_COM_SMARTPTR_TYPEDEF(_CustomControlInReportEvents, __uuidof(_CustomControlInReportEvents));
_COM_SMARTPTR_TYPEDEF(_TabControlEvents, __uuidof(_TabControlEvents));
_COM_SMARTPTR_TYPEDEF(_PageEvents, __uuidof(_PageEvents));
_COM_SMARTPTR_TYPEDEF(_SectionEvents, __uuidof(_SectionEvents));
_COM_SMARTPTR_TYPEDEF(_SectionInReportEvents, __uuidof(_SectionInReportEvents));
_COM_SMARTPTR_TYPEDEF(_PageHdrFtrInReportEvents, __uuidof(_PageHdrFtrInReportEvents));
_COM_SMARTPTR_TYPEDEF(_FormEvents, __uuidof(_FormEvents));
_COM_SMARTPTR_TYPEDEF(_ReportEvents, __uuidof(_ReportEvents));
_COM_SMARTPTR_TYPEDEF(_AccessProperty, __uuidof(_AccessProperty));
_COM_SMARTPTR_TYPEDEF(Properties, __uuidof(Properties));
_COM_SMARTPTR_TYPEDEF(Controls, __uuidof(Controls));
_COM_SMARTPTR_TYPEDEF(_PageBreak, __uuidof(_PageBreak));
_COM_SMARTPTR_TYPEDEF(_PaletteButton, __uuidof(_PaletteButton));
_COM_SMARTPTR_TYPEDEF(_Page, __uuidof(_Page));
_COM_SMARTPTR_TYPEDEF(_Section, __uuidof(_Section));
_COM_SMARTPTR_TYPEDEF(_GroupLevel, __uuidof(_GroupLevel));
_COM_SMARTPTR_TYPEDEF(Module, __uuidof(Module));
_COM_SMARTPTR_TYPEDEF(Modules, __uuidof(Modules));
_COM_SMARTPTR_TYPEDEF(_References_Events, __uuidof(_References_Events));
_COM_SMARTPTR_TYPEDEF(Reference, __uuidof(Reference));
_COM_SMARTPTR_TYPEDEF(_References, __uuidof(_References));
_COM_SMARTPTR_TYPEDEF(_Dummy, __uuidof(_Dummy));
_COM_SMARTPTR_TYPEDEF(DataAccessPages, __uuidof(DataAccessPages));
_COM_SMARTPTR_TYPEDEF(AccessObjectProperty, __uuidof(AccessObjectProperty));
_COM_SMARTPTR_TYPEDEF(AccessObjectProperties, __uuidof(AccessObjectProperties));
_COM_SMARTPTR_TYPEDEF(_WizHook, __uuidof(_WizHook));
_COM_SMARTPTR_TYPEDEF(_DefaultWebOptions, __uuidof(_DefaultWebOptions));
_COM_SMARTPTR_TYPEDEF(_WebOptions, __uuidof(_WebOptions));
_COM_SMARTPTR_TYPEDEF(_DataAccessPage, __uuidof(_DataAccessPage));
_COM_SMARTPTR_TYPEDEF(_DummyEvents, __uuidof(_DummyEvents));
_COM_SMARTPTR_TYPEDEF(_Printer, __uuidof(_Printer));
_COM_SMARTPTR_TYPEDEF(Printers, __uuidof(Printers));
_COM_SMARTPTR_TYPEDEF(_CurrentData, __uuidof(_CurrentData));
_COM_SMARTPTR_TYPEDEF(_AdditionalData, __uuidof(_AdditionalData));
_COM_SMARTPTR_TYPEDEF(_AutoCorrect, __uuidof(_AutoCorrect));
_COM_SMARTPTR_TYPEDEF(_SmartTagAction, __uuidof(_SmartTagAction));
_COM_SMARTPTR_TYPEDEF(_SmartTagActions, __uuidof(_SmartTagActions));
_COM_SMARTPTR_TYPEDEF(_SmartTagProperty, __uuidof(_SmartTagProperty));
_COM_SMARTPTR_TYPEDEF(_SmartTagProperties, __uuidof(_SmartTagProperties));
_COM_SMARTPTR_TYPEDEF(_SmartTag, __uuidof(_SmartTag));
_COM_SMARTPTR_TYPEDEF(_SmartTags, __uuidof(_SmartTags));
_COM_SMARTPTR_TYPEDEF(ImportExportSpecification, __uuidof(ImportExportSpecification));
_COM_SMARTPTR_TYPEDEF(ImportExportSpecifications, __uuidof(ImportExportSpecifications));
_COM_SMARTPTR_TYPEDEF(_FormEvents2, __uuidof(_FormEvents2));
_COM_SMARTPTR_TYPEDEF(_Form, __uuidof(_Form));
_COM_SMARTPTR_TYPEDEF(Forms, __uuidof(Forms));
_COM_SMARTPTR_TYPEDEF(_Form2, __uuidof(_Form2));
_COM_SMARTPTR_TYPEDEF(_ReportEvents2, __uuidof(_ReportEvents2));
_COM_SMARTPTR_TYPEDEF(_SubReport, __uuidof(_SubReport));
_COM_SMARTPTR_TYPEDEF(_Report, __uuidof(_Report));
_COM_SMARTPTR_TYPEDEF(Reports, __uuidof(Reports));
_COM_SMARTPTR_TYPEDEF(Screen, __uuidof(Screen));
_COM_SMARTPTR_TYPEDEF(_Report2, __uuidof(_Report2));
_COM_SMARTPTR_TYPEDEF(_Report3, __uuidof(_Report3));
_COM_SMARTPTR_TYPEDEF(DispAttachmentEvents, __uuidof(DispAttachmentEvents));
_COM_SMARTPTR_TYPEDEF(_Form3, __uuidof(_Form3));
_COM_SMARTPTR_TYPEDEF(_Control, __uuidof(_Control));
_COM_SMARTPTR_TYPEDEF(_Label, __uuidof(_Label));
_COM_SMARTPTR_TYPEDEF(_Rectangle, __uuidof(_Rectangle));
_COM_SMARTPTR_TYPEDEF(_Line, __uuidof(_Line));
_COM_SMARTPTR_TYPEDEF(_Image, __uuidof(_Image));
_COM_SMARTPTR_TYPEDEF(_OptionButton, __uuidof(_OptionButton));
_COM_SMARTPTR_TYPEDEF(_Checkbox, __uuidof(_Checkbox));
_COM_SMARTPTR_TYPEDEF(_OptionGroup, __uuidof(_OptionGroup));
_COM_SMARTPTR_TYPEDEF(_BoundObjectFrame, __uuidof(_BoundObjectFrame));
_COM_SMARTPTR_TYPEDEF(_ListBox, __uuidof(_ListBox));
_COM_SMARTPTR_TYPEDEF(_ObjectFrame, __uuidof(_ObjectFrame));
_COM_SMARTPTR_TYPEDEF(_ToggleButton, __uuidof(_ToggleButton));
_COM_SMARTPTR_TYPEDEF(_SubForm, __uuidof(_SubForm));
_COM_SMARTPTR_TYPEDEF(_CustomControl, __uuidof(_CustomControl));
_COM_SMARTPTR_TYPEDEF(_TabControl, __uuidof(_TabControl));
_COM_SMARTPTR_TYPEDEF(_MacroError, __uuidof(_MacroError));
_COM_SMARTPTR_TYPEDEF(_Attachment, __uuidof(_Attachment));
_COM_SMARTPTR_TYPEDEF(_TempVar, __uuidof(_TempVar));
_COM_SMARTPTR_TYPEDEF(_TempVars, __uuidof(_TempVars));
_COM_SMARTPTR_TYPEDEF(DispCommandButtonEvents, __uuidof(DispCommandButtonEvents));
_COM_SMARTPTR_TYPEDEF(DispBoundObjectFrameEvents, __uuidof(DispBoundObjectFrameEvents));
_COM_SMARTPTR_TYPEDEF(DispObjectFrameEvents, __uuidof(DispObjectFrameEvents));
_COM_SMARTPTR_TYPEDEF(DispCustomControlEvents, __uuidof(DispCustomControlEvents));
_COM_SMARTPTR_TYPEDEF(DispCheckBoxEvents, __uuidof(DispCheckBoxEvents));
_COM_SMARTPTR_TYPEDEF(DispOptionButtonEvents, __uuidof(DispOptionButtonEvents));
_COM_SMARTPTR_TYPEDEF(DispToggleButtonEvents, __uuidof(DispToggleButtonEvents));
_COM_SMARTPTR_TYPEDEF(DispRectangleEvents, __uuidof(DispRectangleEvents));
_COM_SMARTPTR_TYPEDEF(DispImageEvents, __uuidof(DispImageEvents));
_COM_SMARTPTR_TYPEDEF(DispListBoxEvents, __uuidof(DispListBoxEvents));
_COM_SMARTPTR_TYPEDEF(DispOptionGroupEvents, __uuidof(DispOptionGroupEvents));
_COM_SMARTPTR_TYPEDEF(DispTextBoxEvents, __uuidof(DispTextBoxEvents));
_COM_SMARTPTR_TYPEDEF(DispComboBoxEvents, __uuidof(DispComboBoxEvents));
_COM_SMARTPTR_TYPEDEF(DispSubFormEvents, __uuidof(DispSubFormEvents));
_COM_SMARTPTR_TYPEDEF(DispSubReportEvents, __uuidof(DispSubReportEvents));
_COM_SMARTPTR_TYPEDEF(DispLineEvents, __uuidof(DispLineEvents));
_COM_SMARTPTR_TYPEDEF(DispPageBreakEvents, __uuidof(DispPageBreakEvents));
_COM_SMARTPTR_TYPEDEF(DispSectionEvents, __uuidof(DispSectionEvents));
_COM_SMARTPTR_TYPEDEF(DispSectionInReportEvents, __uuidof(DispSectionInReportEvents));
_COM_SMARTPTR_TYPEDEF(_DispControlInReportEvents, __uuidof(_DispControlInReportEvents));
_COM_SMARTPTR_TYPEDEF(DispCustomControlInReportEvents, __uuidof(DispCustomControlInReportEvents));
_COM_SMARTPTR_TYPEDEF(DispPaletteButtonEvents, __uuidof(DispPaletteButtonEvents));
_COM_SMARTPTR_TYPEDEF(DispPageHdrFtrInReportEvents, __uuidof(DispPageHdrFtrInReportEvents));
_COM_SMARTPTR_TYPEDEF(DispTabControlEvents, __uuidof(DispTabControlEvents));
_COM_SMARTPTR_TYPEDEF(DispPageEvents, __uuidof(DispPageEvents));
_COM_SMARTPTR_TYPEDEF(DispLabelEvents, __uuidof(DispLabelEvents));
_COM_SMARTPTR_TYPEDEF(_CommandButton, __uuidof(_CommandButton));
_COM_SMARTPTR_TYPEDEF(DispChildLabelEvents, __uuidof(DispChildLabelEvents));
_COM_SMARTPTR_TYPEDEF(_EmptyCell, __uuidof(_EmptyCell));
_COM_SMARTPTR_TYPEDEF(DispEmptyCellEvents, __uuidof(DispEmptyCellEvents));
_COM_SMARTPTR_TYPEDEF(_WebBrowserControl, __uuidof(_WebBrowserControl));
_COM_SMARTPTR_TYPEDEF(DispWebBrowserControlEvents, __uuidof(DispWebBrowserControlEvents));
_COM_SMARTPTR_TYPEDEF(_FormatCondition, __uuidof(_FormatCondition));
_COM_SMARTPTR_TYPEDEF(FormatConditions, __uuidof(FormatConditions));
_COM_SMARTPTR_TYPEDEF(_Textbox, __uuidof(_Textbox));
_COM_SMARTPTR_TYPEDEF(_Combobox, __uuidof(_Combobox));
_COM_SMARTPTR_TYPEDEF(WSParameter, __uuidof(WSParameter));
_COM_SMARTPTR_TYPEDEF(WSParameters, __uuidof(WSParameters));
_COM_SMARTPTR_TYPEDEF(Operation, __uuidof(Operation));
_COM_SMARTPTR_TYPEDEF(Operations, __uuidof(Operations));
_COM_SMARTPTR_TYPEDEF(Entity, __uuidof(Entity));
_COM_SMARTPTR_TYPEDEF(Entities, __uuidof(Entities));
_COM_SMARTPTR_TYPEDEF(WebService, __uuidof(WebService));
_COM_SMARTPTR_TYPEDEF(WebServices, __uuidof(WebServices));
_COM_SMARTPTR_TYPEDEF(DispNavigationButtonEvents, __uuidof(DispNavigationButtonEvents));
_COM_SMARTPTR_TYPEDEF(DispNavigationControlEvents, __uuidof(DispNavigationControlEvents));
_COM_SMARTPTR_TYPEDEF(_NavigationButton, __uuidof(_NavigationButton));
_COM_SMARTPTR_TYPEDEF(_LocalVar, __uuidof(_LocalVar));
_COM_SMARTPTR_TYPEDEF(_LocalVars, __uuidof(_LocalVars));
_COM_SMARTPTR_TYPEDEF(DoCmd, __uuidof(DoCmd));
_COM_SMARTPTR_TYPEDEF(SharedResource, __uuidof(SharedResource));
_COM_SMARTPTR_TYPEDEF(SharedResources, __uuidof(SharedResources));
_COM_SMARTPTR_TYPEDEF(_CurrentProject, __uuidof(_CurrentProject));
_COM_SMARTPTR_TYPEDEF(_NavigationControl, __uuidof(_NavigationControl));
_COM_SMARTPTR_TYPEDEF(_Application, __uuidof(_Application));
_COM_SMARTPTR_TYPEDEF(AllObjects, __uuidof(AllObjects));
_COM_SMARTPTR_TYPEDEF(AccessObject, __uuidof(AccessObject));
_COM_SMARTPTR_TYPEDEF(_DependencyObjects, __uuidof(_DependencyObjects));
_COM_SMARTPTR_TYPEDEF(_DependencyInfo, __uuidof(_DependencyInfo));
_COM_SMARTPTR_TYPEDEF(_NavigationPaneShortcut, __uuidof(_NavigationPaneShortcut));
_COM_SMARTPTR_TYPEDEF(_NavigationPaneShortcuts, __uuidof(_NavigationPaneShortcuts));
_COM_SMARTPTR_TYPEDEF(_NavigationPaneGroup, __uuidof(_NavigationPaneGroup));
_COM_SMARTPTR_TYPEDEF(_NavigationPaneGroups, __uuidof(_NavigationPaneGroups));
_COM_SMARTPTR_TYPEDEF(_NavigationPaneCategory, __uuidof(_NavigationPaneCategory));
_COM_SMARTPTR_TYPEDEF(_NavigationPaneCategories, __uuidof(_NavigationPaneCategories));
_COM_SMARTPTR_TYPEDEF(_NavigationPane, __uuidof(_NavigationPane));

//
// Type library items
//
    const short V_EMPTY = 0;
    const short V_NULL = 1;
    const short V_INTEGER = 2;
    const short V_LONG = 3;
    const short V_SINGLE = 4;
    const short V_DOUBLE = 5;
    const short V_CURRENCY = 6;
    const short V_DATE = 7;
    const short V_STRING = 8;
    const short DB_BINARY = 9;
    const short DB_OLE = 11;
    const short DB_NONULLS = 3;
    const short A_TABLE = 0;
    const short A_QUERY = 1;
    const short A_FORM = 2;
    const short A_REPORT = 3;
    const short A_MACRO = 4;
    const short A_MODULE = 5;
    const short A_FORMBAR = 0;
    const short A_FILE = 0;
    const short A_EDITMENU = 1;
    const short A_RECORDSMENU = 3;
    const short A_NEW = 0;
    const short A_SAVEFORM = 2;
    const short A_SAVEFORMAS = 3;
    const short A_SAVERECORD = 4;
    const short A_UNDO = 0;
    const short A_UNDOFIELD = 1;
    const short A_CUT = 2;
    const short A_COPY = 3;
    const short A_PASTE = 4;
    const short A_DELETE = 6;
    const short A_SELECTRECORD = 7;
    const short A_SELECTALLRECORDS = 8;
    const short A_OBJECT = 14;
    const short A_REFRESH = 2;
    const short A_OBJECTVERB = 0;
    const short A_OBJECTUPDATE = 3;
    const short A_ANYWHERE = 0;
    const short A_ENTIRE = 1;
    const short A_START = 2;
    const short A_UP = 0;
    const short A_DOWN = 1;
    const short A_CURRENT = 1;
    const short A_ALL = 0;
    const short A_PREVIOUS = 0;
    const short A_NEXT = 1;
    const short A_FIRST = 2;
    const short A_LAST = 3;
    const short A_GOTO = 4;
    const short A_NEWREC = 5;
    const short A_NORMAL = 0;
    const short A_DESIGN = 1;
    const short A_PREVIEW = 2;
    const short A_FORMDS = 3;
    const short A_ADD = 0;
    const short A_EDIT = 1;
    const short A_READONLY = 2;
    const short A_HIDDEN = 1;
    const short A_ICON = 2;
    const short A_DIALOG = 3;
    const short A_PRINTALL = 0;
    const short A_SELECTION = 1;
    const short A_PAGES = 2;
    const short A_HIGH = 0;
    const short A_MEDIUM = 1;
    const short A_LOW = 2;
    const short A_DRAFT = 3;
    const short A_PROMPT = 0;
    const short A_SAVE = 1;
    const short A_EXIT = 2;
    const short A_IMPORT = 0;
    const short A_EXPORT = 1;
    const short A_ATTACH = 2;
    const short A_IMPORTDELIM = 0;
    const short A_IMPORTFIXED = 1;
    const short A_EXPORTDELIM = 2;
    const short A_EXPORTFIXED = 3;
    const short A_EXPORTMERGE = 4;
    const short OLE_CHANGED = 0;
    const short OLE_SAVED = 1;
    const short OLE_CLOSED = 2;
    const short OLE_RENAMED = 3;
    const short OLE_RELEASE = 5;
    const short SHIFT_MASK = 1;
    const short CTRL_MASK = 2;
    const short ALT_MASK = 4;
    const short LEFT_BUTTON = 1;
    const short RIGHT_BUTTON = 2;
    const short MIDDLE_BUTTON = 4;
    const short DATA_ERRCONTINUE = 0;
    const short DATA_ERRDISPLAY = 1;
    const short DATA_ERRADDED = 2;
    const short LB_INITIALIZE = 0;
    const short LB_OPEN = 1;
    const short LB_GETROWCOUNT = 3;
    const short LB_GETCOLUMNCOUNT = 4;
    const short LB_GETCOLUMNWIDTH = 5;
    const short LB_GETVALUE = 6;
    const short LB_GETFORMAT = 7;
    const short LB_CLOSE = 8;
    const short LB_END = 9;
    const short SYSCMD_INITMETER = 1;
    const short SYSCMD_UPDATEMETER = 2;
    const short SYSCMD_REMOVEMETER = 3;
    const short SYSCMD_SETSTATUS = 4;
    const short SYSCMD_CLEARSTATUS = 5;
    const short SYSCMD_RUNTIME = 6;
    const short SYSCMD_ACCESSVER = 7;
    const short SYSCMD_INIFILE = 8;
    const short SYSCMD_ACCESSDIR = 9;
    const short SYSCMD_GETOBJECTSTATE = 10;
    const short SYSCMD_CLEARHELPTOPIC = 11;
    const short OBJSTATE_OPEN = 1;
    const short OBJSTATE_NEW = 4;
    const short OBJSTATE_DIRTY = 2;
    const short A_DELETE_V2 = 7;
    const short A_SELECTRECORD_V2 = 8;
    const short A_SELECTALLRECORDS_V2 = 9;
    const short A_TOOLBAR_YES = 0;
    const short A_TOOLBAR_WHERE_APPROP = 1;
    const short A_TOOLBAR_NO = 2;
    const short DELETE_OK = 0;
    const short DELETE_CANCEL = 1;
    const short DELETE_USER_CANCEL = 2;
    const long DB_SEC_FRMRPT_READDEF = 4;
    const long DB_SEC_FRMRPT_WRITEDEF = 65548;
    const long DB_SEC_FRMRPT_EXECUTE = 256;
    const long DB_SEC_MAC_READDEF = 10;
    const long DB_SEC_MAC_WRITEDEF = 65542;
    const long DB_SEC_MAC_EXECUTE = 8;
    const long DB_SEC_MOD_READDEF = 2;
    const long DB_SEC_MOD_WRITEDEF = 65542;
    const short A_MENU_VER1X = 11;
    const short A_MENU_VER20 = 20;
    const LPSTR A_FORMATRTF = (char*) "Rich Text Format (*.rtf)";
    const LPSTR A_FORMATXLS = (char*) "Microsoft Excel (*.xls)";
    const LPSTR A_FORMATTXT = (char*) "MS-DOS Text (*.txt)";
    const long DB_OPEN_TABLE = 1;
    const long DB_OPEN_DYNASET = 2;
    const long DB_OPEN_SNAPSHOT = 4;
    const long DB_DENYWRITE = 1;
    const long DB_DENYREAD = 2;
    const long DB_READONLY = 4;
    const long DB_APPENDONLY = 8;
    const long DB_INCONSISTENT = 16;
    const long DB_CONSISTENT = 32;
    const long DB_SQLPASSTHROUGH = 64;
    const long DB_FAILONERROR = 128;
    const long DB_FORWARDONLY = 256;
    const long DB_OPTIONINIPATH = 1;
    const long DB_FIXEDFIELD = 1;
    const long DB_VARIABLEFIELD = 2;
    const long DB_AUTOINCRFIELD = 16;
    const long DB_UPDATABLEFIELD = 32;
    const long DB_DESCENDING = 1;
    const long DB_BOOLEAN = 1;
    const long DB_BYTE = 2;
    const long DB_INTEGER = 3;
    const long DB_LONG = 4;
    const long DB_CURRENCY = 5;
    const long DB_SINGLE = 6;
    const long DB_DOUBLE = 7;
    const long DB_DATE = 8;
    const long DB_TEXT = 10;
    const long DB_LONGBINARY = 11;
    const long DB_MEMO = 12;
    const long DB_RELATIONUNIQUE = 1;
    const long DB_RELATIONDONTENFORCE = 2;
    const long DB_RELATIONINHERITED = 4;
    const long DB_RELATIONUPDATECASCADE = 256;
    const long DB_RELATIONDELETECASCADE = 4096;
    const long DB_RELATIONLEFT = 16777216;
    const long DB_RELATIONRIGHT = 33554432;
    const long DB_ATTACHEXCLUSIVE = 65536;
    const long DB_ATTACHSAVEPWD = 131072;
    const long DB_SYSTEMOBJECT = -2147483646;
    const long DB_ATTACHEDTABLE = 1073741824;
    const long DB_ATTACHEDODBC = 536870912;
    const long DB_HIDDENOBJECT = 1;
    const long DB_TABLE = 1;
    const long DB_QUERYDEF = 5;
    const long DB_QSELECT = 0;
    const long DB_QACTION = 240;
    const long DB_QCROSSTAB = 16;
    const long DB_QDELETE = 32;
    const long DB_QUPDATE = 48;
    const long DB_QAPPEND = 64;
    const long DB_QMAKETABLE = 80;
    const long DB_QDDL = 96;
    const long DB_QSQLPASSTHROUGH = 112;
    const long DB_QSETOPERATION = 128;
    const long DB_QSPTBULK = 144;
    const long DB_UNIQUE = 1;
    const long DB_PRIMARY = 2;
    const long DB_PROHIBITNULL = 4;
    const long DB_IGNORENULL = 8;
    const LPSTR DB_LANG_ARABIC = (char*) ";LANGID=0x0401;CP=1256;COUNTRY=0";
    const LPSTR DB_LANG_CZECH = (char*) ";LANGID=0x0405;CP=1250;COUNTRY=0";
    const LPSTR DB_LANG_DUTCH = (char*) ";LANGID=0x0413;CP=1252;COUNTRY=0";
    const LPSTR DB_LANG_GENERAL = (char*) ";LANGID=0x0409;CP=1252;COUNTRY=0";
    const LPSTR DB_LANG_GREEK = (char*) ";LANGID=0x0408;CP=1253;COUNTRY=0";
    const LPSTR DB_LANG_HEBREW = (char*) ";LANGID=0x040D;CP=1255;COUNTRY=0";
    const LPSTR DB_LANG_HUNGARIAN = (char*) ";LANGID=0x040E;CP=1250;COUNTRY=0";
    const LPSTR DB_LANG_ICELANDIC = (char*) ";LANGID=0x040F;CP=1252;COUNTRY=0";
    const LPSTR DB_LANG_NORDIC = (char*) ";LANGID=0x041D;CP=1252;COUNTRY=0";
    const LPSTR DB_LANG_NORWDAN = (char*) ";LANGID=0x0414;CP=1252;COUNTRY=0";
    const LPSTR DB_LANG_POLISH = (char*) ";LANGID=0x0415;CP=1250;COUNTRY=0";
    const LPSTR DB_LANG_CYRILLIC = (char*) ";LANGID=0x0419;CP=1251;COUNTRY=0";
    const LPSTR DB_LANG_SPANISH = (char*) ";LANGID=0x040A;CP=1252;COUNTRY=0";
    const LPSTR DB_LANG_SWEDFIN = (char*) ";LANGID=0x040B;CP=1252;COUNTRY=0";
    const LPSTR DB_LANG_TURKISH = (char*) ";LANGID=0x041F;CP=1254;COUNTRY=0";
    const long DB_VERSION10 = 1;
    const long DB_ENCRYPT = 2;
    const long DB_DECRYPT = 4;
    const long DB_VERSION11 = 8;
    const long DB_VERSION20 = 16;
    const long DB_SORTARABIC = 267;
    const long DB_SORTCYRILLIC = 263;
    const long DB_SORTCZECH = 264;
    const long DB_SORTDUTCH = 259;
    const long DB_SORTGENERAL = 256;
    const long DB_SORTGREEK = 269;
    const long DB_SORTHEBREW = 268;
    const long DB_SORTHUNGARIAN = 265;
    const long DB_SORTICELANDIC = 262;
    const long DB_SORTNORWDAN = 261;
    const long DB_SORTPDXINTL = 4096;
    const long DB_SORTPDXNOR = 4098;
    const long DB_SORTPDXSWE = 4097;
    const long DB_SORTPOLISH = 266;
    const long DB_SORTSPANISH = 258;
    const long DB_SORTSWEDFIN = 260;
    const long DB_SORTTURKISH = 270;
    const long DB_SORTUNDEFINED = -1;
    const long DB_FREELOCKS = 1;
    const long DB_SEC_NOACCESS = 0;
    const long DB_SEC_FULLACCESS = 1048575;
    const long DB_SEC_DELETE = 65536;
    const long DB_SEC_READSEC = 131072;
    const long DB_SEC_WRITESEC = 262144;
    const long DB_SEC_WRITEOWNER = 524288;
    const long DB_SEC_DBCREATE = 1;
    const long DB_SEC_DBOPEN = 2;
    const long DB_SEC_DBEXCLUSIVE = 4;
    const long DB_SEC_CREATE = 1;
    const long DB_SEC_READDEF = 4;
    const long DB_SEC_WRITEDEF = 65548;
    const long DB_SEC_RETRIEVEDATA = 20;
    const long DB_SEC_INSERTDATA = 32;
    const long DB_SEC_REPLACEDATA = 64;
    const long DB_SEC_DELETEDATA = 128;
    const short acDataErrContinue = 0;
    const short acDataErrDisplay = 1;
    const short acDataErrAdded = 2;
    const short acDeleteOK = 0;
    const short acDeleteCancel = 1;
    const short acDeleteUserCancel = 2;
    const short acObjStateOpen = 1;
    const short acObjStateNew = 4;
    const short acObjStateDirty = 2;
    const short acLBInitialize = 0;
    const short acLBOpen = 1;
    const short acLBGetRowCount = 3;
    const short acLBGetColumnCount = 4;
    const short acLBGetColumnWidth = 5;
    const short acLBGetValue = 6;
    const short acLBGetFormat = 7;
    const short acLBClose = 8;
    const short acLBEnd = 9;
    const short acPropCatNA = 0;
    const short acPropCatLayout = 1;
    const short acPropCatData = 2;
    const short acPropCatEvent = 4;
    const short acPropCatOther = 8;
    const short acPrompt = 0;
    const short acSave = 1;
    const short acExit = 2;
    const short acOLEEither = 2;
    const short acOLECreateEmbed = 0;
    const short acOLECreateNew = 0;
    const short acOLECreateLink = 1;
    const short acOLECreateFromFile = 1;
    const short acOLECopy = 4;
    const short acOLEPaste = 5;
    const short acOLEUpdate = 6;
    const short acOLEActivate = 7;
    const short acOLEClose = 9;
    const short acOLEDelete = 10;
    const short acOLEInsertObjDlg = 14;
    const short acOLEPasteSpecialDlg = 15;
    const short acOLEFetchVerbs = 17;
    const short acOLEDisplayContent = 0;
    const short acOLEDisplayIcon = 1;
    const short acOLELinked = 0;
    const short acOLEEmbedded = 1;
    const short acOLENone = 3;
    const short acOLESizeClip = 0;
    const short acOLESizeStretch = 1;
    const short acOLESizeAutoSize = 2;
    const short acOLESizeZoom = 3;
    const short acOLEUpdateAutomatic = 0;
    const short acOLEUpdateFrozen = 1;
    const short acOLEUpdateManual = 2;
    const short acOLEActivateManual = 0;
    const short acOLEActivateGetFocus = 1;
    const short acOLEActivateDoubleClick = 2;
    const short acOLEVerbPrimary = 0;
    const short acOLEVerbShow = -1;
    const short acOLEVerbOpen = -2;
    const short acOLEVerbHide = -3;
    const short acOLEVerbInPlaceUIActivate = -4;
    const short acOLEVerbInPlaceActivate = -5;
    const short acMenuVer1X = 11;
    const short acMenuVer20 = 20;
    const short acMenuVer70 = 70;
    const short acFormBar = 0;
    const short acFile = 0;
    const short acEditMenu = 1;
    const short acRecordsMenu = 5;
    const short acNew = 0;
    const short acSaveForm = 4;
    const short acSaveFormAs = 5;
    const short acSaveRecord = 4;
    const short acUndo = 0;
    const short acCut = 1;
    const short acCopy = 2;
    const short acPaste = 3;
    const short acDelete = 6;
    const short acSelectRecord = 8;
    const short acSelectAllRecords = 9;
    const short acObject = 14;
    const short acRefresh = 5;
    const short acObjectVerb = 0;
    const short acObjectUpdate = 3;
    const LPSTR acFormatRTF = (char*) "Rich Text Format (*.rtf)";
    const LPSTR acFormatXLS = (char*) "Microsoft Excel (*.xls)";
    const LPSTR acFormatTXT = (char*) "MS-DOS Text (*.txt)";
    const LPSTR acFormatHTML = (char*) "HTML (*.html)";
    const LPSTR acFormatIIS = (char*) "Microsoft IIS (*.htx; *.idc)";
    const LPSTR acFormatASP = (char*) "Microsoft Active Server Pages (*.asp)";
    const LPSTR acFormatDAP = (char*) "Microsoft Access Data Access Page (*.htm; *.html)";
    const LPSTR acFormatSNP = (char*) "Snapshot Format (*.snp)";
    const LPSTR acFormatPDF = (char*) "PDF Format (*.pdf)";
    const LPSTR acFormatXPS = (char*) "XPS Format (*.xps)";
    const LPSTR acFormatXLSB = (char*) "Microsoft Excel Binary Workbook (*.xlsb)";
    const LPSTR acFormatXLSX = (char*) "Microsoft Excel Workbook (*.xlsx)";
    const long acSecFrmRptReadDef = 4;
    const long acSecFrmRptWriteDef = 65548;
    const long acSecFrmRptExecute = 256;
    const long acSecMacReadDef = 10;
    const long acSecMacWriteDef = 65542;
    const long acSecMacExecute = 8;
    const long acSecModReadDef = 2;
    const long acSecModWriteDef = 65542;
    const short acMenuUngray = 0;
    const short acMenuGray = 1;
    const short acMenuUncheck = 2;
    const short acMenuCheck = 3;
    const short acEffectNormal = 0;
    const short acEffectRaised = 1;
    const short acEffectSunken = 2;
    const short acEffectEtched = 3;
    const short acEffectShadow = 4;
    const short acEffectChisel = 5;
    const short acGridlinesNone = 0;
    const short acGridlinesHoriz = 1;
    const short acGridlinesVert = 2;
    const short acGridlinesBoth = 3;
    const short acGridlinesBothV2 = -1;
    const short acFilterByForm = 0;
    const short acFilterAdvanced = 1;
    const short acServerFilterByForm = 2;
    const short acShowAllRecords = 0;
    const short acApplyFilter = 1;
    const short acCloseFilterWindow = 2;
    const short acApplyServerFilter = 3;
    const short acCloseServerFilterWindow = 4;
    const short acShiftMask = 1;
    const short acCtrlMask = 2;
    const short acAltMask = 4;
    const short acLeftButton = 1;
    const short acRightButton = 2;
    const short acMiddleButton = 4;
    const short acOLEChanged = 0;
    const short acOLESaved = 1;
    const short acOLEClosed = 2;
    const short acOLERenamed = 3;
    const short vbKeyLButton = 1;
    const short vbKeyRButton = 2;
    const short vbKeyCancel = 3;
    const short vbKeyMButton = 4;
    const short vbKeyBack = 8;
    const short vbKeyTab = 9;
    const short vbKeyClear = 12;
    const short vbKeyReturn = 13;
    const short vbKeyShift = 16;
    const short vbKeyControl = 17;
    const short vbKeyMenu = 18;
    const short vbKeyPause = 19;
    const short vbKeyCapital = 20;
    const short vbKeyEscape = 27;
    const short vbKeySpace = 32;
    const short vbKeyPageUp = 33;
    const short vbKeyPageDown = 34;
    const short vbKeyEnd = 35;
    const short vbKeyHome = 36;
    const short vbKeyLeft = 37;
    const short vbKeyUp = 38;
    const short vbKeyRight = 39;
    const short vbKeyDown = 40;
    const short vbKeySelect = 41;
    const short vbKeyPrint = 42;
    const short vbKeyExecute = 43;
    const short vbKeySnapshot = 44;
    const short vbKeyInsert = 45;
    const short vbKeyDelete = 46;
    const short vbKeyHelp = 47;
    const short vbKeyNumlock = 144;
    const short vbKeyA = 65;
    const short vbKeyB = 66;
    const short vbKeyC = 67;
    const short vbKeyD = 68;
    const short vbKeyE = 69;
    const short vbKeyF = 70;
    const short vbKeyG = 71;
    const short vbKeyH = 72;
    const short vbKeyI = 73;
    const short vbKeyJ = 74;
    const short vbKeyK = 75;
    const short vbKeyL = 76;
    const short vbKeyM = 77;
    const short vbKeyN = 78;
    const short vbKeyO = 79;
    const short vbKeyP = 80;
    const short vbKeyQ = 81;
    const short vbKeyR = 82;
    const short vbKeyS = 83;
    const short vbKeyT = 84;
    const short vbKeyU = 85;
    const short vbKeyV = 86;
    const short vbKeyW = 87;
    const short vbKeyX = 88;
    const short vbKeyY = 89;
    const short vbKeyZ = 90;
    const short vbKey0 = 48;
    const short vbKey1 = 49;
    const short vbKey2 = 50;
    const short vbKey3 = 51;
    const short vbKey4 = 52;
    const short vbKey5 = 53;
    const short vbKey6 = 54;
    const short vbKey7 = 55;
    const short vbKey8 = 56;
    const short vbKey9 = 57;
    const short vbKeyNumpad0 = 96;
    const short vbKeyNumpad1 = 97;
    const short vbKeyNumpad2 = 98;
    const short vbKeyNumpad3 = 99;
    const short vbKeyNumpad4 = 100;
    const short vbKeyNumpad5 = 101;
    const short vbKeyNumpad6 = 102;
    const short vbKeyNumpad7 = 103;
    const short vbKeyNumpad8 = 104;
    const short vbKeyNumpad9 = 105;
    const short vbKeyMultiply = 106;
    const short vbKeyAdd = 107;
    const short vbKeySeparator = 108;
    const short vbKeySubtract = 109;
    const short vbKeyDecimal = 110;
    const short vbKeyDivide = 111;
    const short vbKeyF1 = 112;
    const short vbKeyF2 = 113;
    const short vbKeyF3 = 114;
    const short vbKeyF4 = 115;
    const short vbKeyF5 = 116;
    const short vbKeyF6 = 117;
    const short vbKeyF7 = 118;
    const short vbKeyF8 = 119;
    const short vbKeyF9 = 120;
    const short vbKeyF10 = 121;
    const short vbKeyF11 = 122;
    const short vbKeyF12 = 123;
    const short vbKeyF13 = 124;
    const short vbKeyF14 = 125;
    const short vbKeyF15 = 126;
    const short vbKeyF16 = 127;

enum __declspec(uuid("11135f5c-aed7-323a-884d-ab5caa278463"))
AcModuleType
{
    acStandardModule = 0,
    acClassModule = 1
};

enum __declspec(uuid("c57b6542-1aa0-3a95-b505-2b627d14447e"))
AcCloseSave
{
    acSavePrompt = 0,
    acSaveYes = 1,
    acSaveNo = 2
};

enum __declspec(uuid("1451ad50-53dd-3a15-9ad4-9abea3e814f8"))
AcQuitOption
{
    acQuitPrompt = 0,
    acQuitSaveAll = 1,
    acQuitSaveNone = 2
};

enum __declspec(uuid("4e9486cd-236f-3420-a6e0-60c62eff9671"))
AcSection
{
    acDetail = 0,
    acHeader = 1,
    acFooter = 2,
    acPageHeader = 3,
    acPageFooter = 4,
    acGroupLevel1Header = 5,
    acGroupLevel1Footer = 6,
    acGroupLevel2Header = 7,
    acGroupLevel2Footer = 8
};

enum __declspec(uuid("56561967-6f47-3e3b-9a9b-d7750296a544"))
AcControlType
{
    acLabel = 100,
    acRectangle = 101,
    acLine = 102,
    acImage = 103,
    acCommandButton = 104,
    acOptionButton = 105,
    acCheckBox = 106,
    acOptionGroup = 107,
    acBoundObjectFrame = 108,
    acTextBox = 109,
    acListBox = 110,
    acComboBox = 111,
    acSubform = 112,
    acObjectFrame = 114,
    acPageBreak = 118,
    acCustomControl = 119,
    acToggleButton = 122,
    acTabCtl = 123,
    acPage = 124,
    acAttachment = 126,
    acEmptyCell = 127,
    acWebBrowser = 128,
    acNavigationControl = 129,
    acNavigationButton = 130
};

enum __declspec(uuid("0d6adb6f-a581-3d0e-b0cd-14e08619e7aa"))
AcDataObjectType
{
    acActiveDataObject = -1,
    acDataTable = 0,
    acDataQuery = 1,
    acDataForm = 2,
    acDataReport = 3,
    acDataServerView = 7,
    acDataStoredProcedure = 9,
    acDataFunction = 10
};

enum __declspec(uuid("c65d1554-ae8e-322a-ac2c-4268de56e921"))
AcDataTransferType
{
    acImport = 0,
    acExport = 1,
    acLink = 2
};

enum __declspec(uuid("792e7534-71a4-304b-9c33-5b597c9ca2f6"))
AcSendObjectType
{
    acSendNoObject = -1,
    acSendTable = 0,
    acSendQuery = 1,
    acSendForm = 2,
    acSendReport = 3,
    acSendModule = 5,
    acSendDataAccessPage = 6
};

enum __declspec(uuid("a89f420d-07fc-3991-b954-b80d9697e89a"))
AcObjectType
{
    acDefault = -1,
    acTable = 0,
    acQuery = 1,
    acForm = 2,
    acReport = 3,
    acMacro = 4,
    acModule = 5,
    acDataAccessPage = 6,
    acServerView = 7,
    acDiagram = 8,
    acStoredProcedure = 9,
    acFunction = 10,
    acDatabaseProperties = 11,
    acTableDataMacro = 12
};

enum __declspec(uuid("f61ef7f1-8673-36a3-9929-e0838d193fd8"))
AcFindField
{
    acCurrent = -1,
    acAll = 0
};

enum __declspec(uuid("453de5d7-33ae-3b91-8bc2-1578ff0dacc1"))
AcFindMatch
{
    acAnywhere = 0,
    acEntire = 1,
    acStart = 2
};

enum __declspec(uuid("1da96211-f019-3acd-baa8-179a364477d6"))
AcFormView
{
    acNormal = 0,
    acDesign = 1,
    acPreview = 2,
    acFormDS = 3,
    acFormPivotTable = 4,
    acFormPivotChart = 5,
    acLayout = 6
};

enum __declspec(uuid("a8561903-5f3f-31bf-bed3-d2cbb460f666"))
AcDataAccessPageView
{
    acDataAccessPageBrowse = 0,
    acDataAccessPageDesign = 1
};

enum __declspec(uuid("69154ff9-c26b-3ab1-8092-9abd6343295c"))
AcOpenDataMode
{
    acAdd = 0,
    acEdit = 1,
    acReadOnly = 2
};

enum __declspec(uuid("bdfaf52b-81f5-398b-8405-23598d87c882"))
AcFormOpenDataMode
{
    acFormPropertySettings = -1,
    acFormAdd = 0,
    acFormEdit = 1,
    acFormReadOnly = 2
};

enum __declspec(uuid("cdefab49-2006-337f-92a9-6ff64ca964b6"))
AcOutputObjectType
{
    acOutputTable = 0,
    acOutputQuery = 1,
    acOutputForm = 2,
    acOutputReport = 3,
    acOutputModule = 5,
    acOutputDataAccessPage = 6,
    acOutputServerView = 7,
    acOutputStoredProcedure = 9,
    acOutputFunction = 10
};

enum __declspec(uuid("b6b7208c-0b50-371a-8d12-7f47709c7d88"))
AcPrintQuality
{
    acHigh = 0,
    acMedium = 1,
    acLow = 2,
    acDraft = 3
};

enum __declspec(uuid("c9c5193b-87d6-331a-9848-2aef25476c94"))
AcPrintRange
{
    acPrintAll = 0,
    acSelection = 1,
    acPages = 2
};

enum __declspec(uuid("08372e8a-1b9b-35aa-87ed-41c477d0ccd2"))
AcRecord
{
    acPrevious = 0,
    acNext = 1,
    acFirst = 2,
    acLast = 3,
    acGoTo = 4,
    acNewRec = 5
};

enum __declspec(uuid("d7099fd2-1399-3122-8535-e7d7ed1d1fa1"))
AcSearchDirection
{
    acUp = 0,
    acDown = 1,
    acSearchAll = 2
};

enum __declspec(uuid("ee1e20a4-da60-3f43-8745-a624801d61c1"))
AcSysCmdAction
{
    acSysCmdInitMeter = 1,
    acSysCmdUpdateMeter = 2,
    acSysCmdRemoveMeter = 3,
    acSysCmdSetStatus = 4,
    acSysCmdClearStatus = 5,
    acSysCmdRuntime = 6,
    acSysCmdAccessVer = 7,
    acSysCmdIniFile = 8,
    acSysCmdAccessDir = 9,
    acSysCmdGetObjectState = 10,
    acSysCmdClearHelpTopic = 11,
    acSysCmdProfile = 12,
    acSysCmdGetWorkgroupFile = 13
};

enum __declspec(uuid("a66a7f7e-2652-3e6d-8d5b-52675feae3f7"))
AcTextTransferType
{
    acImportDelim = 0,
    acImportFixed = 1,
    acExportDelim = 2,
    acExportFixed = 3,
    acExportMerge = 4,
    acLinkDelim = 5,
    acLinkFixed = 6,
    acImportHTML = 7,
    acExportHTML = 8,
    acLinkHTML = 9
};

enum __declspec(uuid("92e510de-f3dc-363a-9afe-9437721973ee"))
AcView
{
    acViewNormal = 0,
    acViewDesign = 1,
    acViewPreview = 2,
    acViewPivotTable = 3,
    acViewPivotChart = 4,
    acViewReport = 5,
    acViewLayout = 6
};

enum __declspec(uuid("f42b9186-09c8-3b8f-85f5-7071a0add127"))
AcWindowMode
{
    acWindowNormal = 0,
    acHidden = 1,
    acIcon = 2,
    acDialog = 3
};

enum __declspec(uuid("a2d6db7f-f73a-307a-b72b-c94bde06e738"))
AcFilterType
{
    acFilterNormal = 0,
    acServerFilter = 1
};

enum __declspec(uuid("fa604274-4051-3534-94d0-c3ee879416de"))
AcSpreadSheetType
{
    acSpreadsheetTypeExcel3 = 0,
    acSpreadsheetTypeLotusWK1 = 2,
    acSpreadsheetTypeLotusWK3 = 3,
    acSpreadsheetTypeLotusWJ2 = 4,
    acSpreadsheetTypeExcel5 = 5,
    acSpreadsheetTypeExcel7 = 5,
    acSpreadsheetTypeExcel4 = 6,
    acSpreadsheetTypeLotusWK4 = 7,
    acSpreadsheetTypeExcel97 = 8,
    acSpreadsheetTypeExcel8 = 8,
    acSpreadsheetTypeExcel9 = 8,
    acSpreadsheetTypeExcel12 = 9,
    acSpreadsheetTypeExcel12Xml = 10
};

enum __declspec(uuid("2427aa57-85e2-3cde-aae0-318c506c249b"))
AcImeMode
{
    acImeModeNoControl = 0,
    acImeModeOn = 1,
    acImeModeOff = 2,
    acImeModeDisable = 3,
    acImeModeHiragana = 4,
    acImeModeKatakana = 5,
    acImeModeKatakanaHalf = 6,
    acImeModeAlphaFull = 7,
    acImeModeAlpha = 8,
    acImeModeHangulFull = 9,
    acImeModeHangul = 10
};

enum __declspec(uuid("99b394d3-1955-376c-8dda-22b212e38ae6"))
AcImeSentenceMode
{
    acImeSentenceModePhrasePredict = 0,
    acImeSentenceModePluralClause = 1,
    acImeSentenceModeConversation = 2,
    acImeSentenceModeNone = 3
};

enum __declspec(uuid("6872ff17-f6dc-3340-9143-8264b080a035"))
AcHyperlinkPart
{
    acDisplayedValue = 0,
    acDisplayText = 1,
    acAddress = 2,
    acSubAddress = 3,
    acScreenTip = 4,
    acFullAddress = 5
};

enum __declspec(uuid("6e7b71ec-a786-3de8-be95-f16cc8511094"))
AcProjectType
{
    acNull = 0,
    acADP = 1,
    acMDB = 2
};

enum __declspec(uuid("548bff17-5168-377c-8b1f-772982bd2d68"))
AcCommand
{
    acCmdWindowUnhide = 1,
    acCmdWindowHide = 2,
    acCmdExit = 3,
    acCmdCompactDatabase = 4,
    acCmdEncryptDecryptDatabase = 5,
    acCmdRepairDatabase = 6,
    acCmdMakeMDEFile = 7,
    acCmdMoreWindows = 8,
    acCmdAppRestore = 9,
    acCmdAppMaximize = 10,
    acCmdAppMinimize = 11,
    acCmdAppMove = 12,
    acCmdAppSize = 13,
    acCmdDocRestore = 14,
    acCmdDocMaximize = 15,
    acCmdDocMove = 16,
    acCmdDocSize = 17,
    acCmdRefresh = 18,
    acCmdFont = 19,
    acCmdSave = 20,
    acCmdSaveAs = 21,
    acCmdWindowCascade = 22,
    acCmdTileVertically = 23,
    acCmdWindowArrangeIcons = 24,
    acCmdOpenDatabase = 25,
    acCmdNewDatabase = 26,
    acCmdOLEDDELinks = 27,
    acCmdRecordsGoToNew = 28,
    acCmdReplace = 29,
    acCmdFind = 30,
    acCmdRunMacro = 31,
    acCmdPageSetup = 32,
    acCmdInsertObject = 33,
    acCmdDuplicate = 34,
    acCmdAboutMicrosoftAccess = 35,
    acCmdFormHdrFtr = 36,
    acCmdReportHdrFtr = 37,
    acCmdPasteAppend = 38,
    acCmdInsertFile = 39,
    acCmdSelectForm = 40,
    acCmdTabOrder = 41,
    acCmdFieldList = 42,
    acCmdAlignLeft = 43,
    acCmdAlignRight = 44,
    acCmdAlignTop = 45,
    acCmdAlignBottom = 46,
    acCmdAlignToGrid = 47,
    acCmdSizeToGrid = 48,
    acCmdOptions = 49,
    acCmdSelectRecord = 50,
    acCmdSortingAndGrouping = 51,
    acCmdBringToFront = 52,
    acCmdSendToBack = 53,
    acCmdPrintPreview = 54,
    acCmdApplyDefault = 55,
    acCmdSetControlDefaults = 56,
    acCmdOLEObjectDefaultVerb = 57,
    acCmdClose = 58,
    acCmdSizeToFit = 59,
    acCmdDocMinimize = 60,
    acCmdViewRuler = 61,
    acCmdSnapToGrid = 62,
    acCmdViewGrid = 63,
    acCmdPasteSpecial = 64,
    acCmdRecordsGoToNext = 65,
    acCmdRecordsGoToPrevious = 66,
    acCmdRecordsGoToFirst = 67,
    acCmdRecordsGoToLast = 68,
    acCmdSizeToFitForm = 69,
    acCmdEditingAllowed = 70,
    acCmdClearGrid = 71,
    acCmdJoinProperties = 72,
    acCmdQueryTotals = 73,
    acCmdQueryTypeCrosstab = 74,
    acCmdTableNames = 75,
    acCmdQueryParameters = 76,
    acCmdFormatCells = 77,
    acCmdDataEntry = 78,
    acCmdHideColumns = 79,
    acCmdUnhideColumns = 80,
    acCmdDeleteQueryColumn = 81,
    acCmdInsertQueryColumn = 82,
    acCmdRemoveTable = 84,
    acCmdViewToolbox = 85,
    acCmdMacroNames = 86,
    acCmdMacroConditions = 87,
    acCmdSingleStep = 88,
    acCmdQueryTypeSelect = 89,
    acCmdQueryTypeUpdate = 90,
    acCmdQueryTypeAppend = 91,
    acCmdQueryTypeDelete = 92,
    acCmdApplyFilterSort = 93,
    acCmdQueryTypeMakeTable = 94,
    acCmdLoadFromQuery = 95,
    acCmdSaveAsQuery = 96,
    acCmdSaveRecord = 97,
    acCmdAdvancedFilterSort = 99,
    acCmdMicrosoftAccessHelpTopics = 100,
    acCmdLinkTables = 102,
    acCmdUserAndGroupPermissions = 103,
    acCmdUserAndGroupAccounts = 104,
    acCmdFreezeColumn = 105,
    acCmdUnfreezeAllColumns = 106,
    acCmdPrimaryKey = 107,
    acCmdSubformDatasheet = 108,
    acCmdSelectAllRecords = 109,
    acCmdViewTables = 110,
    acCmdViewQueries = 111,
    acCmdViewForms = 112,
    acCmdViewReports = 113,
    acCmdViewMacros = 114,
    acCmdViewModules = 115,
    acCmdRowHeight = 116,
    acCmdColumnWidth = 117,
    acCmdInsertFileIntoModule = 118,
    acCmdSaveModuleAsText = 119,
    acCmdFindPrevious = 120,
    acCmdWindowSplit = 121,
    acCmdProcedureDefinition = 122,
    acCmdDebugWindow = 123,
    acCmdReset = 124,
    acCmdCompileAllModules = 125,
    acCmdCompileAndSaveAllModules = 126,
    acCmdGoContinue = 127,
    acCmdStepOver = 128,
    acCmdSetNextStatement = 129,
    acCmdShowNextStatement = 130,
    acCmdToggleBreakpoint = 131,
    acCmdClearAllBreakpoints = 132,
    acCmdRelationships = 133,
    acCmdNewObjectTable = 134,
    acCmdNewObjectQuery = 135,
    acCmdNewObjectForm = 136,
    acCmdNewObjectReport = 137,
    acCmdNewObjectMacro = 138,
    acCmdNewObjectModule = 139,
    acCmdNewObjectClassModule = 140,
    acCmdLayoutPreview = 141,
    acCmdSaveAsReport = 142,
    acCmdRename = 143,
    acCmdRemoveFilterSort = 144,
    acCmdSaveLayout = 145,
    acCmdClearAll = 146,
    acCmdHideTable = 147,
    acCmdShowDirectRelationships = 148,
    acCmdShowAllRelationships = 149,
    acCmdCreateRelationship = 150,
    acCmdEditRelationship = 151,
    acCmdIndexes = 152,
    acCmdAlignToShortest = 153,
    acCmdAlignToTallest = 154,
    acCmdSizeToNarrowest = 155,
    acCmdSizeToWidest = 156,
    acCmdHorizontalSpacingMakeEqual = 157,
    acCmdHorizontalSpacingDecrease = 158,
    acCmdHorizontalSpacingIncrease = 159,
    acCmdVerticalSpacingMakeEqual = 160,
    acCmdVerticalSpacingDecrease = 161,
    acCmdVerticalSpacingIncrease = 162,
    acCmdSortAscending = 163,
    acCmdSortDescending = 164,
    acCmdToolbarsCustomize = 165,
    acCmdOLEObjectConvert = 167,
    acCmdQueryTypeSQLDataDefinition = 168,
    acCmdQueryTypeSQLPassThrough = 169,
    acCmdViewCode = 170,
    acCmdConvertDatabase = 171,
    acCmdCallStack = 172,
    acCmdSend = 173,
    acCmdOutputToExcel = 175,
    acCmdOutputToRTF = 176,
    acCmdOutputToText = 177,
    acCmdInvokeBuilder = 178,
    acCmdZoomBox = 179,
    acCmdQueryTypeSQLUnion = 180,
    acCmdRun = 181,
    acCmdPageHdrFtr = 182,
    acCmdDesignView = 183,
    acCmdSQLView = 184,
    acCmdShowTable = 185,
    acCmdCloseWindow = 186,
    acCmdInsertRows = 187,
    acCmdDeleteRows = 188,
    acCmdCut = 189,
    acCmdCopy = 190,
    acCmdPaste = 191,
    acCmdAutoDial = 192,
    acCmdNewObjectAutoForm = 193,
    acCmdNewObjectAutoReport = 194,
    acCmdWordMailMerge = 195,
    acCmdTestValidationRules = 196,
    acCmdControlWizardsToggle = 197,
    acCmdEnd = 198,
    acCmdRedo = 199,
    acCmdObjectBrowser = 200,
    acCmdAddWatch = 201,
    acCmdEditWatch = 202,
    acCmdQuickWatch = 203,
    acCmdStepToCursor = 204,
    acCmdIndent = 205,
    acCmdOutdent = 206,
    acCmdFilterByForm = 207,
    acCmdFilterBySelection = 208,
    acCmdViewLargeIcons = 209,
    acCmdViewDetails = 210,
    acCmdViewSmallIcons = 211,
    acCmdViewList = 212,
    acCmdLineUpIcons = 213,
    acCmdArrangeIconsByName = 214,
    acCmdArrangeIconsByType = 215,
    acCmdArrangeIconsByCreated = 216,
    acCmdArrangeIconsByModified = 217,
    acCmdArrangeIconsAuto = 218,
    acCmdCreateShortcut = 219,
    acCmdToggleFilter = 220,
    acCmdOpenTable = 221,
    acCmdInsertPicture = 222,
    acCmdDeleteRecord = 223,
    acCmdStartupProperties = 224,
    acCmdPageNumber = 225,
    acCmdDateAndTime = 226,
    acCmdChangeToTextBox = 227,
    acCmdChangeToLabel = 228,
    acCmdChangeToListBox = 229,
    acCmdChangeToComboBox = 230,
    acCmdChangeToCheckBox = 231,
    acCmdChangeToToggleButton = 232,
    acCmdChangeToOptionButton = 233,
    acCmdChangeToImage = 234,
    acCmdAnswerWizard = 235,
    acCmdMicrosoftOnTheWeb = 236,
    acCmdClearItemDefaults = 237,
    acCmdZoom200 = 238,
    acCmdZoom150 = 239,
    acCmdZoom100 = 240,
    acCmdZoom75 = 241,
    acCmdZoom50 = 242,
    acCmdZoom25 = 243,
    acCmdZoom10 = 244,
    acCmdFitToWindow = 245,
    acCmdPreviewOnePage = 246,
    acCmdPreviewTwoPages = 247,
    acCmdPreviewFourPages = 248,
    acCmdPreviewEightPages = 249,
    acCmdPreviewTwelvePages = 250,
    acCmdOpenURL = 251,
    acCmdOpenStartPage = 252,
    acCmdOpenSearchPage = 253,
    acCmdRegisterActiveXControls = 254,
    acCmdDeleteTab = 255,
    acCmdDatabaseProperties = 256,
    acCmdImport = 257,
    acCmdInsertActiveXControl = 258,
    acCmdInsertHyperlink = 259,
    acCmdReferences = 260,
    acCmdAutoCorrect = 261,
    acCmdInsertProcedure = 262,
    acCmdCreateReplica = 263,
    acCmdSynchronizeNow = 264,
    acCmdRecoverDesignMaster = 265,
    acCmdResolveConflicts = 266,
    acCmdDeleteWatch = 267,
    acCmdSpelling = 269,
    acCmdAutoFormat = 270,
    acCmdDeleteTableColumn = 271,
    acCmdInsertTableColumn = 272,
    acCmdInsertLookupColumn = 273,
    acCmdRenameColumn = 274,
    acCmdSetDatabasePassword = 275,
    acCmdUserLevelSecurityWizard = 276,
    acCmdFilterExcludingSelection = 277,
    acCmdQuickPrint = 278,
    acCmdConvertMacrosToVisualBasic = 279,
    acCmdSaveAllModules = 280,
    acCmdFormView = 281,
    acCmdDatasheetView = 282,
    acCmdAnalyzePerformance = 283,
    acCmdAnalyzeTable = 284,
    acCmdDocumenter = 285,
    acCmdTileHorizontally = 286,
    acCmdProperties = 287,
    acCmdTransparentBackground = 288,
    acCmdTransparentBorder = 289,
    acCmdCompileLoadedModules = 290,
    acCmdInsertLookupField = 291,
    acCmdUndo = 292,
    acCmdInsertChart = 293,
    acCmdGoBack = 294,
    acCmdGoForward = 295,
    acCmdStopLoadingPage = 296,
    acCmdRefreshPage = 297,
    acCmdFavoritesOpen = 298,
    acCmdFavoritesAddTo = 299,
    acCmdShowOnlyWebToolbar = 300,
    acCmdToolbarControlProperties = 301,
    acCmdShowMembers = 302,
    acCmdListConstants = 303,
    acCmdQuickInfo = 304,
    acCmdParameterInfo = 305,
    acCmdCompleteWord = 306,
    acCmdBookmarksToggle = 307,
    acCmdBookmarksNext = 308,
    acCmdBookmarksPrevious = 309,
    acCmdBookmarksClearAll = 310,
    acCmdStepOut = 311,
    acCmdFindPrevWordUnderCursor = 312,
    acCmdFindNextWordUnderCursor = 313,
    acCmdObjBrwFindWholeWordOnly = 314,
    acCmdObjBrwShowHiddenMembers = 315,
    acCmdObjBrwHelp = 316,
    acCmdObjBrwViewDefinition = 317,
    acCmdObjBrwGroupMembers = 318,
    acCmdSelectReport = 319,
    acCmdSaveAsHTML = 321,
    acCmdSaveAsIDC = 322,
    acCmdSaveAsASP = 323,
    acCmdPublishDefaults = 324,
    acCmdEditHyperlink = 325,
    acCmdOpenHyperlink = 326,
    acCmdOpenNewHyperlink = 327,
    acCmdCopyHyperlink = 328,
    acCmdHyperlinkDisplayText = 329,
    acCmdTabControlPageOrder = 330,
    acCmdInsertPage = 331,
    acCmdDeletePage = 332,
    acCmdSelectAll = 333,
    acCmdCreateMenuFromMacro = 334,
    acCmdCreateToolbarFromMacro = 335,
    acCmdCreateShortcutMenuFromMacro = 336,
    acCmdDelete = 337,
    acCmdRunOpenMacro = 338,
    acCmdLastPosition = 339,
    acCmdPrint = 340,
    acCmdFindNext = 341,
    acCmdStepInto = 342,
    acCmdClearHyperlink = 343,
    acCmdDataAccessPageBrowse = 344,
    acCmdNewObjectDataAccessPage = 346,
    acCmdSelectDataAccessPage = 347,
    acCmdViewDataAccessPages = 349,
    acCmdNewObjectView = 350,
    acCmdNewObjectStoredProcedure = 351,
    acCmdNewObjectDiagram = 352,
    acCmdViewFieldList = 353,
    acCmdViewDiagrams = 354,
    acCmdViewStoredProcedures = 355,
    acCmdViewViews = 356,
    acCmdViewShowPaneSQL = 357,
    acCmdViewShowPaneDiagram = 358,
    acCmdViewShowPaneGrid = 359,
    acCmdViewVerifySQL = 360,
    acCmdQueryGroupBy = 361,
    acCmdQueryAddToOutput = 362,
    acCmdViewTableColumnNames = 363,
    acCmdViewTableNameOnly = 364,
    acCmdHidePane = 365,
    acCmdRemove = 366,
    acCmdViewTableColumnProperties = 368,
    acCmdViewTableKeys = 369,
    acCmdViewTableUserView = 370,
    acCmdZoomSelection = 371,
    acCmdDiagramNewLabel = 372,
    acCmdDiagramAddRelatedTables = 373,
    acCmdDiagramShowRelationshipLabels = 374,
    acCmdDiagramModifyUserDefinedView = 375,
    acCmdDiagramViewPageBreaks = 376,
    acCmdDiagramRecalculatePageBreaks = 377,
    acCmdDiagramAutosizeSelectedTables = 378,
    acCmdDiagramLayoutSelection = 379,
    acCmdDiagramLayoutDiagram = 380,
    acCmdDiagramNewTable = 381,
    acCmdDiagramDeleteRelationship = 382,
    acCmdConnection = 383,
    acCmdEditTriggers = 384,
    acCmdDataAccessPageDesignView = 385,
    acCmdPromote = 386,
    acCmdGroupByTable = 387,
    acCmdDemote = 388,
    acCmdSaveAsDataAccessPage = 389,
    acCmdMicrosoftScriptEditor = 390,
    acCmdWorkgroupAdministrator = 391,
    acCmdNewObjectFunction = 394,
    acCmdViewFunctions = 395,
    acCmdPivotTableView = 396,
    acCmdPivotChartView = 397,
    acCmdPivotAutoFilter = 398,
    acCmdPivotTableSubtotal = 399,
    acCmdPivotCollapse = 400,
    acCmdPivotExpand = 401,
    acCmdPivotTableHideDetails = 402,
    acCmdPivotTableShowDetails = 403,
    acCmdPivotRefresh = 404,
    acCmdPivotTableExportToExcel = 405,
    acCmdPivotTableMoveToRowArea = 406,
    acCmdPivotTableMoveToColumnArea = 407,
    acCmdPivotTableMoveToFilterArea = 408,
    acCmdPivotTableMoveToDetailArea = 409,
    acCmdPivotTablePromote = 410,
    acCmdPivotTableDemote = 411,
    acCmdPivotAutoSum = 412,
    acCmdPivotAutoCount = 413,
    acCmdPivotAutoMin = 414,
    acCmdPivotAutoMax = 415,
    acCmdPivotAutoAverage = 416,
    acCmdPivotAutoStdDev = 417,
    acCmdPivotAutoVar = 418,
    acCmdPivotAutoStdDevP = 419,
    acCmdPivotAutoVarP = 420,
    acCmdPivotShowTop1 = 421,
    acCmdPivotShowTop2 = 422,
    acCmdPivotShowTop5 = 423,
    acCmdPivotShowTop10 = 424,
    acCmdPivotShowTop25 = 425,
    acCmdPivotShowTop1Percent = 426,
    acCmdPivotShowTop2Percent = 427,
    acCmdPivotShowTop5Percent = 428,
    acCmdPivotShowTop10Percent = 429,
    acCmdPivotShowTop25Percent = 430,
    acCmdPivotShowTopOther = 431,
    acCmdPivotShowBottom1 = 432,
    acCmdPivotShowBottom2 = 433,
    acCmdPivotShowBottom5 = 434,
    acCmdPivotShowBottom10 = 435,
    acCmdPivotShowBottom25 = 436,
    acCmdPivotShowBottom1Percent = 437,
    acCmdPivotShowBottom2Percent = 438,
    acCmdPivotShowBottom5Percent = 439,
    acCmdPivotShowBottom10Percent = 440,
    acCmdPivotShowBottom25Percent = 441,
    acCmdPivotShowBottomOther = 442,
    acCmdPivotTableCreateCalcTotal = 443,
    acCmdPivotTableCreateCalcField = 444,
    acCmdPivotTableShowAsNormal = 445,
    acCmdPivotTablePercentRowTotal = 446,
    acCmdPivotTablePercentColumnTotal = 447,
    acCmdPivotTablePercentParentRowItem = 448,
    acCmdPivotTablePercentParentColumnItem = 449,
    acCmdPivotTablePercentGrandTotal = 450,
    acCmdPivotTableExpandIndicators = 451,
    acCmdPivotDropAreas = 452,
    acCmdPivotChartType = 453,
    acCmdPivotDelete = 454,
    acCmdPivotChartShowLegend = 455,
    acCmdPivotChartByRowByColumn = 456,
    acCmdPivotChartDrillInto = 457,
    acCmdPivotChartMultiplePlots = 458,
    acCmdPivotChartMultiplePlotsUnifiedScale = 459,
    acCmdPivotChartUndo = 460,
    acCmdPivotShowAll = 461,
    acCmdSubformFormView = 462,
    acCmdSubformDatasheetView = 463,
    acCmdSubformPivotTableView = 464,
    acCmdSubformPivotChartView = 465,
    acCmdWebPagePreview = 466,
    acCmdPageProperties = 467,
    acCmdDataOutline = 468,
    acCmdInsertMovieFromFile = 469,
    acCmdInsertPivotTable = 470,
    acCmdInsertSpreadsheet = 471,
    acCmdInsertUnboundSection = 472,
    acCmdWebTheme = 473,
    acCmdBackgroundPicture = 474,
    acCmdBackgroundSound = 475,
    acCmdAlignMiddle = 476,
    acCmdAlignCenter = 477,
    acCmdAlignmentAndSizing = 478,
    acCmdDataAccessPageFieldListRefresh = 479,
    acCmdDataAccessPageAddToPage = 480,
    acCmdZoom500 = 481,
    acCmdZoom1000 = 482,
    acCmdPrintRelationships = 483,
    acCmdGroupControls = 484,
    acCmdUngroupControls = 485,
    acCmdWebPageProperties = 486,
    acCmdExport = 487,
    acCmdOfficeClipboard = 488,
    acCmdDeleteTable = 489,
    acCmdPasteAsHyperlink = 490,
    acCmdNewGroup = 491,
    acCmdRenameGroup = 492,
    acCmdDeleteGroup = 493,
    acCmdAddToNewGroup = 494,
    acCmdSubformInNewWindow = 495,
    acCmdServerProperties = 496,
    acCmdTableCustomView = 497,
    acCmdTableAddTable = 498,
    acCmdInsertSubdatasheet = 499,
    acCmdConditionalFormatting = 500,
    acCmdChangeToCommandButton = 501,
    acCmdSubdatasheetExpandAll = 504,
    acCmdSubdatasheetCollapseAll = 505,
    acCmdSubdatasheetRemove = 506,
    acCmdServerFilterByForm = 507,
    acCmdMaximiumRecords = 508,
    acCmdSpeech = 511,
    acCmdBackup = 513,
    acCmdRestore = 514,
    acCmdTransferSQLDatabase = 515,
    acCmdCopyDatabaseFile = 516,
    acCmdDropSQLDatabase = 517,
    acCmdLinkedTableManager = 519,
    acCmdDatabaseSplitter = 520,
    acCmdSwitchboardManager = 521,
    acCmdUpsizingWizard = 522,
    acCmdPartialReplicaWizard = 524,
    acCmdVisualBasicEditor = 525,
    acCmdAddInManager = 526,
    acCmdPivotTableClearCustomOrdering = 527,
    acCmdPivotTableFilterBySelection = 528,
    acCmdPivotTableRemove = 529,
    acCmdPivotTableGroupItems = 530,
    acCmdPivotTableUngroupItems = 531,
    acCmdPivotChartDrillOut = 532,
    acCmdShowEnvelope = 533,
    acCmdPivotChartSortAscByTotal = 534,
    acCmdPivotChartSortDescByTotal = 535,
    acCmdViewObjectDependencies = 536,
    acCmdPublishDatabase = 537,
    acCmdCloseDatabase = 538,
    acCmdReportView = 539,
    acCmdToggleOffline = 540,
    acCmdRefreshData = 541,
    acCmdShareOnSharePoint = 542,
    acCmdSavedImports = 543,
    acCmdImportAttachAccess = 544,
    acCmdImportAttachExcel = 545,
    acCmdImportAttachText = 546,
    acCmdImportAttachSharePointList = 547,
    acCmdImportAttachXML = 548,
    acCmdImportAttachODBC = 549,
    acCmdImportAttachHTML = 550,
    acCmdImportAttachOutlook = 551,
    acCmdImportAttachdBase = 552,
    acCmdImportAttachParadox = 553,
    acCmdImportAttachLotus = 554,
    acCmdSavedExports = 555,
    acCmdExportExcel = 556,
    acCmdExportSharePointList = 557,
    acCmdExportRTF = 558,
    acCmdExportAccess = 559,
    acCmdExportText = 560,
    acCmdExportXML = 561,
    acCmdExportODBC = 562,
    acCmdExportSnapShot = 563,
    acCmdExportHTML = 564,
    acCmdExportdBase = 565,
    acCmdExportParadox = 566,
    acCmdExportLotus = 567,
    acCmdStackedLayout = 568,
    acCmdTabularLayout = 569,
    acCmdSelectEntireRow = 570,
    acCmdSelectEntireColumn = 571,
    acCmdMoveColumnCellUp = 572,
    acCmdMoveColumnCellDown = 573,
    acCmdLayoutGridlinesBoth = 574,
    acCmdLayoutGridlinesVertical = 575,
    acCmdLayoutGridlinesHorizontal = 576,
    acCmdLayoutGridlinesNone = 577,
    acCmdLayoutGridlinesCrossHatch = 578,
    acCmdLayoutGridlinesTop = 579,
    acCmdLayoutGridlinesBottom = 580,
    acCmdLayoutGridlinesOutline = 581,
    acCmdRemoveFromLayout = 582,
    acCmdAddFromOutlook = 583,
    acCmdSaveAsOutlookContact = 584,
    acCmdInsertLogo = 585,
    acCmdInsertTitle = 586,
    acCmdPasteFormatting = 587,
    acCmdMacroArguments = 588,
    acCmdMacroAllActions = 589,
    acCmdPrintSelection = 590,
    acCmdPublishFixedFormat = 591,
    acCmdExportFixedFormat = 592,
    acCmdLayoutView = 593,
    acCmdNewObjectContinuousForm = 594,
    acCmdNewObjectSplitForm = 595,
    acCmdNewObjectPivotChart = 596,
    acCmdNewObjectPivotTable = 597,
    acCmdNewObjectDatasheetForm = 598,
    acCmdNewObjectModalForm = 599,
    acCmdNewObjectBlankForm = 600,
    acCmdNewObjectLabelsReport = 601,
    acCmdNewObjectBlankReport = 602,
    acCmdNewObjectDesignQuery = 603,
    acCmdNewObjectDesignForm = 604,
    acCmdNewObjectDesignReport = 605,
    acCmdNewObjectDesignTable = 606,
    acCmdEditListItems = 607,
    acCmdCollectDataViaEmail = 608,
    acCmdManageReplies = 609,
    acCmdAnchorTopLeft = 610,
    acCmdAnchorStretchAcross = 611,
    acCmdAnchorTopRight = 612,
    acCmdAnchorStretchDown = 613,
    acCmdAnchorStretchDownAcross = 614,
    acCmdAnchorStretchDownRight = 615,
    acCmdAnchorBottomLeft = 616,
    acCmdAnchorBottomStretchAcross = 617,
    acCmdAnchorBottomRight = 618,
    acCmdFilterMenu = 619,
    acCmdShowColumnHistory = 620,
    acCmdBrowseSharePointList = 621,
    acCmdModifySharePointList = 622,
    acCmdModifySharePointListAlerts = 623,
    acCmdModifySharePointListWorkflow = 624,
    acCmdModifySharePointListPermissions = 625,
    acCmdRefreshSharePointList = 626,
    acCmdDeleteSharePointList = 627,
    acCmdControlMarginsNone = 628,
    acCmdControlMarginsNarrow = 629,
    acCmdControlMarginsMedium = 630,
    acCmdControlMarginsWide = 631,
    acCmdControlPaddingNone = 632,
    acCmdControlPaddingNarrow = 633,
    acCmdControlPaddingMedium = 634,
    acCmdControlPaddingWide = 635,
    acCmdShowDatePicker = 636,
    acCmdSetCaption = 637,
    acCmdSynchronize = 638,
    acCmdDiscardChanges = 639,
    acCmdDiscardChangesAndRefresh = 640,
    acCmdSharePointSiteRecycleBin = 641,
    acCmdToggleCacheListData = 642,
    acCmdRemoveFilterFromCurrentColumn = 643,
    acCmdRemoveAllFilters = 644,
    acCmdRemoveAllSorts = 645,
    acCmdCloseAll = 646,
    acCmdFieldTemplates = 647,
    acCmdApplyAutoFormat1 = 648,
    acCmdApplyAutoFormat2 = 649,
    acCmdApplyAutoFormat3 = 650,
    acCmdApplyAutoFormat4 = 651,
    acCmdApplyAutoFormat5 = 652,
    acCmdApplyAutoFormat6 = 653,
    acCmdApplyAutoFormat7 = 654,
    acCmdApplyAutoFormat8 = 655,
    acCmdApplyAutoFormat9 = 656,
    acCmdApplyAutoFormat10 = 657,
    acCmdApplyAutoFormat11 = 658,
    acCmdApplyAutoFormat12 = 659,
    acCmdApplyAutoFormat13 = 660,
    acCmdApplyAutoFormat14 = 661,
    acCmdApplyAutoFormat15 = 662,
    acCmdApplyAutoFormat16 = 663,
    acCmdApplyAutoFormat17 = 664,
    acCmdApplyAutoFormat18 = 665,
    acCmdApplyAutoFormat19 = 666,
    acCmdApplyAutoFormat20 = 667,
    acCmdApplyAutoFormat21 = 668,
    acCmdApplyAutoFormat22 = 669,
    acCmdApplyAutoFormat23 = 670,
    acCmdApplyAutoFormat24 = 671,
    acCmdApplyAutoFormat25 = 672,
    acCmdManageAttachments = 673,
    acCmdWorkflowTasks = 674,
    acCmdStartNewWorkflow = 675,
    acCmdShowMessageBar = 676,
    acCmdHideMessageBar = 677,
    acCmdLayoutInsertRowAbove = 678,
    acCmdLayoutInsertRowBelow = 679,
    acCmdLayoutInsertColumnLeft = 680,
    acCmdLayoutInsertColumnRight = 681,
    acCmdLayoutMergeCells = 682,
    acCmdLayoutSplitColumnCell = 683,
    acCmdLayoutSplitRowCell = 684,
    acCmdShowLogicCatalog = 685,
    acCmdSaveAsTemplate = 686,
    acCmdSaveDatabaseAsNewTemplatePart = 687,
    acCmdSaveSelectionAsNewDataType = 688,
    acCmdNewObjectNavigationTop = 689,
    acCmdNewObjectNavigationLeft = 690,
    acCmdNewObjectNavigationRight = 691,
    acCmdNewObjectNavigationTopTop = 692,
    acCmdNewObjectNavigationTopLeft = 693,
    acCmdNewObjectNavigationTopRight = 694,
    acCmdCompatCheckDatabase = 695,
    acCmdCompatCheckCurrentObject = 696,
    acCmdDesignObject = 697,
    acCmdCalculatedColumn = 698,
    acCmdSyncWebApplication = 699,
    acCmdConvertLinkedTableToLocal = 700,
    acCmdNewObjectContinuousFormWeb = 701,
    acCmdNewObjectDatasheetFormWeb = 702,
    acCmdNewObjectBlankFormWeb = 703,
    acCmdNewObjectBlankReportWeb = 704,
    acCmdNewObjectAutoFormWeb = 705,
    acCmdNewObjectAutoReportWeb = 706,
    acCmdNewObjectQueryWeb = 707,
    acCmdNewObjectMacroWeb = 708,
    acCmdNewObjectNavigationTopWeb = 709,
    acCmdNewObjectNavigationLeftWeb = 710,
    acCmdNewObjectNavigationRightWeb = 711,
    acCmdNewObjectNavigationTopTopWeb = 712,
    acCmdNewObjectNavigationTopLeftWeb = 713,
    acCmdNewObjectNavigationTopRightWeb = 714,
    acCmdSelectEntireLayout = 715,
    acCmdPrepareDatabaseForWeb = 716,
    acCmdManageTableEvents = 717,
    acCmdAddDataMacroAfterInsert = 718,
    acCmdAddDataMacroAfterUpdate = 719,
    acCmdAddDataMacroAfterDelete = 720,
    acCmdAddDataMacroValidateDelete = 721,
    acCmdAddDataMacroValidateChange = 722,
    acCmdAddNamedDataMacro = 723,
    acCmdInsertNavigationButton = 724
};

enum __declspec(uuid("8d59667f-7826-3275-bc74-017f807b8016"))
AcShowToolbar
{
    acToolbarYes = 0,
    acToolbarWhereApprop = 1,
    acToolbarNo = 2
};

enum __declspec(uuid("d8d2e10d-ab72-3ffe-af9d-7cc5cbf74c75"))
AcFormatConditionType
{
    acFieldValue = 0,
    acExpression = 1,
    acFieldHasFocus = 2,
    acDataBar = 3
};

enum __declspec(uuid("4188b383-5011-3bcb-8249-8d8d688a7be6"))
AcFormatConditionOperator
{
    acBetween = 0,
    acNotBetween = 1,
    acEqual = 2,
    acNotEqual = 3,
    acGreaterThan = 4,
    acLessThan = 5,
    acGreaterThanOrEqual = 6,
    acLessThanOrEqual = 7
};

enum __declspec(uuid("8eee4599-fe60-3b29-9c11-ce3a6ca535e3"))
AcColorIndex
{
    acColorIndexBlack = 0,
    acColorIndexMaroon = 1,
    acColorIndexGreen = 2,
    acColorIndexOlive = 3,
    acColorIndexDarkBlue = 4,
    acColorIndexViolet = 5,
    acColorIndexTeal = 6,
    acColorIndexGray = 7,
    acColorIndexSilver = 8,
    acColorIndexRed = 9,
    acColorIndexBrightGreen = 10,
    acColorIndexYellow = 11,
    acColorIndexBlue = 12,
    acColorIndexFuschia = 13,
    acColorIndexAqua = 14,
    acColorIndexWhite = 15
};

struct __declspec(uuid("45165490-ef32-11d0-86fb-006097c9818c"))
_RecordsetEvents : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall WillChangeField (
        /*[in]*/ long cFields,
        /*[in]*/ VARIANT Fields,
        /*[in,out]*/ enum ADODB::EventStatusEnum * adStatus,
        /*[in]*/ IUnknown * pRecordset ) = 0;
      virtual HRESULT __stdcall FieldChangeComplete (
        /*[in]*/ long cFields,
        /*[in]*/ VARIANT Fields,
        /*[in]*/ IUnknown * pError,
        /*[in,out]*/ enum ADODB::EventStatusEnum * adStatus,
        /*[in]*/ IUnknown * pRecordset ) = 0;
      virtual HRESULT __stdcall WillChangeRecord (
        /*[in]*/ enum ADODB::EventReasonEnum adReason,
        /*[in]*/ long cRecords,
        /*[in,out]*/ enum ADODB::EventStatusEnum * adStatus,
        /*[in]*/ IUnknown * pRecordset ) = 0;
      virtual HRESULT __stdcall RecordChangeComplete (
        /*[in]*/ enum ADODB::EventReasonEnum adReason,
        /*[in]*/ long cRecords,
        /*[in]*/ IUnknown * pError,
        /*[in,out]*/ enum ADODB::EventStatusEnum * adStatus,
        /*[in]*/ IUnknown * pRecordset ) = 0;
      virtual HRESULT __stdcall WillChangeRecordset (
        /*[in]*/ enum ADODB::EventReasonEnum adReason,
        /*[in,out]*/ enum ADODB::EventStatusEnum * adStatus,
        /*[in]*/ IUnknown * pRecordset ) = 0;
      virtual HRESULT __stdcall RecordsetChangeComplete (
        /*[in]*/ enum ADODB::EventReasonEnum adReason,
        /*[in]*/ IUnknown * pError,
        /*[in,out]*/ enum ADODB::EventStatusEnum * adStatus,
        /*[in]*/ IUnknown * pRecordset ) = 0;
      virtual HRESULT __stdcall WillMove (
        /*[in]*/ enum ADODB::EventReasonEnum adReason,
        /*[in,out]*/ enum ADODB::EventStatusEnum * adStatus,
        /*[in]*/ IUnknown * pRecordset ) = 0;
      virtual HRESULT __stdcall MoveComplete (
        /*[in]*/ enum ADODB::EventReasonEnum adReason,
        /*[in]*/ IUnknown * pError,
        /*[in,out]*/ enum ADODB::EventStatusEnum * adStatus,
        /*[in]*/ IUnknown * pRecordset ) = 0;
      virtual HRESULT __stdcall EndOfRecordset (
        /*[in,out]*/ short * fMoreData,
        /*[in,out]*/ enum ADODB::EventStatusEnum * adStatus,
        /*[in]*/ IUnknown * pRecordset ) = 0;
      virtual HRESULT __stdcall FetchProgress (
        /*[in]*/ long Progress,
        /*[in]*/ long MaxProgress,
        /*[in,out]*/ enum ADODB::EventStatusEnum * adStatus,
        /*[in]*/ IUnknown * pRecordset ) = 0;
      virtual HRESULT __stdcall FetchComplete (
        /*[in]*/ IUnknown * pError,
        /*[in,out]*/ enum ADODB::EventStatusEnum * adStatus,
        /*[in]*/ IUnknown * pRecordset ) = 0;
};

struct __declspec(uuid("e27a992d-a330-11d0-81dd-00c04fc2f51b"))
FormatCondition;
    // [ default ] interface _FormatCondition

struct __declspec(uuid("31b09710-eadc-11cd-b9f7-00aa004753b5"))
_ItemsSelected : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("3b06e977-e47c-11cd-8701-00aa003f0f07"))
Children : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("b1c1eac1-486f-11ce-a65d-00aa003f0f07"))
_AccessField : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("044e54c5-b19b-11ce-a689-00aa003f0f07"))
AccessField;
    // [ default ] interface _AccessField

struct __declspec(uuid("9cd4a761-a6a9-11ce-a686-00aa003f0f07"))
__Help : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_FieldName (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_FieldName (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_DataType (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_DataType (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_Description (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_Description (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_FieldSize (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_FieldSize (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_NewValues (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_NewValues (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_Required (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_Required (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_AllowZeroLength (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowZeroLength (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_Indexed (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_Indexed (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayControl (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayControl (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_ReplicationConflictFunction (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_ReplicationConflictFunction (
        /*[in]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_ProjectName (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_ProjectName (
        /*[in]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_MDE (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_MDE (
        /*[in]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_AllowBreakIntoCode (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowBreakIntoCode (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_AllowBuiltInToolbars (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowBuiltInToolbars (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_AllowBypassKey (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowBypassKey (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_AllowFullMenus (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowFullMenus (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_AllowSpecialKeys (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowSpecialKeys (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_AllowToolbarChanges (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowToolbarChanges (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_StartUpForm (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_StartUpForm (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_StartUpMenuBar (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_StartUpMenuBar (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_StartUpShortcutMenuBar (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_StartUpShortcutMenuBar (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_StartUpShowDBWindow (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_StartUpShowDBWindow (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_StartUpShowStatusBar (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_StartUpShowStatusBar (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_AppIcon (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_AppIcon (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_AppTitle (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_AppTitle (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_ODBCConnectStr (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_ODBCConnectStr (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_LogMessages (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_LogMessages (
        /*[in]*/ VARIANT * pRet ) = 0;
};

struct __declspec(uuid("50d56611-60ac-11cf-82c9-00aa004b9fe6"))
_Hyperlink : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_SubAddress (
        /*[out,retval]*/ BSTR * pbstrResult ) = 0;
      virtual HRESULT __stdcall put_SubAddress (
        /*[in]*/ VARIANT pbstrResult ) = 0;
      virtual HRESULT __stdcall get_Address (
        /*[out,retval]*/ BSTR * pbstrResult ) = 0;
      virtual HRESULT __stdcall put_Address (
        /*[in]*/ VARIANT pbstrResult ) = 0;
      virtual HRESULT __stdcall AddToFavorites ( ) = 0;
      virtual HRESULT __stdcall Follow (
        /*[in]*/ VARIANT_BOOL NewWindow,
        /*[in]*/ VARIANT_BOOL AddHistory,
        /*[in]*/ VARIANT ExtraInfo,
        /*[in]*/ enum Office::MsoExtraInfoMethod Method,
        /*[in]*/ BSTR HeaderInfo ) = 0;
      virtual HRESULT __stdcall get_EmailSubject (
        /*[out,retval]*/ BSTR * pbstrResult ) = 0;
      virtual HRESULT __stdcall put_EmailSubject (
        /*[in]*/ VARIANT pbstrResult ) = 0;
      virtual HRESULT __stdcall get_ScreenTip (
        /*[out,retval]*/ BSTR * pbstrResult ) = 0;
      virtual HRESULT __stdcall put_ScreenTip (
        /*[in]*/ VARIANT pbstrResult ) = 0;
      virtual HRESULT __stdcall get_TextToDisplay (
        /*[out,retval]*/ BSTR * pbstrResult ) = 0;
      virtual HRESULT __stdcall put_TextToDisplay (
        /*[in]*/ VARIANT pbstrResult ) = 0;
      virtual HRESULT __stdcall CreateNewDocument (
        /*[in]*/ BSTR FileName,
        /*[in]*/ VARIANT_BOOL EditNow,
        /*[in]*/ VARIANT_BOOL Overwrite ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("50d56610-60ac-11cf-82c9-00aa004b9fe6"))
Hyperlink;
    // [ default ] interface _Hyperlink

struct __declspec(uuid("3b06e973-e47c-11cd-8701-00aa003f0f07"))
Page;
    // [ default ] interface _Page
    // [ source ] interface _PageEvents
    // [ default, source ] dispinterface DispPageEvents

struct __declspec(uuid("3b06e978-e47c-11cd-8701-00aa003f0f07"))
Pages : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _Page * * pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ VARIANT Before,
        /*[out,retval]*/ struct _Page * * pRet ) = 0;
      virtual HRESULT __stdcall Remove (
        /*[in]*/ VARIANT Item = vtMissing ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("02f92c80-8f8e-101b-af4e-00aa003f0f07"))
Control;
    // [ default ] interface _Control

struct __declspec(uuid("90b322a5-f1d9-11cd-8701-00aa003f0f07"))
__ControlInReportEvents : IUnknown
{};

struct __declspec(uuid("90b322a4-f1d9-11cd-8701-00aa003f0f07"))
_ControlInReportEvents;
    // [ default ] interface _Control
    // [ source ] interface __ControlInReportEvents
    // [ default, source ] dispinterface _DispControlInReportEvents

struct __declspec(uuid("bc9e4341-f037-11cd-8701-00aa003f0f07"))
_LabelEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Click ( ) = 0;
      virtual HRESULT __stdcall DblClick (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall MouseDown (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseMove (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseUp (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
};

struct __declspec(uuid("3b06e947-e47c-11cd-8701-00aa003f0f07"))
Label;
    // [ default ] interface _Label
    // [ source ] interface _LabelEvents
    // [ default, source ] dispinterface DispLabelEvents

struct __declspec(uuid("bc9e4358-f037-11cd-8701-00aa003f0f07"))
_ChildLabelEvents : IUnknown
{};

struct __declspec(uuid("bc9e4359-f037-11cd-8701-00aa003f0f07"))
_ChildLabel;
    // [ default ] interface _Label
    // [ source ] interface _ChildLabelEvents
    // [ default, source ] dispinterface DispChildLabelEvents

struct __declspec(uuid("bc9e4342-f037-11cd-8701-00aa003f0f07"))
_RectangleEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Click ( ) = 0;
      virtual HRESULT __stdcall DblClick (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall MouseDown (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseMove (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseUp (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
};

struct __declspec(uuid("3b06e949-e47c-11cd-8701-00aa003f0f07"))
Rectangle;
    // [ default ] interface _Rectangle
    // [ source ] interface _RectangleEvents
    // [ default, source ] dispinterface DispRectangleEvents

struct __declspec(uuid("bc9e4343-f037-11cd-8701-00aa003f0f07"))
_LineEvents : IUnknown
{};

struct __declspec(uuid("3b06e94b-e47c-11cd-8701-00aa003f0f07"))
Line;
    // [ default ] interface _Line
    // [ source ] interface _LineEvents
    // [ default, source ] dispinterface DispLineEvents

struct __declspec(uuid("bc9e4344-f037-11cd-8701-00aa003f0f07"))
_ImageEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Click ( ) = 0;
      virtual HRESULT __stdcall DblClick (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall MouseDown (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseMove (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseUp (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
};

struct __declspec(uuid("3b06e94d-e47c-11cd-8701-00aa003f0f07"))
Image;
    // [ default ] interface _Image
    // [ source ] interface _ImageEvents
    // [ default, source ] dispinterface DispImageEvents

struct __declspec(uuid("bc9e4345-f037-11cd-8701-00aa003f0f07"))
_CommandButtonEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Click ( ) = 0;
      virtual HRESULT __stdcall Enter ( ) = 0;
      virtual HRESULT __stdcall Exit (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall GotFocus ( ) = 0;
      virtual HRESULT __stdcall LostFocus ( ) = 0;
      virtual HRESULT __stdcall DblClick (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall MouseDown (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseMove (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseUp (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall KeyDown (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
      virtual HRESULT __stdcall KeyPress (
        /*[in,out]*/ short * KeyAscii ) = 0;
      virtual HRESULT __stdcall KeyUp (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
};

struct __declspec(uuid("3b06e94f-e47c-11cd-8701-00aa003f0f07"))
CommandButton;
    // [ default ] interface _CommandButton
    // [ source ] interface _CommandButtonEvents
    // [ default, source ] dispinterface DispCommandButtonEvents

struct __declspec(uuid("bc9e4346-f037-11cd-8701-00aa003f0f07"))
_OptionButtonEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Click ( ) = 0;
      virtual HRESULT __stdcall BeforeUpdate (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall AfterUpdate ( ) = 0;
      virtual HRESULT __stdcall Enter ( ) = 0;
      virtual HRESULT __stdcall Exit (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall GotFocus ( ) = 0;
      virtual HRESULT __stdcall LostFocus ( ) = 0;
      virtual HRESULT __stdcall DblClick (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall MouseDown (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseMove (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseUp (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall KeyDown (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
      virtual HRESULT __stdcall KeyPress (
        /*[in,out]*/ short * KeyAscii ) = 0;
      virtual HRESULT __stdcall KeyUp (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
};

struct __declspec(uuid("3b06e951-e47c-11cd-8701-00aa003f0f07"))
OptionButton;
    // [ default ] interface _OptionButton
    // [ source ] interface _OptionButtonEvents
    // [ default, source ] dispinterface DispOptionButtonEvents

struct __declspec(uuid("bc9e435b-f037-11cd-8701-00aa003f0f07"))
_OptionButtonInOptionEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall GotFocus ( ) = 0;
      virtual HRESULT __stdcall LostFocus ( ) = 0;
      virtual HRESULT __stdcall MouseDown (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseMove (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseUp (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall KeyDown (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
      virtual HRESULT __stdcall KeyPress (
        /*[in,out]*/ short * KeyAscii ) = 0;
      virtual HRESULT __stdcall KeyUp (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
};

struct __declspec(uuid("bc9e435a-f037-11cd-8701-00aa003f0f07"))
_OptionButtonInOption;
    // [ default ] interface _OptionButton
    // [ source ] interface _OptionButtonInOptionEvents
    // [ default, source ] dispinterface DispOptionButtonEvents

struct __declspec(uuid("bc9e4347-f037-11cd-8701-00aa003f0f07"))
_CheckBoxEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Click ( ) = 0;
      virtual HRESULT __stdcall BeforeUpdate (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall AfterUpdate ( ) = 0;
      virtual HRESULT __stdcall Enter ( ) = 0;
      virtual HRESULT __stdcall Exit (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall GotFocus ( ) = 0;
      virtual HRESULT __stdcall LostFocus ( ) = 0;
      virtual HRESULT __stdcall DblClick (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall MouseDown (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseMove (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseUp (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall KeyDown (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
      virtual HRESULT __stdcall KeyPress (
        /*[in,out]*/ short * KeyAscii ) = 0;
      virtual HRESULT __stdcall KeyUp (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
};

struct __declspec(uuid("3b06e953-e47c-11cd-8701-00aa003f0f07"))
CheckBox;
    // [ default ] interface _Checkbox
    // [ source ] interface _CheckBoxEvents
    // [ default, source ] dispinterface DispCheckBoxEvents

struct __declspec(uuid("bc9e435d-f037-11cd-8701-00aa003f0f07"))
_CheckBoxInOptionEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall GotFocus ( ) = 0;
      virtual HRESULT __stdcall LostFocus ( ) = 0;
      virtual HRESULT __stdcall MouseDown (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseMove (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseUp (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall KeyDown (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
      virtual HRESULT __stdcall KeyPress (
        /*[in,out]*/ short * KeyAscii ) = 0;
      virtual HRESULT __stdcall KeyUp (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
};

struct __declspec(uuid("bc9e435c-f037-11cd-8701-00aa003f0f07"))
_CheckBoxInOption;
    // [ default ] interface _Checkbox
    // [ source ] interface _CheckBoxInOptionEvents
    // [ default, source ] dispinterface DispCheckBoxEvents

struct __declspec(uuid("bc9e4348-f037-11cd-8701-00aa003f0f07"))
_OptionGroupEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall BeforeUpdate (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall AfterUpdate ( ) = 0;
      virtual HRESULT __stdcall Enter ( ) = 0;
      virtual HRESULT __stdcall Exit (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall Click ( ) = 0;
      virtual HRESULT __stdcall DblClick (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall MouseDown (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseMove (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseUp (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
};

struct __declspec(uuid("3b06e955-e47c-11cd-8701-00aa003f0f07"))
OptionGroup;
    // [ default ] interface _OptionGroup
    // [ source ] interface _OptionGroupEvents
    // [ default, source ] dispinterface DispOptionGroupEvents

struct __declspec(uuid("bc9e4349-f037-11cd-8701-00aa003f0f07"))
_BoundObjectFrameEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Updated (
        /*[in,out]*/ short * Code ) = 0;
      virtual HRESULT __stdcall BeforeUpdate (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall AfterUpdate ( ) = 0;
      virtual HRESULT __stdcall Enter ( ) = 0;
      virtual HRESULT __stdcall Exit (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall GotFocus ( ) = 0;
      virtual HRESULT __stdcall LostFocus ( ) = 0;
      virtual HRESULT __stdcall Click ( ) = 0;
      virtual HRESULT __stdcall DblClick (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall MouseDown (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseMove (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseUp (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall KeyDown (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
      virtual HRESULT __stdcall KeyPress (
        /*[in,out]*/ short * KeyAscii ) = 0;
      virtual HRESULT __stdcall KeyUp (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
};

struct __declspec(uuid("3b06e957-e47c-11cd-8701-00aa003f0f07"))
BoundObjectFrame;
    // [ default ] interface _BoundObjectFrame
    // [ source ] interface _BoundObjectFrameEvents
    // [ default, source ] dispinterface DispBoundObjectFrameEvents

struct __declspec(uuid("bc9e4340-f037-11cd-8701-00aa003f0f07"))
_TextBoxEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall BeforeUpdate (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall AfterUpdate ( ) = 0;
      virtual HRESULT __stdcall Change ( ) = 0;
      virtual HRESULT __stdcall Enter ( ) = 0;
      virtual HRESULT __stdcall Exit (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall GotFocus ( ) = 0;
      virtual HRESULT __stdcall LostFocus ( ) = 0;
      virtual HRESULT __stdcall Click ( ) = 0;
      virtual HRESULT __stdcall DblClick (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall MouseDown (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseMove (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseUp (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall KeyDown (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
      virtual HRESULT __stdcall KeyPress (
        /*[in,out]*/ short * KeyAscii ) = 0;
      virtual HRESULT __stdcall KeyUp (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
      virtual HRESULT __stdcall Dirty (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall Undo (
        /*[out]*/ short * Cancel ) = 0;
};

struct __declspec(uuid("3b06e945-e47c-11cd-8701-00aa003f0f07"))
TextBox;
    // [ default ] interface _Textbox
    // [ source ] interface _TextBoxEvents
    // [ default, source ] dispinterface DispTextBoxEvents

struct __declspec(uuid("bc9e434b-f037-11cd-8701-00aa003f0f07"))
_ListBoxEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall BeforeUpdate (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall AfterUpdate ( ) = 0;
      virtual HRESULT __stdcall Enter ( ) = 0;
      virtual HRESULT __stdcall Exit (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall GotFocus ( ) = 0;
      virtual HRESULT __stdcall LostFocus ( ) = 0;
      virtual HRESULT __stdcall Click ( ) = 0;
      virtual HRESULT __stdcall DblClick (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall MouseDown (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseMove (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseUp (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall KeyDown (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
      virtual HRESULT __stdcall KeyPress (
        /*[in,out]*/ short * KeyAscii ) = 0;
      virtual HRESULT __stdcall KeyUp (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
};

struct __declspec(uuid("3b06e959-e47c-11cd-8701-00aa003f0f07"))
ListBox;
    // [ default ] interface _ListBox
    // [ source ] interface _ListBoxEvents
    // [ default, source ] dispinterface DispListBoxEvents

struct __declspec(uuid("bc9e434c-f037-11cd-8701-00aa003f0f07"))
_ComboBoxEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall BeforeUpdate (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall AfterUpdate ( ) = 0;
      virtual HRESULT __stdcall Change ( ) = 0;
      virtual HRESULT __stdcall NotInList (
        /*[in,out]*/ BSTR * NewData,
        /*[out]*/ short * Response ) = 0;
      virtual HRESULT __stdcall Enter ( ) = 0;
      virtual HRESULT __stdcall Exit (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall GotFocus ( ) = 0;
      virtual HRESULT __stdcall LostFocus ( ) = 0;
      virtual HRESULT __stdcall Click ( ) = 0;
      virtual HRESULT __stdcall DblClick (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall MouseDown (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseMove (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseUp (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall KeyDown (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
      virtual HRESULT __stdcall KeyPress (
        /*[in,out]*/ short * KeyAscii ) = 0;
      virtual HRESULT __stdcall KeyUp (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
      virtual HRESULT __stdcall Dirty (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall Undo (
        /*[out]*/ short * Cancel ) = 0;
};

struct __declspec(uuid("3b06e95b-e47c-11cd-8701-00aa003f0f07"))
ComboBox;
    // [ default ] interface _Combobox
    // [ source ] interface _ComboBoxEvents
    // [ default, source ] dispinterface DispComboBoxEvents

struct __declspec(uuid("bc9e434d-f037-11cd-8701-00aa003f0f07"))
_ObjectFrameEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Updated (
        /*[in,out]*/ short * Code ) = 0;
      virtual HRESULT __stdcall Enter ( ) = 0;
      virtual HRESULT __stdcall Exit (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall GotFocus ( ) = 0;
      virtual HRESULT __stdcall LostFocus ( ) = 0;
      virtual HRESULT __stdcall Click ( ) = 0;
      virtual HRESULT __stdcall DblClick (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall MouseDown (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseMove (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseUp (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
};

struct __declspec(uuid("3b06e95d-e47c-11cd-8701-00aa003f0f07"))
ObjectFrame;
    // [ default ] interface _ObjectFrame
    // [ source ] interface _ObjectFrameEvents
    // [ default, source ] dispinterface DispObjectFrameEvents

struct __declspec(uuid("bc9e434e-f037-11cd-8701-00aa003f0f07"))
_PageBreakEvents : IUnknown
{};

struct __declspec(uuid("3b06e95f-e47c-11cd-8701-00aa003f0f07"))
PageBreak;
    // [ default ] interface _PageBreak
    // [ source ] interface _PageBreakEvents
    // [ default, source ] dispinterface DispPageBreakEvents

struct __declspec(uuid("bc9e434f-f037-11cd-8701-00aa003f0f07"))
_ToggleButtonEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Click ( ) = 0;
      virtual HRESULT __stdcall BeforeUpdate (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall AfterUpdate ( ) = 0;
      virtual HRESULT __stdcall Enter ( ) = 0;
      virtual HRESULT __stdcall Exit (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall GotFocus ( ) = 0;
      virtual HRESULT __stdcall LostFocus ( ) = 0;
      virtual HRESULT __stdcall DblClick (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall MouseDown (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseMove (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseUp (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall KeyDown (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
      virtual HRESULT __stdcall KeyPress (
        /*[in,out]*/ short * KeyAscii ) = 0;
      virtual HRESULT __stdcall KeyUp (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
};

struct __declspec(uuid("3b06e961-e47c-11cd-8701-00aa003f0f07"))
ToggleButton;
    // [ default ] interface _ToggleButton
    // [ source ] interface _ToggleButtonEvents
    // [ default, source ] dispinterface DispToggleButtonEvents

struct __declspec(uuid("bc9e435f-f037-11cd-8701-00aa003f0f07"))
_ToggleButtonInOptionEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall GotFocus ( ) = 0;
      virtual HRESULT __stdcall LostFocus ( ) = 0;
      virtual HRESULT __stdcall MouseDown (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseMove (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseUp (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall KeyDown (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
      virtual HRESULT __stdcall KeyPress (
        /*[in,out]*/ short * KeyAscii ) = 0;
      virtual HRESULT __stdcall KeyUp (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
};

struct __declspec(uuid("bc9e435e-f037-11cd-8701-00aa003f0f07"))
_ToggleButtonInOption;
    // [ default ] interface _ToggleButton
    // [ source ] interface _ToggleButtonInOptionEvents
    // [ default, source ] dispinterface DispToggleButtonEvents

struct __declspec(uuid("a843ccd0-6e2c-11cf-a219-00a0c90542ff"))
_PaletteButtonEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Click ( ) = 0;
      virtual HRESULT __stdcall BeforeUpdate (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall AfterUpdate ( ) = 0;
      virtual HRESULT __stdcall Enter ( ) = 0;
      virtual HRESULT __stdcall Exit (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall GotFocus ( ) = 0;
      virtual HRESULT __stdcall LostFocus ( ) = 0;
      virtual HRESULT __stdcall DblClick (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall MouseDown (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseMove (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseUp (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall KeyDown (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
      virtual HRESULT __stdcall KeyPress (
        /*[in,out]*/ short * KeyAscii ) = 0;
      virtual HRESULT __stdcall KeyUp (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
};

struct __declspec(uuid("9cd4a762-a6a9-11ce-a686-00aa003f0f07"))
PaletteButton;
    // [ default ] interface _PaletteButton
    // [ source ] interface _PaletteButtonEvents
    // [ default, source ] dispinterface DispPaletteButtonEvents

struct __declspec(uuid("bc9e4350-f037-11cd-8701-00aa003f0f07"))
_SubFormEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Enter ( ) = 0;
      virtual HRESULT __stdcall Exit (
        /*[out]*/ short * Cancel ) = 0;
};

struct __declspec(uuid("3b06e963-e47c-11cd-8701-00aa003f0f07"))
SubForm;
    // [ default ] interface _SubForm
    // [ source ] interface _SubFormEvents
    // [ default, source ] dispinterface DispSubFormEvents

struct __declspec(uuid("bc9e4351-f037-11cd-8701-00aa003f0f07"))
_SubReportEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Enter ( ) = 0;
      virtual HRESULT __stdcall Exit (
        /*[out]*/ short * Cancel ) = 0;
};

struct __declspec(uuid("3b06e965-e47c-11cd-8701-00aa003f0f07"))
SubReport;
    // [ default ] interface _SubReport
    // [ source ] interface _SubReportEvents
    // [ default, source ] dispinterface DispSubReportEvents

struct __declspec(uuid("bc9e4352-f037-11cd-8701-00aa003f0f07"))
_CustomControlEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Updated (
        /*[in,out]*/ short * Code ) = 0;
      virtual HRESULT __stdcall Enter ( ) = 0;
      virtual HRESULT __stdcall Exit (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall GotFocus ( ) = 0;
      virtual HRESULT __stdcall LostFocus ( ) = 0;
};

struct __declspec(uuid("3b06e967-e47c-11cd-8701-00aa003f0f07"))
CustomControl;
    // [ default ] interface _CustomControl
    // [ source ] interface _CustomControlEvents
    // [ default, source ] dispinterface DispCustomControlEvents

struct __declspec(uuid("300471e2-7426-11ce-ab64-00aa0042b7ce"))
_CustomControlInReportEvents : IUnknown
{};

struct __declspec(uuid("300471e0-7426-11ce-ab63-00aa0042b7ce"))
_CustomControlInReport;
    // [ default ] interface _CustomControl
    // [ source ] interface _CustomControlInReportEvents
    // [ default, source ] dispinterface DispCustomControlInReportEvents

struct __declspec(uuid("3b06e972-e47c-11cd-8701-00aa003f0f07"))
_TabControlEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Click ( ) = 0;
      virtual HRESULT __stdcall DblClick (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall MouseDown (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseMove (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseUp (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall KeyDown (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
      virtual HRESULT __stdcall KeyPress (
        /*[in,out]*/ short * KeyAscii ) = 0;
      virtual HRESULT __stdcall KeyUp (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
      virtual HRESULT __stdcall Change ( ) = 0;
};

struct __declspec(uuid("3b06e970-e47c-11cd-8701-00aa003f0f07"))
TabControl;
    // [ default ] interface _TabControl
    // [ source ] interface _TabControlEvents
    // [ default, source ] dispinterface DispTabControlEvents

struct __declspec(uuid("3b06e975-e47c-11cd-8701-00aa003f0f07"))
_PageEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Click ( ) = 0;
      virtual HRESULT __stdcall DblClick (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall MouseDown (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseMove (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseUp (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
};

struct __declspec(uuid("bc9e4353-f037-11cd-8701-00aa003f0f07"))
_SectionEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Click ( ) = 0;
      virtual HRESULT __stdcall DblClick (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall MouseDown (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseMove (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseUp (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall Paint ( ) = 0;
};

struct __declspec(uuid("bc9e4355-f037-11cd-8701-00aa003f0f07"))
Section;
    // [ default ] interface _Section
    // [ source ] interface _SectionEvents
    // [ default, source ] dispinterface DispSectionEvents

struct __declspec(uuid("bc9e4356-f037-11cd-8701-00aa003f0f07"))
GroupLevel;
    // [ default ] interface _GroupLevel

struct __declspec(uuid("bc9e4361-f037-11cd-8701-00aa003f0f07"))
_SectionInReportEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Format (
        /*[out]*/ short * Cancel,
        /*[in,out]*/ short * FormatCount ) = 0;
      virtual HRESULT __stdcall Print (
        /*[out]*/ short * Cancel,
        /*[in,out]*/ short * PrintCount ) = 0;
      virtual HRESULT __stdcall Retreat ( ) = 0;
      virtual HRESULT __stdcall Click ( ) = 0;
      virtual HRESULT __stdcall DblClick (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall MouseDown (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseMove (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseUp (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall Paint ( ) = 0;
};

struct __declspec(uuid("bc9e4360-f037-11cd-8701-00aa003f0f07"))
_SectionInReport;
    // [ default ] interface _Section
    // [ source ] interface _SectionInReportEvents
    // [ default, source ] dispinterface DispSectionInReportEvents

struct __declspec(uuid("7ad9e905-baf8-11ce-a68a-00aa003f0f07"))
_PageHdrFtrInReportEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Format (
        /*[out]*/ short * Cancel,
        /*[in,out]*/ short * FormatCount ) = 0;
      virtual HRESULT __stdcall Print (
        /*[out]*/ short * Cancel,
        /*[in,out]*/ short * PrintCount ) = 0;
      virtual HRESULT __stdcall Click ( ) = 0;
      virtual HRESULT __stdcall DblClick (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall MouseDown (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseMove (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseUp (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
};

struct __declspec(uuid("7ad9e906-baf8-11ce-a68a-00aa003f0f07"))
_PageHdrFtrInReport;
    // [ default ] interface _Section
    // [ source ] interface _PageHdrFtrInReportEvents
    // [ default, source ] dispinterface DispPageHdrFtrInReportEvents

enum __declspec(uuid("247c2fde-b67e-3b49-9c82-a877623b9de4"))
RefKind
{
    TypeLib = 0,
    Project = 1
};

enum __declspec(uuid("c94ef443-1c11-39d1-9e9e-a55aae881cd0"))
ProcKind
{
    Proc = 0,
    Let = 1,
    Set = 2,
    Get = 3
};

struct __declspec(uuid("331fdcfb-cf31-11cd-8701-00aa003f0f07"))
_FormEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Load ( ) = 0;
      virtual HRESULT __stdcall Current ( ) = 0;
      virtual HRESULT __stdcall BeforeInsert (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall AfterInsert ( ) = 0;
      virtual HRESULT __stdcall BeforeUpdate (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall AfterUpdate ( ) = 0;
      virtual HRESULT __stdcall Delete (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall BeforeDelConfirm (
        /*[out]*/ short * Cancel,
        /*[out]*/ short * Response ) = 0;
      virtual HRESULT __stdcall AfterDelConfirm (
        /*[in,out]*/ short * Status ) = 0;
      virtual HRESULT __stdcall Open (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall Resize ( ) = 0;
      virtual HRESULT __stdcall Unload (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall Close ( ) = 0;
      virtual HRESULT __stdcall Activate ( ) = 0;
      virtual HRESULT __stdcall Deactivate ( ) = 0;
      virtual HRESULT __stdcall GotFocus ( ) = 0;
      virtual HRESULT __stdcall LostFocus ( ) = 0;
      virtual HRESULT __stdcall Click ( ) = 0;
      virtual HRESULT __stdcall DblClick (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall MouseDown (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseMove (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall MouseUp (
        /*[in,out]*/ short * Button,
        /*[in,out]*/ short * Shift,
        /*[in,out]*/ float * X,
        /*[in,out]*/ float * Y ) = 0;
      virtual HRESULT __stdcall KeyDown (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
      virtual HRESULT __stdcall KeyPress (
        /*[in,out]*/ short * KeyAscii ) = 0;
      virtual HRESULT __stdcall KeyUp (
        /*[in,out]*/ short * KeyCode,
        /*[in,out]*/ short * Shift ) = 0;
      virtual HRESULT __stdcall Error (
        /*[in,out]*/ short * DataErr,
        /*[out]*/ short * Response ) = 0;
      virtual HRESULT __stdcall Timer ( ) = 0;
      virtual HRESULT __stdcall Filter (
        /*[out]*/ short * Cancel,
        /*[in,out]*/ short * FilterType ) = 0;
      virtual HRESULT __stdcall ApplyFilter (
        /*[out]*/ short * Cancel,
        /*[in,out]*/ short * ApplyType ) = 0;
      virtual HRESULT __stdcall Dirty (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall Undo (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall RecordExit (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall BeginBatchEdit (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall UndoBatchEdit (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall BeforeBeginTransaction (
        /*[out]*/ short * Cancel,
        /*[in]*/ struct ADODB::_Connection * * Connection ) = 0;
      virtual HRESULT __stdcall AfterBeginTransaction (
        /*[in]*/ struct ADODB::_Connection * * Connection ) = 0;
      virtual HRESULT __stdcall BeforeCommitTransaction (
        /*[out]*/ short * Cancel,
        /*[in]*/ struct ADODB::_Connection * * Connection ) = 0;
      virtual HRESULT __stdcall AfterCommitTransaction (
        /*[in]*/ struct ADODB::_Connection * * Connection ) = 0;
      virtual HRESULT __stdcall RollbackTransaction (
        /*[in]*/ struct ADODB::_Connection * * Connection ) = 0;
      virtual HRESULT __stdcall OnConnect ( ) = 0;
      virtual HRESULT __stdcall OnDisconnect ( ) = 0;
      virtual HRESULT __stdcall PivotTableChange (
        /*[in]*/ long Reason ) = 0;
      virtual HRESULT __stdcall Query ( ) = 0;
      virtual HRESULT __stdcall BeforeQuery ( ) = 0;
      virtual HRESULT __stdcall SelectionChange ( ) = 0;
      virtual HRESULT __stdcall CommandBeforeExecute (
        /*[in]*/ VARIANT Command,
        /*[in]*/ IDispatch * Cancel ) = 0;
      virtual HRESULT __stdcall CommandChecked (
        /*[in]*/ VARIANT Command,
        /*[in]*/ IDispatch * Checked ) = 0;
      virtual HRESULT __stdcall CommandEnabled (
        /*[in]*/ VARIANT Command,
        /*[in]*/ IDispatch * Enabled ) = 0;
      virtual HRESULT __stdcall CommandExecute (
        /*[in]*/ VARIANT Command ) = 0;
      virtual HRESULT __stdcall DataSetChange ( ) = 0;
      virtual HRESULT __stdcall BeforeScreenTip (
        /*[in]*/ IDispatch * ScreenTipText,
        /*[in]*/ IDispatch * SourceObject ) = 0;
      virtual HRESULT __stdcall BeforeRender (
        /*[in]*/ IDispatch * drawObject,
        /*[in]*/ IDispatch * chartObject,
        /*[in]*/ IDispatch * Cancel ) = 0;
      virtual HRESULT __stdcall AfterRender (
        /*[in]*/ IDispatch * drawObject,
        /*[in]*/ IDispatch * chartObject ) = 0;
      virtual HRESULT __stdcall AfterFinalRender (
        /*[in]*/ IDispatch * drawObject ) = 0;
      virtual HRESULT __stdcall AfterLayout (
        /*[in]*/ IDispatch * drawObject ) = 0;
      virtual HRESULT __stdcall MouseWheel (
        /*[in]*/ VARIANT_BOOL Page,
        /*[in]*/ long Count ) = 0;
      virtual HRESULT __stdcall ViewChange (
        /*[in]*/ long Reason ) = 0;
      virtual HRESULT __stdcall DataChange (
        /*[in]*/ long Reason ) = 0;
};

struct __declspec(uuid("483615a0-74be-101b-af4e-00aa003f0f07"))
FormOld;
    // [ default ] interface _Form
    // [ default, source ] interface _FormEvents

struct __declspec(uuid("bc9e4357-f037-11cd-8701-00aa003f0f07"))
_ReportEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Open (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall Close ( ) = 0;
      virtual HRESULT __stdcall Activate ( ) = 0;
      virtual HRESULT __stdcall Deactivate ( ) = 0;
      virtual HRESULT __stdcall Error (
        /*[in,out]*/ short * DataErr,
        /*[out]*/ short * Response ) = 0;
      virtual HRESULT __stdcall NoData (
        /*[out]*/ short * Cancel ) = 0;
      virtual HRESULT __stdcall Page ( ) = 0;
};

struct __declspec(uuid("27ce30a0-91ff-101b-af4e-00aa003f0f07"))
ReportOld;
    // [ default ] interface _Report
    // [ default, source ] interface _ReportEvents

struct __declspec(uuid("73a4c9c1-d68d-11d0-98bf-00a0c90dc8d9"))
Application;
    // [ default ] interface _Application

struct __declspec(uuid("331fdd00-cf31-11cd-8701-00aa003f0f07"))
_AccessProperty : DAO::Property
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Category (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("331fdd02-cf31-11cd-8701-00aa003f0f07"))
Properties : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("5970c574-eb8c-11cd-8701-00aa003f0f07"))
Controls : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("3b06e960-e47c-11cd-8701-00aa003f0f07"))
_PageBreak : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall SizeToFit ( ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_EventProcPrefix (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_EventProcPrefix (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Section (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_IsVisible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IsVisible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_InSelection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InSelection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_ControlName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("9cd4a760-a6a9-11ce-a686-00aa003f0f07"))
_PaletteButton : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_OldValue (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall SizeToFit ( ) = 0;
      virtual HRESULT __stdcall Requery ( ) = 0;
      virtual HRESULT __stdcall Goto ( ) = 0;
      virtual HRESULT __stdcall SetFocus ( ) = 0;
      virtual HRESULT __stdcall get_Controls (
        /*[out,retval]*/ struct Children * * pRet ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_EventProcPrefix (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_EventProcPrefix (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_OptionValue (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_OptionValue (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ControlSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_DefaultValue (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_DefaultValue (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ValidationRule (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ValidationRule (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ValidationText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ValidationText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_StatusBarText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_StatusBarText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayWhen (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayWhen (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Locked (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Locked (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TripleState (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_TripleState (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabStop (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_TabStop (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabIndex (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TabIndex (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_HideDuplicates (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_HideDuplicates (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BackStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BackStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlTipText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlTipText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HelpContextId (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpContextId (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnWidth (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnWidth (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnOrder (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnOrder (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnHidden (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnHidden (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AutoLabel (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoLabel (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AddColon (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AddColon (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_LabelX (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelX (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LabelY (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelY (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LabelAlign (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelAlign (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Section (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ControlName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_IsVisible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IsVisible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_InSelection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InSelection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeUpdate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeUpdate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterUpdate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterUpdate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExit (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExit (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMove (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMove (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPress (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPress (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnterMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnterMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExitMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExitMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMoveMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMoveMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPressMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPressMacro (
        /*[in]*/ BSTR pRet ) = 0;
};

struct __declspec(uuid("3b06e974-e47c-11cd-8701-00aa003f0f07"))
_Page : Office::IMsoAccessible
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall SizeToFit ( ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall Requery ( ) = 0;
      virtual HRESULT __stdcall Goto ( ) = 0;
      virtual HRESULT __stdcall SetFocus ( ) = 0;
      virtual HRESULT __stdcall get_Controls (
        /*[out,retval]*/ struct Children * * pRet ) = 0;
      virtual HRESULT __stdcall get_EventProcPrefix (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_EventProcPrefix (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Caption (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Caption (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Picture (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Picture (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PictureType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PageIndex (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_PageIndex (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_StatusBarText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_StatusBarText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlTipText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlTipText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HelpContextId (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpContextId (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Section (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ControlName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_IsVisible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IsVisible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_InSelection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InSelection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OnClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMove (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMove (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PictureData (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureData (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_OnClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMoveMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMoveMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall SetTabOrder ( ) = 0;
};

struct __declspec(uuid("331fdcfc-cf31-11cd-8701-00aa003f0f07"))
_Section : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall get_Controls (
        /*[out,retval]*/ struct Children * * pRet ) = 0;
      virtual HRESULT __stdcall get_EventProcPrefix (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_EventProcPrefix (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ForceNewPage (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ForceNewPage (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_NewRowOrCol (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_NewRowOrCol (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_KeepTogether (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_KeepTogether (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayWhen (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayWhen (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_CanGrow (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_CanGrow (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_CanShrink (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_CanShrink (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_RepeatSection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_RepeatSection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_SpecialEffect (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_SpecialEffect (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnFormat (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnFormat (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnPrint (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnPrint (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnRetreat (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnRetreat (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMove (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMove (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HasContinued (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_HasContinued (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_WillContinue (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_WillContinue (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_InSelection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InSelection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_AutoHeight (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoHeight (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OnFormatMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnFormatMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnPrintMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnPrintMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnRetreatMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnRetreatMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMoveMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMoveMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AlternateBackColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_AlternateBackColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_OnPaint (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnPaint (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnPaintMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnPaintMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall SetTabOrder ( ) = 0;
      virtual HRESULT __stdcall get_BackThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BackTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BackShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_AlternateBackThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_AlternateBackThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_AlternateBackTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_AlternateBackTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_AlternateBackShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_AlternateBackShade (
        /*[in]*/ float pRet ) = 0;
};

struct __declspec(uuid("331fdd27-cf31-11cd-8701-00aa003f0f07"))
_GroupLevel : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall get_ControlSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_SortOrder (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_SortOrder (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_GroupHeader (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_GroupHeader (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_GroupFooter (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_GroupFooter (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_GroupOn (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_GroupOn (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_GroupInterval (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GroupInterval (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_KeepTogether (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_KeepTogether (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("331fdcfe-cf31-11cd-8701-00aa003f0f07"))
Module : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall InsertText (
        /*[in]*/ BSTR Text ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall AddFromString (
        /*[in]*/ BSTR String ) = 0;
      virtual HRESULT __stdcall AddFromFile (
        /*[in]*/ BSTR FileName ) = 0;
      virtual HRESULT __stdcall get_Lines (
        /*[in]*/ long Line,
        /*[in]*/ long NumLines,
        /*[out,retval]*/ BSTR * String ) = 0;
      virtual HRESULT __stdcall get_CountOfLines (
        /*[out,retval]*/ long * CountOfLines ) = 0;
      virtual HRESULT __stdcall InsertLines (
        /*[in]*/ long Line,
        /*[in]*/ BSTR String ) = 0;
      virtual HRESULT __stdcall DeleteLines (
        /*[in]*/ long StartLine,
        /*[in]*/ long Count ) = 0;
      virtual HRESULT __stdcall ReplaceLine (
        /*[in]*/ long Line,
        /*[in]*/ BSTR String ) = 0;
      virtual HRESULT __stdcall get_ProcStartLine (
        /*[in]*/ BSTR ProcName,
        /*[in]*/ enum VBIDE::vbext_ProcKind ProcKind,
        /*[out,retval]*/ long * ProcStartLine ) = 0;
      virtual HRESULT __stdcall get_ProcCountLines (
        /*[in]*/ BSTR ProcName,
        /*[in]*/ enum VBIDE::vbext_ProcKind ProcKind,
        /*[out,retval]*/ long * ProcCountLines ) = 0;
      virtual HRESULT __stdcall get_ProcBodyLine (
        /*[in]*/ BSTR ProcName,
        /*[in]*/ enum VBIDE::vbext_ProcKind ProcKind,
        /*[out,retval]*/ long * ProcBodyLine ) = 0;
      virtual HRESULT __stdcall get_ProcOfLine (
        /*[in]*/ long Line,
        /*[out]*/ enum VBIDE::vbext_ProcKind * pprockind,
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall get_CountOfDeclarationLines (
        /*[out,retval]*/ long * pDeclCountOfLines ) = 0;
      virtual HRESULT __stdcall CreateEventProc (
        /*[in]*/ BSTR EventName,
        /*[in]*/ BSTR ObjectName,
        /*[out,retval]*/ long * Line ) = 0;
      virtual HRESULT __stdcall Find (
        /*[in]*/ BSTR Target,
        /*[in,out]*/ long * StartLine,
        /*[in,out]*/ long * StartColumn,
        /*[in,out]*/ long * EndLine,
        /*[in,out]*/ long * EndColumn,
        /*[in]*/ VARIANT_BOOL WholeWord,
        /*[in]*/ VARIANT_BOOL MatchCase,
        /*[in]*/ VARIANT_BOOL PatternSearch,
        /*[out,retval]*/ VARIANT_BOOL * pfFound ) = 0;
      virtual HRESULT __stdcall get_Type (
        /*[out,retval]*/ enum AcModuleType * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("9dd0af42-6e28-11cf-9008-00aa0042b7ce"))
Modules : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct Module * * pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("f163f201-ada2-11cf-89a9-00a0c9054129"))
_References_Events : IDispatch
{};

struct __declspec(uuid("eb106214-9c89-11cf-a2b3-00a0c90542ff"))
References;
    // [ default ] interface _References
    // [ default, source ] dispinterface _References_Events

struct __declspec(uuid("eb106212-9c89-11cf-a2b3-00a0c90542ff"))
Reference : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Collection (
        /*[out,retval]*/ struct _References * * retval ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall get_Guid (
        /*[out,retval]*/ BSTR * pbstrGuid ) = 0;
      virtual HRESULT __stdcall get_Major (
        /*[out,retval]*/ long * pMajor ) = 0;
      virtual HRESULT __stdcall get_Minor (
        /*[out,retval]*/ long * pMinor ) = 0;
      virtual HRESULT __stdcall get_FullPath (
        /*[out,retval]*/ BSTR * pbstrFullPath ) = 0;
      virtual HRESULT __stdcall get_BuiltIn (
        /*[out,retval]*/ VARIANT_BOOL * pfBuiltIn ) = 0;
      virtual HRESULT __stdcall get_IsBroken (
        /*[out,retval]*/ VARIANT_BOOL * pfIsBroken ) = 0;
      virtual HRESULT __stdcall get_Kind (
        /*[out,retval]*/ enum VBIDE::vbext_RefKind * pKind ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("eb106213-9c89-11cf-a2b3-00a0c90542ff"))
_References : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * retval ) = 0;
      virtual HRESULT __stdcall Item (
        /*[in]*/ VARIANT var,
        /*[out,retval]*/ struct Reference * * Reference ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * Count ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * ppenum ) = 0;
      virtual HRESULT __stdcall AddFromGuid (
        /*[in]*/ BSTR Guid,
        /*[in]*/ long Major,
        /*[in]*/ long Minor,
        /*[out,retval]*/ struct Reference * * Reference ) = 0;
      virtual HRESULT __stdcall AddFromFile (
        /*[in]*/ BSTR FileName,
        /*[out,retval]*/ struct Reference * * Reference ) = 0;
      virtual HRESULT __stdcall Remove (
        /*[in]*/ struct Reference * Reference ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("8b06e320-b23c-11cf-89a8-00a0c9054129"))
_Dummy : IDispatch
{};

struct __declspec(uuid("493d8a73-1db1-11d1-98a2-006008197d41"))
DataAccessPage;
    // [ default ] interface _DataAccessPage

struct __declspec(uuid("493d8a71-1db1-11d1-98a2-006008197d41"))
DataAccessPages : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT var,
        /*[out,retval]*/ struct _DataAccessPage * * pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("08f6c813-3cfd-11d1-98bc-006008197d41"))
AllForms;
    // [ default ] interface AllObjects

struct __declspec(uuid("08f6c814-3cfd-11d1-98bc-006008197d41"))
AllReports;
    // [ default ] interface AllObjects

struct __declspec(uuid("08f6c815-3cfd-11d1-98bc-006008197d41"))
AllMacros;
    // [ default ] interface AllObjects

struct __declspec(uuid("08f6c816-3cfd-11d1-98bc-006008197d41"))
AllModules;
    // [ default ] interface AllObjects

struct __declspec(uuid("08f6c818-3cfd-11d1-98bc-006008197d41"))
AllDataAccessPages;
    // [ default ] interface AllObjects

struct __declspec(uuid("08f6c81b-3cfd-11d1-98bc-006008197d41"))
AllTables;
    // [ default ] interface AllObjects

struct __declspec(uuid("08f6c81c-3cfd-11d1-98bc-006008197d41"))
AllQueries;
    // [ default ] interface AllObjects

struct __declspec(uuid("08f6c81e-3cfd-11d1-98bc-006008197d41"))
AllViews;
    // [ default ] interface AllObjects

struct __declspec(uuid("08f6c820-3cfd-11d1-98bc-006008197d41"))
AllStoredProcedures;
    // [ default ] interface AllObjects

struct __declspec(uuid("08f6c821-3cfd-11d1-98bc-006008197d41"))
AllDatabaseDiagrams;
    // [ default ] interface AllObjects

struct __declspec(uuid("1fe3e471-a7d0-11d1-9944-006008197d41"))
AccessObjectProperty : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get__Value (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("0921f331-a7c9-11d1-9944-006008197d41"))
AccessObjectProperties : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct AccessObjectProperty * * pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ BSTR PropertyName,
        /*[in]*/ VARIANT Value ) = 0;
      virtual HRESULT __stdcall Remove (
        /*[in]*/ VARIANT Item ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("08f6c811-3cfd-11d1-98bc-006008197d41"))
CurrentProject;
    // [ default ] interface _CurrentProject

struct __declspec(uuid("08f6c819-3cfd-11d1-98bc-006008197d41"))
CurrentData;
    // [ default ] interface _CurrentData

struct __declspec(uuid("9212ba72-3e79-11d1-98bd-006008197d41"))
CodeProject;
    // [ default ] interface _CurrentProject

struct __declspec(uuid("08f6c81a-3cfd-11d1-98bc-006008197d41"))
CodeData;
    // [ default ] interface _CurrentData

struct __declspec(uuid("cb9d3171-4728-11d1-8334-006008197cc8"))
_WizHook : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall put_Key (
        /*[in]*/ int _arg1 ) = 0;
      virtual HRESULT __stdcall NameFromActid (
        /*[in]*/ int Actid,
        /*[out,retval]*/ BSTR * Name ) = 0;
      virtual HRESULT __stdcall ArgsOfActid (
        /*[in]*/ int Actid,
        /*[out,retval]*/ int * CArgs ) = 0;
      virtual HRESULT __stdcall OpenScript (
        /*[in]*/ BSTR Script,
        /*[in]*/ BSTR Label,
        /*[in]*/ long OpenMode,
        /*[in,out]*/ int * Extra,
        /*[in,out]*/ long * Version,
        /*[out,retval]*/ long * HScr ) = 0;
      virtual HRESULT __stdcall GetScriptString (
        /*[in]*/ long HScr,
        /*[in]*/ long ScriptColumn,
        /*[in,out]*/ BSTR * Value,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall SaveScriptString (
        /*[in]*/ long HScr,
        /*[in]*/ long ScriptColumn,
        /*[in]*/ BSTR Value,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall GlobalProcExists (
        /*[in]*/ BSTR Name,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall TableFieldHasUniqueIndex (
        /*[in]*/ BSTR Table,
        /*[in]*/ BSTR Columns,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall BracketString (
        /*[in,out]*/ BSTR * String,
        /*[in]*/ long flags,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall WizHelp (
        /*[in]*/ BSTR HelpFile,
        /*[in]*/ long wCmd,
        /*[in]*/ long ContextID,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall OpenPictureFile (
        /*[in,out]*/ BSTR * File,
        /*[in,out]*/ VARIANT_BOOL * Cancelled,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall EnglishPictToLocal (
        /*[in]*/ BSTR In,
        /*[in,out]*/ BSTR * Out,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall TranslateExpression (
        /*[in]*/ BSTR In,
        /*[in,out]*/ BSTR * Out,
        /*[in]*/ long ParseFlags,
        /*[in]*/ long TranslateFlags,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall FileExists (
        /*[in]*/ BSTR File,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall FullPath (
        /*[in]*/ BSTR RelativePath,
        /*[in,out]*/ BSTR * FullPath,
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall SplitPath (
        /*[in]*/ BSTR Path,
        /*[in,out]*/ BSTR * Drive,
        /*[in,out]*/ BSTR * Dir,
        /*[in,out]*/ BSTR * File,
        /*[in,out]*/ BSTR * Ext ) = 0;
      virtual HRESULT __stdcall TwipsFromFont (
        /*[in]*/ BSTR FontName,
        /*[in]*/ long Size,
        /*[in]*/ long Weight,
        /*[in]*/ VARIANT_BOOL Italic,
        /*[in]*/ VARIANT_BOOL Underline,
        /*[in]*/ long Cch,
        /*[in]*/ BSTR Caption,
        /*[in]*/ long MaxWidthCch,
        /*[in,out]*/ long * dx,
        /*[in,out]*/ long * dy,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall ObjTypOfRecordSource (
        /*[in]*/ BSTR RecordSource,
        /*[out,retval]*/ short * pobjtyp ) = 0;
      virtual HRESULT __stdcall IsValidIdent (
        /*[in]*/ BSTR Identifier,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall SortStringArray (
        /*[in,out]*/ SAFEARRAY * * Array ) = 0;
      virtual HRESULT __stdcall AnalyzeTable (
        /*[in]*/ struct DAO::Workspace * Workspace,
        /*[in]*/ struct DAO::Database * Database,
        /*[in]*/ BSTR Table,
        /*[in]*/ VARIANT_BOOL ReturnDebugInfo,
        /*[in,out]*/ BSTR * Results,
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall AnalyzeQuery (
        /*[in]*/ struct DAO::Workspace * Workspace,
        /*[in]*/ struct DAO::Database * Database,
        /*[in]*/ BSTR Query,
        /*[in,out]*/ BSTR * Results,
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall GetFileName (
        /*[in]*/ long hwndOwner,
        /*[in]*/ BSTR AppName,
        /*[in]*/ BSTR DlgTitle,
        /*[in]*/ BSTR OpenTitle,
        /*[in,out]*/ BSTR * File,
        /*[in]*/ BSTR InitialDir,
        /*[in]*/ BSTR Filter,
        /*[in]*/ long FilterIndex,
        /*[in]*/ long View,
        /*[in]*/ long flags,
        /*[in]*/ VARIANT_BOOL fOpen,
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall CreateDataPageControl (
        /*[in]*/ BSTR DpName,
        /*[in]*/ BSTR CtlName,
        /*[in]*/ long Typ,
        /*[in]*/ BSTR Section,
        /*[in]*/ long SectionType,
        /*[in]*/ BSTR AppletCode,
        /*[in]*/ long X,
        /*[in]*/ long Y,
        /*[in]*/ long dx,
        /*[in]*/ long dy ) = 0;
      virtual HRESULT __stdcall KnownWizLeaks (
        /*[in]*/ VARIANT_BOOL fStart ) = 0;
      virtual HRESULT __stdcall SetVbaPassword (
        /*[in]*/ BSTR bstrDbName,
        /*[in]*/ BSTR bstrConnect,
        /*[in]*/ BSTR bstrPasswd,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall LocalFont (
        /*[out,retval]*/ BSTR * FontName ) = 0;
      virtual HRESULT __stdcall SaveObject (
        /*[in]*/ BSTR bstrName,
        /*[in]*/ short objtyp ) = 0;
      virtual HRESULT __stdcall CurrentLangID (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall KeyboardLangID (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall AccessUserDataDir (
        /*[out,retval]*/ BSTR * Path ) = 0;
      virtual HRESULT __stdcall OfficeAddInDir (
        /*[out,retval]*/ BSTR * Path ) = 0;
      virtual HRESULT __stdcall EmbedFileOnDataPage (
        /*[in]*/ BSTR DpName,
        /*[in]*/ BSTR FileToInsert,
        /*[out,retval]*/ BSTR * FileToUse ) = 0;
      virtual HRESULT __stdcall get_DbcVbProject (
        /*[out,retval]*/ struct VBIDE::_VBProject * * VbProject ) = 0;
      virtual HRESULT __stdcall ReportLeaksToFile (
        /*[in]*/ VARIANT_BOOL fRptToFile,
        /*[in]*/ BSTR bstrFileOut ) = 0;
      virtual HRESULT __stdcall get_IsMatchToDbcConnectString (
        /*[in]*/ BSTR bstrConnectionString,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall LoadImexSpecSolution (
        /*[in]*/ BSTR bstrFilename ) = 0;
      virtual HRESULT __stdcall SetDpBlockKeyInput (
        /*[in]*/ VARIANT_BOOL fBlockKeys ) = 0;
      virtual HRESULT __stdcall FirstDbcDataObject (
        /*[in,out]*/ BSTR * Name,
        /*[in,out]*/ enum AcObjectType * ObjType,
        /*[in,out]*/ long * Attribs,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall CloseCurrentDatabase (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall AccessWizFilePath (
        /*[in]*/ BSTR bstrWhich,
        /*[out,retval]*/ BSTR * Path ) = 0;
      virtual HRESULT __stdcall HideDates (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall GetColumns (
        /*[in]*/ BSTR bstrBase,
        /*[out,retval]*/ BSTR * bstrColumns ) = 0;
      virtual HRESULT __stdcall GetFileOdso (
        /*[in]*/ BSTR bstrExt,
        /*[in,out]*/ BSTR * bstrFilename,
        /*[out,retval]*/ long * plKind ) = 0;
      virtual HRESULT __stdcall GetInfoForColumns (
        /*[in]*/ BSTR bstrBase,
        /*[out,retval]*/ BSTR * bstrColumns ) = 0;
      virtual HRESULT __stdcall GetFileName2 (
        /*[in]*/ long hwndOwner,
        /*[in]*/ BSTR AppName,
        /*[in]*/ BSTR DlgTitle,
        /*[in]*/ BSTR OpenTitle,
        /*[in,out]*/ BSTR * File,
        /*[in]*/ BSTR InitialDir,
        /*[in]*/ BSTR Filter,
        /*[in]*/ long FilterIndex,
        /*[in]*/ long View,
        /*[in]*/ long flags,
        /*[in]*/ VARIANT_BOOL fOpen,
        /*[in]*/ VARIANT fFileSystem,
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall FGetMSDE (
        /*[in]*/ VARIANT_BOOL fBlockKeys,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall WizMsgBox (
        /*[in]*/ BSTR bstrText,
        /*[in]*/ BSTR bstrCaption,
        /*[in]*/ int wStyle,
        /*[in]*/ int idHelpID,
        /*[in]*/ BSTR bstrHelpFileName,
        /*[out,retval]*/ int * pRet ) = 0;
      virtual HRESULT __stdcall AdpUIDPwd (
        /*[in,out]*/ BSTR * pbstrUID,
        /*[in,out]*/ BSTR * pbstrPwd,
        /*[out,retval]*/ VARIANT_BOOL * fIntegrated ) = 0;
      virtual HRESULT __stdcall SetWizGlob (
        /*[in]*/ long lWhich,
        /*[in]*/ VARIANT vValue ) = 0;
      virtual HRESULT __stdcall GetWizGlob (
        /*[in]*/ long lWhich,
        /*[out,retval]*/ VARIANT * vValue ) = 0;
      virtual HRESULT __stdcall WizCopyCmdbars (
        /*[in]*/ BSTR bstrADPName ) = 0;
      virtual HRESULT __stdcall GetCurrentView (
        /*[in]*/ BSTR bstrTableName,
        /*[out,retval]*/ int * pRet ) = 0;
      virtual HRESULT __stdcall FIsFEWch (
        /*[in]*/ long wch,
        /*[out,retval]*/ VARIANT_BOOL * fIsFE ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall GetAccWizRCPath (
        /*[out,retval]*/ BSTR * Path ) = 0;
      virtual HRESULT __stdcall FCreateNameMap (
        /*[in]*/ short objtyp,
        /*[in]*/ BSTR bstrObjName,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall GetAdeRegistryPath (
        /*[out,retval]*/ BSTR * RegPath ) = 0;
      virtual HRESULT __stdcall ExecuteTempImexSpec (
        /*[in]*/ BSTR bstrSpecXML ) = 0;
      virtual HRESULT __stdcall FCacheStatus (
        /*[out,retval]*/ VARIANT_BOOL * FCacheStatus ) = 0;
      virtual HRESULT __stdcall CacheStatus (
        /*[in]*/ BSTR bstrStatus ) = 0;
      virtual HRESULT __stdcall SetDefaultSpecName (
        /*[in]*/ BSTR bstrSpecName ) = 0;
      virtual HRESULT __stdcall GetImexTblName (
        /*[out,retval]*/ BSTR * pbstrTblName ) = 0;
      virtual HRESULT __stdcall GetLinkedListProperty (
        /*[in]*/ BSTR bstrTableName,
        /*[in]*/ BSTR bstrPropertyName,
        /*[in]*/ VARIANT_BOOL fServer,
        /*[out,retval]*/ BSTR * pbstrPropertyValue ) = 0;
      virtual HRESULT __stdcall OpenEmScript (
        /*[in]*/ struct _AccessProperty * pProperty,
        /*[in]*/ long OpenMode,
        /*[in,out]*/ int * Extra,
        /*[in,out]*/ long * Version,
        /*[out,retval]*/ long * HScr ) = 0;
      virtual HRESULT __stdcall GetDisabledExtensions (
        /*[out,retval]*/ BSTR * Exts ) = 0;
      virtual HRESULT __stdcall GetObjPubOption (
        /*[in]*/ BSTR bstrObjectName,
        /*[in]*/ enum AcObjectType iobjtyp,
        /*[in]*/ VARIANT_BOOL fTablesAsClient,
        /*[out,retval]*/ int * pObjPubOpt ) = 0;
      virtual HRESULT __stdcall FIsPublishedXasTable (
        /*[in]*/ BSTR bstrObjectName,
        /*[out,retval]*/ VARIANT_BOOL * fRet ) = 0;
      virtual HRESULT __stdcall FIsXasDb (
        /*[out,retval]*/ VARIANT_BOOL * fRet ) = 0;
      virtual HRESULT __stdcall FIsValidXasObjectName (
        /*[in]*/ BSTR bstrObjectName,
        /*[in]*/ enum AcObjectType iobjtyp,
        /*[out,retval]*/ VARIANT_BOOL * fRet ) = 0;
};

struct __declspec(uuid("cb9d3172-4728-11d1-8334-006008197cc8"))
WizHook;
    // [ default ] interface _WizHook

struct __declspec(uuid("416ed4f0-ab31-11d1-bf72-0060083e43cf"))
_DefaultWebOptions : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_HyperlinkColor (
        /*[out,retval]*/ enum AcColorIndex * pl ) = 0;
      virtual HRESULT __stdcall put_HyperlinkColor (
        /*[in]*/ enum AcColorIndex pl ) = 0;
      virtual HRESULT __stdcall get_FollowedHyperlinkColor (
        /*[out,retval]*/ enum AcColorIndex * pl ) = 0;
      virtual HRESULT __stdcall put_FollowedHyperlinkColor (
        /*[in]*/ enum AcColorIndex pl ) = 0;
      virtual HRESULT __stdcall get_UnderlineHyperlinks (
        /*[out,retval]*/ VARIANT_BOOL * pf ) = 0;
      virtual HRESULT __stdcall put_UnderlineHyperlinks (
        /*[in]*/ VARIANT_BOOL pf ) = 0;
      virtual HRESULT __stdcall get_OrganizeInFolder (
        /*[out,retval]*/ VARIANT_BOOL * pf ) = 0;
      virtual HRESULT __stdcall put_OrganizeInFolder (
        /*[in]*/ VARIANT_BOOL pf ) = 0;
      virtual HRESULT __stdcall get_UseLongFileNames (
        /*[out,retval]*/ VARIANT_BOOL * pf ) = 0;
      virtual HRESULT __stdcall put_UseLongFileNames (
        /*[in]*/ VARIANT_BOOL pf ) = 0;
      virtual HRESULT __stdcall get_CheckIfOfficeIsHTMLEditor (
        /*[out,retval]*/ VARIANT_BOOL * pf ) = 0;
      virtual HRESULT __stdcall put_CheckIfOfficeIsHTMLEditor (
        /*[in]*/ VARIANT_BOOL pf ) = 0;
      virtual HRESULT __stdcall get_DownloadComponents (
        /*[out,retval]*/ VARIANT_BOOL * pf ) = 0;
      virtual HRESULT __stdcall put_DownloadComponents (
        /*[in]*/ VARIANT_BOOL pf ) = 0;
      virtual HRESULT __stdcall get_LocationOfComponents (
        /*[out,retval]*/ BSTR * pstr ) = 0;
      virtual HRESULT __stdcall put_LocationOfComponents (
        /*[in]*/ BSTR pstr ) = 0;
      virtual HRESULT __stdcall get_Encoding (
        /*[out,retval]*/ enum Office::MsoEncoding * penc ) = 0;
      virtual HRESULT __stdcall put_Encoding (
        /*[in]*/ enum Office::MsoEncoding penc ) = 0;
      virtual HRESULT __stdcall get_AlwaysSaveInDefaultEncoding (
        /*[out,retval]*/ VARIANT_BOOL * pf ) = 0;
      virtual HRESULT __stdcall put_AlwaysSaveInDefaultEncoding (
        /*[in]*/ VARIANT_BOOL pf ) = 0;
      virtual HRESULT __stdcall get_FolderSuffix (
        /*[out,retval]*/ BSTR * pbstr ) = 0;
      virtual HRESULT __stdcall get_TargetBrowser (
        /*[out,retval]*/ enum Office::MsoTargetBrowser * ptb ) = 0;
      virtual HRESULT __stdcall put_TargetBrowser (
        /*[in]*/ enum Office::MsoTargetBrowser ptb ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("416ed4f1-ab31-11d1-bf72-0060083e43cf"))
DefaultWebOptions;
    // [ default ] interface _DefaultWebOptions

struct __declspec(uuid("416ed4f6-ab31-11d1-bf72-0060083e43cf"))
_WebOptions : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_OrganizeInFolder (
        /*[out,retval]*/ VARIANT_BOOL * pf ) = 0;
      virtual HRESULT __stdcall put_OrganizeInFolder (
        /*[in]*/ VARIANT_BOOL pf ) = 0;
      virtual HRESULT __stdcall get_UseLongFileNames (
        /*[out,retval]*/ VARIANT_BOOL * pf ) = 0;
      virtual HRESULT __stdcall put_UseLongFileNames (
        /*[in]*/ VARIANT_BOOL pf ) = 0;
      virtual HRESULT __stdcall get_DownloadComponents (
        /*[out,retval]*/ VARIANT_BOOL * pf ) = 0;
      virtual HRESULT __stdcall put_DownloadComponents (
        /*[in]*/ VARIANT_BOOL pf ) = 0;
      virtual HRESULT __stdcall get_LocationOfComponents (
        /*[out,retval]*/ BSTR * pstr ) = 0;
      virtual HRESULT __stdcall put_LocationOfComponents (
        /*[in]*/ BSTR pstr ) = 0;
      virtual HRESULT __stdcall get_Encoding (
        /*[out,retval]*/ enum Office::MsoEncoding * penc ) = 0;
      virtual HRESULT __stdcall put_Encoding (
        /*[in]*/ enum Office::MsoEncoding penc ) = 0;
      virtual HRESULT __stdcall get_FolderSuffix (
        /*[out,retval]*/ BSTR * pbstr ) = 0;
      virtual HRESULT __stdcall UseDefaultFolderSuffix ( ) = 0;
      virtual HRESULT __stdcall get_TargetBrowser (
        /*[out,retval]*/ enum Office::MsoTargetBrowser * ptb ) = 0;
      virtual HRESULT __stdcall put_TargetBrowser (
        /*[in]*/ enum Office::MsoTargetBrowser ptb ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("416ed4f7-ab31-11d1-bf72-0060083e43cf"))
WebOptions;
    // [ default ] interface _WebOptions

struct __declspec(uuid("493d8a72-1db1-11d1-98a2-006008197d41"))
_DataAccessPage : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_WindowWidth (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_WindowHeight (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentView (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Document (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall ApplyTheme (
        /*[in]*/ BSTR ThemeName ) = 0;
      virtual HRESULT __stdcall get_WebOptions (
        /*[out,retval]*/ struct _WebOptions * * ppWO ) = 0;
      virtual HRESULT __stdcall get_ConnectionString (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ConnectionString (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_FieldListConnection (
        /*[out,retval]*/ IDispatch * * ppRet ) = 0;
      virtual HRESULT __stdcall get_MailEnvelope (
        /*[out,retval]*/ struct Office::IMsoEnvelopeVB * * ppidMailEnvelope ) = 0;
      virtual HRESULT __stdcall get_CurrentSelection (
        /*[out,retval]*/ IDispatch * * CurrentSelection ) = 0;
      virtual HRESULT __stdcall get_MSODSC (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_RemovePersonalInformation (
        /*[out,retval]*/ VARIANT_BOOL * pf ) = 0;
      virtual HRESULT __stdcall put_RemovePersonalInformation (
        /*[in]*/ VARIANT_BOOL pf ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("58bf3100-b580-11cf-89a8-00a0c9054129"))
_DummyEvents : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Initialize ( ) = 0;
      virtual HRESULT __stdcall Terminate ( ) = 0;
};

struct __declspec(uuid("8b06e321-b23c-11cf-89a8-00a0c9054129"))
Class;
    // [ default ] interface _Dummy
    // [ default, source ] interface _DummyEvents

struct __declspec(uuid("dbc5175e-a8ed-11d3-a0dd-00c04f68712b"))
Printer;
    // [ default ] interface _Printer

struct __declspec(uuid("483615a0-74be-101b-af4e-00aa003f0f08"))
FormOldV10;
    // [ default ] interface _Form2
    // [ default, source ] interface _FormEvents

struct __declspec(uuid("ecd1eada-d373-11d3-8d21-0050048383fb"))
ReportOldV10;
    // [ default ] interface _Report2
    // [ default, source ] interface _ReportEvents

enum __declspec(uuid("150791a6-1314-3ed3-8ea4-001180a34d22"))
AcDefView
{
    acDefViewSingle = 0,
    acDefViewContinuous = 1,
    acDefViewDatasheet = 2,
    acDefViewPivotTable = 3,
    acDefViewPivotChart = 4,
    acDefViewSplitForm = 5
};

enum __declspec(uuid("dbd22efa-2048-3ae0-9364-1b77dfff3387"))
AcCurrentView
{
    acCurViewDesign = 0,
    acCurViewFormBrowse = 1,
    acCurViewDatasheet = 2,
    acCurViewPivotTable = 3,
    acCurViewPivotChart = 4,
    acCurViewPreview = 5,
    acCurViewReportBrowse = 6,
    acCurViewLayout = 7
};

enum __declspec(uuid("435b8121-d36f-30a7-a307-57a2ca3c2ae3"))
AcFileFormat
{
    acFileFormatAccess2 = 2,
    acFileFormatAccess95 = 7,
    acFileFormatAccess97 = 8,
    acFileFormatAccess2000 = 9,
    acFileFormatAccess2002 = 10,
    acFileFormatAccess2007 = 12
};

enum __declspec(uuid("7807f137-f773-313b-ba94-9e8e1633a05e"))
AcExportXMLObjectType
{
    acExportTable = 0,
    acExportQuery = 1,
    acExportForm = 2,
    acExportReport = 3,
    acExportServerView = 7,
    acExportStoredProcedure = 9,
    acExportFunction = 10
};

enum __declspec(uuid("6986ccdb-1c67-32d0-a58f-af1f02906401"))
AcExportXMLSchemaFormat
{
    acSchemaNone = 0,
    acSchemaXSD = 1
};

enum __declspec(uuid("9a7cbaad-f481-34dc-9345-68faaec48bb3"))
AcExportXMLEncoding
{
    acUTF8 = 0,
    acUTF16 = 1
};

enum __declspec(uuid("9ee93855-a897-37d7-a1fa-ed80d0c72a27"))
AcPrintColor
{
    acPRCMMonochrome = 1,
    acPRCMColor = 2
};

enum __declspec(uuid("32347668-2699-3569-a630-15f2bb8d978d"))
AcPrintDuplex
{
    acPRDPSimplex = 1,
    acPRDPHorizontal = 2,
    acPRDPVertical = 3
};

enum __declspec(uuid("b5d49f6f-69d8-38aa-b6ca-bf6aaa4d1910"))
AcPrintOrientation
{
    acPRORPortrait = 1,
    acPRORLandscape = 2
};

enum __declspec(uuid("0ebdb552-929b-35ca-82e7-56f3189e4530"))
AcPrintObjQuality
{
    acPRPQDraft = -1,
    acPRPQLow = -2,
    acPRPQMedium = -3,
    acPRPQHigh = -4
};

enum __declspec(uuid("5607577d-8945-37a1-ae78-eddf2a02fe1f"))
AcPrintPaperBin
{
    acPRBNUpper = 1,
    acPRBNLower = 2,
    acPRBNMiddle = 3,
    acPRBNManual = 4,
    acPRBNEnvelope = 5,
    acPRBNEnvManual = 6,
    acPRBNAuto = 7,
    acPRBNTractor = 8,
    acPRBNSmallFmt = 9,
    acPRBNLargeFmt = 10,
    acPRBNLargeCapacity = 11,
    acPRBNCassette = 14,
    acPRBNFormSource = 15
};

enum __declspec(uuid("7d3911b4-3046-3417-98b5-d7e710f7243e"))
AcPrintPaperSize
{
    acPRPSLetter = 1,
    acPRPSLetterSmall = 2,
    acPRPSTabloid = 3,
    acPRPSLedger = 4,
    acPRPSLegal = 5,
    acPRPSStatement = 6,
    acPRPSExecutive = 7,
    acPRPSA3 = 8,
    acPRPSA4 = 9,
    acPRPSA4Small = 10,
    acPRPSA5 = 11,
    acPRPSB4 = 12,
    acPRPSB5 = 13,
    acPRPSFolio = 14,
    acPRPSQuarto = 15,
    acPRPS10x14 = 16,
    acPRPS11x17 = 17,
    acPRPSNote = 18,
    acPRPSEnv9 = 19,
    acPRPSEnv10 = 20,
    acPRPSEnv11 = 21,
    acPRPSEnv12 = 22,
    acPRPSEnv14 = 23,
    acPRPSCSheet = 24,
    acPRPSDSheet = 25,
    acPRPSESheet = 26,
    acPRPSEnvDL = 27,
    acPRPSEnvC3 = 29,
    acPRPSEnvC4 = 30,
    acPRPSEnvC5 = 28,
    acPRPSEnvC6 = 31,
    acPRPSEnvC65 = 32,
    acPRPSEnvB4 = 33,
    acPRPSEnvB5 = 34,
    acPRPSEnvB6 = 35,
    acPRPSEnvItaly = 36,
    acPRPSEnvMonarch = 37,
    acPRPSEnvPersonal = 38,
    acPRPSFanfoldUS = 39,
    acPRPSFanfoldStdGerman = 40,
    acPRPSFanfoldLglGerman = 41,
    acPRPSUser = 256
};

enum __declspec(uuid("0fb9e1e6-f057-3ed0-9753-e822215c1c3c"))
AcPrintItemLayout
{
    acPRHorizontalColumnLayout = 1953,
    acPRVerticalColumnLayout = 1954
};

struct __declspec(uuid("dbc5175f-a8ed-11d3-a0dd-00c04f68712b"))
_Printer : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_ColorMode (
        /*[out,retval]*/ enum AcPrintColor * pRet ) = 0;
      virtual HRESULT __stdcall put_ColorMode (
        /*[in]*/ enum AcPrintColor pRet ) = 0;
      virtual HRESULT __stdcall get_Copies (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Copies (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_DeviceName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall get_DriverName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall get_Duplex (
        /*[out,retval]*/ enum AcPrintDuplex * pRet ) = 0;
      virtual HRESULT __stdcall put_Duplex (
        /*[in]*/ enum AcPrintDuplex pRet ) = 0;
      virtual HRESULT __stdcall get_Orientation (
        /*[out,retval]*/ enum AcPrintOrientation * pRet ) = 0;
      virtual HRESULT __stdcall put_Orientation (
        /*[in]*/ enum AcPrintOrientation pRet ) = 0;
      virtual HRESULT __stdcall get_PaperBin (
        /*[out,retval]*/ enum AcPrintPaperBin * pRet ) = 0;
      virtual HRESULT __stdcall put_PaperBin (
        /*[in]*/ enum AcPrintPaperBin pRet ) = 0;
      virtual HRESULT __stdcall get_PaperSize (
        /*[out,retval]*/ enum AcPrintPaperSize * pRet ) = 0;
      virtual HRESULT __stdcall put_PaperSize (
        /*[in]*/ enum AcPrintPaperSize pRet ) = 0;
      virtual HRESULT __stdcall get_Port (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall get_PrintQuality (
        /*[out,retval]*/ enum AcPrintObjQuality * pRet ) = 0;
      virtual HRESULT __stdcall put_PrintQuality (
        /*[in]*/ enum AcPrintObjQuality pRet ) = 0;
      virtual HRESULT __stdcall get_LeftMargin (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_LeftMargin (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_RightMargin (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_RightMargin (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_TopMargin (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_TopMargin (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BottomMargin (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BottomMargin (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_DataOnly (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_DataOnly (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_ItemsAcross (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ItemsAcross (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_RowSpacing (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_RowSpacing (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnSpacing (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnSpacing (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_DefaultSize (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_DefaultSize (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_ItemSizeWidth (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ItemSizeWidth (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ItemSizeHeight (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ItemSizeHeight (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ItemLayout (
        /*[out,retval]*/ enum AcPrintItemLayout * pRet ) = 0;
      virtual HRESULT __stdcall put_ItemLayout (
        /*[in]*/ enum AcPrintItemLayout pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("dbc51760-a8ed-11d3-a0dd-00c04f68712b"))
Printers : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _Printer * * pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

enum __declspec(uuid("c7e99269-5329-3329-b15b-708794da2ed1"))
AcImportXMLOption
{
    acStructureOnly = 0,
    acStructureAndData = 1,
    acAppendData = 2
};

struct __declspec(uuid("08f6c822-3cfd-11d1-98bc-006008197d41"))
AllFunctions;
    // [ default ] interface AllObjects

struct __declspec(uuid("9212ba73-3e79-11d1-98bd-006008197d41"))
_CurrentData : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_AllTables (
        /*[out,retval]*/ struct AllObjects * * pRet ) = 0;
      virtual HRESULT __stdcall get_AllQueries (
        /*[out,retval]*/ struct AllObjects * * pRet ) = 0;
      virtual HRESULT __stdcall get_AllViews (
        /*[out,retval]*/ struct AllObjects * * pRet ) = 0;
      virtual HRESULT __stdcall get_AllStoredProcedures (
        /*[out,retval]*/ struct AllObjects * * pRet ) = 0;
      virtual HRESULT __stdcall get_AllDatabaseDiagrams (
        /*[out,retval]*/ struct AllObjects * * pRet ) = 0;
      virtual HRESULT __stdcall get_AllFunctions (
        /*[out,retval]*/ struct AllObjects * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

enum __declspec(uuid("d51dad50-766f-3491-809c-15dff68ce5ea"))
AcExportXMLOtherFlags
{
    acEmbedSchema = 1,
    acExcludePrimaryKeyAndIndexes = 2,
    acRunFromServer = 4,
    acLiveReportSource = 8,
    acPersistReportML = 16,
    acExportAllTableAndFieldProperties = 32
};

enum __declspec(uuid("949d00c2-04c5-34fb-a9aa-f966483b143c"))
AcTransformXMLScriptOption
{
    acEnableScript = 0,
    acPromptScript = 1,
    acDisableScript = 2
};

struct __declspec(uuid("dbc51761-a8ed-11d3-a0dd-00c04f68712b"))
AdditionalData;
    // [ default ] interface _AdditionalData

struct __declspec(uuid("dbc51762-a8ed-11d3-a0dd-00c04f68712b"))
_AdditionalData : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _AdditionalData * * pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ BSTR var,
        /*[out,retval]*/ struct _AdditionalData * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
};

struct __declspec(uuid("4375351e-7052-40df-b4d3-6095e7f8811b"))
AutoCorrect;
    // [ default ] interface _AutoCorrect

struct __declspec(uuid("063a8de5-e2c5-44ea-a90e-6d42207d25c8"))
_AutoCorrect : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_DisplayAutoCorrectOptions (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayAutoCorrectOptions (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("1c4367a8-eaee-4c23-9582-4a229df2403e"))
DependencyObjects;
    // [ default ] interface _DependencyObjects

struct __declspec(uuid("f8c9dcb3-4063-490e-a73c-3533207cbc26"))
DependencyInfo;
    // [ default ] interface _DependencyInfo

struct __declspec(uuid("73778f0a-9743-4df3-bbfa-941712488fea"))
SmartTags;
    // [ default ] interface _SmartTags

struct __declspec(uuid("0d944d89-82bc-43de-9659-699dd3fbcd72"))
SmartTagAction;
    // [ default ] interface _SmartTagAction

struct __declspec(uuid("1560be9f-0718-42be-bb2b-d6706593ac40"))
_SmartTagAction : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall Execute ( ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("aa533187-6399-4e6c-b6ec-6fc999e1c855"))
SmartTagActions;
    // [ default ] interface _SmartTagActions

struct __declspec(uuid("3836c9ec-e9cb-4817-a738-50b4dd3ddd8d"))
_SmartTagActions : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _SmartTagAction * * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("6e03ad86-431e-4879-a572-ef0eba2fa729"))
SmartTagProperty;
    // [ default ] interface _SmartTagProperty

struct __declspec(uuid("6a3308ea-73df-436a-a826-41a1f02186c4"))
_SmartTagProperty : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("4215cc2c-15b5-47a5-9b60-119bd269cb7e"))
SmartTagProperties;
    // [ default ] interface _SmartTagProperties

struct __declspec(uuid("3a6a13ff-1162-461d-899c-768d025119fb"))
_SmartTagProperties : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _SmartTagProperty * * pRet ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ BSTR Name,
        /*[in]*/ VARIANT Value,
        /*[out,retval]*/ struct _SmartTagProperty * * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("ef1a0b1d-ad6d-48e6-9905-bee2a5d38df9"))
SmartTag;
    // [ default ] interface _SmartTag

struct __declspec(uuid("9d2ab5d3-cd72-4a9a-a72e-2b3492cbd0ae"))
_SmartTag : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct _SmartTagProperties * * pRet ) = 0;
      virtual HRESULT __stdcall get_SmartTagActions (
        /*[out,retval]*/ struct _SmartTagActions * * pRet ) = 0;
      virtual HRESULT __stdcall get_XML (
        /*[out,retval]*/ BSTR * pbstrXML ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall get_IsMissing (
        /*[out,retval]*/ VARIANT_BOOL * pfRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("b1f7de76-ae97-48d9-a4fd-2c172b2bd7a9"))
_SmartTags : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _SmartTag * * pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ BSTR Name,
        /*[out,retval]*/ struct _SmartTag * * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("55b0e0c9-c75d-4f42-ad20-6939c1d05b70"))
ImportExportSpecification : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall Execute (
        /*[in]*/ VARIANT Prompt = vtMissing ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall get_XML (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_XML (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Description (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Description (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("77dc8648-f725-4371-88c3-6eb6c4894ca4"))
ImportExportSpecifications : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct ImportExportSpecification * * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ BSTR Name,
        /*[in]*/ BSTR SpecificationDefinition,
        /*[out,retval]*/ struct ImportExportSpecification * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("0ea530dd-5b30-4278-bd28-47c4d11619bd"))
_FormEvents2 : IDispatch
{};

struct __declspec(uuid("7398aafd-6527-48c7-95b7-beabacd1ca3f"))
Form;
    // [ default ] interface _Form3
    // [ source ] interface _FormEvents
    // [ default, source ] dispinterface _FormEvents2

struct __declspec(uuid("e5135d80-8f8d-101b-af4e-00aa003f0f07"))
_Form : Office::IMsoAccessible
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_FormName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_FormName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_RecordSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_RecordSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Filter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Filter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_FilterOn (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FilterOn (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OrderBy (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OrderBy (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OrderByOn (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_OrderByOn (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AllowFilters (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowFilters (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Caption (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Caption (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_DefaultView (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DefaultView (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ViewsAllowed (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ViewsAllowed (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_AllowEditing (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowEditing (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DefaultEditing (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_DefaultEditing (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_AllowEdits (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowEdits (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AllowDeletions (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowDeletions (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AllowAdditions (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowAdditions (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DataEntry (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_DataEntry (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AllowUpdating (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowUpdating (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_RecordsetType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_RecordsetType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_RecordLocks (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_RecordLocks (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ScrollBars (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ScrollBars (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_RecordSelectors (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_RecordSelectors (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_NavigationButtons (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_NavigationButtons (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DividingLines (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_DividingLines (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AutoResize (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoResize (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AutoCenter (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoCenter (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_PopUp (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_PopUp (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Modal (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Modal (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ControlBox (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlBox (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_MinButton (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_MinButton (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_MaxButton (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_MaxButton (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_MinMaxButtons (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_MinMaxButtons (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_CloseButton (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_CloseButton (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_WhatsThisButton (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_WhatsThisButton (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Picture (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Picture (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PictureType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PictureSizeMode (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureSizeMode (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PictureAlignment (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureAlignment (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PictureTiling (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureTiling (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Cycle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_Cycle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_MenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_MenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Toolbar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Toolbar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenu (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenu (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_GridX (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_GridX (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_GridY (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_GridY (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LayoutForPrint (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_LayoutForPrint (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_FastLaserPrinting (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FastLaserPrinting (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_HelpFile (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpFile (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HelpContextId (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpContextId (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_RowHeight (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_RowHeight (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetFontName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetFontName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetFontHeight (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetFontHeight (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetFontWeight (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetFontWeight (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetFontItalic (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetFontItalic (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetFontUnderline (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetFontUnderline (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabularCharSet (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_TabularCharSet (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetGridlinesBehavior (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetGridlinesBehavior (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetGridlinesColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetGridlinesColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetCellsEffect (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetCellsEffect (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetForeColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetForeColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ShowGrid (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ShowGrid (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetBackColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetBackColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Hwnd (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Hwnd (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Count (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Page (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Page (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Pages (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Pages (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LogicalPageWidth (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_LogicalPageWidth (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_LogicalPageHeight (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_LogicalPageHeight (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ZoomControl (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ZoomControl (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Painting (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Painting (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_PrtMip (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PrtMip (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_PrtDevMode (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PrtDevMode (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_PrtDevNames (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PrtDevNames (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_FrozenColumns (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FrozenColumns (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Bookmark (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_Bookmark (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_TabularFamily (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_TabularFamily (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PaletteSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_PaletteSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PaintPalette (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PaintPalette (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_OnMenu (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMenu (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OpenArgs (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_OpenArgs (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_ConnectSynch (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ConnectSynch (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_OnCurrent (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnCurrent (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnInsert (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnInsert (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeInsert (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeInsert (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterInsert (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterInsert (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeUpdate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeUpdate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterUpdate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterUpdate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDirty (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDirty (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDelete (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDelete (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeDelConfirm (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeDelConfirm (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterDelConfirm (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterDelConfirm (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnOpen (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnOpen (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLoad (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLoad (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnResize (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnResize (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnUnload (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnUnload (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClose (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClose (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnActivate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnActivate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDeactivate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDeactivate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMove (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMove (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPress (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPress (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_KeyPreview (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_KeyPreview (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OnError (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnError (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnFilter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnFilter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnApplyFilter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnApplyFilter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnTimer (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnTimer (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_TimerInterval (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_TimerInterval (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Dirty (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Dirty (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_WindowWidth (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_WindowWidth (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_WindowHeight (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_WindowHeight (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentView (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_CurrentView (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentSectionTop (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_CurrentSectionTop (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentSectionLeft (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_CurrentSectionLeft (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_SelLeft (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_SelLeft (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_SelTop (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_SelTop (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_SelWidth (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_SelWidth (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_SelHeight (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_SelHeight (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentRecord (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_CurrentRecord (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PictureData (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureData (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_InsideHeight (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_InsideHeight (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_InsideWidth (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_InsideWidth (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PicturePalette (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PicturePalette (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_HasModule (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_HasModule (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_acHiddenCurrentPage (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_acHiddenCurrentPage (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Orientation (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_Orientation (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_AllowDesignChanges (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowDesignChanges (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_ServerFilter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ServerFilter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ServerFilterByForm (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ServerFilterByForm (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_MaxRecords (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_MaxRecords (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_UniqueTable (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_UniqueTable (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ResyncCommand (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ResyncCommand (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_InputParameters (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_InputParameters (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_MaxRecButton (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_MaxRecButton (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_NewRecord (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall Undo ( ) = 0;
      virtual HRESULT __stdcall get_ActiveControl (
        /*[out,retval]*/ struct _Control * * pRet ) = 0;
      virtual HRESULT __stdcall get_DefaultControl (
        /*[in]*/ long ControlType,
        /*[out,retval]*/ struct _Control * * pRet ) = 0;
      virtual HRESULT __stdcall get_Dynaset (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_RecordsetClone (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Recordset (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall putref_Recordset (
        /*[in]*/ IDispatch * pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _Section * * pRet ) = 0;
      virtual HRESULT __stdcall get_Form (
        /*[out,retval]*/ struct _Form3 * * pRet ) = 0;
      virtual HRESULT __stdcall get_Module (
        /*[out,retval]*/ struct Module * * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall get_ConnectControl (
        /*[out,retval]*/ struct _Control * * pRet ) = 0;
      virtual HRESULT __stdcall Recalc ( ) = 0;
      virtual HRESULT __stdcall Requery ( ) = 0;
      virtual HRESULT __stdcall Refresh ( ) = 0;
      virtual HRESULT __stdcall Repaint ( ) = 0;
      virtual HRESULT __stdcall GoToPage (
        /*[in]*/ long PageNumber,
        /*[in]*/ long Right,
        /*[in]*/ long Down ) = 0;
      virtual HRESULT __stdcall SetFocus ( ) = 0;
      virtual HRESULT __stdcall get_Controls (
        /*[out,retval]*/ struct Controls * * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall get_SubdatasheetHeight (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_SubdatasheetHeight (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_SubdatasheetExpanded (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_SubdatasheetExpanded (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
};

struct __declspec(uuid("b1bb0e80-6128-101b-af4e-00aa003f0f07"))
Forms : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _Form3 * * pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("3f4a878e-c395-11d3-8d1f-0050048383fb"))
_Form2 : Office::IMsoAccessible
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_FormName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_FormName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_RecordSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_RecordSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Filter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Filter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_FilterOn (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FilterOn (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OrderBy (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OrderBy (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OrderByOn (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_OrderByOn (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AllowFilters (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowFilters (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Caption (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Caption (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_DefaultView (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DefaultView (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ViewsAllowed (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ViewsAllowed (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_AllowEditing (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowEditing (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DefaultEditing (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_DefaultEditing (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_AllowEdits (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowEdits (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AllowDeletions (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowDeletions (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AllowAdditions (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowAdditions (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DataEntry (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_DataEntry (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AllowUpdating (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowUpdating (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_RecordsetType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_RecordsetType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_RecordLocks (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_RecordLocks (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ScrollBars (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ScrollBars (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_RecordSelectors (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_RecordSelectors (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_NavigationButtons (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_NavigationButtons (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DividingLines (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_DividingLines (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AutoResize (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoResize (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AutoCenter (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoCenter (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_PopUp (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_PopUp (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Modal (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Modal (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ControlBox (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlBox (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_MinButton (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_MinButton (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_MaxButton (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_MaxButton (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_MinMaxButtons (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_MinMaxButtons (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_CloseButton (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_CloseButton (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_WhatsThisButton (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_WhatsThisButton (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Picture (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Picture (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PictureType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PictureSizeMode (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureSizeMode (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PictureAlignment (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureAlignment (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PictureTiling (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureTiling (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Cycle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_Cycle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_MenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_MenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Toolbar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Toolbar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenu (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenu (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_GridX (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_GridX (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_GridY (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_GridY (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LayoutForPrint (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_LayoutForPrint (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_FastLaserPrinting (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FastLaserPrinting (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_HelpFile (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpFile (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HelpContextId (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpContextId (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_RowHeight (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_RowHeight (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetFontName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetFontName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetFontHeight (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetFontHeight (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetFontWeight (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetFontWeight (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetFontItalic (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetFontItalic (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetFontUnderline (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetFontUnderline (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabularCharSet (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_TabularCharSet (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetGridlinesBehavior (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetGridlinesBehavior (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetGridlinesColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetGridlinesColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetCellsEffect (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetCellsEffect (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetForeColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetForeColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ShowGrid (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ShowGrid (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetBackColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetBackColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Hwnd (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Hwnd (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Count (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Page (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Page (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Pages (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Pages (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LogicalPageWidth (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_LogicalPageWidth (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_LogicalPageHeight (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_LogicalPageHeight (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ZoomControl (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ZoomControl (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Painting (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Painting (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_PrtMip (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PrtMip (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_PrtDevMode (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PrtDevMode (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_PrtDevNames (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PrtDevNames (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_FrozenColumns (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FrozenColumns (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Bookmark (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_Bookmark (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_TabularFamily (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_TabularFamily (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PaletteSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_PaletteSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PaintPalette (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PaintPalette (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_OnMenu (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMenu (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OpenArgs (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_OpenArgs (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_ConnectSynch (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ConnectSynch (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_OnCurrent (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnCurrent (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnInsert (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnInsert (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeInsert (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeInsert (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterInsert (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterInsert (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeUpdate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeUpdate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterUpdate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterUpdate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDirty (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDirty (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDelete (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDelete (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeDelConfirm (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeDelConfirm (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterDelConfirm (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterDelConfirm (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnOpen (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnOpen (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLoad (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLoad (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnResize (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnResize (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnUnload (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnUnload (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClose (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClose (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnActivate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnActivate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDeactivate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDeactivate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMove (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMove (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPress (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPress (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_KeyPreview (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_KeyPreview (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OnError (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnError (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnFilter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnFilter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnApplyFilter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnApplyFilter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnTimer (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnTimer (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_TimerInterval (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_TimerInterval (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Dirty (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Dirty (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_WindowWidth (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_WindowWidth (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_WindowHeight (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_WindowHeight (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentView (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_CurrentView (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentSectionTop (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_CurrentSectionTop (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentSectionLeft (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_CurrentSectionLeft (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_SelLeft (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_SelLeft (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_SelTop (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_SelTop (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_SelWidth (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_SelWidth (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_SelHeight (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_SelHeight (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentRecord (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_CurrentRecord (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PictureData (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureData (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_InsideHeight (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_InsideHeight (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_InsideWidth (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_InsideWidth (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PicturePalette (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PicturePalette (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_HasModule (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_HasModule (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_acHiddenCurrentPage (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_acHiddenCurrentPage (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Orientation (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_Orientation (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_AllowDesignChanges (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowDesignChanges (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_ServerFilter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ServerFilter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ServerFilterByForm (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ServerFilterByForm (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_MaxRecords (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_MaxRecords (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_UniqueTable (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_UniqueTable (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ResyncCommand (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ResyncCommand (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_InputParameters (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_InputParameters (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_MaxRecButton (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_MaxRecButton (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_NewRecord (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall Undo ( ) = 0;
      virtual HRESULT __stdcall get_ActiveControl (
        /*[out,retval]*/ struct _Control * * pRet ) = 0;
      virtual HRESULT __stdcall get_DefaultControl (
        /*[in]*/ long ControlType,
        /*[out,retval]*/ struct _Control * * pRet ) = 0;
      virtual HRESULT __stdcall get_Dynaset (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_RecordsetClone (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Recordset (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall putref_Recordset (
        /*[in]*/ IDispatch * pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _Section * * pRet ) = 0;
      virtual HRESULT __stdcall get_Form (
        /*[out,retval]*/ struct _Form3 * * pRet ) = 0;
      virtual HRESULT __stdcall get_Module (
        /*[out,retval]*/ struct Module * * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall get_ConnectControl (
        /*[out,retval]*/ struct _Control * * pRet ) = 0;
      virtual HRESULT __stdcall Recalc ( ) = 0;
      virtual HRESULT __stdcall Requery ( ) = 0;
      virtual HRESULT __stdcall Refresh ( ) = 0;
      virtual HRESULT __stdcall Repaint ( ) = 0;
      virtual HRESULT __stdcall GoToPage (
        /*[in]*/ long PageNumber,
        /*[in]*/ long Right,
        /*[in]*/ long Down ) = 0;
      virtual HRESULT __stdcall SetFocus ( ) = 0;
      virtual HRESULT __stdcall get_Controls (
        /*[out,retval]*/ struct Controls * * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall get_SubdatasheetHeight (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_SubdatasheetHeight (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_SubdatasheetExpanded (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_SubdatasheetExpanded (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetBorderLineStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetBorderLineStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetColumnHeaderUnderlineStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetColumnHeaderUnderlineStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_HorizontalDatasheetGridlineStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_HorizontalDatasheetGridlineStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_VerticalDatasheetGridlineStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_VerticalDatasheetGridlineStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_WindowTop (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall get_WindowLeft (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall get_OnUndo (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnUndo (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnRecordExit (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnRecordExit (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PivotTable (
        /*[out,retval]*/ IDispatch * * ppRet ) = 0;
      virtual HRESULT __stdcall get_ChartSpace (
        /*[out,retval]*/ IDispatch * * ppRet ) = 0;
      virtual HRESULT __stdcall get_Printer (
        /*[out,retval]*/ struct _Printer * * pRet ) = 0;
      virtual HRESULT __stdcall put_Printer (
        /*[in]*/ struct _Printer * pRet ) = 0;
      virtual HRESULT __stdcall putref_Printer (
        /*[in]*/ struct _Printer * pRet ) = 0;
      virtual HRESULT __stdcall get_Moveable (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Moveable (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_BeginBatchEdit (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeginBatchEdit (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_UndoBatchEdit (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_UndoBatchEdit (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeBeginTransaction (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeBeginTransaction (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterBeginTransaction (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterBeginTransaction (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeCommitTransaction (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeCommitTransaction (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterCommitTransaction (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterCommitTransaction (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_RollbackTransaction (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_RollbackTransaction (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AllowFormView (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowFormView (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AllowDatasheetView (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowDatasheetView (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AllowPivotTableView (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowPivotTableView (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AllowPivotChartView (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowPivotChartView (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OnConnect (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnConnect (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDisconnect (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDisconnect (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PivotTableChange (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_PivotTableChange (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Query (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Query (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeQuery (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeQuery (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_SelectionChange (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_SelectionChange (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_CommandBeforeExecute (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_CommandBeforeExecute (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_CommandChecked (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_CommandChecked (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_CommandEnabled (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_CommandEnabled (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_CommandExecute (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_CommandExecute (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_DataSetChange (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_DataSetChange (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeScreenTip (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeScreenTip (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterFinalRender (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterFinalRender (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterRender (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterRender (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterLayout (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterLayout (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeRender (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeRender (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_MouseWheel (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_MouseWheel (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ViewChange (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ViewChange (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_DataChange (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_DataChange (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_FetchDefaults (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FetchDefaults (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_BatchUpdates (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_BatchUpdates (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_CommitOnClose (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_CommitOnClose (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_CommitOnNavigation (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_CommitOnNavigation (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_UseDefaultPrinter (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_UseDefaultPrinter (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_RecordSourceQualifier (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_RecordSourceQualifier (
        /*[in]*/ BSTR pRet ) = 0;
};

struct __declspec(uuid("d7281a87-4b30-41c5-ab7b-fabf9a35442a"))
_ReportEvents2 : IDispatch
{};

struct __declspec(uuid("ff240263-af0a-432d-a544-a721e75738f8"))
Report;
    // [ default ] interface _Report3
    // [ source ] interface _ReportEvents
    // [ default, source ] dispinterface _ReportEvents2

struct __declspec(uuid("3b06e966-e47c-11cd-8701-00aa003f0f07"))
_SubReport : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Form (
        /*[out,retval]*/ struct _Form3 * * pRet ) = 0;
      virtual HRESULT __stdcall get_Report (
        /*[out,retval]*/ struct _Report3 * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("3e8b6b00-91ff-101b-af4e-00aa003f0f07"))
_Report : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_FormName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_FormName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_RecordSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_RecordSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Filter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Filter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_FilterOn (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FilterOn (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OrderBy (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OrderBy (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OrderByOn (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_OrderByOn (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_ServerFilter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ServerFilter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Caption (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Caption (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_RecordLocks (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_RecordLocks (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PageHeader (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PageHeader (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PageFooter (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PageFooter (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_DateGrouping (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DateGrouping (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GrpKeepTogether (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GrpKeepTogether (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_MinButton (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_MinButton (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_MaxButton (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_MaxButton (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Picture (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Picture (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PictureType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PictureSizeMode (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureSizeMode (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PictureAlignment (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureAlignment (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PictureTiling (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureTiling (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_PicturePages (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PicturePages (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_MenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_MenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Toolbar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Toolbar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_GridX (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_GridX (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_GridY (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_GridY (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LayoutForPrint (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_LayoutForPrint (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_FastLaserPrinting (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FastLaserPrinting (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_HelpFile (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpFile (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HelpContextId (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpContextId (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Hwnd (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Hwnd (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Count (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Page (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Page (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Pages (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Pages (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LogicalPageWidth (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_LogicalPageWidth (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_LogicalPageHeight (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_LogicalPageHeight (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ZoomControl (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ZoomControl (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HasData (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HasData (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PrintSection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_PrintSection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_NextRecord (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_NextRecord (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_MoveLayout (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_MoveLayout (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_FormatCount (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FormatCount (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_PrintCount (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_PrintCount (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Painting (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Painting (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_PrtMip (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PrtMip (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_PrtDevMode (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PrtDevMode (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_PrtDevNames (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PrtDevNames (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_ForeColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentX (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_CurrentX (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentY (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_CurrentY (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ScaleHeight (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ScaleHeight (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ScaleLeft (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ScaleLeft (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ScaleMode (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ScaleMode (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ScaleTop (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ScaleTop (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ScaleWidth (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ScaleWidth (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_FontBold (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontBold (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FontItalic (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontItalic (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FontName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_FontName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_FontSize (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontSize (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FontUnderline (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontUnderline (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_DrawMode (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_DrawMode (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_DrawStyle (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_DrawStyle (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_DrawWidth (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_DrawWidth (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FillColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_FillColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_FillStyle (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FillStyle (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PaletteSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_PaletteSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PaintPalette (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PaintPalette (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_OnMenu (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMenu (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnOpen (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnOpen (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClose (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClose (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnActivate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnActivate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDeactivate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDeactivate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnNoData (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnNoData (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnPage (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnPage (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnError (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnError (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Dirty (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Dirty (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentRecord (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_CurrentRecord (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PictureData (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureData (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_PicturePalette (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PicturePalette (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_HasModule (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_HasModule (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_acHiddenCurrentPage (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_acHiddenCurrentPage (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Orientation (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_Orientation (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_InputParameters (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_InputParameters (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_ActiveControl (
        /*[out,retval]*/ struct _Control * * pRet ) = 0;
      virtual HRESULT __stdcall get_DefaultControl (
        /*[in]*/ long ControlType,
        /*[out,retval]*/ struct _Control * * pRet ) = 0;
      virtual HRESULT __stdcall Circle (
        /*[in]*/ short flags,
        /*[in]*/ float X,
        /*[in]*/ float Y,
        /*[in]*/ float radius,
        /*[in]*/ long color,
        /*[in]*/ float start,
        /*[in]*/ float end,
        /*[in]*/ float aspect ) = 0;
      virtual HRESULT __stdcall Line (
        /*[in]*/ short flags,
        /*[in]*/ float x1,
        /*[in]*/ float y1,
        /*[in]*/ float x2,
        /*[in]*/ float y2,
        /*[in]*/ long color ) = 0;
      virtual HRESULT __stdcall PSet (
        /*[in]*/ short flags,
        /*[in]*/ float X,
        /*[in]*/ float Y,
        /*[in]*/ long color ) = 0;
      virtual HRESULT __stdcall Scale (
        /*[in]*/ short flags,
        /*[in]*/ float x1,
        /*[in]*/ float y1,
        /*[in]*/ float x2,
        /*[in]*/ float y2 ) = 0;
      virtual HRESULT __stdcall TextWidth (
        /*[in]*/ BSTR Expr,
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall TextHeight (
        /*[in]*/ BSTR Expr,
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall Print (
        /*[in]*/ BSTR Expr ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _Section * * pRet ) = 0;
      virtual HRESULT __stdcall get_GroupLevel (
        /*[in]*/ long Index,
        /*[out,retval]*/ struct _GroupLevel * * pRet ) = 0;
      virtual HRESULT __stdcall get_Report (
        /*[out,retval]*/ struct _Report3 * * pRet ) = 0;
      virtual HRESULT __stdcall get_Module (
        /*[out,retval]*/ struct Module * * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall get_Controls (
        /*[out,retval]*/ struct Controls * * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
};

struct __declspec(uuid("d1523700-6128-101b-af4e-00aa003f0f07"))
Reports : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _Report3 * * pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("dc6b66c0-6128-101b-af4e-00aa003f0f07"))
Screen : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_ActiveDatasheet (
        /*[out,retval]*/ struct _Form3 * * pRet ) = 0;
      virtual HRESULT __stdcall get_ActiveControl (
        /*[out,retval]*/ struct _Control * * pRet ) = 0;
      virtual HRESULT __stdcall get_PreviousControl (
        /*[out,retval]*/ struct _Control * * pRet ) = 0;
      virtual HRESULT __stdcall get_ActiveForm (
        /*[out,retval]*/ struct _Form3 * * pRet ) = 0;
      virtual HRESULT __stdcall get_ActiveReport (
        /*[out,retval]*/ struct _Report3 * * pRet ) = 0;
      virtual HRESULT __stdcall get_MousePointer (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_MousePointer (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ActiveDataAccessPage (
        /*[out,retval]*/ struct _DataAccessPage * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("32a1c62a-d374-11d3-8d21-0050048383fb"))
_Report2 : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_FormName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_FormName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_RecordSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_RecordSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Filter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Filter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_FilterOn (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FilterOn (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OrderBy (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OrderBy (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OrderByOn (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_OrderByOn (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_ServerFilter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ServerFilter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Caption (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Caption (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_RecordLocks (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_RecordLocks (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PageHeader (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PageHeader (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PageFooter (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PageFooter (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_DateGrouping (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DateGrouping (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GrpKeepTogether (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GrpKeepTogether (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_MinButton (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_MinButton (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_MaxButton (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_MaxButton (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Picture (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Picture (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PictureType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PictureSizeMode (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureSizeMode (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PictureAlignment (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureAlignment (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PictureTiling (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureTiling (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_PicturePages (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PicturePages (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_MenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_MenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Toolbar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Toolbar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_GridX (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_GridX (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_GridY (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_GridY (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LayoutForPrint (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_LayoutForPrint (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_FastLaserPrinting (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FastLaserPrinting (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_HelpFile (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpFile (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HelpContextId (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpContextId (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Hwnd (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Hwnd (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Count (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Page (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Page (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Pages (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Pages (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LogicalPageWidth (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_LogicalPageWidth (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_LogicalPageHeight (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_LogicalPageHeight (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ZoomControl (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ZoomControl (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HasData (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HasData (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PrintSection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_PrintSection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_NextRecord (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_NextRecord (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_MoveLayout (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_MoveLayout (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_FormatCount (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FormatCount (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_PrintCount (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_PrintCount (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Painting (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Painting (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_PrtMip (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PrtMip (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_PrtDevMode (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PrtDevMode (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_PrtDevNames (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PrtDevNames (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_ForeColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentX (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_CurrentX (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentY (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_CurrentY (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ScaleHeight (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ScaleHeight (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ScaleLeft (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ScaleLeft (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ScaleMode (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ScaleMode (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ScaleTop (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ScaleTop (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ScaleWidth (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ScaleWidth (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_FontBold (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontBold (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FontItalic (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontItalic (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FontName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_FontName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_FontSize (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontSize (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FontUnderline (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontUnderline (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_DrawMode (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_DrawMode (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_DrawStyle (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_DrawStyle (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_DrawWidth (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_DrawWidth (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FillColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_FillColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_FillStyle (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FillStyle (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PaletteSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_PaletteSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PaintPalette (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PaintPalette (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_OnMenu (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMenu (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnOpen (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnOpen (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClose (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClose (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnActivate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnActivate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDeactivate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDeactivate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnNoData (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnNoData (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnPage (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnPage (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnError (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnError (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Dirty (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Dirty (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentRecord (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_CurrentRecord (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PictureData (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureData (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_PicturePalette (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PicturePalette (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_HasModule (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_HasModule (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_acHiddenCurrentPage (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_acHiddenCurrentPage (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Orientation (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_Orientation (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_InputParameters (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_InputParameters (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_ActiveControl (
        /*[out,retval]*/ struct _Control * * pRet ) = 0;
      virtual HRESULT __stdcall get_DefaultControl (
        /*[in]*/ long ControlType,
        /*[out,retval]*/ struct _Control * * pRet ) = 0;
      virtual HRESULT __stdcall Circle (
        /*[in]*/ short flags,
        /*[in]*/ float X,
        /*[in]*/ float Y,
        /*[in]*/ float radius,
        /*[in]*/ long color,
        /*[in]*/ float start,
        /*[in]*/ float end,
        /*[in]*/ float aspect ) = 0;
      virtual HRESULT __stdcall Line (
        /*[in]*/ short flags,
        /*[in]*/ float x1,
        /*[in]*/ float y1,
        /*[in]*/ float x2,
        /*[in]*/ float y2,
        /*[in]*/ long color ) = 0;
      virtual HRESULT __stdcall PSet (
        /*[in]*/ short flags,
        /*[in]*/ float X,
        /*[in]*/ float Y,
        /*[in]*/ long color ) = 0;
      virtual HRESULT __stdcall Scale (
        /*[in]*/ short flags,
        /*[in]*/ float x1,
        /*[in]*/ float y1,
        /*[in]*/ float x2,
        /*[in]*/ float y2 ) = 0;
      virtual HRESULT __stdcall TextWidth (
        /*[in]*/ BSTR Expr,
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall TextHeight (
        /*[in]*/ BSTR Expr,
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall Print (
        /*[in]*/ BSTR Expr ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _Section * * pRet ) = 0;
      virtual HRESULT __stdcall get_GroupLevel (
        /*[in]*/ long Index,
        /*[out,retval]*/ struct _GroupLevel * * pRet ) = 0;
      virtual HRESULT __stdcall get_Report (
        /*[out,retval]*/ struct _Report3 * * pRet ) = 0;
      virtual HRESULT __stdcall get_Module (
        /*[out,retval]*/ struct Module * * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall get_Controls (
        /*[out,retval]*/ struct Controls * * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall get_AutoResize (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoResize (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AutoCenter (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoCenter (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_PopUp (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_PopUp (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Modal (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Modal (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ControlBox (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlBox (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_MinMaxButtons (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_MinMaxButtons (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_CloseButton (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_CloseButton (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_WindowWidth (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_WindowWidth (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_WindowHeight (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_WindowHeight (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_WindowTop (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall get_WindowLeft (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall get_OpenArgs (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_OpenArgs (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_Printer (
        /*[out,retval]*/ struct _Printer * * pRet ) = 0;
      virtual HRESULT __stdcall put_Printer (
        /*[in]*/ struct _Printer * pRet ) = 0;
      virtual HRESULT __stdcall putref_Printer (
        /*[in]*/ struct _Printer * pRet ) = 0;
      virtual HRESULT __stdcall get_Moveable (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Moveable (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_UseDefaultPrinter (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_UseDefaultPrinter (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Recordset (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall putref_Recordset (
        /*[in]*/ IDispatch * pRet ) = 0;
      virtual HRESULT __stdcall get_RecordSourceQualifier (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_RecordSourceQualifier (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Shape (
        /*[out,retval]*/ BSTR * pbstr ) = 0;
};

struct __declspec(uuid("b0e35b78-55b0-47fb-8951-ca616f25ceaf"))
_Report3 : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_FormName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_FormName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_RecordSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_RecordSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Filter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Filter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_FilterOn (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FilterOn (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OrderBy (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OrderBy (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OrderByOn (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_OrderByOn (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_ServerFilter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ServerFilter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Caption (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Caption (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_RecordLocks (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_RecordLocks (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PageHeader (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PageHeader (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PageFooter (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PageFooter (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_DateGrouping (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DateGrouping (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GrpKeepTogether (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GrpKeepTogether (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_MinButton (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_MinButton (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_MaxButton (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_MaxButton (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Picture (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Picture (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PictureType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PictureSizeMode (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureSizeMode (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PictureAlignment (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureAlignment (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PictureTiling (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureTiling (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_PicturePages (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PicturePages (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_MenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_MenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Toolbar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Toolbar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_GridX (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_GridX (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_GridY (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_GridY (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LayoutForPrint (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_LayoutForPrint (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_FastLaserPrinting (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FastLaserPrinting (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_HelpFile (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpFile (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HelpContextId (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpContextId (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Hwnd (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Hwnd (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Count (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Page (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Page (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Pages (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Pages (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LogicalPageWidth (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_LogicalPageWidth (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_LogicalPageHeight (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_LogicalPageHeight (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ZoomControl (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ZoomControl (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HasData (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HasData (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PrintSection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_PrintSection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_NextRecord (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_NextRecord (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_MoveLayout (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_MoveLayout (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_FormatCount (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FormatCount (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_PrintCount (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_PrintCount (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Painting (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Painting (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_PrtMip (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PrtMip (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_PrtDevMode (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PrtDevMode (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_PrtDevNames (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PrtDevNames (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_ForeColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentX (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_CurrentX (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentY (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_CurrentY (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ScaleHeight (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ScaleHeight (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ScaleLeft (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ScaleLeft (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ScaleMode (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ScaleMode (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ScaleTop (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ScaleTop (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ScaleWidth (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ScaleWidth (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_FontBold (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontBold (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FontItalic (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontItalic (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FontName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_FontName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_FontSize (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontSize (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FontUnderline (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontUnderline (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_DrawMode (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_DrawMode (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_DrawStyle (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_DrawStyle (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_DrawWidth (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_DrawWidth (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FillColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_FillColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_FillStyle (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FillStyle (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PaletteSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_PaletteSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PaintPalette (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PaintPalette (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_OnMenu (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMenu (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnOpen (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnOpen (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClose (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClose (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnActivate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnActivate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDeactivate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDeactivate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnNoData (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnNoData (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnPage (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnPage (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnError (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnError (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Dirty (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Dirty (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentRecord (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_CurrentRecord (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PictureData (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureData (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_PicturePalette (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PicturePalette (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_HasModule (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_HasModule (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_acHiddenCurrentPage (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_acHiddenCurrentPage (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Orientation (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_Orientation (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_InputParameters (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_InputParameters (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_ActiveControl (
        /*[out,retval]*/ struct _Control * * pRet ) = 0;
      virtual HRESULT __stdcall get_DefaultControl (
        /*[in]*/ long ControlType,
        /*[out,retval]*/ struct _Control * * pRet ) = 0;
      virtual HRESULT __stdcall Circle (
        /*[in]*/ short flags,
        /*[in]*/ float X,
        /*[in]*/ float Y,
        /*[in]*/ float radius,
        /*[in]*/ long color,
        /*[in]*/ float start,
        /*[in]*/ float end,
        /*[in]*/ float aspect ) = 0;
      virtual HRESULT __stdcall Line (
        /*[in]*/ short flags,
        /*[in]*/ float x1,
        /*[in]*/ float y1,
        /*[in]*/ float x2,
        /*[in]*/ float y2,
        /*[in]*/ long color ) = 0;
      virtual HRESULT __stdcall PSet (
        /*[in]*/ short flags,
        /*[in]*/ float X,
        /*[in]*/ float Y,
        /*[in]*/ long color ) = 0;
      virtual HRESULT __stdcall Scale (
        /*[in]*/ short flags,
        /*[in]*/ float x1,
        /*[in]*/ float y1,
        /*[in]*/ float x2,
        /*[in]*/ float y2 ) = 0;
      virtual HRESULT __stdcall TextWidth (
        /*[in]*/ BSTR Expr,
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall TextHeight (
        /*[in]*/ BSTR Expr,
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall Print (
        /*[in]*/ BSTR Expr ) = 0;
      virtual HRESULT __stdcall get_SectionOld (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _Section * * pRet ) = 0;
      virtual HRESULT __stdcall get_GroupLevel (
        /*[in]*/ long Index,
        /*[out,retval]*/ struct _GroupLevel * * pRet ) = 0;
      virtual HRESULT __stdcall get_Report (
        /*[out,retval]*/ struct _Report3 * * pRet ) = 0;
      virtual HRESULT __stdcall get_Module (
        /*[out,retval]*/ struct Module * * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall get_Controls (
        /*[out,retval]*/ struct Controls * * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall get_AutoResize (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoResize (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AutoCenter (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoCenter (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_PopUp (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_PopUp (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Modal (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Modal (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ControlBox (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlBox (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_MinMaxButtons (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_MinMaxButtons (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_CloseButton (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_CloseButton (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_WindowWidth (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_WindowWidth (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_WindowHeight (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_WindowHeight (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_WindowTop (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall get_WindowLeft (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall get_OpenArgs (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_OpenArgs (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_Printer (
        /*[out,retval]*/ struct _Printer * * pRet ) = 0;
      virtual HRESULT __stdcall put_Printer (
        /*[in]*/ struct _Printer * pRet ) = 0;
      virtual HRESULT __stdcall putref_Printer (
        /*[in]*/ struct _Printer * pRet ) = 0;
      virtual HRESULT __stdcall get_Moveable (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Moveable (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_UseDefaultPrinter (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_UseDefaultPrinter (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Recordset (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall putref_Recordset (
        /*[in]*/ IDispatch * pRet ) = 0;
      virtual HRESULT __stdcall get_RecordSourceQualifier (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_RecordSourceQualifier (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Shape (
        /*[out,retval]*/ BSTR * pbstr ) = 0;
      virtual HRESULT __stdcall get_FilterOnLoad (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FilterOnLoad (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OrderByOnLoad (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_OrderByOnLoad (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DefaultView (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DefaultView (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_AllowReportView (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowReportView (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_ScrollBars (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ScrollBars (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Cycle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_Cycle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_AllowDesignChanges (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowDesignChanges (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OnCurrent (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnCurrent (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_KeyPreview (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_KeyPreview (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TimerInterval (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_TimerInterval (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentView (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_CurrentView (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall Requery ( ) = 0;
      virtual HRESULT __stdcall get_OnOpenMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnOpenMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnCloseMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnCloseMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnActivateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnActivateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDeactivateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDeactivateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnNoDataMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnNoDataMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnPageMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnPageMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnErrorMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnErrorMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnCurrentMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnCurrentMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLoadMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLoadMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnResizeMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnResizeMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnUnloadMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnUnloadMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMoveMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMoveMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPressMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPressMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnFilterMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnFilterMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnApplyFilterMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnApplyFilterMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnTimerMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnTimerMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_MouseWheelMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_MouseWheelMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ShowPageMargins (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ShowPageMargins (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_FitToPage (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FitToPage (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AllowLayoutView (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowLayoutView (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OnLoad (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLoad (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnResize (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnResize (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnUnload (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnUnload (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMove (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMove (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPress (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPress (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnFilter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnFilter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnApplyFilter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnApplyFilter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnTimer (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnTimer (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_MouseWheel (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_MouseWheel (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayOnSharePointSite (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayOnSharePointSite (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _Section * * pRet ) = 0;
      virtual HRESULT __stdcall get_RibbonName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_RibbonName (
        /*[in]*/ BSTR pRet ) = 0;
};

struct __declspec(uuid("3b06e981-e47c-11cd-8701-00aa003f0f07"))
DispAttachmentEvents : IDispatch
{};

struct __declspec(uuid("3b06e979-e47c-11cd-8701-00aa003f0f07"))
Attachment;
    // [ default ] interface _Attachment
    // [ default, source ] dispinterface DispAttachmentEvents

enum __declspec(uuid("6dbd17a8-c56f-3cf3-8f2e-dd509bbf1a53"))
AcSplitFormPrinting
{
    acFormOnly = 0,
    acGridOnly = 1
};

enum __declspec(uuid("a5917218-f28d-314f-ad8d-0fb934f34de3"))
AcSplitFormOrientation
{
    acDatasheetOnTop = 0,
    acDatasheetOnBottom = 1,
    acDatasheetOnLeft = 2,
    acDatasheetOnRight = 3
};

enum __declspec(uuid("2d0484c0-a420-39df-a468-6b6971017c95"))
AcSplitFormDatasheet
{
    acDatasheetAllowEdits = 0,
    acDatasheetReadOnly = 1
};

struct __declspec(uuid("66b22fb4-f70e-4f03-a00a-f76e9adbbf10"))
_Form3 : Office::IMsoAccessible
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_FormName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_FormName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_RecordSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_RecordSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Filter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Filter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_FilterOn (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FilterOn (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OrderBy (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OrderBy (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OrderByOn (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_OrderByOn (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AllowFilters (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowFilters (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Caption (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Caption (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_DefaultView (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DefaultView (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ViewsAllowed (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ViewsAllowed (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_AllowEditing (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowEditing (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DefaultEditing (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_DefaultEditing (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_AllowEdits (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowEdits (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AllowDeletions (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowDeletions (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AllowAdditions (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowAdditions (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DataEntry (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_DataEntry (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AllowUpdating (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowUpdating (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_RecordsetType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_RecordsetType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_RecordLocks (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_RecordLocks (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ScrollBars (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ScrollBars (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_RecordSelectors (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_RecordSelectors (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_NavigationButtons (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_NavigationButtons (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DividingLines (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_DividingLines (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AutoResize (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoResize (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AutoCenter (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoCenter (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_PopUp (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_PopUp (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Modal (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Modal (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ControlBox (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlBox (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_MinButton (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_MinButton (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_MaxButton (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_MaxButton (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_MinMaxButtons (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_MinMaxButtons (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_CloseButton (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_CloseButton (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_WhatsThisButton (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_WhatsThisButton (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Picture (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Picture (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PictureType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PictureSizeMode (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureSizeMode (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PictureAlignment (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureAlignment (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PictureTiling (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureTiling (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Cycle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_Cycle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_MenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_MenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Toolbar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Toolbar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenu (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenu (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_GridX (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_GridX (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_GridY (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_GridY (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LayoutForPrint (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_LayoutForPrint (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_FastLaserPrinting (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FastLaserPrinting (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_HelpFile (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpFile (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HelpContextId (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpContextId (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_RowHeight (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_RowHeight (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetFontName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetFontName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetFontHeight (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetFontHeight (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetFontWeight (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetFontWeight (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetFontItalic (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetFontItalic (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetFontUnderline (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetFontUnderline (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabularCharSet (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_TabularCharSet (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetGridlinesBehavior (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetGridlinesBehavior (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetGridlinesColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetGridlinesColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetCellsEffect (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetCellsEffect (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetForeColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetForeColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ShowGrid (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ShowGrid (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetBackColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetBackColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Hwnd (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Hwnd (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Count (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Page (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Page (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Pages (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Pages (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LogicalPageWidth (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_LogicalPageWidth (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_LogicalPageHeight (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_LogicalPageHeight (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ZoomControl (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ZoomControl (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Painting (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Painting (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_PrtMip (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PrtMip (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_PrtDevMode (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PrtDevMode (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_PrtDevNames (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PrtDevNames (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_FrozenColumns (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FrozenColumns (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Bookmark (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_Bookmark (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_TabularFamily (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_TabularFamily (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PaletteSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_PaletteSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PaintPalette (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PaintPalette (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_OnMenu (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMenu (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OpenArgs (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_OpenArgs (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_ConnectSynch (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ConnectSynch (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_OnCurrent (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnCurrent (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnInsert (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnInsert (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeInsert (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeInsert (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterInsert (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterInsert (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeUpdate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeUpdate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterUpdate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterUpdate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDirty (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDirty (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDelete (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDelete (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeDelConfirm (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeDelConfirm (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterDelConfirm (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterDelConfirm (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnOpen (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnOpen (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLoad (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLoad (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnResize (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnResize (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnUnload (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnUnload (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClose (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClose (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnActivate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnActivate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDeactivate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDeactivate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMove (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMove (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPress (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPress (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_KeyPreview (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_KeyPreview (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OnError (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnError (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnFilter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnFilter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnApplyFilter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnApplyFilter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnTimer (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnTimer (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_TimerInterval (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_TimerInterval (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Dirty (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Dirty (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_WindowWidth (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_WindowWidth (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_WindowHeight (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_WindowHeight (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentView (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_CurrentView (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentSectionTop (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_CurrentSectionTop (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentSectionLeft (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_CurrentSectionLeft (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_SelLeft (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_SelLeft (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_SelTop (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_SelTop (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_SelWidth (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_SelWidth (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_SelHeight (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_SelHeight (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentRecord (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_CurrentRecord (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PictureData (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureData (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_InsideHeight (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_InsideHeight (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_InsideWidth (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_InsideWidth (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PicturePalette (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PicturePalette (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_HasModule (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_HasModule (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_acHiddenCurrentPage (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_acHiddenCurrentPage (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Orientation (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_Orientation (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_AllowDesignChanges (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowDesignChanges (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_ServerFilter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ServerFilter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ServerFilterByForm (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ServerFilterByForm (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_MaxRecords (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_MaxRecords (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_UniqueTable (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_UniqueTable (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ResyncCommand (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ResyncCommand (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_InputParameters (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_InputParameters (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_MaxRecButton (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_MaxRecButton (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_NewRecord (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall Undo ( ) = 0;
      virtual HRESULT __stdcall get_ActiveControl (
        /*[out,retval]*/ struct _Control * * pRet ) = 0;
      virtual HRESULT __stdcall get_DefaultControl (
        /*[in]*/ long ControlType,
        /*[out,retval]*/ struct _Control * * pRet ) = 0;
      virtual HRESULT __stdcall get_Dynaset (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_RecordsetClone (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Recordset (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall putref_Recordset (
        /*[in]*/ IDispatch * pRet ) = 0;
      virtual HRESULT __stdcall get_SectionOld (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _Section * * pRet ) = 0;
      virtual HRESULT __stdcall get_Form (
        /*[out,retval]*/ struct _Form3 * * pRet ) = 0;
      virtual HRESULT __stdcall get_Module (
        /*[out,retval]*/ struct Module * * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall get_ConnectControl (
        /*[out,retval]*/ struct _Control * * pRet ) = 0;
      virtual HRESULT __stdcall Recalc ( ) = 0;
      virtual HRESULT __stdcall Requery ( ) = 0;
      virtual HRESULT __stdcall Refresh ( ) = 0;
      virtual HRESULT __stdcall Repaint ( ) = 0;
      virtual HRESULT __stdcall GoToPage (
        /*[in]*/ long PageNumber,
        /*[in]*/ long Right,
        /*[in]*/ long Down ) = 0;
      virtual HRESULT __stdcall SetFocus ( ) = 0;
      virtual HRESULT __stdcall get_Controls (
        /*[out,retval]*/ struct Controls * * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall get_SubdatasheetHeight (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_SubdatasheetHeight (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_SubdatasheetExpanded (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_SubdatasheetExpanded (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetBorderLineStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetBorderLineStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetColumnHeaderUnderlineStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetColumnHeaderUnderlineStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_HorizontalDatasheetGridlineStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_HorizontalDatasheetGridlineStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_VerticalDatasheetGridlineStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_VerticalDatasheetGridlineStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_WindowTop (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall get_WindowLeft (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall get_OnUndo (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnUndo (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnRecordExit (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnRecordExit (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PivotTable (
        /*[out,retval]*/ IDispatch * * ppRet ) = 0;
      virtual HRESULT __stdcall get_ChartSpace (
        /*[out,retval]*/ IDispatch * * ppRet ) = 0;
      virtual HRESULT __stdcall get_Printer (
        /*[out,retval]*/ struct _Printer * * pRet ) = 0;
      virtual HRESULT __stdcall put_Printer (
        /*[in]*/ struct _Printer * pRet ) = 0;
      virtual HRESULT __stdcall putref_Printer (
        /*[in]*/ struct _Printer * pRet ) = 0;
      virtual HRESULT __stdcall get_Moveable (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Moveable (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_BeginBatchEdit (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeginBatchEdit (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_UndoBatchEdit (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_UndoBatchEdit (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeBeginTransaction (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeBeginTransaction (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterBeginTransaction (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterBeginTransaction (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeCommitTransaction (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeCommitTransaction (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterCommitTransaction (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterCommitTransaction (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_RollbackTransaction (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_RollbackTransaction (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AllowFormView (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowFormView (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AllowDatasheetView (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowDatasheetView (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AllowPivotTableView (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowPivotTableView (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AllowPivotChartView (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowPivotChartView (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OnConnect (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnConnect (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDisconnect (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDisconnect (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PivotTableChange (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_PivotTableChange (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Query (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Query (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeQuery (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeQuery (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_SelectionChange (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_SelectionChange (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_CommandBeforeExecute (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_CommandBeforeExecute (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_CommandChecked (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_CommandChecked (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_CommandEnabled (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_CommandEnabled (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_CommandExecute (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_CommandExecute (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_DataSetChange (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_DataSetChange (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeScreenTip (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeScreenTip (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterFinalRender (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterFinalRender (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterRender (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterRender (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterLayout (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterLayout (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeRender (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeRender (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_MouseWheel (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_MouseWheel (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ViewChange (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ViewChange (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_DataChange (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_DataChange (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_FetchDefaults (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FetchDefaults (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_BatchUpdates (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_BatchUpdates (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_CommitOnClose (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_CommitOnClose (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_CommitOnNavigation (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_CommitOnNavigation (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_UseDefaultPrinter (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_UseDefaultPrinter (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_RecordSourceQualifier (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_RecordSourceQualifier (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_FilterOnLoad (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FilterOnLoad (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OrderByOnLoad (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_OrderByOnLoad (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_SplitFormOrientation (
        /*[out,retval]*/ enum AcSplitFormOrientation * pRet ) = 0;
      virtual HRESULT __stdcall put_SplitFormOrientation (
        /*[in]*/ enum AcSplitFormOrientation pRet ) = 0;
      virtual HRESULT __stdcall get_SplitFormDatasheet (
        /*[out,retval]*/ enum AcSplitFormDatasheet * pRet ) = 0;
      virtual HRESULT __stdcall put_SplitFormDatasheet (
        /*[in]*/ enum AcSplitFormDatasheet pRet ) = 0;
      virtual HRESULT __stdcall get_SplitFormSplitterBar (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_SplitFormSplitterBar (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_SplitFormPrinting (
        /*[out,retval]*/ enum AcSplitFormPrinting * pRet ) = 0;
      virtual HRESULT __stdcall put_SplitFormPrinting (
        /*[in]*/ enum AcSplitFormPrinting pRet ) = 0;
      virtual HRESULT __stdcall get_SplitFormSplitterBarSave (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_SplitFormSplitterBarSave (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_NavigationCaption (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_NavigationCaption (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnCurrentMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnCurrentMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeInsertMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeInsertMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterInsertMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterInsertMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDirtyMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDirtyMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDeleteMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDeleteMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeDelConfirmMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeDelConfirmMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterDelConfirmMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterDelConfirmMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnOpenMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnOpenMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLoadMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLoadMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnResizeMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnResizeMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnUnloadMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnUnloadMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnCloseMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnCloseMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnActivateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnActivateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDeactivateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDeactivateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMoveMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMoveMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPressMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPressMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnErrorMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnErrorMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnFilterMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnFilterMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnApplyFilterMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnApplyFilterMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnTimerMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnTimerMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnUndoMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnUndoMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnRecordExitMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnRecordExitMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeginBatchEditMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeginBatchEditMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_UndoBatchEditMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_UndoBatchEditMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeBeginTransactionMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeBeginTransactionMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterBeginTransactionMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterBeginTransactionMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeCommitTransactionMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeCommitTransactionMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterCommitTransactionMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterCommitTransactionMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_RollbackTransactionMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_RollbackTransactionMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnConnectMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnConnectMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDisconnectMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDisconnectMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PivotTableChangeMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_PivotTableChangeMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_QueryMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_QueryMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeQueryMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeQueryMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_SelectionChangeMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_SelectionChangeMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_CommandBeforeExecuteMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_CommandBeforeExecuteMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_CommandCheckedMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_CommandCheckedMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_CommandEnabledMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_CommandEnabledMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_CommandExecuteMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_CommandExecuteMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_DataSetChangeMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_DataSetChangeMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeScreenTipMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeScreenTipMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterFinalRenderMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterFinalRenderMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterRenderMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterRenderMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterLayoutMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterLayoutMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeRenderMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeRenderMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_MouseWheelMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_MouseWheelMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ViewChangeMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ViewChangeMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_DataChangeMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_DataChangeMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AllowLayoutView (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowLayoutView (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DatasheetAlternateBackColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_DatasheetAlternateBackColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayOnSharePointSite (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayOnSharePointSite (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_SplitFormSize (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_SplitFormSize (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _Section * * pRet ) = 0;
      virtual HRESULT __stdcall get_RibbonName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_RibbonName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_FitToScreen (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FitToScreen (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
};

enum __declspec(uuid("c9790e1a-82f0-376a-b83c-70754307e90b"))
AcLayoutType
{
    acLayoutNone = 0,
    acLayoutTabular = 1,
    acLayoutStacked = 2
};

enum __declspec(uuid("c8ca25cb-a193-34f4-9570-557e0c011aab"))
AcTextFormat
{
    acTextFormatPlain = 0,
    acTextFormatHTMLRichText = 1
};

enum __declspec(uuid("0ccce10d-80f0-3b11-bddf-d10be459535a"))
AcSeparatorCharacters
{
    acSeparatorCharactersSystemSeparator = 0,
    acSeparatorCharactersNewLine = 1,
    acSeparatorCharactersSemiColon = 2,
    acSeparatorCharactersComma = 3
};

enum __declspec(uuid("7a14031e-df18-3670-8a8c-b254d3292e3a"))
AcHorizontalAnchor
{
    acHorizontalAnchorLeft = 0,
    acHorizontalAnchorRight = 1,
    acHorizontalAnchorBoth = 2
};

enum __declspec(uuid("0b7e0878-aa59-38d8-993f-6a0547db3aad"))
AcVerticalAnchor
{
    acVerticalAnchorTop = 0,
    acVerticalAnchorBottom = 1,
    acVerticalAnchorBoth = 2
};

struct __declspec(uuid("26b96540-8f8e-101b-af4e-00aa003f0f07"))
_Control : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall Undo ( ) = 0;
      virtual HRESULT __stdcall Dropdown ( ) = 0;
      virtual HRESULT __stdcall get_Column (
        /*[in]*/ long Index,
        /*[in]*/ VARIANT Row,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Selected (
        /*[in]*/ long lRow,
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Selected (
        /*[in]*/ long lRow,
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_OldValue (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Form (
        /*[out,retval]*/ struct _Form3 * * pRet ) = 0;
      virtual HRESULT __stdcall get_Report (
        /*[out,retval]*/ struct _Report3 * * pRet ) = 0;
      virtual HRESULT __stdcall get_ItemData (
        /*[in]*/ long Index,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Object (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_ObjectVerbs (
        /*[in]*/ long Index,
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall Requery ( ) = 0;
      virtual HRESULT __stdcall SizeToFit ( ) = 0;
      virtual HRESULT __stdcall Goto ( ) = 0;
      virtual HRESULT __stdcall get_ItemsSelected (
        /*[out,retval]*/ struct _ItemsSelected * * pRet ) = 0;
      virtual HRESULT __stdcall SetFocus ( ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Pages (
        /*[out,retval]*/ struct Pages * * pRet ) = 0;
      virtual HRESULT __stdcall get_Controls (
        /*[out,retval]*/ struct Children * * pRet ) = 0;
      virtual HRESULT __stdcall get_Hyperlink (
        /*[out,retval]*/ struct _Hyperlink * * ppRet ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall get_SmartTags (
        /*[out,retval]*/ struct _SmartTags * * ppRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_Layout (
        /*[out,retval]*/ enum AcLayoutType * pRet ) = 0;
      virtual HRESULT __stdcall get_LeftPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LeftPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_TopPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TopPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_RightPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_RightPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BottomPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_BottomPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HorizontalAnchor (
        /*[out,retval]*/ enum AcHorizontalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_HorizontalAnchor (
        /*[in]*/ enum AcHorizontalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_VerticalAnchor (
        /*[out,retval]*/ enum AcVerticalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_VerticalAnchor (
        /*[in]*/ enum AcVerticalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_LayoutID (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
};

struct __declspec(uuid("3b06e948-e47c-11cd-8701-00aa003f0f07"))
_Label : Office::IMsoAccessible
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall SizeToFit ( ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Hyperlink (
        /*[out,retval]*/ struct _Hyperlink * * ppRet ) = 0;
      virtual HRESULT __stdcall get_EventProcPrefix (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_EventProcPrefix (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Caption (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Caption (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HyperlinkAddress (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_HyperlinkAddress (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HyperlinkSubAddress (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_HyperlinkSubAddress (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayWhen (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayWhen (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Vertical (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Vertical (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BackStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BackStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_SpecialEffect (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_SpecialEffect (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_OldBorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_OldBorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderWidth (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderWidth (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderLineStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderLineStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ForeColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_FontName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_FontName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_FontSize (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontSize (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FontWeight (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontWeight (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FontItalic (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FontItalic (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_FontUnderline (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FontUnderline (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TextFontCharSet (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_TextFontCharSet (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_TextAlign (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_TextAlign (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_FontBold (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontBold (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ControlTipText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlTipText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HelpContextId (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpContextId (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Section (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ControlName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_IsVisible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IsVisible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_InSelection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InSelection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OnClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMove (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMove (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ReadingOrder (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ReadingOrder (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_NumeralShapes (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_NumeralShapes (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall get_LeftMargin (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LeftMargin (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_TopMargin (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TopMargin (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LineSpacing (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LineSpacing (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_RightMargin (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_RightMargin (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BottomMargin (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_BottomMargin (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall get_SmartTags (
        /*[out,retval]*/ struct _SmartTags * * ppRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_Layout (
        /*[out,retval]*/ enum AcLayoutType * pRet ) = 0;
      virtual HRESULT __stdcall get_LeftPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LeftPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_TopPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TopPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_RightPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_RightPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BottomPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_BottomPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HorizontalAnchor (
        /*[out,retval]*/ enum AcHorizontalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_HorizontalAnchor (
        /*[in]*/ enum AcHorizontalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_VerticalAnchor (
        /*[out,retval]*/ enum AcVerticalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_VerticalAnchor (
        /*[in]*/ enum AcVerticalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_OnClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMoveMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMoveMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_LayoutID (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_Target (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Target (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BackThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BackTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BackShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ForeThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ForeTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ForeShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ThemeFontIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ThemeFontIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineShade (
        /*[in]*/ float pRet ) = 0;
};

struct __declspec(uuid("3b06e94a-e47c-11cd-8701-00aa003f0f07"))
_Rectangle : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall SizeToFit ( ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_EventProcPrefix (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_EventProcPrefix (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayWhen (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayWhen (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BackStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BackStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_SpecialEffect (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_SpecialEffect (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_OldBorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_OldBorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderWidth (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderWidth (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderLineStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderLineStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Section (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ControlName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_IsVisible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IsVisible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_InSelection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InSelection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OnClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMove (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMove (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_OnClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMoveMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMoveMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HorizontalAnchor (
        /*[out,retval]*/ enum AcHorizontalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_HorizontalAnchor (
        /*[in]*/ enum AcHorizontalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_VerticalAnchor (
        /*[out,retval]*/ enum AcVerticalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_VerticalAnchor (
        /*[in]*/ enum AcVerticalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_BackThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BackTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BackShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderShade (
        /*[in]*/ float pRet ) = 0;
};

struct __declspec(uuid("3b06e94c-e47c-11cd-8701-00aa003f0f07"))
_Line : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall SizeToFit ( ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_EventProcPrefix (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_EventProcPrefix (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_LineSlant (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_LineSlant (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayWhen (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayWhen (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_SpecialEffect (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_SpecialEffect (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_OldBorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_OldBorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderWidth (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderWidth (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderLineStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderLineStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Section (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ControlName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_IsVisible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IsVisible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_InSelection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InSelection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_HorizontalAnchor (
        /*[out,retval]*/ enum AcHorizontalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_HorizontalAnchor (
        /*[in]*/ enum AcHorizontalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_VerticalAnchor (
        /*[out,retval]*/ enum AcVerticalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_VerticalAnchor (
        /*[in]*/ enum AcVerticalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_BorderThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderShade (
        /*[in]*/ float pRet ) = 0;
};

struct __declspec(uuid("3b06e94e-e47c-11cd-8701-00aa003f0f07"))
_Image : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_OldValue (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall SizeToFit ( ) = 0;
      virtual HRESULT __stdcall Requery ( ) = 0;
      virtual HRESULT __stdcall Goto ( ) = 0;
      virtual HRESULT __stdcall SetFocus ( ) = 0;
      virtual HRESULT __stdcall get_Controls (
        /*[out,retval]*/ struct Children * * pRet ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Hyperlink (
        /*[out,retval]*/ struct _Hyperlink * * ppRet ) = 0;
      virtual HRESULT __stdcall get_EventProcPrefix (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_EventProcPrefix (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Picture (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Picture (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PictureType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PictureData (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureData (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_SizeMode (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_SizeMode (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PictureAlignment (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureAlignment (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PictureTiling (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureTiling (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_HyperlinkAddress (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_HyperlinkAddress (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HyperlinkSubAddress (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_HyperlinkSubAddress (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayWhen (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayWhen (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BackStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BackStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_SpecialEffect (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_SpecialEffect (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_OldBorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_OldBorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderWidth (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderWidth (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderLineStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderLineStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ControlTipText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlTipText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HelpContextId (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpContextId (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Section (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ControlName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ObjectPalette (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_ObjectPalette (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_IsVisible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IsVisible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OnClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMove (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMove (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ImageHeight (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ImageHeight (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ImageWidth (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ImageWidth (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_InSelection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InSelection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_OnClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMoveMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMoveMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Layout (
        /*[out,retval]*/ enum AcLayoutType * pRet ) = 0;
      virtual HRESULT __stdcall get_LeftPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LeftPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_TopPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TopPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_RightPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_RightPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BottomPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_BottomPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HorizontalAnchor (
        /*[out,retval]*/ enum AcHorizontalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_HorizontalAnchor (
        /*[in]*/ enum AcHorizontalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_VerticalAnchor (
        /*[out,retval]*/ enum AcVerticalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_VerticalAnchor (
        /*[in]*/ enum AcVerticalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_LayoutID (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_Target (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Target (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BackThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BackTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BackShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineShade (
        /*[in]*/ float pRet ) = 0;
};

struct __declspec(uuid("3b06e952-e47c-11cd-8701-00aa003f0f07"))
_OptionButton : Office::IMsoAccessible
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_OldValue (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall SizeToFit ( ) = 0;
      virtual HRESULT __stdcall Requery ( ) = 0;
      virtual HRESULT __stdcall Goto ( ) = 0;
      virtual HRESULT __stdcall SetFocus ( ) = 0;
      virtual HRESULT __stdcall get_Controls (
        /*[out,retval]*/ struct Children * * pRet ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_EventProcPrefix (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_EventProcPrefix (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_OptionValue (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_OptionValue (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ControlSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_DefaultValue (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_DefaultValue (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ValidationRule (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ValidationRule (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ValidationText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ValidationText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_StatusBarText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_StatusBarText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayWhen (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayWhen (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Locked (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Locked (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TripleState (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_TripleState (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabStop (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_TabStop (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabIndex (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TabIndex (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_HideDuplicates (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_HideDuplicates (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_SpecialEffect (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_SpecialEffect (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_OldBorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_OldBorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderWidth (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderWidth (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderLineStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderLineStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlTipText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlTipText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HelpContextId (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpContextId (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnWidth (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnWidth (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnOrder (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnOrder (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnHidden (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnHidden (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AutoLabel (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoLabel (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AddColon (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AddColon (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_LabelX (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelX (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LabelY (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelY (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LabelAlign (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelAlign (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Section (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ControlName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_IsVisible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IsVisible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_InSelection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InSelection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeUpdate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeUpdate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterUpdate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterUpdate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExit (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExit (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMove (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMove (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPress (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPress (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ReadingOrder (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ReadingOrder (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnterMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnterMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExitMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExitMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMoveMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMoveMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPressMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPressMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Layout (
        /*[out,retval]*/ enum AcLayoutType * pRet ) = 0;
      virtual HRESULT __stdcall get_LeftPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LeftPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_TopPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TopPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_RightPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_RightPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BottomPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_BottomPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HorizontalAnchor (
        /*[out,retval]*/ enum AcHorizontalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_HorizontalAnchor (
        /*[in]*/ enum AcHorizontalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_VerticalAnchor (
        /*[out,retval]*/ enum AcVerticalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_VerticalAnchor (
        /*[in]*/ enum AcVerticalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_LayoutID (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_BorderThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineShade (
        /*[in]*/ float pRet ) = 0;
};

struct __declspec(uuid("3b06e954-e47c-11cd-8701-00aa003f0f07"))
_Checkbox : Office::IMsoAccessible
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall Undo ( ) = 0;
      virtual HRESULT __stdcall get_OldValue (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall SizeToFit ( ) = 0;
      virtual HRESULT __stdcall Requery ( ) = 0;
      virtual HRESULT __stdcall Goto ( ) = 0;
      virtual HRESULT __stdcall SetFocus ( ) = 0;
      virtual HRESULT __stdcall get_Controls (
        /*[out,retval]*/ struct Children * * pRet ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_EventProcPrefix (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_EventProcPrefix (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_OptionValue (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_OptionValue (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ControlSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_DefaultValue (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_DefaultValue (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ValidationRule (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ValidationRule (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ValidationText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ValidationText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_StatusBarText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_StatusBarText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayWhen (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayWhen (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Locked (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Locked (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TripleState (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_TripleState (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabStop (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_TabStop (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabIndex (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TabIndex (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_HideDuplicates (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_HideDuplicates (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_SpecialEffect (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_SpecialEffect (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_OldBorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_OldBorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderWidth (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderWidth (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderLineStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderLineStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlTipText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlTipText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HelpContextId (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpContextId (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnWidth (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnWidth (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnOrder (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnOrder (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnHidden (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnHidden (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AutoLabel (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoLabel (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AddColon (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AddColon (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_LabelX (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelX (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LabelY (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelY (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LabelAlign (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelAlign (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Section (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ControlName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_IsVisible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IsVisible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_InSelection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InSelection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeUpdate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeUpdate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterUpdate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterUpdate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExit (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExit (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMove (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMove (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPress (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPress (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ReadingOrder (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ReadingOrder (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnterMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnterMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExitMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExitMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMoveMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMoveMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPressMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPressMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Layout (
        /*[out,retval]*/ enum AcLayoutType * pRet ) = 0;
      virtual HRESULT __stdcall get_LeftPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LeftPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_TopPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TopPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_RightPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_RightPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BottomPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_BottomPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HorizontalAnchor (
        /*[out,retval]*/ enum AcHorizontalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_HorizontalAnchor (
        /*[in]*/ enum AcHorizontalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_VerticalAnchor (
        /*[out,retval]*/ enum AcVerticalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_VerticalAnchor (
        /*[in]*/ enum AcVerticalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_LayoutID (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_BorderThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineShade (
        /*[in]*/ float pRet ) = 0;
};

struct __declspec(uuid("3b06e956-e47c-11cd-8701-00aa003f0f07"))
_OptionGroup : Office::IMsoAccessible
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall Undo ( ) = 0;
      virtual HRESULT __stdcall get_OldValue (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall SizeToFit ( ) = 0;
      virtual HRESULT __stdcall Requery ( ) = 0;
      virtual HRESULT __stdcall Goto ( ) = 0;
      virtual HRESULT __stdcall SetFocus ( ) = 0;
      virtual HRESULT __stdcall get_Controls (
        /*[out,retval]*/ struct Children * * pRet ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_EventProcPrefix (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_EventProcPrefix (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ControlSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_DefaultValue (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_DefaultValue (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ValidationRule (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ValidationRule (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ValidationText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ValidationText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_StatusBarText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_StatusBarText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayWhen (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayWhen (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Locked (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Locked (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabStop (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_TabStop (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabIndex (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TabIndex (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_HideDuplicates (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_HideDuplicates (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BackStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BackStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_SpecialEffect (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_SpecialEffect (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_OldBorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_OldBorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderWidth (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderWidth (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderLineStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderLineStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlTipText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlTipText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HelpContextId (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpContextId (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnWidth (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnWidth (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnOrder (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnOrder (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnHidden (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnHidden (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AutoLabel (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoLabel (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AddColon (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AddColon (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_LabelX (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelX (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LabelY (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelY (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LabelAlign (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelAlign (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Section (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ControlName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_IsVisible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IsVisible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_InSelection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InSelection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeUpdate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeUpdate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterUpdate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterUpdate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExit (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExit (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMove (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMove (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnterMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnterMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExitMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExitMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMoveMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMoveMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HorizontalAnchor (
        /*[out,retval]*/ enum AcHorizontalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_HorizontalAnchor (
        /*[in]*/ enum AcHorizontalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_VerticalAnchor (
        /*[out,retval]*/ enum AcVerticalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_VerticalAnchor (
        /*[in]*/ enum AcVerticalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_BackThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BackTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BackShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderShade (
        /*[in]*/ float pRet ) = 0;
};

struct __declspec(uuid("3b06e958-e47c-11cd-8701-00aa003f0f07"))
_BoundObjectFrame : Office::IMsoAccessible
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_OldValue (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Object (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_ObjectVerbs (
        /*[in]*/ long Index,
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall SizeToFit ( ) = 0;
      virtual HRESULT __stdcall Requery ( ) = 0;
      virtual HRESULT __stdcall Goto ( ) = 0;
      virtual HRESULT __stdcall SetFocus ( ) = 0;
      virtual HRESULT __stdcall get_Controls (
        /*[out,retval]*/ struct Children * * pRet ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_EventProcPrefix (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_EventProcPrefix (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ControlSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_SizeMode (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_SizeMode (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Class (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_SourceDoc (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_SourceDoc (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_SourceItem (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_SourceItem (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AutoActivate (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoActivate (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayType (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayType (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_UpdateOptions (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_UpdateOptions (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Verb (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Verb (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_OLETypeAllowed (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_OLETypeAllowed (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_StatusBarText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_StatusBarText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayWhen (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayWhen (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Locked (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Locked (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabStop (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_TabStop (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabIndex (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TabIndex (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BackStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BackStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_SpecialEffect (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_SpecialEffect (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_OldBorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_OldBorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderWidth (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderWidth (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderLineStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderLineStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlTipText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlTipText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HelpContextId (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpContextId (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnWidth (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnWidth (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnOrder (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnOrder (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnHidden (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnHidden (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AutoLabel (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoLabel (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AddColon (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AddColon (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_LabelX (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelX (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LabelY (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelY (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LabelAlign (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelAlign (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Section (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ControlName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ObjectPalette (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_ObjectPalette (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_LpOleObject (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_LpOleObject (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ObjectVerbsCount (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ObjectVerbsCount (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Action (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Action (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Scaling (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_Scaling (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_OLEType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_OLEType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_IsVisible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IsVisible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_InSelection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InSelection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeUpdate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeUpdate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterUpdate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterUpdate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnUpdated (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnUpdated (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExit (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExit (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMove (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMove (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPress (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPress (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnUpdatedMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnUpdatedMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnterMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnterMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExitMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExitMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMoveMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMoveMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPressMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPressMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Layout (
        /*[out,retval]*/ enum AcLayoutType * pRet ) = 0;
      virtual HRESULT __stdcall get_LeftPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LeftPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_TopPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TopPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_RightPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_RightPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BottomPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_BottomPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HorizontalAnchor (
        /*[out,retval]*/ enum AcHorizontalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_HorizontalAnchor (
        /*[in]*/ enum AcHorizontalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_VerticalAnchor (
        /*[out,retval]*/ enum AcVerticalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_VerticalAnchor (
        /*[in]*/ enum AcVerticalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_LayoutID (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_BackThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BackTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BackShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_VarOleObject (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_VarOleObject (
        /*[in]*/ VARIANT pRet ) = 0;
};

struct __declspec(uuid("3b06e95a-e47c-11cd-8701-00aa003f0f07"))
_ListBox : Office::IMsoAccessible
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall Undo ( ) = 0;
      virtual HRESULT __stdcall get_Column (
        /*[in]*/ long Index,
        /*[in]*/ VARIANT Row,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Selected (
        /*[in]*/ long lRow,
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Selected (
        /*[in]*/ long lRow,
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_OldValue (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_ItemData (
        /*[in]*/ long Index,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall SizeToFit ( ) = 0;
      virtual HRESULT __stdcall Requery ( ) = 0;
      virtual HRESULT __stdcall Goto ( ) = 0;
      virtual HRESULT __stdcall SetFocus ( ) = 0;
      virtual HRESULT __stdcall get_Controls (
        /*[out,retval]*/ struct Children * * pRet ) = 0;
      virtual HRESULT __stdcall get_ItemsSelected (
        /*[out,retval]*/ struct _ItemsSelected * * pRet ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Hyperlink (
        /*[out,retval]*/ struct _Hyperlink * * ppRet ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_EventProcPrefix (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_EventProcPrefix (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ControlSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_RowSourceType (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_RowSourceType (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_RowSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_RowSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnCount (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnCount (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnHeads (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnHeads (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnWidths (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnWidths (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BoundColumn (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BoundColumn (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_DefaultValue (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_DefaultValue (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_IMEHold (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IMEHold (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_ValidationRule (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ValidationRule (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ValidationText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ValidationText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_StatusBarText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_StatusBarText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayWhen (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayWhen (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Locked (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Locked (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_MultiSelect (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_MultiSelect (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_TabStop (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_TabStop (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabIndex (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TabIndex (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_HideDuplicates (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_HideDuplicates (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_SpecialEffect (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_SpecialEffect (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_OldBorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_OldBorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderWidth (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderWidth (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderLineStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderLineStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ForeColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_FontName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_FontName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_FontSize (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontSize (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FontWeight (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontWeight (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FontItalic (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FontItalic (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_FontUnderline (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FontUnderline (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TextFontCharSet (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_TextFontCharSet (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_FontBold (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontBold (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlTipText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlTipText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HelpContextId (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpContextId (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnWidth (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnWidth (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnOrder (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnOrder (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnHidden (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnHidden (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AutoLabel (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoLabel (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AddColon (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AddColon (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_LabelX (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelX (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LabelY (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelY (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LabelAlign (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelAlign (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Section (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ControlName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ListCount (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ListCount (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ListIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ListIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_IsVisible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IsVisible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_InSelection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InSelection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeUpdate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeUpdate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterUpdate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterUpdate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExit (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExit (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMove (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMove (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPress (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPress (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ReadingOrder (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ReadingOrder (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ScrollBarAlign (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ScrollBarAlign (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_TextAlign (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_TextAlign (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_NumeralShapes (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_NumeralShapes (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_IMEMode (
        /*[out,retval]*/ enum AcImeMode * pRet ) = 0;
      virtual HRESULT __stdcall put_IMEMode (
        /*[in]*/ enum AcImeMode pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall get_IMESentenceMode (
        /*[out,retval]*/ enum AcImeSentenceMode * pRet ) = 0;
      virtual HRESULT __stdcall put_IMESentenceMode (
        /*[in]*/ enum AcImeSentenceMode pRet ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall get_Recordset (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall putref_Recordset (
        /*[in]*/ IDispatch * pRet ) = 0;
      virtual HRESULT __stdcall AddItem (
        /*[in]*/ BSTR Item,
        /*[in]*/ VARIANT Index = vtMissing ) = 0;
      virtual HRESULT __stdcall RemoveItem (
        /*[in]*/ VARIANT Index ) = 0;
      virtual HRESULT __stdcall get_SmartTags (
        /*[out,retval]*/ struct _SmartTags * * ppRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_Layout (
        /*[out,retval]*/ enum AcLayoutType * pRet ) = 0;
      virtual HRESULT __stdcall get_LeftPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LeftPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_TopPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TopPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_RightPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_RightPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BottomPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_BottomPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HorizontalAnchor (
        /*[out,retval]*/ enum AcHorizontalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_HorizontalAnchor (
        /*[in]*/ enum AcHorizontalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_VerticalAnchor (
        /*[out,retval]*/ enum AcVerticalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_VerticalAnchor (
        /*[in]*/ enum AcVerticalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnterMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnterMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExitMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExitMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMoveMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMoveMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPressMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPressMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AllowValueListEdits (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowValueListEdits (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_ListItemsEditForm (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ListItemsEditForm (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_InheritValueList (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InheritValueList (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_LayoutID (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_ShowOnlyRowSourceValues (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ShowOnlyRowSourceValues (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_BackThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BackTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BackShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ForeThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ForeTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ForeShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ThemeFontIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ThemeFontIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineShade (
        /*[in]*/ float pRet ) = 0;
};

struct __declspec(uuid("3b06e95e-e47c-11cd-8701-00aa003f0f07"))
_ObjectFrame : Office::IMsoAccessible
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_OldValue (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Object (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_ObjectVerbs (
        /*[in]*/ long Index,
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall SizeToFit ( ) = 0;
      virtual HRESULT __stdcall Requery ( ) = 0;
      virtual HRESULT __stdcall Goto ( ) = 0;
      virtual HRESULT __stdcall SetFocus ( ) = 0;
      virtual HRESULT __stdcall get_Controls (
        /*[out,retval]*/ struct Children * * pRet ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_EventProcPrefix (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_EventProcPrefix (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_SizeMode (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_SizeMode (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_OLEClass (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OLEClass (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Item (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_RowSourceType (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_RowSourceType (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_RowSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_RowSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_LinkChildFields (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_LinkChildFields (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_LinkMasterFields (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_LinkMasterFields (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AutoActivate (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoActivate (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayType (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayType (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_UpdateOptions (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_UpdateOptions (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Verb (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Verb (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_OLEType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_OLEType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_OLETypeAllowed (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_OLETypeAllowed (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_SourceObject (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_SourceObject (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Class (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_SourceDoc (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_SourceDoc (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_SourceItem (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_SourceItem (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnCount (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnCount (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnHeads (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnHeads (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayWhen (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayWhen (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_OleData (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_OleData (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_UpdateMethod (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_UpdateMethod (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Locked (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Locked (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_StatusBarText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_StatusBarText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_TabStop (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_TabStop (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabIndex (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TabIndex (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BackStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BackStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_SpecialEffect (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_SpecialEffect (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_OldBorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_OldBorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderWidth (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderWidth (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderLineStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderLineStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlTipText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlTipText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HelpContextId (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpContextId (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Data (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Data (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Section (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ControlName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ObjectPalette (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_ObjectPalette (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_LpOleObject (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_LpOleObject (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ObjectVerbsCount (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ObjectVerbsCount (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Action (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Action (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Scaling (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_Scaling (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_IsVisible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IsVisible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_InSelection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InSelection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OnUpdated (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnUpdated (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExit (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExit (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMove (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMove (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnterMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnterMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExitMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExitMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMoveMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMoveMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Layout (
        /*[out,retval]*/ enum AcLayoutType * pRet ) = 0;
      virtual HRESULT __stdcall get_LeftPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LeftPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_TopPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TopPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_RightPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_RightPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BottomPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_BottomPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HorizontalAnchor (
        /*[out,retval]*/ enum AcHorizontalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_HorizontalAnchor (
        /*[in]*/ enum AcHorizontalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_VerticalAnchor (
        /*[out,retval]*/ enum AcVerticalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_VerticalAnchor (
        /*[in]*/ enum AcVerticalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_LayoutID (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_BackThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BackTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BackShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_VarOleObject (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_VarOleObject (
        /*[in]*/ VARIANT pRet ) = 0;
};

struct __declspec(uuid("3b06e962-e47c-11cd-8701-00aa003f0f07"))
_ToggleButton : Office::IMsoAccessible
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall Undo ( ) = 0;
      virtual HRESULT __stdcall get_OldValue (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall SizeToFit ( ) = 0;
      virtual HRESULT __stdcall Requery ( ) = 0;
      virtual HRESULT __stdcall Goto ( ) = 0;
      virtual HRESULT __stdcall SetFocus ( ) = 0;
      virtual HRESULT __stdcall get_Controls (
        /*[out,retval]*/ struct Children * * pRet ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_EventProcPrefix (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_EventProcPrefix (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ControlSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Caption (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Caption (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Picture (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Picture (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PictureType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PictureData (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureData (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_OptionValue (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_OptionValue (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_DefaultValue (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_DefaultValue (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ValidationRule (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ValidationRule (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ValidationText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ValidationText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_StatusBarText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_StatusBarText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayWhen (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayWhen (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Locked (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Locked (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TripleState (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_TripleState (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabStop (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_TabStop (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabIndex (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TabIndex (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_HideDuplicates (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_HideDuplicates (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ForeColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_FontName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_FontName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_FontSize (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontSize (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FontWeight (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontWeight (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FontItalic (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FontItalic (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_FontUnderline (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FontUnderline (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TextFontCharSet (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_TextFontCharSet (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_FontBold (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontBold (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlTipText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlTipText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HelpContextId (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpContextId (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnWidth (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnWidth (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnOrder (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnOrder (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnHidden (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnHidden (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AutoLabel (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoLabel (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AddColon (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AddColon (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_LabelX (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelX (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LabelY (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelY (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LabelAlign (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelAlign (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Section (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ControlName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ObjectPalette (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_ObjectPalette (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_IsVisible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IsVisible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_InSelection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InSelection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeUpdate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeUpdate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterUpdate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterUpdate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExit (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExit (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMove (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMove (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPress (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPress (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ReadingOrder (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ReadingOrder (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnterMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnterMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExitMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExitMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMoveMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMoveMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPressMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPressMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Layout (
        /*[out,retval]*/ enum AcLayoutType * pRet ) = 0;
      virtual HRESULT __stdcall get_LeftPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LeftPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_TopPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TopPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_RightPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_RightPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BottomPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_BottomPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HorizontalAnchor (
        /*[out,retval]*/ enum AcHorizontalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_HorizontalAnchor (
        /*[in]*/ enum AcHorizontalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_VerticalAnchor (
        /*[out,retval]*/ enum AcVerticalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_VerticalAnchor (
        /*[in]*/ enum AcVerticalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_LayoutID (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_ForeThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ForeTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ForeShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ThemeFontIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ThemeFontIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BackThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BackTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BackShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderWidth (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderWidth (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_HoverColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HoverThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HoverTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_HoverShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_HoverForeColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverForeColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HoverForeThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverForeThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HoverForeTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverForeTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_HoverForeShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverForeShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_PressedColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PressedThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PressedTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_PressedShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_PressedForeColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedForeColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PressedForeThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedForeThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PressedForeTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedForeTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_PressedForeShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedForeShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_UseTheme (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_UseTheme (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Shape (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Shape (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Bevel (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Bevel (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Glow (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Glow (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Shadow (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Shadow (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_SoftEdges (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_SoftEdges (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_QuickStyle (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_QuickStyle (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_QuickStyleMask (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_QuickStyleMask (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Gradient (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Gradient (
        /*[in]*/ long pRet ) = 0;
};

struct __declspec(uuid("3b06e964-e47c-11cd-8701-00aa003f0f07"))
_SubForm : Office::IMsoAccessible
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Form (
        /*[out,retval]*/ struct _Form3 * * pRet ) = 0;
      virtual HRESULT __stdcall get_Report (
        /*[out,retval]*/ struct _Report3 * * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall SizeToFit ( ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall Goto ( ) = 0;
      virtual HRESULT __stdcall SetFocus ( ) = 0;
      virtual HRESULT __stdcall Requery ( ) = 0;
      virtual HRESULT __stdcall get_Controls (
        /*[out,retval]*/ struct Controls * * pRet ) = 0;
      virtual HRESULT __stdcall get_EventProcPrefix (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_EventProcPrefix (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_SourceObject (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_SourceObject (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_LinkChildFields (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_LinkChildFields (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_LinkMasterFields (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_LinkMasterFields (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_StatusBarText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_StatusBarText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayWhen (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayWhen (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Locked (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Locked (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabStop (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_TabStop (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabIndex (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TabIndex (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_CanGrow (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_CanGrow (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_CanShrink (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_CanShrink (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_SpecialEffect (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_SpecialEffect (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_OldBorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_OldBorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderWidth (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderWidth (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderLineStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderLineStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_AutoLabel (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoLabel (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AddColon (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AddColon (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_LabelX (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelX (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LabelY (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelY (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LabelAlign (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelAlign (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Section (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ControlName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_IsVisible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IsVisible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_InSelection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InSelection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExit (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExit (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnterMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnterMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExitMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExitMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Layout (
        /*[out,retval]*/ enum AcLayoutType * pRet ) = 0;
      virtual HRESULT __stdcall get_LeftPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LeftPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_TopPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TopPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_RightPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_RightPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BottomPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_BottomPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HorizontalAnchor (
        /*[out,retval]*/ enum AcHorizontalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_HorizontalAnchor (
        /*[in]*/ enum AcHorizontalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_VerticalAnchor (
        /*[out,retval]*/ enum AcVerticalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_VerticalAnchor (
        /*[in]*/ enum AcVerticalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_FilterOnEmptyMaster (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FilterOnEmptyMaster (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_LayoutID (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_BorderThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineShade (
        /*[in]*/ float pRet ) = 0;
};

struct __declspec(uuid("3b06e968-e47c-11cd-8701-00aa003f0f07"))
_CustomControl : Office::IMsoAccessible
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_OldValue (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Object (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_ObjectVerbs (
        /*[in]*/ long Index,
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall SizeToFit ( ) = 0;
      virtual HRESULT __stdcall Requery ( ) = 0;
      virtual HRESULT __stdcall Goto ( ) = 0;
      virtual HRESULT __stdcall SetFocus ( ) = 0;
      virtual HRESULT __stdcall get_Controls (
        /*[out,retval]*/ struct Children * * pRet ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_EventProcPrefix (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_EventProcPrefix (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ControlSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OLEClass (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OLEClass (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Verb (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Verb (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Class (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Class (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayWhen (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayWhen (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Locked (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Locked (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OleData (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_OleData (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_TabStop (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_TabStop (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabIndex (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TabIndex (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_SpecialEffect (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_SpecialEffect (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_OldBorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_OldBorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderWidth (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderWidth (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderLineStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderLineStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ControlTipText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlTipText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HelpContextId (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpContextId (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Section (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ControlName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ObjectPalette (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_ObjectPalette (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_LpOleObject (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_LpOleObject (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ObjectVerbsCount (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ObjectVerbsCount (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_IsVisible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IsVisible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_InSelection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InSelection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OnUpdated (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnUpdated (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExit (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExit (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Default (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Default (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Cancel (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Cancel (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Custom (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Custom (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_About (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_About (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_OnUpdatedMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnUpdatedMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnterMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnterMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExitMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExitMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BorderThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_Layout (
        /*[out,retval]*/ enum AcLayoutType * pRet ) = 0;
      virtual HRESULT __stdcall get_LeftPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LeftPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_TopPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TopPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_RightPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_RightPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BottomPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_BottomPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HorizontalAnchor (
        /*[out,retval]*/ enum AcHorizontalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_HorizontalAnchor (
        /*[in]*/ enum AcHorizontalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_VerticalAnchor (
        /*[out,retval]*/ enum AcVerticalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_VerticalAnchor (
        /*[in]*/ enum AcVerticalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_LayoutID (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_VarOleObject (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_VarOleObject (
        /*[in]*/ VARIANT pRet ) = 0;
};

struct __declspec(uuid("3b06e971-e47c-11cd-8701-00aa003f0f07"))
_TabControl : Office::IMsoAccessible
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_OldValue (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall SizeToFit ( ) = 0;
      virtual HRESULT __stdcall get_Pages (
        /*[out,retval]*/ struct Pages * * pRet ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_EventProcPrefix (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_EventProcPrefix (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_StatusBarText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_StatusBarText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayWhen (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayWhen (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabStop (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_TabStop (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabIndex (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TabIndex (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BackStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BackStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_MultiRow (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_MultiRow (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Style (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_Style (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_TabFixedHeight (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TabFixedHeight (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_TabFixedWidth (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TabFixedWidth (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FontName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_FontName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_FontSize (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontSize (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FontWeight (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontWeight (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FontItalic (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FontItalic (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_FontUnderline (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FontUnderline (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TextFontCharSet (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_TextFontCharSet (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_FontBold (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontBold (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HelpContextId (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpContextId (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Section (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ControlName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_IsVisible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IsVisible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_InSelection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InSelection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OnChange (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnChange (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMove (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMove (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPress (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPress (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_OnChangeMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnChangeMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMoveMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMoveMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPressMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPressMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HorizontalAnchor (
        /*[out,retval]*/ enum AcHorizontalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_HorizontalAnchor (
        /*[in]*/ enum AcHorizontalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_VerticalAnchor (
        /*[out,retval]*/ enum AcVerticalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_VerticalAnchor (
        /*[in]*/ enum AcVerticalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_Layout (
        /*[out,retval]*/ enum AcLayoutType * pRet ) = 0;
      virtual HRESULT __stdcall get_LeftPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LeftPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_TopPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TopPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_RightPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_RightPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BottomPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_BottomPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_LayoutID (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_ThemeFontIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ThemeFontIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BackThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BackTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BackShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_HoverColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HoverThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HoverTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_HoverShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_HoverForeColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverForeColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HoverForeThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverForeThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HoverForeTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverForeTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_HoverForeShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverForeShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_PressedColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PressedThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PressedTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_PressedShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_PressedForeColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedForeColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PressedForeThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedForeThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PressedForeTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedForeTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_PressedForeShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedForeShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_UseTheme (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_UseTheme (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Shape (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Shape (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ForeColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ForeThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ForeTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ForeShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_Gradient (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Gradient (
        /*[in]*/ long pRet ) = 0;
};

struct __declspec(uuid("22585ba1-7bd1-40af-8095-e688176cdeb0"))
_MacroError : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Condition (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall get_ActionName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall get_Arguments (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall get_Description (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall get_Number (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_MacroName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("3f1b1773-65cb-4db9-9fc6-aced47db285a"))
MacroError;
    // [ default ] interface _MacroError

enum __declspec(uuid("d2800863-7c0a-3535-942a-82678348cdd1"))
AcDisplayAs
{
    acDisplayAsImageIcon = 0,
    acDisplayAsIcon = 1,
    acDisplayAsPaperclip = 2
};

struct __declspec(uuid("3b06e980-e47c-11cd-8701-00aa003f0f07"))
_Attachment : Office::IMsoAccessible
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_OldValue (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall SizeToFit ( ) = 0;
      virtual HRESULT __stdcall Requery ( ) = 0;
      virtual HRESULT __stdcall Goto ( ) = 0;
      virtual HRESULT __stdcall SetFocus ( ) = 0;
      virtual HRESULT __stdcall get_Controls (
        /*[out,retval]*/ struct Children * * pRet ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Hyperlink (
        /*[out,retval]*/ struct _Hyperlink * * ppRet ) = 0;
      virtual HRESULT __stdcall get_EventProcPrefix (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_EventProcPrefix (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PictureSizeMode (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureSizeMode (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PictureAlignment (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureAlignment (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PictureTiling (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureTiling (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayWhen (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayWhen (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BackStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BackStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_SpecialEffect (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_SpecialEffect (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_OldBorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_OldBorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderWidth (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderWidth (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderLineStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderLineStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ControlTipText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlTipText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HelpContextId (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpContextId (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Section (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ControlName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_IsVisible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IsVisible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeUpdate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeUpdate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterUpdate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterUpdate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExit (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExit (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDirty (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDirty (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnChange (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnChange (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMove (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMove (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPress (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPress (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnAttachmentCurrent (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnAttachmentCurrent (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnterMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnterMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExitMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExitMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDirtyMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDirtyMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnChangeMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnChangeMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMoveMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMoveMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPressMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPressMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnAttachmentCurrentMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnAttachmentCurrentMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_InSelection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InSelection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall get_DisplayAs (
        /*[out,retval]*/ enum AcDisplayAs * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayAs (
        /*[in]*/ enum AcDisplayAs pRet ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall Forward ( ) = 0;
      virtual HRESULT __stdcall Back ( ) = 0;
      virtual HRESULT __stdcall get_AttachmentCount (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentAttachment (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_CurrentAttachment (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_FileName (
        /*[in]*/ VARIANT var,
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall get_FileType (
        /*[in]*/ VARIANT var,
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall get_FileURL (
        /*[in]*/ VARIANT var,
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_HorizontalAnchor (
        /*[out,retval]*/ enum AcHorizontalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_HorizontalAnchor (
        /*[in]*/ enum AcHorizontalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_VerticalAnchor (
        /*[out,retval]*/ enum AcVerticalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_VerticalAnchor (
        /*[in]*/ enum AcVerticalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_Layout (
        /*[out,retval]*/ enum AcLayoutType * pRet ) = 0;
      virtual HRESULT __stdcall get_LeftPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LeftPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_TopPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TopPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_RightPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_RightPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BottomPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_BottomPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_DefaultPicture (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_DefaultPicture (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_LayoutID (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_AutoLabel (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoLabel (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AddColon (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AddColon (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_LabelX (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelX (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LabelY (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelY (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LabelAlign (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelAlign (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnWidth (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnWidth (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnOrder (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnOrder (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnHidden (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnHidden (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_ControlSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_StatusBarText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_StatusBarText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_TabStop (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_TabStop (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabIndex (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TabIndex (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Locked (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Locked (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_FileData (
        /*[in]*/ VARIANT var,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_PictureDisp (
        /*[in]*/ VARIANT var,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_BackThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BackTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BackShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_DefaultPictureType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DefaultPictureType (
        /*[in]*/ unsigned char pRet ) = 0;
};

enum __declspec(uuid("e5335569-7ce9-3a68-9840-e97d7a0eac85"))
AcExportQuality
{
    acExportQualityPrint = 0,
    acExportQualityScreen = 1
};

enum __declspec(uuid("b13329e7-dec8-37f3-b8ed-135b015213ae"))
AcDefReportView
{
    acDefViewPreview = 0,
    acDefViewReportBrowse = 1
};

enum __declspec(uuid("c0c85ad1-e8fd-3160-8f8a-023567fc8f62"))
AcSharePointListTransferType
{
    acImportSharePointList = 0,
    acLinkSharePointList = 1
};

struct __declspec(uuid("fb74f43a-9732-4552-b1c2-269abf082492"))
_TempVar : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get__Value (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put__Value (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * bstrName ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("12dce806-ea8a-46aa-88df-c4486edb78e3"))
TempVar;
    // [ default ] interface _TempVar

struct __declspec(uuid("9e3f602f-ba36-4865-b3cd-f2eb008f62de"))
_TempVars : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _TempVar * * ppTempVar ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ BSTR Name,
        /*[in]*/ VARIANT Value ) = 0;
      virtual HRESULT __stdcall Remove (
        /*[in]*/ VARIANT var ) = 0;
      virtual HRESULT __stdcall RemoveAll ( ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("6d40d9de-2821-44a8-baf3-8011e362cf59"))
TempVars;
    // [ default ] interface _TempVars

enum __declspec(uuid("b4ed5791-7c3d-3153-bb79-b40038ba385d"))
AcProperty
{
    acPropertyEnabled = 0,
    acPropertyVisible = 1,
    acPropertyLocked = 2,
    acPropertyLeft = 3,
    acPropertyTop = 4,
    acPropertyWidth = 5,
    acPropertyHeight = 6,
    acPropertyForeColor = 7,
    acPropertyBackColor = 8,
    acPropertyCaption = 9,
    acPropertyValue = 10
};

enum __declspec(uuid("18180698-acf2-36ce-82e2-d46da465abfc"))
AcNewDatabaseFormat
{
    acNewDatabaseFormatUserDefault = 0,
    acNewDatabaseFormatAccess2000 = 9,
    acNewDatabaseFormatAccess2002 = 10,
    acNewDatabaseFormatAccess2007 = 12
};

enum __declspec(uuid("0fcf9fef-0ed4-30d3-b05d-af4c2c269734"))
AcCursorOnHover
{
    acCursorOnHoverDefault = 0,
    acCursorOnHoverHyperlinkHand = 1
};

struct __declspec(uuid("2e70526b-92d1-43cc-a57b-ed48bccc711d"))
DispCommandButtonEvents : IDispatch
{};

struct __declspec(uuid("2e70526c-92d1-43cc-a57b-ed48bccc711d"))
DispBoundObjectFrameEvents : IDispatch
{};

struct __declspec(uuid("2e70526d-92d1-43cc-a57b-ed48bccc711d"))
DispObjectFrameEvents : IDispatch
{};

struct __declspec(uuid("2e70526e-92d1-43cc-a57b-ed48bccc711d"))
DispCustomControlEvents : IDispatch
{};

struct __declspec(uuid("2e70526a-92d1-43cc-a57b-ed48bccc711d"))
DispCheckBoxEvents : IDispatch
{};

struct __declspec(uuid("2e705268-92d1-43cc-a57b-ed48bccc711d"))
DispOptionButtonEvents : IDispatch
{};

struct __declspec(uuid("2e705266-92d1-43cc-a57b-ed48bccc711d"))
DispToggleButtonEvents : IDispatch
{};

struct __declspec(uuid("2e705271-92d1-43cc-a57b-ed48bccc711d"))
DispRectangleEvents : IDispatch
{};

struct __declspec(uuid("2e705272-92d1-43cc-a57b-ed48bccc711d"))
DispImageEvents : IDispatch
{};

struct __declspec(uuid("2e705273-92d1-43cc-a57b-ed48bccc711d"))
DispListBoxEvents : IDispatch
{};

struct __declspec(uuid("2e705274-92d1-43cc-a57b-ed48bccc711d"))
DispOptionGroupEvents : IDispatch
{};

struct __declspec(uuid("2e705275-92d1-43cc-a57b-ed48bccc711d"))
DispTextBoxEvents : IDispatch
{};

struct __declspec(uuid("2e705276-92d1-43cc-a57b-ed48bccc711d"))
DispComboBoxEvents : IDispatch
{};

struct __declspec(uuid("2e705277-92d1-43cc-a57b-ed48bccc711d"))
DispSubFormEvents : IDispatch
{};

struct __declspec(uuid("2e705278-92d1-43cc-a57b-ed48bccc711d"))
DispSubReportEvents : IDispatch
{};

struct __declspec(uuid("2e705279-92d1-43cc-a57b-ed48bccc711d"))
DispLineEvents : IDispatch
{};

struct __declspec(uuid("2e70527a-92d1-43cc-a57b-ed48bccc711d"))
DispPageBreakEvents : IDispatch
{};

struct __declspec(uuid("2e70527b-92d1-43cc-a57b-ed48bccc711d"))
DispSectionEvents : IDispatch
{};

struct __declspec(uuid("2e70527c-92d1-43cc-a57b-ed48bccc711d"))
DispSectionInReportEvents : IDispatch
{};

struct __declspec(uuid("2e70527d-92d1-43cc-a57b-ed48bccc711d"))
_DispControlInReportEvents : IDispatch
{};

struct __declspec(uuid("2e70527e-92d1-43cc-a57b-ed48bccc711d"))
DispCustomControlInReportEvents : IDispatch
{};

struct __declspec(uuid("2e70527f-92d1-43cc-a57b-ed48bccc711d"))
DispPaletteButtonEvents : IDispatch
{};

struct __declspec(uuid("2e705280-92d1-43cc-a57b-ed48bccc711d"))
DispPageHdrFtrInReportEvents : IDispatch
{};

struct __declspec(uuid("2e705281-92d1-43cc-a57b-ed48bccc711d"))
DispTabControlEvents : IDispatch
{};

struct __declspec(uuid("2e705282-92d1-43cc-a57b-ed48bccc711d"))
DispPageEvents : IDispatch
{};

struct __declspec(uuid("3b06e982-e47c-11cd-8701-00aa003f0f07"))
DispLabelEvents : IDispatch
{};

enum __declspec(uuid("865926a1-4b99-36a6-9e97-9561690a903d"))
AcDisplayAsHyperlink
{
    acDisplayAsHyperlinkIfHyperlink = 0,
    acDisplayAsHyperlinkAlways = 1,
    acDisplayAsHyperlinkOnScreenOnly = 2
};

enum __declspec(uuid("b34edf9c-128f-36f5-b94d-7458afa78fbf"))
AcPictureCaptionArrangement
{
    acNoPictureCaption = 0,
    acGeneral = 1,
    acTop = 2,
    acBottom = 3,
    acLeft = 4,
    acRight = 5
};

struct __declspec(uuid("3b06e950-e47c-11cd-8701-00aa003f0f07"))
_CommandButton : Office::IMsoAccessible
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_OldValue (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall SizeToFit ( ) = 0;
      virtual HRESULT __stdcall Requery ( ) = 0;
      virtual HRESULT __stdcall Goto ( ) = 0;
      virtual HRESULT __stdcall SetFocus ( ) = 0;
      virtual HRESULT __stdcall get_Controls (
        /*[out,retval]*/ struct Children * * pRet ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Hyperlink (
        /*[out,retval]*/ struct _Hyperlink * * ppRet ) = 0;
      virtual HRESULT __stdcall get_EventProcPrefix (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_EventProcPrefix (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Caption (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Caption (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Picture (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Picture (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PictureType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PictureData (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureData (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_Transparent (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Transparent (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Default (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Default (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Cancel (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Cancel (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AutoRepeat (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoRepeat (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_StatusBarText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_StatusBarText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnPush (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnPush (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HyperlinkAddress (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_HyperlinkAddress (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HyperlinkSubAddress (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_HyperlinkSubAddress (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayWhen (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayWhen (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabStop (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_TabStop (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabIndex (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TabIndex (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ForeColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_FontName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_FontName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_FontSize (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontSize (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FontWeight (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontWeight (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FontItalic (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FontItalic (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_FontUnderline (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FontUnderline (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TextFontCharSet (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_TextFontCharSet (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_FontBold (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontBold (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlTipText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlTipText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HelpContextId (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpContextId (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_AutoLabel (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoLabel (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AddColon (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AddColon (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_LabelX (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelX (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LabelY (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelY (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LabelAlign (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelAlign (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Section (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ControlName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ObjectPalette (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_ObjectPalette (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_IsVisible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IsVisible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_InSelection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InSelection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExit (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExit (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMove (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMove (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPress (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPress (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ReadingOrder (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ReadingOrder (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnterMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnterMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExitMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExitMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMoveMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMoveMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPressMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPressMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Layout (
        /*[out,retval]*/ enum AcLayoutType * pRet ) = 0;
      virtual HRESULT __stdcall get_LeftPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LeftPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_TopPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TopPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_RightPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_RightPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BottomPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_BottomPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HorizontalAnchor (
        /*[out,retval]*/ enum AcHorizontalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_HorizontalAnchor (
        /*[in]*/ enum AcHorizontalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_VerticalAnchor (
        /*[out,retval]*/ enum AcVerticalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_VerticalAnchor (
        /*[in]*/ enum AcVerticalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_LayoutID (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_BackStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BackStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_CursorOnHover (
        /*[out,retval]*/ enum AcCursorOnHover * pRet ) = 0;
      virtual HRESULT __stdcall put_CursorOnHover (
        /*[in]*/ enum AcCursorOnHover pRet ) = 0;
      virtual HRESULT __stdcall get_PictureCaptionArrangement (
        /*[out,retval]*/ enum AcPictureCaptionArrangement * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureCaptionArrangement (
        /*[in]*/ enum AcPictureCaptionArrangement pRet ) = 0;
      virtual HRESULT __stdcall get_Alignment (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_Alignment (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Target (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Target (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ForeThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ForeTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ForeShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ThemeFontIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ThemeFontIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BackThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BackTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BackShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderWidth (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderWidth (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_HoverColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HoverThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HoverTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_HoverShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_HoverForeColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverForeColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HoverForeThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverForeThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HoverForeTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverForeTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_HoverForeShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverForeShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_PressedColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PressedThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PressedTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_PressedShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_PressedForeColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedForeColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PressedForeThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedForeThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PressedForeTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedForeTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_PressedForeShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedForeShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_UseTheme (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_UseTheme (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Shape (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Shape (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Bevel (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Bevel (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Glow (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Glow (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Shadow (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Shadow (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_SoftEdges (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_SoftEdges (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_QuickStyle (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_QuickStyle (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_QuickStyleMask (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_QuickStyleMask (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Gradient (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Gradient (
        /*[in]*/ long pRet ) = 0;
};

struct __declspec(uuid("2e705270-92d1-43cc-a57b-ed48bccc711d"))
DispChildLabelEvents : IDispatch
{};

struct __declspec(uuid("3b06e987-e47c-11cd-8701-00aa003f0f07"))
_EmptyCell : Office::IMsoAccessible
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall SizeToFit ( ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Hyperlink (
        /*[out,retval]*/ struct _Hyperlink * * ppRet ) = 0;
      virtual HRESULT __stdcall get_EventProcPrefix (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_EventProcPrefix (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayWhen (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayWhen (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BackStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BackStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_SpecialEffect (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_SpecialEffect (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_HelpContextId (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpContextId (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Section (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ControlName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_IsVisible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IsVisible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_InSelection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InSelection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_HorizontalAnchor (
        /*[out,retval]*/ enum AcHorizontalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_HorizontalAnchor (
        /*[in]*/ enum AcHorizontalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_VerticalAnchor (
        /*[out,retval]*/ enum AcVerticalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_VerticalAnchor (
        /*[in]*/ enum AcVerticalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_Layout (
        /*[out,retval]*/ enum AcLayoutType * pRet ) = 0;
      virtual HRESULT __stdcall get_LeftPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LeftPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_TopPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TopPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_RightPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_RightPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BottomPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_BottomPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_LayoutID (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_StatusBarText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_StatusBarText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BackThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BackTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BackShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineShade (
        /*[in]*/ float pRet ) = 0;
};

struct __declspec(uuid("3b06e988-e47c-11cd-8701-00aa003f0f07"))
DispEmptyCellEvents : IDispatch
{};

struct __declspec(uuid("3b06e986-e47c-11cd-8701-00aa003f0f07"))
EmptyCell;
    // [ default ] interface _EmptyCell
    // [ default, source ] dispinterface DispEmptyCellEvents

enum __declspec(uuid("7bbab27f-755d-380a-9ff3-a65fb4ae09a6"))
AcWebBrowserState
{
    acUnintialized = 0,
    acLoading = 1,
    acLoaded = 2,
    acInteractive = 3,
    acComplete = 3
};

enum __declspec(uuid("81f88b69-91c4-3176-aa64-b94401e0b01a"))
AcWebBrowserScrollBars
{
    acScrollAuto = 0,
    acScrollYes = 1,
    acScrollNo = 2
};

struct __declspec(uuid("b01d3066-84bb-44bd-b2f7-64a026bdfa8c"))
_WebBrowserControl : Office::IMsoAccessible
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall Undo ( ) = 0;
      virtual HRESULT __stdcall get_OldValue (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall SizeToFit ( ) = 0;
      virtual HRESULT __stdcall Requery ( ) = 0;
      virtual HRESULT __stdcall Goto ( ) = 0;
      virtual HRESULT __stdcall SetFocus ( ) = 0;
      virtual HRESULT __stdcall get_Controls (
        /*[out,retval]*/ struct Children * * pRet ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Hyperlink (
        /*[out,retval]*/ struct _Hyperlink * * ppRet ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_ControlSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayWhen (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayWhen (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_ReadyState (
        /*[out,retval]*/ enum AcWebBrowserState * pRet ) = 0;
      virtual HRESULT __stdcall get_Progress (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_ScrollBars (
        /*[out,retval]*/ enum AcWebBrowserScrollBars * pRet ) = 0;
      virtual HRESULT __stdcall put_ScrollBars (
        /*[in]*/ enum AcWebBrowserScrollBars pRet ) = 0;
      virtual HRESULT __stdcall get_ScrollTop (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ScrollTop (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ScrollLeft (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ScrollLeft (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Transform (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Transform (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_LocationURL (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall get_Object (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_SpecialEffect (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_SpecialEffect (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderWidth (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderWidth (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderLineStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderLineStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Section (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMove (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMove (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPress (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPress (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_Layout (
        /*[out,retval]*/ enum AcLayoutType * pRet ) = 0;
      virtual HRESULT __stdcall get_LeftPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LeftPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_TopPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TopPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_RightPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_RightPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BottomPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_BottomPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HorizontalAnchor (
        /*[out,retval]*/ enum AcHorizontalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_HorizontalAnchor (
        /*[in]*/ enum AcHorizontalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_VerticalAnchor (
        /*[out,retval]*/ enum AcVerticalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_VerticalAnchor (
        /*[in]*/ enum AcVerticalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_OnClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMoveMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMoveMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPressMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPressMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_LayoutID (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_OnBeforeNavigate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnBeforeNavigate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDocumentComplete (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDocumentComplete (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnNavigateError (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnNavigateError (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnProgressChange (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnProgressChange (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnUpdated (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnUpdated (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnBeforeNavigateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnBeforeNavigateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDocumentCompleteMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDocumentCompleteMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnNavigateErrorMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnNavigateErrorMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnProgressChangeMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnProgressChangeMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnUpdatedMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnUpdatedMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_TabStop (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_TabStop (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabIndex (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TabIndex (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_InSelection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InSelection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_ControlType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_StatusBarText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_StatusBarText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlTipText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlTipText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_EventProcPrefix (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_EventProcPrefix (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HelpContextId (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpContextId (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
};

struct __declspec(uuid("eacb9075-68f8-4e3b-b865-e1ce6be0447c"))
DispWebBrowserControlEvents : IDispatch
{};

struct __declspec(uuid("d303ac37-74db-45b9-8c22-ad7c3fba68ef"))
WebBrowserControl;
    // [ default ] interface _WebBrowserControl
    // [ default, source ] dispinterface DispWebBrowserControlEvents

enum __declspec(uuid("28711b1e-b55f-3665-8398-bcb0b37b90fc"))
AcNavPaneCategory
{
    acNilCategory = 0,
    acObjectTypeCategory = 1,
    acTablesAndViewsCategory = 2,
    acModifiedDateCategory = 3,
    acCreatedDateCategory = 4,
    acCustomCategory = 5
};

enum __declspec(uuid("8753fffb-44c0-30d1-932a-2f459cd88003"))
AcNavPaneSort
{
    acNilSort = 0,
    acObjectTypeSort = 1,
    acModifiedDateSort = 2,
    acCreatedDateSort = 3,
    acManualSort = 4
};

enum __declspec(uuid("fed7b416-d677-3770-92b7-f3ff873e45f7"))
AcNavPaneView
{
    acNilView = 0,
    acListView = 1,
    acIconView = 2,
    acDetailView = 3
};

struct __declspec(uuid("0f0c6a9f-bb58-439c-b254-69a83afa91d5"))
NavigationPane;
    // [ default ] interface _NavigationPane

struct __declspec(uuid("79e137a6-5446-46f5-869d-6a5a004fea40"))
NavigationPaneCategory;
    // [ default ] interface _NavigationPaneCategory

struct __declspec(uuid("82fe1ae7-269f-46df-945a-4dc7d29ae705"))
NavigationPaneCategories;
    // [ default ] interface _NavigationPaneCategories

struct __declspec(uuid("7f0be2d6-106b-4500-b23f-39f47f97fde5"))
NavigationPaneGroup;
    // [ default ] interface _NavigationPaneGroup

struct __declspec(uuid("924aa51d-2ff2-4370-b6aa-2a504767b5fd"))
NavigationPaneGroups;
    // [ default ] interface _NavigationPaneGroups

struct __declspec(uuid("4f854426-a663-42f5-9ea9-bd17951b1f41"))
NavigationPaneShortcut;
    // [ default ] interface _NavigationPaneShortcut

struct __declspec(uuid("7a3ad6b5-4891-4cf3-b99b-dd10e6f251eb"))
NavigationPaneShortcuts;
    // [ default ] interface _NavigationPaneShortcuts

enum __declspec(uuid("69ae78a2-1eb9-33b0-ba74-3ae561cb30b6"))
AcFormatBarLimits
{
    acAutomatic = 0,
    acNumber = 1,
    acPercent = 2
};

struct __declspec(uuid("e27a992c-a330-11d0-81dd-00c04fc2f51b"))
_FormatCondition : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_ForeColor (
        /*[out,retval]*/ long * plResult ) = 0;
      virtual HRESULT __stdcall put_ForeColor (
        /*[in]*/ long plResult ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ long * plResult ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ long plResult ) = 0;
      virtual HRESULT __stdcall get_FontBold (
        /*[out,retval]*/ VARIANT_BOOL * pfResult ) = 0;
      virtual HRESULT __stdcall put_FontBold (
        /*[in]*/ VARIANT_BOOL pfResult ) = 0;
      virtual HRESULT __stdcall get_FontItalic (
        /*[out,retval]*/ VARIANT_BOOL * pfResult ) = 0;
      virtual HRESULT __stdcall put_FontItalic (
        /*[in]*/ VARIANT_BOOL pfResult ) = 0;
      virtual HRESULT __stdcall get_FontUnderline (
        /*[out,retval]*/ VARIANT_BOOL * pfResult ) = 0;
      virtual HRESULT __stdcall put_FontUnderline (
        /*[in]*/ VARIANT_BOOL pfResult ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * pfResult ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL pfResult ) = 0;
      virtual HRESULT __stdcall get_Type (
        /*[out,retval]*/ enum AcFormatConditionType * pacfctResult ) = 0;
      virtual HRESULT __stdcall get_Operator (
        /*[out,retval]*/ enum AcFormatConditionOperator * pacfcoResult ) = 0;
      virtual HRESULT __stdcall get_Expression1 (
        /*[out,retval]*/ BSTR * pbstrResult ) = 0;
      virtual HRESULT __stdcall get_Expression2 (
        /*[out,retval]*/ BSTR * pbstrResult ) = 0;
      virtual HRESULT __stdcall Modify (
        /*[in]*/ enum AcFormatConditionType Type,
        /*[in]*/ enum AcFormatConditionOperator Operator,
        /*[in]*/ VARIANT Expression1 = vtMissing,
        /*[in]*/ VARIANT Expression2 = vtMissing ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_ShortestBarLimit (
        /*[out,retval]*/ enum AcFormatBarLimits * pacfctResult ) = 0;
      virtual HRESULT __stdcall put_ShortestBarLimit (
        /*[in]*/ enum AcFormatBarLimits pacfctResult ) = 0;
      virtual HRESULT __stdcall get_ShortestBarValue (
        /*[out,retval]*/ BSTR * pbstrResult ) = 0;
      virtual HRESULT __stdcall put_ShortestBarValue (
        /*[in]*/ VARIANT pbstrResult ) = 0;
      virtual HRESULT __stdcall get_LongestBarLimit (
        /*[out,retval]*/ enum AcFormatBarLimits * pacfctResult ) = 0;
      virtual HRESULT __stdcall put_LongestBarLimit (
        /*[in]*/ enum AcFormatBarLimits pacfctResult ) = 0;
      virtual HRESULT __stdcall get_LongestBarValue (
        /*[out,retval]*/ BSTR * pbstrResult ) = 0;
      virtual HRESULT __stdcall put_LongestBarValue (
        /*[in]*/ VARIANT pbstrResult ) = 0;
      virtual HRESULT __stdcall get_ShowBarOnly (
        /*[out,retval]*/ VARIANT_BOOL * pbstrResult ) = 0;
      virtual HRESULT __stdcall put_ShowBarOnly (
        /*[in]*/ VARIANT_BOOL pbstrResult ) = 0;
};

struct __declspec(uuid("e27a992e-a330-11d0-81dd-00c04fc2f51b"))
FormatConditions : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _FormatCondition * * pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ enum AcFormatConditionType Type,
        /*[in]*/ enum AcFormatConditionOperator Operator,
        /*[in]*/ VARIANT Expression1,
        /*[in]*/ VARIANT Expression2,
        /*[out,retval]*/ struct _FormatCondition * * pRet ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("3b06e946-e47c-11cd-8701-00aa003f0f07"))
_Textbox : Office::IMsoAccessible
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall Undo ( ) = 0;
      virtual HRESULT __stdcall get_OldValue (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall SizeToFit ( ) = 0;
      virtual HRESULT __stdcall Requery ( ) = 0;
      virtual HRESULT __stdcall Goto ( ) = 0;
      virtual HRESULT __stdcall SetFocus ( ) = 0;
      virtual HRESULT __stdcall get_Controls (
        /*[out,retval]*/ struct Children * * pRet ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Hyperlink (
        /*[out,retval]*/ struct _Hyperlink * * ppRet ) = 0;
      virtual HRESULT __stdcall get_FormatConditions (
        /*[out,retval]*/ struct FormatConditions * * ppRet ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_EventProcPrefix (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_EventProcPrefix (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ControlSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Format (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Format (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_DecimalPlaces (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DecimalPlaces (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_InputMask (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_InputMask (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_DefaultValue (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_DefaultValue (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_IMEHold (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IMEHold (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_FuriganaControl (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_FuriganaControl (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PostalAddress (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_PostalAddress (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ValidationRule (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ValidationRule (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ValidationText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ValidationText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_StatusBarText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_StatusBarText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_EnterKeyBehavior (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_EnterKeyBehavior (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AllowAutoCorrect (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowAutoCorrect (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayWhen (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayWhen (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Vertical (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Vertical (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_FELineBreak (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FELineBreak (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Locked (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Locked (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_FilterLookup (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_FilterLookup (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_AutoTab (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoTab (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabStop (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_TabStop (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabIndex (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TabIndex (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ScrollBars (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ScrollBars (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_HideDuplicates (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_HideDuplicates (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_CanGrow (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_CanGrow (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_CanShrink (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_CanShrink (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_RunningSum (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_RunningSum (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BackStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BackStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_SpecialEffect (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_SpecialEffect (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_OldBorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_OldBorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderWidth (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderWidth (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderLineStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderLineStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ForeColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_FontName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_FontName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_FontSize (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontSize (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FontWeight (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontWeight (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FontItalic (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FontItalic (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_FontUnderline (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FontUnderline (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TextFontCharSet (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_TextFontCharSet (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_TextAlign (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_TextAlign (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_FontBold (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontBold (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlTipText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlTipText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HelpContextId (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpContextId (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnWidth (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnWidth (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnOrder (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnOrder (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnHidden (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnHidden (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AutoLabel (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoLabel (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AddColon (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AddColon (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_LabelX (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelX (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LabelY (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelY (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LabelAlign (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelAlign (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Section (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ControlName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Text (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Text (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_SelText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_SelText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_SelStart (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_SelStart (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_SelLength (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_SelLength (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_TextAlignGeneral (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TextAlignGeneral (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Coltyp (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Coltyp (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_FormatPictureText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_FormatPictureText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_IsVisible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IsVisible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_InSelection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InSelection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeUpdate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeUpdate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterUpdate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterUpdate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnChange (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnChange (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExit (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExit (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMove (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMove (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPress (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPress (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ReadingOrder (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ReadingOrder (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_KeyboardLanguage (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_KeyboardLanguage (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_AllowedText (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowedText (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ScrollBarAlign (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ScrollBarAlign (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_NumeralShapes (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_NumeralShapes (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_IMEMode (
        /*[out,retval]*/ enum AcImeMode * pRet ) = 0;
      virtual HRESULT __stdcall put_IMEMode (
        /*[in]*/ enum AcImeMode pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall get_IMESentenceMode (
        /*[out,retval]*/ enum AcImeSentenceMode * pRet ) = 0;
      virtual HRESULT __stdcall put_IMESentenceMode (
        /*[in]*/ enum AcImeSentenceMode pRet ) = 0;
      virtual HRESULT __stdcall get_LeftMargin (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LeftMargin (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_TopMargin (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TopMargin (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LineSpacing (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LineSpacing (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_RightMargin (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_RightMargin (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BottomMargin (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_BottomMargin (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_IsHyperlink (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IsHyperlink (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall get_OnDirty (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDirty (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnUndo (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnUndo (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AsianLineBreak (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AsianLineBreak (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_SmartTags (
        /*[out,retval]*/ struct _SmartTags * * ppRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_Layout (
        /*[out,retval]*/ enum AcLayoutType * pRet ) = 0;
      virtual HRESULT __stdcall get_TextFormat (
        /*[out,retval]*/ enum AcTextFormat * pRet ) = 0;
      virtual HRESULT __stdcall put_TextFormat (
        /*[in]*/ enum AcTextFormat pRet ) = 0;
      virtual HRESULT __stdcall get_LeftPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LeftPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_TopPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TopPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_RightPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_RightPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BottomPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_BottomPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HorizontalAnchor (
        /*[out,retval]*/ enum AcHorizontalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_HorizontalAnchor (
        /*[in]*/ enum AcHorizontalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_VerticalAnchor (
        /*[out,retval]*/ enum AcVerticalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_VerticalAnchor (
        /*[in]*/ enum AcVerticalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnChangeMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnChangeMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnterMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnterMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExitMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExitMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMoveMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMoveMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPressMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPressMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_LayoutID (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayAsHyperlink (
        /*[out,retval]*/ enum AcDisplayAsHyperlink * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayAsHyperlink (
        /*[in]*/ enum AcDisplayAsHyperlink pRet ) = 0;
      virtual HRESULT __stdcall get_ShowDatePicker (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ShowDatePicker (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Target (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Target (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BackThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BackTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BackShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ForeThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ForeTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ForeShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ThemeFontIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ThemeFontIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineShade (
        /*[in]*/ float pRet ) = 0;
};

struct __declspec(uuid("3b06e95c-e47c-11cd-8701-00aa003f0f07"))
_Combobox : Office::IMsoAccessible
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall Undo ( ) = 0;
      virtual HRESULT __stdcall Dropdown ( ) = 0;
      virtual HRESULT __stdcall get_Column (
        /*[in]*/ long Index,
        /*[in]*/ VARIANT Row,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_OldValue (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_ItemData (
        /*[in]*/ long Index,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall SizeToFit ( ) = 0;
      virtual HRESULT __stdcall Requery ( ) = 0;
      virtual HRESULT __stdcall Goto ( ) = 0;
      virtual HRESULT __stdcall SetFocus ( ) = 0;
      virtual HRESULT __stdcall get_Controls (
        /*[out,retval]*/ struct Children * * pRet ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Hyperlink (
        /*[out,retval]*/ struct _Hyperlink * * ppRet ) = 0;
      virtual HRESULT __stdcall get_FormatConditions (
        /*[out,retval]*/ struct FormatConditions * * ppRet ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_EventProcPrefix (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_EventProcPrefix (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ControlSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Format (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Format (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_DecimalPlaces (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DecimalPlaces (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_InputMask (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_InputMask (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_RowSourceType (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_RowSourceType (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_RowSource (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_RowSource (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnCount (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnCount (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnHeads (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnHeads (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnWidths (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnWidths (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BoundColumn (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BoundColumn (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ListRows (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ListRows (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ListWidth (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ListWidth (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_StatusBarText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_StatusBarText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_LimitToList (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_LimitToList (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AutoExpand (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoExpand (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DefaultValue (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_DefaultValue (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_IMEHold (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IMEHold (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_ValidationRule (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ValidationRule (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ValidationText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ValidationText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayWhen (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayWhen (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Locked (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Locked (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AllowAutoCorrect (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowAutoCorrect (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabStop (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_TabStop (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabIndex (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TabIndex (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_HideDuplicates (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_HideDuplicates (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BackStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BackStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_SpecialEffect (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_SpecialEffect (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_OldBorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_OldBorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderWidth (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderWidth (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderLineStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderLineStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ForeColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_FontName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_FontName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_FontSize (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontSize (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FontWeight (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontWeight (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FontItalic (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FontItalic (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_FontUnderline (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FontUnderline (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TextFontCharSet (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_TextFontCharSet (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_TextAlign (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_TextAlign (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_FontBold (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontBold (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlTipText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlTipText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HelpContextId (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpContextId (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnWidth (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnWidth (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnOrder (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnOrder (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ColumnHidden (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ColumnHidden (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AutoLabel (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoLabel (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AddColon (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AddColon (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_LabelX (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelX (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LabelY (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelY (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LabelAlign (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelAlign (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Section (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ControlName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Text (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Text (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_SelText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_SelText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_SelStart (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_SelStart (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_SelLength (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_SelLength (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_TextAlignGeneral (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TextAlignGeneral (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FormatPictureText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_FormatPictureText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Coltyp (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Coltyp (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ListCount (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ListCount (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ListIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ListIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_IsVisible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IsVisible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_InSelection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InSelection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeUpdate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeUpdate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterUpdate (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterUpdate (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnChange (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnChange (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnNotInList (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnNotInList (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExit (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExit (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMove (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMove (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPress (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPress (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ReadingOrder (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ReadingOrder (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_KeyboardLanguage (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_KeyboardLanguage (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_AllowedText (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowedText (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ScrollBarAlign (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ScrollBarAlign (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_NumeralShapes (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_NumeralShapes (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_IMEMode (
        /*[out,retval]*/ enum AcImeMode * pRet ) = 0;
      virtual HRESULT __stdcall put_IMEMode (
        /*[in]*/ enum AcImeMode pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall get_IMESentenceMode (
        /*[out,retval]*/ enum AcImeSentenceMode * pRet ) = 0;
      virtual HRESULT __stdcall put_IMESentenceMode (
        /*[in]*/ enum AcImeSentenceMode pRet ) = 0;
      virtual HRESULT __stdcall get_IsHyperlink (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IsHyperlink (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall get_OnDirty (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDirty (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnUndo (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnUndo (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Recordset (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall putref_Recordset (
        /*[in]*/ IDispatch * pRet ) = 0;
      virtual HRESULT __stdcall AddItem (
        /*[in]*/ BSTR Item,
        /*[in]*/ VARIANT Index = vtMissing ) = 0;
      virtual HRESULT __stdcall RemoveItem (
        /*[in]*/ VARIANT Index ) = 0;
      virtual HRESULT __stdcall get_SmartTags (
        /*[out,retval]*/ struct _SmartTags * * ppRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_Layout (
        /*[out,retval]*/ enum AcLayoutType * pRet ) = 0;
      virtual HRESULT __stdcall get_LeftPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LeftPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_TopPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TopPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_RightPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_RightPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BottomPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_BottomPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Selected (
        /*[in]*/ long lRow,
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Selected (
        /*[in]*/ long lRow,
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ItemsSelected (
        /*[out,retval]*/ struct _ItemsSelected * * pRet ) = 0;
      virtual HRESULT __stdcall get_CanGrow (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_CanGrow (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_CanShrink (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_CanShrink (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_SeparatorCharacters (
        /*[out,retval]*/ enum AcSeparatorCharacters * pRet ) = 0;
      virtual HRESULT __stdcall put_SeparatorCharacters (
        /*[in]*/ enum AcSeparatorCharacters pRet ) = 0;
      virtual HRESULT __stdcall get_HorizontalAnchor (
        /*[out,retval]*/ enum AcHorizontalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_HorizontalAnchor (
        /*[in]*/ enum AcHorizontalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_VerticalAnchor (
        /*[out,retval]*/ enum AcVerticalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_VerticalAnchor (
        /*[in]*/ enum AcVerticalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnChangeMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnChangeMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnNotInListMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnNotInListMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnterMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnterMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExitMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExitMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMoveMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMoveMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPressMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPressMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AllowValueListEdits (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowValueListEdits (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_ListItemsEditForm (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ListItemsEditForm (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_InheritValueList (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InheritValueList (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_LeftMargin (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LeftMargin (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_TopMargin (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TopMargin (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_RightMargin (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_RightMargin (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BottomMargin (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_BottomMargin (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LayoutID (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_ShowOnlyRowSourceValues (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ShowOnlyRowSourceValues (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayAsHyperlink (
        /*[out,retval]*/ enum AcDisplayAsHyperlink * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayAsHyperlink (
        /*[in]*/ enum AcDisplayAsHyperlink pRet ) = 0;
      virtual HRESULT __stdcall get_Target (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Target (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BackThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BackTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BackShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ForeThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ForeTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ForeShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ThemeFontIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ThemeFontIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineShade (
        /*[in]*/ float pRet ) = 0;
};

struct __declspec(uuid("4a99c8db-1308-448b-9ee9-aa6a9ac050e7"))
WSParameter : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall get_Type (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("540fc6d0-9bca-4236-b6c0-e5598cb7a332"))
WSParameters : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct WSParameter * * pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("96efa5b6-f286-4590-96b5-f944707646a1"))
Operation : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall get_WSParameters (
        /*[out,retval]*/ struct WSParameters * * pRet ) = 0;
      virtual HRESULT __stdcall Execute (
        /*[in]*/ BSTR bstrParameters,
        /*[out,retval]*/ VARIANT * pVarResult ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("cb2df2b1-383d-4a3e-bba1-b0e6d1cc48ac"))
Operations : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct Operation * * pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("3d1e34bd-f23f-46d1-b80a-2ba8aca850a9"))
Entity : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall get_Operations (
        /*[out,retval]*/ struct Operations * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("4b0e334d-b734-458a-a041-b528d031d4e5"))
Entities : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct Entity * * pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("7a7b2b33-a93d-4e04-bfc7-6041aaa0046d"))
WebService : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall get_Entities (
        /*[out,retval]*/ struct Entities * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("371bf535-7914-4474-bae9-27281d431237"))
WebServices : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct WebService * * pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("3b06e996-e47c-11cd-8701-00aa003f0f07"))
DispNavigationButtonEvents : IDispatch
{};

struct __declspec(uuid("3b06e992-e47c-11cd-8701-00aa003f0f07"))
DispNavigationControlEvents : IDispatch
{};

struct __declspec(uuid("3b06e993-e47c-11cd-8701-00aa003f0f07"))
NavigationButton;
    // [ default ] interface _NavigationButton
    // [ default, source ] dispinterface DispNavigationButtonEvents

struct __declspec(uuid("3b06e994-e47c-11cd-8701-00aa003f0f07"))
_NavigationButton : Office::IMsoAccessible
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_OldValue (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall SizeToFit ( ) = 0;
      virtual HRESULT __stdcall Requery ( ) = 0;
      virtual HRESULT __stdcall Goto ( ) = 0;
      virtual HRESULT __stdcall SetFocus ( ) = 0;
      virtual HRESULT __stdcall get_Controls (
        /*[out,retval]*/ struct Children * * pRet ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Hyperlink (
        /*[out,retval]*/ struct _Hyperlink * * ppRet ) = 0;
      virtual HRESULT __stdcall get_EventProcPrefix (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_EventProcPrefix (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Caption (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Caption (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Picture (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Picture (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_PictureType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_PictureData (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureData (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_Transparent (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Transparent (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AutoRepeat (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoRepeat (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_StatusBarText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_StatusBarText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnPush (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnPush (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HyperlinkAddress (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_HyperlinkAddress (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HyperlinkSubAddress (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_HyperlinkSubAddress (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayWhen (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayWhen (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabStop (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_TabStop (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabIndex (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TabIndex (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ForeColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_FontName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_FontName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_FontSize (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontSize (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FontWeight (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontWeight (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_FontItalic (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FontItalic (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_FontUnderline (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_FontUnderline (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TextFontCharSet (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_TextFontCharSet (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_FontBold (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_FontBold (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlTipText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlTipText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HelpContextId (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpContextId (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_AutoLabel (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoLabel (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_AddColon (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AddColon (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_LabelX (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelX (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LabelY (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelY (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_LabelAlign (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_LabelAlign (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Section (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ControlName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ObjectPalette (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_ObjectPalette (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_IsVisible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IsVisible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_InSelection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InSelection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnter (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnter (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExit (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExit (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMove (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMove (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPress (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPress (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ReadingOrder (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ReadingOrder (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_BeforeUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_BeforeUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_AfterUpdateMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_AfterUpdateMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnEnterMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnEnterMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnExitMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnExitMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMoveMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMoveMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPressMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPressMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Layout (
        /*[out,retval]*/ enum AcLayoutType * pRet ) = 0;
      virtual HRESULT __stdcall get_LeftPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LeftPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_TopPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TopPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_RightPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_RightPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BottomPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_BottomPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HorizontalAnchor (
        /*[out,retval]*/ enum AcHorizontalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_HorizontalAnchor (
        /*[in]*/ enum AcHorizontalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_VerticalAnchor (
        /*[out,retval]*/ enum AcVerticalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_VerticalAnchor (
        /*[in]*/ enum AcVerticalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_LayoutID (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_BackStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BackStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_CursorOnHover (
        /*[out,retval]*/ enum AcCursorOnHover * pRet ) = 0;
      virtual HRESULT __stdcall put_CursorOnHover (
        /*[in]*/ enum AcCursorOnHover pRet ) = 0;
      virtual HRESULT __stdcall get_PictureCaptionArrangement (
        /*[out,retval]*/ enum AcPictureCaptionArrangement * pRet ) = 0;
      virtual HRESULT __stdcall put_PictureCaptionArrangement (
        /*[in]*/ enum AcPictureCaptionArrangement pRet ) = 0;
      virtual HRESULT __stdcall get_Alignment (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_Alignment (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Target (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Target (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ForeThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_ForeTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ForeShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_ForeShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_ThemeFontIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_ThemeFontIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_NavigationTargetName (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_NavigationTargetName (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall get_NavigationWhereClause (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_NavigationWhereClause (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall get_ParentTab (
        /*[out,retval]*/ struct _NavigationButton * * pRet ) = 0;
      virtual HRESULT __stdcall get_BackThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BackTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BackShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderWidth (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderWidth (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_HoverColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HoverThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HoverTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_HoverShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_HoverForeColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverForeColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HoverForeThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverForeThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HoverForeTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverForeTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_HoverForeShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_HoverForeShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_PressedColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PressedThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PressedTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_PressedShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_PressedForeColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedForeColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PressedForeThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedForeThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_PressedForeTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedForeTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_PressedForeShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_PressedForeShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_Shape (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Shape (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Bevel (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Bevel (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Glow (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Glow (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Shadow (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Shadow (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_SoftEdges (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_SoftEdges (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_QuickStyle (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_QuickStyle (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_QuickStyleMask (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_QuickStyleMask (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Gradient (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Gradient (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderColor (
        /*[in]*/ long pRet ) = 0;
};

struct __declspec(uuid("3b06e989-e47c-11cd-8701-00aa003f0f07"))
NavigationControl;
    // [ default ] interface _NavigationControl
    // [ default, source ] dispinterface DispNavigationControlEvents

struct __declspec(uuid("8357bb52-95a2-4043-a040-2825facef50d"))
_LocalVar : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get__Value (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put__Value (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * bstrName ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("8357bb51-95a2-4043-a040-2825facef50d"))
LocalVar;
    // [ default ] interface _LocalVar

struct __declspec(uuid("8357bb54-95a2-4043-a040-2825facef50d"))
_LocalVars : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _LocalVar * * ppTempVar ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ BSTR Name,
        /*[in]*/ VARIANT Value ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("8357bb53-95a2-4043-a040-2825facef50d"))
LocalVars;
    // [ default ] interface _LocalVars

enum __declspec(uuid("aed31f68-091e-3f96-9008-bcfa8c792887"))
AcBrowseToObjectType
{
    acBrowseToForm = 2,
    acBrowseToReport = 3
};

struct __declspec(uuid("c547e760-9658-101b-81ee-00aa004750e2"))
DoCmd : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall AddMenu (
        /*[in]*/ VARIANT MenuName,
        /*[in]*/ VARIANT MenuMacroName,
        /*[in]*/ VARIANT StatusBarText = vtMissing ) = 0;
      virtual HRESULT __stdcall ApplyFilterOld0 (
        /*[in]*/ VARIANT FilterName = vtMissing,
        /*[in]*/ VARIANT WhereCondition = vtMissing ) = 0;
      virtual HRESULT __stdcall Beep ( ) = 0;
      virtual HRESULT __stdcall CancelEvent ( ) = 0;
      virtual HRESULT __stdcall Close (
        /*[in]*/ enum AcObjectType ObjectType,
        /*[in]*/ VARIANT ObjectName,
        /*[in]*/ enum AcCloseSave Save ) = 0;
      virtual HRESULT __stdcall CopyObject (
        /*[in]*/ VARIANT DestinationDatabase,
        /*[in]*/ VARIANT NewName,
        /*[in]*/ enum AcObjectType SourceObjectType,
        /*[in]*/ VARIANT SourceObjectName = vtMissing ) = 0;
      virtual HRESULT __stdcall DoMenuItem (
        /*[in]*/ VARIANT MenuBar,
        /*[in]*/ VARIANT MenuName,
        /*[in]*/ VARIANT Command,
        /*[in]*/ VARIANT Subcommand = vtMissing,
        /*[in]*/ VARIANT Version = vtMissing ) = 0;
      virtual HRESULT __stdcall Echo (
        /*[in]*/ VARIANT EchoOn,
        /*[in]*/ VARIANT StatusBarText = vtMissing ) = 0;
      virtual HRESULT __stdcall FindNext ( ) = 0;
      virtual HRESULT __stdcall FindRecord (
        /*[in]*/ VARIANT FindWhat,
        /*[in]*/ enum AcFindMatch Match,
        /*[in]*/ VARIANT MatchCase,
        /*[in]*/ enum AcSearchDirection Search,
        /*[in]*/ VARIANT SearchAsFormatted,
        /*[in]*/ enum AcFindField OnlyCurrentField,
        /*[in]*/ VARIANT FindFirst = vtMissing ) = 0;
      virtual HRESULT __stdcall GoToControl (
        /*[in]*/ VARIANT ControlName ) = 0;
      virtual HRESULT __stdcall GoToPage (
        /*[in]*/ VARIANT PageNumber,
        /*[in]*/ VARIANT Right = vtMissing,
        /*[in]*/ VARIANT Down = vtMissing ) = 0;
      virtual HRESULT __stdcall GoToRecord (
        /*[in]*/ enum AcDataObjectType ObjectType,
        /*[in]*/ VARIANT ObjectName,
        /*[in]*/ enum AcRecord Record,
        /*[in]*/ VARIANT Offset = vtMissing ) = 0;
      virtual HRESULT __stdcall Hourglass (
        /*[in]*/ VARIANT HourglassOn ) = 0;
      virtual HRESULT __stdcall Maximize ( ) = 0;
      virtual HRESULT __stdcall Minimize ( ) = 0;
      virtual HRESULT __stdcall MoveSize (
        /*[in]*/ VARIANT Right = vtMissing,
        /*[in]*/ VARIANT Down = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall OpenForm (
        /*[in]*/ VARIANT FormName,
        /*[in]*/ enum AcFormView View,
        /*[in]*/ VARIANT FilterName,
        /*[in]*/ VARIANT WhereCondition,
        /*[in]*/ enum AcFormOpenDataMode DataMode,
        /*[in]*/ enum AcWindowMode WindowMode,
        /*[in]*/ VARIANT OpenArgs = vtMissing ) = 0;
      virtual HRESULT __stdcall OpenQuery (
        /*[in]*/ VARIANT QueryName,
        /*[in]*/ enum AcView View,
        /*[in]*/ enum AcOpenDataMode DataMode ) = 0;
      virtual HRESULT __stdcall OpenTable (
        /*[in]*/ VARIANT TableName,
        /*[in]*/ enum AcView View,
        /*[in]*/ enum AcOpenDataMode DataMode ) = 0;
      virtual HRESULT __stdcall PrintOut (
        /*[in]*/ enum AcPrintRange PrintRange,
        /*[in]*/ VARIANT PageFrom,
        /*[in]*/ VARIANT PageTo,
        /*[in]*/ enum AcPrintQuality PrintQuality,
        /*[in]*/ VARIANT Copies = vtMissing,
        /*[in]*/ VARIANT CollateCopies = vtMissing ) = 0;
      virtual HRESULT __stdcall Quit (
        /*[in]*/ enum AcQuitOption Options ) = 0;
      virtual HRESULT __stdcall Requery (
        /*[in]*/ VARIANT ControlName = vtMissing ) = 0;
      virtual HRESULT __stdcall RepaintObject (
        /*[in]*/ enum AcObjectType ObjectType,
        /*[in]*/ VARIANT ObjectName = vtMissing ) = 0;
      virtual HRESULT __stdcall Rename (
        /*[in]*/ VARIANT NewName,
        /*[in]*/ enum AcObjectType ObjectType,
        /*[in]*/ VARIANT OldName = vtMissing ) = 0;
      virtual HRESULT __stdcall Restore ( ) = 0;
      virtual HRESULT __stdcall RunMacro (
        /*[in]*/ VARIANT MacroName,
        /*[in]*/ VARIANT RepeatCount = vtMissing,
        /*[in]*/ VARIANT RepeatExpression = vtMissing ) = 0;
      virtual HRESULT __stdcall RunSQL (
        /*[in]*/ VARIANT SQLStatement,
        /*[in]*/ VARIANT UseTransaction = vtMissing ) = 0;
      virtual HRESULT __stdcall SelectObject (
        /*[in]*/ enum AcObjectType ObjectType,
        /*[in]*/ VARIANT ObjectName = vtMissing,
        /*[in]*/ VARIANT InDatabaseWindow = vtMissing ) = 0;
      virtual HRESULT __stdcall SetWarnings (
        /*[in]*/ VARIANT WarningsOn ) = 0;
      virtual HRESULT __stdcall ShowAllRecords ( ) = 0;
      virtual HRESULT __stdcall OpenReportOld0 (
        /*[in]*/ VARIANT ReportName,
        /*[in]*/ enum AcView View,
        /*[in]*/ VARIANT FilterName = vtMissing,
        /*[in]*/ VARIANT WhereCondition = vtMissing ) = 0;
      virtual HRESULT __stdcall TransferDatabase (
        /*[in]*/ enum AcDataTransferType TransferType,
        /*[in]*/ VARIANT DatabaseType,
        /*[in]*/ VARIANT DatabaseName,
        /*[in]*/ enum AcObjectType ObjectType,
        /*[in]*/ VARIANT Source = vtMissing,
        /*[in]*/ VARIANT Destination = vtMissing,
        /*[in]*/ VARIANT StructureOnly = vtMissing,
        /*[in]*/ VARIANT StoreLogin = vtMissing ) = 0;
      virtual HRESULT __stdcall TransferSpreadsheet (
        /*[in]*/ enum AcDataTransferType TransferType,
        /*[in]*/ enum AcSpreadSheetType SpreadsheetType,
        /*[in]*/ VARIANT TableName = vtMissing,
        /*[in]*/ VARIANT FileName = vtMissing,
        /*[in]*/ VARIANT HasFieldNames = vtMissing,
        /*[in]*/ VARIANT Range = vtMissing,
        /*[in]*/ VARIANT UseOA = vtMissing ) = 0;
      virtual HRESULT __stdcall TransferText (
        /*[in]*/ enum AcTextTransferType TransferType,
        /*[in]*/ VARIANT SpecificationName = vtMissing,
        /*[in]*/ VARIANT TableName = vtMissing,
        /*[in]*/ VARIANT FileName = vtMissing,
        /*[in]*/ VARIANT HasFieldNames = vtMissing,
        /*[in]*/ VARIANT HTMLTableName = vtMissing,
        /*[in]*/ VARIANT CodePage = vtMissing ) = 0;
      virtual HRESULT __stdcall OutputToOld0 (
        /*[in]*/ enum AcOutputObjectType ObjectType,
        /*[in]*/ VARIANT ObjectName = vtMissing,
        /*[in]*/ VARIANT OutputFormat = vtMissing,
        /*[in]*/ VARIANT OutputFile = vtMissing,
        /*[in]*/ VARIANT AutoStart = vtMissing,
        /*[in]*/ VARIANT TemplateFile = vtMissing ) = 0;
      virtual HRESULT __stdcall DeleteObject (
        /*[in]*/ enum AcObjectType ObjectType,
        /*[in]*/ VARIANT ObjectName = vtMissing ) = 0;
      virtual HRESULT __stdcall OpenModule (
        /*[in]*/ VARIANT ModuleName = vtMissing,
        /*[in]*/ VARIANT ProcedureName = vtMissing ) = 0;
      virtual HRESULT __stdcall SendObject (
        /*[in]*/ enum AcSendObjectType ObjectType,
        /*[in]*/ VARIANT ObjectName = vtMissing,
        /*[in]*/ VARIANT OutputFormat = vtMissing,
        /*[in]*/ VARIANT To = vtMissing,
        /*[in]*/ VARIANT Cc = vtMissing,
        /*[in]*/ VARIANT Bcc = vtMissing,
        /*[in]*/ VARIANT Subject = vtMissing,
        /*[in]*/ VARIANT MessageText = vtMissing,
        /*[in]*/ VARIANT EditMessage = vtMissing,
        /*[in]*/ VARIANT TemplateFile = vtMissing ) = 0;
      virtual HRESULT __stdcall ShowToolbar (
        /*[in]*/ VARIANT ToolbarName,
        /*[in]*/ enum AcShowToolbar Show ) = 0;
      virtual HRESULT __stdcall Save (
        /*[in]*/ enum AcObjectType ObjectType,
        /*[in]*/ VARIANT ObjectName = vtMissing ) = 0;
      virtual HRESULT __stdcall SetMenuItem (
        /*[in]*/ VARIANT MenuIndex,
        /*[in]*/ VARIANT CommandIndex = vtMissing,
        /*[in]*/ VARIANT SubcommandIndex = vtMissing,
        /*[in]*/ VARIANT Flag = vtMissing ) = 0;
      virtual HRESULT __stdcall RunCommand (
        /*[in]*/ enum AcCommand Command ) = 0;
      virtual HRESULT __stdcall OpenDataAccessPage (
        /*[in]*/ VARIANT DataAccessPageName,
        /*[in]*/ enum AcDataAccessPageView View ) = 0;
      virtual HRESULT __stdcall OpenView (
        /*[in]*/ VARIANT ViewName,
        /*[in]*/ enum AcView View,
        /*[in]*/ enum AcOpenDataMode DataMode ) = 0;
      virtual HRESULT __stdcall OpenDiagram (
        /*[in]*/ VARIANT DiagramName ) = 0;
      virtual HRESULT __stdcall OpenStoredProcedure (
        /*[in]*/ VARIANT ProcedureName,
        /*[in]*/ enum AcView View,
        /*[in]*/ enum AcOpenDataMode DataMode ) = 0;
      virtual HRESULT __stdcall OpenReport (
        /*[in]*/ VARIANT ReportName,
        /*[in]*/ enum AcView View,
        /*[in]*/ VARIANT FilterName,
        /*[in]*/ VARIANT WhereCondition,
        /*[in]*/ enum AcWindowMode WindowMode,
        /*[in]*/ VARIANT OpenArgs = vtMissing ) = 0;
      virtual HRESULT __stdcall OutputToOld1 (
        /*[in]*/ enum AcOutputObjectType ObjectType,
        /*[in]*/ VARIANT ObjectName = vtMissing,
        /*[in]*/ VARIANT OutputFormat = vtMissing,
        /*[in]*/ VARIANT OutputFile = vtMissing,
        /*[in]*/ VARIANT AutoStart = vtMissing,
        /*[in]*/ VARIANT TemplateFile = vtMissing,
        /*[in]*/ VARIANT Encoding = vtMissing ) = 0;
      virtual HRESULT __stdcall TransferSQLDatabase (
        /*[in]*/ VARIANT Server,
        /*[in]*/ VARIANT Database,
        /*[in]*/ VARIANT UseTrustedConnection = vtMissing,
        /*[in]*/ VARIANT Login = vtMissing,
        /*[in]*/ VARIANT Password = vtMissing,
        /*[in]*/ VARIANT TransferCopyData = vtMissing ) = 0;
      virtual HRESULT __stdcall CopyDatabaseFile (
        /*[in]*/ VARIANT DatabaseFileName,
        /*[in]*/ VARIANT OverwriteExistingFile = vtMissing,
        /*[in]*/ VARIANT DisconnectAllUsers = vtMissing ) = 0;
      virtual HRESULT __stdcall OpenFunction (
        /*[in]*/ VARIANT FunctionName,
        /*[in]*/ enum AcView View,
        /*[in]*/ enum AcOpenDataMode DataMode ) = 0;
      virtual HRESULT __stdcall ApplyFilter (
        /*[in]*/ VARIANT FilterName = vtMissing,
        /*[in]*/ VARIANT WhereCondition = vtMissing,
        /*[in]*/ VARIANT ControlName = vtMissing ) = 0;
      virtual HRESULT __stdcall OutputTo (
        /*[in]*/ enum AcOutputObjectType ObjectType,
        /*[in]*/ VARIANT ObjectName,
        /*[in]*/ VARIANT OutputFormat,
        /*[in]*/ VARIANT OutputFile,
        /*[in]*/ VARIANT AutoStart,
        /*[in]*/ VARIANT TemplateFile,
        /*[in]*/ VARIANT Encoding,
        /*[in]*/ enum AcExportQuality OutputQuality ) = 0;
      virtual HRESULT __stdcall TransferSharePointList (
        /*[in]*/ enum AcSharePointListTransferType TransferType,
        /*[in]*/ VARIANT SiteAddress,
        /*[in]*/ VARIANT ListID,
        /*[in]*/ VARIANT ViewID = vtMissing,
        /*[in]*/ VARIANT TableName = vtMissing,
        /*[in]*/ VARIANT GetLookupDisplayValues = vtMissing ) = 0;
      virtual HRESULT __stdcall CloseDatabase ( ) = 0;
      virtual HRESULT __stdcall NavigateTo (
        /*[in]*/ VARIANT Category = vtMissing,
        /*[in]*/ VARIANT Group = vtMissing ) = 0;
      virtual HRESULT __stdcall SearchForRecord (
        /*[in]*/ enum AcDataObjectType ObjectType,
        /*[in]*/ VARIANT ObjectName,
        /*[in]*/ enum AcRecord Record,
        /*[in]*/ VARIANT WhereCondition = vtMissing ) = 0;
      virtual HRESULT __stdcall SetProperty (
        /*[in]*/ VARIANT ControlName,
        /*[in]*/ enum AcProperty Property,
        /*[in]*/ VARIANT Value = vtMissing ) = 0;
      virtual HRESULT __stdcall SingleStep ( ) = 0;
      virtual HRESULT __stdcall ClearMacroError ( ) = 0;
      virtual HRESULT __stdcall SetDisplayedCategories (
        /*[in]*/ VARIANT Show,
        /*[in]*/ VARIANT Category = vtMissing ) = 0;
      virtual HRESULT __stdcall LockNavigationPane (
        /*[in]*/ VARIANT Lock ) = 0;
      virtual HRESULT __stdcall RunSavedImportExport (
        /*[in]*/ VARIANT SavedImportExportName ) = 0;
      virtual HRESULT __stdcall BrowseTo (
        /*[in]*/ enum AcBrowseToObjectType ObjectType,
        /*[in]*/ VARIANT ObjectName,
        /*[in]*/ VARIANT PathtoSubformControl,
        /*[in]*/ VARIANT WhereCondition,
        /*[in]*/ VARIANT Page,
        /*[in]*/ enum AcFormOpenDataMode DataMode ) = 0;
      virtual HRESULT __stdcall SetParameter (
        /*[in]*/ VARIANT Name,
        /*[in]*/ VARIANT Expression ) = 0;
      virtual HRESULT __stdcall RunDataMacro (
        /*[in]*/ VARIANT MacroName ) = 0;
      virtual HRESULT __stdcall SetOrderBy (
        /*[in]*/ VARIANT OrderBy,
        /*[in]*/ VARIANT ControlName = vtMissing ) = 0;
      virtual HRESULT __stdcall SetFilter (
        /*[in]*/ VARIANT FilterName = vtMissing,
        /*[in]*/ VARIANT WhereCondition = vtMissing,
        /*[in]*/ VARIANT ControlName = vtMissing ) = 0;
      virtual HRESULT __stdcall RefreshRecord ( ) = 0;
};

enum __declspec(uuid("0b19db0e-7719-435b-b4f6-38f2808ffbf6"))
AcWebUserDisplay
{
    acWebUserID = 0,
    acWebUserName = 1,
    acWebUserLoginName = 2,
    acWebUserEmail = 3
};

enum __declspec(uuid("90500b0f-827a-4f28-9730-d2b12239b96e"))
AcWebUserGroupsDisplay
{
    acWebUserGroupID = 0,
    acWebUserGroupName = 1
};

enum __declspec(uuid("9cecdbd1-28a9-4cc6-9fe9-fd71a2bedccb"))
AcResourceType
{
    acResourceTheme = 0,
    acResourceImage = 1
};

struct __declspec(uuid("4dcf0ac2-53cc-45e5-b417-01f3ddd387e5"))
SharedResource : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall get_Type (
        /*[out,retval]*/ enum AcResourceType * pResType ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("78b78575-c7b7-4179-824a-95adbf5423e7"))
SharedResources : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ long Index,
        /*[out,retval]*/ struct SharedResource * * pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("9212ba71-3e79-11d1-98bd-006008197d41"))
_CurrentProject : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_AllForms (
        /*[out,retval]*/ struct AllObjects * * pRet ) = 0;
      virtual HRESULT __stdcall get_AllReports (
        /*[out,retval]*/ struct AllObjects * * pRet ) = 0;
      virtual HRESULT __stdcall get_AllMacros (
        /*[out,retval]*/ struct AllObjects * * pRet ) = 0;
      virtual HRESULT __stdcall get_AllModules (
        /*[out,retval]*/ struct AllObjects * * pRet ) = 0;
      virtual HRESULT __stdcall get_AllDataAccessPages (
        /*[out,retval]*/ struct AllObjects * * pRet ) = 0;
      virtual HRESULT __stdcall get_ProjectType (
        /*[out,retval]*/ enum AcProjectType * pacProjType ) = 0;
      virtual HRESULT __stdcall get_BaseConnectionString (
        /*[out,retval]*/ BSTR * pbstrADOConnectString ) = 0;
      virtual HRESULT __stdcall get_IsConnected (
        /*[out,retval]*/ VARIANT_BOOL * pfConnected ) = 0;
      virtual HRESULT __stdcall OpenConnection (
        /*[in]*/ VARIANT BaseConnectionString = vtMissing,
        /*[in]*/ VARIANT UserID = vtMissing,
        /*[in]*/ VARIANT Password = vtMissing ) = 0;
      virtual HRESULT __stdcall CloseConnection ( ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall get_Path (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall get_FullName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall get_Connection (
        /*[out,retval]*/ struct ADODB::_Connection * * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct AccessObjectProperties * * pRet ) = 0;
      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_RemovePersonalInformation (
        /*[out,retval]*/ VARIANT_BOOL * pf ) = 0;
      virtual HRESULT __stdcall put_RemovePersonalInformation (
        /*[in]*/ VARIANT_BOOL pf ) = 0;
      virtual HRESULT __stdcall get_FileFormat (
        /*[out,retval]*/ enum AcFileFormat * pRet ) = 0;
      virtual HRESULT __stdcall get_AccessConnection (
        /*[out,retval]*/ struct ADODB::_Connection * * pRet ) = 0;
      virtual HRESULT __stdcall UpdateDependencyInfo ( ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_ImportExportSpecifications (
        /*[out,retval]*/ struct ImportExportSpecifications * * pRet ) = 0;
      virtual HRESULT __stdcall get_IsTrusted (
        /*[out,retval]*/ VARIANT_BOOL * pfTrusted ) = 0;
      virtual HRESULT __stdcall get_WebSite (
        /*[out,retval]*/ BSTR * pbstrWebSite ) = 0;
      virtual HRESULT __stdcall get_IsWeb (
        /*[out,retval]*/ VARIANT_BOOL * pfWebDb ) = 0;
      virtual HRESULT __stdcall get_Resources (
        /*[out,retval]*/ struct SharedResources * * pRet ) = 0;
      virtual HRESULT __stdcall AddSharedImage (
        /*[in]*/ BSTR SharedImageName,
        /*[in]*/ BSTR FileName ) = 0;
};

enum __declspec(uuid("7d687b70-2a5c-4c90-a75d-e2391fcc880f"))
AcNavigationSpan
{
    acHorizontal = 0,
    acVertical = 1
};

struct __declspec(uuid("3b06e990-e47c-11cd-8701-00aa003f0f07"))
_NavigationControl : Office::IMsoAccessible
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall Undo ( ) = 0;
      virtual HRESULT __stdcall get_OldValue (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * pRet ) = 0;
      virtual HRESULT __stdcall SizeToFit ( ) = 0;
      virtual HRESULT __stdcall Requery ( ) = 0;
      virtual HRESULT __stdcall Goto ( ) = 0;
      virtual HRESULT __stdcall SetFocus ( ) = 0;
      virtual HRESULT __stdcall get_Controls (
        /*[out,retval]*/ struct Children * * pRet ) = 0;
      virtual HRESULT __stdcall _Evaluate (
        /*[in]*/ BSTR bstrExpr,
        /*[in]*/ SAFEARRAY * * ppsa,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_Hyperlink (
        /*[out,retval]*/ struct _Hyperlink * * ppRet ) = 0;
      virtual HRESULT __stdcall get_FormatConditions (
        /*[out,retval]*/ struct FormatConditions * * ppRet ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT pRet ) = 0;
      virtual HRESULT __stdcall get_EventProcPrefix (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_EventProcPrefix (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put__Name (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlType (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlType (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_StatusBarText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_StatusBarText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DisplayWhen (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_DisplayWhen (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_FilterLookup (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_FilterLookup (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_AutoTab (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_AutoTab (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabStop (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_TabStop (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_TabIndex (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TabIndex (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BackStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BackStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BackColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_SpecialEffect (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_SpecialEffect (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_OldBorderStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_OldBorderStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderWidth (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderWidth (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_BorderLineStyle (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderLineStyle (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ControlTipText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlTipText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_HelpContextId (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_HelpContextId (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Section (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_Section (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_ControlName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ControlName (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Tag (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Tag (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_IsVisible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_IsVisible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_InSelection (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_InSelection (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocus (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocus (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClick (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClick (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMove (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMove (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDown (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDown (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUp (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUp (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPress (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPress (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_ReadingOrder (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ReadingOrder (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_KeyboardLanguage (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_KeyboardLanguage (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_AllowedText (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_AllowedText (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_ScrollBarAlign (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_ScrollBarAlign (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_NumeralShapes (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_NumeralShapes (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall get_LineSpacing (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LineSpacing (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top = vtMissing,
        /*[in]*/ VARIANT Width = vtMissing,
        /*[in]*/ VARIANT Height = vtMissing ) = 0;
      virtual HRESULT __stdcall get_SmartTags (
        /*[out,retval]*/ struct _SmartTags * * ppRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_Layout (
        /*[out,retval]*/ enum AcLayoutType * pRet ) = 0;
      virtual HRESULT __stdcall get_LeftPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_LeftPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_TopPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_TopPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_RightPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_RightPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_BottomPadding (
        /*[out,retval]*/ short * pRet ) = 0;
      virtual HRESULT __stdcall put_BottomPadding (
        /*[in]*/ short pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineStyleBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineStyleBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthLeft (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthLeft (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthTop (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthTop (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthRight (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthRight (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineWidthBottom (
        /*[out,retval]*/ unsigned char * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineWidthBottom (
        /*[in]*/ unsigned char pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineColor (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineColor (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_HorizontalAnchor (
        /*[out,retval]*/ enum AcHorizontalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_HorizontalAnchor (
        /*[in]*/ enum AcHorizontalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_VerticalAnchor (
        /*[out,retval]*/ enum AcVerticalAnchor * pRet ) = 0;
      virtual HRESULT __stdcall put_VerticalAnchor (
        /*[in]*/ enum AcVerticalAnchor pRet ) = 0;
      virtual HRESULT __stdcall get_OnGotFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnGotFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnLostFocusMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnLostFocusMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnDblClickMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnDblClickMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseMoveMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseMoveMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnMouseUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnMouseUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyDownMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyDownMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyUpMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyUpMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_OnKeyPressMacro (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_OnKeyPressMacro (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_LayoutID (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_Target (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_Target (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_BackThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BackThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BackTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BackShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BackShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_BorderTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_BorderShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_BorderShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineThemeColorIndex (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineThemeColorIndex (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineTint (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineTint (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_GridlineShade (
        /*[out,retval]*/ float * pRet ) = 0;
      virtual HRESULT __stdcall put_GridlineShade (
        /*[in]*/ float pRet ) = 0;
      virtual HRESULT __stdcall get_SubForm (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_SubForm (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall get_Tabs (
        /*[out,retval]*/ struct Children * * pRet ) = 0;
      virtual HRESULT __stdcall get_SelectedTab (
        /*[out,retval]*/ struct _NavigationButton * * pRet ) = 0;
      virtual HRESULT __stdcall get_Span (
        /*[out,retval]*/ enum AcNavigationSpan * pNavigationSpan ) = 0;
      virtual HRESULT __stdcall put_Span (
        /*[in]*/ enum AcNavigationSpan pNavigationSpan ) = 0;
};

struct __declspec(uuid("68cce6c0-6129-101b-af4e-00aa003f0f07"))
_Application : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_CodeContextObject (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall NewCurrentDatabaseOld (
        /*[in]*/ BSTR filepath ) = 0;
      virtual HRESULT __stdcall OpenCurrentDatabaseOld (
        /*[in]*/ BSTR filepath,
        /*[in]*/ VARIANT_BOOL Exclusive ) = 0;
      virtual HRESULT __stdcall get_MenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_MenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentObjectType (
        /*[out,retval]*/ enum AcObjectType * pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentObjectName (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall GetOption (
        /*[in]*/ BSTR OptionName,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall SetOption (
        /*[in]*/ BSTR OptionName,
        /*[in]*/ VARIANT Setting ) = 0;
      virtual HRESULT __stdcall Echo (
        /*[in]*/ short EchoOn,
        /*[in]*/ BSTR bstrStatusBarText ) = 0;
      virtual HRESULT __stdcall CloseCurrentDatabase ( ) = 0;
      virtual HRESULT __stdcall Quit (
        /*[in]*/ enum AcQuitOption Option ) = 0;
      virtual HRESULT __stdcall get_Forms (
        /*[out,retval]*/ struct Forms * * pRet ) = 0;
      virtual HRESULT __stdcall get_Reports (
        /*[out,retval]*/ struct Reports * * pRet ) = 0;
      virtual HRESULT __stdcall get_Screen (
        /*[out,retval]*/ struct Screen * * pRet ) = 0;
      virtual HRESULT __stdcall get_DoCmd (
        /*[out,retval]*/ struct DoCmd * * pRet ) = 0;
      virtual HRESULT __stdcall get_ShortcutMenuBar (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_ShortcutMenuBar (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pfVisible ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pfVisible ) = 0;
      virtual HRESULT __stdcall get_UserControl (
        /*[out,retval]*/ VARIANT_BOOL * pfUserCtrl ) = 0;
      virtual HRESULT __stdcall put_UserControl (
        /*[in]*/ VARIANT_BOOL pfUserCtrl ) = 0;
      virtual HRESULT __stdcall SysCmd (
        /*[in]*/ enum AcSysCmdAction Action,
        /*[in]*/ VARIANT Argument2,
        /*[in]*/ VARIANT Argument3,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall CreateForm (
        /*[in]*/ VARIANT Database,
        /*[in]*/ VARIANT FormTemplate,
        /*[out,retval]*/ struct _Form3 * * pRet ) = 0;
      virtual HRESULT __stdcall CreateReport (
        /*[in]*/ VARIANT Database,
        /*[in]*/ VARIANT ReportTemplate,
        /*[out,retval]*/ struct _Report3 * * pRet ) = 0;
      virtual HRESULT __stdcall CreateControlOld (
        /*[in]*/ BSTR FormName,
        /*[in]*/ enum AcControlType ControlType,
        /*[in]*/ enum AcSection Section,
        /*[in]*/ VARIANT Parent,
        /*[in]*/ VARIANT ColumnName,
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top,
        /*[in]*/ VARIANT Width,
        /*[in]*/ VARIANT Height,
        /*[out,retval]*/ struct _Control * * pRet ) = 0;
      virtual HRESULT __stdcall CreateReportControlOld (
        /*[in]*/ BSTR ReportName,
        /*[in]*/ enum AcControlType ControlType,
        /*[in]*/ enum AcSection Section,
        /*[in]*/ VARIANT Parent,
        /*[in]*/ VARIANT ColumnName,
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top,
        /*[in]*/ VARIANT Width,
        /*[in]*/ VARIANT Height,
        /*[out,retval]*/ struct _Control * * pRet ) = 0;
      virtual HRESULT __stdcall CreateControlExOld (
        /*[in]*/ BSTR FormName,
        /*[in]*/ enum AcControlType ControlType,
        /*[in]*/ enum AcSection Section,
        /*[in]*/ BSTR Parent,
        /*[in]*/ BSTR ControlSource,
        /*[in]*/ long Left,
        /*[in]*/ long Top,
        /*[in]*/ long Width,
        /*[in]*/ long Height,
        /*[out,retval]*/ struct _Control * * pRet ) = 0;
      virtual HRESULT __stdcall CreateReportControlExOld (
        /*[in]*/ BSTR ReportName,
        /*[in]*/ enum AcControlType ControlType,
        /*[in]*/ enum AcSection Section,
        /*[in]*/ BSTR Parent,
        /*[in]*/ BSTR ControlName,
        /*[in]*/ long Left,
        /*[in]*/ long Top,
        /*[in]*/ long Width,
        /*[in]*/ long Height,
        /*[out,retval]*/ struct _Control * * pRet ) = 0;
      virtual HRESULT __stdcall DeleteControl (
        /*[in]*/ BSTR FormName,
        /*[in]*/ BSTR ControlName ) = 0;
      virtual HRESULT __stdcall DeleteReportControl (
        /*[in]*/ BSTR ReportName,
        /*[in]*/ BSTR ControlName ) = 0;
      virtual HRESULT __stdcall CreateGroupLevel (
        /*[in]*/ BSTR ReportName,
        /*[in]*/ BSTR Expression,
        /*[in]*/ short Header,
        /*[in]*/ short Footer,
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall DMin (
        /*[in]*/ BSTR Expr,
        /*[in]*/ BSTR Domain,
        /*[in]*/ VARIANT Criteria,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall DMax (
        /*[in]*/ BSTR Expr,
        /*[in]*/ BSTR Domain,
        /*[in]*/ VARIANT Criteria,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall DSum (
        /*[in]*/ BSTR Expr,
        /*[in]*/ BSTR Domain,
        /*[in]*/ VARIANT Criteria,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall DAvg (
        /*[in]*/ BSTR Expr,
        /*[in]*/ BSTR Domain,
        /*[in]*/ VARIANT Criteria,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall DLookup (
        /*[in]*/ BSTR Expr,
        /*[in]*/ BSTR Domain,
        /*[in]*/ VARIANT Criteria,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall DLast (
        /*[in]*/ BSTR Expr,
        /*[in]*/ BSTR Domain,
        /*[in]*/ VARIANT Criteria,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall DVar (
        /*[in]*/ BSTR Expr,
        /*[in]*/ BSTR Domain,
        /*[in]*/ VARIANT Criteria,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall DVarP (
        /*[in]*/ BSTR Expr,
        /*[in]*/ BSTR Domain,
        /*[in]*/ VARIANT Criteria,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall DStDev (
        /*[in]*/ BSTR Expr,
        /*[in]*/ BSTR Domain,
        /*[in]*/ VARIANT Criteria,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall DStDevP (
        /*[in]*/ BSTR Expr,
        /*[in]*/ BSTR Domain,
        /*[in]*/ VARIANT Criteria,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall DFirst (
        /*[in]*/ BSTR Expr,
        /*[in]*/ BSTR Domain,
        /*[in]*/ VARIANT Criteria,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall DCount (
        /*[in]*/ BSTR Expr,
        /*[in]*/ BSTR Domain,
        /*[in]*/ VARIANT Criteria,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall Eval (
        /*[in]*/ BSTR StringExpr,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall CurrentUser (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall DDEInitiate (
        /*[in]*/ BSTR Application,
        /*[in]*/ BSTR Topic,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall DDEExecute (
        /*[in]*/ VARIANT ChanNum,
        /*[in]*/ BSTR Command ) = 0;
      virtual HRESULT __stdcall DDEPoke (
        /*[in]*/ VARIANT ChanNum,
        /*[in]*/ BSTR Item,
        /*[in]*/ BSTR Data ) = 0;
      virtual HRESULT __stdcall DDERequest (
        /*[in]*/ VARIANT ChanNum,
        /*[in]*/ BSTR Item,
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall DDETerminate (
        /*[in]*/ VARIANT ChanNum ) = 0;
      virtual HRESULT __stdcall DDETerminateAll ( ) = 0;
      virtual HRESULT __stdcall get_DBEngine (
        /*[out,retval]*/ struct DAO::_DBEngine * * pRet ) = 0;
      virtual HRESULT __stdcall CurrentDb (
        /*[out,retval]*/ struct DAO::Database * * pRet ) = 0;
      virtual HRESULT __stdcall CodeDb (
        /*[out,retval]*/ struct DAO::Database * * pRet ) = 0;
      virtual HRESULT __stdcall BeginUndoable (
        /*[in]*/ long Hwnd ) = 0;
      virtual HRESULT __stdcall SetUndoRecording (
        /*[in]*/ short yesno ) = 0;
      virtual HRESULT __stdcall BuildCriteria (
        /*[in]*/ BSTR Field,
        /*[in]*/ short FieldType,
        /*[in]*/ BSTR Expression,
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall InsertText (
        /*[in]*/ BSTR Text,
        /*[in]*/ BSTR ModuleName ) = 0;
      virtual HRESULT __stdcall ReloadAddIns ( ) = 0;
      virtual HRESULT __stdcall DefaultWorkspaceClone (
        /*[out,retval]*/ struct DAO::Workspace * * pRet ) = 0;
      virtual HRESULT __stdcall RefreshTitleBar ( ) = 0;
      virtual HRESULT __stdcall AddAutoCorrect (
        /*[in]*/ BSTR ChangeFrom,
        /*[in]*/ BSTR ChangeTo ) = 0;
      virtual HRESULT __stdcall DelAutoCorrect (
        /*[in]*/ BSTR ChangeFrom ) = 0;
      virtual HRESULT __stdcall hWndAccessApp (
        /*[out,retval]*/ int * phWndAccessAppWnd ) = 0;
      virtual HRESULT __stdcall Run (
        /*[in]*/ BSTR Procedure,
        /*[in,out]*/ VARIANT * Arg1,
        /*[in,out]*/ VARIANT * Arg2,
        /*[in,out]*/ VARIANT * Arg3,
        /*[in,out]*/ VARIANT * Arg4,
        /*[in,out]*/ VARIANT * Arg5,
        /*[in,out]*/ VARIANT * Arg6,
        /*[in,out]*/ VARIANT * Arg7,
        /*[in,out]*/ VARIANT * Arg8,
        /*[in,out]*/ VARIANT * Arg9,
        /*[in,out]*/ VARIANT * Arg10,
        /*[in,out]*/ VARIANT * Arg11,
        /*[in,out]*/ VARIANT * Arg12,
        /*[in,out]*/ VARIANT * Arg13,
        /*[in,out]*/ VARIANT * Arg14,
        /*[in,out]*/ VARIANT * Arg15,
        /*[in,out]*/ VARIANT * Arg16,
        /*[in,out]*/ VARIANT * Arg17,
        /*[in,out]*/ VARIANT * Arg18,
        /*[in,out]*/ VARIANT * Arg19,
        /*[in,out]*/ VARIANT * Arg20,
        /*[in,out]*/ VARIANT * Arg21,
        /*[in,out]*/ VARIANT * Arg22,
        /*[in,out]*/ VARIANT * Arg23,
        /*[in,out]*/ VARIANT * Arg24,
        /*[in,out]*/ VARIANT * Arg25,
        /*[in,out]*/ VARIANT * Arg26,
        /*[in,out]*/ VARIANT * Arg27,
        /*[in,out]*/ VARIANT * Arg28,
        /*[in,out]*/ VARIANT * Arg29,
        /*[in,out]*/ VARIANT * Arg30,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall Nz (
        /*[in]*/ VARIANT Value,
        /*[in]*/ VARIANT ValueIfNull,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall LoadPicture (
        /*[in]*/ BSTR FileName,
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall ReplaceModule (
        /*[in]*/ long objtyp,
        /*[in]*/ BSTR ModuleName,
        /*[in]*/ BSTR FileName,
        /*[in]*/ long token ) = 0;
      virtual HRESULT __stdcall AccessError (
        /*[in]*/ VARIANT ErrorNumber,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall BuilderString (
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall StringFromGUID (
        /*[in]*/ VARIANT Guid,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall GUIDFromString (
        /*[in]*/ VARIANT String,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall AppLoadString (
        /*[in]*/ long id,
        /*[out,retval]*/ VARIANT * pRet ) = 0;
      virtual HRESULT __stdcall get_CommandBars (
        /*[out,retval]*/ struct Office::_CommandBars * * pRet ) = 0;
      virtual HRESULT __stdcall get_Assistant (
        /*[out,retval]*/ struct Office::Assistant * * pRet ) = 0;
      virtual HRESULT __stdcall FollowHyperlink (
        /*[in]*/ BSTR Address,
        /*[in]*/ BSTR SubAddress,
        /*[in]*/ VARIANT_BOOL NewWindow,
        /*[in]*/ VARIANT_BOOL AddHistory,
        /*[in]*/ VARIANT ExtraInfo,
        /*[in]*/ enum Office::MsoExtraInfoMethod Method,
        /*[in]*/ BSTR HeaderInfo ) = 0;
      virtual HRESULT __stdcall SaveAsText (
        /*[in]*/ enum AcObjectType ObjectType,
        /*[in]*/ BSTR ObjectName,
        /*[in]*/ BSTR FileName ) = 0;
      virtual HRESULT __stdcall LoadFromText (
        /*[in]*/ enum AcObjectType ObjectType,
        /*[in]*/ BSTR ObjectName,
        /*[in]*/ BSTR FileName ) = 0;
      virtual HRESULT __stdcall AddToFavorites ( ) = 0;
      virtual HRESULT __stdcall RefreshDatabaseWindow ( ) = 0;
      virtual HRESULT __stdcall get_References (
        /*[out,retval]*/ struct _References * * pRet ) = 0;
      virtual HRESULT __stdcall get_Modules (
        /*[out,retval]*/ struct Modules * * pRet ) = 0;
      virtual HRESULT __stdcall get_FileSearch (
        /*[out,retval]*/ struct Office::FileSearch * * pRet ) = 0;
      virtual HRESULT __stdcall get_IsCompiled (
        /*[out,retval]*/ VARIANT_BOOL * pfCompiled ) = 0;
      virtual HRESULT __stdcall RunCommand (
        /*[in]*/ enum AcCommand Command ) = 0;
      virtual HRESULT __stdcall HyperlinkPart (
        /*[in]*/ VARIANT Hyperlink,
        /*[in]*/ enum AcHyperlinkPart Part,
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall GetHiddenAttribute (
        /*[in]*/ enum AcObjectType ObjectType,
        /*[in]*/ BSTR ObjectName,
        /*[out,retval]*/ VARIANT_BOOL * pfHidden ) = 0;
      virtual HRESULT __stdcall SetHiddenAttribute (
        /*[in]*/ enum AcObjectType ObjectType,
        /*[in]*/ BSTR ObjectName,
        /*[in]*/ VARIANT_BOOL fHidden ) = 0;
      virtual HRESULT __stdcall get_VBE (
        /*[out,retval]*/ struct VBIDE::VBE * * ppVBE ) = 0;
      virtual HRESULT __stdcall get_DataAccessPages (
        /*[out,retval]*/ struct DataAccessPages * * pRet ) = 0;
      virtual HRESULT __stdcall CreateDataAccessPage (
        /*[in]*/ VARIANT FileName,
        /*[in]*/ VARIANT_BOOL CreateNewFile,
        /*[out,retval]*/ struct _DataAccessPage * * pRet ) = 0;
      virtual HRESULT __stdcall get_ADOConnectString (
        /*[out,retval]*/ BSTR * pbstrADOConnectString ) = 0;
      virtual HRESULT __stdcall get_CurrentProject (
        /*[out,retval]*/ struct _CurrentProject * * pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentData (
        /*[out,retval]*/ struct _CurrentData * * pRet ) = 0;
      virtual HRESULT __stdcall get_CodeProject (
        /*[out,retval]*/ struct _CurrentProject * * pRet ) = 0;
      virtual HRESULT __stdcall get_CodeData (
        /*[out,retval]*/ struct _CurrentData * * pRet ) = 0;
      virtual HRESULT __stdcall NewAccessProject (
        /*[in]*/ BSTR filepath,
        /*[in]*/ VARIANT Connect = vtMissing ) = 0;
      virtual HRESULT __stdcall OpenAccessProject (
        /*[in]*/ BSTR filepath,
        /*[in]*/ VARIANT_BOOL Exclusive ) = 0;
      virtual HRESULT __stdcall CreateAccessProject (
        /*[in]*/ BSTR filepath,
        /*[in]*/ VARIANT Connect = vtMissing ) = 0;
      virtual HRESULT __stdcall get_WizHook (
        /*[out,retval]*/ struct _WizHook * * pRet ) = 0;
      virtual HRESULT __stdcall get_ProductCode (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall get_COMAddIns (
        /*[out,retval]*/ struct Office::COMAddIns * * pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall get_DefaultWebOptions (
        /*[out,retval]*/ struct _DefaultWebOptions * * ppDWO ) = 0;
      virtual HRESULT __stdcall get_LanguageSettings (
        /*[out,retval]*/ struct Office::LanguageSettings * * ppRet ) = 0;
      virtual HRESULT __stdcall get_AnswerWizard (
        /*[out,retval]*/ struct Office::AnswerWizard * * pRet ) = 0;
      virtual HRESULT __stdcall get_FeatureInstall (
        /*[out,retval]*/ enum Office::MsoFeatureInstall * FeatureInstall ) = 0;
      virtual HRESULT __stdcall put_FeatureInstall (
        /*[in]*/ enum Office::MsoFeatureInstall FeatureInstall ) = 0;
      virtual HRESULT __stdcall EuroConvert (
        /*[in]*/ double Number,
        /*[in]*/ BSTR SourceCurrency,
        /*[in]*/ BSTR TargetCurrency,
        /*[in]*/ VARIANT FullPrecision,
        /*[in]*/ VARIANT TriangulationPrecision,
        /*[out,retval]*/ double * pRet ) = 0;
      virtual HRESULT __stdcall get_VGXFrameInterval (
        /*[out,retval]*/ VARIANT * pnmsec ) = 0;
      virtual HRESULT __stdcall get_FileDialog (
        /*[in]*/ enum Office::MsoFileDialogType dialogType,
        /*[out,retval]*/ struct Office::FileDialog * * pRet ) = 0;
      virtual HRESULT __stdcall get_BrokenReference (
        /*[out,retval]*/ VARIANT_BOOL * pfBrokenReference ) = 0;
      virtual HRESULT __stdcall CreateNewWorkgroupFile (
        /*[in]*/ BSTR Path,
        /*[in]*/ BSTR Name,
        /*[in]*/ BSTR Company,
        /*[in]*/ BSTR WorkgroupID,
        /*[in]*/ VARIANT_BOOL Replace ) = 0;
      virtual HRESULT __stdcall SetDefaultWorkgroupFile (
        /*[in]*/ BSTR Path ) = 0;
      virtual HRESULT __stdcall get_Printers (
        /*[out,retval]*/ struct Printers * * pRet ) = 0;
      virtual HRESULT __stdcall get_Printer (
        /*[out,retval]*/ struct _Printer * * pRet ) = 0;
      virtual HRESULT __stdcall put_Printer (
        /*[in]*/ struct _Printer * pRet ) = 0;
      virtual HRESULT __stdcall putref_Printer (
        /*[in]*/ struct _Printer * pRet ) = 0;
      virtual HRESULT __stdcall get_MsoDebugOptions (
        /*[out,retval]*/ struct Office::MsoDebugOptions * * MsoDebugOptions ) = 0;
      virtual HRESULT __stdcall ConvertAccessProject (
        /*[in]*/ BSTR SourceFilename,
        /*[in]*/ BSTR DestinationFilename,
        /*[in]*/ enum AcFileFormat DestinationFileFormat ) = 0;
      virtual HRESULT __stdcall get_Version (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall get_Build (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall OpenCurrentDatabase (
        /*[in]*/ BSTR filepath,
        /*[in]*/ VARIANT_BOOL Exclusive,
        /*[in]*/ BSTR bstrPassword ) = 0;
      virtual HRESULT __stdcall CompactRepair (
        /*[in]*/ BSTR SourceFile,
        /*[in]*/ BSTR DestinationFile,
        /*[in]*/ VARIANT_BOOL LogFile,
        /*[out,retval]*/ VARIANT_BOOL * pfRet ) = 0;
      virtual HRESULT __stdcall ExportXMLOld (
        /*[in]*/ enum AcExportXMLObjectType ObjectType,
        /*[in]*/ BSTR DataSource,
        /*[in]*/ BSTR DataTarget,
        /*[in]*/ BSTR SchemaTarget,
        /*[in]*/ BSTR PresentationTarget,
        /*[in]*/ BSTR ImageTarget,
        /*[in]*/ enum AcExportXMLEncoding Encoding,
        /*[in]*/ long OtherFlags ) = 0;
      virtual HRESULT __stdcall ImportXML (
        /*[in]*/ BSTR DataSource,
        /*[in]*/ enum AcImportXMLOption ImportOptions ) = 0;
      virtual HRESULT __stdcall get_NewFileTaskPane (
        /*[out,retval]*/ struct Office::NewFile * * pRet ) = 0;
      virtual HRESULT __stdcall TransformXML (
        /*[in]*/ BSTR DataSource,
        /*[in]*/ BSTR TransformSource,
        /*[in]*/ BSTR OutputTarget,
        /*[in]*/ VARIANT_BOOL WellFormedXMLOutput,
        /*[in]*/ enum AcTransformXMLScriptOption ScriptOption ) = 0;
      virtual HRESULT __stdcall CreateAdditionalData (
        /*[out,retval]*/ struct _AdditionalData * * pRet ) = 0;
      virtual HRESULT __stdcall get_AutoCorrect (
        /*[out,retval]*/ struct _AutoCorrect * * pRet ) = 0;
      virtual HRESULT __stdcall ExportXML (
        /*[in]*/ enum AcExportXMLObjectType ObjectType,
        /*[in]*/ BSTR DataSource,
        /*[in]*/ BSTR DataTarget,
        /*[in]*/ BSTR SchemaTarget,
        /*[in]*/ BSTR PresentationTarget,
        /*[in]*/ BSTR ImageTarget,
        /*[in]*/ enum AcExportXMLEncoding Encoding,
        /*[in]*/ enum AcExportXMLOtherFlags OtherFlags,
        /*[in]*/ BSTR WhereCondition,
        /*[in]*/ VARIANT AdditionalData = vtMissing ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_AutomationSecurity (
        /*[out,retval]*/ enum Office::MsoAutomationSecurity * pAutomationSecurity ) = 0;
      virtual HRESULT __stdcall put_AutomationSecurity (
        /*[in]*/ enum Office::MsoAutomationSecurity pAutomationSecurity ) = 0;
      virtual HRESULT __stdcall NewCurrentDatabase (
        /*[in]*/ BSTR filepath,
        /*[in]*/ enum AcNewDatabaseFormat FileFormat,
        /*[in]*/ VARIANT Template,
        /*[in]*/ BSTR SiteAddress,
        /*[in]*/ BSTR ListID ) = 0;
      virtual HRESULT __stdcall PlainText (
        /*[in]*/ VARIANT RichText,
        /*[in]*/ VARIANT Length,
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall HtmlEncode (
        /*[in]*/ VARIANT PlainText,
        /*[in]*/ VARIANT Length,
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall get_MacroError (
        /*[out,retval]*/ struct _MacroError * * pRet ) = 0;
      virtual HRESULT __stdcall LoadCustomUI (
        /*[in]*/ BSTR CustomUIName,
        /*[in]*/ BSTR CustomUIXML ) = 0;
      virtual HRESULT __stdcall get_TempVars (
        /*[out,retval]*/ struct _TempVars * * pRet ) = 0;
      virtual HRESULT __stdcall ExportNavigationPane (
        /*[in]*/ BSTR Path ) = 0;
      virtual HRESULT __stdcall ImportNavigationPane (
        /*[in]*/ BSTR Path,
        /*[in]*/ VARIANT_BOOL fAppendOnly ) = 0;
      virtual HRESULT __stdcall ColumnHistory (
        /*[in]*/ BSTR TableName,
        /*[in]*/ BSTR ColumnName,
        /*[in]*/ BSTR queryString,
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall get_Assistance (
        /*[out,retval]*/ struct Office::IAssistance * * pRet ) = 0;
      virtual HRESULT __stdcall CreateControl (
        /*[in]*/ BSTR FormName,
        /*[in]*/ enum AcControlType ControlType,
        /*[in]*/ enum AcSection Section,
        /*[in]*/ VARIANT Parent,
        /*[in]*/ VARIANT ColumnName,
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top,
        /*[in]*/ VARIANT Width,
        /*[in]*/ VARIANT Height,
        /*[out,retval]*/ struct _Control * * pRet ) = 0;
      virtual HRESULT __stdcall CreateReportControl (
        /*[in]*/ BSTR ReportName,
        /*[in]*/ enum AcControlType ControlType,
        /*[in]*/ enum AcSection Section,
        /*[in]*/ VARIANT Parent,
        /*[in]*/ VARIANT ColumnName,
        /*[in]*/ VARIANT Left,
        /*[in]*/ VARIANT Top,
        /*[in]*/ VARIANT Width,
        /*[in]*/ VARIANT Height,
        /*[out,retval]*/ struct _Control * * pRet ) = 0;
      virtual HRESULT __stdcall CreateControlEx (
        /*[in]*/ BSTR FormName,
        /*[in]*/ enum AcControlType ControlType,
        /*[in]*/ enum AcSection Section,
        /*[in]*/ BSTR Parent,
        /*[in]*/ BSTR ControlSource,
        /*[in]*/ long Left,
        /*[in]*/ long Top,
        /*[in]*/ long Width,
        /*[in]*/ long Height,
        /*[out,retval]*/ struct _Control * * pRet ) = 0;
      virtual HRESULT __stdcall CreateReportControlEx (
        /*[in]*/ BSTR ReportName,
        /*[in]*/ enum AcControlType ControlType,
        /*[in]*/ enum AcSection Section,
        /*[in]*/ BSTR Parent,
        /*[in]*/ BSTR ControlName,
        /*[in]*/ long Left,
        /*[in]*/ long Top,
        /*[in]*/ long Width,
        /*[in]*/ long Height,
        /*[out,retval]*/ struct _Control * * pRet ) = 0;
      virtual HRESULT __stdcall ExportCustomFixedFormat (
        /*[in]*/ VARIANT ExternalExporter,
        /*[in]*/ BSTR OutputFileName,
        /*[in]*/ BSTR ObjectName,
        /*[in]*/ enum AcOutputObjectType ObjectType,
        /*[in]*/ VARIANT_BOOL SelectedRecords,
        /*[in]*/ long FromPage,
        /*[in]*/ long ToPage ) = 0;
      virtual HRESULT __stdcall SaveAsAXL (
        /*[in]*/ enum AcObjectType ObjectType,
        /*[in]*/ BSTR ObjectName,
        /*[in]*/ BSTR FileName ) = 0;
      virtual HRESULT __stdcall LoadFromAXL (
        /*[in]*/ enum AcObjectType ObjectType,
        /*[in]*/ BSTR ObjectName,
        /*[in]*/ BSTR FileName ) = 0;
      virtual HRESULT __stdcall get_NavigationPane (
        /*[out,retval]*/ struct _NavigationPane * * pRet ) = 0;
      virtual HRESULT __stdcall SaveAsTemplate (
        /*[in]*/ BSTR Path,
        /*[in]*/ BSTR Title,
        /*[in]*/ BSTR IconPath,
        /*[in]*/ BSTR CoreTable,
        /*[in]*/ BSTR Category,
        /*[in]*/ VARIANT PreviewPath = vtMissing,
        /*[in]*/ VARIANT Description = vtMissing,
        /*[in]*/ VARIANT InstantiationForm = vtMissing,
        /*[in]*/ VARIANT ApplicationPart = vtMissing,
        /*[in]*/ VARIANT IncludeData = vtMissing,
        /*[in]*/ VARIANT Variation = vtMissing ) = 0;
      virtual HRESULT __stdcall InstantiateTemplate (
        /*[in]*/ BSTR Path ) = 0;
      virtual HRESULT __stdcall get_WebServices (
        /*[out,retval]*/ struct WebServices * * pRet ) = 0;
      virtual HRESULT __stdcall get_LocalVars (
        /*[out,retval]*/ struct _LocalVars * * pRet ) = 0;
      virtual HRESULT __stdcall CurrentWebUser (
        /*[in]*/ enum AcWebUserDisplay DisplayOption,
        /*[out,retval]*/ VARIANT * pvarRet ) = 0;
      virtual HRESULT __stdcall CurrentWebUserGroups (
        /*[in]*/ enum AcWebUserGroupsDisplay DisplayOption,
        /*[out,retval]*/ VARIANT * pvarRet ) = 0;
      virtual HRESULT __stdcall IsCurrentWebUserInGroup (
        /*[in]*/ VARIANT GroupNameOrID,
        /*[out,retval]*/ VARIANT_BOOL * pfRet ) = 0;
      virtual HRESULT __stdcall DirtyObject (
        /*[in]*/ enum AcObjectType ObjectType,
        /*[in]*/ BSTR ObjectName ) = 0;
};

struct __declspec(uuid("ddbd4001-44d5-11d1-98c0-006008197d41"))
AllObjects : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT var,
        /*[out,retval]*/ struct AccessObject * * pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("abe316b1-3ff6-11d1-98bd-006008197d41"))
AccessObject : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get__Name (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall get_Type (
        /*[out,retval]*/ enum AcObjectType * pRet ) = 0;
      virtual HRESULT __stdcall get_Attributes (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct AccessObjectProperties * * pRet ) = 0;
      virtual HRESULT __stdcall get_IsLoaded (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_FullName (
        /*[out,retval]*/ BSTR * pbstrFullName ) = 0;
      virtual HRESULT __stdcall put_FullName (
        /*[in]*/ BSTR pbstrFullName ) = 0;
      virtual HRESULT __stdcall get_DateCreated (
        /*[out,retval]*/ DATE * pDate ) = 0;
      virtual HRESULT __stdcall get_DateModified (
        /*[out,retval]*/ DATE * pDate ) = 0;
      virtual HRESULT __stdcall get_CurrentView (
        /*[out,retval]*/ enum AcCurrentView * pCurView ) = 0;
      virtual HRESULT __stdcall IsDependentUpon (
        /*[in]*/ enum AcObjectType ObjectType,
        /*[in]*/ BSTR ObjectName,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall GetDependencyInfo (
        /*[out,retval]*/ struct _DependencyInfo * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_IsWeb (
        /*[out,retval]*/ VARIANT_BOOL * pfWebObj ) = 0;
};

struct __declspec(uuid("79f41340-18c4-4aa1-86ee-5cde9d2ce600"))
_DependencyObjects : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct AccessObject * * pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("d05819c6-8859-418b-a82f-18b6cb743c8e"))
_DependencyInfo : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Dependants (
        /*[out,retval]*/ struct _DependencyObjects * * pRet ) = 0;
      virtual HRESULT __stdcall get_Dependencies (
        /*[out,retval]*/ struct _DependencyObjects * * pRet ) = 0;
      virtual HRESULT __stdcall get_OutOfDateObjects (
        /*[out,retval]*/ struct _DependencyObjects * * pRet ) = 0;
      virtual HRESULT __stdcall get_InsufficientPermissions (
        /*[out,retval]*/ struct _DependencyObjects * * pRet ) = 0;
      virtual HRESULT __stdcall get_UnsupportedObjects (
        /*[out,retval]*/ struct _DependencyObjects * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("660c9bcf-f6a7-4296-9fa3-a1806fd72ff0"))
_NavigationPaneShortcut : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Object (
        /*[out,retval]*/ struct AccessObject * * pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall get_Position (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Position (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Hidden (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Hidden (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_DisableDesignUI (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_DisableDesignUI (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("87412b71-18be-4224-9b80-9747f3ae22fe"))
_NavigationPaneShortcuts : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _NavigationPaneShortcut * * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ BSTR Name,
        /*[in]*/ enum AcObjectType ObjectType,
        /*[in]*/ VARIANT shortcutName,
        /*[out,retval]*/ struct _NavigationPaneShortcut * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("2008871b-62f5-48c6-a706-23ab3d985ae7"))
_NavigationPaneGroup : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall get_Position (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Position (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Hidden (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Hidden (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Collapsed (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Collapsed (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Unassigned (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall get_Shortcuts (
        /*[out,retval]*/ struct _NavigationPaneShortcuts * * pRet ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("15889271-00bd-40aa-904f-8f6b6d3b1f6b"))
_NavigationPaneGroups : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _NavigationPaneGroup * * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ BSTR Name,
        /*[out,retval]*/ struct _NavigationPaneGroup * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("2bbbe604-022d-428a-bfc7-68aac0d590ef"))
_NavigationPaneCategory : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
      virtual HRESULT __stdcall get_CategoryType (
        /*[out,retval]*/ enum AcNavPaneCategory * pRet ) = 0;
      virtual HRESULT __stdcall MakeCurrentCategory ( ) = 0;
      virtual HRESULT __stdcall get_Position (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Position (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Hidden (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Hidden (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Groups (
        /*[out,retval]*/ struct _NavigationPaneGroups * * pRet ) = 0;
      virtual HRESULT __stdcall Delete ( ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("e919538e-dc0e-4e3a-9a26-a4302ae907f5"))
_NavigationPaneCategories : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _NavigationPaneCategory * * pRet ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * pRet ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ BSTR Name,
        /*[out,retval]*/ struct _NavigationPaneCategory * * pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

struct __declspec(uuid("0bd6cd37-aff5-428d-8414-6c71a2f5075f"))
_NavigationPane : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Application (
        /*[out,retval]*/ struct _Application * * pRet ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * pRet ) = 0;
      virtual HRESULT __stdcall get_CurrentCategory (
        /*[out,retval]*/ struct _NavigationPaneCategory * * pRet ) = 0;
      virtual HRESULT __stdcall get_Categories (
        /*[out,retval]*/ struct _NavigationPaneCategories * * pRet ) = 0;
      virtual HRESULT __stdcall NavigateTo (
        /*[in]*/ BSTR bstrCategory,
        /*[in]*/ VARIANT varGroup = vtMissing ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ long * pRet ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ long pRet ) = 0;
      virtual HRESULT __stdcall get_Closed (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Closed (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_Locked (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_Locked (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_ShowSearchBar (
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
      virtual HRESULT __stdcall put_ShowSearchBar (
        /*[in]*/ VARIANT_BOOL pRet ) = 0;
      virtual HRESULT __stdcall get_SearchBarText (
        /*[out,retval]*/ BSTR * pRet ) = 0;
      virtual HRESULT __stdcall put_SearchBarText (
        /*[in]*/ BSTR pRet ) = 0;
      virtual HRESULT __stdcall get_Sort (
        /*[out,retval]*/ enum AcNavPaneSort * pRet ) = 0;
      virtual HRESULT __stdcall put_Sort (
        /*[in]*/ enum AcNavPaneSort pRet ) = 0;
      virtual HRESULT __stdcall get_View (
        /*[out,retval]*/ enum AcNavPaneView * pRet ) = 0;
      virtual HRESULT __stdcall put_View (
        /*[in]*/ enum AcNavPaneView pRet ) = 0;
      virtual HRESULT __stdcall IsMemberSafe (
        /*[in]*/ long dispid,
        /*[out,retval]*/ VARIANT_BOOL * pRet ) = 0;
};

//
// Named GUID constants initializations
//

extern "C" const GUID __declspec(selectany) LIBID_Access =
    {0x4affc9a0,0x5f99,0x101b,{0xaf,0x4e,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__RecordsetEvents =
    {0x45165490,0xef32,0x11d0,{0x86,0xfb,0x00,0x60,0x97,0xc9,0x81,0x8c}};
extern "C" const GUID __declspec(selectany) CLSID_FormatCondition =
    {0xe27a992d,0xa330,0x11d0,{0x81,0xdd,0x00,0xc0,0x4f,0xc2,0xf5,0x1b}};
extern "C" const GUID __declspec(selectany) IID__ItemsSelected =
    {0x31b09710,0xeadc,0x11cd,{0xb9,0xf7,0x00,0xaa,0x00,0x47,0x53,0xb5}};
extern "C" const GUID __declspec(selectany) IID_Children =
    {0x3b06e977,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__AccessField =
    {0xb1c1eac1,0x486f,0x11ce,{0xa6,0x5d,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_AccessField =
    {0x044e54c5,0xb19b,0x11ce,{0xa6,0x89,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID___Help =
    {0x9cd4a761,0xa6a9,0x11ce,{0xa6,0x86,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__Hyperlink =
    {0x50d56611,0x60ac,0x11cf,{0x82,0xc9,0x00,0xaa,0x00,0x4b,0x9f,0xe6}};
extern "C" const GUID __declspec(selectany) CLSID_Hyperlink =
    {0x50d56610,0x60ac,0x11cf,{0x82,0xc9,0x00,0xaa,0x00,0x4b,0x9f,0xe6}};
extern "C" const GUID __declspec(selectany) CLSID_Page =
    {0x3b06e973,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID_Pages =
    {0x3b06e978,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_Control =
    {0x02f92c80,0x8f8e,0x101b,{0xaf,0x4e,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID___ControlInReportEvents =
    {0x90b322a5,0xf1d9,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID__ControlInReportEvents =
    {0x90b322a4,0xf1d9,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__LabelEvents =
    {0xbc9e4341,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_Label =
    {0x3b06e947,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__ChildLabelEvents =
    {0xbc9e4358,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID__ChildLabel =
    {0xbc9e4359,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__RectangleEvents =
    {0xbc9e4342,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_Rectangle =
    {0x3b06e949,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__LineEvents =
    {0xbc9e4343,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_Line =
    {0x3b06e94b,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__ImageEvents =
    {0xbc9e4344,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_Image =
    {0x3b06e94d,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__CommandButtonEvents =
    {0xbc9e4345,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_CommandButton =
    {0x3b06e94f,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__OptionButtonEvents =
    {0xbc9e4346,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_OptionButton =
    {0x3b06e951,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__OptionButtonInOptionEvents =
    {0xbc9e435b,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID__OptionButtonInOption =
    {0xbc9e435a,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__CheckBoxEvents =
    {0xbc9e4347,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_CheckBox =
    {0x3b06e953,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__CheckBoxInOptionEvents =
    {0xbc9e435d,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID__CheckBoxInOption =
    {0xbc9e435c,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__OptionGroupEvents =
    {0xbc9e4348,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_OptionGroup =
    {0x3b06e955,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__BoundObjectFrameEvents =
    {0xbc9e4349,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_BoundObjectFrame =
    {0x3b06e957,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__TextBoxEvents =
    {0xbc9e4340,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_TextBox =
    {0x3b06e945,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__ListBoxEvents =
    {0xbc9e434b,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_ListBox =
    {0x3b06e959,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__ComboBoxEvents =
    {0xbc9e434c,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_ComboBox =
    {0x3b06e95b,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__ObjectFrameEvents =
    {0xbc9e434d,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_ObjectFrame =
    {0x3b06e95d,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__PageBreakEvents =
    {0xbc9e434e,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_PageBreak =
    {0x3b06e95f,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__ToggleButtonEvents =
    {0xbc9e434f,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_ToggleButton =
    {0x3b06e961,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__ToggleButtonInOptionEvents =
    {0xbc9e435f,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID__ToggleButtonInOption =
    {0xbc9e435e,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__PaletteButtonEvents =
    {0xa843ccd0,0x6e2c,0x11cf,{0xa2,0x19,0x00,0xa0,0xc9,0x05,0x42,0xff}};
extern "C" const GUID __declspec(selectany) CLSID_PaletteButton =
    {0x9cd4a762,0xa6a9,0x11ce,{0xa6,0x86,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__SubFormEvents =
    {0xbc9e4350,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_SubForm =
    {0x3b06e963,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__SubReportEvents =
    {0xbc9e4351,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_SubReport =
    {0x3b06e965,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__CustomControlEvents =
    {0xbc9e4352,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_CustomControl =
    {0x3b06e967,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__CustomControlInReportEvents =
    {0x300471e2,0x7426,0x11ce,{0xab,0x64,0x00,0xaa,0x00,0x42,0xb7,0xce}};
extern "C" const GUID __declspec(selectany) CLSID__CustomControlInReport =
    {0x300471e0,0x7426,0x11ce,{0xab,0x63,0x00,0xaa,0x00,0x42,0xb7,0xce}};
extern "C" const GUID __declspec(selectany) IID__TabControlEvents =
    {0x3b06e972,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_TabControl =
    {0x3b06e970,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__PageEvents =
    {0x3b06e975,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__SectionEvents =
    {0xbc9e4353,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_Section =
    {0xbc9e4355,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_GroupLevel =
    {0xbc9e4356,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__SectionInReportEvents =
    {0xbc9e4361,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID__SectionInReport =
    {0xbc9e4360,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__PageHdrFtrInReportEvents =
    {0x7ad9e905,0xbaf8,0x11ce,{0xa6,0x8a,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID__PageHdrFtrInReport =
    {0x7ad9e906,0xbaf8,0x11ce,{0xa6,0x8a,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__FormEvents =
    {0x331fdcfb,0xcf31,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_FormOld =
    {0x483615a0,0x74be,0x101b,{0xaf,0x4e,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__ReportEvents =
    {0xbc9e4357,0xf037,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_ReportOld =
    {0x27ce30a0,0x91ff,0x101b,{0xaf,0x4e,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_Application =
    {0x73a4c9c1,0xd68d,0x11d0,{0x98,0xbf,0x00,0xa0,0xc9,0x0d,0xc8,0xd9}};
extern "C" const GUID __declspec(selectany) IID__AccessProperty =
    {0x331fdd00,0xcf31,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID_Properties =
    {0x331fdd02,0xcf31,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID_Controls =
    {0x5970c574,0xeb8c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__PageBreak =
    {0x3b06e960,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__PaletteButton =
    {0x9cd4a760,0xa6a9,0x11ce,{0xa6,0x86,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__Page =
    {0x3b06e974,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__Section =
    {0x331fdcfc,0xcf31,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__GroupLevel =
    {0x331fdd27,0xcf31,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID_Module =
    {0x331fdcfe,0xcf31,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID_Modules =
    {0x9dd0af42,0x6e28,0x11cf,{0x90,0x08,0x00,0xaa,0x00,0x42,0xb7,0xce}};
extern "C" const GUID __declspec(selectany) DIID__References_Events =
    {0xf163f201,0xada2,0x11cf,{0x89,0xa9,0x00,0xa0,0xc9,0x05,0x41,0x29}};
extern "C" const GUID __declspec(selectany) CLSID_References =
    {0xeb106214,0x9c89,0x11cf,{0xa2,0xb3,0x00,0xa0,0xc9,0x05,0x42,0xff}};
extern "C" const GUID __declspec(selectany) IID_Reference =
    {0xeb106212,0x9c89,0x11cf,{0xa2,0xb3,0x00,0xa0,0xc9,0x05,0x42,0xff}};
extern "C" const GUID __declspec(selectany) IID__References =
    {0xeb106213,0x9c89,0x11cf,{0xa2,0xb3,0x00,0xa0,0xc9,0x05,0x42,0xff}};
extern "C" const GUID __declspec(selectany) IID__Dummy =
    {0x8b06e320,0xb23c,0x11cf,{0x89,0xa8,0x00,0xa0,0xc9,0x05,0x41,0x29}};
extern "C" const GUID __declspec(selectany) CLSID_DataAccessPage =
    {0x493d8a73,0x1db1,0x11d1,{0x98,0xa2,0x00,0x60,0x08,0x19,0x7d,0x41}};
extern "C" const GUID __declspec(selectany) IID_DataAccessPages =
    {0x493d8a71,0x1db1,0x11d1,{0x98,0xa2,0x00,0x60,0x08,0x19,0x7d,0x41}};
extern "C" const GUID __declspec(selectany) CLSID_AllForms =
    {0x08f6c813,0x3cfd,0x11d1,{0x98,0xbc,0x00,0x60,0x08,0x19,0x7d,0x41}};
extern "C" const GUID __declspec(selectany) CLSID_AllReports =
    {0x08f6c814,0x3cfd,0x11d1,{0x98,0xbc,0x00,0x60,0x08,0x19,0x7d,0x41}};
extern "C" const GUID __declspec(selectany) CLSID_AllMacros =
    {0x08f6c815,0x3cfd,0x11d1,{0x98,0xbc,0x00,0x60,0x08,0x19,0x7d,0x41}};
extern "C" const GUID __declspec(selectany) CLSID_AllModules =
    {0x08f6c816,0x3cfd,0x11d1,{0x98,0xbc,0x00,0x60,0x08,0x19,0x7d,0x41}};
extern "C" const GUID __declspec(selectany) CLSID_AllDataAccessPages =
    {0x08f6c818,0x3cfd,0x11d1,{0x98,0xbc,0x00,0x60,0x08,0x19,0x7d,0x41}};
extern "C" const GUID __declspec(selectany) CLSID_AllTables =
    {0x08f6c81b,0x3cfd,0x11d1,{0x98,0xbc,0x00,0x60,0x08,0x19,0x7d,0x41}};
extern "C" const GUID __declspec(selectany) CLSID_AllQueries =
    {0x08f6c81c,0x3cfd,0x11d1,{0x98,0xbc,0x00,0x60,0x08,0x19,0x7d,0x41}};
extern "C" const GUID __declspec(selectany) CLSID_AllViews =
    {0x08f6c81e,0x3cfd,0x11d1,{0x98,0xbc,0x00,0x60,0x08,0x19,0x7d,0x41}};
extern "C" const GUID __declspec(selectany) CLSID_AllStoredProcedures =
    {0x08f6c820,0x3cfd,0x11d1,{0x98,0xbc,0x00,0x60,0x08,0x19,0x7d,0x41}};
extern "C" const GUID __declspec(selectany) CLSID_AllDatabaseDiagrams =
    {0x08f6c821,0x3cfd,0x11d1,{0x98,0xbc,0x00,0x60,0x08,0x19,0x7d,0x41}};
extern "C" const GUID __declspec(selectany) IID_AccessObjectProperty =
    {0x1fe3e471,0xa7d0,0x11d1,{0x99,0x44,0x00,0x60,0x08,0x19,0x7d,0x41}};
extern "C" const GUID __declspec(selectany) IID_AccessObjectProperties =
    {0x0921f331,0xa7c9,0x11d1,{0x99,0x44,0x00,0x60,0x08,0x19,0x7d,0x41}};
extern "C" const GUID __declspec(selectany) CLSID_CurrentProject =
    {0x08f6c811,0x3cfd,0x11d1,{0x98,0xbc,0x00,0x60,0x08,0x19,0x7d,0x41}};
extern "C" const GUID __declspec(selectany) CLSID_CurrentData =
    {0x08f6c819,0x3cfd,0x11d1,{0x98,0xbc,0x00,0x60,0x08,0x19,0x7d,0x41}};
extern "C" const GUID __declspec(selectany) CLSID_CodeProject =
    {0x9212ba72,0x3e79,0x11d1,{0x98,0xbd,0x00,0x60,0x08,0x19,0x7d,0x41}};
extern "C" const GUID __declspec(selectany) CLSID_CodeData =
    {0x08f6c81a,0x3cfd,0x11d1,{0x98,0xbc,0x00,0x60,0x08,0x19,0x7d,0x41}};
extern "C" const GUID __declspec(selectany) IID__WizHook =
    {0xcb9d3171,0x4728,0x11d1,{0x83,0x34,0x00,0x60,0x08,0x19,0x7c,0xc8}};
extern "C" const GUID __declspec(selectany) CLSID_WizHook =
    {0xcb9d3172,0x4728,0x11d1,{0x83,0x34,0x00,0x60,0x08,0x19,0x7c,0xc8}};
extern "C" const GUID __declspec(selectany) IID__DefaultWebOptions =
    {0x416ed4f0,0xab31,0x11d1,{0xbf,0x72,0x00,0x60,0x08,0x3e,0x43,0xcf}};
extern "C" const GUID __declspec(selectany) CLSID_DefaultWebOptions =
    {0x416ed4f1,0xab31,0x11d1,{0xbf,0x72,0x00,0x60,0x08,0x3e,0x43,0xcf}};
extern "C" const GUID __declspec(selectany) IID__WebOptions =
    {0x416ed4f6,0xab31,0x11d1,{0xbf,0x72,0x00,0x60,0x08,0x3e,0x43,0xcf}};
extern "C" const GUID __declspec(selectany) CLSID_WebOptions =
    {0x416ed4f7,0xab31,0x11d1,{0xbf,0x72,0x00,0x60,0x08,0x3e,0x43,0xcf}};
extern "C" const GUID __declspec(selectany) IID__DataAccessPage =
    {0x493d8a72,0x1db1,0x11d1,{0x98,0xa2,0x00,0x60,0x08,0x19,0x7d,0x41}};
extern "C" const GUID __declspec(selectany) IID__DummyEvents =
    {0x58bf3100,0xb580,0x11cf,{0x89,0xa8,0x00,0xa0,0xc9,0x05,0x41,0x29}};
extern "C" const GUID __declspec(selectany) CLSID_Class =
    {0x8b06e321,0xb23c,0x11cf,{0x89,0xa8,0x00,0xa0,0xc9,0x05,0x41,0x29}};
extern "C" const GUID __declspec(selectany) CLSID_Printer =
    {0xdbc5175e,0xa8ed,0x11d3,{0xa0,0xdd,0x00,0xc0,0x4f,0x68,0x71,0x2b}};
extern "C" const GUID __declspec(selectany) CLSID_FormOldV10 =
    {0x483615a0,0x74be,0x101b,{0xaf,0x4e,0x00,0xaa,0x00,0x3f,0x0f,0x08}};
extern "C" const GUID __declspec(selectany) CLSID_ReportOldV10 =
    {0xecd1eada,0xd373,0x11d3,{0x8d,0x21,0x00,0x50,0x04,0x83,0x83,0xfb}};
extern "C" const GUID __declspec(selectany) IID__Printer =
    {0xdbc5175f,0xa8ed,0x11d3,{0xa0,0xdd,0x00,0xc0,0x4f,0x68,0x71,0x2b}};
extern "C" const GUID __declspec(selectany) IID_Printers =
    {0xdbc51760,0xa8ed,0x11d3,{0xa0,0xdd,0x00,0xc0,0x4f,0x68,0x71,0x2b}};
extern "C" const GUID __declspec(selectany) CLSID_AllFunctions =
    {0x08f6c822,0x3cfd,0x11d1,{0x98,0xbc,0x00,0x60,0x08,0x19,0x7d,0x41}};
extern "C" const GUID __declspec(selectany) IID__CurrentData =
    {0x9212ba73,0x3e79,0x11d1,{0x98,0xbd,0x00,0x60,0x08,0x19,0x7d,0x41}};
extern "C" const GUID __declspec(selectany) CLSID_AdditionalData =
    {0xdbc51761,0xa8ed,0x11d3,{0xa0,0xdd,0x00,0xc0,0x4f,0x68,0x71,0x2b}};
extern "C" const GUID __declspec(selectany) IID__AdditionalData =
    {0xdbc51762,0xa8ed,0x11d3,{0xa0,0xdd,0x00,0xc0,0x4f,0x68,0x71,0x2b}};
extern "C" const GUID __declspec(selectany) CLSID_AutoCorrect =
    {0x4375351e,0x7052,0x40df,{0xb4,0xd3,0x60,0x95,0xe7,0xf8,0x81,0x1b}};
extern "C" const GUID __declspec(selectany) IID__AutoCorrect =
    {0x063a8de5,0xe2c5,0x44ea,{0xa9,0x0e,0x6d,0x42,0x20,0x7d,0x25,0xc8}};
extern "C" const GUID __declspec(selectany) CLSID_DependencyObjects =
    {0x1c4367a8,0xeaee,0x4c23,{0x95,0x82,0x4a,0x22,0x9d,0xf2,0x40,0x3e}};
extern "C" const GUID __declspec(selectany) CLSID_DependencyInfo =
    {0xf8c9dcb3,0x4063,0x490e,{0xa7,0x3c,0x35,0x33,0x20,0x7c,0xbc,0x26}};
extern "C" const GUID __declspec(selectany) CLSID_SmartTags =
    {0x73778f0a,0x9743,0x4df3,{0xbb,0xfa,0x94,0x17,0x12,0x48,0x8f,0xea}};
extern "C" const GUID __declspec(selectany) CLSID_SmartTagAction =
    {0x0d944d89,0x82bc,0x43de,{0x96,0x59,0x69,0x9d,0xd3,0xfb,0xcd,0x72}};
extern "C" const GUID __declspec(selectany) IID__SmartTagAction =
    {0x1560be9f,0x0718,0x42be,{0xbb,0x2b,0xd6,0x70,0x65,0x93,0xac,0x40}};
extern "C" const GUID __declspec(selectany) CLSID_SmartTagActions =
    {0xaa533187,0x6399,0x4e6c,{0xb6,0xec,0x6f,0xc9,0x99,0xe1,0xc8,0x55}};
extern "C" const GUID __declspec(selectany) IID__SmartTagActions =
    {0x3836c9ec,0xe9cb,0x4817,{0xa7,0x38,0x50,0xb4,0xdd,0x3d,0xdd,0x8d}};
extern "C" const GUID __declspec(selectany) CLSID_SmartTagProperty =
    {0x6e03ad86,0x431e,0x4879,{0xa5,0x72,0xef,0x0e,0xba,0x2f,0xa7,0x29}};
extern "C" const GUID __declspec(selectany) IID__SmartTagProperty =
    {0x6a3308ea,0x73df,0x436a,{0xa8,0x26,0x41,0xa1,0xf0,0x21,0x86,0xc4}};
extern "C" const GUID __declspec(selectany) CLSID_SmartTagProperties =
    {0x4215cc2c,0x15b5,0x47a5,{0x9b,0x60,0x11,0x9b,0xd2,0x69,0xcb,0x7e}};
extern "C" const GUID __declspec(selectany) IID__SmartTagProperties =
    {0x3a6a13ff,0x1162,0x461d,{0x89,0x9c,0x76,0x8d,0x02,0x51,0x19,0xfb}};
extern "C" const GUID __declspec(selectany) CLSID_SmartTag =
    {0xef1a0b1d,0xad6d,0x48e6,{0x99,0x05,0xbe,0xe2,0xa5,0xd3,0x8d,0xf9}};
extern "C" const GUID __declspec(selectany) IID__SmartTag =
    {0x9d2ab5d3,0xcd72,0x4a9a,{0xa7,0x2e,0x2b,0x34,0x92,0xcb,0xd0,0xae}};
extern "C" const GUID __declspec(selectany) IID__SmartTags =
    {0xb1f7de76,0xae97,0x48d9,{0xa4,0xfd,0x2c,0x17,0x2b,0x2b,0xd7,0xa9}};
extern "C" const GUID __declspec(selectany) IID_ImportExportSpecification =
    {0x55b0e0c9,0xc75d,0x4f42,{0xad,0x20,0x69,0x39,0xc1,0xd0,0x5b,0x70}};
extern "C" const GUID __declspec(selectany) IID_ImportExportSpecifications =
    {0x77dc8648,0xf725,0x4371,{0x88,0xc3,0x6e,0xb6,0xc4,0x89,0x4c,0xa4}};
extern "C" const GUID __declspec(selectany) DIID__FormEvents2 =
    {0x0ea530dd,0x5b30,0x4278,{0xbd,0x28,0x47,0xc4,0xd1,0x16,0x19,0xbd}};
extern "C" const GUID __declspec(selectany) CLSID_Form =
    {0x7398aafd,0x6527,0x48c7,{0x95,0xb7,0xbe,0xab,0xac,0xd1,0xca,0x3f}};
extern "C" const GUID __declspec(selectany) IID__Form =
    {0xe5135d80,0x8f8d,0x101b,{0xaf,0x4e,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID_Forms =
    {0xb1bb0e80,0x6128,0x101b,{0xaf,0x4e,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__Form2 =
    {0x3f4a878e,0xc395,0x11d3,{0x8d,0x1f,0x00,0x50,0x04,0x83,0x83,0xfb}};
extern "C" const GUID __declspec(selectany) DIID__ReportEvents2 =
    {0xd7281a87,0x4b30,0x41c5,{0xab,0x7b,0xfa,0xbf,0x9a,0x35,0x44,0x2a}};
extern "C" const GUID __declspec(selectany) CLSID_Report =
    {0xff240263,0xaf0a,0x432d,{0xa5,0x44,0xa7,0x21,0xe7,0x57,0x38,0xf8}};
extern "C" const GUID __declspec(selectany) IID__SubReport =
    {0x3b06e966,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__Report =
    {0x3e8b6b00,0x91ff,0x101b,{0xaf,0x4e,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID_Reports =
    {0xd1523700,0x6128,0x101b,{0xaf,0x4e,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID_Screen =
    {0xdc6b66c0,0x6128,0x101b,{0xaf,0x4e,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__Report2 =
    {0x32a1c62a,0xd374,0x11d3,{0x8d,0x21,0x00,0x50,0x04,0x83,0x83,0xfb}};
extern "C" const GUID __declspec(selectany) IID__Report3 =
    {0xb0e35b78,0x55b0,0x47fb,{0x89,0x51,0xca,0x61,0x6f,0x25,0xce,0xaf}};
extern "C" const GUID __declspec(selectany) DIID_DispAttachmentEvents =
    {0x3b06e981,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_Attachment =
    {0x3b06e979,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__Form3 =
    {0x66b22fb4,0xf70e,0x4f03,{0xa0,0x0a,0xf7,0x6e,0x9a,0xdb,0xbf,0x10}};
extern "C" const GUID __declspec(selectany) IID__Control =
    {0x26b96540,0x8f8e,0x101b,{0xaf,0x4e,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__Label =
    {0x3b06e948,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__Rectangle =
    {0x3b06e94a,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__Line =
    {0x3b06e94c,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__Image =
    {0x3b06e94e,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__OptionButton =
    {0x3b06e952,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__Checkbox =
    {0x3b06e954,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__OptionGroup =
    {0x3b06e956,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__BoundObjectFrame =
    {0x3b06e958,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__ListBox =
    {0x3b06e95a,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__ObjectFrame =
    {0x3b06e95e,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__ToggleButton =
    {0x3b06e962,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__SubForm =
    {0x3b06e964,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__CustomControl =
    {0x3b06e968,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__TabControl =
    {0x3b06e971,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__MacroError =
    {0x22585ba1,0x7bd1,0x40af,{0x80,0x95,0xe6,0x88,0x17,0x6c,0xde,0xb0}};
extern "C" const GUID __declspec(selectany) CLSID_MacroError =
    {0x3f1b1773,0x65cb,0x4db9,{0x9f,0xc6,0xac,0xed,0x47,0xdb,0x28,0x5a}};
extern "C" const GUID __declspec(selectany) IID__Attachment =
    {0x3b06e980,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__TempVar =
    {0xfb74f43a,0x9732,0x4552,{0xb1,0xc2,0x26,0x9a,0xbf,0x08,0x24,0x92}};
extern "C" const GUID __declspec(selectany) CLSID_TempVar =
    {0x12dce806,0xea8a,0x46aa,{0x88,0xdf,0xc4,0x48,0x6e,0xdb,0x78,0xe3}};
extern "C" const GUID __declspec(selectany) IID__TempVars =
    {0x9e3f602f,0xba36,0x4865,{0xb3,0xcd,0xf2,0xeb,0x00,0x8f,0x62,0xde}};
extern "C" const GUID __declspec(selectany) CLSID_TempVars =
    {0x6d40d9de,0x2821,0x44a8,{0xba,0xf3,0x80,0x11,0xe3,0x62,0xcf,0x59}};
extern "C" const GUID __declspec(selectany) DIID_DispCommandButtonEvents =
    {0x2e70526b,0x92d1,0x43cc,{0xa5,0x7b,0xed,0x48,0xbc,0xcc,0x71,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_DispBoundObjectFrameEvents =
    {0x2e70526c,0x92d1,0x43cc,{0xa5,0x7b,0xed,0x48,0xbc,0xcc,0x71,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_DispObjectFrameEvents =
    {0x2e70526d,0x92d1,0x43cc,{0xa5,0x7b,0xed,0x48,0xbc,0xcc,0x71,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_DispCustomControlEvents =
    {0x2e70526e,0x92d1,0x43cc,{0xa5,0x7b,0xed,0x48,0xbc,0xcc,0x71,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_DispCheckBoxEvents =
    {0x2e70526a,0x92d1,0x43cc,{0xa5,0x7b,0xed,0x48,0xbc,0xcc,0x71,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_DispOptionButtonEvents =
    {0x2e705268,0x92d1,0x43cc,{0xa5,0x7b,0xed,0x48,0xbc,0xcc,0x71,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_DispToggleButtonEvents =
    {0x2e705266,0x92d1,0x43cc,{0xa5,0x7b,0xed,0x48,0xbc,0xcc,0x71,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_DispRectangleEvents =
    {0x2e705271,0x92d1,0x43cc,{0xa5,0x7b,0xed,0x48,0xbc,0xcc,0x71,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_DispImageEvents =
    {0x2e705272,0x92d1,0x43cc,{0xa5,0x7b,0xed,0x48,0xbc,0xcc,0x71,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_DispListBoxEvents =
    {0x2e705273,0x92d1,0x43cc,{0xa5,0x7b,0xed,0x48,0xbc,0xcc,0x71,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_DispOptionGroupEvents =
    {0x2e705274,0x92d1,0x43cc,{0xa5,0x7b,0xed,0x48,0xbc,0xcc,0x71,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_DispTextBoxEvents =
    {0x2e705275,0x92d1,0x43cc,{0xa5,0x7b,0xed,0x48,0xbc,0xcc,0x71,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_DispComboBoxEvents =
    {0x2e705276,0x92d1,0x43cc,{0xa5,0x7b,0xed,0x48,0xbc,0xcc,0x71,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_DispSubFormEvents =
    {0x2e705277,0x92d1,0x43cc,{0xa5,0x7b,0xed,0x48,0xbc,0xcc,0x71,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_DispSubReportEvents =
    {0x2e705278,0x92d1,0x43cc,{0xa5,0x7b,0xed,0x48,0xbc,0xcc,0x71,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_DispLineEvents =
    {0x2e705279,0x92d1,0x43cc,{0xa5,0x7b,0xed,0x48,0xbc,0xcc,0x71,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_DispPageBreakEvents =
    {0x2e70527a,0x92d1,0x43cc,{0xa5,0x7b,0xed,0x48,0xbc,0xcc,0x71,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_DispSectionEvents =
    {0x2e70527b,0x92d1,0x43cc,{0xa5,0x7b,0xed,0x48,0xbc,0xcc,0x71,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_DispSectionInReportEvents =
    {0x2e70527c,0x92d1,0x43cc,{0xa5,0x7b,0xed,0x48,0xbc,0xcc,0x71,0x1d}};
extern "C" const GUID __declspec(selectany) DIID__DispControlInReportEvents =
    {0x2e70527d,0x92d1,0x43cc,{0xa5,0x7b,0xed,0x48,0xbc,0xcc,0x71,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_DispCustomControlInReportEvents =
    {0x2e70527e,0x92d1,0x43cc,{0xa5,0x7b,0xed,0x48,0xbc,0xcc,0x71,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_DispPaletteButtonEvents =
    {0x2e70527f,0x92d1,0x43cc,{0xa5,0x7b,0xed,0x48,0xbc,0xcc,0x71,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_DispPageHdrFtrInReportEvents =
    {0x2e705280,0x92d1,0x43cc,{0xa5,0x7b,0xed,0x48,0xbc,0xcc,0x71,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_DispTabControlEvents =
    {0x2e705281,0x92d1,0x43cc,{0xa5,0x7b,0xed,0x48,0xbc,0xcc,0x71,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_DispPageEvents =
    {0x2e705282,0x92d1,0x43cc,{0xa5,0x7b,0xed,0x48,0xbc,0xcc,0x71,0x1d}};
extern "C" const GUID __declspec(selectany) DIID_DispLabelEvents =
    {0x3b06e982,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__CommandButton =
    {0x3b06e950,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) DIID_DispChildLabelEvents =
    {0x2e705270,0x92d1,0x43cc,{0xa5,0x7b,0xed,0x48,0xbc,0xcc,0x71,0x1d}};
extern "C" const GUID __declspec(selectany) IID__EmptyCell =
    {0x3b06e987,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) DIID_DispEmptyCellEvents =
    {0x3b06e988,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_EmptyCell =
    {0x3b06e986,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__WebBrowserControl =
    {0xb01d3066,0x84bb,0x44bd,{0xb2,0xf7,0x64,0xa0,0x26,0xbd,0xfa,0x8c}};
extern "C" const GUID __declspec(selectany) DIID_DispWebBrowserControlEvents =
    {0xeacb9075,0x68f8,0x4e3b,{0xb8,0x65,0xe1,0xce,0x6b,0xe0,0x44,0x7c}};
extern "C" const GUID __declspec(selectany) CLSID_WebBrowserControl =
    {0xd303ac37,0x74db,0x45b9,{0x8c,0x22,0xad,0x7c,0x3f,0xba,0x68,0xef}};
extern "C" const GUID __declspec(selectany) CLSID_NavigationPane =
    {0x0f0c6a9f,0xbb58,0x439c,{0xb2,0x54,0x69,0xa8,0x3a,0xfa,0x91,0xd5}};
extern "C" const GUID __declspec(selectany) CLSID_NavigationPaneCategory =
    {0x79e137a6,0x5446,0x46f5,{0x86,0x9d,0x6a,0x5a,0x00,0x4f,0xea,0x40}};
extern "C" const GUID __declspec(selectany) CLSID_NavigationPaneCategories =
    {0x82fe1ae7,0x269f,0x46df,{0x94,0x5a,0x4d,0xc7,0xd2,0x9a,0xe7,0x05}};
extern "C" const GUID __declspec(selectany) CLSID_NavigationPaneGroup =
    {0x7f0be2d6,0x106b,0x4500,{0xb2,0x3f,0x39,0xf4,0x7f,0x97,0xfd,0xe5}};
extern "C" const GUID __declspec(selectany) CLSID_NavigationPaneGroups =
    {0x924aa51d,0x2ff2,0x4370,{0xb6,0xaa,0x2a,0x50,0x47,0x67,0xb5,0xfd}};
extern "C" const GUID __declspec(selectany) CLSID_NavigationPaneShortcut =
    {0x4f854426,0xa663,0x42f5,{0x9e,0xa9,0xbd,0x17,0x95,0x1b,0x1f,0x41}};
extern "C" const GUID __declspec(selectany) CLSID_NavigationPaneShortcuts =
    {0x7a3ad6b5,0x4891,0x4cf3,{0xb9,0x9b,0xdd,0x10,0xe6,0xf2,0x51,0xeb}};
extern "C" const GUID __declspec(selectany) IID__FormatCondition =
    {0xe27a992c,0xa330,0x11d0,{0x81,0xdd,0x00,0xc0,0x4f,0xc2,0xf5,0x1b}};
extern "C" const GUID __declspec(selectany) IID_FormatConditions =
    {0xe27a992e,0xa330,0x11d0,{0x81,0xdd,0x00,0xc0,0x4f,0xc2,0xf5,0x1b}};
extern "C" const GUID __declspec(selectany) IID__Textbox =
    {0x3b06e946,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__Combobox =
    {0x3b06e95c,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID_WSParameter =
    {0x4a99c8db,0x1308,0x448b,{0x9e,0xe9,0xaa,0x6a,0x9a,0xc0,0x50,0xe7}};
extern "C" const GUID __declspec(selectany) IID_WSParameters =
    {0x540fc6d0,0x9bca,0x4236,{0xb6,0xc0,0xe5,0x59,0x8c,0xb7,0xa3,0x32}};
extern "C" const GUID __declspec(selectany) IID_Operation =
    {0x96efa5b6,0xf286,0x4590,{0x96,0xb5,0xf9,0x44,0x70,0x76,0x46,0xa1}};
extern "C" const GUID __declspec(selectany) IID_Operations =
    {0xcb2df2b1,0x383d,0x4a3e,{0xbb,0xa1,0xb0,0xe6,0xd1,0xcc,0x48,0xac}};
extern "C" const GUID __declspec(selectany) IID_Entity =
    {0x3d1e34bd,0xf23f,0x46d1,{0xb8,0x0a,0x2b,0xa8,0xac,0xa8,0x50,0xa9}};
extern "C" const GUID __declspec(selectany) IID_Entities =
    {0x4b0e334d,0xb734,0x458a,{0xa0,0x41,0xb5,0x28,0xd0,0x31,0xd4,0xe5}};
extern "C" const GUID __declspec(selectany) IID_WebService =
    {0x7a7b2b33,0xa93d,0x4e04,{0xbf,0xc7,0x60,0x41,0xaa,0xa0,0x04,0x6d}};
extern "C" const GUID __declspec(selectany) IID_WebServices =
    {0x371bf535,0x7914,0x4474,{0xba,0xe9,0x27,0x28,0x1d,0x43,0x12,0x37}};
extern "C" const GUID __declspec(selectany) DIID_DispNavigationButtonEvents =
    {0x3b06e996,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) DIID_DispNavigationControlEvents =
    {0x3b06e992,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_NavigationButton =
    {0x3b06e993,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__NavigationButton =
    {0x3b06e994,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) CLSID_NavigationControl =
    {0x3b06e989,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__LocalVar =
    {0x8357bb52,0x95a2,0x4043,{0xa0,0x40,0x28,0x25,0xfa,0xce,0xf5,0x0d}};
extern "C" const GUID __declspec(selectany) CLSID_LocalVar =
    {0x8357bb51,0x95a2,0x4043,{0xa0,0x40,0x28,0x25,0xfa,0xce,0xf5,0x0d}};
extern "C" const GUID __declspec(selectany) IID__LocalVars =
    {0x8357bb54,0x95a2,0x4043,{0xa0,0x40,0x28,0x25,0xfa,0xce,0xf5,0x0d}};
extern "C" const GUID __declspec(selectany) CLSID_LocalVars =
    {0x8357bb53,0x95a2,0x4043,{0xa0,0x40,0x28,0x25,0xfa,0xce,0xf5,0x0d}};
extern "C" const GUID __declspec(selectany) IID_DoCmd =
    {0xc547e760,0x9658,0x101b,{0x81,0xee,0x00,0xaa,0x00,0x47,0x50,0xe2}};
extern "C" const GUID __declspec(selectany) IID_SharedResource =
    {0x4dcf0ac2,0x53cc,0x45e5,{0xb4,0x17,0x01,0xf3,0xdd,0xd3,0x87,0xe5}};
extern "C" const GUID __declspec(selectany) IID_SharedResources =
    {0x78b78575,0xc7b7,0x4179,{0x82,0x4a,0x95,0xad,0xbf,0x54,0x23,0xe7}};
extern "C" const GUID __declspec(selectany) IID__CurrentProject =
    {0x9212ba71,0x3e79,0x11d1,{0x98,0xbd,0x00,0x60,0x08,0x19,0x7d,0x41}};
extern "C" const GUID __declspec(selectany) IID__NavigationControl =
    {0x3b06e990,0xe47c,0x11cd,{0x87,0x01,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID__Application =
    {0x68cce6c0,0x6129,0x101b,{0xaf,0x4e,0x00,0xaa,0x00,0x3f,0x0f,0x07}};
extern "C" const GUID __declspec(selectany) IID_AllObjects =
    {0xddbd4001,0x44d5,0x11d1,{0x98,0xc0,0x00,0x60,0x08,0x19,0x7d,0x41}};
extern "C" const GUID __declspec(selectany) IID_AccessObject =
    {0xabe316b1,0x3ff6,0x11d1,{0x98,0xbd,0x00,0x60,0x08,0x19,0x7d,0x41}};
extern "C" const GUID __declspec(selectany) IID__DependencyObjects =
    {0x79f41340,0x18c4,0x4aa1,{0x86,0xee,0x5c,0xde,0x9d,0x2c,0xe6,0x00}};
extern "C" const GUID __declspec(selectany) IID__DependencyInfo =
    {0xd05819c6,0x8859,0x418b,{0xa8,0x2f,0x18,0xb6,0xcb,0x74,0x3c,0x8e}};
extern "C" const GUID __declspec(selectany) IID__NavigationPaneShortcut =
    {0x660c9bcf,0xf6a7,0x4296,{0x9f,0xa3,0xa1,0x80,0x6f,0xd7,0x2f,0xf0}};
extern "C" const GUID __declspec(selectany) IID__NavigationPaneShortcuts =
    {0x87412b71,0x18be,0x4224,{0x9b,0x80,0x97,0x47,0xf3,0xae,0x22,0xfe}};
extern "C" const GUID __declspec(selectany) IID__NavigationPaneGroup =
    {0x2008871b,0x62f5,0x48c6,{0xa7,0x06,0x23,0xab,0x3d,0x98,0x5a,0xe7}};
extern "C" const GUID __declspec(selectany) IID__NavigationPaneGroups =
    {0x15889271,0x00bd,0x40aa,{0x90,0x4f,0x8f,0x6b,0x6d,0x3b,0x1f,0x6b}};
extern "C" const GUID __declspec(selectany) IID__NavigationPaneCategory =
    {0x2bbbe604,0x022d,0x428a,{0xbf,0xc7,0x68,0xaa,0xc0,0xd5,0x90,0xef}};
extern "C" const GUID __declspec(selectany) IID__NavigationPaneCategories =
    {0xe919538e,0xdc0e,0x4e3a,{0x9a,0x26,0xa4,0x30,0x2a,0xe9,0x07,0xf5}};
extern "C" const GUID __declspec(selectany) IID__NavigationPane =
    {0x0bd6cd37,0xaff5,0x428d,{0x84,0x14,0x6c,0x71,0xa2,0xf5,0x07,0x5f}};
} // namespace MSAccess

#pragma pack(pop)
