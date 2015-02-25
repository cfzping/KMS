

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif // __RPCPROXY_H_VERSION__


#include "AX_WebCall_i.h"

#define TYPE_FORMAT_STRING_SIZE   1079                              
#define PROC_FORMAT_STRING_SIZE   913                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _AX_WebCall_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } AX_WebCall_MIDL_TYPE_FORMAT_STRING;

typedef struct _AX_WebCall_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } AX_WebCall_MIDL_PROC_FORMAT_STRING;

typedef struct _AX_WebCall_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } AX_WebCall_MIDL_EXPR_FORMAT_STRING;


static RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const AX_WebCall_MIDL_TYPE_FORMAT_STRING AX_WebCall__MIDL_TypeFormatString;
extern const AX_WebCall_MIDL_PROC_FORMAT_STRING AX_WebCall__MIDL_ProcFormatString;
extern const AX_WebCall_MIDL_EXPR_FORMAT_STRING AX_WebCall__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ICCal_TWDispatch_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ICCal_TWDispatch_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need a Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const AX_WebCall_MIDL_PROC_FORMAT_STRING AX_WebCall__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Call */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 16 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 18 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20 */	NdrFcShort( 0xd ),	/* 13 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Modal */

/* 24 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter FunCall */

/* 30 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter StrVar */

/* 36 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter strVar2 */

/* 42 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 44 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 46 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter strout */

/* 48 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 50 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 52 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 54 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 56 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 58 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReleaseAll */

/* 60 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 62 */	NdrFcLong( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x8 ),	/* 8 */
/* 68 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0x8 ),	/* 8 */
/* 74 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 76 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 78 */	NdrFcShort( 0x0 ),	/* 0 */
/* 80 */	NdrFcShort( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 84 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 86 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 88 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CalShowWindowsResouce */

/* 90 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 92 */	NdrFcLong( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x9 ),	/* 9 */
/* 98 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 104 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 106 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x1 ),	/* 1 */
/* 112 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter source */

/* 114 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 116 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 118 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 120 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 122 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cal_CallOne */

/* 126 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0xa ),	/* 10 */
/* 134 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x8 ),	/* 8 */
/* 140 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 142 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 144 */	NdrFcShort( 0x1 ),	/* 1 */
/* 146 */	NdrFcShort( 0x12 ),	/* 18 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Modal */

/* 150 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 152 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 154 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter FunCall */

/* 156 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 158 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 160 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter StrVar */

/* 162 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 164 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 166 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter strout */

/* 168 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 170 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 172 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 176 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cal_CallOneWithCallBack */

/* 180 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0xb ),	/* 11 */
/* 188 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 194 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 196 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0xbf ),	/* 191 */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Modal */

/* 204 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 206 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 208 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter FunCall */

/* 210 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 212 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 214 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter StrVar */

/* 216 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 218 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 220 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter jsFun */

/* 222 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 224 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 226 */	NdrFcShort( 0x41c ),	/* Type Offset=1052 */

	/* Return value */

/* 228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 230 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cal_CallOneWithThreadCallBack */

/* 234 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 240 */	NdrFcShort( 0xc ),	/* 12 */
/* 242 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 248 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 250 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x195 ),	/* 405 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Modal */

/* 258 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 260 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 262 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter FunCall */

/* 264 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 266 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 268 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter StrVar */

/* 270 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 272 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 274 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter jsFun */

/* 276 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 278 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 280 */	NdrFcShort( 0x41c ),	/* Type Offset=1052 */

	/* Parameter strout */

/* 282 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 284 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 286 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 288 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 290 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cal_CallOneWithCallBackEx */

/* 294 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 300 */	NdrFcShort( 0xd ),	/* 13 */
/* 302 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0x8 ),	/* 8 */
/* 308 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 310 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 314 */	NdrFcShort( 0x19e ),	/* 414 */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Modal */

/* 318 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 320 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 322 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter FunCall */

/* 324 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 326 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 328 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter StrVar */

/* 330 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 332 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 334 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter jsFun */

/* 336 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 338 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 340 */	NdrFcShort( 0x41c ),	/* Type Offset=1052 */

	/* Parameter strout */

/* 342 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 344 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 346 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 350 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cal_CallTwo */

/* 354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0xe ),	/* 14 */
/* 362 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 368 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 370 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 372 */	NdrFcShort( 0x1 ),	/* 1 */
/* 374 */	NdrFcShort( 0x28 ),	/* 40 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Modal */

/* 378 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 380 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 382 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter FunCall */

/* 384 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 386 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 388 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter StrVar1 */

/* 390 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 392 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 394 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter StrVar2 */

/* 396 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 398 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 400 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter strout */

/* 402 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 404 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 406 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 408 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 410 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cal_CallTwoWithCallBackEx */

/* 414 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 420 */	NdrFcShort( 0xf ),	/* 15 */
/* 422 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 426 */	NdrFcShort( 0x8 ),	/* 8 */
/* 428 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 430 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 432 */	NdrFcShort( 0x1 ),	/* 1 */
/* 434 */	NdrFcShort( 0x19b ),	/* 411 */
/* 436 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Modal */

/* 438 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 440 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 442 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter FunCall */

/* 444 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 446 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 448 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter StrVar1 */

/* 450 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 452 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 454 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter StrVar2 */

/* 456 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 458 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 460 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter jsFun */

/* 462 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 464 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 466 */	NdrFcShort( 0x41c ),	/* Type Offset=1052 */

	/* Parameter strout */

/* 468 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 470 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 472 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 474 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 476 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DownLoadPdf */

/* 480 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 486 */	NdrFcShort( 0x10 ),	/* 16 */
/* 488 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 492 */	NdrFcShort( 0x8 ),	/* 8 */
/* 494 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 496 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 500 */	NdrFcShort( 0xf ),	/* 15 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter KeyValue */

/* 504 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 506 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 508 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter KeyPath */

/* 510 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 512 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 514 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Future */

/* 516 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 518 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 524 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cal_SignPdf */

/* 528 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 534 */	NdrFcShort( 0x11 ),	/* 17 */
/* 536 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 538 */	NdrFcShort( 0x28 ),	/* 40 */
/* 540 */	NdrFcShort( 0x24 ),	/* 36 */
/* 542 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 544 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 548 */	NdrFcShort( 0x1c ),	/* 28 */
/* 550 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Reason */

/* 552 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 554 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 556 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter local */

/* 558 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 560 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 562 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter x1 */

/* 564 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 566 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y1 */

/* 570 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 572 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter x2 */

/* 576 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 578 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y2 */

/* 582 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 584 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ipage */

/* 588 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 590 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter iRet */

/* 594 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 596 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 600 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 602 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetPDFPIC */

/* 606 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0x12 ),	/* 18 */
/* 614 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x24 ),	/* 36 */
/* 620 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 622 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0xe ),	/* 14 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Base64Pic */

/* 630 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 632 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 634 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter lRet */

/* 636 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 638 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 644 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetInterfaceSafetyOptions */

/* 648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x13 ),	/* 19 */
/* 656 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 658 */	NdrFcShort( 0x7c ),	/* 124 */
/* 660 */	NdrFcShort( 0x40 ),	/* 64 */
/* 662 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 664 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter riid */

/* 672 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 676 */	NdrFcShort( 0x2f4 ),	/* Type Offset=756 */

	/* Parameter pdwSupportedOptions */

/* 678 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 680 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwEnabledOptions */

/* 684 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 686 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 692 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetInterfaceSafetyOptions */

/* 696 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0x14 ),	/* 20 */
/* 704 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 706 */	NdrFcShort( 0x54 ),	/* 84 */
/* 708 */	NdrFcShort( 0x8 ),	/* 8 */
/* 710 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 712 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter riid */

/* 720 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 722 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 724 */	NdrFcShort( 0x2f4 ),	/* Type Offset=756 */

	/* Parameter dwOptionSetMask */

/* 726 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 728 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwEnabledOptions */

/* 732 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 734 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 740 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CalandtechNativeUI */

/* 744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x15 ),	/* 21 */
/* 752 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 754 */	NdrFcShort( 0x8 ),	/* 8 */
/* 756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 758 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 760 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 762 */	NdrFcShort( 0x1 ),	/* 1 */
/* 764 */	NdrFcShort( 0xe ),	/* 14 */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 768 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 770 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 772 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter type */

/* 774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 776 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter retstr */

/* 780 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 782 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 784 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 788 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UI_Init */

/* 792 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0x16 ),	/* 22 */
/* 800 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 802 */	NdrFcShort( 0x10 ),	/* 16 */
/* 804 */	NdrFcShort( 0x8 ),	/* 8 */
/* 806 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 808 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 810 */	NdrFcShort( 0xf ),	/* 15 */
/* 812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dlgnum */

/* 816 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 818 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter type */

/* 822 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 824 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter result */

/* 828 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 830 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 832 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 834 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 836 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UI_init_EX */

/* 840 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 846 */	NdrFcShort( 0x17 ),	/* 23 */
/* 848 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 850 */	NdrFcShort( 0x30 ),	/* 48 */
/* 852 */	NdrFcShort( 0x8 ),	/* 8 */
/* 854 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x8,		/* 8 */
/* 856 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 858 */	NdrFcShort( 0xf ),	/* 15 */
/* 860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dlgnum */

/* 864 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 866 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter type */

/* 870 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 872 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cx */

/* 876 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 878 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cy */

/* 882 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 884 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hx */

/* 888 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 890 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hy */

/* 894 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 896 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter result */

/* 900 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 902 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 904 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 906 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 908 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const AX_WebCall_MIDL_TYPE_FORMAT_STRING AX_WebCall__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x0,	/* FC_UP */
/*  4 */	NdrFcShort( 0xe ),	/* Offset= 14 (18) */
/*  6 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/*  8 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 12 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 14 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 16 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 18 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 20 */	NdrFcShort( 0x8 ),	/* 8 */
/* 22 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (6) */
/* 24 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 26 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 28 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 30 */	NdrFcShort( 0x0 ),	/* 0 */
/* 32 */	NdrFcShort( 0x4 ),	/* 4 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0xffde ),	/* Offset= -34 (2) */
/* 38 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 40 */	NdrFcShort( 0x6 ),	/* Offset= 6 (46) */
/* 42 */	
			0x13, 0x0,	/* FC_OP */
/* 44 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (18) */
/* 46 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x4 ),	/* 4 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (42) */
/* 56 */	
			0x12, 0x0,	/* FC_UP */
/* 58 */	NdrFcShort( 0x3ce ),	/* Offset= 974 (1032) */
/* 60 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 62 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 64 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 66 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 68 */	NdrFcShort( 0x2 ),	/* Offset= 2 (70) */
/* 70 */	NdrFcShort( 0x10 ),	/* 16 */
/* 72 */	NdrFcShort( 0x2f ),	/* 47 */
/* 74 */	NdrFcLong( 0x14 ),	/* 20 */
/* 78 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 80 */	NdrFcLong( 0x3 ),	/* 3 */
/* 84 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 86 */	NdrFcLong( 0x11 ),	/* 17 */
/* 90 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 92 */	NdrFcLong( 0x2 ),	/* 2 */
/* 96 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 98 */	NdrFcLong( 0x4 ),	/* 4 */
/* 102 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 104 */	NdrFcLong( 0x5 ),	/* 5 */
/* 108 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 110 */	NdrFcLong( 0xb ),	/* 11 */
/* 114 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 116 */	NdrFcLong( 0xa ),	/* 10 */
/* 120 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 122 */	NdrFcLong( 0x6 ),	/* 6 */
/* 126 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (358) */
/* 128 */	NdrFcLong( 0x7 ),	/* 7 */
/* 132 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 134 */	NdrFcLong( 0x8 ),	/* 8 */
/* 138 */	NdrFcShort( 0xff78 ),	/* Offset= -136 (2) */
/* 140 */	NdrFcLong( 0xd ),	/* 13 */
/* 144 */	NdrFcShort( 0xdc ),	/* Offset= 220 (364) */
/* 146 */	NdrFcLong( 0x9 ),	/* 9 */
/* 150 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (382) */
/* 152 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 156 */	NdrFcShort( 0xf4 ),	/* Offset= 244 (400) */
/* 158 */	NdrFcLong( 0x24 ),	/* 36 */
/* 162 */	NdrFcShort( 0x31c ),	/* Offset= 796 (958) */
/* 164 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 168 */	NdrFcShort( 0x316 ),	/* Offset= 790 (958) */
/* 170 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 174 */	NdrFcShort( 0x314 ),	/* Offset= 788 (962) */
/* 176 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 180 */	NdrFcShort( 0x312 ),	/* Offset= 786 (966) */
/* 182 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 186 */	NdrFcShort( 0x310 ),	/* Offset= 784 (970) */
/* 188 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 192 */	NdrFcShort( 0x30e ),	/* Offset= 782 (974) */
/* 194 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 198 */	NdrFcShort( 0x30c ),	/* Offset= 780 (978) */
/* 200 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 204 */	NdrFcShort( 0x30a ),	/* Offset= 778 (982) */
/* 206 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 210 */	NdrFcShort( 0x2f4 ),	/* Offset= 756 (966) */
/* 212 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 216 */	NdrFcShort( 0x2f2 ),	/* Offset= 754 (970) */
/* 218 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 222 */	NdrFcShort( 0x2fc ),	/* Offset= 764 (986) */
/* 224 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 228 */	NdrFcShort( 0x2f2 ),	/* Offset= 754 (982) */
/* 230 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 234 */	NdrFcShort( 0x2f4 ),	/* Offset= 756 (990) */
/* 236 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 240 */	NdrFcShort( 0x2f2 ),	/* Offset= 754 (994) */
/* 242 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 246 */	NdrFcShort( 0x2f0 ),	/* Offset= 752 (998) */
/* 248 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 252 */	NdrFcShort( 0x2ee ),	/* Offset= 750 (1002) */
/* 254 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 258 */	NdrFcShort( 0x2ec ),	/* Offset= 748 (1006) */
/* 260 */	NdrFcLong( 0x10 ),	/* 16 */
/* 264 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 266 */	NdrFcLong( 0x12 ),	/* 18 */
/* 270 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 272 */	NdrFcLong( 0x13 ),	/* 19 */
/* 276 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 278 */	NdrFcLong( 0x15 ),	/* 21 */
/* 282 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 284 */	NdrFcLong( 0x16 ),	/* 22 */
/* 288 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 290 */	NdrFcLong( 0x17 ),	/* 23 */
/* 294 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 296 */	NdrFcLong( 0xe ),	/* 14 */
/* 300 */	NdrFcShort( 0x2ca ),	/* Offset= 714 (1014) */
/* 302 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 306 */	NdrFcShort( 0x2ce ),	/* Offset= 718 (1024) */
/* 308 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 312 */	NdrFcShort( 0x2cc ),	/* Offset= 716 (1028) */
/* 314 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 318 */	NdrFcShort( 0x288 ),	/* Offset= 648 (966) */
/* 320 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 324 */	NdrFcShort( 0x286 ),	/* Offset= 646 (970) */
/* 326 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 330 */	NdrFcShort( 0x284 ),	/* Offset= 644 (974) */
/* 332 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 336 */	NdrFcShort( 0x27a ),	/* Offset= 634 (970) */
/* 338 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 342 */	NdrFcShort( 0x274 ),	/* Offset= 628 (970) */
/* 344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x0 ),	/* Offset= 0 (348) */
/* 350 */	NdrFcLong( 0x1 ),	/* 1 */
/* 354 */	NdrFcShort( 0x0 ),	/* Offset= 0 (354) */
/* 356 */	NdrFcShort( 0xffff ),	/* Offset= -1 (355) */
/* 358 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 360 */	NdrFcShort( 0x8 ),	/* 8 */
/* 362 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 364 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 366 */	NdrFcLong( 0x0 ),	/* 0 */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 374 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 376 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 378 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 380 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 382 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 384 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 392 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 394 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 396 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 398 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 400 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 402 */	NdrFcShort( 0x2 ),	/* Offset= 2 (404) */
/* 404 */	
			0x12, 0x0,	/* FC_UP */
/* 406 */	NdrFcShort( 0x216 ),	/* Offset= 534 (940) */
/* 408 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 410 */	NdrFcShort( 0x18 ),	/* 24 */
/* 412 */	NdrFcShort( 0xa ),	/* 10 */
/* 414 */	NdrFcLong( 0x8 ),	/* 8 */
/* 418 */	NdrFcShort( 0x5a ),	/* Offset= 90 (508) */
/* 420 */	NdrFcLong( 0xd ),	/* 13 */
/* 424 */	NdrFcShort( 0x7e ),	/* Offset= 126 (550) */
/* 426 */	NdrFcLong( 0x9 ),	/* 9 */
/* 430 */	NdrFcShort( 0x9e ),	/* Offset= 158 (588) */
/* 432 */	NdrFcLong( 0xc ),	/* 12 */
/* 436 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (636) */
/* 438 */	NdrFcLong( 0x24 ),	/* 36 */
/* 442 */	NdrFcShort( 0x124 ),	/* Offset= 292 (734) */
/* 444 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 448 */	NdrFcShort( 0x140 ),	/* Offset= 320 (768) */
/* 450 */	NdrFcLong( 0x10 ),	/* 16 */
/* 454 */	NdrFcShort( 0x15a ),	/* Offset= 346 (800) */
/* 456 */	NdrFcLong( 0x2 ),	/* 2 */
/* 460 */	NdrFcShort( 0x174 ),	/* Offset= 372 (832) */
/* 462 */	NdrFcLong( 0x3 ),	/* 3 */
/* 466 */	NdrFcShort( 0x18e ),	/* Offset= 398 (864) */
/* 468 */	NdrFcLong( 0x14 ),	/* 20 */
/* 472 */	NdrFcShort( 0x1a8 ),	/* Offset= 424 (896) */
/* 474 */	NdrFcShort( 0xffff ),	/* Offset= -1 (473) */
/* 476 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 478 */	NdrFcShort( 0x4 ),	/* 4 */
/* 480 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 484 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 486 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 488 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 490 */	NdrFcShort( 0x4 ),	/* 4 */
/* 492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 494 */	NdrFcShort( 0x1 ),	/* 1 */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 500 */	0x12, 0x0,	/* FC_UP */
/* 502 */	NdrFcShort( 0xfe1c ),	/* Offset= -484 (18) */
/* 504 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 506 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 508 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 512 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 514 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 516 */	NdrFcShort( 0x4 ),	/* 4 */
/* 518 */	NdrFcShort( 0x4 ),	/* 4 */
/* 520 */	0x11, 0x0,	/* FC_RP */
/* 522 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (476) */
/* 524 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 526 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 528 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 532 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 536 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 538 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 542 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 544 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 546 */	NdrFcShort( 0xff4a ),	/* Offset= -182 (364) */
/* 548 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 550 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 552 */	NdrFcShort( 0x8 ),	/* 8 */
/* 554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 556 */	NdrFcShort( 0x6 ),	/* Offset= 6 (562) */
/* 558 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 560 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 562 */	
			0x11, 0x0,	/* FC_RP */
/* 564 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (528) */
/* 566 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 570 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 574 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 576 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 580 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 582 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 584 */	NdrFcShort( 0xff36 ),	/* Offset= -202 (382) */
/* 586 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 588 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 590 */	NdrFcShort( 0x8 ),	/* 8 */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 594 */	NdrFcShort( 0x6 ),	/* Offset= 6 (600) */
/* 596 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 598 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 600 */	
			0x11, 0x0,	/* FC_RP */
/* 602 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (566) */
/* 604 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 606 */	NdrFcShort( 0x4 ),	/* 4 */
/* 608 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 614 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 616 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 618 */	NdrFcShort( 0x4 ),	/* 4 */
/* 620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 622 */	NdrFcShort( 0x1 ),	/* 1 */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 628 */	0x12, 0x0,	/* FC_UP */
/* 630 */	NdrFcShort( 0x192 ),	/* Offset= 402 (1032) */
/* 632 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 634 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 636 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 638 */	NdrFcShort( 0x8 ),	/* 8 */
/* 640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 642 */	NdrFcShort( 0x6 ),	/* Offset= 6 (648) */
/* 644 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 646 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 648 */	
			0x11, 0x0,	/* FC_RP */
/* 650 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (604) */
/* 652 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 654 */	NdrFcLong( 0x2f ),	/* 47 */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 662 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 664 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 666 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 668 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 670 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 672 */	NdrFcShort( 0x1 ),	/* 1 */
/* 674 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 676 */	NdrFcShort( 0x4 ),	/* 4 */
/* 678 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 680 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 682 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 684 */	NdrFcShort( 0x10 ),	/* 16 */
/* 686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 688 */	NdrFcShort( 0xa ),	/* Offset= 10 (698) */
/* 690 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 692 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 694 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (652) */
/* 696 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 698 */	
			0x12, 0x0,	/* FC_UP */
/* 700 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (670) */
/* 702 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 704 */	NdrFcShort( 0x4 ),	/* 4 */
/* 706 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 712 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 714 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 716 */	NdrFcShort( 0x4 ),	/* 4 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 720 */	NdrFcShort( 0x1 ),	/* 1 */
/* 722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 726 */	0x12, 0x0,	/* FC_UP */
/* 728 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (682) */
/* 730 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 732 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 734 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 736 */	NdrFcShort( 0x8 ),	/* 8 */
/* 738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 740 */	NdrFcShort( 0x6 ),	/* Offset= 6 (746) */
/* 742 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 744 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 746 */	
			0x11, 0x0,	/* FC_RP */
/* 748 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (702) */
/* 750 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 754 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 756 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 758 */	NdrFcShort( 0x10 ),	/* 16 */
/* 760 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 762 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 764 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (750) */
			0x5b,		/* FC_END */
/* 768 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 770 */	NdrFcShort( 0x18 ),	/* 24 */
/* 772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 774 */	NdrFcShort( 0xa ),	/* Offset= 10 (784) */
/* 776 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 778 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 780 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (756) */
/* 782 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 784 */	
			0x11, 0x0,	/* FC_RP */
/* 786 */	NdrFcShort( 0xfefe ),	/* Offset= -258 (528) */
/* 788 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 790 */	NdrFcShort( 0x1 ),	/* 1 */
/* 792 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 796 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 798 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 800 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 802 */	NdrFcShort( 0x8 ),	/* 8 */
/* 804 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 806 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 808 */	NdrFcShort( 0x4 ),	/* 4 */
/* 810 */	NdrFcShort( 0x4 ),	/* 4 */
/* 812 */	0x12, 0x0,	/* FC_UP */
/* 814 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (788) */
/* 816 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 818 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 820 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 822 */	NdrFcShort( 0x2 ),	/* 2 */
/* 824 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 828 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 830 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 832 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 834 */	NdrFcShort( 0x8 ),	/* 8 */
/* 836 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 838 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 840 */	NdrFcShort( 0x4 ),	/* 4 */
/* 842 */	NdrFcShort( 0x4 ),	/* 4 */
/* 844 */	0x12, 0x0,	/* FC_UP */
/* 846 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (820) */
/* 848 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 850 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 852 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 854 */	NdrFcShort( 0x4 ),	/* 4 */
/* 856 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 860 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 862 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 864 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 866 */	NdrFcShort( 0x8 ),	/* 8 */
/* 868 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 870 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 872 */	NdrFcShort( 0x4 ),	/* 4 */
/* 874 */	NdrFcShort( 0x4 ),	/* 4 */
/* 876 */	0x12, 0x0,	/* FC_UP */
/* 878 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (852) */
/* 880 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 882 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 884 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 886 */	NdrFcShort( 0x8 ),	/* 8 */
/* 888 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 892 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 894 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 896 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 898 */	NdrFcShort( 0x8 ),	/* 8 */
/* 900 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 902 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 904 */	NdrFcShort( 0x4 ),	/* 4 */
/* 906 */	NdrFcShort( 0x4 ),	/* 4 */
/* 908 */	0x12, 0x0,	/* FC_UP */
/* 910 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (884) */
/* 912 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 914 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 916 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 918 */	NdrFcShort( 0x8 ),	/* 8 */
/* 920 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 922 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 924 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 926 */	NdrFcShort( 0x8 ),	/* 8 */
/* 928 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 930 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 932 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 934 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 936 */	NdrFcShort( 0xffec ),	/* Offset= -20 (916) */
/* 938 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 940 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 942 */	NdrFcShort( 0x28 ),	/* 40 */
/* 944 */	NdrFcShort( 0xffec ),	/* Offset= -20 (924) */
/* 946 */	NdrFcShort( 0x0 ),	/* Offset= 0 (946) */
/* 948 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 950 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 952 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 954 */	NdrFcShort( 0xfdde ),	/* Offset= -546 (408) */
/* 956 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 958 */	
			0x12, 0x0,	/* FC_UP */
/* 960 */	NdrFcShort( 0xfeea ),	/* Offset= -278 (682) */
/* 962 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 964 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 966 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 968 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 970 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 972 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 974 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 976 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 978 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 980 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 982 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 984 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 986 */	
			0x12, 0x0,	/* FC_UP */
/* 988 */	NdrFcShort( 0xfd8a ),	/* Offset= -630 (358) */
/* 990 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 992 */	NdrFcShort( 0xfc22 ),	/* Offset= -990 (2) */
/* 994 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 996 */	NdrFcShort( 0xfd88 ),	/* Offset= -632 (364) */
/* 998 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1000 */	NdrFcShort( 0xfd96 ),	/* Offset= -618 (382) */
/* 1002 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1004 */	NdrFcShort( 0xfda4 ),	/* Offset= -604 (400) */
/* 1006 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1008 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1010) */
/* 1010 */	
			0x12, 0x0,	/* FC_UP */
/* 1012 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1032) */
/* 1014 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1016 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1018 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1020 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1022 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1024 */	
			0x12, 0x0,	/* FC_UP */
/* 1026 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1014) */
/* 1028 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1030 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1032 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1034 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1038 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1038) */
/* 1040 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1042 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1044 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1046 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1048 */	NdrFcShort( 0xfc24 ),	/* Offset= -988 (60) */
/* 1050 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1052 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1054 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1056 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1060 */	NdrFcShort( 0xfc14 ),	/* Offset= -1004 (56) */
/* 1062 */	
			0x11, 0x0,	/* FC_RP */
/* 1064 */	NdrFcShort( 0xfbf4 ),	/* Offset= -1036 (28) */
/* 1066 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1068 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1070 */	
			0x11, 0x0,	/* FC_RP */
/* 1072 */	NdrFcShort( 0xfec4 ),	/* Offset= -316 (756) */
/* 1074 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1076 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ICCal_TWDispatch, ver. 0.0,
   GUID={0x6F9F4B1E,0xD45B,0x4679,{0xB0,0x9F,0x41,0x9D,0x56,0x9E,0xDA,0x57}} */

#pragma code_seg(".orpc")
static const unsigned short ICCal_TWDispatch_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    60,
    90,
    126,
    180,
    234,
    294,
    354,
    414,
    480,
    528,
    606,
    648,
    696,
    744,
    792,
    840
    };

static const MIDL_STUBLESS_PROXY_INFO ICCal_TWDispatch_ProxyInfo =
    {
    &Object_StubDesc,
    AX_WebCall__MIDL_ProcFormatString.Format,
    &ICCal_TWDispatch_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ICCal_TWDispatch_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    AX_WebCall__MIDL_ProcFormatString.Format,
    &ICCal_TWDispatch_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(24) _ICCal_TWDispatchProxyVtbl = 
{
    &ICCal_TWDispatch_ProxyInfo,
    &IID_ICCal_TWDispatch,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ICCal_TWDispatch::Call */ ,
    (void *) (INT_PTR) -1 /* ICCal_TWDispatch::ReleaseAll */ ,
    (void *) (INT_PTR) -1 /* ICCal_TWDispatch::CalShowWindowsResouce */ ,
    (void *) (INT_PTR) -1 /* ICCal_TWDispatch::Cal_CallOne */ ,
    (void *) (INT_PTR) -1 /* ICCal_TWDispatch::Cal_CallOneWithCallBack */ ,
    (void *) (INT_PTR) -1 /* ICCal_TWDispatch::Cal_CallOneWithThreadCallBack */ ,
    (void *) (INT_PTR) -1 /* ICCal_TWDispatch::Cal_CallOneWithCallBackEx */ ,
    (void *) (INT_PTR) -1 /* ICCal_TWDispatch::Cal_CallTwo */ ,
    (void *) (INT_PTR) -1 /* ICCal_TWDispatch::Cal_CallTwoWithCallBackEx */ ,
    (void *) (INT_PTR) -1 /* ICCal_TWDispatch::DownLoadPdf */ ,
    (void *) (INT_PTR) -1 /* ICCal_TWDispatch::Cal_SignPdf */ ,
    (void *) (INT_PTR) -1 /* ICCal_TWDispatch::SetPDFPIC */ ,
    (void *) (INT_PTR) -1 /* ICCal_TWDispatch::GetInterfaceSafetyOptions */ ,
    (void *) (INT_PTR) -1 /* ICCal_TWDispatch::SetInterfaceSafetyOptions */ ,
    (void *) (INT_PTR) -1 /* ICCal_TWDispatch::CalandtechNativeUI */ ,
    (void *) (INT_PTR) -1 /* ICCal_TWDispatch::UI_Init */ ,
    (void *) (INT_PTR) -1 /* ICCal_TWDispatch::UI_init_EX */
};


static const PRPC_STUB_FUNCTION ICCal_TWDispatch_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ICCal_TWDispatchStubVtbl =
{
    &IID_ICCal_TWDispatch,
    &ICCal_TWDispatch_ServerInfo,
    24,
    &ICCal_TWDispatch_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    AX_WebCall__MIDL_TypeFormatString.Format,
    0, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x70001f4, /* MIDL Version 7.0.500 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * _AX_WebCall_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_ICCal_TWDispatchProxyVtbl,
    0
};

const CInterfaceStubVtbl * _AX_WebCall_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_ICCal_TWDispatchStubVtbl,
    0
};

PCInterfaceName const _AX_WebCall_InterfaceNamesList[] = 
{
    "ICCal_TWDispatch",
    0
};

const IID *  _AX_WebCall_BaseIIDList[] = 
{
    &IID_IDispatch,
    0
};


#define _AX_WebCall_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _AX_WebCall, pIID, n)

int __stdcall _AX_WebCall_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_AX_WebCall_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo AX_WebCall_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _AX_WebCall_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _AX_WebCall_StubVtblList,
    (const PCInterfaceName * ) & _AX_WebCall_InterfaceNamesList,
    (const IID ** ) & _AX_WebCall_BaseIIDList,
    & _AX_WebCall_IID_Lookup, 
    1,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

