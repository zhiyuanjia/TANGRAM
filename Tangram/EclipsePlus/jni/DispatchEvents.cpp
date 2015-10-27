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
#include "..\Tangram\stdafx.h"
#include "DispatchEvents.h"
#include "EventProxy.h"
#include "util.h"

using namespace TangramEclipsePlus;
using namespace TangramEclipsePlus::EclipsePlus;
extern "C"
{

#define PROXY_FLD "m_pConnPtProxy"

	// defined below
	BOOL GetEventIID(IUnknown*, IID*, CComBSTR **, DISPID **, int *, LPOLESTR);
	BOOL GetEventIIDForTypeLib(BSTR, IID*, CComBSTR **, DISPID **, int *, LPOLESTR);
	BOOL getClassInfoFromProgId(LPOLESTR bsProgId, LPTYPEINFO *pClassInfo);
	BOOL MapEventIIDs(IID*, CComBSTR **, DISPID **, int *, LPOLESTR, LPTYPEINFO);

	// extract a CTangramEventProxy* from a jobject
	CTangramEventProxy *extractProxy(JNIEnv *env, jobject arg)
	{
		jclass argClass = env->GetObjectClass(arg);
		jfieldID ajf = env->GetFieldID(argClass, PROXY_FLD, "J");
		jlong anum = env->GetLongField(arg, ajf);
		CTangramEventProxy *v = (CTangramEventProxy *)anum;
		return v;
	}

	/*
	 * pushes the CTangramEventProxy (*ep) into tje jobject in the PROXY_FLD location
	 */
	void putProxy(JNIEnv *env, jobject arg, CTangramEventProxy *ep)
	{
		jclass argClass = env->GetObjectClass(arg);
		jfieldID ajf = env->GetFieldID(argClass, PROXY_FLD, "J");
		jlong anum = env->GetLongField(arg, ajf);
		env->SetLongField(arg, ajf, (jlong)ep);
	}


	/*
	 * Class:     com_tangram_DispatchEvents
	 * Method:    init3
	 * Signature: (Lcom/tangram/Dispatch;Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V
	 */
	JNIEXPORT void JNICALL Java_com_tangram_DispatchEvents_init3(JNIEnv *env,
		jobject _this, jobject src,
		jobject sink,
		jstring _progid,
		jstring _typelib)
	{
		USES_CONVERSION;

		if (_typelib != NULL && _progid == NULL) {
			// both are required if typelib exists
			ThrowComFail(env, "TypeLib was specified but no program id was", -1);
			return;
		}

		BSTR typeLib = NULL;
		if (_typelib != NULL) {
			// why is this UTF instead of unicode? Then we could probably drop the A2W
			const char *typelib = env->GetStringUTFChars(_typelib, NULL);
			typeLib = A2W(typelib);
			// should we call env->ReleaseStringUTFChars(,) to free the memory like we do everywhere lese?

			//printf("we have a type lib %ls\n",typeLib);
		}

		// find progid if any
		LPOLESTR bsProgId = NULL;
		if (_progid != NULL) {
			// why is this UTF instead of unicode?  Then we could probably drop the A2W
			const char *progid = env->GetStringUTFChars(_progid, NULL);
			bsProgId = A2W(progid);
			// should we call env->ReleaseStringUTFChars(,) to free the memory like we do everywhere lese?
			  //printf("we have an applicaton %ls\n",bsProgId);
		}

		// get the IDispatch for the source object
		IDispatch *pDisp = extractDispatch(env, src);
		CComQIPtr<IUnknown, &IID_IUnknown> pUnk(pDisp);
		// see if it implements connection points
		CComQIPtr<IConnectionPointContainer, &IID_IConnectionPointContainer> pCPC(pUnk);
		if (!pCPC)
		{
			// no events, throw something
			ThrowComFail(env, "Can't find IConnectionPointContainer", -1);
			return;
		}

		IID eventIID;
		CComBSTR *mNames;
		DISPID *mIDs;
		int n_EventMethods;
		if (_typelib == NULL) {
			if (!GetEventIID(pUnk, &eventIID, &mNames, &mIDs, &n_EventMethods, bsProgId)) {
				ThrowComFail(env, "Can't find event iid", -1);
				return;
			}
		}
		else {
			if (!GetEventIIDForTypeLib(typeLib, &eventIID, &mNames, &mIDs, &n_EventMethods, bsProgId)) {
				ThrowComFail(env, "Can't find event iid for type lib", -1);
				return;
			}
		}

		// hook up to the default source iid
		CComPtr<IConnectionPoint> pCP;
		HRESULT hr = pCPC->FindConnectionPoint(eventIID, &pCP);
		if (SUCCEEDED(hr))
		{
			CTangramEventProxy *ep = new CTangramEventProxy(env, sink, pCP, eventIID, mNames, mIDs, n_EventMethods);
			// need to store ep on _this, in case it gets collected
			putProxy(env, _this, ep);
		}
		else {
			ThrowComFail(env, "Can't FindConnectionPoint", hr);
		}
	}

	/*
	 * Class:     DispatchEvents
	 * Method:    release
	 * Signature: ()V
	 */
	JNIEXPORT void JNICALL Java_com_tangram_DispatchEvents_release
		(JNIEnv *env, jobject _this)
	{
		CTangramEventProxy *ep = extractProxy(env, _this);
		if (ep) {
			// Disconnect must be called to reduce the ref count to the CTangramEventProxy otherwise
			// the destructor will never be called (to actually do the disconnect)
			ep->Disconnect(); // SF 3412922
			// this is the line that blows up in IETest
			ep->Release();
			putProxy(env, _this, NULL);
		}
	}

	/*
	 * I need a reverse map from the event interface's dispids to
	 * function names so that we can reflect them to java
	 */
	void
		LoadNameCache(LPTYPEINFO pTypeInfo, LPTYPEATTR pta,
			CComBSTR **mNames, DISPID **mIDs, int *nmeth)
	{
		CComBSTR *names = NULL;
		DISPID   *ids = NULL;
		int m_nCount;

		m_nCount = pta->cFuncs;
		*nmeth = m_nCount;
		names = m_nCount == 0 ? NULL : new CComBSTR[m_nCount];
		ids = m_nCount == 0 ? NULL : new DISPID[m_nCount];
		for (int i = 0; i < m_nCount; i++)
		{
			FUNCDESC* pfd;
			if (SUCCEEDED(pTypeInfo->GetFuncDesc(i, &pfd)))
			{
				CComBSTR bstrName;
				if (SUCCEEDED(pTypeInfo->GetDocumentation(pfd->memid, &bstrName, NULL, NULL, NULL)))
				{
					names[i].Attach(bstrName.Detach());
					ids[i] = pfd->memid;
					/*
					USES_CONVERSION;
					printf("map:%d -> %s\n", ids[i], W2A((OLECHAR *)names[i]));
					*/
				}
				pTypeInfo->ReleaseFuncDesc(pfd);
			}
		}
		*mNames = names;
		*mIDs = ids;
	}

#define IMPLTYPE_MASK \
  (IMPLTYPEFLAG_FDEFAULT | IMPLTYPEFLAG_FSOURCE | IMPLTYPEFLAG_FRESTRICTED)

#define IMPLTYPE_DEFAULTSOURCE \
  (IMPLTYPEFLAG_FDEFAULT | IMPLTYPEFLAG_FSOURCE)

	BOOL GetEventIID(IUnknown *m_pObject, IID* piid,
		CComBSTR **mNames, DISPID **mIDs, int *nmeth, LPOLESTR bsProgId)
	{
		*piid = GUID_NULL;
		ATLASSERT(m_pObject != NULL);
		// I Always use IProvideClassInfo rather than IProvideClassInfo2
		// since I also need to create a mapping from dispid to name
		LPPROVIDECLASSINFO pPCI = NULL;
		LPTYPEINFO pClassInfo = NULL;
		if (SUCCEEDED(m_pObject->QueryInterface(IID_IProvideClassInfo, (LPVOID*)&pPCI)))
		{
			//printf("got IProvideClassInfo\n");
			ATLASSERT(pPCI != NULL);
			HRESULT hr = pPCI->GetClassInfo(&pClassInfo);
			pPCI->Release();
			if (!SUCCEEDED(hr)) return false;
		}
		else if (getClassInfoFromProgId(bsProgId, &pClassInfo)) {
		}
		else {
			printf("GetEventIID: couldn't get IProvideClassInfo\n");
			return false;
		}

		return MapEventIIDs(piid, mNames, mIDs, nmeth, bsProgId, pClassInfo);
	}

	BOOL MapEventIIDs(IID* piid,
		CComBSTR **mNames, DISPID **mIDs, int *nmeth, LPOLESTR bsProgId, LPTYPEINFO pClassInfo)
	{
		ATLASSERT(pClassInfo != NULL);
		//printf("MapEventIIDs: got past ClassInfo assert\n");
		LPTYPEATTR pClassAttr;
		if (SUCCEEDED(pClassInfo->GetTypeAttr(&pClassAttr)))
		{
			//printf("MapEventIIDs: got TypeAttr\n");
			ATLASSERT(pClassAttr != NULL);
			ATLASSERT(pClassAttr->typekind == TKIND_COCLASS);

			// Search for typeinfo of the default events interface.
			int nFlags;
			HREFTYPE hRefType;

			//printf("MapEventIIDs: looking at %d class attribute impl types \n");
			for (unsigned int i = 0; i < pClassAttr->cImplTypes; i++)
			{
				if (SUCCEEDED(pClassInfo->GetImplTypeFlags(i, &nFlags)) &&
					((nFlags & IMPLTYPE_MASK) == IMPLTYPE_DEFAULTSOURCE))
				{
					// Found it.  Now look at its attributes to get IID.
					LPTYPEINFO pEventInfo = NULL;
					if (SUCCEEDED(pClassInfo->GetRefTypeOfImplType(i,
						&hRefType)) &&
						SUCCEEDED(pClassInfo->GetRefTypeInfo(hRefType,
							&pEventInfo)))
					{
						ATLASSERT(pEventInfo != NULL);
						LPTYPEATTR pEventAttr;
						if (SUCCEEDED(pEventInfo->GetTypeAttr(&pEventAttr)))
						{
							ATLASSERT(pEventAttr != NULL);

							// create a mapping from dispid to string
							LoadNameCache(pEventInfo, pEventAttr,
								mNames, mIDs, nmeth);

							*piid = pEventAttr->guid;
							pEventInfo->ReleaseTypeAttr(pEventAttr);
						}
						pEventInfo->Release();
					}
					break;
				}
			}
			pClassInfo->ReleaseTypeAttr(pClassAttr);
		}
		pClassInfo->Release();

		return (!IsEqualIID(*piid, GUID_NULL));
	}

	BOOL getClassInfoFromProgId(LPOLESTR bsProgId, LPTYPEINFO *pClassInfo)
	{
		USES_CONVERSION;
		CLSID clsid;
		GUID libid;
		if (FAILED(CLSIDFromProgID(bsProgId, &clsid))) return false;
		if (FAILED(StringFromCLSID(clsid, &bsProgId))) return false;
		HKEY keySoftware, keyClasses, keyCLSID, keyXXXX, keyTypeLib;
		DWORD dwType, dwCountData = 50;
		BYTE abData[50];
		LONG lVal;
		lVal = RegOpenKeyEx(HKEY_LOCAL_MACHINE, _T("SOFTWARE"), 0, KEY_READ, &keySoftware);
		if (lVal == ERROR_SUCCESS) {
			lVal = RegOpenKeyEx(keySoftware, _T("Classes"), 0, KEY_READ, &keyClasses);
			if (lVal == ERROR_SUCCESS) {
				lVal = RegOpenKeyEx(keyClasses, _T("CLSID"), 0, KEY_READ, &keyCLSID);
				if (lVal == ERROR_SUCCESS) {
					_TCHAR *tsProgId = W2T(bsProgId);
					lVal = RegOpenKeyEx(keyCLSID, tsProgId, 0, KEY_READ, &keyXXXX);
					if (lVal == ERROR_SUCCESS) {
						lVal = RegOpenKeyEx(keyXXXX, _T("TypeLib"), 0, KEY_READ, &keyTypeLib);
						if (lVal == ERROR_SUCCESS) {
							lVal = RegQueryValueExA(keyTypeLib, NULL, NULL, &dwType, abData, &dwCountData);
							RegCloseKey(keyTypeLib);
						}
						RegCloseKey(keyXXXX);
					}
					RegCloseKey(keyCLSID);
				}
				RegCloseKey(keyClasses);
			}
			RegCloseKey(keySoftware);
		}
		if (lVal != ERROR_SUCCESS) return false;
		BSTR bsLibId = A2BSTR((char*)abData);
		if (FAILED(CLSIDFromString(bsLibId, &libid))) return false;
		//Try loading from registry information.
		ITypeLib* pITypeLib;
		if (FAILED(LoadRegTypeLib(libid, 1, 0, LANG_NEUTRAL, &pITypeLib))) return false;
		//Find ITypeInfo for coclass.
		pITypeLib->GetTypeInfoOfGuid(clsid, pClassInfo);
		pITypeLib->Release();
		return true;
	}

	/*
	 * Get the class info from the progId using the given typeLib.
	 */
	BOOL getClassInfoFromProgIdTypeLib(BSTR typeLib, LPOLESTR bsProgId, LPTYPEINFO *pClassInfo)
	{
		USES_CONVERSION;
		CLSID clsid;

		if (FAILED(CLSIDFromProgID(bsProgId, &clsid))) return false;
		if (FAILED(StringFromCLSID(clsid, &bsProgId))) return false;

		ITypeLib* pITypeLib;
		if (FAILED(LoadTypeLib(typeLib, &pITypeLib)))	return false;

		//Find ITypeInfo for coclass.
		pITypeLib->GetTypeInfoOfGuid(clsid, pClassInfo);
		pITypeLib->Release();
		return true;
	}

	BOOL GetEventIIDForTypeLib(BSTR typeLib, IID* piid,
		CComBSTR **mNames, DISPID **mIDs, int *nmeth, LPOLESTR bsProgId)
	{
		LPTYPEINFO pClassInfo = NULL;
		if (getClassInfoFromProgIdTypeLib(typeLib, bsProgId, &pClassInfo))
		{
			if (pClassInfo == NULL) {
				printf("we had a successful return but pClassInfo is null\n");
			}
			return MapEventIIDs(piid, mNames, mIDs, nmeth, bsProgId, pClassInfo);
		}
		else
		{
			printf("GetEventIIDForTypeLib: couldn't get IProvideClassInfo\n");
			return false;
		}
	}

}
