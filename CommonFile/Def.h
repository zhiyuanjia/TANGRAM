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

#pragma once

#include <oleacc.h>
#include <vector>
#include <map>
#include <atlstr.h>

#include "mso.h"
#include "Tangram.h"
#include "TangramXmlParse.h"
using namespace std;
using namespace ATL;

#pragma comment(lib, "imagehlp.lib")

typedef std::map<CString ,CString> CStringMap;
typedef CStringMap::iterator StrMapIT;
typedef map<LONG, Office::_CustomTaskPane*> CTaskPaneMap;
typedef CTaskPaneMap::iterator TaskPaneMapIT;
typedef map<HWND, CString> CTaskPaneXmlMap;
typedef CTaskPaneXmlMap::iterator CTaskPaneXmlMapIT;


#define TANGRAM_OBJECT_ENTRY_AUTO(clsid, class) \
    __declspec(selectany) ATL::_ATL_OBJMAP_CACHE __objCache__##class = { NULL, 0 }; \
	const ATL::_ATL_OBJMAP_ENTRY_EX __objMap_##class = {&clsid, class::UpdateRegistry, class::_ClassFactoryCreatorClass::CreateInstance, class::CreateInstance, &__objCache__##class, class::GetObjectDescription, class::GetCategoryMap, class::ObjectMain }; \
	extern "C" __declspec(allocate("ATL$__m")) __declspec(selectany) const ATL::_ATL_OBJMAP_ENTRY_EX* const __pobjMap_##class = &__objMap_##class; \
	OBJECT_ENTRY_PRAGMA(class)

typedef std::map<CString, CString> CStringMap;
typedef CStringMap::iterator StrMapIT;
typedef map<LONG, Office::_CustomTaskPane*> CTaskPaneMap;
typedef CTaskPaneMap::iterator TaskPaneMapIT;
typedef map<HWND, CString> CTaskPaneXmlMap;
typedef CTaskPaneXmlMap::iterator CTaskPaneXmlMapIT;

namespace TangramCommon
{
	typedef struct tagCtrlInfo
	{
		CString m_strName;
		IDispatch* m_pCtrlDisp;
		HWND m_hWnd;
		ITangramNode* m_pNode;
		ITangram* m_pTangram;
	}CtrlInfo;

	class CTangramProxyBase
	{
	public:
		virtual void AttachNode(void* pNodeEvents){};
		virtual void OnEvent(ITangramEvent* pEvent, IDispatch* pCtrlDisp, IDispatch* pArgDisp){};
	};

	class CTangramCLRProxyBase
	{
	public:
		CTangramCLRProxyBase()
		{
			m_pProxy = NULL;
		};

		CTangramProxyBase* m_pProxy;

		virtual BSTR AttachObjEvent(IDispatch* EventObj, IDispatch* SourceObj, TangramEventType EventType, IDispatch* HTMLWindow) = 0;
		virtual HRESULT ActiveCLRMethod(BSTR bstrObjID, BSTR bstrMethod, BSTR bstrParam, BSTR bstrData) = 0;
		virtual IDispatch* CreateCLRObj(BSTR bstrObjID) = 0;
		virtual HRESULT ProcessCtrlMsg(HWND hCtrl, bool bShiftKey) = 0;
		virtual BOOL ProcessFormMsg(HWND hFormWnd, LONG lpMsg, int nMouseButton) = 0;
		virtual HRESULT CloseForms()=0;
		virtual IDispatch* TangramCreateObject(BSTR bstrObjID, LONGLONG hParent, ITangramNode* pHostNode)=0;
		virtual BOOL IsWinForm(HWND hWnd) = 0;
		virtual IDispatch* GetCLRControl(IDispatch* CtrlDisp, BSTR bstrNames)=0;
		virtual BSTR GetCtrlName(IDispatch* pCtrl)=0;
		virtual HWND GetMDIClientHandle(IDispatch* pMDICtrl)=0;
		virtual IDispatch* GetCtrlByName(IDispatch* CtrlDisp, BSTR bstrName, bool bFindInChild)=0;
		virtual HWND GetCtrlHandle(IDispatch* pCtrl)=0;
		virtual HWND IsCtrlCanNavigate(IDispatch* ctrl)=0;
		virtual void TangramAction(BSTR bstrXml, ITangramNode* pNode)=0;
		virtual BSTR GetCtrlValueByName(IDispatch* CtrlDisp, BSTR bstrName, bool bFindInChild)=0;
	};

	class CTangramOfficePlusApp
	{
	public:
		CTangramOfficePlusApp()
		{
			m_strUser = _T("");
			m_strRibbonXml = _T("");
			m_strConfigFile = _T("");
			m_strAppPath = _T("");
			m_strTemplateXml = _T("");
			m_strTemplateSubmitXml = _T("");
			m_strDefaultTemplateXml = _T("");
			//m_pTangramCore.CoCreateInstance(L"Tangram.Tangram.1");
			//if (m_pTangramCore)
			//{
			//	CComVariant m_v;
			//	m_v.vt = VT_I4;
			//	m_v.lVal = (LONGLONG)(CTangramOfficePlusApp*)this;
			//	m_pTangramCore->put_TangramVal(CComBSTR(L"OfficePlusApp"),m_v);
			//}
		};

		CString								m_strUser;
		CString 							m_strAppPath;
		CString								m_strRibbonXml;
		CString 							m_strConfigFile;
		CString								m_strTemplateXml;
		CString								m_strTemplateSubmitXml;
		CString								m_strDefaultTemplateXml;

		CTaskPaneMap						m_mapTaskPaneMap;
		CTaskPaneXmlMap						m_mapTaskPaneXmlMap;

		CComPtr<Office::ICTPFactory>		m_pCTPFactory;
		CComPtr<ITangramCore>				m_pTangramCore;

		virtual HRESULT OnConnection(IDispatch* pHostApp, int ConnectMode) = 0;
		virtual HRESULT OnDisconnection(int DisConnectMode) = 0;
		virtual HRESULT GetCustomAddinUI(BSTR RibbonID, BSTR* bstrXmlScript) = 0;
		virtual HRESULT CTPFactoryAvailableEx(IDispatch* CTPFactoryInst)
		{
			CTPFactoryInst->QueryInterface(Office::IID_ICTPFactory, (void**)&m_pCTPFactory);
			return S_OK;
		};
		virtual HRESULT Tangram_Command(IDispatch* RibbonControl) = 0;
		virtual HRESULT Tangram_GetImage(BSTR strValue, IPictureDisp ** ppDispImage) { return S_OK; };
		virtual HRESULT Tangram_GetVisible(IDispatch* RibbonControl, VARIANT* varVisible) { return S_OK; };
		virtual HRESULT Tangram_OnLoad(IDispatch* RibbonControl) { return S_OK; };
		virtual HRESULT Tangram_GetItemCount(IDispatch* RibbonControl, long* nCount) { return S_OK; };
		virtual HRESULT Tangram_GetItemLabel(IDispatch* RibbonControl, long nIndex, BSTR* bstrLabel) { return S_OK; };
		virtual HRESULT Tangram_GetItemID(IDispatch* RibbonControl, long nIndex, BSTR* bstrID) { return S_OK; };

		virtual HRESULT OnUpdate(void) { return S_OK; };
		virtual HRESULT StartupComplete(void) { return S_OK; };
		virtual HRESULT BeginShutdown(void) { return S_OK; };
		virtual void WindowCreated(LPCTSTR strClassName, LPCTSTR strName, HWND hPWnd, HWND hWnd) {};
	};

	#define WM_TANGRAM_WEBNODEDOCCOMPLETE	(WM_USER + 0x00004001)
	#define WM_DESTROYTANGRAM				(WM_USER + 0x00004002)
	#define WM_SETHELPWND					(WM_USER + 0x00004003)
	#define WM_SETHELPWNDEX					(WM_USER + 0x00004004)
	#define WM_TABCHANGE					(WM_USER + 0x00004005)
	#define WM_TANGRAMMSG					(WM_USER + 0x00004006)
	#define WM_NAVIXTML						(WM_USER + 0x00004007)
	#define WM_GETTANGRAM					(WM_USER + 0x00004008)
	#define WM_MDICHILDMIN					(WM_USER + 0x00004009)
	#define WM_ACTIVEAPPXMLDOC				(WM_USER + 0x0000400a)
	#define WM_GETTANGRAMWINDOW				(WM_USER + 0x00006563)
	#define WM_OPENDOCUMENT					(WM_USER + 0x0000400b)
	#define WM_TANGRAMDATA					(WM_USER + 0x0000400c)
	#define WM_DOWNLOAD_MSG					(WM_USER + 0x0000400d)
	#define WM_VBAFORMCREATED				(WM_USER + 0x0000400e)
	#define WM_ECLIPSEMAINWNDCREATED		(WM_USER + 0x0000400f)
	#define WM_SWTCOMPONENTNOTIFY			(WM_USER + 0x00004010)
	#define WM_TANGRAMRESIZETNOTIFY			(WM_USER + 0x00004011)

	#define WM_TGM_SETACTIVEPAGE			WM_USER+122
	#define WM_TGM_SET_CAPTION				WM_USER+134	
	#define WM_GETNODEINFO					WM_USER+140
	#define WM_CREATETABPAGE				WM_USER+124
	#define WM_ACTIVETABPAGE				WM_USER+125
	#define WM_MODIFYTABPAGE				WM_USER+126
	#define WM_ADDTABPAGE					WM_USER+127
	#define WM_UPDATETANGRAMOBJ				WM_USER+112

	typedef enum ViewType
	{
		BlankView = 0x00000001,
		ActiveX = 0x00000002,
		Splitter = 0x00000004,
		TabbedWnd = 0x00000008,

		CLRCtrl = 0x00000010,
		CLRForm = 0x00000020,
		CLRWnd = 0x00000040,
		TangramView = 0x00000080,
	}ViewType;

	#define TGM_NAME				_T("name")
	#define TGM_CAPTION				_T("caption")
	#define TGM_NODE_TYPE			_T("id")
	#define TGM_CNN_ID				_T("cnnid")
	#define TGM_HEIGHT				_T("height")
	#define TGM_WIDTH				_T("width")
	#define TGM_STYLE				_T("style")
	#define TGM_ACTIVE_PAGE			_T("activepage")
	#define TGM_TAG					_T("tag")
	#define TGM_NODE				_T("node")

	#define TGM_ROWS				_T("rows")
	#define TGM_COLS				_T("cols")


	#define TGM_SPLITTER			_T("splitter")
	#define TGM_TABBED				_T("tab")

	#define TGM_SETTING_HEAD		_T("#$^&TANGRAM")
	#define TGM_SETTING_FOMRAT		_T("#$^&TANGRAM[%ld][%ld]")

	#define TGM_S_EXCEL_INPUT		1

	struct TElem
	{
		CComPtr<IXMLDOMElement> elem;
		CComPtr<IXMLDOMNodeList> nlist; int pos; long clen;
		TElem() : elem(0), nlist(0), pos(-1), clen(0) {}
		TElem(int _clen) : elem(0), nlist(0), pos(-1), clen(_clen) {}
		TElem(CComPtr<IXMLDOMElement> _elem) : elem(_elem), nlist(0), pos(-1), clen(0) { get(); }
		TElem(CComPtr<IXMLDOMNodeList> _nlist) : elem(0), nlist(_nlist), pos(0), clen(0) { get(); }
		void get()
		{
			if (pos != -1)
			{
				elem = 0;
				CComPtr<IXMLDOMNode> inode;
				nlist->get_item(pos, &inode);
				if (inode == 0) return;
				DOMNodeType type; inode->get_nodeType(&type);
				if (type != NODE_ELEMENT) return;
				CComQIPtr<IXMLDOMElement> e(inode);
				elem = e;
			}
			clen = 0;
			if (elem != 0)
			{
				CComPtr<IXMLDOMNodeList> iNodeList;
				elem->get_childNodes(&iNodeList);
				iNodeList->get_length(&clen);
			}
		}

		CString name() const
		{
			USES_CONVERSION;
			if (!elem) return _T("");
			CComBSTR bn;
			elem->get_tagName(&bn);
			CString strRet = _T("");
			strRet = OLE2T(bn);
			return strRet;
		}
		CString attr(const CString name, CString def = _T("")) const
		{
			if (!elem) return _T("");
			CComBSTR bname(name);
			CComVariant val(VT_EMPTY);
			elem->getAttribute(bname, &val);
			CString strRet = _T("");
			if (val.vt == VT_BSTR)
				strRet = OLE2T(val.bstrVal);
			else
				strRet = def;
			return strRet;
		}
		bool attrBool(const CString name, bool def) const
		{
			CString a = attr(name);
			if (a == _T("true") || a == _T("TRUE")) return true;
			else if (a == _T("false") || a == _T("FALSE")) return false;
			else return def;
		}
		int attrInt(const CString name, int def) const
		{
			USES_CONVERSION;
			//LPCSTR lpszName = LPCSTR(LPCTSTR(attr(name)));
			CString str;
			str.Format(_T("%d"), def);
			str = attr(name, str);
			//int res = def;

			return _ttoi(str.GetBuffer());
			//LPCWSTR a = A2W(lpszName);
			//int i, res=swscanf_s(a,L"%i",&i);
			//if (res==1) return i; 
			//else return def;
		}

		CString val() const
		{
			USES_CONVERSION;
			if (!elem) return _T("");
			CComVariant val(VT_EMPTY);
			elem->get_nodeTypedValue(&val);
			if (val.vt == VT_BSTR) return OLE2T(val.bstrVal);
			return _T("");
		}
		TElem subnode(const CString name) const
		{
			if (!elem) return TElem();
			for (TElem c = begin(); c != end(); c++)
			{
				if (c.name() == name) return c;
			}
			return TElem();
		}
		CString subval(const CString name) const
		{
			if (!elem) return _T("");
			TElem c = subnode(name);
			return c.val();
		}
		TElem begin() const
		{
			if (!elem) return TElem();
			CComPtr<IXMLDOMNodeList> iNodeList;
			elem->get_childNodes(&iNodeList);
			return TElem(iNodeList);
		}
		TElem end() const
		{
			return TElem(clen);
		}
		TElem operator++(int)
		{
			if (pos != -1) { pos++; get(); }
			return *this;
		}
		bool operator!=(const TElem &e) const
		{
			return pos != e.clen;
		}
	};
};

using namespace TangramCommon;