

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Fri Oct 30 17:33:39 2015
 */
/* Compiler settings for TangramCLRProxy.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
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


#ifndef __TangramCLRProxy_i_h__
#define __TangramCLRProxy_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __TangramProxy_FWD_DEFINED__
#define __TangramProxy_FWD_DEFINED__

#ifdef __cplusplus
typedef class TangramProxy TangramProxy;
#else
typedef struct TangramProxy TangramProxy;
#endif /* __cplusplus */

#endif 	/* __TangramProxy_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __TangramCLRProxyLib_LIBRARY_DEFINED__
#define __TangramCLRProxyLib_LIBRARY_DEFINED__

/* library TangramCLRProxyLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_TangramCLRProxyLib;

EXTERN_C const CLSID CLSID_TangramProxy;

#ifdef __cplusplus

class DECLSPEC_UUID("19631222-1963-1992-1965-19920612CCCC")
TangramProxy;
#endif
#endif /* __TangramCLRProxyLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


