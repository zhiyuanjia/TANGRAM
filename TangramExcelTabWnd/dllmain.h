// dllmain.h : Declaration of module class.
#include "TangramExcelTabWnd_i.h"

class CTangramExcelTabWndApp : public CWinApp
{
public:

// Overrides
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	DECLARE_MESSAGE_MAP()
};
class CTangramExcelTabWndModule : public CAtlDllModuleT< CTangramExcelTabWndModule >
{
public :
	DECLARE_LIBID(LIBID_TangramExcelTabWndLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_TANGRAMEXCELTABWND, "{F2C78574-10E7-44E0-A673-9BDBC9471420}")
};

extern class CTangramExcelTabWndModule _AtlModule;
extern CTangramExcelTabWndApp theApp;
