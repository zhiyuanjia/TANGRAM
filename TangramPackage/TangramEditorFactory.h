/********************************************************************************
*					Tangram Library - version 8.0								*
*********************************************************************************
* Copyright (C) 2002-2015 by Tangram Team.   All Rights Reserved.				*
*
* THIS SOURCE FILE IS THE PROPERTY OF TANGRAM TEAM AND IS NOT TO
* BE RE-DISTRIBUTED BY ANY MEANS WHATSOEVER WITHOUT THE EXPRESSED
* WRITTEN CONSENT OF TANGRAM TEAM.
*
* THIS SOURCE CODE CAN ONLY BE USED UNDER THE TERMS AND CONDITIONS
* OUTLINED IN THE GPL LICENSE AGREEMENT.TANGRAM TEAM
* GRANTS TO YOU (ONE SOFTWARE DEVELOPER) THE LIMITED RIGHT TO USE
* THIS SOFTWARE ON A SINGLE COMPUTER.
*
* CONTACT INFORMATION:
* mailto:sunhui@tangramfx.com
* http://www.tangramFX.com
*
*
********************************************************************************/

// TangramEditorFactory.h

#pragma once

#include "TangramEditorDocument.h"

/***************************************************************************
TangramPackage.pkgdef contains:


[$RootKey$\Editors\{89c1346b-bb49-41ff-97d5-47470eed3c95}]
@="Tangram"
"Package"="{fea558f9-2737-4369-8e99-14f316ca9190}"
"DisplayName"="Tangram"
"ExcludeDefTextEditor"=dword:00000001
"AcceptBinaryFiles"=dword:00000000

[$RootKey$\Editors\{89c1346b-bb49-41ff-97d5-47470eed3c95}\LogicalViews]
"{7651A703-06E5-11D1-8EBD-00A0C90F26EA}"=""

[$RootKey$\Editors\{89c1346b-bb49-41ff-97d5-47470eed3c95}\Extensions]
"tangram"=dword:00000032

which informs the shell that TangramPackagePackage is the package to create to have this editor 
registered with Visual Studio.  When TangramPackagePackage is sited by Visual Studio, 
TangramPackagePackage::PostSited creates an instance of CTangramEditorFactory and then queries
for SID_SVsRegisterEditors and then calls IVsRegisterEditors->RegisterEditor to register
the new instance of CTangramEditorFactory with Visual Studio.

Visual Studio then uses the CEditorFactory instance to create EditorDocument
instances, which is the actual editor instance.
***************************************************************************/

class CTangramEditorFactory :
	// Use ATL to take care of common COM infrastructure
	public CComObjectRootEx<CComSingleThreadModel>,
	// IVsEditorFactory is required to be an editor factory
	public IVsEditorFactoryImpl<CTangramEditorFactory>
{

// Provides a portion of the implementation of IUnknown, in particular the list of interfaces
// the CEditorFactory object will support via QueryInterface
BEGIN_COM_MAP(CTangramEditorFactory)
    COM_INTERFACE_ENTRY(IVsEditorFactory)
END_COM_MAP()

// COM objects typically should not be cloned, and this prevents cloning by declaring the 
// copy constructor and assignment operator private (NOTE:  this macro includes the declaration of
// a private section, so everything following this macro and preceding a public or protected 
// section will be private).
VSL_DECLARE_NOT_COPYABLE(CTangramEditorFactory)

protected:
	CTangramEditorFactory()
	{
	}

	virtual ~CTangramEditorFactory()
	{
	}

public:

#pragma warning(push)
#pragma warning(disable : 4480) // // warning C4480: nonstandard extension used: specifying underlying type for enum
	enum PhysicalViewId : unsigned int
	{
		Unsupported,
		Primary
	};
#pragma warning(pop)

	PhysicalViewId GetPhysicalViewId(REFGUID rguidLogicalView)
	{
		if(LOGVIEWID_Primary == rguidLogicalView || LOGVIEWID_TextView == rguidLogicalView)
		{
			return Primary;
		}

		return Unsupported;
	}

	BSTR GetPhysicalViewBSTR(PhysicalViewId viewId)
	{
		if(Primary == viewId)
		{
			// Note that the value of LOGVIEWID_TextView in the registry is empty string.
			// The values under LogicalViews for an editor should match up to the values 
			// returned by this method, so that GetPhysicalViewId below can properly
			// map the strings back to a PhysicalViewId.
			return ::SysAllocString(L"");
		}

		return NULL;
	}

	PhysicalViewId GetPhysicalViewId(LPCOLESTR szPhysicalView)
	{
		if(szPhysicalView != NULL && szPhysicalView[0] == L'\0')
		{
			return Primary;
		}

		return Unsupported;
	}

	bool CanShareBuffer(PhysicalViewId /*physicalViewId*/)
	{
		return false;
	}

	void CreateSingleViewObject(
		PhysicalViewId physicalViewId, 
		CComPtr<IUnknown>& rspViewObject, 
		CComBSTR& rbstrEditorCaption, 
		const GUID*& rpguidCommandUI, 
		VSEDITORCREATEDOCWIN& /*rCreateDocumentWindowUI*/)
	{
		if(physicalViewId == Primary)
		{
			CComObject<CTangramEditorDoc<> > *pDocument;
			VSL_CHECKHRESULT(CComObject<CTangramEditorDoc<> >::CreateInstance(&pDocument));
			HRESULT hr = pDocument->QueryInterface(&rspViewObject);
			if(FAILED(hr))
			{
				// If QueryInterface failed, then there is something wrong with the object.
				// Delete it and throw an exception for the error.
				delete pDocument;
				VSL_CREATE_ERROR_HRESULT(hr);
			}

			// NOTE - if the file is read only [Read Only] will be appended to the caption
			rbstrEditorCaption.LoadStringW(IDS_EDITORCAPTION);

			rpguidCommandUI = &CLSID_TangramPackageEditorDocument;

			// pCreateDocumentWindowUI will be initialized to 0, and see we provide
			// no GUI for the user to cancel from so leave it 0

			return;
		}
		ERRHR(E_FAIL); // This should never happen
	}

private:

};
