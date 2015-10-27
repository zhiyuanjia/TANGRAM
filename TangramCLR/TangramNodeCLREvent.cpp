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

#include "stdafx.h"
#include "TangramNodeCLREvent.h"

using namespace System::Runtime::InteropServices;

CTangramCoreCLREvent::CTangramCoreCLREvent()
{
}

CTangramCoreCLREvent::~CTangramCoreCLREvent()
{
}
//
//void CTangramCoreCLREvent::OnDocumentComplete(IDispatch* pDocdisp, BSTR bstrUrl)
//{
//	TangramCLR::TangramCore^ pManager = TangramCLR::TangramCore::GetTangramCore();
//	pManager->Fire_OnDocumentComplete(Marshal::GetObjectForIUnknown((IntPtr)pDocdisp), BSTR2STRING(bstrUrl));
//}

void CTangramCoreCLREvent::OnExtendComplete(long hWnd, BSTR bstrUrl, ITangramNode* pRootNode)
{
	TangramCLR::TangramCore^ pManager = TangramCLR::TangramCore::GetTangramCore();
	TangramNode^ _pRootNode = theAppProxy._createObject<ITangramNode, TangramNode>(pRootNode);
	IntPtr nHandle = (IntPtr)hWnd;
	pManager->Fire_OnExtendComplete(nHandle, BSTR2STRING(bstrUrl), _pRootNode);
}


void CTangramCoreCLREvent::OnClose()
{
	TangramCLR::TangramCore::GetTangramCore()->Fire_OnClose();
}

CTangramNodeCLREvent::CTangramNodeCLREvent()
{
}


CTangramNodeCLREvent::~CTangramNodeCLREvent()
{
}

void CTangramNodeCLREvent::OnExtendComplete(ITangramNode* pNode)
{
	m_pTangramNode->Fire_ExtendComplete(m_pTangramNode);
}

void CTangramNodeCLREvent::OnDocumentComplete(IDispatch* pDocdisp, BSTR bstrUrl)
{
	Object^ pObj = reinterpret_cast<Object^>(Marshal::GetObjectForIUnknown((System::IntPtr)(pDocdisp)));
	m_pTangramNode->Fire_OnDocumentComplete(m_pTangramNode, pObj, BSTR2STRING(bstrUrl));
}

void CTangramNodeCLREvent::OnDestroy()
{
	m_pTangramNode->Fire_OnDestroy(m_pTangramNode);
}

void CTangramNodeCLREvent::OnNodeAddInCreated(IDispatch* pAddIndisp, BSTR bstrAddInID, BSTR bstrAddInXml)
{
	Object^ pAddinObj = reinterpret_cast<Object^>(Marshal::GetObjectForIUnknown((System::IntPtr)(pAddIndisp)));
	m_pTangramNode->Fire_NodeAddInCreated(m_pTangramNode, pAddinObj, BSTR2STRING(bstrAddInID), BSTR2STRING(bstrAddInXml));
}

void CTangramNodeCLREvent::OnNodeAddInsCreated()
{
	m_pTangramNode->Fire_NodeAddInsCreated(m_pTangramNode);
}
