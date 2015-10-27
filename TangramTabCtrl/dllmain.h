// dllmain.h : Ä£¿éÀàimplementation file¡£

class CTangramTabCtrlModule : public ATL::CAtlDllModuleT< CTangramTabCtrlModule >
{
public :
	DECLARE_LIBID(LIBID_TangramTabCtrlLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_TANGRAMVIEW, "{6EF6E63E-7C8B-423C-AEB8-DC0B4D648BC9}")
};

extern class CTangramTabCtrlModule _AtlModule;
