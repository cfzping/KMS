// CCal_TWDispatch.h : CCCal_TWDispatch 的声明

#pragma once
#include "resource.h"       // 主符号

#include "AX_WebCall_i.h"
#include "_ICCal_TWDispatchEvents_CP.h"

#include <atlctl.h>

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE 平台(如不提供完全 DCOM 支持的 Windows Mobile 平台)上无法正确支持单线程 COM 对象。定义 _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA 可强制 ATL 支持创建单线程 COM 对象实现并允许使用其单线程 COM 对象实现。rgs 文件中的线程模型已被设置为“Free”，原因是该模型是非 DCOM Windows CE 平台支持的唯一线程模型。"
#endif

#include <atlstr.h>
#include <atlwin.h>
#include <objsafe.h>
#include <atlctl.h>  

// CCCal_TWDispatch
extern HINSTANCE g_hinstance;
typedef int (*CallBackFun)(void *var1,void *var2,void *var3);


typedef int  (*WebCal_OneCall)(char *strfun,void *var1,void *vret);
typedef int  (*WebCal_OneCallWithCallBack)(char *strfun,void *var1,void *vret,CallBackFun CallBackFun);


typedef int (*WebCal_TwoCallFun)(char *strfun,void *var1,void *var2,void *vret);
typedef int (*WebCal_TwoCallWithCallBackFun)(char *strfun,void *var1,void *var2,void *vret,CallBackFun CallBackFun);


#include "comutil.h"
#pragma comment(lib,"comsuppw.lib")
typedef struct STRUCT_HMODULE_T
{
	HMODULE st_hmodule;

	WebCal_OneCall Cal_OneCall;
	WebCal_OneCallWithCallBack Cal_OneCallNeedCallBack;

	WebCal_TwoCallFun Cal_TwoCall;
	WebCal_TwoCallWithCallBackFun Cal_TwoCallNeedBack;

	CString st_modulename;
}STRUCT_HMODULE;

typedef int (*CreateTypeDlg)(int type,HWND hWnd,void *informations);

typedef int (*UI_invoke_FUN)(int ax_np_nacl_type,char* methodname,HWND hWnd/*留作他用*/,void *var1,void *var2,void *var3);
typedef int (*UI_Init_FUN)(int type,HWND hWnd,int type2,int,int,int,int);
typedef struct Calandtech_UI_T 
{
	UI_Init_FUN init;
	UI_invoke_FUN invoke;

}Calandtech_UI;

class ATL_NO_VTABLE CCCal_TWDispatch :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CCCal_TWDispatch, &CLSID_CCal_TWDispatch>,
	public IConnectionPointContainerImpl<CCCal_TWDispatch>,
	public CProxy_ICCal_TWDispatchEvents<CCCal_TWDispatch>,
	public IObjectWithSiteImpl<CCCal_TWDispatch>,
	public IDispatchImpl<ICCal_TWDispatch, &IID_ICCal_TWDispatch, &LIBID_AX_WebCallLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
	public IObjectSafetyImpl<CCCal_TWDispatch,INTERFACESAFE_FOR_UNTRUSTED_CALLER | INTERFACESAFE_FOR_UNTRUSTED_DATA>//支持安全接口
	
	,public CComControl<CCCal_TWDispatch>,
	public IPersistStreamInitImpl<CCCal_TWDispatch>,
	public IOleControlImpl<CCCal_TWDispatch>,
	public IOleObjectImpl<CCCal_TWDispatch>,
	public IOleInPlaceActiveObjectImpl<CCCal_TWDispatch>,
	public IViewObjectExImpl<CCCal_TWDispatch>,
	public IOleInPlaceObjectWindowlessImpl<CCCal_TWDispatch>,
	public IPersistStorageImpl<CCCal_TWDispatch>,
	public ISpecifyPropertyPagesImpl<CCCal_TWDispatch>,
	public IQuickActivateImpl<CCCal_TWDispatch>,
	public IDataObjectImpl<CCCal_TWDispatch>,
	public IProvideClassInfo2Impl<&CLSID_CCal_TWDispatch, NULL, &LIBID_AX_WebCallLib>
	//,public CWindow
	//,public CComControl<CCCal_TWDispatch,CWindow>
{
public:
	Calandtech_UI m_ui_func;
	//bool m_bWindowOnly;
	CCCal_TWDispatch()
	{
		//m_hWnd;
		#if 0
m_bWindowOnly
#endif=TRUE;
		m_bWndLess=0;
		//m_bInPlaceSiteEx=0;
		//m_bWindowOnly=1;
		memset(&m_ui_func,0,sizeof(m_ui_func));
		memset(m_curPath,0,512);
		if (g_hinstance==NULL)
		{
			g_hinstance=GetModuleHandle(_T("AX_Call.exe"));
		}
		GetModuleFileName(g_hinstance,m_curPath,512);
		PathRemoveFileSpec(m_curPath);
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CCAL_TWDISPATCH)

#if 0
#if 0
STDMETHODIMP GetInterfaceSafetyOptions( REFIID riid, DWORD *pdwSupportedOptions, DWORD *pdwEnabledOptions){  
	ATLTRACE(_T("Cwebpy::GetInterfaceSafetyOptions()\n"));  
	*pdwSupportedOptions = INTERFACESAFE_FOR_UNTRUSTED_CALLER | INTERFACESAFE_FOR_UNTRUSTED_DATA;  
	*pdwEnabledOptions = *pdwSupportedOptions;  
	return S_OK;  
}  
#endif
STDMETHODIMP GetInterfaceSafetyOptions( REFIID riid, DWORD *dwOptionSetMask, DWORD dwEnabledOptions){  
	ATLTRACE(_T("Cwebpy::GetInterfaceSafetyOptions()\n"));  
	return S_OK;  
}  
#endif
BEGIN_COM_MAP(CCCal_TWDispatch)
	COM_INTERFACE_ENTRY(IObjectSafety)//支持安全
	COM_INTERFACE_ENTRY(ICCal_TWDispatch)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
	COM_INTERFACE_ENTRY(IObjectWithSite)
	// BEGIN_INTERFACE_PART(ObjSafe, IObjectSafety)

//	COM_INTERFACE_ENTRY(IOleControl)
	COM_INTERFACE_ENTRY(IViewObjectEx)
	COM_INTERFACE_ENTRY(IViewObject2)
	COM_INTERFACE_ENTRY(IViewObject)
	COM_INTERFACE_ENTRY(IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY(IOleInPlaceObject)
	COM_INTERFACE_ENTRY2(IOleWindow, IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY(IOleInPlaceActiveObject)
	COM_INTERFACE_ENTRY(IOleControl)
	COM_INTERFACE_ENTRY(IOleObject)
	COM_INTERFACE_ENTRY(IPersistStreamInit)
	COM_INTERFACE_ENTRY2(IPersist, IPersistStreamInit)
	COM_INTERFACE_ENTRY(ISpecifyPropertyPages)
	COM_INTERFACE_ENTRY(IQuickActivate)
	COM_INTERFACE_ENTRY(IPersistStorage)
	COM_INTERFACE_ENTRY(IDataObject)
	COM_INTERFACE_ENTRY(IProvideClassInfo)
	COM_INTERFACE_ENTRY(IProvideClassInfo2)
	#if 0
BEGIN_INTERFACE_PART(ObjSafe, IObjectSafety) 
		STDMETHOD_(HRESULT, GetInterfaceSafetyOptions) ( 
		/* [in] */ REFIID riid, 
		/* [out] */ DWORD __RPC_FAR *pdwSupportedOptions, 
		/* [out] */ DWORD __RPC_FAR *pdwEnabledOptions 
		); 

		STDMETHOD_(HRESULT, SetInterfaceSafetyOptions) ( 
			/* [in] */ REFIID riid, 
			/* [in] */ DWORD dwOptionSetMask, 
			/* [in] */ DWORD dwEnabledOptions 
			); 
#endif

END_COM_MAP()

BEGIN_CONNECTION_POINT_MAP(CCCal_TWDispatch)
	CONNECTION_POINT_ENTRY(__uuidof(_ICCal_TWDispatchEvents))
END_CONNECTION_POINT_MAP()

BEGIN_PROP_MAP(CCCal_TWDispatch)
	PROP_DATA_ENTRY("_cx", m_sizeExtent.cx, VT_UI4)
	PROP_DATA_ENTRY("_cy", m_sizeExtent.cy, VT_UI4)
	// Example entries
	// PROP_ENTRY("Property Description", dispid, clsid)
	// PROP_PAGE(CLSID_StockColorPage)
END_PROP_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		;
		

		return S_OK;
	}

	void FinalRelease()
	{
	}

public:
	TCHAR m_curPath[512];

	STDMETHOD(Call)(BSTR Modal, BSTR FunCall, BSTR StrVar, BSTR strVar2, BSTR* strout);
	STDMETHOD(ReleaseAll)(void);
	STDMETHOD(CalShowWindowsResouce)(BSTR source);
	int RegisteDll(STRUCT_HMODULE& hmodule);
	STDMETHOD(Cal_CallOne)(BSTR Modal, BSTR FunCall, BSTR StrVar, BSTR* strout);
	STDMETHOD(Cal_CallOneWithCallBack)(BSTR Modal, BSTR FunCall, BSTR StrVar, VARIANT jsFun);
	STDMETHOD(Cal_CallOneWithThreadCallBack)(BSTR Modal, BSTR FunCall, BSTR StrVar, VARIANT jsFun, BSTR* strout);
	STDMETHOD(Cal_CallOneWithCallBackEx)(BSTR Modal, BSTR FunCall, BSTR StrVar, VARIANT jsFun, BSTR* strout);
	STDMETHOD(Cal_CallTwo)(BSTR Modal, BSTR FunCall, BSTR StrVar1, BSTR StrVar2, BSTR* strout);
	STDMETHOD(Cal_CallTwoWithCallBackEx)(BSTR Modal, BSTR FunCall, BSTR StrVar1, BSTR StrVar2, VARIANT jsFun, BSTR* strout);
	STDMETHOD(DownLoadPdf)(BSTR KeyValue, BSTR KeyPath, LONG Future);
	STDMETHOD(Cal_SignPdf)(BSTR Reason, BSTR local, LONG x1, LONG y1, LONG x2, LONG y2,LONG ipage, LONG* iRet);
	STDMETHOD(SetPDFPIC)(BSTR Base64Pic, LONG* lRet);
	STDMETHOD(GetInterfaceSafetyOptions)(REFIID riid, DWORD* pdwSupportedOptions, DWORD* pdwEnabledOptions);
	STDMETHOD(SetInterfaceSafetyOptions)(REFIID riid, DWORD dwOptionSetMask , DWORD dwEnabledOptions);
	STDMETHOD(CalandtechNativeUI)(BSTR name, LONG type, BSTR* retstr);
	// 注册ui的dll
	int ui_DllRegister(void);
	STDMETHOD(UI_Init)(LONG dlgnum, LONG type, BSTR* result);
	STDMETHOD(UI_init_EX)(LONG dlgnum, LONG type, LONG cx, LONG cy, LONG hx, LONG hy, BSTR* result);
	virtual HRESULT OnDraw(ATL_DRAWINFO& di);
	BEGIN_MSG_MAP(CCCal_TWDispatch)
		ALT_MSG_MAP(1)
		MESSAGE_HANDLER(WM_DESTROY, OnDestroy)
		MESSAGE_HANDLER(WM_CREATE, OnCreate)
	END_MSG_MAP()
	LRESULT OnDestroy(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
	LRESULT OnCreate(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
	BOOL PreTranslateAccelerator(LPMSG pMsg, HRESULT& hRet);
};

OBJECT_ENTRY_AUTO(__uuidof(CCal_TWDispatch), CCCal_TWDispatch)
