

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Fri Oct 23 14:45:38 2015
 */
/* Compiler settings for TangramMFCApp.idl:
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

MIDL_DEFINE_GUID(IID, IID_ITangramApplication,0x33522476,0x3DE1,0x4B34,0xBB,0x62,0x31,0x40,0xC6,0x64,0x1D,0x47);


MIDL_DEFINE_GUID(IID, LIBID_TangramMFCAppLib,0x71236B93,0x4FB7,0x4455,0xB5,0xFA,0x5F,0xD2,0xC8,0xEB,0xBA,0xA9);


MIDL_DEFINE_GUID(IID, DIID__ITangramApplicationEvents,0x0710D66F,0xBE59,0x4814,0x82,0x3F,0xC6,0xFD,0xE0,0xC0,0x42,0xBB);


MIDL_DEFINE_GUID(CLSID, CLSID_TangramApplication,0x35039169,0x5A7F,0x4A6F,0x87,0x87,0x52,0x3F,0x77,0xF5,0x17,0x0C);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



