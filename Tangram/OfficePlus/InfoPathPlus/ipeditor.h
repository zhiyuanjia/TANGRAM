// Created by Microsoft (R) C/C++ Compiler Version 14.00.23026.0 (0dd52b50).
//
// C++ source equivalent of Win32 type library D:\Program Files (x86)\Microsoft Office\Office15\IPEDITOR.DLL
// compiler-generated file created 10/13/15 at 08:50:53 - DO NOT EDIT!

//
// Cross-referenced type libraries:
//
//#include "msxml6.h"
#include "..\AccessPlus\msado25.h"

//

#pragma once
#pragma pack(push, 8)

#include <comdef.h>

namespace InfoPath {

//
// Forward references and typedefs
//

struct __declspec(uuid("fd34a380-115f-43ca-8d6f-bbd45fd6f828"))
/* LIBID */ __InfoPath;
struct __declspec(uuid("096cd5b6-0786-11d1-95fa-0080c78ee3bb"))
/* interface */ _IXDOverride;
struct __declspec(uuid("00000556-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ _Recordset;
struct __declspec(uuid("00000550-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ _Connection;
struct __declspec(uuid("096cd58b-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ Windows;
struct __declspec(uuid("096cd595-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ Window;
struct __declspec(uuid("096cd5b1-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ _XDocument;
struct __declspec(uuid("096cd557-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ Solution;
struct __declspec(uuid("096cd55d-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ View;
struct __declspec(uuid("096cd6c1-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ XMLNodes;
struct __declspec(uuid("096cd601-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ ViewInfos;
struct __declspec(uuid("096cd602-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ ViewInfo;
struct __declspec(uuid("096cd5a4-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ DataObjects;
struct __declspec(uuid("096cd5a1-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ DataObject;
struct __declspec(uuid("096cd61f-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ UI;
struct __declspec(uuid("096cd588-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ MailEnvelope;
enum XdWindowType;
struct __declspec(uuid("096cd58d-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ TaskPanes;
struct __declspec(uuid("096cd58e-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ TaskPane;
enum XdTaskPaneType;
struct __declspec(uuid("096cd559-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ XDocuments;
struct __declspec(uuid("096cd647-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ XDocuments2;
struct __declspec(uuid("096cd6a8-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ _XDocument2;
struct __declspec(uuid("096cd692-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ DataAdapters;
struct __declspec(uuid("096cd712-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ SignedDataBlocks;
struct __declspec(uuid("096cd714-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ SignedDataBlock;
enum XdSignatureRelation;
struct __declspec(uuid("096cd716-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ Signatures;
struct __declspec(uuid("096cd718-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ Signature;
struct __declspec(uuid("096cd71a-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ Certificate;
enum XdCertificateStatus;
enum XdSignatureStatus;
struct __declspec(uuid("096cd6be-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ Util;
struct __declspec(uuid("096cd6a0-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ IPMath;
struct __declspec(uuid("096cd773-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ XDocuments3;
struct __declspec(uuid("096cd6b6-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ _XDocument3;
struct __declspec(uuid("096cd6cc-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ Permission;
struct __declspec(uuid("096cd6cb-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ UserPermission;
struct __declspec(uuid("096cd694-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ InputParameters;
struct __declspec(uuid("096cd5b5-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ InputParameter;
struct __declspec(uuid("096cd77b-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ _XDocument4;
struct __declspec(uuid("096cd77c-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ ServerInfo;
struct __declspec(uuid("096cd6bc-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ User;
struct __declspec(uuid("096cd754-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ _NetworkState;
enum XdMachineOnlineState;
struct __declspec(uuid("096cd578-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ Errors;
struct __declspec(uuid("096cd577-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ Error;
struct __declspec(uuid("096cd5fb-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ ViewInfo2;
struct __declspec(uuid("096cd70c-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ View2;
struct __declspec(uuid("096cd765-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ View3;
struct __declspec(uuid("096cd767-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ SignatureLines;
struct __declspec(uuid("096cd768-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ SignatureLine;
enum XdSignatureAppearanceType;
struct __declspec(uuid("096cd6fc-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ MailEnvelope2;
enum XdAttachmentType;
struct __declspec(uuid("096cd76d-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ Solution2;
struct __declspec(uuid("096cd5f7-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ Window2;
enum XdWindowState;
struct __declspec(uuid("096cd548-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ HTMLTaskPane;
struct __declspec(uuid("096cd613-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ DocEvent;
struct __declspec(uuid("096cd676-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ DocReturnEvent;
struct __declspec(uuid("096cd63a-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ DocActionEvent;
struct __declspec(uuid("096cd6d2-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ DocContextChangeEvent;
struct __declspec(uuid("096cd5f5-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ SaveEvent;
struct __declspec(uuid("096cd71d-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ SignEvent;
struct __declspec(uuid("096cd67b-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ MergeEvent;
struct __declspec(uuid("096cd549-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ UI2;
enum XdConfirmButtons;
enum XdConfirmChoice;
struct __declspec(uuid("096cd614-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ VersionUpgradeEvent;
struct __declspec(uuid("096cd69f-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ _ExternalApplication;
struct __declspec(uuid("096cd772-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ _ExternalApplication2;
struct __declspec(uuid("096cd5e5-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ DataDOMEvent;
struct __declspec(uuid("096cd736-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ User2;
struct __declspec(uuid("096cd6a3-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ Date;
struct __declspec(uuid("096cd68e-0786-11d1-95fa-0080c78ee3bb"))
/* interface */ InfoPathControl;
struct __declspec(uuid("096cd68f-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ InfoPathControlSite;
struct __declspec(uuid("096cd77d-0786-11d1-95fa-0080c78ee3bb"))
/* interface */ InfoPathControl2;
struct __declspec(uuid("096cd784-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ ApplicationEventsEmpty;
struct __declspec(uuid("096cd785-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ DataDOMEmpty;
struct __declspec(uuid("096cd786-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ ButtonEmpty;
enum XdDocumentVersionMode;
struct __declspec(uuid("096cd58a-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ _Application;
struct __declspec(uuid("096cd6bb-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ _Application2;
struct __declspec(uuid("096cd551-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ _XDocumentEventSink;
struct __declspec(uuid("096cd563-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ _XDocumentEventSink2;
struct __declspec(uuid("096cd567-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ _DataDOMEventSink;
struct __declspec(uuid("096cd653-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ ADOAdapter;
struct __declspec(uuid("096cd5d3-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ ADOAdapter2;
struct __declspec(uuid("096cd654-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ WebServiceAdapter;
struct __declspec(uuid("096cd5d4-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ WebServiceAdapter2;
struct __declspec(uuid("096cd655-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ XMLFileAdapter;
struct __declspec(uuid("096cd5d5-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ XMLFileAdapter2;
struct __declspec(uuid("096cd734-0786-11d1-95fa-0080c78ee3bb"))
/* interface */ IDataAdapterMOM;
struct __declspec(uuid("096cd69a-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ SharepointListAdapter;
struct __declspec(uuid("096cd740-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ SharepointListAdapter2;
struct __declspec(uuid("096cd800-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ IGrooveAdapter;
struct __declspec(uuid("096cd5d6-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ DAVAdapter;
struct __declspec(uuid("096cd5d7-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ EmailAdapter;
struct __declspec(uuid("096cd6bf-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ HWSAdapter;
struct __declspec(uuid("096cd739-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ SubmitToHostAdapter;
struct __declspec(uuid("096cd635-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ SharePointListAdapterRW;
struct __declspec(uuid("096cd743-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ BDCAdapter;
struct __declspec(uuid("096cd5f4-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ HTMLTaskPaneExternal;
struct __declspec(uuid("096cd6a9-0786-11d1-95fa-0080c78ee3bb"))
/* interface */ ICLRExtensions;
struct __declspec(uuid("096cd6ab-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ _ButtonEventSink;
struct __declspec(uuid("096cd738-0786-11d1-95fa-0080c78ee3bb"))
/* interface */ ISubmitToHostEventHandler;
struct __declspec(uuid("096cd764-0786-11d1-95fa-0080c78ee3bb"))
/* interface */ INotifyHostEventHandler;
enum XdReadOnlyViewMode;
struct __declspec(uuid("096cd73a-0786-11d1-95fa-0080c78ee3bb"))
/* interface */ IInitEventHandler;
struct __declspec(uuid("096cd742-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ IInfoPathEditorProperties;
struct __declspec(uuid("096cd774-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ InfoPathEditorWithAppDomain;
struct __declspec(uuid("096cd706-0786-11d1-95fa-0080c78ee3bb"))
/* interface */ InfoPathEditor;
struct __declspec(uuid("096cd72e-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ _Application3;
struct __declspec(uuid("096cd72d-0786-11d1-95fa-0080c78ee3bb"))
/* dispinterface */ _ApplicationEvents;
struct __declspec(uuid("096cd76c-0786-11d1-95fa-0080c78ee3bb"))
/* interface */ IInfoPathDataImporterFields;
struct __declspec(uuid("096cd6d9-0786-11d1-95fa-0080c78ee3bb"))
/* interface */ IInfoPathDataImporter;
struct __declspec(uuid("096cd6da-0786-11d1-95fa-0080c78ee3bb"))
/* interface */ IInfoPathViewControl;
enum CommandIds;
struct /* coclass */ Application;
struct /* coclass */ ApplicationEvents;
struct /* coclass */ ExternalApplication;
struct /* coclass */ XDocument;
struct /* coclass */ XDNetworkState;
struct /* coclass */ DataDOM;
struct /* coclass */ Button;
struct /* coclass */ UIObject;
struct /* coclass */ DataAdaptersCollection;
struct /* coclass */ EmailAdapterObject;
struct /* coclass */ DAVAdapterObject;
struct /* coclass */ BDCAdapterObject;
struct /* coclass */ HWSAdapterObject;
struct /* coclass */ SubmitToHostAdapterObject;
struct /* coclass */ SharepointListAdapterObject;
struct /* coclass */ SharePointListAdapterRWObject;
struct /* coclass */ XMLFileAdapterObject;
struct /* coclass */ WebServiceAdapterObject;
struct /* coclass */ ADOAdapterObject;
struct /* coclass */ DocEventObject;
struct /* coclass */ DocReturnEventObject;
struct /* coclass */ DocActionEventObject;
struct /* coclass */ VersionUpgradeEventObject;
struct /* coclass */ DataDOMEventObject;
struct /* coclass */ SolutionObject;
struct /* coclass */ WindowObject;
struct /* coclass */ WindowsCollection;
struct /* coclass */ TaskPanesCollection;
struct /* coclass */ TaskPaneObject;
struct /* coclass */ HTMLTaskPaneObject;
struct /* coclass */ ViewObject;
struct /* coclass */ MailEnvelopeObject;
struct /* coclass */ XDocumentsCollection;
struct /* coclass */ ViewInfoObject;
struct /* coclass */ ViewInfosCollection;
struct /* coclass */ ErrorObject;
struct /* coclass */ ErrorsCollection;
struct /* coclass */ UtilObject;
struct /* coclass */ MathObject;
struct /* coclass */ DateObject;
struct /* coclass */ SignedDataBlocksCollection;
struct /* coclass */ SignedDataBlockObject;
struct /* coclass */ SignaturesCollection;
struct /* coclass */ SignatureObject;
struct /* coclass */ SignatureLinesCollection;
struct /* coclass */ SignatureLineObject;
struct /* coclass */ CertificateObject;
struct /* coclass */ MergeEventObject;
struct /* coclass */ SaveEventObject;
struct /* coclass */ SignEventObject;
struct /* coclass */ XMLNodesCollection;
struct /* coclass */ DataSourceObject;
struct /* coclass */ DataObjectsCollection;
struct /* coclass */ DocContextChangeEventObject;
struct /* coclass */ UserObject;
struct /* coclass */ ServerInfoObject;
struct /* coclass */ UserPermissionObject;
struct /* coclass */ PermissionObject;
struct /* coclass */ InfoPathEditorObject;
struct /* coclass */ InputParameterObject;
struct /* coclass */ InputParameterCollection;

//
// Smart pointer typedef declarations
//

_COM_SMARTPTR_TYPEDEF(_IXDOverride, __uuidof(_IXDOverride));
_COM_SMARTPTR_TYPEDEF(_Recordset, __uuidof(_Recordset));
_COM_SMARTPTR_TYPEDEF(_Connection, __uuidof(_Connection));
_COM_SMARTPTR_TYPEDEF(Solution, __uuidof(Solution));
_COM_SMARTPTR_TYPEDEF(XMLNodes, __uuidof(XMLNodes));
_COM_SMARTPTR_TYPEDEF(ViewInfo, __uuidof(ViewInfo));
_COM_SMARTPTR_TYPEDEF(ViewInfos, __uuidof(ViewInfos));
_COM_SMARTPTR_TYPEDEF(DataObject, __uuidof(DataObject));
_COM_SMARTPTR_TYPEDEF(DataObjects, __uuidof(DataObjects));
_COM_SMARTPTR_TYPEDEF(UI, __uuidof(UI));
_COM_SMARTPTR_TYPEDEF(MailEnvelope, __uuidof(MailEnvelope));
_COM_SMARTPTR_TYPEDEF(TaskPane, __uuidof(TaskPane));
_COM_SMARTPTR_TYPEDEF(TaskPanes, __uuidof(TaskPanes));
_COM_SMARTPTR_TYPEDEF(DataAdapters, __uuidof(DataAdapters));
_COM_SMARTPTR_TYPEDEF(Certificate, __uuidof(Certificate));
_COM_SMARTPTR_TYPEDEF(Signature, __uuidof(Signature));
_COM_SMARTPTR_TYPEDEF(Signatures, __uuidof(Signatures));
_COM_SMARTPTR_TYPEDEF(SignedDataBlock, __uuidof(SignedDataBlock));
_COM_SMARTPTR_TYPEDEF(SignedDataBlocks, __uuidof(SignedDataBlocks));
_COM_SMARTPTR_TYPEDEF(IPMath, __uuidof(IPMath));
_COM_SMARTPTR_TYPEDEF(Util, __uuidof(Util));
_COM_SMARTPTR_TYPEDEF(UserPermission, __uuidof(UserPermission));
_COM_SMARTPTR_TYPEDEF(Permission, __uuidof(Permission));
_COM_SMARTPTR_TYPEDEF(InputParameter, __uuidof(InputParameter));
_COM_SMARTPTR_TYPEDEF(InputParameters, __uuidof(InputParameters));
_COM_SMARTPTR_TYPEDEF(ServerInfo, __uuidof(ServerInfo));
_COM_SMARTPTR_TYPEDEF(User, __uuidof(User));
_COM_SMARTPTR_TYPEDEF(_NetworkState, __uuidof(_NetworkState));
_COM_SMARTPTR_TYPEDEF(Errors, __uuidof(Errors));
_COM_SMARTPTR_TYPEDEF(Error, __uuidof(Error));
_COM_SMARTPTR_TYPEDEF(ViewInfo2, __uuidof(ViewInfo2));
_COM_SMARTPTR_TYPEDEF(SignatureLine, __uuidof(SignatureLine));
_COM_SMARTPTR_TYPEDEF(SignatureLines, __uuidof(SignatureLines));
_COM_SMARTPTR_TYPEDEF(MailEnvelope2, __uuidof(MailEnvelope2));
_COM_SMARTPTR_TYPEDEF(Solution2, __uuidof(Solution2));
_COM_SMARTPTR_TYPEDEF(HTMLTaskPane, __uuidof(HTMLTaskPane));
_COM_SMARTPTR_TYPEDEF(UI2, __uuidof(UI2));
_COM_SMARTPTR_TYPEDEF(_ExternalApplication, __uuidof(_ExternalApplication));
_COM_SMARTPTR_TYPEDEF(_ExternalApplication2, __uuidof(_ExternalApplication2));
_COM_SMARTPTR_TYPEDEF(User2, __uuidof(User2));
_COM_SMARTPTR_TYPEDEF(Date, __uuidof(Date));
_COM_SMARTPTR_TYPEDEF(ApplicationEventsEmpty, __uuidof(ApplicationEventsEmpty));
_COM_SMARTPTR_TYPEDEF(DataDOMEmpty, __uuidof(DataDOMEmpty));
_COM_SMARTPTR_TYPEDEF(ButtonEmpty, __uuidof(ButtonEmpty));
_COM_SMARTPTR_TYPEDEF(ADOAdapter, __uuidof(ADOAdapter));
_COM_SMARTPTR_TYPEDEF(ADOAdapter2, __uuidof(ADOAdapter2));
_COM_SMARTPTR_TYPEDEF(WebServiceAdapter, __uuidof(WebServiceAdapter));
_COM_SMARTPTR_TYPEDEF(WebServiceAdapter2, __uuidof(WebServiceAdapter2));
_COM_SMARTPTR_TYPEDEF(XMLFileAdapter, __uuidof(XMLFileAdapter));
_COM_SMARTPTR_TYPEDEF(XMLFileAdapter2, __uuidof(XMLFileAdapter2));
_COM_SMARTPTR_TYPEDEF(IDataAdapterMOM, __uuidof(IDataAdapterMOM));
_COM_SMARTPTR_TYPEDEF(SharepointListAdapter, __uuidof(SharepointListAdapter));
_COM_SMARTPTR_TYPEDEF(SharepointListAdapter2, __uuidof(SharepointListAdapter2));
_COM_SMARTPTR_TYPEDEF(IGrooveAdapter, __uuidof(IGrooveAdapter));
_COM_SMARTPTR_TYPEDEF(DAVAdapter, __uuidof(DAVAdapter));
_COM_SMARTPTR_TYPEDEF(EmailAdapter, __uuidof(EmailAdapter));
_COM_SMARTPTR_TYPEDEF(HWSAdapter, __uuidof(HWSAdapter));
_COM_SMARTPTR_TYPEDEF(SubmitToHostAdapter, __uuidof(SubmitToHostAdapter));
_COM_SMARTPTR_TYPEDEF(SharePointListAdapterRW, __uuidof(SharePointListAdapterRW));
_COM_SMARTPTR_TYPEDEF(BDCAdapter, __uuidof(BDCAdapter));
_COM_SMARTPTR_TYPEDEF(ICLRExtensions, __uuidof(ICLRExtensions));
_COM_SMARTPTR_TYPEDEF(ISubmitToHostEventHandler, __uuidof(ISubmitToHostEventHandler));
_COM_SMARTPTR_TYPEDEF(INotifyHostEventHandler, __uuidof(INotifyHostEventHandler));
_COM_SMARTPTR_TYPEDEF(IInfoPathEditorProperties, __uuidof(IInfoPathEditorProperties));
_COM_SMARTPTR_TYPEDEF(InfoPathEditorWithAppDomain, __uuidof(InfoPathEditorWithAppDomain));
_COM_SMARTPTR_TYPEDEF(_ApplicationEvents, __uuidof(_ApplicationEvents));
_COM_SMARTPTR_TYPEDEF(IInfoPathDataImporterFields, __uuidof(IInfoPathDataImporterFields));
_COM_SMARTPTR_TYPEDEF(IInfoPathDataImporter, __uuidof(IInfoPathDataImporter));
_COM_SMARTPTR_TYPEDEF(IInfoPathViewControl, __uuidof(IInfoPathViewControl));
_COM_SMARTPTR_TYPEDEF(Windows, __uuidof(Windows));
_COM_SMARTPTR_TYPEDEF(Window, __uuidof(Window));
_COM_SMARTPTR_TYPEDEF(View, __uuidof(View));
_COM_SMARTPTR_TYPEDEF(_XDocument, __uuidof(_XDocument));
_COM_SMARTPTR_TYPEDEF(XDocuments, __uuidof(XDocuments));
_COM_SMARTPTR_TYPEDEF(_XDocument2, __uuidof(_XDocument2));
_COM_SMARTPTR_TYPEDEF(XDocuments2, __uuidof(XDocuments2));
_COM_SMARTPTR_TYPEDEF(XDocuments3, __uuidof(XDocuments3));
_COM_SMARTPTR_TYPEDEF(_XDocument3, __uuidof(_XDocument3));
_COM_SMARTPTR_TYPEDEF(_XDocument4, __uuidof(_XDocument4));
_COM_SMARTPTR_TYPEDEF(View2, __uuidof(View2));
_COM_SMARTPTR_TYPEDEF(View3, __uuidof(View3));
_COM_SMARTPTR_TYPEDEF(Window2, __uuidof(Window2));
_COM_SMARTPTR_TYPEDEF(DocEvent, __uuidof(DocEvent));
_COM_SMARTPTR_TYPEDEF(DocReturnEvent, __uuidof(DocReturnEvent));
_COM_SMARTPTR_TYPEDEF(DocActionEvent, __uuidof(DocActionEvent));
_COM_SMARTPTR_TYPEDEF(DocContextChangeEvent, __uuidof(DocContextChangeEvent));
_COM_SMARTPTR_TYPEDEF(SaveEvent, __uuidof(SaveEvent));
_COM_SMARTPTR_TYPEDEF(SignEvent, __uuidof(SignEvent));
_COM_SMARTPTR_TYPEDEF(MergeEvent, __uuidof(MergeEvent));
_COM_SMARTPTR_TYPEDEF(VersionUpgradeEvent, __uuidof(VersionUpgradeEvent));
_COM_SMARTPTR_TYPEDEF(DataDOMEvent, __uuidof(DataDOMEvent));
_COM_SMARTPTR_TYPEDEF(InfoPathControlSite, __uuidof(InfoPathControlSite));
_COM_SMARTPTR_TYPEDEF(InfoPathControl, __uuidof(InfoPathControl));
_COM_SMARTPTR_TYPEDEF(InfoPathControl2, __uuidof(InfoPathControl2));
_COM_SMARTPTR_TYPEDEF(_Application, __uuidof(_Application));
_COM_SMARTPTR_TYPEDEF(_Application2, __uuidof(_Application2));
_COM_SMARTPTR_TYPEDEF(_XDocumentEventSink, __uuidof(_XDocumentEventSink));
_COM_SMARTPTR_TYPEDEF(_XDocumentEventSink2, __uuidof(_XDocumentEventSink2));
_COM_SMARTPTR_TYPEDEF(_DataDOMEventSink, __uuidof(_DataDOMEventSink));
_COM_SMARTPTR_TYPEDEF(HTMLTaskPaneExternal, __uuidof(HTMLTaskPaneExternal));
_COM_SMARTPTR_TYPEDEF(_ButtonEventSink, __uuidof(_ButtonEventSink));
_COM_SMARTPTR_TYPEDEF(IInitEventHandler, __uuidof(IInitEventHandler));
_COM_SMARTPTR_TYPEDEF(InfoPathEditor, __uuidof(InfoPathEditor));
_COM_SMARTPTR_TYPEDEF(_Application3, __uuidof(_Application3));

//
// Type library items
//

struct __declspec(uuid("096cd5b6-0786-11d1-95fa-0080c78ee3bb"))
_IXDOverride : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Window ( ) = 0;
      virtual HRESULT __stdcall Open ( ) = 0;
      virtual HRESULT __stdcall Item ( ) = 0;
      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall Count ( ) = 0;
      virtual HRESULT __stdcall Close ( ) = 0;
      virtual HRESULT __stdcall Alert ( ) = 0;
      virtual HRESULT __stdcall Refresh ( ) = 0;
      virtual HRESULT __stdcall Visible ( ) = 0;
      virtual HRESULT __stdcall Navigate ( ) = 0;
      virtual HRESULT __stdcall Version ( ) = 0;
      virtual HRESULT __stdcall Extension ( ) = 0;
      virtual HRESULT __stdcall Source ( ) = 0;
      virtual HRESULT __stdcall Type ( ) = 0;
      virtual HRESULT __stdcall Node ( ) = 0;
      virtual HRESULT __stdcall Execute ( ) = 0;
      virtual HRESULT __stdcall URI ( ) = 0;
      virtual HRESULT __stdcall Name ( ) = 0;
      virtual HRESULT __stdcall Parent ( ) = 0;
      virtual HRESULT __stdcall ErrorCode ( ) = 0;
      virtual HRESULT __stdcall InsertBefore ( ) = 0;
      virtual HRESULT __stdcall Offset ( ) = 0;
      virtual HRESULT __stdcall SetAttribute ( ) = 0;
      virtual HRESULT __stdcall GetAttribute ( ) = 0;
};

struct __declspec(uuid("00000556-0000-0010-8000-00aa006d2ea4"))
_Recordset : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall _RecordsetHack (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
};

struct __declspec(uuid("00000550-0000-0010-8000-00aa006d2ea4"))
_Connection : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall _ConnectionHack (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
};

struct __declspec(uuid("096cd557-0786-11d1-95fa-0080c78ee3bb"))
Solution : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_DOM (
        /*[out,retval]*/ struct IXMLDOMDocument * * ppDOM ) = 0;
      virtual HRESULT __stdcall get_PackageURL (
        /*[out,retval]*/ BSTR * pbstrSolutionURL ) = 0;
      virtual HRESULT __stdcall get_URI (
        /*[out,retval]*/ BSTR * pbstrSolutionURI ) = 0;
      virtual HRESULT __stdcall get_Version (
        /*[out,retval]*/ BSTR * pbstrSolutionVersion ) = 0;
};

struct __declspec(uuid("096cd6c1-0786-11d1-95fa-0080c78ee3bb"))
XMLNodes : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get__NewEnum (
        /*[out,retval]*/ IUnknown * * ppunk ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT varIndex,
        /*[out,retval]*/ struct IXMLDOMNode * * pRetVal ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * pRetVal ) = 0;
};

struct __declspec(uuid("096cd602-0786-11d1-95fa-0080c78ee3bb"))
ViewInfo : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrValue ) = 0;
      virtual HRESULT __stdcall get_IsDefault (
        /*[out,retval]*/ VARIANT_BOOL * pvfValue ) = 0;
      virtual HRESULT __stdcall put_IsDefault (
        /*[in]*/ VARIANT_BOOL pvfValue ) = 0;
};

struct __declspec(uuid("096cd601-0786-11d1-95fa-0080c78ee3bb"))
ViewInfos : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get__NewEnum (
        /*[out,retval]*/ IUnknown * * ppunk ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT varIndex,
        /*[out,retval]*/ struct ViewInfo * * ppItem ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * plCount ) = 0;
};

struct __declspec(uuid("096cd5a1-0786-11d1-95fa-0080c78ee3bb"))
DataObject : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_DOM (
        /*[out,retval]*/ struct IXMLDOMDocument * * ppDOM ) = 0;
      virtual HRESULT __stdcall get_QueryAdapter (
        /*[out,retval]*/ IDispatch * * ppdispDataAdapter ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall Query ( ) = 0;
};

struct __declspec(uuid("096cd5a4-0786-11d1-95fa-0080c78ee3bb"))
DataObjects : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get__NewEnum (
        /*[out,retval]*/ IUnknown * * ppunk ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT varIndex,
        /*[out,retval]*/ struct DataObject * * ppDataObject ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * plCount ) = 0;
};

struct __declspec(uuid("096cd61f-0786-11d1-95fa-0080c78ee3bb"))
UI : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Alert (
        /*[in]*/ BSTR bstrAlertString ) = 0;
      virtual HRESULT __stdcall ShowModalDialog (
        /*[in]*/ BSTR bstrName,
        /*[in]*/ VARIANT varArguments,
        /*[in]*/ VARIANT varHeight,
        /*[in]*/ VARIANT varWidth,
        /*[in]*/ VARIANT varTop,
        /*[in]*/ VARIANT varLeft,
        /*[out,retval]*/ VARIANT * pvarReturn ) = 0;
      virtual HRESULT __stdcall ShowSignatureDialog ( ) = 0;
      virtual HRESULT __stdcall ShowMailItem (
        /*[in]*/ BSTR bstrTo,
        /*[in]*/ BSTR bstrCC,
        /*[in]*/ BSTR bstrBCC,
        /*[in]*/ BSTR bstrSubject,
        /*[in]*/ BSTR bstrBody ) = 0;
};

struct __declspec(uuid("096cd588-0786-11d1-95fa-0080c78ee3bb"))
MailEnvelope : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_BCC (
        /*[out,retval]*/ BSTR * pbstrBCC ) = 0;
      virtual HRESULT __stdcall put_BCC (
        /*[in]*/ BSTR pbstrBCC ) = 0;
      virtual HRESULT __stdcall get_CC (
        /*[out,retval]*/ BSTR * pbstrCC ) = 0;
      virtual HRESULT __stdcall put_CC (
        /*[in]*/ BSTR pbstrCC ) = 0;
      virtual HRESULT __stdcall get_Subject (
        /*[out,retval]*/ BSTR * pbstrSubject ) = 0;
      virtual HRESULT __stdcall put_Subject (
        /*[in]*/ BSTR pbstrSubject ) = 0;
      virtual HRESULT __stdcall get_To (
        /*[out,retval]*/ BSTR * pbstrTo ) = 0;
      virtual HRESULT __stdcall put_To (
        /*[in]*/ BSTR pbstrTo ) = 0;
      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pvfVisible ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pvfVisible ) = 0;
};

enum __declspec(uuid("be47e97c-54b4-385d-8bae-324b6a167680"))
XdWindowType
{
    xdEditorWindow = 0,
    xdDesignerWindow = 1
};

enum __declspec(uuid("f3960aa8-0a2e-3d24-a603-5b30981a45c5"))
XdTaskPaneType
{
    xdTaskPaneHTML = 0,
    xdTaskPaneFillOutAForm = 1,
    xdTaskPaneDesignerNew = 2,
    xdTaskPaneSearchResults = 3,
    xdTaskPaneHelp = 4,
    xdTaskPaneClipArt = 5,
    xdTaskPaneFind = 6,
    xdTaskPaneReplace = 7,
    xdTaskPaneFormatting = 8,
    xdTaskPaneBulletsNumbering = 9,
    xdTaskPaneSpelling = 10,
    xdTaskPaneParaFormatting = 11,
    xdTaskPaneHWSWorkflow = 12
};

struct __declspec(uuid("096cd58e-0786-11d1-95fa-0080c78ee3bb"))
TaskPane : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Visible (
        /*[out,retval]*/ VARIANT_BOOL * pfVisible ) = 0;
      virtual HRESULT __stdcall put_Visible (
        /*[in]*/ VARIANT_BOOL pfVisible ) = 0;
      virtual HRESULT __stdcall get_Type (
        /*[out,retval]*/ enum XdTaskPaneType * pxdtptype ) = 0;
};

struct __declspec(uuid("096cd58d-0786-11d1-95fa-0080c78ee3bb"))
TaskPanes : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get__NewEnum (
        /*[out,retval]*/ IUnknown * * ppunk ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT varIndex,
        /*[out,retval]*/ struct TaskPane * * ppTaskPane ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * plLength ) = 0;
};

struct __declspec(uuid("096cd692-0786-11d1-95fa-0080c78ee3bb"))
DataAdapters : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get__NewEnum (
        /*[out,retval]*/ IUnknown * * ppunk ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT varIndex,
        /*[out,retval]*/ IDispatch * * ppdispDataAdapter ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * plCount ) = 0;
};

enum __declspec(uuid("57c4bdea-6e4c-39e2-acd2-aa61226ae895"))
XdSignatureRelation
{
    xdSignatureRelationSingle = 1,
    xdSignatureRelationCoSign = 2,
    xdSignatureRelationCounterSign = 3
};

enum __declspec(uuid("31bb2f32-759a-350d-a723-6d2154ac9abc"))
XdCertificateStatus
{
    xdCertificateStatusError = 0,
    xdCertificateStatusValid = 1,
    xdCertificateStatusExpired = 2,
    xdCertificateStatusNotTrusted = 3,
    xdCertificateStatusRevoked = 4
};

struct __declspec(uuid("096cd71a-0786-11d1-95fa-0080c78ee3bb"))
Certificate : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_IssuedTo (
        /*[out,retval]*/ BSTR * pbstrIssuedTo ) = 0;
      virtual HRESULT __stdcall get_IssuedBy (
        /*[out,retval]*/ BSTR * pbstrIssuedBy ) = 0;
      virtual HRESULT __stdcall get_ExpirationDate (
        /*[out,retval]*/ BSTR * pbstrIssuedBy ) = 0;
      virtual HRESULT __stdcall get_Status (
        /*[out,retval]*/ enum XdCertificateStatus * pStatus ) = 0;
};

enum __declspec(uuid("e5e3a7c3-b69a-3e65-8019-1d8b1a5779cd"))
XdSignatureStatus
{
    xdSignatureStatusError = 0,
    xdSignatureStatusValid = 1,
    xdSignatureStatusInvalid = 2,
    xdSignatureStatusUnsupported = 3
};

struct __declspec(uuid("096cd718-0786-11d1-95fa-0080c78ee3bb"))
Signature : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Comment (
        /*[out,retval]*/ BSTR * pbstrComment ) = 0;
      virtual HRESULT __stdcall get_Certificate (
        /*[out,retval]*/ struct Certificate * * ppCertificate ) = 0;
      virtual HRESULT __stdcall get_Status (
        /*[out,retval]*/ enum XdSignatureStatus * pStatus ) = 0;
      virtual HRESULT __stdcall get_SignatureBlockXmlNode (
        /*[out,retval]*/ struct IXMLDOMNode * * ppSignatureNode ) = 0;
      virtual HRESULT __stdcall Sign ( ) = 0;
};

struct __declspec(uuid("096cd716-0786-11d1-95fa-0080c78ee3bb"))
Signatures : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get__NewEnum (
        /*[out,retval]*/ IUnknown * * ppunk ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT varIndex,
        /*[out,retval]*/ struct Signature * * ppSignature ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * plLength ) = 0;
      virtual HRESULT __stdcall Create (
        /*[out,retval]*/ struct Signature * * ppSignature ) = 0;
};

struct __declspec(uuid("096cd714-0786-11d1-95fa-0080c78ee3bb"))
SignedDataBlock : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall get_XPath (
        /*[out,retval]*/ BSTR * pbstrXPath ) = 0;
      virtual HRESULT __stdcall get_XPathNamespaceDeclarations (
        /*[out,retval]*/ BSTR * pbstrXPathNamespaceDeclarations ) = 0;
      virtual HRESULT __stdcall get_Caption (
        /*[out,retval]*/ BSTR * pbstrCaption ) = 0;
      virtual HRESULT __stdcall get_SignatureRelation (
        /*[out,retval]*/ enum XdSignatureRelation * pSignatureRelation ) = 0;
      virtual HRESULT __stdcall get_Signatures (
        /*[out,retval]*/ struct Signatures * * ppSignatures ) = 0;
      virtual HRESULT __stdcall get_SignatureContainer (
        /*[out,retval]*/ struct IXMLDOMNode * * ppSignatureContainer ) = 0;
      virtual HRESULT __stdcall Sign ( ) = 0;
};

struct __declspec(uuid("096cd712-0786-11d1-95fa-0080c78ee3bb"))
SignedDataBlocks : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get__NewEnum (
        /*[out,retval]*/ IUnknown * * ppunk ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT varIndex,
        /*[out,retval]*/ struct SignedDataBlock * * ppSignedDataBlock ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * plLength ) = 0;
};

struct __declspec(uuid("096cd6a0-0786-11d1-95fa-0080c78ee3bb"))
IPMath : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Avg (
        /*[in]*/ struct IXMLDOMNodeList * pxmllistInput,
        /*[out,retval]*/ VARIANT * pvarOutput ) = 0;
      virtual HRESULT __stdcall Max (
        /*[in]*/ struct IXMLDOMNodeList * pxmllistInput,
        /*[out,retval]*/ VARIANT * pvarOutput ) = 0;
      virtual HRESULT __stdcall Min (
        /*[in]*/ struct IXMLDOMNodeList * pxmllistInput,
        /*[out,retval]*/ VARIANT * pvarOutput ) = 0;
      virtual HRESULT __stdcall Nz (
        /*[in]*/ struct IXMLDOMNodeList * pxmllistInput,
        /*[out,retval]*/ VARIANT * pvarOutput ) = 0;
      virtual HRESULT __stdcall Eval (
        /*[in]*/ struct IXMLDOMNodeList * pxmllistContext,
        /*[in]*/ BSTR bstrExpression,
        /*[out,retval]*/ VARIANT * pvarOutput ) = 0;
};

struct __declspec(uuid("096cd6be-0786-11d1-95fa-0080c78ee3bb"))
Util : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Match (
        /*[in]*/ BSTR bstrValue,
        /*[in]*/ BSTR bstrPattern,
        /*[out,retval]*/ VARIANT_BOOL * pfMatch ) = 0;
      virtual HRESULT __stdcall get_Math (
        /*[out,retval]*/ struct IPMath * * ppMath ) = 0;
      virtual HRESULT __stdcall get_Date (
        /*[out,retval]*/ DATE * * ppDate ) = 0;
};

struct __declspec(uuid("096cd6cb-0786-11d1-95fa-0080c78ee3bb"))
UserPermission : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_UserId (
        /*[out,retval]*/ BSTR * pbstrUserId ) = 0;
      virtual HRESULT __stdcall get_Permission (
        /*[out,retval]*/ long * plPermission ) = 0;
      virtual HRESULT __stdcall put_Permission (
        /*[in]*/ long plPermission ) = 0;
      virtual HRESULT __stdcall get_ExpirationDate (
        /*[out,retval]*/ VARIANT * pvarExpirationDate ) = 0;
      virtual HRESULT __stdcall put_ExpirationDate (
        /*[in]*/ VARIANT pvarExpirationDate ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ IDispatch * * ppidisp ) = 0;
      virtual HRESULT __stdcall Remove ( ) = 0;
};

struct __declspec(uuid("096cd6cc-0786-11d1-95fa-0080c78ee3bb"))
Permission : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT varIndex,
        /*[out,retval]*/ struct UserPermission * * ppirmUserPerm ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * plCount ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ BSTR bstrUserId,
        /*[in]*/ VARIANT varPermission,
        /*[in]*/ VARIANT varExpirationDate,
        /*[out,retval]*/ struct UserPermission * * ppirmUserPermission ) = 0;
      virtual HRESULT __stdcall ApplyPolicy (
        /*[in]*/ BSTR bstrFileName ) = 0;
      virtual HRESULT __stdcall RemoveAll ( ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * pvfEnabled ) = 0;
      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL pvfEnabled ) = 0;
      virtual HRESULT __stdcall get_RequestPermissionURL (
        /*[out,retval]*/ BSTR * pbstrContact ) = 0;
      virtual HRESULT __stdcall put_RequestPermissionURL (
        /*[in]*/ BSTR pbstrContact ) = 0;
      virtual HRESULT __stdcall get_PolicyName (
        /*[out,retval]*/ BSTR * pbstrPolicyName ) = 0;
      virtual HRESULT __stdcall get_PolicyDescription (
        /*[out,retval]*/ BSTR * pbstrPolicyDescription ) = 0;
      virtual HRESULT __stdcall get_StoreLicenses (
        /*[out,retval]*/ VARIANT_BOOL * pvfEnabled ) = 0;
      virtual HRESULT __stdcall put_StoreLicenses (
        /*[in]*/ VARIANT_BOOL pvfEnabled ) = 0;
      virtual HRESULT __stdcall get_DocumentAuthor (
        /*[out,retval]*/ BSTR * pbstrAuthor ) = 0;
      virtual HRESULT __stdcall put_DocumentAuthor (
        /*[in]*/ BSTR pbstrAuthor ) = 0;
      virtual HRESULT __stdcall get_PermissionFromPolicy (
        /*[out,retval]*/ VARIANT_BOOL * pvfFromPolicy ) = 0;
      virtual HRESULT __stdcall get__NewEnum (
        /*[out,retval]*/ IUnknown * * ppunkEnum ) = 0;
};

struct __declspec(uuid("096cd5b5-0786-11d1-95fa-0080c78ee3bb"))
InputParameter : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrParamName ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ BSTR * pbstrParamValue ) = 0;
};

struct __declspec(uuid("096cd694-0786-11d1-95fa-0080c78ee3bb"))
InputParameters : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get__NewEnum (
        /*[out,retval]*/ IUnknown * * ppunk ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT varIndex,
        /*[out,retval]*/ struct InputParameter * * ppInputParameter ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * plCount ) = 0;
};

struct __declspec(uuid("096cd77c-0786-11d1-95fa-0080c78ee3bb"))
ServerInfo : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_SharePointServerRootUrl (
        /*[out,retval]*/ BSTR * pbstrServerRootUrl ) = 0;
      virtual HRESULT __stdcall get_SharePointSiteUrl (
        /*[out,retval]*/ BSTR * pbstrSiteUrl ) = 0;
      virtual HRESULT __stdcall get_SharePointListUrl (
        /*[out,retval]*/ BSTR * pbstrListUrl ) = 0;
      virtual HRESULT __stdcall get_SharePointSiteCollectionUrl (
        /*[out,retval]*/ BSTR * pbstrSiteCollectionUrl ) = 0;
};

struct __declspec(uuid("096cd6bc-0786-11d1-95fa-0080c78ee3bb"))
User : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall IsCurrentUser (
        /*[in]*/ BSTR bstrUsername,
        /*[out,retval]*/ VARIANT_BOOL * pfMatch ) = 0;
      virtual HRESULT __stdcall IsUserMemberOf (
        /*[in]*/ BSTR bstrGroupname,
        /*[out,retval]*/ VARIANT_BOOL * pfMatch ) = 0;
};

enum __declspec(uuid("48110f4e-588f-35ce-903d-5427377801c4"))
XdMachineOnlineState
{
    xdOffline = 0,
    xdOnline = 1,
    xdIEIsInOfflineMode = 2
};

struct __declspec(uuid("096cd754-0786-11d1-95fa-0080c78ee3bb"))
_NetworkState : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_MachineOnlineState (
        /*[out,retval]*/ enum XdMachineOnlineState * penumOnlineState ) = 0;
      virtual HRESULT __stdcall IsDestinationReachable (
        /*[in]*/ BSTR bstrDestination,
        /*[out,retval]*/ VARIANT_BOOL * pfReachable ) = 0;
};

struct __declspec(uuid("096cd578-0786-11d1-95fa-0080c78ee3bb"))
Errors : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get__NewEnum (
        /*[out,retval]*/ IUnknown * * ppunk ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ long index,
        /*[out,retval]*/ struct ADODB::Error * * ppValidationError ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * plCount ) = 0;
      virtual HRESULT __stdcall Add (
        /*[in]*/ VARIANT varNode,
        /*[in]*/ BSTR bstrConditionName,
        /*[in]*/ BSTR bstrShortErrorMessage,
        /*[in]*/ BSTR bstrDetailedErrorMessage,
        /*[in]*/ long lErrorCode,
        /*[in]*/ BSTR bstrType,
        /*[out,retval]*/ struct ADODB::Error * * ppValidationError ) = 0;
      virtual HRESULT __stdcall Delete (
        /*[in]*/ VARIANT varNode,
        /*[in]*/ BSTR bstrConditionName ) = 0;
      virtual HRESULT __stdcall DeleteAll ( ) = 0;
};

struct __declspec(uuid("096cd577-0786-11d1-95fa-0080c78ee3bb"))
Error : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Node (
        /*[out,retval]*/ struct IXMLDOMNode * * ppxmlNode ) = 0;
      virtual HRESULT __stdcall get_ConditionName (
        /*[out,retval]*/ VARIANT * pvarData ) = 0;
      virtual HRESULT __stdcall get_ShortErrorMessage (
        /*[out,retval]*/ BSTR * pbstrData ) = 0;
      virtual HRESULT __stdcall put_ShortErrorMessage (
        /*[in]*/ BSTR pbstrData ) = 0;
      virtual HRESULT __stdcall get_DetailedErrorMessage (
        /*[out,retval]*/ BSTR * pbstrData ) = 0;
      virtual HRESULT __stdcall put_DetailedErrorMessage (
        /*[in]*/ BSTR pbstrData ) = 0;
      virtual HRESULT __stdcall get_ErrorCode (
        /*[out,retval]*/ long * pErrorCode ) = 0;
      virtual HRESULT __stdcall put_ErrorCode (
        /*[in]*/ long pErrorCode ) = 0;
      virtual HRESULT __stdcall get_Type (
        /*[out,retval]*/ BSTR * pbstrData ) = 0;
};

struct __declspec(uuid("096cd5fb-0786-11d1-95fa-0080c78ee3bb"))
ViewInfo2 : ViewInfo
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Caption (
        /*[out,retval]*/ BSTR * pbstrValue ) = 0;
      virtual HRESULT __stdcall get_HideName (
        /*[out,retval]*/ VARIANT_BOOL * pvfValue ) = 0;
};

enum __declspec(uuid("482bf460-7dd2-4ce5-b053-7c9201e74132"))
XdSignatureAppearanceType
{
    xdSignatureAppearanceTypeLine = 0,
    xdSignatureAppearanceTypeStamp = 1
};

struct __declspec(uuid("096cd768-0786-11d1-95fa-0080c78ee3bb"))
SignatureLine : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_SuggestedSigner (
        /*[out,retval]*/ BSTR * pbstrSuggestedSigner ) = 0;
      virtual HRESULT __stdcall put_SuggestedSigner (
        /*[in]*/ BSTR pbstrSuggestedSigner ) = 0;
      virtual HRESULT __stdcall get_SuggestedSignerTitle (
        /*[out,retval]*/ BSTR * pbstrSuggestedSignerTitle ) = 0;
      virtual HRESULT __stdcall put_SuggestedSignerTitle (
        /*[in]*/ BSTR pbstrSuggestedSignerTitle ) = 0;
      virtual HRESULT __stdcall get_SuggestedSignerEmailAddress (
        /*[out,retval]*/ BSTR * pbstrSuggestedSignerEmailAddress ) = 0;
      virtual HRESULT __stdcall put_SuggestedSignerEmailAddress (
        /*[in]*/ BSTR pbstrSuggestedSignerEmailAddress ) = 0;
      virtual HRESULT __stdcall get_Id (
        /*[out,retval]*/ BSTR * pbstrId ) = 0;
      virtual HRESULT __stdcall get_SignatureAppearanceType (
        /*[out,retval]*/ enum XdSignatureAppearanceType * pSignatureAppearanceType ) = 0;
      virtual HRESULT __stdcall get_Signature (
        /*[out,retval]*/ struct Signature * * ppSignature ) = 0;
      virtual HRESULT __stdcall Sign (
        /*[in]*/ BSTR bstrImageURL,
        /*[in]*/ BSTR bstrSuggestedSigner,
        /*[in]*/ BSTR bstrSuggestedSignerTitle,
        /*[in]*/ BSTR bstrSuggestedSignerEmailAddress,
        /*[out,retval]*/ VARIANT_BOOL * pfSignedSuccessfully ) = 0;
};

struct __declspec(uuid("096cd767-0786-11d1-95fa-0080c78ee3bb"))
SignatureLines : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get__NewEnum (
        /*[out,retval]*/ IUnknown * * ppunk ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT varIndex,
        /*[out,retval]*/ struct SignatureLine * * ppSignatureLine ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * plLength ) = 0;
};

enum __declspec(uuid("27cbf5c9-3d8c-3c7e-a55f-e1b5a35ffcf0"))
XdAttachmentType
{
    xdXml = 0,
    xdXmlXsn = 1,
    xdNone = 2
};

struct __declspec(uuid("096cd6fc-0786-11d1-95fa-0080c78ee3bb"))
MailEnvelope2 : MailEnvelope
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_AttachmentType (
        /*[out,retval]*/ enum XdAttachmentType * peAttachmentType ) = 0;
      virtual HRESULT __stdcall put_AttachmentType (
        /*[in]*/ enum XdAttachmentType peAttachmentType ) = 0;
      virtual HRESULT __stdcall get_Intro (
        /*[out,retval]*/ BSTR * pbstrIntro ) = 0;
      virtual HRESULT __stdcall put_Intro (
        /*[in]*/ BSTR pbstrIntro ) = 0;
      virtual HRESULT __stdcall get_Available (
        /*[out,retval]*/ VARIANT_BOOL * pvfAvailable ) = 0;
};

struct __declspec(uuid("096cd76d-0786-11d1-95fa-0080c78ee3bb"))
Solution2 : Solution
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_CacheID (
        /*[out,retval]*/ BSTR * pbstrSolutionCacheID ) = 0;
};

enum __declspec(uuid("acab4ad8-f8eb-33bc-b516-b49eaa3b3e62"))
XdWindowState
{
    xdWindowStateMaximize = 1,
    xdWindowStateNormal = 2,
    xdWindowStateMinimize = 3
};

struct __declspec(uuid("096cd548-0786-11d1-95fa-0080c78ee3bb"))
HTMLTaskPane : TaskPane
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Navigate (
        /*[in]*/ BSTR bstrURL ) = 0;
      virtual HRESULT __stdcall get_HTMLDocument (
        /*[out,retval]*/ struct IHTMLDocument2 * * pphtmldoc ) = 0;
      virtual HRESULT __stdcall get_HTMLWindow (
        /*[out,retval]*/ struct IHTMLWindow2 * * pphtmlwin ) = 0;
};

enum __declspec(uuid("64d26ba1-2cd5-3bf8-8f2f-50327bf0ca23"))
XdConfirmButtons
{
    xdOKCancel = 1,
    xdYesNoCancel = 3,
    xdYesNo = 4
};

enum __declspec(uuid("e745b14f-f557-3c50-8f8c-17ecf9ccc799"))
XdConfirmChoice
{
    xdOK = 1,
    xdCancel = 2,
    xdYes = 6,
    xdNo = 7
};

struct __declspec(uuid("096cd549-0786-11d1-95fa-0080c78ee3bb"))
UI2 : UI
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Confirm (
        /*[in]*/ BSTR bstrPrompt,
        /*[in]*/ enum XdConfirmButtons lButtons,
        /*[out,retval]*/ enum XdConfirmChoice * plChoice ) = 0;
      virtual HRESULT __stdcall SetSaveAsDialogFileName (
        /*[in]*/ BSTR bstrFileName ) = 0;
      virtual HRESULT __stdcall SetSaveAsDialogLocation (
        /*[in]*/ BSTR bstrLocation ) = 0;
};

struct __declspec(uuid("096cd69f-0786-11d1-95fa-0080c78ee3bb"))
_ExternalApplication : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Quit ( ) = 0;
      virtual HRESULT __stdcall RegisterSolution (
        /*[in]*/ BSTR bstrSolutionURL,
        /*[in]*/ BSTR bstrBehavior ) = 0;
      virtual HRESULT __stdcall UnregisterSolution (
        /*[in]*/ BSTR bstrSolutionURI ) = 0;
      virtual HRESULT __stdcall New (
        /*[in]*/ BSTR bstrDocumentURI,
        /*[in]*/ long dwBehavior ) = 0;
      virtual HRESULT __stdcall Open (
        /*[in]*/ BSTR bstrDocumentURI,
        /*[in]*/ long dwBehavior ) = 0;
      virtual HRESULT __stdcall Close (
        /*[in]*/ BSTR bstrDocumentURI ) = 0;
      virtual HRESULT __stdcall NewFromSolution (
        /*[in]*/ BSTR bstrSolutionURI ) = 0;
      virtual HRESULT __stdcall CacheSolution (
        /*[in]*/ BSTR bstrSolutionURI ) = 0;
};

struct __declspec(uuid("096cd772-0786-11d1-95fa-0080c78ee3bb"))
_ExternalApplication2 : _ExternalApplication
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall NewFromSolutionWithInputParameters (
        /*[in]*/ BSTR bstrSolutionURI,
        /*[in]*/ BSTR bstrInputParameters ) = 0;
};

struct __declspec(uuid("096cd736-0786-11d1-95fa-0080c78ee3bb"))
User2 : User
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_LoginName (
        /*[out,retval]*/ BSTR * pbstrLoginName ) = 0;
      virtual HRESULT __stdcall get_UserName (
        /*[out,retval]*/ BSTR * pbstrUserName ) = 0;
};

struct __declspec(uuid("096cd6a3-0786-11d1-95fa-0080c78ee3bb"))
Date : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Now (
        /*[out,retval]*/ VARIANT * pvarOutput ) = 0;
      virtual HRESULT __stdcall Today (
        /*[out,retval]*/ VARIANT * pvarOutput ) = 0;
      virtual HRESULT __stdcall AddDays (
        /*[in]*/ VARIANT * pvarDate,
        /*[in]*/ VARIANT * pvarDays,
        /*[out,retval]*/ VARIANT * pvarOutput ) = 0;
      virtual HRESULT __stdcall AddSeconds (
        /*[in]*/ VARIANT * pvarTime,
        /*[in]*/ VARIANT * pvarSeconds,
        /*[out,retval]*/ VARIANT * pvarOutput ) = 0;
};

struct __declspec(uuid("096cd784-0786-11d1-95fa-0080c78ee3bb"))
ApplicationEventsEmpty : IUnknown
{};

struct __declspec(uuid("096cd785-0786-11d1-95fa-0080c78ee3bb"))
DataDOMEmpty : IUnknown
{};

struct __declspec(uuid("096cd786-0786-11d1-95fa-0080c78ee3bb"))
ButtonEmpty : IUnknown
{};

enum __declspec(uuid("eb9a1db2-dcc3-3108-b3cb-373012f74ae3"))
XdDocumentVersionMode
{
    xdFailOnVersionMismatch = 0,
    xdFailOnVersionOlder = 1,
    xdUseExistingVersion = 2,
    xdCanOpenInReadOnlyMode = 8,
    xdCanTransformSigned = 16,
    xdPromptTransformSigned = 32,
    xdIgnoreDataAdaptersQueryFailure = 64,
    xdDoNotInstallActiveXCabs = 128
};

struct __declspec(uuid("096cd653-0786-11d1-95fa-0080c78ee3bb"))
ADOAdapter : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Connection (
        /*[out,retval]*/ BSTR * pbstrConnection ) = 0;
      virtual HRESULT __stdcall put_Connection (
        /*[in]*/ BSTR pbstrConnection ) = 0;
      virtual HRESULT __stdcall get_Command (
        /*[out,retval]*/ BSTR * pbstrCommand ) = 0;
      virtual HRESULT __stdcall put_Command (
        /*[in]*/ BSTR pbstrCommand ) = 0;
      virtual HRESULT __stdcall get_Timeout (
        /*[out,retval]*/ long * plTimeout ) = 0;
      virtual HRESULT __stdcall put_Timeout (
        /*[in]*/ long plTimeout ) = 0;
      virtual HRESULT __stdcall BuildSQLFromXMLNodes (
        /*[in]*/ struct IXMLDOMNode * pXmlNode,
        /*[out,retval]*/ BSTR * pbstrSqlFragment ) = 0;
};

struct __declspec(uuid("096cd5d3-0786-11d1-95fa-0080c78ee3bb"))
ADOAdapter2 : ADOAdapter
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_QueryAllowed (
        /*[out,retval]*/ VARIANT_BOOL * pfQueryAllowed ) = 0;
      virtual HRESULT __stdcall get_SubmitAllowed (
        /*[out,retval]*/ VARIANT_BOOL * pfSubmitAllowed ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall Query ( ) = 0;
      virtual HRESULT __stdcall Submit ( ) = 0;
};

struct __declspec(uuid("096cd654-0786-11d1-95fa-0080c78ee3bb"))
WebServiceAdapter : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_WSDLURL (
        /*[out,retval]*/ BSTR * pbstrWSDLURL ) = 0;
      virtual HRESULT __stdcall get_Operation (
        /*[out,retval]*/ BSTR * pbstrOperation ) = 0;
      virtual HRESULT __stdcall put_Operation (
        /*[in]*/ BSTR pbstrOperation ) = 0;
      virtual HRESULT __stdcall get_Input (
        /*[out,retval]*/ BSTR * pbstrInput ) = 0;
      virtual HRESULT __stdcall put_Input (
        /*[in]*/ BSTR pbstrInput ) = 0;
};

struct __declspec(uuid("096cd5d4-0786-11d1-95fa-0080c78ee3bb"))
WebServiceAdapter2 : WebServiceAdapter
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_QueryAllowed (
        /*[out,retval]*/ VARIANT_BOOL * pfQueryAllowed ) = 0;
      virtual HRESULT __stdcall get_SubmitAllowed (
        /*[out,retval]*/ VARIANT_BOOL * pfSubmitAllowed ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall Query ( ) = 0;
      virtual HRESULT __stdcall Submit ( ) = 0;
      virtual HRESULT __stdcall get_OutputLocation (
        /*[out,retval]*/ struct IXMLDOMNode * * ppxmlNode ) = 0;
      virtual HRESULT __stdcall get_ErrorsLocation (
        /*[out,retval]*/ struct IXMLDOMNode * * ppxmlNode ) = 0;
      virtual HRESULT __stdcall GenerateDataSetDiffGram (
        /*[in]*/ struct IXMLDOMNode * pNode,
        /*[out,retval]*/ struct IXMLDOMNode * * ppDiffGram ) = 0;
      virtual HRESULT __stdcall get_Timeout (
        /*[out,retval]*/ long * plTimeout ) = 0;
      virtual HRESULT __stdcall put_Timeout (
        /*[in]*/ long plTimeout ) = 0;
};

struct __declspec(uuid("096cd655-0786-11d1-95fa-0080c78ee3bb"))
XMLFileAdapter : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_FileURL (
        /*[out,retval]*/ BSTR * pbstrFileURL ) = 0;
      virtual HRESULT __stdcall put_FileURL (
        /*[in]*/ BSTR pbstrFileURL ) = 0;
};

struct __declspec(uuid("096cd5d5-0786-11d1-95fa-0080c78ee3bb"))
XMLFileAdapter2 : XMLFileAdapter
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_QueryAllowed (
        /*[out,retval]*/ VARIANT_BOOL * pfQueryAllowed ) = 0;
      virtual HRESULT __stdcall get_SubmitAllowed (
        /*[out,retval]*/ VARIANT_BOOL * pfSubmitAllowed ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall Query ( ) = 0;
      virtual HRESULT __stdcall Submit ( ) = 0;
};

struct __declspec(uuid("096cd734-0786-11d1-95fa-0080c78ee3bb"))
IDataAdapterMOM : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall QueryWithOutput (
        /*[out,retval]*/ BSTR * pbstrOutputXML ) = 0;
      virtual HRESULT __stdcall GetErrorXMLForMOM (
        /*[out,retval]*/ BSTR * pbstrErrorXml ) = 0;
      virtual HRESULT __stdcall SubmitWithInput (
        /*[in]*/ BSTR bstrInputXML ) = 0;
      virtual HRESULT __stdcall GetAdoSubmitName (
        /*[out,retval]*/ BSTR * pbstrSubmitName ) = 0;
      virtual HRESULT __stdcall GenerateDataSetDiffGramInXml (
        /*[out,retval]*/ BSTR * pbstrDiffGram ) = 0;
      virtual HRESULT __stdcall QueryOrSubmitWithInputOutput (
        /*[in]*/ VARIANT_BOOL fInputIsNull,
        /*[in]*/ BSTR bstrInputXML,
        /*[in]*/ VARIANT_BOOL fOutputIsNull,
        /*[out,retval]*/ BSTR * pbstrOutputXML ) = 0;
};

struct __declspec(uuid("096cd69a-0786-11d1-95fa-0080c78ee3bb"))
SharepointListAdapter : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_SiteUrl (
        /*[out,retval]*/ BSTR * pbstrSiteUrl ) = 0;
      virtual HRESULT __stdcall get_QueryAllowed (
        /*[out,retval]*/ VARIANT_BOOL * pfQueryAllowed ) = 0;
      virtual HRESULT __stdcall get_SubmitAllowed (
        /*[out,retval]*/ VARIANT_BOOL * pfSubmitAllowed ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall Query ( ) = 0;
      virtual HRESULT __stdcall Submit ( ) = 0;
};

struct __declspec(uuid("096cd740-0786-11d1-95fa-0080c78ee3bb"))
SharepointListAdapter2 : SharepointListAdapter
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_QueryThisFormOnly (
        /*[out,retval]*/ VARIANT_BOOL * pfQueryThisFormOnly ) = 0;
};

struct __declspec(uuid("096cd800-0786-11d1-95fa-0080c78ee3bb"))
IGrooveAdapter : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_WorkspaceCanonicalUrl (
        /*[out,retval]*/ BSTR * pbstrWorkspaceCanonicalUrl ) = 0;
      virtual HRESULT __stdcall get_WorkspaceCanonicalUrlFormattedForSandboxing (
        /*[out,retval]*/ BSTR * pbstrWorkspaceCanonicalUrl ) = 0;
      virtual HRESULT __stdcall get_QueryAllowed (
        /*[out,retval]*/ VARIANT_BOOL * pfQueryAllowed ) = 0;
      virtual HRESULT __stdcall get_SubmitAllowed (
        /*[out,retval]*/ VARIANT_BOOL * pfSubmitAllowed ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall Query ( ) = 0;
      virtual HRESULT __stdcall Submit ( ) = 0;
      virtual HRESULT __stdcall get_QueryThisFormOnly (
        /*[out,retval]*/ VARIANT_BOOL * pfQueryThisFormOnly ) = 0;
      virtual HRESULT __stdcall QueryFromSPListAdapter (
        /*[in]*/ BSTR bstrSoapBody,
        /*[out]*/ struct IXMLDOMElement * * spelemResponse ) = 0;
      virtual HRESULT __stdcall ExecuteGrooveLookup (
        /*[in]*/ struct IXMLDOMElement * pelemGrooveQuery,
        /*[out]*/ struct IXMLDOMElement * * ppelemGrooveResponse ) = 0;
};

struct __declspec(uuid("096cd5d6-0786-11d1-95fa-0080c78ee3bb"))
DAVAdapter : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_QueryAllowed (
        /*[out,retval]*/ VARIANT_BOOL * pfQueryAllowed ) = 0;
      virtual HRESULT __stdcall get_SubmitAllowed (
        /*[out,retval]*/ VARIANT_BOOL * pfSubmitAllowed ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall get_FolderURL (
        /*[out,retval]*/ BSTR * pbstrURL ) = 0;
      virtual HRESULT __stdcall put_FolderURL (
        /*[in]*/ BSTR pbstrURL ) = 0;
      virtual HRESULT __stdcall get_FileName (
        /*[out,retval]*/ BSTR * pbstrFileName ) = 0;
      virtual HRESULT __stdcall put_FileName (
        /*[in]*/ BSTR pbstrFileName ) = 0;
      virtual HRESULT __stdcall Query ( ) = 0;
      virtual HRESULT __stdcall Submit ( ) = 0;
      virtual HRESULT __stdcall SubmitData (
        /*[in]*/ struct IXMLDOMNode * pData ) = 0;
};

struct __declspec(uuid("096cd5d7-0786-11d1-95fa-0080c78ee3bb"))
EmailAdapter : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_QueryAllowed (
        /*[out,retval]*/ VARIANT_BOOL * pfQueryAllowed ) = 0;
      virtual HRESULT __stdcall get_SubmitAllowed (
        /*[out,retval]*/ VARIANT_BOOL * pfSubmitAllowed ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall get_To (
        /*[out,retval]*/ BSTR * pbstrTo ) = 0;
      virtual HRESULT __stdcall put_To (
        /*[in]*/ BSTR pbstrTo ) = 0;
      virtual HRESULT __stdcall get_CC (
        /*[out,retval]*/ BSTR * pbstrCC ) = 0;
      virtual HRESULT __stdcall put_CC (
        /*[in]*/ BSTR pbstrCC ) = 0;
      virtual HRESULT __stdcall get_BCC (
        /*[out,retval]*/ BSTR * pbstrBCC ) = 0;
      virtual HRESULT __stdcall put_BCC (
        /*[in]*/ BSTR pbstrBCC ) = 0;
      virtual HRESULT __stdcall get_Subject (
        /*[out,retval]*/ BSTR * pbstrSubject ) = 0;
      virtual HRESULT __stdcall put_Subject (
        /*[in]*/ BSTR pbstrSubject ) = 0;
      virtual HRESULT __stdcall get_Intro (
        /*[out,retval]*/ BSTR * pbstrIntro ) = 0;
      virtual HRESULT __stdcall put_Intro (
        /*[in]*/ BSTR pbstrIntro ) = 0;
      virtual HRESULT __stdcall get_AttachmentFileName (
        /*[out,retval]*/ BSTR * pbstrAttachmentFilename ) = 0;
      virtual HRESULT __stdcall put_AttachmentFileName (
        /*[in]*/ BSTR pbstrAttachmentFilename ) = 0;
      virtual HRESULT __stdcall Query ( ) = 0;
      virtual HRESULT __stdcall Submit ( ) = 0;
      virtual HRESULT __stdcall SubmitData (
        /*[in]*/ struct IXMLDOMNode * pData ) = 0;
      virtual HRESULT __stdcall get_AttachmentType (
        /*[out,retval]*/ enum XdAttachmentType * peAttachmentType ) = 0;
      virtual HRESULT __stdcall put_AttachmentType (
        /*[in]*/ enum XdAttachmentType peAttachmentType ) = 0;
};

struct __declspec(uuid("096cd6bf-0786-11d1-95fa-0080c78ee3bb"))
HWSAdapter : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_QueryAllowed (
        /*[out,retval]*/ VARIANT_BOOL * pfQueryAllowed ) = 0;
      virtual HRESULT __stdcall get_SubmitAllowed (
        /*[out,retval]*/ VARIANT_BOOL * pfSubmitAllowed ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall Query ( ) = 0;
      virtual HRESULT __stdcall Submit ( ) = 0;
};

struct __declspec(uuid("096cd739-0786-11d1-95fa-0080c78ee3bb"))
SubmitToHostAdapter : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_QueryAllowed (
        /*[out,retval]*/ VARIANT_BOOL * pfQueryAllowed ) = 0;
      virtual HRESULT __stdcall get_SubmitAllowed (
        /*[out,retval]*/ VARIANT_BOOL * pfSubmitAllowed ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall Query ( ) = 0;
      virtual HRESULT __stdcall Submit ( ) = 0;
};

struct __declspec(uuid("096cd635-0786-11d1-95fa-0080c78ee3bb"))
SharePointListAdapterRW : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_QueryAllowed (
        /*[out,retval]*/ VARIANT_BOOL * pfQueryAllowed ) = 0;
      virtual HRESULT __stdcall get_SubmitAllowed (
        /*[out,retval]*/ VARIANT_BOOL * pfSubmitAllowed ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall get_SiteUrl (
        /*[out,retval]*/ BSTR * pbstrSiteUrl ) = 0;
      virtual HRESULT __stdcall put_SiteUrl (
        /*[in]*/ BSTR pbstrSiteUrl ) = 0;
      virtual HRESULT __stdcall get_ListId (
        /*[out,retval]*/ BSTR * pbstrListId ) = 0;
      virtual HRESULT __stdcall put_ListId (
        /*[in]*/ BSTR pbstrListId ) = 0;
      virtual HRESULT __stdcall get_ContentTypeId (
        /*[out,retval]*/ BSTR * pbstrContentTypeId ) = 0;
      virtual HRESULT __stdcall put_ContentTypeId (
        /*[in]*/ BSTR pbstrContentTypeId ) = 0;
      virtual HRESULT __stdcall Query ( ) = 0;
      virtual HRESULT __stdcall Submit ( ) = 0;
};

struct __declspec(uuid("096cd743-0786-11d1-95fa-0080c78ee3bb"))
BDCAdapter : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_QueryAllowed (
        /*[out,retval]*/ VARIANT_BOOL * pfQueryAllowed ) = 0;
      virtual HRESULT __stdcall get_SubmitAllowed (
        /*[out,retval]*/ VARIANT_BOOL * pfSubmitAllowed ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall get_SubmitAdapterName (
        /*[out,retval]*/ BSTR * pbstrSubmitAdapterName ) = 0;
      virtual HRESULT __stdcall Query ( ) = 0;
      virtual HRESULT __stdcall Submit ( ) = 0;
      virtual HRESULT __stdcall get_EntityName (
        /*[out,retval]*/ BSTR * pbstrEntityName ) = 0;
      virtual HRESULT __stdcall get_EntityNamespace (
        /*[out,retval]*/ BSTR * pbstrEntityNamespace ) = 0;
      virtual HRESULT __stdcall get_LOBSystemInstance (
        /*[out,retval]*/ BSTR * pbstrLOBSystemInstance ) = 0;
      virtual HRESULT __stdcall get_SpecificFinder (
        /*[out,retval]*/ BSTR * pbstrSpecificFinder ) = 0;
};

struct __declspec(uuid("096cd6a9-0786-11d1-95fa-0080c78ee3bb"))
ICLRExtensions : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall GetEventSource (
        /*[in]*/ BSTR bstrContext,
        /*[in]*/ BSTR bstrEventID,
        /*[in]*/ BSTR bstrDataObjectName,
        /*[out,retval]*/ IDispatch * * ppdispSource ) = 0;
      virtual HRESULT __stdcall GetInvokeHelper (
        /*[in]*/ IDispatch * pdispTarget,
        /*[out,retval]*/ IDispatch * * ppdispInvokeHelper ) = 0;
      virtual HRESULT __stdcall IsCrossDomainSafe (
        /*[in]*/ IUnknown * punkCallee,
        /*[out,retval]*/ VARIANT_BOOL * pvfSafe ) = 0;
      virtual HRESULT __stdcall GetLocalizedErrorString (
        /*[in]*/ int idError,
        /*[out,retval]*/ BSTR * pbstrError ) = 0;
      virtual HRESULT __stdcall GetLocalizedMsxmlInteropErrorString (
        /*[in]*/ int idError,
        /*[out,retval]*/ BSTR * pbstrError ) = 0;
      virtual HRESULT __stdcall GetLocalizedDesignOnceErrorString (
        /*[in]*/ BSTR bstrErrorId,
        /*[out,retval]*/ BSTR * pbstrError ) = 0;
      virtual HRESULT __stdcall ShowExceptionDialog (
        /*[in]*/ BSTR bstrMessage,
        /*[in]*/ BSTR bstrDetails ) = 0;
      virtual HRESULT __stdcall PutCancellationInfo (
        /*[in]*/ VARIANT_BOOL vfSuppressUI,
        /*[in]*/ BSTR bstrMessage,
        /*[in]*/ BSTR bstrDetails ) = 0;
      virtual HRESULT __stdcall GetIntPtr (
        /*[in]*/ IDispatch * pdispNode,
        /*[out,retval]*/ void * * pcNode ) = 0;
      virtual HRESULT __stdcall IncrementSqmPoint (
        /*[in]*/ int idDataPt ) = 0;
      virtual HRESULT __stdcall SetDocumentSqmValue (
        /*[in]*/ int idDataPt ) = 0;
      virtual HRESULT __stdcall PrintWithDialog ( ) = 0;
      virtual HRESULT __stdcall GetMomXmlEventInfo (
        /*[out,retval]*/ long * pfOneToOneTextChange ) = 0;
      virtual HRESULT __stdcall CloseDocument ( ) = 0;
      virtual HRESULT __stdcall GetCacheDirectory (
        /*[out,retval]*/ BSTR * pbstrCacheDirectory ) = 0;
      virtual HRESULT __stdcall GetEventSourceNoPostProcess (
        /*[in]*/ BSTR bstrContext,
        /*[in]*/ BSTR bstrEventID,
        /*[in]*/ BSTR bstrDataObjectName,
        /*[out,retval]*/ IDispatch * * ppdispSource ) = 0;
      virtual HRESULT __stdcall PostProcessEventListeners ( ) = 0;
      virtual HRESULT __stdcall ForceAppDomainUnload (
        /*[in]*/ BSTR bstrAssemblyName ) = 0;
      virtual HRESULT __stdcall SetCanUnloadAppDomain (
        /*[in]*/ VARIANT_BOOL vfCanUnload ) = 0;
      virtual HRESULT __stdcall GetCachedProperty (
        /*[in]*/ int propId,
        /*[out]*/ BSTR * Value,
        /*[out,retval]*/ VARIANT_BOOL * fCached ) = 0;
      virtual HRESULT __stdcall SetCachedProperty (
        /*[in]*/ int propId,
        /*[in]*/ BSTR Value ) = 0;
};

struct __declspec(uuid("096cd738-0786-11d1-95fa-0080c78ee3bb"))
ISubmitToHostEventHandler : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall SubmitToHostEventHandler (
        /*[in]*/ IUnknown * punkSender,
        /*[in]*/ BSTR bstrAdapterName,
        /*[out]*/ BSTR * pbstrErrorMessage,
        /*[out,retval]*/ long * pfReturnStatus ) = 0;
};

struct __declspec(uuid("096cd764-0786-11d1-95fa-0080c78ee3bb"))
INotifyHostEventHandler : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall NotifyHostEventHandler (
        /*[in]*/ IUnknown * punkSender,
        /*[in]*/ BSTR bstrNotification ) = 0;
};

enum __declspec(uuid("ec2699ab-cd9b-3487-94de-30d31ec987e7"))
XdReadOnlyViewMode
{
    xdDefault = 0,
    xdNonEditable = 1,
    xdFrozen = 2
};

struct __declspec(uuid("096cd742-0786-11d1-95fa-0080c78ee3bb"))
IInfoPathEditorProperties : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall put_Enabled (
        /*[in]*/ VARIANT_BOOL pfEnabled ) = 0;
      virtual HRESULT __stdcall get_Enabled (
        /*[out,retval]*/ VARIANT_BOOL * pfEnabled ) = 0;
      virtual HRESULT __stdcall put_HostTranslatesAcceleratorsFirst (
        /*[in]*/ VARIANT_BOOL pfHostFirst ) = 0;
      virtual HRESULT __stdcall get_HostTranslatesAcceleratorsFirst (
        /*[out,retval]*/ VARIANT_BOOL * pfHostFirst ) = 0;
};

struct __declspec(uuid("096cd774-0786-11d1-95fa-0080c78ee3bb"))
InfoPathEditorWithAppDomain : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall NewFromSolution (
        /*[in]*/ BSTR bstrSolutionURI,
        /*[in]*/ IUnknown * punkAppDomain,
        /*[in]*/ BSTR bstrInputParameters ) = 0;
      virtual HRESULT __stdcall NewFromSolutionWithData (
        /*[in]*/ BSTR bstrURLXSN,
        /*[in]*/ IUnknown * punkStream,
        /*[in]*/ long dwBehavior,
        /*[in]*/ IUnknown * punkAppDomain,
        /*[in]*/ BSTR bstrInputParameters ) = 0;
      virtual HRESULT __stdcall Load (
        /*[in]*/ BSTR bstrURL,
        /*[in]*/ IUnknown * punkAppDomain,
        /*[in]*/ BSTR bstrInputParameters ) = 0;
      virtual HRESULT __stdcall LoadFromStream (
        /*[in]*/ IUnknown * punkStream,
        /*[in]*/ IUnknown * punkAppDomain,
        /*[in]*/ BSTR bstrInputParameters ) = 0;
};

struct __declspec(uuid("096cd72d-0786-11d1-95fa-0080c78ee3bb"))
_ApplicationEvents : IDispatch
{};

struct __declspec(uuid("096cd76c-0786-11d1-95fa-0080c78ee3bb"))
IInfoPathDataImporterFields : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall GetControls (
        /*[out]*/ struct IEnumUnknown * * ppEnumUnkControls ) = 0;
};

struct __declspec(uuid("096cd6d9-0786-11d1-95fa-0080c78ee3bb"))
IInfoPathDataImporter : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Initialize (
        /*[in]*/ unsigned int lcid ) = 0;
      virtual HRESULT __stdcall Import (
        /*[in]*/ struct IPropertyBag * pPrintSettings,
        /*[in]*/ struct IEnumUnknown * punkViewControls ) = 0;
      virtual HRESULT __stdcall Uninitialize ( ) = 0;
};

struct __declspec(uuid("096cd6da-0786-11d1-95fa-0080c78ee3bb"))
IInfoPathViewControl : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ long * plLeft ) = 0;
      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ long * plTop ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ long * plWidth ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ long * plHeight ) = 0;
      virtual HRESULT __stdcall get_ControlType (
        /*[out,retval]*/ BSTR * pbstrControlType ) = 0;
      virtual HRESULT __stdcall get_DataType (
        /*[out,retval]*/ BSTR * pbstrDataType ) = 0;
      virtual HRESULT __stdcall get_NodeName (
        /*[out,retval]*/ BSTR * pbstrNodeName ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ BSTR * pbstrValue ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ BSTR pbstrValue ) = 0;
      virtual HRESULT __stdcall get_InputScopes (
        /*[out]*/ int * * ppInputScopes,
        /*[out]*/ unsigned int * pcInputScopes,
        /*[out]*/ struct IEnumString * * ppenumPhraseList,
        /*[out]*/ BSTR * pbstrRegExp ) = 0;
};

enum __declspec(uuid("fac23fc1-6d62-4625-bb6d-551ce08057bb"))
CommandIds
{
    ShowMergeFormDialog = 0,
    ShowImportFormDataDialog = 1,
    ShowExportToWebDialog = 2,
    WorkOffline = 3,
    Close = 4,
    Save = 5,
    SaveAs = 6,
    ShowExportToExcelDialog = 7,
    Submit = 8,
    GetSubmitButtonCaption = 9,
    GotoNextErrorOnView = 10,
    ShowCurrentErrorMessage = 11,
    ShowSetLanguageDialog = 12,
    InsertPictureFromFile = 13,
    ShowInsertTableDialog = 14,
    ShowSplitCellsDialog = 15,
    ShowTablePropertiesDialog = 16,
    ShowFormatPictureDialog = 17,
    ShowBordersShadingDialog = 18,
    ShowInsertHyperlinkDialog = 19,
    ShowEditHyperlinkDialog = 20,
    InsertNumberedList = 21,
    InsertBulletedList = 22,
    FormatPainterApplyFormatting = 23,
    FormatPainterCopyFormatting = 24,
    FormatPainterApplyFormattingPersistent = 25,
    SetFontFormattingBold = 26,
    SetFontFormattingItalic = 27,
    SetFontFormattingUnderline = 28,
    SetFontFormattingSuperscript = 29,
    SetFontFormattingSubscript = 30,
    SetFontFormattingStrikethrough = 31,
    AlignTextLeft = 32,
    AlignTextCenter = 33,
    AlignTextRight = 34,
    AlignTextJustify = 35,
    SetTextDirectionDefault = 36,
    SetTextDirectionLeftToRight = 37,
    SetTextDirectionRightToLeft = 38,
    SetSingleLineSpacing = 39,
    Set15LineSpacing = 40,
    SetDoubleLineSpacing = 41,
    InsertNumberedListDecimal = 42,
    InsertNumberedListAlphaLowercase = 43,
    InsertNumberedListAlphaUppercase = 44,
    InsertNumberedListRomanLowercase = 45,
    InsertNumberedListRomanUppercase = 46,
    InsertBulletedListSolidCircle = 47,
    InsertBulletedListEmptyCircle = 48,
    InsertBulletedListSolidSquare = 49,
    DrawTable = 50,
    EraseTable = 51,
    Cut = 52,
    Copy = 53,
    Paste = 54,
    SelectAll = 55,
    Undo = 56,
    Redo = 57,
    ClearNumberedList = 58,
    ClearBulletedList = 59,
    DecreaseIndent = 60,
    IncreaseIndent = 61,
    InsertRowAbove = 62,
    InsertRowBelow = 63,
    InsertColumnLeft = 64,
    InsertColumnRight = 65,
    DeleteSelectedTable = 66,
    DeleteSelectedRows = 67,
    DeleteSelectedColumns = 68,
    SelectTable = 69,
    SelectRows = 70,
    SelectColumns = 71,
    SelectCell = 72,
    MergeCells = 73,
    SetTableHorizontalAlignment = 74,
    GetTableHorizontalAlignment = 75,
    SetTableDirection = 76,
    GetTableDirection = 77,
    InsertHorizontalLine = 78,
    ShowInsertSymbolDialog = 79,
    InsertImage = 80,
    InsertHyperlink = 81,
    SelectHyperlink = 82,
    SetAutoSpaceBetweenAsianAndLatinText = 83,
    SetAutoSpaceBetweenAsianTextAndNumbers = 84,
    ClearAutoSpace = 85,
    SetFindString = 86,
    GetFindString = 87,
    SetReplaceWithString = 88,
    GetReplaceWithString = 89,
    SetFindReplaceOptionWholeWordOnly = 90,
    SetFindReplaceOptionMatchCase = 91,
    SetFindReplaceOptionUseWildcards = 92,
    SetFindReplaceOptionSearchDirection = 93,
    GetFindReplaceOptionSearchDirection = 94,
    Replace = 95,
    ReplaceAll = 96,
    GetDefaultHighlightColor = 97,
    GetDefaultFontColor = 98,
    ShowSetSelectedTextFontColorDialog = 99,
    ShowSetSelectedTextHighlightColorDialog = 100,
    GetFontsAvailableCount = 101,
    GetFontAvailableByIndex = 102,
    GetFontSizesAvailableCount = 103,
    GetFontSizeAvailableByIndex = 104,
    SetSelectedTextFontSize = 105,
    SetSelectedTextFont = 106,
    GotoFirstErrorOnView = 107,
    ShowDigitalSignaturesDialog = 108,
    ClearFontFormatting = 109,
    SetFontFormattingHeading1 = 110,
    SetFontFormattingHeading2 = 111,
    SetFontFormattingHeading3 = 112,
    SetFontFormattingHeading4 = 113,
    SetFontFormattingHeading5 = 114,
    SetFontFormattingHeading6 = 115,
    SetFontFormattingNormal = 116,
    DecreaseFontSizeBy2 = 117,
    IncreaseFontSizeBy2 = 118,
    FindReplaceFindNext = 119,
    SetSelectedTextHighlightColor = 120,
    SetSelectedTextFontColor = 121,
    SetSelectedTextBackgroundColor = 122,
    GetSelectedTextFontSize = 123,
    GetSelectedTextFont = 124,
    GetSelectedTextFontColor = 125,
    GetSelectedTextHighlightColor = 126,
    GetSelectedTextBackgroundColor = 127,
    InsertTable = 128,
    IgnoreMisspelledWord = 129,
    IgnoreAllOfMisspelledWord = 130,
    AddWordToDictionary = 131,
    FindNextMisspelledWord = 132,
    CorrectMisspelledWord = 133,
    CorrectAllOfMisspelledWord = 134,
    DeleteMisspelledWord = 135,
    SetSpellingOptionCheckAsYouType = 136,
    GetSpellingSuggestionsCount = 137,
    GetSpellingSuggestion = 138,
    GetCurrentMisspelledWord = 139,
    GetSelectedRowHeight = 140,
    SetSelectedRowHeight = 141,
    GetSelectedColumnWidth = 142,
    SetSelectedColumnWidth = 143,
    SelectNextRow = 144,
    SelectPreviousRow = 145,
    SelectNextColumn = 146,
    SelectPreviousColumn = 147,
    GetSelectedCellVerticalAlignment = 148,
    GetSelectedCellTopPadding = 149,
    GetSelectedCellLeftPadding = 150,
    GetSelectedCellBottomPadding = 151,
    GetSelectedCellRightPadding = 152,
    SetSelectedCellPadding = 153,
    SetSelectedCellAlignmentMiddle = 154,
    SetSelectedCellAlignmentTop = 155,
    SetSelectedCellAlignmentBottom = 156,
    SplitCells = 157,
    GetHyperlinkDisplayText = 158,
    GetHyperlinkAddress = 159,
    RemoveHyperlink = 160,
    SetPictureInlineWithText = 161,
    SetPictureToLeftOfText = 162,
    SetPictureToRightOfText = 163,
    SetPictureHeight = 164,
    SetPictureWidth = 165,
    SetPictureAlternativeText = 166,
    GetPictureHeight = 167,
    GetPictureWidth = 168,
    GetPictureAlternativeText = 169,
    GetPictureTextWrapping = 170,
    GetFindReplaceState = 171,
    FormatPainterCopyFormattingPersistent = 172,
    ShowExportToPDFXPSDialog = 173,
    IsFormDirectionRightToLeft = 174,
    IsFormDirectionLeftToRight = 175,
    PasteKeepSourceFormatting = 176,
    PasteMatchDestination = 177,
    PasteAsText = 178,
    SetParaSpaceBefore = 179,
    SetParaSpaceAfter = 180
};

struct __declspec(uuid("8075835f-5146-11d5-a672-00b0d022e945"))
Application;
    // interface _Application3
    // [ default ] interface _Application2
    // interface _Application

struct __declspec(uuid("80758412-5146-11d5-a672-00b0d022e945"))
ApplicationEvents;
    // [ default ] interface ApplicationEventsEmpty
    // [ default, source ] dispinterface _ApplicationEvents

struct __declspec(uuid("80758358-5146-11d5-a672-00b0d022e945"))
ExternalApplication;
    // interface _ExternalApplication
    // [ default ] interface _ExternalApplication2

struct __declspec(uuid("807583c8-5146-11d5-a672-00b0d022e945"))
XDocument;
    // interface _XDocument4
    // interface _XDocument3
    // [ default, source ] interface _XDocumentEventSink2
    // [ default ] interface _XDocument2
    // interface _XDocument

struct __declspec(uuid("8075835c-5146-11d5-a672-00b0d022e945"))
XDNetworkState;
    // [ default ] interface _NetworkState

struct __declspec(uuid("807583c2-5146-11d5-a672-00b0d022e945"))
DataDOM;
    // [ default ] interface DataDOMEmpty
    // [ default, source ] interface _DataDOMEventSink

struct __declspec(uuid("807583ea-5146-11d5-a672-00b0d022e945"))
Button;
    // [ default ] interface ButtonEmpty
    // [ default, source ] interface _ButtonEventSink

struct __declspec(uuid("80758363-5146-11d5-a672-00b0d022e945"))
UIObject;
    // [ default ] interface UI2
    // interface UI

struct __declspec(uuid("807583e1-5146-11d5-a672-00b0d022e945"))
DataAdaptersCollection;
    // [ default ] interface DataAdapters

struct __declspec(uuid("807583e2-5146-11d5-a672-00b0d022e945"))
EmailAdapterObject;
    // [ default ] interface EmailAdapter
    // interface IDataAdapterMOM

struct __declspec(uuid("807583e3-5146-11d5-a672-00b0d022e945"))
DAVAdapterObject;
    // [ default ] interface DAVAdapter

struct __declspec(uuid("807583f3-5146-11d5-a672-00b0d022e945"))
BDCAdapterObject;
    // [ default ] interface BDCAdapter
    // interface IDataAdapterMOM

struct __declspec(uuid("807583e4-5146-11d5-a672-00b0d022e945"))
HWSAdapterObject;
    // [ default ] interface HWSAdapter

struct __declspec(uuid("807583f0-5146-11d5-a672-00b0d022e945"))
SubmitToHostAdapterObject;
    // [ default ] interface SubmitToHostAdapter

struct __declspec(uuid("8075838e-5146-11d5-a672-00b0d022e945"))
SharepointListAdapterObject;
    // interface SharepointListAdapter2
    // [ default ] interface SharepointListAdapter
    // interface IDataAdapterMOM

struct __declspec(uuid("80758326-5146-11d5-a672-00b0d022e945"))
SharePointListAdapterRWObject;
    // [ default ] interface SharePointListAdapterRW
    // interface IDataAdapterMOM

struct __declspec(uuid("8075838c-5146-11d5-a672-00b0d022e945"))
XMLFileAdapterObject;
    // [ default ] interface XMLFileAdapter2
    // interface XMLFileAdapter
    // interface IDataAdapterMOM

struct __declspec(uuid("8075838b-5146-11d5-a672-00b0d022e945"))
WebServiceAdapterObject;
    // [ default ] interface WebServiceAdapter2
    // interface WebServiceAdapter
    // interface IDataAdapterMOM

struct __declspec(uuid("8075838a-5146-11d5-a672-00b0d022e945"))
ADOAdapterObject;
    // [ default ] interface ADOAdapter2
    // interface ADOAdapter
    // interface IDataAdapterMOM

struct __declspec(uuid("8075831b-5146-11d5-a672-00b0d022e945"))
DocEventObject;
    // [ default ] interface DocEvent

struct __declspec(uuid("8075831d-5146-11d5-a672-00b0d022e945"))
DocReturnEventObject;
    // [ default ] interface DocReturnEvent

struct __declspec(uuid("8075831f-5146-11d5-a672-00b0d022e945"))
DocActionEventObject;
    // [ default ] interface DocActionEvent

struct __declspec(uuid("80758320-5146-11d5-a672-00b0d022e945"))
VersionUpgradeEventObject;
    // [ default ] interface VersionUpgradeEvent

struct __declspec(uuid("80758322-5146-11d5-a672-00b0d022e945"))
DataDOMEventObject;
    // [ default ] interface DataDOMEvent

struct __declspec(uuid("807583ce-5146-11d5-a672-00b0d022e945"))
SolutionObject;
    // interface Solution2
    // [ default ] interface Solution

struct __declspec(uuid("8075835a-5146-11d5-a672-00b0d022e945"))
WindowObject;
    // [ default ] interface Window2
    // interface Window

struct __declspec(uuid("80758359-5146-11d5-a672-00b0d022e945"))
WindowsCollection;
    // [ default ] interface Windows

struct __declspec(uuid("8075830e-5146-11d5-a672-00b0d022e945"))
TaskPanesCollection;
    // [ default ] interface TaskPanes

struct __declspec(uuid("80758301-5146-11d5-a672-00b0d022e945"))
TaskPaneObject;
    // [ default ] interface TaskPane

struct __declspec(uuid("80758302-5146-11d5-a672-00b0d022e945"))
HTMLTaskPaneObject;
    // [ default ] interface HTMLTaskPane
    // interface TaskPane

struct __declspec(uuid("80758392-5146-11d5-a672-00b0d022e945"))
ViewObject;
    // interface View3
    // interface View2
    // [ default ] interface View

struct __declspec(uuid("807583c1-5146-11d5-a672-00b0d022e945"))
MailEnvelopeObject;
    // interface MailEnvelope2
    // [ default ] interface MailEnvelope

struct __declspec(uuid("80758336-5146-11d5-a672-00b0d022e945"))
XDocumentsCollection;
    // [ default ] interface XDocuments2
    // interface XDocuments3
    // interface XDocuments

struct __declspec(uuid("80758337-5146-11d5-a672-00b0d022e945"))
ViewInfoObject;
    // interface ViewInfo2
    // [ default ] interface ViewInfo

struct __declspec(uuid("80758338-5146-11d5-a672-00b0d022e945"))
ViewInfosCollection;
    // [ default ] interface ViewInfos

struct __declspec(uuid("8075833a-5146-11d5-a672-00b0d022e945"))
ErrorObject;
    // [ default ] interface Error

struct __declspec(uuid("8075833b-5146-11d5-a672-00b0d022e945"))
ErrorsCollection;
    // [ default ] interface Errors

struct __declspec(uuid("80758306-5146-11d5-a672-00b0d022e945"))
UtilObject;
    // [ default ] interface Util

struct __declspec(uuid("80758308-5146-11d5-a672-00b0d022e945"))
MathObject;
    // [ default ] interface IPMath

struct __declspec(uuid("80758309-5146-11d5-a672-00b0d022e945"))
DateObject;
    // [ default ] interface Date

struct __declspec(uuid("8075837b-5146-11d5-a672-00b0d022e945"))
SignedDataBlocksCollection;
    // [ default ] interface SignedDataBlocks

struct __declspec(uuid("8075837c-5146-11d5-a672-00b0d022e945"))
SignedDataBlockObject;
    // [ default ] interface SignedDataBlock

struct __declspec(uuid("8075837d-5146-11d5-a672-00b0d022e945"))
SignaturesCollection;
    // [ default ] interface Signatures

struct __declspec(uuid("8075837e-5146-11d5-a672-00b0d022e945"))
SignatureObject;
    // [ default ] interface Signature

struct __declspec(uuid("80758379-5146-11d5-a672-00b0d022e945"))
SignatureLinesCollection;
    // [ default ] interface SignatureLines

struct __declspec(uuid("8075837a-5146-11d5-a672-00b0d022e945"))
SignatureLineObject;
    // [ default ] interface SignatureLine

struct __declspec(uuid("8075837f-5146-11d5-a672-00b0d022e945"))
CertificateObject;
    // [ default ] interface Certificate

struct __declspec(uuid("8075833c-5146-11d5-a672-00b0d022e945"))
MergeEventObject;
    // [ default ] interface MergeEvent
    // interface DocEvent
    // interface DocReturnEvent

struct __declspec(uuid("8075833d-5146-11d5-a672-00b0d022e945"))
SaveEventObject;
    // [ default ] interface SaveEvent
    // interface DocEvent
    // interface DocReturnEvent

struct __declspec(uuid("8075833e-5146-11d5-a672-00b0d022e945"))
SignEventObject;
    // [ default ] interface SignEvent
    // interface DocEvent
    // interface DocReturnEvent

struct __declspec(uuid("0e221c61-fd53-4bcb-8fa8-c4a341c90863"))
XMLNodesCollection;
    // [ default ] interface XMLNodes

struct __declspec(uuid("8075830b-5146-11d5-a672-00b0d022e945"))
DataSourceObject;
    // [ default ] interface DataObject

struct __declspec(uuid("807583b0-5146-11d5-a672-00b0d022e945"))
DataObjectsCollection;
    // [ default ] interface DataObjects

struct __declspec(uuid("8075830c-5146-11d5-a672-00b0d022e945"))
DocContextChangeEventObject;
    // [ default ] interface DocContextChangeEvent
    // interface DocEvent

struct __declspec(uuid("8075830d-5146-11d5-a672-00b0d022e945"))
UserObject;
    // interface User2
    // [ default ] interface User

struct __declspec(uuid("8075833f-5146-11d5-a672-00b0d022e945"))
ServerInfoObject;
    // [ default ] interface ServerInfo

struct __declspec(uuid("80758314-5146-11d5-a672-00b0d022e945"))
UserPermissionObject;
    // [ default ] interface UserPermission

struct __declspec(uuid("80758315-5146-11d5-a672-00b0d022e945"))
PermissionObject;
    // [ default ] interface Permission

struct __declspec(uuid("80758399-5146-11d5-a672-00b0d022e945"))
InfoPathEditorObject;
    // [ default ] interface InfoPathEditor
    // interface IInfoPathEditorProperties

struct __declspec(uuid("80758316-5146-11d5-a672-00b0d022e945"))
InputParameterObject;
    // [ default ] interface InputParameter

struct __declspec(uuid("8075832e-5146-11d5-a672-00b0d022e945"))
InputParameterCollection;
    // [ default ] interface InputParameters

struct __declspec(uuid("096cd58b-0786-11d1-95fa-0080c78ee3bb"))
Windows : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get__NewEnum (
        /*[out,retval]*/ IUnknown * * ppunk ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT varIndex,
        /*[out,retval]*/ struct Window * * ppWindow ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * plLength ) = 0;
};

struct __declspec(uuid("096cd595-0786-11d1-95fa-0080c78ee3bb"))
Window : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_CommandBars (
        /*[out,retval]*/ IDispatch * * ppdispCmdBars ) = 0;
      virtual HRESULT __stdcall Close (
        /*[in]*/ VARIANT_BOOL fForce ) = 0;
      virtual HRESULT __stdcall get_XDocument (
        /*[out,retval]*/ struct _XDocument * * ppDocument ) = 0;
      virtual HRESULT __stdcall get_MailEnvelope (
        /*[out,retval]*/ struct MailEnvelope * * ppMailEnvelope ) = 0;
      virtual HRESULT __stdcall get_Active (
        /*[out,retval]*/ VARIANT_BOOL * pbIsActive ) = 0;
      virtual HRESULT __stdcall Activate ( ) = 0;
      virtual HRESULT __stdcall get_Type (
        /*[out,retval]*/ enum XdWindowType * pxdwintype ) = 0;
      virtual HRESULT __stdcall get_TaskPanes (
        /*[out,retval]*/ struct TaskPanes * * pptaskpanes ) = 0;
};

struct __declspec(uuid("096cd55d-0786-11d1-95fa-0080c78ee3bb"))
View : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall SwitchView (
        /*[in]*/ BSTR bstrName ) = 0;
      virtual HRESULT __stdcall get_Window (
        /*[out,retval]*/ struct Window * * pWindow ) = 0;
      virtual HRESULT __stdcall ForceUpdate ( ) = 0;
      virtual HRESULT __stdcall DisableAutoUpdate ( ) = 0;
      virtual HRESULT __stdcall EnableAutoUpdate ( ) = 0;
      virtual HRESULT __stdcall Export (
        /*[in]*/ BSTR bstrURL,
        /*[in]*/ BSTR bstrFormat ) = 0;
      virtual HRESULT __stdcall GetSelectedNodes (
        /*[out,retval]*/ struct XMLNodes * * ppRetVal ) = 0;
      virtual HRESULT __stdcall GetContextNodes (
        /*[in]*/ VARIANT varNode,
        /*[in]*/ VARIANT varViewContext,
        /*[out,retval]*/ struct XMLNodes * * ppRetVal ) = 0;
      virtual HRESULT __stdcall SelectNodes (
        /*[in]*/ struct IXMLDOMNode * pxnStartNode,
        /*[in]*/ VARIANT varEndNode = vtMissing,
        /*[in]*/ VARIANT varViewContext = vtMissing ) = 0;
      virtual HRESULT __stdcall SelectText (
        /*[in]*/ struct IXMLDOMNode * pxnField,
        /*[in]*/ VARIANT varViewContext = vtMissing ) = 0;
      virtual HRESULT __stdcall ExecuteAction (
        /*[in]*/ BSTR bstrAction,
        /*[in]*/ VARIANT varXmlToEdit = vtMissing ) = 0;
};

struct __declspec(uuid("096cd5b1-0786-11d1-95fa-0080c78ee3bb"))
_XDocument : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Save ( ) = 0;
      virtual HRESULT __stdcall SaveAs (
        /*[in]*/ BSTR bstrFileUrl ) = 0;
      virtual HRESULT __stdcall Submit ( ) = 0;
      virtual HRESULT __stdcall get_IsDirty (
        /*[out,retval]*/ VARIANT_BOOL * pvfIsDirty ) = 0;
      virtual HRESULT __stdcall get_IsReadOnly (
        /*[out,retval]*/ VARIANT_BOOL * pvfIsReadOnly ) = 0;
      virtual HRESULT __stdcall get_IsDOMReadOnly (
        /*[out,retval]*/ VARIANT_BOOL * pvfIsDOMReadOnly ) = 0;
      virtual HRESULT __stdcall get_IsNew (
        /*[out,retval]*/ VARIANT_BOOL * pvfIsNew ) = 0;
      virtual HRESULT __stdcall get_URI (
        /*[out,retval]*/ BSTR * pbstrURI ) = 0;
      virtual HRESULT __stdcall get_DOM (
        /*[out,retval]*/ struct IXMLDOMDocument * * ppXMLDOM ) = 0;
      virtual HRESULT __stdcall get_Solution (
        /*[out,retval]*/ struct Solution * * ppSolution ) = 0;
      virtual HRESULT __stdcall get_Errors (
        /*[out,retval]*/ struct ADODB::Errors * * ppValidationErrors ) = 0;
      virtual HRESULT __stdcall get_Extension (
        /*[out,retval]*/ IDispatch * * ppdispExtension ) = 0;
      virtual HRESULT __stdcall get_View (
        /*[out,retval]*/ struct View * * ppView ) = 0;
      virtual HRESULT __stdcall get_ViewInfos (
        /*[out,retval]*/ struct ViewInfos * * ppViewInfos ) = 0;
      virtual HRESULT __stdcall get_DataObjects (
        /*[out,retval]*/ struct DataObjects * * ppObjects ) = 0;
      virtual HRESULT __stdcall get_Language (
        /*[out,retval]*/ BSTR * pbstrLanguage ) = 0;
      virtual HRESULT __stdcall put_Language (
        /*[in]*/ BSTR pbstrLanguage ) = 0;
      virtual HRESULT __stdcall ImportFile (
        /*[in]*/ BSTR bstrFileURI ) = 0;
      virtual HRESULT __stdcall SetDataVariable (
        /*[in]*/ long lVariableNumber,
        /*[in]*/ BSTR bstrVariableValue ) = 0;
      virtual HRESULT __stdcall GetDataVariable (
        /*[in]*/ long lVariableNumber,
        /*[out,retval]*/ BSTR * pbstrVariableValue ) = 0;
      virtual HRESULT __stdcall get_QueryAdapter (
        /*[out,retval]*/ IDispatch * * ppdispDataAdapter ) = 0;
      virtual HRESULT __stdcall GetDOM (
        /*[in]*/ BSTR bstrName,
        /*[out,retval]*/ struct IXMLDOMDocument * * ppDOMDocument ) = 0;
      virtual HRESULT __stdcall Query ( ) = 0;
      virtual HRESULT __stdcall get_IsSigned (
        /*[out,retval]*/ VARIANT_BOOL * pvfIsSigned ) = 0;
      virtual HRESULT __stdcall PrintOut ( ) = 0;
      virtual HRESULT __stdcall get_UI (
        /*[out,retval]*/ struct UI * * ppUI ) = 0;
};

struct __declspec(uuid("096cd559-0786-11d1-95fa-0080c78ee3bb"))
XDocuments : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get__NewEnum (
        /*[out,retval]*/ IUnknown * * ppunk ) = 0;
      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT varIndex,
        /*[out,retval]*/ struct _XDocument * * ppDocument ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * plCount ) = 0;
      virtual HRESULT __stdcall New (
        /*[in]*/ VARIANT varURI,
        /*[in]*/ long dwBehavior,
        /*[out,retval]*/ struct _XDocument * * ppDocument ) = 0;
      virtual HRESULT __stdcall Open (
        /*[in]*/ VARIANT varURI,
        /*[in]*/ long dwBehavior,
        /*[out,retval]*/ struct _XDocument * * ppDocument ) = 0;
      virtual HRESULT __stdcall Close (
        /*[in]*/ VARIANT varIndex ) = 0;
      virtual HRESULT __stdcall NewFromSolution (
        /*[in]*/ VARIANT varURI,
        /*[out,retval]*/ struct _XDocument * * ppDocument ) = 0;
};

struct __declspec(uuid("096cd6a8-0786-11d1-95fa-0080c78ee3bb"))
_XDocument2 : _XDocument
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Role (
        /*[out,retval]*/ BSTR * pbstrRole ) = 0;
      virtual HRESULT __stdcall put_Role (
        /*[in]*/ BSTR pbstrRole ) = 0;
      virtual HRESULT __stdcall GetNamedNodeProperty (
        /*[in]*/ VARIANT varMainDOMNode,
        /*[in]*/ BSTR bstrPropertyName,
        /*[in]*/ BSTR bstrDefaultValue,
        /*[out,retval]*/ BSTR * pbstrValue ) = 0;
      virtual HRESULT __stdcall SetNamedNodeProperty (
        /*[in]*/ struct IXMLDOMNode * pxmlMainDOMNode,
        /*[in]*/ BSTR bstrPropertyName,
        /*[in]*/ BSTR bstrValue ) = 0;
      virtual HRESULT __stdcall get_DataAdapters (
        /*[out,retval]*/ struct DataAdapters * * ppAdapters ) = 0;
      virtual HRESULT __stdcall ImportDOM (
        /*[in]*/ struct IXMLDOMDocument * pxDoc ) = 0;
      virtual HRESULT __stdcall get_SignedDataBlocks (
        /*[out,retval]*/ struct SignedDataBlocks * * ppSignedDataBlocks ) = 0;
      virtual HRESULT __stdcall get_IsRecovered (
        /*[out,retval]*/ VARIANT_BOOL * pvfIsRecovered ) = 0;
      virtual HRESULT __stdcall get_Util (
        /*[out,retval]*/ struct Util * * ppUtil ) = 0;
      virtual HRESULT __stdcall CreateDOM (
        /*[out,retval]*/ struct IXMLDOMDocument * * ppDOM ) = 0;
      virtual HRESULT __stdcall SetDirty (
        /*[in]*/ VARIANT_BOOL vfIsDirty ) = 0;
};

struct __declspec(uuid("096cd647-0786-11d1-95fa-0080c78ee3bb"))
XDocuments2 : XDocuments
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall NewFromSolutionWithData (
        /*[in]*/ VARIANT varXMLData,
        /*[in]*/ VARIANT varSolutionURI,
        /*[in]*/ long dwBehavior,
        /*[out,retval]*/ struct _XDocument2 * * ppDocument ) = 0;
};

struct __declspec(uuid("096cd773-0786-11d1-95fa-0080c78ee3bb"))
XDocuments3 : XDocuments2
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall NewFromSolutionWithInputParameters (
        /*[in]*/ VARIANT varSolutionURI,
        /*[in]*/ VARIANT varInputParams,
        /*[out,retval]*/ struct _XDocument2 * * ppDocument ) = 0;
};

struct __declspec(uuid("096cd6b6-0786-11d1-95fa-0080c78ee3bb"))
_XDocument3 : _XDocument2
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Permission (
        /*[out,retval]*/ struct Permission * * pprmPermission ) = 0;
      virtual HRESULT __stdcall get_Host (
        /*[out,retval]*/ IDispatch * * ppdispHost ) = 0;
      virtual HRESULT __stdcall GetWorkflowTasks (
        /*[out,retval]*/ IDispatch * * ppWorkflowTasks ) = 0;
      virtual HRESULT __stdcall GetWorkflowTemplates (
        /*[out,retval]*/ IDispatch * * ppWorkflowTemplates ) = 0;
      virtual HRESULT __stdcall get_HostName (
        /*[out,retval]*/ BSTR * pbstrHostName ) = 0;
      virtual HRESULT __stdcall get_InputParameters (
        /*[out,retval]*/ struct InputParameters * * ppInputParameters ) = 0;
      virtual HRESULT __stdcall CloseDocument ( ) = 0;
      virtual HRESULT __stdcall get_IsHosted (
        /*[out,retval]*/ VARIANT_BOOL * pvfIsHosted ) = 0;
      virtual HRESULT __stdcall NotifyHost (
        /*[in]*/ BSTR bstrNotification ) = 0;
};

struct __declspec(uuid("096cd77b-0786-11d1-95fa-0080c78ee3bb"))
_XDocument4 : _XDocument3
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_ServerInfo (
        /*[out,retval]*/ struct ServerInfo * * pServerInfo ) = 0;
      virtual HRESULT __stdcall get_User (
        /*[out,retval]*/ struct User * * ppUser ) = 0;
      virtual HRESULT __stdcall get_NetworkState (
        /*[out,retval]*/ struct _NetworkState * * ppAS ) = 0;
};

struct __declspec(uuid("096cd70c-0786-11d1-95fa-0080c78ee3bb"))
View2 : View
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall ExportAsFixedFormat (
        /*[in]*/ BSTR bstrURL,
        /*[in]*/ BSTR bstrFormat,
        /*[in]*/ VARIANT varExporter ) = 0;
};

struct __declspec(uuid("096cd765-0786-11d1-95fa-0080c78ee3bb"))
View3 : View2
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_SignatureLines (
        /*[out,retval]*/ struct SignatureLines * * ppSignatureLines ) = 0;
};

struct __declspec(uuid("096cd5f7-0786-11d1-95fa-0080c78ee3bb"))
Window2 : Window
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Top (
        /*[out,retval]*/ long * plTop ) = 0;
      virtual HRESULT __stdcall put_Top (
        /*[in]*/ long plTop ) = 0;
      virtual HRESULT __stdcall get_Left (
        /*[out,retval]*/ long * plLeft ) = 0;
      virtual HRESULT __stdcall put_Left (
        /*[in]*/ long plLeft ) = 0;
      virtual HRESULT __stdcall get_Width (
        /*[out,retval]*/ long * plWidth ) = 0;
      virtual HRESULT __stdcall put_Width (
        /*[in]*/ long plWidth ) = 0;
      virtual HRESULT __stdcall get_Height (
        /*[out,retval]*/ long * plHeight ) = 0;
      virtual HRESULT __stdcall put_Height (
        /*[in]*/ long plHeight ) = 0;
      virtual HRESULT __stdcall get_Caption (
        /*[out,retval]*/ BSTR * pbstrCaption ) = 0;
      virtual HRESULT __stdcall put_Caption (
        /*[in]*/ BSTR pbstrCaption ) = 0;
      virtual HRESULT __stdcall get_WindowState (
        /*[out,retval]*/ enum XdWindowState * plWindowState ) = 0;
      virtual HRESULT __stdcall put_WindowState (
        /*[in]*/ enum XdWindowState plWindowState ) = 0;
};

struct __declspec(uuid("096cd613-0786-11d1-95fa-0080c78ee3bb"))
DocEvent : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_XDocument (
        /*[out,retval]*/ struct _XDocument * * ppDocument ) = 0;
};

struct __declspec(uuid("096cd676-0786-11d1-95fa-0080c78ee3bb"))
DocReturnEvent : DocEvent
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_ReturnStatus (
        /*[out,retval]*/ VARIANT_BOOL * pfReturnStatus ) = 0;
      virtual HRESULT __stdcall put_ReturnStatus (
        /*[in]*/ VARIANT_BOOL pfReturnStatus ) = 0;
};

struct __declspec(uuid("096cd63a-0786-11d1-95fa-0080c78ee3bb"))
DocActionEvent : DocReturnEvent
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Source (
        /*[out,retval]*/ struct IXMLDOMNode * * ppxmlSource ) = 0;
};

struct __declspec(uuid("096cd6d2-0786-11d1-95fa-0080c78ee3bb"))
DocContextChangeEvent : DocEvent
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Context (
        /*[out,retval]*/ struct IXMLDOMNode * * ppXMLNodeContext ) = 0;
      virtual HRESULT __stdcall get_Type (
        /*[out,retval]*/ BSTR * pbstrType ) = 0;
      virtual HRESULT __stdcall get_IsUndoRedo (
        /*[out,retval]*/ VARIANT_BOOL * pfIsUndoRedo ) = 0;
};

struct __declspec(uuid("096cd5f5-0786-11d1-95fa-0080c78ee3bb"))
SaveEvent : DocReturnEvent
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_IsSaveAs (
        /*[out,retval]*/ VARIANT_BOOL * pvfIsSaveAs ) = 0;
      virtual HRESULT __stdcall get_IsCancelled (
        /*[out,retval]*/ VARIANT_BOOL * pvfIsCancelled ) = 0;
      virtual HRESULT __stdcall put_IsCancelled (
        /*[in]*/ VARIANT_BOOL pvfIsCancelled ) = 0;
      virtual HRESULT __stdcall get_FileName (
        /*[out,retval]*/ BSTR * pbstrFileName ) = 0;
      virtual HRESULT __stdcall PerformSaveOperation (
        /*[out,retval]*/ VARIANT_BOOL * pfvIsCancelled ) = 0;
};

struct __declspec(uuid("096cd71d-0786-11d1-95fa-0080c78ee3bb"))
SignEvent : DocReturnEvent
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_SignedDataBlock (
        /*[out,retval]*/ struct SignedDataBlock * * ppSignedDataBlock ) = 0;
};

struct __declspec(uuid("096cd67b-0786-11d1-95fa-0080c78ee3bb"))
MergeEvent : DocReturnEvent
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_RollBack (
        /*[out,retval]*/ VARIANT_BOOL * pfRollback ) = 0;
      virtual HRESULT __stdcall put_RollBack (
        /*[in]*/ VARIANT_BOOL pfRollback ) = 0;
      virtual HRESULT __stdcall get_index (
        /*[out,retval]*/ long * plIndex ) = 0;
      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * plCount ) = 0;
      virtual HRESULT __stdcall get_DOM (
        /*[out,retval]*/ struct IXMLDOMDocument * * ppxDoc ) = 0;
};

struct __declspec(uuid("096cd614-0786-11d1-95fa-0080c78ee3bb"))
VersionUpgradeEvent : DocReturnEvent
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_DocumentVersion (
        /*[out,retval]*/ BSTR * pbstrValue ) = 0;
      virtual HRESULT __stdcall get_SolutionVersion (
        /*[out,retval]*/ BSTR * pbstrOldValue ) = 0;
};

struct __declspec(uuid("096cd5e5-0786-11d1-95fa-0080c78ee3bb"))
DataDOMEvent : DocActionEvent
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Site (
        /*[out,retval]*/ struct IXMLDOMNode * * ppxmlSite ) = 0;
      virtual HRESULT __stdcall get_MatchExpression (
        /*[out,retval]*/ BSTR * pbstrContext ) = 0;
      virtual HRESULT __stdcall get_Parent (
        /*[out,retval]*/ struct IXMLDOMNode * * ppxmlParent ) = 0;
      virtual HRESULT __stdcall get_Operation (
        /*[out,retval]*/ BSTR * pbstrAction ) = 0;
      virtual HRESULT __stdcall get_OldValue (
        /*[out,retval]*/ VARIANT * pvarOldValue ) = 0;
      virtual HRESULT __stdcall get_IsUndoRedo (
        /*[out,retval]*/ VARIANT_BOOL * pfUndoRedo ) = 0;
      virtual HRESULT __stdcall get_NewValue (
        /*[out,retval]*/ VARIANT * pvarNewValue ) = 0;
      virtual HRESULT __stdcall get_ReturnMessage (
        /*[out,retval]*/ BSTR * pbstrErrorMessage ) = 0;
      virtual HRESULT __stdcall put_ReturnMessage (
        /*[in]*/ BSTR pbstrErrorMessage ) = 0;
      virtual HRESULT __stdcall ReportError (
        /*[in]*/ VARIANT varNode,
        /*[in]*/ BSTR bstrShortErrorMessage,
        /*[in]*/ VARIANT_BOOL fSiteIndependent,
        /*[in]*/ BSTR bstrDetailedErrorMessage,
        /*[in]*/ long lErrorCode,
        /*[in]*/ BSTR bstrType,
        /*[out,retval]*/ struct Error * * ppxdError ) = 0;
};

struct __declspec(uuid("096cd68f-0786-11d1-95fa-0080c78ee3bb"))
InfoPathControlSite : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_XDocument (
        /*[out,retval]*/ struct _XDocument * * ppDocument ) = 0;
      virtual HRESULT __stdcall get_Node (
        /*[out,retval]*/ struct IXMLDOMNode * * ppxmlNode ) = 0;
};

struct __declspec(uuid("096cd68e-0786-11d1-95fa-0080c78ee3bb"))
InfoPathControl : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Init (
        /*[in]*/ struct InfoPathControlSite * pControlSite ) = 0;
      virtual HRESULT __stdcall Uninit ( ) = 0;
      virtual HRESULT __stdcall SaveState ( ) = 0;
      virtual HRESULT __stdcall Enable (
        /*[in]*/ VARIANT_BOOL vfEnabled ) = 0;
};

struct __declspec(uuid("096cd77d-0786-11d1-95fa-0080c78ee3bb"))
InfoPathControl2 : InfoPathControl
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall RefreshState ( ) = 0;
};

struct __declspec(uuid("096cd58a-0786-11d1-95fa-0080c78ee3bb"))
_Application : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall get_Windows (
        /*[out,retval]*/ struct Windows * * ppwindows ) = 0;
      virtual HRESULT __stdcall get_XDocuments (
        /*[out,retval]*/ struct XDocuments * * ppdispDocuments ) = 0;
      virtual HRESULT __stdcall get_ActiveWindow (
        /*[out,retval]*/ struct Window * * ppWindow ) = 0;
      virtual HRESULT __stdcall get_Version (
        /*[out,retval]*/ BSTR * pbstrVersion ) = 0;
      virtual HRESULT __stdcall get_LanguageSettings (
        /*[out,retval]*/ IDispatch * * ppdispLangSettings ) = 0;
      virtual HRESULT __stdcall FormatString (
        /*[in]*/ VARIANT varInput,
        /*[in]*/ BSTR bstrCategory,
        /*[in]*/ BSTR bstrOptions,
        /*[out,retval]*/ BSTR * pbstrOutput ) = 0;
      virtual HRESULT __stdcall Quit (
        /*[in]*/ VARIANT_BOOL bForce ) = 0;
      virtual HRESULT __stdcall NewADODBRecordset (
        /*[out,retval]*/ struct _Recordset * * pp ) = 0;
      virtual HRESULT __stdcall NewADODBConnection (
        /*[out,retval]*/ struct _Connection * * pp ) = 0;
};

struct __declspec(uuid("096cd6bb-0786-11d1-95fa-0080c78ee3bb"))
_Application2 : _Application
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_User (
        /*[out,retval]*/ struct User * * ppUser ) = 0;
      virtual HRESULT __stdcall RegisterSolution (
        /*[in]*/ BSTR bstrSolutionURL,
        /*[in]*/ BSTR bstrBehavior ) = 0;
      virtual HRESULT __stdcall UnregisterSolution (
        /*[in]*/ BSTR bstrSolutionURI ) = 0;
      virtual HRESULT __stdcall CacheSolution (
        /*[in]*/ BSTR bstrSolutionURI ) = 0;
      virtual HRESULT __stdcall get_MachineOnlineState (
        /*[out,retval]*/ enum XdMachineOnlineState * penumOnlineState ) = 0;
      virtual HRESULT __stdcall IsDestinationReachable (
        /*[in]*/ BSTR bstrDestination,
        /*[out,retval]*/ VARIANT_BOOL * pfReachable ) = 0;
      virtual HRESULT __stdcall get_UsableWidth (
        /*[out,retval]*/ long * plUsableWidth ) = 0;
      virtual HRESULT __stdcall get_UsableHeight (
        /*[out,retval]*/ long * plUsableHeight ) = 0;
};

struct __declspec(uuid("096cd551-0786-11d1-95fa-0080c78ee3bb"))
_XDocumentEventSink : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall OnLoad (
        /*[in]*/ struct DocReturnEvent * pEvent ) = 0;
      virtual HRESULT __stdcall OnSwitchView (
        /*[in]*/ struct DocEvent * pEvent ) = 0;
      virtual HRESULT __stdcall OnAfterImport (
        /*[in]*/ struct DocEvent * pEvent ) = 0;
      virtual HRESULT __stdcall OnVersionUpgrade (
        /*[in]*/ struct VersionUpgradeEvent * pEvent ) = 0;
      virtual HRESULT __stdcall OnSubmitRequest (
        /*[in]*/ struct DocReturnEvent * pEvent ) = 0;
};

struct __declspec(uuid("096cd563-0786-11d1-95fa-0080c78ee3bb"))
_XDocumentEventSink2 : _XDocumentEventSink
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall OnMergeRequest (
        /*[in]*/ struct MergeEvent * pEvent ) = 0;
      virtual HRESULT __stdcall OnContextChange (
        /*[in]*/ struct DocContextChangeEvent * pEvent ) = 0;
      virtual HRESULT __stdcall OnSaveRequest (
        /*[in]*/ struct SaveEvent * pEvent ) = 0;
      virtual HRESULT __stdcall OnSign (
        /*[in]*/ struct SignEvent * pEvent ) = 0;
};

struct __declspec(uuid("096cd567-0786-11d1-95fa-0080c78ee3bb"))
_DataDOMEventSink : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall OnBeforeChange (
        /*[in]*/ struct DataDOMEvent * pDataDOMEvent ) = 0;
      virtual HRESULT __stdcall OnValidate (
        /*[in]*/ struct DataDOMEvent * pDataDOMEvent ) = 0;
      virtual HRESULT __stdcall OnAfterChange (
        /*[in]*/ struct DataDOMEvent * pDataDOMEvent ) = 0;
};

struct __declspec(uuid("096cd5f4-0786-11d1-95fa-0080c78ee3bb"))
HTMLTaskPaneExternal : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Window (
        /*[out,retval]*/ struct Window * * ppWindow ) = 0;
      virtual HRESULT __stdcall get_XDocument (
        /*[out,retval]*/ struct _XDocument * * ppDocument ) = 0;
};

struct __declspec(uuid("096cd6ab-0786-11d1-95fa-0080c78ee3bb"))
_ButtonEventSink : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall OnClick (
        /*[in]*/ struct DocActionEvent * pEvent ) = 0;
};

struct __declspec(uuid("096cd73a-0786-11d1-95fa-0080c78ee3bb"))
IInitEventHandler : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall InitEventHandler (
        /*[in]*/ IUnknown * punkSender,
        /*[in]*/ struct _XDocument * pDocument,
        /*[out]*/ enum XdReadOnlyViewMode * pROMode ) = 0;
};

struct __declspec(uuid("096cd706-0786-11d1-95fa-0080c78ee3bb"))
InfoPathEditor : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Load (
        /*[in]*/ BSTR bstrURL ) = 0;
      virtual HRESULT __stdcall LoadFromStream (
        /*[in]*/ IUnknown * punkStream ) = 0;
      virtual HRESULT __stdcall NewFromSolution (
        /*[in]*/ BSTR bstrSolutionURI ) = 0;
      virtual HRESULT __stdcall NewFromSolutionWithData (
        /*[in]*/ BSTR bstrURLXSN,
        /*[in]*/ IUnknown * punkStream,
        /*[in]*/ long dwBehavior ) = 0;
      virtual HRESULT __stdcall get_XDocument (
        /*[out,retval]*/ struct _XDocument * * ppXDocument ) = 0;
      virtual HRESULT __stdcall get_Host (
        /*[out,retval]*/ IDispatch * * ppdispHost ) = 0;
      virtual HRESULT __stdcall put_Host (
        /*[in]*/ IDispatch * ppdispHost ) = 0;
      virtual HRESULT __stdcall get_HostName (
        /*[out,retval]*/ BSTR * pbstrHostName ) = 0;
      virtual HRESULT __stdcall put_HostName (
        /*[in]*/ BSTR pbstrHostName ) = 0;
      virtual HRESULT __stdcall SetSubmitToHostEventHandler (
        /*[in]*/ struct ISubmitToHostEventHandler * pHandler ) = 0;
      virtual HRESULT __stdcall SetInitEventHandler (
        /*[in]*/ struct IInitEventHandler * handler ) = 0;
      virtual HRESULT __stdcall get_DataConnectionBaseUrl (
        /*[out,retval]*/ BSTR * pbstrDataConnectionBaseUrl ) = 0;
      virtual HRESULT __stdcall put_DataConnectionBaseUrl (
        /*[in]*/ BSTR pbstrDataConnectionBaseUrl ) = 0;
      virtual HRESULT __stdcall FlushDocument ( ) = 0;
      virtual HRESULT __stdcall CloseDocument ( ) = 0;
      virtual HRESULT __stdcall SetNotifyHostEventHandler (
        /*[in]*/ struct INotifyHostEventHandler * pHandler ) = 0;
};

struct __declspec(uuid("096cd72e-0786-11d1-95fa-0080c78ee3bb"))
_Application3 : _Application2
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_COMAddIns (
        /*[out,retval]*/ IDispatch * * ppdispCOMAddIns ) = 0;
      virtual HRESULT __stdcall get_Events (
        /*[out,retval]*/ IUnknown * * ppunkApplicationEvents ) = 0;
      virtual HRESULT __stdcall GetSolutionURI (
        /*[in]*/ BSTR bstrCacheID,
        /*[out,retval]*/ BSTR * pbstrSolutionURI ) = 0;
};

//
// Named GUID constants initializations
//

extern "C" const GUID __declspec(selectany) LIBID_InfoPath =
    {0xfd34a380,0x115f,0x43ca,{0x8d,0x6f,0xbb,0xd4,0x5f,0xd6,0xf8,0x28}};
extern "C" const GUID __declspec(selectany) IID__IXDOverride =
    {0x096cd5b6,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID__Recordset =
    {0x00000556,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID__Connection =
    {0x00000550,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID_Solution =
    {0x096cd557,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_XMLNodes =
    {0x096cd6c1,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_ViewInfo =
    {0x096cd602,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_ViewInfos =
    {0x096cd601,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_DataObject =
    {0x096cd5a1,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_DataObjects =
    {0x096cd5a4,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_UI =
    {0x096cd61f,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_MailEnvelope =
    {0x096cd588,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_TaskPane =
    {0x096cd58e,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_TaskPanes =
    {0x096cd58d,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_DataAdapters =
    {0x096cd692,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_Certificate =
    {0x096cd71a,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_Signature =
    {0x096cd718,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_Signatures =
    {0x096cd716,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_SignedDataBlock =
    {0x096cd714,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_SignedDataBlocks =
    {0x096cd712,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_IPMath =
    {0x096cd6a0,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_Util =
    {0x096cd6be,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_UserPermission =
    {0x096cd6cb,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_Permission =
    {0x096cd6cc,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_InputParameter =
    {0x096cd5b5,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_InputParameters =
    {0x096cd694,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_ServerInfo =
    {0x096cd77c,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_User =
    {0x096cd6bc,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID__NetworkState =
    {0x096cd754,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_Errors =
    {0x096cd578,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_Error =
    {0x096cd577,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_ViewInfo2 =
    {0x096cd5fb,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_SignatureLine =
    {0x096cd768,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_SignatureLines =
    {0x096cd767,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_MailEnvelope2 =
    {0x096cd6fc,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_Solution2 =
    {0x096cd76d,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_HTMLTaskPane =
    {0x096cd548,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_UI2 =
    {0x096cd549,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID__ExternalApplication =
    {0x096cd69f,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID__ExternalApplication2 =
    {0x096cd772,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_User2 =
    {0x096cd736,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_Date =
    {0x096cd6a3,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_ApplicationEventsEmpty =
    {0x096cd784,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_DataDOMEmpty =
    {0x096cd785,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_ButtonEmpty =
    {0x096cd786,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_ADOAdapter =
    {0x096cd653,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_ADOAdapter2 =
    {0x096cd5d3,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_WebServiceAdapter =
    {0x096cd654,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_WebServiceAdapter2 =
    {0x096cd5d4,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_XMLFileAdapter =
    {0x096cd655,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_XMLFileAdapter2 =
    {0x096cd5d5,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_IDataAdapterMOM =
    {0x096cd734,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_SharepointListAdapter =
    {0x096cd69a,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_SharepointListAdapter2 =
    {0x096cd740,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_IGrooveAdapter =
    {0x096cd800,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_DAVAdapter =
    {0x096cd5d6,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_EmailAdapter =
    {0x096cd5d7,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_HWSAdapter =
    {0x096cd6bf,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_SubmitToHostAdapter =
    {0x096cd739,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_SharePointListAdapterRW =
    {0x096cd635,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_BDCAdapter =
    {0x096cd743,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_ICLRExtensions =
    {0x096cd6a9,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_ISubmitToHostEventHandler =
    {0x096cd738,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_INotifyHostEventHandler =
    {0x096cd764,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_IInfoPathEditorProperties =
    {0x096cd742,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_InfoPathEditorWithAppDomain =
    {0x096cd774,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) DIID__ApplicationEvents =
    {0x096cd72d,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_IInfoPathDataImporterFields =
    {0x096cd76c,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_IInfoPathDataImporter =
    {0x096cd6d9,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_IInfoPathViewControl =
    {0x096cd6da,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) CLSID_Application =
    {0x8075835f,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_ApplicationEvents =
    {0x80758412,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_ExternalApplication =
    {0x80758358,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_XDocument =
    {0x807583c8,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_XDNetworkState =
    {0x8075835c,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_DataDOM =
    {0x807583c2,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_Button =
    {0x807583ea,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_UIObject =
    {0x80758363,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_DataAdaptersCollection =
    {0x807583e1,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_EmailAdapterObject =
    {0x807583e2,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_DAVAdapterObject =
    {0x807583e3,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_BDCAdapterObject =
    {0x807583f3,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_HWSAdapterObject =
    {0x807583e4,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_SubmitToHostAdapterObject =
    {0x807583f0,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_SharepointListAdapterObject =
    {0x8075838e,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_SharePointListAdapterRWObject =
    {0x80758326,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_XMLFileAdapterObject =
    {0x8075838c,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_WebServiceAdapterObject =
    {0x8075838b,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_ADOAdapterObject =
    {0x8075838a,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_DocEventObject =
    {0x8075831b,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_DocReturnEventObject =
    {0x8075831d,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_DocActionEventObject =
    {0x8075831f,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_VersionUpgradeEventObject =
    {0x80758320,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_DataDOMEventObject =
    {0x80758322,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_SolutionObject =
    {0x807583ce,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_WindowObject =
    {0x8075835a,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_WindowsCollection =
    {0x80758359,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_TaskPanesCollection =
    {0x8075830e,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_TaskPaneObject =
    {0x80758301,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_HTMLTaskPaneObject =
    {0x80758302,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_ViewObject =
    {0x80758392,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_MailEnvelopeObject =
    {0x807583c1,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_XDocumentsCollection =
    {0x80758336,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_ViewInfoObject =
    {0x80758337,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_ViewInfosCollection =
    {0x80758338,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_ErrorObject =
    {0x8075833a,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_ErrorsCollection =
    {0x8075833b,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_UtilObject =
    {0x80758306,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_MathObject =
    {0x80758308,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_DateObject =
    {0x80758309,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_SignedDataBlocksCollection =
    {0x8075837b,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_SignedDataBlockObject =
    {0x8075837c,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_SignaturesCollection =
    {0x8075837d,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_SignatureObject =
    {0x8075837e,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_SignatureLinesCollection =
    {0x80758379,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_SignatureLineObject =
    {0x8075837a,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_CertificateObject =
    {0x8075837f,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_MergeEventObject =
    {0x8075833c,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_SaveEventObject =
    {0x8075833d,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_SignEventObject =
    {0x8075833e,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_XMLNodesCollection =
    {0x0e221c61,0xfd53,0x4bcb,{0x8f,0xa8,0xc4,0xa3,0x41,0xc9,0x08,0x63}};
extern "C" const GUID __declspec(selectany) CLSID_DataSourceObject =
    {0x8075830b,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_DataObjectsCollection =
    {0x807583b0,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_DocContextChangeEventObject =
    {0x8075830c,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_UserObject =
    {0x8075830d,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_ServerInfoObject =
    {0x8075833f,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_UserPermissionObject =
    {0x80758314,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_PermissionObject =
    {0x80758315,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_InfoPathEditorObject =
    {0x80758399,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_InputParameterObject =
    {0x80758316,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) CLSID_InputParameterCollection =
    {0x8075832e,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};
extern "C" const GUID __declspec(selectany) IID_Windows =
    {0x096cd58b,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_Window =
    {0x096cd595,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_View =
    {0x096cd55d,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID__XDocument =
    {0x096cd5b1,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_XDocuments =
    {0x096cd559,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID__XDocument2 =
    {0x096cd6a8,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_XDocuments2 =
    {0x096cd647,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_XDocuments3 =
    {0x096cd773,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID__XDocument3 =
    {0x096cd6b6,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID__XDocument4 =
    {0x096cd77b,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_View2 =
    {0x096cd70c,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_View3 =
    {0x096cd765,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_Window2 =
    {0x096cd5f7,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_DocEvent =
    {0x096cd613,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_DocReturnEvent =
    {0x096cd676,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_DocActionEvent =
    {0x096cd63a,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_DocContextChangeEvent =
    {0x096cd6d2,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_SaveEvent =
    {0x096cd5f5,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_SignEvent =
    {0x096cd71d,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_MergeEvent =
    {0x096cd67b,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_VersionUpgradeEvent =
    {0x096cd614,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_DataDOMEvent =
    {0x096cd5e5,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_InfoPathControlSite =
    {0x096cd68f,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_InfoPathControl =
    {0x096cd68e,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_InfoPathControl2 =
    {0x096cd77d,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID__Application =
    {0x096cd58a,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID__Application2 =
    {0x096cd6bb,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID__XDocumentEventSink =
    {0x096cd551,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID__XDocumentEventSink2 =
    {0x096cd563,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID__DataDOMEventSink =
    {0x096cd567,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_HTMLTaskPaneExternal =
    {0x096cd5f4,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID__ButtonEventSink =
    {0x096cd6ab,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_IInitEventHandler =
    {0x096cd73a,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_InfoPathEditor =
    {0x096cd706,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID__Application3 =
    {0x096cd72e,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};

} // namespace InfoPath

#pragma pack(pop)
