

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Fri Oct 23 18:35:31 2015
 */
/* Compiler settings for TangramApp.idl:
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

#ifndef __TangramApp_i_h__
#define __TangramApp_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ITangrmAppObject_FWD_DEFINED__
#define __ITangrmAppObject_FWD_DEFINED__
typedef interface ITangrmAppObject ITangrmAppObject;

#endif 	/* __ITangrmAppObject_FWD_DEFINED__ */


#ifndef ___ITangrmAppObjectEvents_FWD_DEFINED__
#define ___ITangrmAppObjectEvents_FWD_DEFINED__
typedef interface _ITangrmAppObjectEvents _ITangrmAppObjectEvents;

#endif 	/* ___ITangrmAppObjectEvents_FWD_DEFINED__ */


#ifndef __TangrmAppObject_FWD_DEFINED__
#define __TangrmAppObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class TangrmAppObject TangrmAppObject;
#else
typedef struct TangrmAppObject TangrmAppObject;
#endif /* __cplusplus */

#endif 	/* __TangrmAppObject_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ITangrmAppObject_INTERFACE_DEFINED__
#define __ITangrmAppObject_INTERFACE_DEFINED__

/* interface ITangrmAppObject */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITangrmAppObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("106900CA-AE52-49E5-9A4F-86BC0856B837")
    ITangrmAppObject : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_TangramCore( 
            /* [retval][out] */ IDispatch **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITangrmAppObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITangrmAppObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITangrmAppObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITangrmAppObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITangrmAppObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITangrmAppObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITangrmAppObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITangrmAppObject * This,
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
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TangramCore )( 
            ITangrmAppObject * This,
            /* [retval][out] */ IDispatch **pVal);
        
        END_INTERFACE
    } ITangrmAppObjectVtbl;

    interface ITangrmAppObject
    {
        CONST_VTBL struct ITangrmAppObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITangrmAppObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITangrmAppObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITangrmAppObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITangrmAppObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITangrmAppObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITangrmAppObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITangrmAppObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITangrmAppObject_get_TangramCore(This,pVal)	\
    ( (This)->lpVtbl -> get_TangramCore(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITangrmAppObject_INTERFACE_DEFINED__ */



#ifndef __TangramAppLib_LIBRARY_DEFINED__
#define __TangramAppLib_LIBRARY_DEFINED__

/* library TangramAppLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_TangramAppLib;

#ifndef ___ITangrmAppObjectEvents_DISPINTERFACE_DEFINED__
#define ___ITangrmAppObjectEvents_DISPINTERFACE_DEFINED__

/* dispinterface _ITangrmAppObjectEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__ITangrmAppObjectEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("B7099FCE-6E2D-4AFB-88FC-85DE78E38403")
    _ITangrmAppObjectEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _ITangrmAppObjectEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _ITangrmAppObjectEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _ITangrmAppObjectEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _ITangrmAppObjectEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _ITangrmAppObjectEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _ITangrmAppObjectEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _ITangrmAppObjectEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _ITangrmAppObjectEvents * This,
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
    } _ITangrmAppObjectEventsVtbl;

    interface _ITangrmAppObjectEvents
    {
        CONST_VTBL struct _ITangrmAppObjectEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _ITangrmAppObjectEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _ITangrmAppObjectEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _ITangrmAppObjectEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _ITangrmAppObjectEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _ITangrmAppObjectEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _ITangrmAppObjectEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _ITangrmAppObjectEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___ITangrmAppObjectEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_TangrmAppObject;

#ifdef __cplusplus

class DECLSPEC_UUID("14913B76-D627-4B3A-9DA4-D2BD8DD07197")
TangrmAppObject;
#endif
#endif /* __TangramAppLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


