

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Fri Oct 09 16:34:56 2015
 */
/* Compiler settings for TangramVSIHelper.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __TangramVSIHelper_i_h__
#define __TangramVSIHelper_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ITangramVSHelper_FWD_DEFINED__
#define __ITangramVSHelper_FWD_DEFINED__
typedef interface ITangramVSHelper ITangramVSHelper;

#endif 	/* __ITangramVSHelper_FWD_DEFINED__ */


#ifndef __ITangramHelper_FWD_DEFINED__
#define __ITangramHelper_FWD_DEFINED__
typedef interface ITangramHelper ITangramHelper;

#endif 	/* __ITangramHelper_FWD_DEFINED__ */


#ifndef __TangramHelper_FWD_DEFINED__
#define __TangramHelper_FWD_DEFINED__

#ifdef __cplusplus
typedef class TangramHelper TangramHelper;
#else
typedef struct TangramHelper TangramHelper;
#endif /* __cplusplus */

#endif 	/* __TangramHelper_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ITangramVSHelper_INTERFACE_DEFINED__
#define __ITangramVSHelper_INTERFACE_DEFINED__

/* interface ITangramVSHelper */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITangramVSHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("33522476-3DE1-4B34-BB62-3140C6641D39")
    ITangramVSHelper : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ExtendXml( 
            BSTR bstrXml,
            BSTR bstrKey,
            /* [retval][out] */ IDispatch **ppNode) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HWND( 
            /* [retval][out] */ ULONGLONG *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITangramVSHelperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITangramVSHelper * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITangramVSHelper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITangramVSHelper * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITangramVSHelper * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITangramVSHelper * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITangramVSHelper * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITangramVSHelper * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ExtendXml )( 
            ITangramVSHelper * This,
            BSTR bstrXml,
            BSTR bstrKey,
            /* [retval][out] */ IDispatch **ppNode);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HWND )( 
            ITangramVSHelper * This,
            /* [retval][out] */ ULONGLONG *pVal);
        
        END_INTERFACE
    } ITangramVSHelperVtbl;

    interface ITangramVSHelper
    {
        CONST_VTBL struct ITangramVSHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITangramVSHelper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITangramVSHelper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITangramVSHelper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITangramVSHelper_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITangramVSHelper_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITangramVSHelper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITangramVSHelper_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITangramVSHelper_ExtendXml(This,bstrXml,bstrKey,ppNode)	\
    ( (This)->lpVtbl -> ExtendXml(This,bstrXml,bstrKey,ppNode) ) 

#define ITangramVSHelper_get_HWND(This,pVal)	\
    ( (This)->lpVtbl -> get_HWND(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITangramVSHelper_INTERFACE_DEFINED__ */


#ifndef __ITangramHelper_INTERFACE_DEFINED__
#define __ITangramHelper_INTERFACE_DEFINED__

/* interface ITangramHelper */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITangramHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D490269C-A117-4D7C-84B9-7840FEC4919C")
    ITangramHelper : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_OutputPane( 
            /* [retval][out] */ IDispatch **pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PutTextToOutputPane( 
            BSTR bstrMsg) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ClearOutputPane( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowCLRForm( 
            BSTR bstrXml) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowCLRMDIForm( 
            BSTR bstrXml) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowXMLWithWindow( 
            BSTR bstrID,
            BSTR bstrKey,
            BSTR bstrXml) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITangramHelperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITangramHelper * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITangramHelper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITangramHelper * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITangramHelper * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITangramHelper * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITangramHelper * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITangramHelper * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OutputPane )( 
            ITangramHelper * This,
            /* [retval][out] */ IDispatch **pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PutTextToOutputPane )( 
            ITangramHelper * This,
            BSTR bstrMsg);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ClearOutputPane )( 
            ITangramHelper * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowCLRForm )( 
            ITangramHelper * This,
            BSTR bstrXml);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowCLRMDIForm )( 
            ITangramHelper * This,
            BSTR bstrXml);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowXMLWithWindow )( 
            ITangramHelper * This,
            BSTR bstrID,
            BSTR bstrKey,
            BSTR bstrXml);
        
        END_INTERFACE
    } ITangramHelperVtbl;

    interface ITangramHelper
    {
        CONST_VTBL struct ITangramHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITangramHelper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITangramHelper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITangramHelper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITangramHelper_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITangramHelper_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITangramHelper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITangramHelper_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITangramHelper_get_OutputPane(This,pVal)	\
    ( (This)->lpVtbl -> get_OutputPane(This,pVal) ) 

#define ITangramHelper_PutTextToOutputPane(This,bstrMsg)	\
    ( (This)->lpVtbl -> PutTextToOutputPane(This,bstrMsg) ) 

#define ITangramHelper_ClearOutputPane(This)	\
    ( (This)->lpVtbl -> ClearOutputPane(This) ) 

#define ITangramHelper_ShowCLRForm(This,bstrXml)	\
    ( (This)->lpVtbl -> ShowCLRForm(This,bstrXml) ) 

#define ITangramHelper_ShowCLRMDIForm(This,bstrXml)	\
    ( (This)->lpVtbl -> ShowCLRMDIForm(This,bstrXml) ) 

#define ITangramHelper_ShowXMLWithWindow(This,bstrID,bstrKey,bstrXml)	\
    ( (This)->lpVtbl -> ShowXMLWithWindow(This,bstrID,bstrKey,bstrXml) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITangramHelper_INTERFACE_DEFINED__ */



#ifndef __TangramVSIHelperLib_LIBRARY_DEFINED__
#define __TangramVSIHelperLib_LIBRARY_DEFINED__

/* library TangramVSIHelperLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_TangramVSIHelperLib;

EXTERN_C const CLSID CLSID_TangramHelper;

#ifdef __cplusplus

class DECLSPEC_UUID("19631222-1963-1992-1965-1992061256D9")
TangramHelper;
#endif
#endif /* __TangramVSIHelperLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


