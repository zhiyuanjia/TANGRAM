// TangramApplication.cpp : CTangramApplication µÄÊµÏÖ

#include "stdafx.h"
#include "Mainfrm.h"
#include "VSIMDIHelper.h"
#include "TangramApplication.h"


// CTangramApplication

CTangramApplication::CTangramApplication()
{
	m_pFrame = NULL;
}

CTangramApplication::~CTangramApplication()
{
}

HRESULT WINAPI CTangramApplication::UpdateRegistry(BOOL bRegister)
{
	return theApp.UpdateRegistryFromResource(IDR_TANGRAMAPPLICATION, bRegister);
}

HRESULT WINAPI CTangramApplication::CreateInstance(void* pv, REFIID riid, LPVOID* ppv)
{
	if (theApp.m_pTangramApplication == NULL)
	{
		::OleInitialize(NULL);
		theApp.m_pTangramApplication = new CComObject<CTangramApplication>;
		AFX_MODULE_STATE* pModuleState = AfxGetModuleState();
		ASSERT(pModuleState->m_nObjectCount != 0);
		InterlockedDecrement(&pModuleState->m_nObjectCount);
	}
	*ppv = theApp.m_pTangramApplication;
	return S_OK;
}

STDMETHODIMP CTangramApplication::get_TangramCore(IDispatch** pVal)
{
	AFX_MANAGE_STATE(AfxGetAppModuleState());
	::MessageBox(NULL, _T("OK"), _T(""), MB_OK);
	*pVal = theApp.m_pTangramCore;

	return S_OK;
}
