

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Tue Jan 27 17:53:33 2015
 */
/* Compiler settings for .\AX_WebCall.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

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

MIDL_DEFINE_GUID(IID, IID_ICCal_TWDispatch,0x6F9F4B1E,0xD45B,0x4679,0xB0,0x9F,0x41,0x9D,0x56,0x9E,0xDA,0x57);


MIDL_DEFINE_GUID(IID, LIBID_AX_WebCallLib,0x4A3F3DFC,0x924D,0x418E,0x9B,0x11,0x80,0x98,0x59,0xED,0x1E,0xF6);


MIDL_DEFINE_GUID(IID, DIID__ICCal_TWDispatchEvents,0x2226E15B,0x0613,0x4765,0x81,0xD6,0x9F,0xF3,0xE4,0x1E,0xB3,0x51);


MIDL_DEFINE_GUID(CLSID, CLSID_CCal_TWDispatch,0x9B2F3F22,0xFEC2,0x49D4,0xBC,0x8C,0x86,0x4C,0x74,0xDE,0x4A,0x5F);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



