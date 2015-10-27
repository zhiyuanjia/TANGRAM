// dllmain.h : Ä£¿éÀàimplementation file¡£
#include "tangram.h"
#include "TangramView_i.h"
class CTangramViewModule : public ATL::CAtlDllModuleT< CTangramViewModule >
{
public :
	ITangramCore* m_pTangramCore;
	DECLARE_LIBID(LIBID_TangramViewLib)
};

extern class CTangramViewModule _AtlModule;
