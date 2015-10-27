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
#include <jni.h>
#include "..\Tangram\stdafx.h"
#include "util.h"

namespace TangramEclipsePlus
{
	namespace EclipsePlus
	{
		/*
		 * An instance of this class stands between a connection point
		 * and a java object. When it gets invoked from the cp, it reflects
		 * the call into the java object dynamically. The eventIID is passed
		 * in as are the valid dispids and the corresponding names. A map
		 * is created between the dispids and the java object's method in
		 * the constructor. For now, all the java event methods have to have
		 * the same signature: <name>(Variant[])
		 */
		class CTangramEventProxy : public IDispatch
		{
		private:
			int     connected;
			LONG    m_cRef;		// a reference counter
			CComPtr<IConnectionPoint> pCP; // the connection point
			DWORD   dwEventCookie; // connection point cookie
			jobject javaSinkObj;   // the java object to delegate calls

			IID     eventIID;      // the interface iid passed in
			int     MethNum;		// number of methods in the callback interface
			CComBSTR *MethName;   // Array of method names
			DISPID   *MethID;     // Array of method ids, used to match invokations to method names
			JavaVM   *jvm;        // The java vm we are running
			void convertJavaVariant(VARIANT *java, VARIANT *com);
			void Connect(JNIEnv *env);
		public:
			// constuct with a global JNI ref to a sink object
			// to which we will delegate event callbacks
			CTangramEventProxy(JNIEnv *jenv,
				jobject aSinkObj,
				CComPtr<IConnectionPoint> pConn,
				IID eventIID,
				CComBSTR *mName,
				DISPID *mID,
				int mNum);
			~CTangramEventProxy();

			// IUnknown methods
			STDMETHODIMP_(ULONG) AddRef(void)
			{
				LONG res = InterlockedIncrement(&m_cRef);
				return res;
			}

			STDMETHODIMP_(ULONG) Release(void)
			{
				LONG res = InterlockedDecrement(&m_cRef);
				if (res == 0) {
					delete this;
				}
				return res;

			}

			STDMETHODIMP QueryInterface(REFIID rid, void **ppv);

			// IDispatch methods
			STDMETHODIMP GetTypeInfoCount(UINT *num)
			{
				*num = 0;
				return S_OK;
			}

			STDMETHODIMP GetTypeInfo(UINT, LCID, ITypeInfo **pptInfo)
			{
				*pptInfo = NULL;
				return E_NOTIMPL;
			}

			// These are the actual supported methods
			STDMETHODIMP GetIDsOfNames(REFIID, OLECHAR **, UINT, LCID, DISPID *);
			STDMETHODIMP Invoke(DISPID, REFIID, LCID, WORD, DISPPARAMS *, VARIANT *, EXCEPINFO *, UINT *);
			// SF 3412922 make public to support cleanup from DispatchEvents
			void Disconnect();

		};
	}
}
