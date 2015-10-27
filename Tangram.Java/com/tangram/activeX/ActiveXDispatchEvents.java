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
package com.tangram.activeX;

import com.tangram.Dispatch;
import com.tangram.DispatchEvents;
import com.tangram.InvocationProxy;

/**
 * RELEASE 1.12 EXPERIMENTAL.
 * <p>
 * Use this exactly like the DispatchEvents class. This class plugs in an
 * ActiveXInvocationProxy instead of an InvocationProxy. It is the
 * ActiveXInvocationProxy that implements the reflection calls and invoke the
 * found java event callbacks. See ActiveXInvocationProxy for details.
 * 
 * 
 */
public class ActiveXDispatchEvents extends DispatchEvents {

	/**
	 * This is the most commonly used constructor.
	 * <p>
	 * Creates the event callback linkage between the the MS program represented
	 * by the Dispatch object and the Java object that will receive the
	 * callback.
	 * 
	 * @param sourceOfEvent
	 *            Dispatch object who's MS app will generate callbacks
	 * @param eventSink
	 *            Java object that wants to receive the events
	 */
	public ActiveXDispatchEvents(Dispatch sourceOfEvent, Object eventSink) {
		super(sourceOfEvent, eventSink, null);
	}

	/**
	 * None of the samples use this constructor.
	 * <p>
	 * Creates the event callback linkage between the the MS program represented
	 * by the Dispatch object and the Java object that will receive the
	 * callback.
	 * 
	 * @param sourceOfEvent
	 *            Dispatch object who's MS app will generate callbacks
	 * @param eventSink
	 *            Java object that wants to receive the events
	 * @param progId
	 *            ???
	 */
	public ActiveXDispatchEvents(Dispatch sourceOfEvent, Object eventSink,
			String progId) {
		super(sourceOfEvent, eventSink, progId, null);
	}

	/**
	 * Creates the event callback linkage between the the MS program represented
	 * by the Dispatch object and the Java object that will receive the
	 * callback.
	 * 
	 * <pre>
	 * &gt;ActiveXDispatchEvents de = 
	 * 			new ActiveXDispatchEvents(someDispatch,someEventHAndler,
	 * 				&quot;Excel.Application&quot;,
	 * 				&quot;C:\\Program Files\\Microsoft Office\\OFFICE11\\EXCEL.EXE&quot;);
	 * 
	 * @param sourceOfEvent Dispatch object who's MS app will generate callbacks
	 * @param eventSink Java object that wants to receive the events
	 * @param progId , mandatory if the typelib is specified
	 * @param typeLib The location of the typelib to use
	 * 
	 */
	public ActiveXDispatchEvents(Dispatch sourceOfEvent, Object eventSink,
			String progId, String typeLib) {
		super(sourceOfEvent, eventSink, progId, typeLib);
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see com.jacob.com.DispatchEvents#getInvocationProxy(java.lang.Object)
	 */
	protected InvocationProxy getInvocationProxy(Object pTargetObject) {
		InvocationProxy newProxy = new ActiveXInvocationProxy();
		newProxy.setTarget(pTargetObject);
		return newProxy;
	}

}
