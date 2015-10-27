

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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

MIDL_DEFINE_GUID(IID, IID_ITangrmAppObject,0x106900CA,0xAE52,0x49E5,0x9A,0x4F,0x86,0xBC,0x08,0x56,0xB8,0x37);


MIDL_DEFINE_GUID(IID, LIBID_TangramAppLib,0x63D4854E,0x35AC,0x49EC,0x8E,0x12,0xEF,0x07,0x93,0xB3,0xE1,0x6B);


MIDL_DEFINE_GUID(IID, DIID__ITangrmAppObjectEvents,0xB7099FCE,0x6E2D,0x4AFB,0x88,0xFC,0x85,0xDE,0x78,0xE3,0x84,0x03);


MIDL_DEFINE_GUID(CLSID, CLSID_TangrmAppObject,0x14913B76,0xD627,0x4B3A,0x9D,0xA4,0xD2,0xBD,0x8D,0xD0,0x71,0x97);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



