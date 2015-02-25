

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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

#ifndef __AX_WebCall_i_h__
#define __AX_WebCall_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ICCal_TWDispatch_FWD_DEFINED__
#define __ICCal_TWDispatch_FWD_DEFINED__
typedef interface ICCal_TWDispatch ICCal_TWDispatch;
#endif 	/* __ICCal_TWDispatch_FWD_DEFINED__ */


#ifndef ___ICCal_TWDispatchEvents_FWD_DEFINED__
#define ___ICCal_TWDispatchEvents_FWD_DEFINED__
typedef interface _ICCal_TWDispatchEvents _ICCal_TWDispatchEvents;
#endif 	/* ___ICCal_TWDispatchEvents_FWD_DEFINED__ */


#ifndef __CCal_TWDispatch_FWD_DEFINED__
#define __CCal_TWDispatch_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCal_TWDispatch CCal_TWDispatch;
#else
typedef struct CCal_TWDispatch CCal_TWDispatch;
#endif /* __cplusplus */

#endif 	/* __CCal_TWDispatch_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ICCal_TWDispatch_INTERFACE_DEFINED__
#define __ICCal_TWDispatch_INTERFACE_DEFINED__

/* interface ICCal_TWDispatch */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICCal_TWDispatch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6F9F4B1E-D45B-4679-B09F-419D569EDA57")
    ICCal_TWDispatch : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Call( 
            /* [in] */ BSTR Modal,
            /* [in] */ BSTR FunCall,
            /* [in] */ BSTR StrVar,
            /* [in] */ BSTR strVar2,
            /* [retval][out] */ BSTR *strout) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReleaseAll( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CalShowWindowsResouce( 
            /* [in] */ BSTR source) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cal_CallOne( 
            /* [in] */ BSTR Modal,
            /* [in] */ BSTR FunCall,
            /* [in] */ BSTR StrVar,
            /* [retval][out] */ BSTR *strout) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cal_CallOneWithCallBack( 
            /* [in] */ BSTR Modal,
            /* [in] */ BSTR FunCall,
            /* [in] */ BSTR StrVar,
            /* [in] */ VARIANT jsFun) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cal_CallOneWithThreadCallBack( 
            /* [in] */ BSTR Modal,
            /* [in] */ BSTR FunCall,
            /* [in] */ BSTR StrVar,
            /* [in] */ VARIANT jsFun,
            BSTR *strout) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cal_CallOneWithCallBackEx( 
            /* [in] */ BSTR Modal,
            /* [in] */ BSTR FunCall,
            /* [in] */ BSTR StrVar,
            /* [in] */ VARIANT jsFun,
            BSTR *strout) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cal_CallTwo( 
            /* [in] */ BSTR Modal,
            /* [in] */ BSTR FunCall,
            /* [in] */ BSTR StrVar1,
            /* [in] */ BSTR StrVar2,
            /* [retval][out] */ BSTR *strout) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cal_CallTwoWithCallBackEx( 
            /* [in] */ BSTR Modal,
            /* [in] */ BSTR FunCall,
            /* [in] */ BSTR StrVar1,
            /* [in] */ BSTR StrVar2,
            /* [in] */ VARIANT jsFun,
            /* [retval][out] */ BSTR *strout) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DownLoadPdf( 
            /* [in] */ BSTR KeyValue,
            /* [in] */ BSTR KeyPath,
            /* [in] */ LONG Future) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cal_SignPdf( 
            /* [in] */ BSTR Reason,
            /* [in] */ BSTR local,
            /* [in] */ LONG x1,
            /* [in] */ LONG y1,
            /* [in] */ LONG x2,
            /* [in] */ LONG y2,
            /* [in] */ LONG ipage,
            /* [retval][out] */ LONG *iRet) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetPDFPIC( 
            /* [in] */ BSTR Base64Pic,
            /* [retval][out] */ LONG *lRet) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInterfaceSafetyOptions( 
            /* [in] */ REFIID riid,
            /* [out][in] */ DWORD *pdwSupportedOptions,
            /* [out][in] */ DWORD *pdwEnabledOptions) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetInterfaceSafetyOptions( 
            /* [in] */ REFIID riid,
            /* [in] */ DWORD dwOptionSetMask,
            /* [in] */ DWORD dwEnabledOptions) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CalandtechNativeUI( 
            /* [in] */ BSTR name,
            /* [in] */ LONG type,
            /* [retval][out] */ BSTR *retstr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UI_Init( 
            /* [in] */ LONG dlgnum,
            /* [in] */ LONG type,
            /* [retval][out] */ BSTR *result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UI_init_EX( 
            /* [in] */ LONG dlgnum,
            /* [in] */ LONG type,
            /* [in] */ LONG cx,
            /* [in] */ LONG cy,
            /* [in] */ LONG hx,
            /* [in] */ LONG hy,
            /* [retval][out] */ BSTR *result) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICCal_TWDispatchVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICCal_TWDispatch * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICCal_TWDispatch * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICCal_TWDispatch * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICCal_TWDispatch * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICCal_TWDispatch * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICCal_TWDispatch * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICCal_TWDispatch * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Call )( 
            ICCal_TWDispatch * This,
            /* [in] */ BSTR Modal,
            /* [in] */ BSTR FunCall,
            /* [in] */ BSTR StrVar,
            /* [in] */ BSTR strVar2,
            /* [retval][out] */ BSTR *strout);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReleaseAll )( 
            ICCal_TWDispatch * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CalShowWindowsResouce )( 
            ICCal_TWDispatch * This,
            /* [in] */ BSTR source);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Cal_CallOne )( 
            ICCal_TWDispatch * This,
            /* [in] */ BSTR Modal,
            /* [in] */ BSTR FunCall,
            /* [in] */ BSTR StrVar,
            /* [retval][out] */ BSTR *strout);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Cal_CallOneWithCallBack )( 
            ICCal_TWDispatch * This,
            /* [in] */ BSTR Modal,
            /* [in] */ BSTR FunCall,
            /* [in] */ BSTR StrVar,
            /* [in] */ VARIANT jsFun);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Cal_CallOneWithThreadCallBack )( 
            ICCal_TWDispatch * This,
            /* [in] */ BSTR Modal,
            /* [in] */ BSTR FunCall,
            /* [in] */ BSTR StrVar,
            /* [in] */ VARIANT jsFun,
            BSTR *strout);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Cal_CallOneWithCallBackEx )( 
            ICCal_TWDispatch * This,
            /* [in] */ BSTR Modal,
            /* [in] */ BSTR FunCall,
            /* [in] */ BSTR StrVar,
            /* [in] */ VARIANT jsFun,
            BSTR *strout);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Cal_CallTwo )( 
            ICCal_TWDispatch * This,
            /* [in] */ BSTR Modal,
            /* [in] */ BSTR FunCall,
            /* [in] */ BSTR StrVar1,
            /* [in] */ BSTR StrVar2,
            /* [retval][out] */ BSTR *strout);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Cal_CallTwoWithCallBackEx )( 
            ICCal_TWDispatch * This,
            /* [in] */ BSTR Modal,
            /* [in] */ BSTR FunCall,
            /* [in] */ BSTR StrVar1,
            /* [in] */ BSTR StrVar2,
            /* [in] */ VARIANT jsFun,
            /* [retval][out] */ BSTR *strout);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DownLoadPdf )( 
            ICCal_TWDispatch * This,
            /* [in] */ BSTR KeyValue,
            /* [in] */ BSTR KeyPath,
            /* [in] */ LONG Future);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Cal_SignPdf )( 
            ICCal_TWDispatch * This,
            /* [in] */ BSTR Reason,
            /* [in] */ BSTR local,
            /* [in] */ LONG x1,
            /* [in] */ LONG y1,
            /* [in] */ LONG x2,
            /* [in] */ LONG y2,
            /* [in] */ LONG ipage,
            /* [retval][out] */ LONG *iRet);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPDFPIC )( 
            ICCal_TWDispatch * This,
            /* [in] */ BSTR Base64Pic,
            /* [retval][out] */ LONG *lRet);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInterfaceSafetyOptions )( 
            ICCal_TWDispatch * This,
            /* [in] */ REFIID riid,
            /* [out][in] */ DWORD *pdwSupportedOptions,
            /* [out][in] */ DWORD *pdwEnabledOptions);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetInterfaceSafetyOptions )( 
            ICCal_TWDispatch * This,
            /* [in] */ REFIID riid,
            /* [in] */ DWORD dwOptionSetMask,
            /* [in] */ DWORD dwEnabledOptions);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CalandtechNativeUI )( 
            ICCal_TWDispatch * This,
            /* [in] */ BSTR name,
            /* [in] */ LONG type,
            /* [retval][out] */ BSTR *retstr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UI_Init )( 
            ICCal_TWDispatch * This,
            /* [in] */ LONG dlgnum,
            /* [in] */ LONG type,
            /* [retval][out] */ BSTR *result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UI_init_EX )( 
            ICCal_TWDispatch * This,
            /* [in] */ LONG dlgnum,
            /* [in] */ LONG type,
            /* [in] */ LONG cx,
            /* [in] */ LONG cy,
            /* [in] */ LONG hx,
            /* [in] */ LONG hy,
            /* [retval][out] */ BSTR *result);
        
        END_INTERFACE
    } ICCal_TWDispatchVtbl;

    interface ICCal_TWDispatch
    {
        CONST_VTBL struct ICCal_TWDispatchVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICCal_TWDispatch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICCal_TWDispatch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICCal_TWDispatch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICCal_TWDispatch_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICCal_TWDispatch_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICCal_TWDispatch_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICCal_TWDispatch_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICCal_TWDispatch_Call(This,Modal,FunCall,StrVar,strVar2,strout)	\
    ( (This)->lpVtbl -> Call(This,Modal,FunCall,StrVar,strVar2,strout) ) 

#define ICCal_TWDispatch_ReleaseAll(This)	\
    ( (This)->lpVtbl -> ReleaseAll(This) ) 

#define ICCal_TWDispatch_CalShowWindowsResouce(This,source)	\
    ( (This)->lpVtbl -> CalShowWindowsResouce(This,source) ) 

#define ICCal_TWDispatch_Cal_CallOne(This,Modal,FunCall,StrVar,strout)	\
    ( (This)->lpVtbl -> Cal_CallOne(This,Modal,FunCall,StrVar,strout) ) 

#define ICCal_TWDispatch_Cal_CallOneWithCallBack(This,Modal,FunCall,StrVar,jsFun)	\
    ( (This)->lpVtbl -> Cal_CallOneWithCallBack(This,Modal,FunCall,StrVar,jsFun) ) 

#define ICCal_TWDispatch_Cal_CallOneWithThreadCallBack(This,Modal,FunCall,StrVar,jsFun,strout)	\
    ( (This)->lpVtbl -> Cal_CallOneWithThreadCallBack(This,Modal,FunCall,StrVar,jsFun,strout) ) 

#define ICCal_TWDispatch_Cal_CallOneWithCallBackEx(This,Modal,FunCall,StrVar,jsFun,strout)	\
    ( (This)->lpVtbl -> Cal_CallOneWithCallBackEx(This,Modal,FunCall,StrVar,jsFun,strout) ) 

#define ICCal_TWDispatch_Cal_CallTwo(This,Modal,FunCall,StrVar1,StrVar2,strout)	\
    ( (This)->lpVtbl -> Cal_CallTwo(This,Modal,FunCall,StrVar1,StrVar2,strout) ) 

#define ICCal_TWDispatch_Cal_CallTwoWithCallBackEx(This,Modal,FunCall,StrVar1,StrVar2,jsFun,strout)	\
    ( (This)->lpVtbl -> Cal_CallTwoWithCallBackEx(This,Modal,FunCall,StrVar1,StrVar2,jsFun,strout) ) 

#define ICCal_TWDispatch_DownLoadPdf(This,KeyValue,KeyPath,Future)	\
    ( (This)->lpVtbl -> DownLoadPdf(This,KeyValue,KeyPath,Future) ) 

#define ICCal_TWDispatch_Cal_SignPdf(This,Reason,local,x1,y1,x2,y2,ipage,iRet)	\
    ( (This)->lpVtbl -> Cal_SignPdf(This,Reason,local,x1,y1,x2,y2,ipage,iRet) ) 

#define ICCal_TWDispatch_SetPDFPIC(This,Base64Pic,lRet)	\
    ( (This)->lpVtbl -> SetPDFPIC(This,Base64Pic,lRet) ) 

#define ICCal_TWDispatch_GetInterfaceSafetyOptions(This,riid,pdwSupportedOptions,pdwEnabledOptions)	\
    ( (This)->lpVtbl -> GetInterfaceSafetyOptions(This,riid,pdwSupportedOptions,pdwEnabledOptions) ) 

#define ICCal_TWDispatch_SetInterfaceSafetyOptions(This,riid,dwOptionSetMask,dwEnabledOptions)	\
    ( (This)->lpVtbl -> SetInterfaceSafetyOptions(This,riid,dwOptionSetMask,dwEnabledOptions) ) 

#define ICCal_TWDispatch_CalandtechNativeUI(This,name,type,retstr)	\
    ( (This)->lpVtbl -> CalandtechNativeUI(This,name,type,retstr) ) 

#define ICCal_TWDispatch_UI_Init(This,dlgnum,type,result)	\
    ( (This)->lpVtbl -> UI_Init(This,dlgnum,type,result) ) 

#define ICCal_TWDispatch_UI_init_EX(This,dlgnum,type,cx,cy,hx,hy,result)	\
    ( (This)->lpVtbl -> UI_init_EX(This,dlgnum,type,cx,cy,hx,hy,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICCal_TWDispatch_INTERFACE_DEFINED__ */



#ifndef __AX_WebCallLib_LIBRARY_DEFINED__
#define __AX_WebCallLib_LIBRARY_DEFINED__

/* library AX_WebCallLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_AX_WebCallLib;

#ifndef ___ICCal_TWDispatchEvents_DISPINTERFACE_DEFINED__
#define ___ICCal_TWDispatchEvents_DISPINTERFACE_DEFINED__

/* dispinterface _ICCal_TWDispatchEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__ICCal_TWDispatchEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("2226E15B-0613-4765-81D6-9FF3E41EB351")
    _ICCal_TWDispatchEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _ICCal_TWDispatchEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _ICCal_TWDispatchEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _ICCal_TWDispatchEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _ICCal_TWDispatchEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _ICCal_TWDispatchEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _ICCal_TWDispatchEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _ICCal_TWDispatchEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _ICCal_TWDispatchEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _ICCal_TWDispatchEventsVtbl;

    interface _ICCal_TWDispatchEvents
    {
        CONST_VTBL struct _ICCal_TWDispatchEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _ICCal_TWDispatchEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _ICCal_TWDispatchEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _ICCal_TWDispatchEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _ICCal_TWDispatchEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _ICCal_TWDispatchEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _ICCal_TWDispatchEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _ICCal_TWDispatchEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___ICCal_TWDispatchEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CCal_TWDispatch;

#ifdef __cplusplus

class DECLSPEC_UUID("9B2F3F22-FEC2-49D4-BC8C-864C74DE4A5F")
CCal_TWDispatch;
#endif
#endif /* __AX_WebCallLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


