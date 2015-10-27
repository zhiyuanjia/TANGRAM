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
#include "TangramObj.h"
#include "TangramProxy.h"

TangramCLR::TangramProxy::TangramProxy(void)
{
	m_pCurrentNode = NULL;
	m_CtrlEventDic = nullptr;
	theAppProxy.m_pTangramProxy = this;
}

void TangramCLR::TangramProxy::AttachHandleDestroyedEvent(Control^ pCtrl)
{
	pCtrl->HandleDestroyed += gcnew EventHandler(theAppProxy.m_pTangramProxy, &TangramCLR::TangramProxy::OnHandleDestroyed);
}

void TangramCLR::TangramProxy::AttachEvent(Control^ pCtrl, TangramEventType EventType)
{
	if (m_CtrlEventDic == nullptr)
		m_CtrlEventDic = gcnew Dictionary < Control^, String^ > ;
	String^ strVal = L"";
	int nPos = -1;
	CString str = _T("");
	str.Format(_T(",%d,"),EventType);
	String^ _strKey = BSTR2STRING(str);
	if (m_CtrlEventDic->TryGetValue(pCtrl, strVal))
	{
		nPos = strVal->IndexOf(_strKey);
		if (nPos != -1)
			return;
		else
		{
			strVal += _strKey;
			m_CtrlEventDic[pCtrl] = strVal;
		}
	}
	else
	{
		m_CtrlEventDic->Add(pCtrl, _strKey);
	}
	switch (EventType)
	{
	case TangramClick:
		pCtrl->Click += gcnew EventHandler(this, &TangramProxy::OnClick);
		break;
	case TangramDoubleClick:
		pCtrl->DoubleClick += gcnew EventHandler(this, &TangramProxy::OnDoubleClick);
		break;
	case TangramEnter:
		pCtrl->Enter += gcnew EventHandler(this, &TangramProxy::OnEnter);
		break;
	case TangramLeave:
		pCtrl->Leave += gcnew EventHandler(this, &TangramProxy::OnLeave);
		break;
	case TangramEnabledChanged:
		pCtrl->EnabledChanged += gcnew EventHandler(this, &TangramProxy::OnEnabledChanged);
		break;
	case TangramLostFocus:
		pCtrl->LostFocus += gcnew EventHandler(this, &TangramProxy::OnLostFocus);
		break;
	case TangramGotFocus:
		pCtrl->GotFocus += gcnew EventHandler(this, &TangramProxy::OnGotFocus);
		break;
	case TangramKeyUp:
		pCtrl->KeyUp += gcnew KeyEventHandler(this, &TangramProxy::OnKeyUp);
		break;
	case TangramKeyDown:
		pCtrl->KeyDown += gcnew KeyEventHandler(this, &TangramProxy::OnKeyDown);
		break;
	case TangramKeyPress:
		pCtrl->KeyPress += gcnew KeyPressEventHandler(this, &TangramProxy::OnKeyPress);
		break;
	case TangramMouseClick:
		pCtrl->MouseClick += gcnew MouseEventHandler(this, &TangramProxy::OnMouseClick);
		break;// = 0x0000000a,
	case TangramMouseDoubleClick:
		pCtrl->MouseDoubleClick += gcnew MouseEventHandler(this, &TangramProxy::OnMouseDoubleClick);
		break;// = 0x0000000b,
	case TangramMouseDown:
		pCtrl->MouseDown += gcnew MouseEventHandler(this, &TangramProxy::OnMouseDown);
		break;// = 0x0000000c,
	case TangramMouseEnter:
		pCtrl->MouseEnter += gcnew EventHandler(this, &TangramProxy::OnMouseEnter);
		break;// = 0x0000000d,
	case TangramMouseHover:
		pCtrl->MouseHover += gcnew EventHandler(this, &TangramProxy::OnMouseHover);
		break;// = 0x0000000e,
	case TangramMouseLeave:
		pCtrl->MouseLeave += gcnew EventHandler(this, &TangramProxy::OnMouseLeave);
		break;// = 0x0000000f,
	case TangramMouseMove:
		pCtrl->MouseMove += gcnew MouseEventHandler(this, &TangramProxy::OnMouseMove);
		break;// = 0x00000010,
	case TangramMouseUp:
		pCtrl->MouseUp += gcnew MouseEventHandler(this, &TangramProxy::OnMouseUp);
		break;// = 0x00000011,
	case TangramMouseWheel:
		pCtrl->MouseWheel += gcnew MouseEventHandler(this, &TangramProxy::OnMouseWheel);
		break;// = 0x00000012,
	case TangramTextChanged:
		pCtrl->TextChanged += gcnew EventHandler(this, &TangramProxy::OnTextChanged);
		break;// = 0x00000013,
	case TangramVisibleChanged:
		pCtrl->VisibleChanged += gcnew EventHandler(this, &TangramProxy::OnVisibleChanged);
		break;// = 0x00000014,
	case TangramClientSizeChanged:
		pCtrl->SizeChanged += gcnew EventHandler(this, &TangramProxy::OnSizeChanged);
		break;// = 0x00000015,
	case TangramSizeChanged:
		pCtrl->ClientSizeChanged += gcnew EventHandler(this, &TangramProxy::OnClientSizeChanged);
		break;// = 0x00000016,
	case TangramParentChanged:
		pCtrl->ParentChanged += gcnew EventHandler(this, &TangramProxy::OnParentChanged);
		break;// = 0x00000017,
	case TangramResize:
		pCtrl->Resize += gcnew EventHandler(this, &TangramProxy::OnResize);
		break;// = 0x00000018
	}
}

void TangramCLR::TangramProxy::DelegateEvent(Control^ pObj, ITangramNode* pNode)
{
	m_pCurrentNode = pNode;
	if (pNode)
	{
		CComPtr<ITangram> pTangram;
		pNode->get_Tangram(&pTangram);
		if (pTangram)
		{
			VARIANT_BOOL b = FALSE;
			pTangram->get_EnableSinkCLRCtrlCreatedEvent(&b);
			if (b == TRUE)
			{
				pObj->HandleCreated += gcnew EventHandler(this,&TangramProxy::Obj_HandleCreated);
			}
		}
	}
}

void TangramCLR::TangramProxy::Obj_HandleCreated(Object^ sender, EventArgs^ e)
{
	Control^ pCtrl = (Control^)sender;
	HWND hWnd = (HWND)pCtrl->Handle.ToInt64();

	if (this->m_pCurrentNode)
	{
		LONGLONG h = 0;
		m_pCurrentNode->get_Handle(&h);
		ITangramFrame* pFrame = NULL;
		m_pCurrentNode->get_Frame(&pFrame);
		pFrame->get_HWND(&h);
		CtrlInfo m_CtrlInfo;
		try
		{
			m_CtrlInfo.m_pCtrlDisp = (IDispatch*)Marshal::GetIDispatchForObject(pCtrl).ToPointer();
			m_CtrlInfo.m_hWnd = (HWND)pCtrl->Handle.ToInt64();
			m_CtrlInfo.m_strName = STRING2BSTR(pCtrl->Name);
			ITangram* pTangram = NULL;
			m_pCurrentNode->get_Tangram(&pTangram);
			m_CtrlInfo.m_pTangram = pTangram;
			m_CtrlInfo.m_pNode = m_pCurrentNode;
			::SendMessage((HWND)h, WM_TANGRAMMSG, (WPARAM)&m_CtrlInfo, 2048);;
		}
		catch (InvalidCastException^ e)
		{

		}
	}

	Control::ControlCollection^ pControls = pCtrl->Controls;

	for (int i = 0; i < pControls->Count; i++)
	{
		Obj_HandleCreated(pControls[i], e);
	}
}

//void TangramCLR::TangramProxy::Obj_HandleCreated(Object^ sender, EventArgs^ e)
//{
//	Control^ pCtrl = (Control^)sender;
//	HWND hWnd = (HWND)pCtrl->Handle.ToInt64();
//
//	if (this->m_pCurrentNode)
//	{
//		LONGLONG h = 0;
//		m_pCurrentNode->get_Handle(&h);
//		CtrlInfo m_CtrlInfo;
//		try
//		{
//			m_CtrlInfo.m_pCtrlDisp = (IDispatch*)Marshal::GetIDispatchForObject(pCtrl).ToPointer();
//			m_CtrlInfo.m_hWnd = (HWND)pCtrl->Handle.ToInt64();
//			m_CtrlInfo.m_strName = STRING2BSTR(pCtrl->Name);
//			::SendMessage((HWND)h, WM_TANGRAMMSG, (WPARAM)&m_CtrlInfo, 2048);;
//		}
//		catch (InvalidCastException^ e)
//		{
//
//		}
//	}
//
//	Control::ControlCollection^ pControls = pCtrl->Controls;
//
//	for (int i = 0; i < pControls->Count; i++)
//	{
//		Obj_HandleCreated(pControls[i],e);
//	}
//}

void TangramCLR::TangramProxy::OnEvent(Object ^sender, EventArgs ^e, TangramEventType nType)
{
	if (e == nullptr)
		return;
	Control^ pCtrl = ((Control^)sender);
	HWND hWnd = (HWND)pCtrl->Handle.ToInt64();
	ObjectEventInfo* pObjectEventInfo = (ObjectEventInfo*)::GetWindowLongPtr(hWnd, GWLP_USERDATA);
	if (pObjectEventInfo)
	{
		map<TangramEventType, ITangramEvent*>::iterator it;
		map<LONGLONG, ObjectEventInfo2*>::iterator it2;
		try
		{
			IDispatch* pdisp = (IDispatch*)Marshal::GetIDispatchForObject(e).ToPointer();
			IDispatch* pDisp = (IDispatch*)Marshal::GetIDispatchForObject(pCtrl).ToPointer();
			for (it2 = pObjectEventInfo->m_mapEventObj2.begin(); it2 != pObjectEventInfo->m_mapEventObj2.end();it2++)
			{
				it = it2->second->m_mapEventObj.find(nType);
				if (it != it2->second->m_mapEventObj.end())
					theAppProxy.m_pProxy->OnEvent(it->second, pDisp, pdisp);
			}
		}
		catch (InvalidCastException^ e)
		{
			String^ strMsg = e->Message;
		}
		finally
		{

		}
	}
}

void TangramCLR::TangramProxy::OnClick(Object ^sender, EventArgs ^e)
{
	OnEvent(sender, e, TangramClick);
}

void TangramCLR::TangramProxy::OnDoubleClick(Object ^sender, EventArgs ^e)
{
	OnEvent(sender, e, TangramDoubleClick);
}

void TangramCLR::TangramProxy::OnEnter(Object ^sender, EventArgs ^e)
{
	OnEvent(sender, e, TangramEnter);
}

void TangramCLR::TangramProxy::OnLeave(Object ^sender, EventArgs ^e)
{
	OnEvent(sender, e, TangramLeave);
}

void TangramCLR::TangramProxy::OnEnabledChanged(Object ^sender, EventArgs ^e)
{
	OnEvent(sender, e, TangramEnabledChanged);
}

void TangramCLR::TangramProxy::OnLostFocus(Object ^sender, EventArgs ^e)
{
	OnEvent(sender, e, TangramLostFocus);
}

void TangramCLR::TangramProxy::OnGotFocus(Object ^sender, EventArgs ^e)
{
	OnEvent(sender, e, TangramGotFocus);
}

void TangramCLR::TangramProxy::OnKeyUp(Object ^sender, KeyEventArgs ^e)
{
	OnEvent(sender, e, TangramKeyUp);
}

void TangramCLR::TangramProxy::OnKeyDown(Object ^sender, KeyEventArgs ^e)
{
	OnEvent(sender, e, TangramKeyDown);
}

void TangramCLR::TangramProxy::OnKeyPress(Object ^sender, KeyPressEventArgs ^e)
{
	OnEvent(sender, e, TangramKeyPress);
}

void TangramCLR::TangramProxy::OnMouseClick(Object ^sender, MouseEventArgs ^e)
{
	OnEvent(sender, e, TangramMouseClick);
}


void TangramCLR::TangramProxy::OnMouseDoubleClick(Object ^sender, MouseEventArgs ^e)
{
	OnEvent(sender, e, TangramMouseDoubleClick);
}


void TangramCLR::TangramProxy::OnMouseDown(Object ^sender, MouseEventArgs ^e)
{
	OnEvent(sender, e, TangramMouseDown);
}


void TangramCLR::TangramProxy::OnMouseEnter(Object ^sender, EventArgs ^e)
{
	OnEvent(sender, e, TangramMouseEnter);
}


void TangramCLR::TangramProxy::OnMouseHover(Object ^sender, EventArgs ^e)
{
	OnEvent(sender, e, TangramMouseHover);
}


void TangramCLR::TangramProxy::OnMouseMove(Object ^sender, MouseEventArgs ^e)
{
	OnEvent(sender, e, TangramMouseMove);
}


void TangramCLR::TangramProxy::OnMouseLeave(Object ^sender, EventArgs ^e)
{
	OnEvent(sender, e, TangramMouseLeave);
}


void TangramCLR::TangramProxy::OnMouseUp(Object ^sender, MouseEventArgs ^e)
{
	OnEvent(sender, e, TangramMouseUp);
}


void TangramCLR::TangramProxy::OnMouseWheel(Object ^sender, MouseEventArgs ^e)
{
	OnEvent(sender, e, TangramMouseWheel);
}


void TangramCLR::TangramProxy::OnTextChanged(Object ^sender, EventArgs ^e)
{
	OnEvent(sender, e, TangramTextChanged);
}


void TangramCLR::TangramProxy::OnVisibleChanged(Object ^sender, EventArgs ^e)
{
	OnEvent(sender, e, TangramVisibleChanged);
}


void TangramCLR::TangramProxy::OnSizeChanged(Object ^sender, EventArgs ^e)
{
	OnEvent(sender, e, TangramSizeChanged);
}


void TangramCLR::TangramProxy::OnClientSizeChanged(Object ^sender, EventArgs ^e)
{
	OnEvent(sender, e, TangramClientSizeChanged);
}


void TangramCLR::TangramProxy::OnParentChanged(Object ^sender, EventArgs ^e)
{
	OnEvent(sender, e, TangramParentChanged);
}


void TangramCLR::TangramProxy::OnResize(Object ^sender, EventArgs ^e)
{
	OnEvent(sender, e, TangramResize);
}

void TangramCLR::TangramProxy::OnHandleDestroyed(Object ^sender, EventArgs ^e)
{
	Control^ pCtrl = ((Control^)sender);
	HWND hWnd = (HWND)pCtrl->Handle.ToInt64();
	ObjectEventInfo* pInfo = (ObjectEventInfo*)::GetWindowLongPtr(hWnd, GWLP_USERDATA);
	if (pInfo)
	{
		map<LONGLONG, ObjectEventInfo2*>::iterator it;
		for (it = pInfo->m_mapEventObj2.begin(); it != pInfo->m_mapEventObj2.end(); it++)
		{
			it->second->m_mapEventObj.clear();
			delete it->second;
		}
		pInfo->m_mapEventObj2.clear();
		delete pInfo;
	}
}
