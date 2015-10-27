

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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

MIDL_DEFINE_GUID(IID, IID_ITangramVSHelper,0x33522476,0x3DE1,0x4B34,0xBB,0x62,0x31,0x40,0xC6,0x64,0x1D,0x39);


MIDL_DEFINE_GUID(IID, IID_ITangramHelper,0xD490269C,0xA117,0x4D7C,0x84,0xB9,0x78,0x40,0xFE,0xC4,0x91,0x9C);


MIDL_DEFINE_GUID(IID, LIBID_TangramVSIHelperLib,0x19631222,0x1963,0x1992,0x19,0x65,0x19,0x92,0x06,0x12,0x16,0xEB);


MIDL_DEFINE_GUID(CLSID, CLSID_TangramHelper,0x19631222,0x1963,0x1992,0x19,0x65,0x19,0x92,0x06,0x12,0x56,0xD9);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



