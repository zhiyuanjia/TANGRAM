

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_ITangramApplication,0xEE4C5589,0x4877,0x42FD,0xA9,0x6A,0x01,0x3E,0x35,0x3E,0x9E,0xBE);


MIDL_DEFINE_GUID(IID, LIBID_VSIMDIHelperLib,0x5EAE5EDC,0x2C25,0x4B07,0xBF,0x0B,0xC9,0xC7,0xDC,0x23,0x3D,0x69);


MIDL_DEFINE_GUID(IID, DIID__ITangramApplicationEvents,0x0D655A33,0xA6D0,0x4B7E,0xB9,0x61,0x7E,0x4E,0x7A,0xA6,0x84,0xDA);


MIDL_DEFINE_GUID(CLSID, CLSID_TangramApplication,0x710D12E5,0x94F2,0x465A,0x8B,0x84,0x62,0xDA,0xF8,0x8C,0x8D,0xB0);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



