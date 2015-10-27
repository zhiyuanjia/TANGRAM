// dllmain.h : Declaration of module class.

class CTangramTabbedWndModule : public CAtlDllModuleT< CTangramTabbedWndModule >
{
public :
	DECLARE_LIBID(LIBID_TangramTabbedWndLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_TANGRAMTABBEDWND, "{1E6CDB2E-7E1B-4762-8548-6DACFEA9EC35}")
};

extern class CTangramTabbedWndModule _AtlModule;
