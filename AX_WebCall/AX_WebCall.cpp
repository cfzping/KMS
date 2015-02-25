// AX_WebCall.cpp : WinMain µÄÊµÏÖ


#include "stdafx.h"
#include "resource.h"
#include "AX_WebCall_i.h"


class CAX_WebCallModule : public CAtlExeModuleT< CAX_WebCallModule >
{
public :
	DECLARE_LIBID(LIBID_AX_WebCallLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_AX_WEBCALL, "{BAEECDF3-413A-4DC4-BFCE-5114E3DDD0EE}")
};

CAX_WebCallModule _AtlModule;


HINSTANCE g_hinstance=0;
//
extern "C" int WINAPI _tWinMain(HINSTANCE hInstance, HINSTANCE /*hPrevInstance*/, 
                                LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	g_hinstance=hInstance;
    return _AtlModule.WinMain(nShowCmd);
}

