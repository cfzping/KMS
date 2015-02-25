// CCal_TWDispatch.cpp : CCCal_TWDispatch 的实现

#include "stdafx.h"
#include "CCal_TWDispatch.h"


// CCCal_TWDispatch
#include <vector>
using namespace std;

// CCCal_TWDispatch

//#include "../CryActivexSDK"



#define TWOCALLFUN "WebCal_TwoCall"
#define CALLNEEDBACKFUN "WebCal_TwoCallWithCallBack"

#define ONECALLFUN "WebCal_OneCall"
#define ONECALLFUNBEEDBACK "WebCal_OneCallWithCallBack"

void ShowDebugMSG(TCHAR * msg1,TCHAR *msg2)
{
	return ;
#ifdef _DEBUG
	MessageBox(0,msg1,msg2,0);
#endif
}

vector<STRUCT_HMODULE>g_listModule;

IStream *glob_pstrm=0;

IStream *glob_pstrm2=0;

int jscallback(IDispatch *pScript,DISPPARAMS params )
{


	try
	{
		DISPID dispid;
		
		

		pScript->Invoke(0, 

			IID_NULL, 

			LOCALE_USER_DEFAULT, 

			DISPATCH_METHOD, 

			&params, NULL, NULL, NULL);
		
		

	}
	catch(_com_error *e)
	{
		return -1;
	}
	return 0;
}
int Cal_CallBack(void *var1,void *var2,void *var3)
{
	//g_spCallback->Invoke()
	
	
	
	/*static*/ 
	
	::CoInitializeEx(NULL,   COINIT_APARTMENTTHREADED);

	IDispatch	*spDoc=0;
	//if (!spDoc)
	{
		//HRESULT hres=::CoUnmarshalInterface( glob_pstrm, IID_IDispatch,(void**)&spDoc); 

		HRESULT hres=::CoGetInterfaceAndReleaseStream( glob_pstrm, /*IID_IDispatch*/IID_IDispatch,(void**)&spDoc); 
		//CoMarshalInterface(glob_pstrm,IID_IDispatch,0)
		if (hres==S_OK)	
		{

		}
		else
		{
			//MessageBox(0,L"2err",0,0);
		
			return S_FALSE;

		}
	}
	
	


	CComVariant avarParams[3]={0};
	avarParams[0]=(char*)var1;
	avarParams[1]=(char*)var2;
	avarParams[2]=(char*)var3;
	

	

	EXCEPINFO excepInfo;  
	memset(&excepInfo, 0, sizeof excepInfo);  
	CComVariant vaResult; 
	DISPPARAMS params ={ avarParams, NULL, 3, 0 };
	UINT nArgErr = (UINT)-1;

	try
	{
		HRESULT res=spDoc->Invoke(0, 

			IID_NULL, 

			/*LOCALE_USER_DEFAULT*/0, 

			DISPATCH_METHOD, 

			&params, &vaResult,&excepInfo,&nArgErr);
		if (res==S_FALSE)
		{
			//MessageBox(0,L"err",0,0); 
			CoUninitialize();
			return -1;
		}
	}
	catch (_com_error* e)
	{
		CoUninitialize();
		return -1;
	}

	
	//MessageBox(0,L"1",0,0); 
	CoUninitialize();
	return 0;
}

STDMETHODIMP CCCal_TWDispatch::Call(BSTR Modal, BSTR FunCall, BSTR StrVar, BSTR strVar2, BSTR* strout)
{
	// TODO: 在此添加实现代码
	// TODO: 在此添加实现代码

	
	#if 0
	for (int i=0;i<g_listModule.size();i++)
	{
		if (g_listModule[i].st_modulename==Modal)
		{


			if (_tcslen(strVar2)<=0)
			{
				if (g_listModule[i].Cal_OneCall!=0)
				{
					char *strfun= _com_util::ConvertBSTRToString(FunCall);
					int iret=g_listModule[i].Cal_CallNeedBack(strfun,StrVar,strVar2,strout,0);
					//MessageBox(0,0,0,0);
					if (iret<0)
					{
						return S_FALSE;
					}
					return S_OK;
				}

				else
				{
					return S_FALSE;
				}
			}
			else
			{

			}
			//if (g_listModule[i].Cal_CallNeedBack!=0)
			

			
		}
	}
	//MessageBox(0,Modal,FunCall,0);
	TCHAR tpath[512]={0};
	PathAppend(tpath,m_curPath);
	PathAppend(tpath,Modal);
	_tcscat(tpath,_T(".calandtech"));
	HMODULE hModl = LoadLibrary(tpath) ; //以exe当前位置操作获取dll句柄
	STRUCT_HMODULE stmodule={0};
	if (hModl==0)
	{
		return S_FALSE;
	}


	//stmodule.Cal_Call=(WebCal_TwoCallFun)GetProcAddress(hModl, CALLFUN);
	stmodule.Cal_CallNeedBack=(WebCal_TwoCallWithCallBackFun)GetProcAddress(hModl, CALLNEEDBACKFUN);
	//MessageBox(0,tpath,m_curPath,0);
	if (stmodule.Cal_CallNeedBack!=0)
	{
		stmodule.st_modulename=Modal;
		stmodule.st_hmodule=hModl;
		g_listModule.push_back(stmodule);

		int iret=stmodule.Cal_CallNeedBack( _com_util::ConvertBSTRToString(FunCall),StrVar,strVar2,strout,0);
		if (iret<0)
		{
			return S_FALSE;
		}
	}
	else
	{
		//MessageBox(0,tpath,m_curPath,0);
		FreeLibrary(hModl);
		return S_FALSE;
	}
#endif
	return S_OK;
}

STDMETHODIMP CCCal_TWDispatch::ReleaseAll(void)
{
	// TODO: 在此添加实现代码
	for (int i=0;i<g_listModule.size();i++)
	{
		if (g_listModule[i].st_hmodule!=0)
		{

			FreeLibrary(g_listModule[i].st_hmodule);
			g_listModule[i].Cal_OneCall=0;
			g_listModule[i].Cal_OneCallNeedCallBack=0;
			g_listModule[i].Cal_TwoCall=0;
			g_listModule[i].Cal_TwoCallNeedBack=0;
			g_listModule[i].st_hmodule=0;
			g_listModule[i].st_modulename=_T("");
		}
	}
	g_listModule.clear();
	return S_OK;
}

STDMETHODIMP CCCal_TWDispatch::CalShowWindowsResouce(BSTR source)
{
	// TODO: 在此添加实现代码
	
	if (source!=0&&_tcslen(source))
	{
		TCHAR tpath[512]={0};
		PathAppend(tpath,m_curPath);
		PathAppend(tpath,source);
		PathAppend(tpath,L".exe");

		ShellExecute(0,L"open",source,0,0,SW_SHOW);
	}
	return S_OK;
}

int CCCal_TWDispatch::RegisteDll(STRUCT_HMODULE& hmodule)
{
	hmodule.Cal_OneCall=(WebCal_OneCall)GetProcAddress(hmodule.st_hmodule, ONECALLFUN);
	hmodule.Cal_OneCallNeedCallBack=(WebCal_OneCallWithCallBack)GetProcAddress(hmodule.st_hmodule, ONECALLFUNBEEDBACK);
	hmodule.Cal_TwoCall=(WebCal_TwoCallFun)GetProcAddress(hmodule.st_hmodule, TWOCALLFUN);
	hmodule.Cal_TwoCallNeedBack=(WebCal_TwoCallWithCallBackFun)GetProcAddress(hmodule.st_hmodule, CALLNEEDBACKFUN);
	if (hmodule.Cal_OneCall==0&&hmodule.Cal_OneCallNeedCallBack==0&&hmodule.Cal_TwoCall==0&&hmodule.Cal_TwoCallNeedBack==0)
	{
		ShowDebugMSG(_T("加载dll失败"),_T(""));
		return -1;//没有函数
	}
	return 0;
}


STDMETHODIMP CCCal_TWDispatch::Cal_CallOne(BSTR Modal, BSTR FunCall, BSTR StrVar, BSTR* strout)
{
	// TODO: 在此添加实现代码
	if (_tcslen(Modal)<2)
	{
		return S_FALSE;
	}
	
	for (int i=0;i<g_listModule.size();i++)
	{
		if (g_listModule[i].st_modulename==Modal)
		{


			//if (_tcslen(strVar2)<=0)
			{
				if (g_listModule[i].Cal_OneCall!=0)
				{
					char *strfun= _com_util::ConvertBSTRToString(FunCall);
					ShowDebugMSG(Modal,FunCall);
					int iret=g_listModule[i].Cal_OneCall(strfun,StrVar,strout);
					//MessageBox(0,0,0,0);
					if (iret<0)
					{
						return S_FALSE;
					}
					return S_OK;
				}

				else
				{
					return S_FALSE;
				}
			}

		}
	}
	STRUCT_HMODULE stmodule={0};
	stmodule.st_modulename=Modal;
	TCHAR tpath[512]={0};
	PathAppend(tpath,m_curPath);
	PathAppend(tpath,Modal);
	_tcscat(tpath,_T(".calandtech"));
	
	 stmodule.st_hmodule = LoadLibrary(tpath) ; //以exe当前位置操作获取dll句柄
	 if (stmodule.st_hmodule)
	 {
		RegisteDll(stmodule);
		g_listModule.push_back(stmodule);
	 }
	 else
	 {
		 return S_FALSE;
	 }
	 if (stmodule.Cal_OneCall!=0)
	 {
		 //ShowDebugMSG(Modal,FunCall);
		 char *strfun= _com_util::ConvertBSTRToString(FunCall);
		 int iret=stmodule.Cal_OneCall(strfun,StrVar,strout);
		 //MessageBox(0,0,0,0);
		 if (iret<0)
		 {
			 return S_FALSE;
		 }
		 return S_OK;
	 }
	return S_OK;
}

STDMETHODIMP CCCal_TWDispatch::Cal_CallOneWithCallBack(BSTR Modal, BSTR FunCall, BSTR StrVar, VARIANT jsFun)
{
	// TODO: 在此添加实现代码
	//没有返回值暂时放弃
	return S_OK;
}

STDMETHODIMP CCCal_TWDispatch::Cal_CallOneWithThreadCallBack(BSTR Modal, BSTR FunCall, BSTR StrVar, VARIANT jsFun, BSTR* strout)
{
	// TODO: 在此添加实现代码
	//是否实现多线程模式 ?
	return S_OK;
}

STDMETHODIMP CCCal_TWDispatch::Cal_CallOneWithCallBackEx(BSTR Modal, BSTR FunCall, BSTR StrVar, VARIANT jsFun, BSTR* strout)
{
	// TODO: 在此添加实现代码
	CComPtr<IDispatch> spCallback;
	if (_tcslen(Modal)<2)
	{
		return S_FALSE;
	}
	if (jsFun.vt== VT_DISPATCH)
	{
		spCallback = jsFun.pdispVal;
		if (spCallback==0)
		{
			return S_FALSE;
		}
	
	}
	else
	{
		return S_FALSE;//不是函数？
	}
 
	for (int i=0;i<g_listModule.size();i++)
	{
		if (g_listModule[i].st_modulename==Modal)
		{


			//if (_tcslen(strVar2)<=0)
			{
				if (g_listModule[i].Cal_OneCallNeedCallBack!=0)
				{
					char *strfun= _com_util::ConvertBSTRToString(FunCall);
					int iret=g_listModule[i].Cal_OneCallNeedCallBack(strfun,StrVar,strout,Cal_CallBack);
					//MessageBox(0,0,0,0);
					if (iret<0)
					{
						return S_FALSE;
					}
					return S_OK;
				}

				else
				{
					return S_FALSE;
				}
			}

		}
	}

	TCHAR tpath[512]={0};
	PathAppend(tpath,m_curPath);
	PathAppend(tpath,Modal);
	_tcscat(tpath,_T(".calandtech"));
	STRUCT_HMODULE stmodule={0};
	stmodule.st_hmodule = LoadLibrary(tpath) ; //以exe当前位置操作获取dll句柄
	if (stmodule.st_hmodule)
	{
		RegisteDll(stmodule);
		g_listModule.push_back(stmodule);
	}
	else
	{
		return S_FALSE;
	}
	if (stmodule.Cal_OneCallNeedCallBack!=0)
	{
		char *strfun= _com_util::ConvertBSTRToString(FunCall);
		int iret=stmodule.Cal_OneCallNeedCallBack(strfun,StrVar,strout,Cal_CallBack);
		//MessageBox(0,0,0,0);
		if (iret<0)
		{
			return S_FALSE;
		}
		return S_OK;
	}
	return S_OK;
}

STDMETHODIMP CCCal_TWDispatch::Cal_CallTwo(BSTR Modal, BSTR FunCall, BSTR StrVar1, BSTR StrVar2, BSTR* strout)
{
	// TODO: 在此添加实现代码


	if (_tcslen(Modal)<2)
	{
		return S_FALSE;
	}

	


	for (int i=0;i<g_listModule.size();i++)
	{
		if (g_listModule[i].st_modulename==Modal)
		{


			//if (_tcslen(strVar2)<=0)
			{
				if (g_listModule[i].Cal_TwoCall!=0)
				{
					char *strfun= _com_util::ConvertBSTRToString(FunCall);
					ShowDebugMSG(Modal,FunCall);
					int iret=g_listModule[i].Cal_TwoCall(strfun,StrVar1,StrVar2,strout);
					//MessageBox(0,0,0,0);
					if (iret<0)
					{
						return S_FALSE;
					}
					return S_OK;
				}

				else
				{
					return S_FALSE;
				}
			}

		}
	}

	TCHAR tpath[512]={0};
	PathAppend(tpath,m_curPath);
	PathAppend(tpath,Modal);
	_tcscat(tpath,_T(".calandtech"));
	STRUCT_HMODULE stmodule={0};
	stmodule.st_hmodule = LoadLibrary(tpath) ; //以exe当前位置操作获取dll句柄
	if (stmodule.st_hmodule)
	{
		RegisteDll(stmodule);
		g_listModule.push_back(stmodule);
	}
	else
	{
		return S_FALSE;
	}
	if (stmodule.Cal_TwoCall!=0)
	{
		//ShowDebugMSG(Modal,FunCall);
		char *strfun= _com_util::ConvertBSTRToString(FunCall);
		int iret=stmodule.Cal_TwoCall(strfun,StrVar1,StrVar2,strout);
		//MessageBox(0,0,0,0);
		if (iret<0)
		{
			return S_FALSE;
		}
		return S_OK;
	}
	return S_OK;
}

STDMETHODIMP CCCal_TWDispatch::Cal_CallTwoWithCallBackEx(BSTR Modal, BSTR FunCall, BSTR StrVar1, BSTR StrVar2, VARIANT jsFun, BSTR* strout)
{
	// TODO: 在此添加实现代码


	if (_tcslen(Modal)<2)
	{
		return S_FALSE;
	}

	
	CComPtr<IDispatch> spCallback;
	
	if (jsFun.vt== VT_DISPATCH)
	{
		spCallback = jsFun.pdispVal;
		if (spCallback==0)
		{
			return S_FALSE;
		}

		
	}
	
	{
		IDispatch* tmp=jsFun.pdispVal;
// 		if (!tmp)
// 		{
// 			return S_FALSE;
// 		}/*myCoMarshalInterThreadInterfaceInStream*/
		tmp->AddRef();
		HRESULT lres=	::CoMarshalInterThreadInterfaceInStream(/*IID_IDispatch*//*IID_IHTMLDocument2*/IID_IDispatch, spCallback, &glob_pstrm); 
		if (lres==S_FALSE)
		{
			return S_FALSE;
		}
	}
	for (int i=0;i<g_listModule.size();i++)
	{
		if (g_listModule[i].st_modulename==Modal)
		{


			//if (_tcslen(strVar2)<=0)
			{
				if (g_listModule[i].Cal_TwoCallNeedBack!=0)
				{
					char *strfun= _com_util::ConvertBSTRToString(FunCall);
					int iret=g_listModule[i].Cal_TwoCallNeedBack(strfun,StrVar1,StrVar2,strout,Cal_CallBack);
					//MessageBox(0,0,0,0);
					if (iret<0)
					{
						return S_FALSE;
					}
					return S_OK;
				}

				else
				{
					return S_FALSE;
				}
			}

		}
	}

	TCHAR tpath[512]={0};
	PathAppend(tpath,m_curPath);
	PathAppend(tpath,Modal);
	_tcscat(tpath,_T(".calandtech"));
	STRUCT_HMODULE stmodule={0};
	stmodule.st_hmodule = LoadLibrary(tpath) ; //以exe当前位置操作获取dll句柄
	if (stmodule.st_hmodule)
	{
		RegisteDll(stmodule);
		g_listModule.push_back(stmodule);
	}
	else
	{
		return S_FALSE;
	}
	if (stmodule.Cal_TwoCallNeedBack!=0)
	{
		char *strfun= _com_util::ConvertBSTRToString(FunCall);
		int iret=stmodule.Cal_TwoCallNeedBack(strfun,StrVar1,StrVar2,strout,Cal_CallBack);
		//MessageBox(0,0,0,0);
		if (iret<0)
		{
			return S_FALSE;
		}
		return S_OK;
	}

	return S_OK;
}

STDMETHODIMP CCCal_TWDispatch::DownLoadPdf(BSTR KeyValue, BSTR KeyPath, LONG Future)
{
	// TODO: 在此添加实现代码
// 	HANDLE hFileMap = CreateFileMapping(INVALID_HANDLE_VALUE, NULL, PAGE_READWRITE, 0, 255, _T("LiulanqiCalandtechDownLoadPdf"));
// 	CString strpath=(TCHAR*)KeyPath;
// 	CStringA tmppath;
// 	tmppath=strpath;
// 	TCHAR* ptChar = (TCHAR* )MapViewOfFile(hFileMap, FILE_MAP_ALL_ACCESS, 0, 0, 0);
// 	if (ptChar)
// 	{
// 		memcpy(ptChar, tmppath.GetBuffer(0), tmppath.GetLength()+1);
// 	}
// 	else
// 	{
// 		return S_FALSE;
// 	}
// 	CStringA strcurpath;
// 	strcurpath=m_curPath;
// 
// 	strcurpath+="\\CalDownLoad.exe";
// 	
	return S_OK;
}

//#include "../CryActivexSDK/SharpCall/SharpCall.h"
STDMETHODIMP CCCal_TWDispatch::Cal_SignPdf(BSTR Reason, BSTR local, LONG x1, LONG y1, LONG x2, LONG y2,LONG ipage, LONG* iRet)
{
	// TODO: 在此添加实现代码
	/*CreateSinaturePDF(char *contactinf,char *reason,int x1,int y1,int x2,int y2,int ipage);*/
	
	//CreateSinaturePDF("","",x1,y1,x2,y2,ipage);
	return S_OK;
}

STDMETHODIMP CCCal_TWDispatch::SetPDFPIC(BSTR Base64Pic, LONG* lRet)
{
	// TODO: 在此添加实现代码
	// SetPic((void *)Base64Pic);
	return S_OK;
}

STDMETHODIMP CCCal_TWDispatch::GetInterfaceSafetyOptions(REFIID riid, DWORD* pdwSupportedOptions, DWORD* pdwEnabledOptions)
{
	// TODO: 在此添加实现代码
	*pdwSupportedOptions = INTERFACESAFE_FOR_UNTRUSTED_CALLER | INTERFACESAFE_FOR_UNTRUSTED_DATA;  
	*pdwEnabledOptions = *pdwSupportedOptions;  
	return S_OK; 
	return S_OK;
}

STDMETHODIMP CCCal_TWDispatch::SetInterfaceSafetyOptions(REFIID riid, DWORD dwOptionSetMask , DWORD dwEnabledOptions)
{
	// TODO: 在此添加实现代码

	return S_OK;
}

STDMETHODIMP CCCal_TWDispatch::CalandtechNativeUI(BSTR name, LONG type, BSTR* retstr)
{
	// TODO: 在此添加实现代码
#ifndef _DEBUG
	return 0;
#endif
	CComPtr < IOleClientSite > spClientSite;
	GetClientSite( &spClientSite );
	CComQIPtr < IOleInPlaceSite > spSite = spClientSite;
	HWND hwnd=0;
	spSite->GetWindow( &hwnd );

	if (hwnd)
	{

		/*MessageBoxA(0,"get",0,0);*/
		static HMODULE hmod=LoadLibraryA("Calandtech_PDFSignBase.dll");
		if (hmod)
		{
			
			static CreateTypeDlg fun=(CreateTypeDlg)GetProcAddress(hmod,"CreateTypeDlg");
			if (fun)
			{
				int iret=fun(0,hwnd,0);
				if (iret<0)
				{
					*retstr=_com_util::ConvertStringToBSTR("ctreate error");
					return S_OK;
				}
				else
				{
					*retstr=_com_util::ConvertStringToBSTR("OK");
					return S_OK;
				}
			}
			*retstr=_com_util::ConvertStringToBSTR("function error");
			return S_OK;


		}
		*retstr=_com_util::ConvertStringToBSTR("module error");
		return S_OK;
	}
	*retstr=_com_util::ConvertStringToBSTR("no parent panel");
	return S_OK;
}

// 注册ui的dll
int CCCal_TWDispatch::ui_DllRegister(void)
{
	if (m_ui_func.init==0||m_ui_func.invoke==0)
	{
		HMODULE hmod=LoadLibraryA("Calandtech_PDFSignBase.dll");
		if (hmod)
		{
			m_ui_func.init=(UI_Init_FUN)GetProcAddress(hmod,"UI_Init");

			m_ui_func.invoke=(UI_invoke_FUN)GetProcAddress(hmod,"UI_invoke");
			if (m_ui_func.init==0||m_ui_func.invoke==0)
			{
				return -1;
			}
			
		}
		else
		{
			return -1;
		}
	}
	return 0;
}

STDMETHODIMP CCCal_TWDispatch::UI_Init(LONG dlgnum, LONG type, BSTR* result)
{
	// TODO: 在此添加实现代码
	
	return S_OK;
}

STDMETHODIMP CCCal_TWDispatch::UI_init_EX(LONG dlgnum, LONG type, LONG cx, LONG cy, LONG hx, LONG hy, BSTR* result)
{
	// TODO: 在此添加实现代码
	if (ui_DllRegister()<0)
	{
		*result=_com_util::ConvertStringToBSTR("moudul error");
		return S_OK;
	}
	if (m_ui_func.init)
	{
		#if 0
		CComPtr < IOleClientSite > spClientSite;
		GetClientSite( &spClientSite );
		CComQIPtr < IOleInPlaceSite > spSite = spClientSite;
		static  HWND hwnd;
		spSite->GetWindow( &hwnd );
#else
		HRESULT hr;
		HWND  hwnd = NULL;//所要得到的窗口句柄

		IOleClientSite * ClientSite;
		ClientSite = NULL;


		GetClientSite(&ClientSite ); 

		if ( ClientSite )
		{
			IOleWindow* pOleWindow;
			hr = ClientSite->QueryInterface( IID_IOleWindow, (LPVOID*) &pOleWindow );  

			if ( pOleWindow )
			{
				hr = pOleWindow->GetWindow( &hwnd ); 
				pOleWindow->Release();     
			}
		}
#endif

		int iret=m_ui_func.init(dlgnum,/*hwnd*/m_hWnd,type,cx,cy,hx,hy);
		if (iret<0)
		{
			*result=_com_util::ConvertStringToBSTR("error");
		}
		else
		{
			*result=_com_util::ConvertStringToBSTR("ok");
		}
	}
	return S_OK;
}

HRESULT CCCal_TWDispatch::OnDraw(ATL_DRAWINFO& di)
{
	// TODO: 在此添加专用代码和/或调用基类
	//ShowWindow(SW_SHOW);
	//DoVerbProperties(NULL, ::GetActiveWindow());
	if (m_hWndCD)
	{
		::ShowWindow(m_hWndCD, SW_SHOW);
	}
	else
	{
		if (m_hWnd!=0)
		{

			this->ShowWindow(SW_SHOW);
		}
		else
		{
#if 1
			HWND hwndParent;
			if (!m_bWindowOnly)
				// Try for windowless site
				HRESULT	hr = m_spClientSite->QueryInterface(__uuidof(IOleInPlaceSiteWindowless), (void **)&m_spInPlaceSite);

			if (m_spInPlaceSite->GetWindow(&hwndParent) == S_OK)
			{

			}
			CComPtr<IOleInPlaceObject> pIPO;
			ControlQueryInterface(__uuidof(IOleInPlaceObject), (void**)&pIPO);
			ATLASSERT(pIPO != NULL);
			RECT rc;
			rc.top=di.prcBounds->top;
			rc.left=di.prcBounds->left;
			rc.bottom=di.prcBounds->bottom;
			rc.right=di.prcBounds->right;
			HWND h = CreateControlWindow(hwndParent, rc);
			ATLASSERT(h != NULL);	// will assert if creation failed
			ATLASSERT(h == m_hWndCD);
			if(h == NULL)
				return E_FAIL;
			pIPO->SetObjectRects(&(rc), &(rc));


#else

#if 0
			CComPtr < IOleClientSite > spClientSite;
			GetClientSite( &spClientSite );
			CComQIPtr < IOleInPlaceSite > spSite = spClientSite;
			HWND hwnd=0;
			spSite->GetWindow( &hwnd );
#endif
			RECT rc;
			rc.top=di.prcBounds->top;
			rc.left=di.prcBounds->left;
			rc.bottom=di.prcBounds->bottom;
			rc.right=di.prcBounds->right;
			HWND hwndParent;
			if (!m_bWindowOnly)
				// Try for windowless site
				HRESULT	hr = m_spClientSite->QueryInterface(__uuidof(IOleInPlaceSiteWindowless), (void **)&m_spInPlaceSite);

			if (m_spInPlaceSite->GetWindow(&hwndParent) == S_OK)
			{
				this->CreateControlWindow(hwndParent,rc);
			}
			//this->CreateControlWindow(hwnd,rc);
			//this->InPlaceActivate(0);
#endif
		}
	}
	
	
	return __super::OnDraw(di);
}

LRESULT CCCal_TWDispatch::OnDestroy(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	return 0;
}

LRESULT CCCal_TWDispatch::OnCreate(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	return 0;
}

BOOL CCCal_TWDispatch::PreTranslateAccelerator(LPMSG pMsg, HRESULT& hRet)
{
	// TODO: 在此添加专用代码和/或调用基类
	return __super::PreTranslateAccelerator(pMsg, hRet);
}
