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

#include "StdAfx.h"
#include "TangramXmlParse.h"
CTangramXmlParse::CTangramXmlParse(void)
{
	Initialize();
	elem = NULL;	
}

CTangramXmlParse::~CTangramXmlParse(void)
{
	Clear();
	//if (m_pUnknown) 
	//{
	//	m_pUnknown->Release();
	//	m_pUnknown = NULL;
	//}
	elem = NULL;
}


void CTangramXmlParse::_CTangramXmlParse(CComPtr<IXMLDOMElement> _elem)
{
	Initialize();
	elem = _elem;
	//m_pUnknown = NULL;
	//elem->QueryInterface(IID_IUnknown,(void**)&m_pUnknown);

	CComPtr<IXMLDOMNodeList> pList = NULL;
	if (_elem->get_childNodes(&pList) == S_OK)
	{
		_CTangramXmlParse(pList);
	}
}

void CTangramXmlParse::_CTangramXmlParse(CComPtr<IXMLDOMNode> _node)
{
	CComPtr<IXMLDOMElement> pElem = NULL;
	if (_node->QueryInterface<IXMLDOMElement>(&pElem) == S_OK)
	{		
		_CTangramXmlParse(pElem);		
	}
}

void CTangramXmlParse::_CTangramXmlParse(CComPtr<IXMLDOMNodeList> _nlist)
{
	long nLen = 0;
	_nlist->get_length(&nLen);
	for(long i = 0; i<nLen; i++)
	{
		CComPtr<IXMLDOMNode> pNode = NULL;
		CComPtr<IXMLDOMElement> pElem = NULL;
		if (_nlist->get_item(i,&pNode) == S_OK)
		{
			if (pNode->QueryInterface<IXMLDOMElement>(&pElem) == S_OK)
			{
				//m_aChildElements.Add(new CTangramXmlParse(pElem));
				m_aChildElements.push_back(new CTangramXmlParse(pElem));
			}
		}
	}
}

CTangramXmlParse* CTangramXmlParse::GetChild(int nIndex)
{
	if (nIndex<0 || nIndex>= GetCount()) 
		return NULL;
	return m_aChildElements[nIndex];
}

CTangramXmlParse* CTangramXmlParse::GetChild(CString strName)
{
	for(int i = 0; i<GetCount(); i++)
	{
		if (m_aChildElements[i]->name().CompareNoCase(strName) == 0)
			return m_aChildElements[i];
	}
	return NULL;
}

CTangramXmlParse& CTangramXmlParse::operator[](CString strName)
{
	CTangramXmlParse* pXml = GetChild(strName);
	if (pXml != NULL) return *pXml;
	//ASSERT(FALSE);//don't have the node.
	return *this;
}

CTangramXmlParse& CTangramXmlParse::operator[](int nIndex)
{
	CTangramXmlParse* pXml = GetChild(nIndex);
	if (pXml != NULL) return *pXml;
	//ASSERT(FALSE);//index is overflow
	return *this;	
}

CTangramXmlParse* CTangramXmlParse::FindItem(LPCTSTR strItemname)
{
	CTangramXmlParse* pItem = NULL;

	//if (name().CompareNoCase(strItemname) == 0)
	//{
	//	pItem = this;
	//}

	if (pItem == NULL)
	{
		for(int i = 0; i<GetCount(); i++)
		{
			CTangramXmlParse* pI = GetChild(i);
			if (pI->name().CompareNoCase(strItemname) == 0)
			{
				pItem = pI;
				break;
			}		
		}
	}

	if (pItem == NULL)
	{
		for(int i = 0; i<GetCount(); i++)
		{
			CTangramXmlParse* pX = GetChild(i)->FindItem(strItemname);
			
			if (pX != NULL)
			{
				pItem = pX;
				break;
			}
		}
	}
	return pItem;
}

bool CTangramXmlParse::operator==(CTangramXmlParse& nItem)
{
	IUnknown* pUn1 = NULL;
	elem->QueryInterface(IID_IUnknown,(void**)&pUn1);

	IUnknown* pUn2 = NULL;
	nItem.elem->QueryInterface(IID_IUnknown,(void**)&pUn2);

	bool bRet = (pUn2 == pUn1);

	pUn1->Release();
	pUn2->Release();

	return bRet;
}

void CTangramXmlParse::Initialize()
{
	m_strFile = _T("");
	m_bCanSave = false;
}

CTangramXmlParse* CTangramXmlParse::_FindParseByEle(CTangramXmlParse* _pParent, IUnknown* pEle)
{
	IUnknown* pUn1 = NULL;
	_pParent->elem->QueryInterface(IID_IUnknown,(void**)&pUn1);
	if (pUn1 == pEle)
	{
		pUn1->Release();
		return _pParent;
	}
	pUn1->Release();

	int c = (int)_pParent->GetCount();

	for(int i = 0; i<c; i++)
	{
		CTangramXmlParse* pValue = _FindParseByEle(_pParent->m_aChildElements[i], pEle);
		if (pValue != NULL) return pValue;
	}
	return NULL;
}



CTangramXmlParse* CTangramXmlParse::GetParseByElement(IXMLDOMElement* pEle)
{
	if (elem == NULL) return NULL;
	CTangramXmlParse* pParse = NULL;
	IUnknown* pUnk = NULL;

	if (pEle->QueryInterface(IID_IUnknown,(void**)&pUnk) == S_OK)
	{
		pParse = _FindParseByEle(this,pUnk);
		pUnk->Release(); 
	}
	return pParse;
}

CTangramXmlParse* CTangramXmlParse::AddNode(CString name)
{
	CComPtr<IXMLDOMDocument> pDoc = NULL;
	CComPtr<IXMLDOMElement> pElement = NULL;
	if (elem->get_ownerDocument(&pDoc) == S_OK)
	{			
		pDoc->createElement(CComBSTR(name),&pElement);
		if (pElement != NULL)
		{
			if (elem->appendChild(pElement,NULL) == S_OK)
			{
				//return (int)m_aChildElements.Add(new CTangramXmlParse(pElement));
				CTangramXmlParse* pTangramXmlParse = new CTangramXmlParse(pElement);
				m_aChildElements.push_back(pTangramXmlParse);
				return pTangramXmlParse;//GetCount();
			}
		}
	}
	return NULL;
}

HRESULT CTangramXmlParse::RemoveNode(CString name)
{
	CTangramXmlParse* pNode = GetChild(name);
	return RemoveNode(pNode);
}

HRESULT CTangramXmlParse::RemoveNode(CTangramXmlParse* pNode)
{
	if (pNode == NULL) return E_FAIL;
	
	HRESULT hr = elem->removeChild(pNode->elem,NULL);
	if (hr == S_OK)
	{
		//for(int i = 0; i<GetCount(); i++)
		//{
		//	if (m_aChildElements[i] == pNode)
		//	{
		//		m_aChildElements.RemoveAt(i);
		//		//m_aChildElements.erase(m_aChildElements.at(i));
		//		delete pNode;
		//		break;
		//	}
		//}

		vector<CTangramXmlParse*>::iterator it;
		//for(int i = 0; i<GetCount(); i++)
		for(it = m_aChildElements.begin(); it != m_aChildElements.end(); it++)
		{
			if (*it == pNode)
			{
				//m_aChildElements.RemoveAt(i);
				m_aChildElements.erase(it);
				delete pNode;
				break;
			}
		}
	}
	return hr;
}

HRESULT CTangramXmlParse::RemoveNode(int index)
{
	if (index>=GetCount()) return -1;
	CTangramXmlParse* pNode = m_aChildElements[index];
	return RemoveNode(pNode);	
}

HRESULT CTangramXmlParse::RemoveSubNodes()
{
	for(int i = GetCount(); i>=0; i--)
		RemoveNode(i);
	return S_OK;
}

bool CTangramXmlParse::put_text(CString text)
{		
	CComPtr<IXMLDOMNodeList> pSubNodeList;
	elem->get_childNodes(&pSubNodeList);
	long sublen;
	bool bFound = false;
	pSubNodeList->get_length(&sublen);
	for(long j = 0; j<sublen; j++)
	{			
		CComPtr<IXMLDOMNode> pChildNode = NULL;
		if (pSubNodeList->get_item(j,&pChildNode) == S_OK)
		{
			BSTR subname = NULL;
			pChildNode->get_nodeName(&subname);
			if (wcscmp(subname,L"#text") == 0)
			{
				pChildNode->put_text(CComBSTR(text));
				bFound = true;		
				break;
			}
		}
	}
	if (!bFound) elem->put_text(CComBSTR(text));
	return true;
}

bool CTangramXmlParse::put_attr(CString name,CString value)
{
	return (elem->setAttribute(CComBSTR(name),CComVariant(CComBSTR(value))) == S_OK);
}

bool CTangramXmlParse::put_attr(CString name,int value)
{
	CString strInfo;
	strInfo.Format(_T("%d"),value);
	return put_attr(name,strInfo);	
}

bool CTangramXmlParse::put_attr(CString name,__int64 value)
{
	CString strInfo;
	strInfo.Format(_T("%I64d"),value);
	return put_attr(name,strInfo);	
}

bool CTangramXmlParse::put_attr(CString name,bool value)
{
	CString strInfo = _T("false");
	if (value) strInfo = _T("true");		
	return put_attr(name,strInfo);
}

CString CTangramXmlParse::name()
{
	if (!elem) return _T("");
	CComBSTR bn; 
	elem->get_tagName(&bn);
	return CString(bn);
}

CString CTangramXmlParse::xml()
{
	if (!elem) return _T("");
	CComBSTR bn; 
	elem->get_xml(&bn);	
	return CString(bn);
}

CString CTangramXmlParse::text()
{
	if (!elem) return _T("");
	CComPtr<IXMLDOMNodeList> pList = NULL;
	if (elem->get_childNodes(&pList) == S_OK)
	{
		long nLen = 0;
		pList->get_length(&nLen);
		for(long i = 0; i<nLen; i++)
		{
			CComPtr<IXMLDOMNode> pNode = NULL;
			if (pList->get_item(i,&pNode) == S_OK)
			{
				BSTR name = NULL;
				pNode->get_nodeName(&name);
				if (CString(name).CompareNoCase(_T("#text")) == 0)
				{
					BSTR value = NULL;
					pNode->get_text(&value);
					return CString(value);
				}
			}
		}
	}
	return _T("");
}

CString CTangramXmlParse::attr(const CString name,CString def) const
{ 
	if (!elem) return _T("");
	CComBSTR bname(name);
	CComVariant val(VT_EMPTY);
	elem->getAttribute(bname,&val);

	if (val.vt==VT_BSTR) 
	{
		return CString(val.bstrVal);
	}
	return def;
}

DWORD CTangramXmlParse::attr(const CString name,DWORD def) const
{
	if(!elem) return 0;
	CComBSTR bname(name);
	CComVariant vall(VT_EMPTY);
	elem->getAttribute(bname,&vall);
	if(vall.vt==VT_BSTR)
	{
		//DWORD rr = DWORD();
		CString s = _T("");
		s += vall.bstrVal;
		DWORD rr = _ttoi(s);
		return rr;
	}
	return def;
}

//HKEY CTangramXmlParse::attr(const CString name) const
//{
//	if(!elem) return 0;
//}

bool CTangramXmlParse::attrBool(const CString name,bool def) const
{ 
	CString a = attr(name,_T(""));
	if (a.CompareNoCase(_T("true")) == 0) return true;
	else if (a.CompareNoCase(_T("false")) == 0) return false;
	else return def;
}

int CTangramXmlParse::attrInt(const CString name, int def) const
{ 
	CString str = attr(name,_T(""));
	if (str.IsEmpty()) return def;
	return _ttoi(str);
}

__int64 CTangramXmlParse::attrInt64(const CString name, __int64 def) const
{ 
	CString str = attr(name,_T(""));
	if (str.IsEmpty()) return def;
	return _ttoi64(str);
}

CString CTangramXmlParse::val() const
{ 
	USES_CONVERSION;
	if (!elem) return _T("");
	CComVariant val(VT_EMPTY);
	elem->get_nodeTypedValue(&val);
	if (val.vt==VT_BSTR) return OLE2T(val.bstrVal);
	return _T("");
}

//ÐÂÔö
DWORD CTangramXmlParse::vall() const
{ 
	USES_CONVERSION;
	if (!elem) return 0;
	CComVariant val(VT_EMPTY);
	elem->get_nodeTypedValue(&val);
	if (val.vt==VT_BSTR) return DWORD(val.bstrVal);
	return 0;
}

bool CTangramXmlParse::LoadXml(CString strXML)
{
	//HRESULT hr = CoInitialize(NULL);
	if (m_pDoc != NULL) m_pDoc.Release();
	if (CoCreateInstance(CLSID_DOMDocument, NULL, CLSCTX_INPROC_SERVER, IID_IXMLDOMDocument, (void**)&m_pDoc) == S_OK)	
	{
		VARIANT_BOOL vb;
		if (m_pDoc->loadXML(CComBSTR(strXML),&vb) == S_OK)		
		{
			if (!vb) 
			{
				return false;
			}
			CComPtr<IXMLDOMElement> pEle;
			if (m_pDoc->get_documentElement(&pEle) == S_OK)
			{
				Clear();
				_CTangramXmlParse(pEle);
				return true;
			}
		}
	}
	return false;
}

bool CTangramXmlParse::LoadFile(CString strFile)
{
	HRESULT hr = CoInitializeEx(NULL,0);
	if (m_pDoc != NULL) m_pDoc.Release();
	if (CoCreateInstance(CLSID_DOMDocument, NULL, CLSCTX_INPROC_SERVER, IID_IXMLDOMDocument, (void**)&m_pDoc) == S_OK)	
	{
		CComVariant file(strFile);
		VARIANT_BOOL vb;
		if (m_pDoc->load(file,&vb) == S_OK)
		{
			if (!vb) 
			{
				return false;
			}
			CComPtr<IXMLDOMElement> pEle;
			if (m_pDoc->get_documentElement(&pEle) == S_OK)
			{
				Clear();
				_CTangramXmlParse(pEle);

				m_bCanSave = true;
				m_strFile = strFile;

				return true;
			}
		}
	}
	return false;
}
bool CTangramXmlParse::SaveFile(CString strFile)
{
	if (m_pDoc == NULL)
	{
		elem->get_ownerDocument(&m_pDoc);
	}

	if (strFile.Compare(_T("")) == 0)
	{
		if (m_bCanSave)
		{
			strFile = m_strFile;
		}
	}

	CComVariant var(strFile);
	return (m_pDoc->save(var) == S_OK);
}

bool CTangramXmlParse::Reflash()
{
	Clear();
	_CTangramXmlParse(elem);
	return true;
}

bool CTangramXmlParse::Clear()
{
	for(int i = 0; i<GetCount(); i++)
	{
		delete m_aChildElements[i];
	}
	//m_aChildElements.RemoveAll();
	m_aChildElements.clear();
	return true;
}