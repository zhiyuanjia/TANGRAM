// TangrmAppObject.cpp : CTangrmAppObject µÄÊµÏÖ

#include "stdafx.h"
#include "TangramApp.h"
#include "TangrmAppObject.h"


// CTangrmAppObject
CTangrmAppObject::CTangrmAppObject()
{
	//AFX_MODULE_STATE* pModuleState = AfxGetModuleState();
	////theApp.m_pTangramApplication = new CComObject<CTangrmAppObject>;
	////ASSERT(pModuleState->m_nObjectCount != 0);
	//InterlockedDecrement(&pModuleState->m_nObjectCount);
}

CTangrmAppObject::~CTangrmAppObject()
{
}

HRESULT WINAPI CTangrmAppObject::UpdateRegistry(BOOL bRegister)
{
	return theApp.UpdateRegistryFromResource(IDR_TANGRMAPPOBJECT, bRegister);
}

HRESULT WINAPI CTangrmAppObject::CreateInstance(void* pv, REFIID riid, LPVOID* ppv)
{
	if (theApp.m_pTangramApplication == NULL)
	{
		::OleInitialize(NULL);
		AFX_MODULE_STATE* pModuleState = AfxGetModuleState();
		theApp.m_pTangramApplication = new CComObject<CTangrmAppObject>;
		ASSERT(pModuleState->m_nObjectCount != 0);
		InterlockedDecrement(&pModuleState->m_nObjectCount);
	}
	*ppv = theApp.m_pTangramApplication;
	return S_OK;
}


STDMETHODIMP CTangrmAppObject::get_TangramCore(IDispatch** pVal)
{
	AFX_MANAGE_STATE(AfxGetAppModuleState());

	*pVal = theApp.m_pTangramCore;

	return S_OK;
}
