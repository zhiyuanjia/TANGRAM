// Created by Microsoft (R) C/C++ Compiler Version 14.00.23026.0 (2dd33e4a).
//
// c:\users\sunhui2\documents\visual studio 2015\projects\atlproject4\atlproject4\debug\inlaunch.tlh
//
// C++ source equivalent of Win32 type library D:\Program Files (x86)\Microsoft Office\Office15\INLAUNCH.DLL
// compiler-generated file created 10/13/15 at 08:54:39 - DO NOT EDIT!

#pragma once
#pragma pack(push, 8)

#include <comdef.h>

namespace Sharepoint {

//
// Forward references and typedefs
//

struct __declspec(uuid("fd34a387-115f-43ca-8d6f-bbd45fd6f828"))
/* LIBID */ __Sharepoint;
struct __declspec(uuid("096cd5de-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ IOpenXMLDocuments;
struct __declspec(uuid("096cd6fd-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ IOpenXMLDocuments2;
struct __declspec(uuid("096cd76a-0786-11d1-95fa-0080c78ee3bb"))
/* dual interface */ IOpenXMLDocuments3;
struct /* coclass */ COpenXMLDocuments;

//
// Smart pointer typedef declarations
//

_COM_SMARTPTR_TYPEDEF(IOpenXMLDocuments, __uuidof(IOpenXMLDocuments));
_COM_SMARTPTR_TYPEDEF(IOpenXMLDocuments2, __uuidof(IOpenXMLDocuments2));
_COM_SMARTPTR_TYPEDEF(IOpenXMLDocuments3, __uuidof(IOpenXMLDocuments3));

//
// Type library items
//

struct __declspec(uuid("096cd5de-0786-11d1-95fa-0080c78ee3bb"))
IOpenXMLDocuments : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall CreateNewDocument (
        /*[in]*/ BSTR bstrTemplateLocation,
        /*[in]*/ BSTR bstrDefaultSaveLocation,
        /*[out,retval]*/ VARIANT_BOOL * pbResult ) = 0;
      virtual HRESULT __stdcall CreateNewDocument2 (
        /*[in]*/ IDispatch * pdisp,
        /*[in]*/ BSTR bstrTemplateLocation,
        /*[in]*/ BSTR bstrDefaultSaveLocation,
        /*[out,retval]*/ VARIANT_BOOL * pbResult ) = 0;
      virtual HRESULT __stdcall EditDocument (
        /*[in]*/ BSTR bstrDocumentLocation,
        /*[in]*/ BSTR bstrDocumentID,
        /*[out,retval]*/ VARIANT_BOOL * pbResult ) = 0;
      virtual HRESULT __stdcall EditDocument2 (
        /*[in]*/ IDispatch * pdisp,
        /*[in]*/ BSTR bstrDocumentLocation,
        /*[in]*/ BSTR bstrDocumentID,
        /*[out,retval]*/ VARIANT_BOOL * pbResult ) = 0;
      virtual HRESULT __stdcall CustomizeTemplate (
        /*[in]*/ BSTR bstrSolutionLocation,
        /*[out,retval]*/ VARIANT_BOOL * pbResult ) = 0;
      virtual HRESULT __stdcall CustomizeTemplate2 (
        /*[in]*/ IDispatch * pdisp,
        /*[in]*/ BSTR bstrSolutionLocation,
        /*[out,retval]*/ VARIANT_BOOL * pbResult ) = 0;
      virtual HRESULT __stdcall MergeDocuments (
        /*[in]*/ BSTR bstrTemplateLocation,
        /*[in]*/ VARIANT varDocuments,
        /*[in]*/ BSTR bstrDefaultSaveLocation,
        /*[out,retval]*/ VARIANT_BOOL * pbResult ) = 0;
      virtual HRESULT __stdcall MergeDocuments2 (
        /*[in]*/ IDispatch * pdisp,
        /*[in]*/ BSTR bstrTemplateLocation,
        /*[in]*/ VARIANT varDocuments,
        /*[in]*/ BSTR bstrDefaultSaveLocation,
        /*[out,retval]*/ VARIANT_BOOL * pbResult ) = 0;
};

struct __declspec(uuid("096cd6fd-0786-11d1-95fa-0080c78ee3bb"))
IOpenXMLDocuments2 : IOpenXMLDocuments
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall CustomizeTemplate3 (
        /*[in]*/ BSTR bstrSolutionLocation,
        /*[in]*/ BSTR bstrVersionID,
        /*[in]*/ BSTR bstrCTID,
        /*[in]*/ BSTR bstrCTURL,
        /*[out,retval]*/ VARIANT_BOOL * pbResult ) = 0;
      virtual HRESULT __stdcall CustomizeTemplate4 (
        /*[in]*/ BSTR bstrContentTypeURL,
        /*[in]*/ BSTR bstrContentTypeID,
        /*[out,retval]*/ VARIANT_BOOL * pbResult ) = 0;
      virtual HRESULT __stdcall ViewDocument (
        /*[in]*/ BSTR bstrDocumentLocation,
        /*[in]*/ VARIANT varProgID,
        /*[out,retval]*/ VARIANT_BOOL * pbResult ) = 0;
      virtual HRESULT __stdcall ViewDocument2 (
        /*[in]*/ IDispatch * pdisp,
        /*[in]*/ BSTR bstrDocumentLocation,
        /*[in]*/ VARIANT varProgID,
        /*[out,retval]*/ VARIANT_BOOL * pbResult ) = 0;
      virtual HRESULT __stdcall PromptedOnLastOpen (
        /*[out,retval]*/ VARIANT_BOOL * pbResult ) = 0;
};

struct __declspec(uuid("096cd76a-0786-11d1-95fa-0080c78ee3bb"))
IOpenXMLDocuments3 : IOpenXMLDocuments2
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall CustomizeSharePointList (
        /*[in]*/ BSTR bstrSiteURL,
        /*[in]*/ BSTR bstrListID,
        /*[in]*/ BSTR bstrContentTypeID,
        /*[out,retval]*/ VARIANT_BOOL * pbResult ) = 0;
};

struct __declspec(uuid("8075831e-5146-11d5-a672-00b0d022e945"))
COpenXMLDocuments;
    // [ default ] interface IOpenXMLDocuments3
    // interface IOpenXMLDocuments2
    // interface IOpenXMLDocuments

//
// Named GUID constants initializations
//

extern "C" const GUID __declspec(selectany) LIBID_Sharepoint =
    {0xfd34a387,0x115f,0x43ca,{0x8d,0x6f,0xbb,0xd4,0x5f,0xd6,0xf8,0x28}};
extern "C" const GUID __declspec(selectany) IID_IOpenXMLDocuments =
    {0x096cd5de,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_IOpenXMLDocuments2 =
    {0x096cd6fd,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) IID_IOpenXMLDocuments3 =
    {0x096cd76a,0x0786,0x11d1,{0x95,0xfa,0x00,0x80,0xc7,0x8e,0xe3,0xbb}};
extern "C" const GUID __declspec(selectany) CLSID_COpenXMLDocuments =
    {0x8075831e,0x5146,0x11d5,{0xa6,0x72,0x00,0xb0,0xd0,0x22,0xe9,0x45}};

} // namespace Sharepoint

#pragma pack(pop)
