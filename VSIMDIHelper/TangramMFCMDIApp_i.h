

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Fri Oct 23 16:15:33 2015
 */
/* Compiler settings for VSIMDIHelper.idl:
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

#ifndef __TangramMFCMDIApp_i_h__
#define __TangramMFCMDIApp_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ITangramApplication_FWD_DEFINED__
#define __ITangramApplication_FWD_DEFINED__
typedef interface ITangramApplication ITangramApplication;

#endif 	/* __ITangramApplication_FWD_DEFINED__ */


#ifndef ___ITangramApplicationEvents_FWD_DEFINED__
#define ___ITangramApplicationEvents_FWD_DEFINED__
typedef interface _ITangramApplicationEvents _ITangramApplicationEvents;

#endif 	/* ___ITangramApplicationEvents_FWD_DEFINED__ */


#ifndef __TangramApplication_FWD_DEFINED__
#define __TangramApplication_FWD_DEFINED__

#ifdef __cplusplus
typedef class TangramApplication TangramApplication;
#else
typedef struct TangramApplication TangramApplication;
#endif /* __cplusplus */

#endif 	/* __TangramApplication_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ITangramApplication_INTERFACE_DEFINED__
#define __ITangramApplication_INTERFACE_DEFINED__

/* interface ITangramApplication */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITangramApplication;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EE4C5589-4877-42FD-A96A-013E353E9EBE")
    ITangramApplication : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TangramCore( 
            /* [retval][out] */ IDispatch **ppTangramCore) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITangramApplicationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITangramApplication * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITangramApplication * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITangramApplication * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITangramApplication * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITangramApplication * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITangramApplication * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITangramApplication * This,
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
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TangramCore )( 
            ITangramApplication * This,
            /* [retval][out] */ IDispatch **ppTangramCore);
        
        END_INTERFACE
    } ITangramApplicationVtbl;

    interface ITangramApplication
    {
        CONST_VTBL struct ITangramApplicationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITangramApplication_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITangramApplication_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITangramApplication_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITangramApplication_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITangramApplication_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITangramApplication_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITangramApplication_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITangramApplication_get_TangramCore(This,ppTangramCore)	\
    ( (This)->lpVtbl -> get_TangramCore(This,ppTangramCore) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITangramApplication_INTERFACE_DEFINED__ */



#ifndef __VSIMDIHelperLib_LIBRARY_DEFINED__
#define __VSIMDIHelperLib_LIBRARY_DEFINED__

/* library VSIMDIHelperLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_VSIMDIHelperLib;

#ifndef ___ITangramApplicationEvents_DISPINTERFACE_DEFINED__
#define ___ITangramApplicationEvents_DISPINTERFACE_DEFINED__

/* dispinterface _ITangramApplicationEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__ITangramApplicationEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("0D655A33-A6D0-4B7E-B961-7E4E7AA684DA")
    _ITangramApplicationEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _ITangramApplicationEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _ITangramApplicationEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _ITangramApplicationEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _ITangramApplicationEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _ITangramApplicationEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _ITangramApplicationEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _ITangramApplicationEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _ITangramApplicationEvents * This,
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
        
        END_INTERFACE
    } _ITangramApplicationEventsVtbl;

    interface _ITangramApplicationEvents
    {
        CONST_VTBL struct _ITangramApplicationEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _ITangramApplicationEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _ITangramApplicationEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _ITangramApplicationEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _ITangramApplicationEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _ITangramApplicationEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _ITangramApplicationEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _ITangramApplicationEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___ITangramApplicationEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_TangramApplication;

#ifdef __cplusplus

class DECLSPEC_UUID("710D12E5-94F2-465A-8B84-62DAF88C8DB0")
TangramApplication;
#endif
#endif /* __VSIMDIHelperLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


