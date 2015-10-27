// dllmain.h: Ä£¿éÀàimplementation file¡£
#include "TangramCOMEx.h"
#include <atlstr.h>

class CTangramApp : public ATL::CAtlDllModuleT< CTangramApp >
{
public :
	DECLARE_LIBID(LIBID_TangramCOMExLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_TANGRAMCOMEX, "{7FC669BD-4655-4927-9B39-79F5285BABC1}")
	CLSID	m_RemoteObjClsid;
	CWindow	m_RemoteObjHelperWnd;
};

extern class CTangramApp theApp;
