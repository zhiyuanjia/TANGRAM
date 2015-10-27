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
package com.tangram;

/**
 * @version $Id$
 * @author joe
 * 
 * DispatchEvents wraps this class around any event handlers before making the
 * JNI call that sets up the link with EventProxy. This means that
 * EventProxy.cpp just calls invoke(String,Variant[]) against the instance of
 * this class. Then this class does reflection against the event listener to
 * call the actual event methods. The event methods can return void or return a
 * Variant. Any value returned will be passed back to the calling windows module
 * by the Jacob JNI layer.
 * <p>
 * 
 * The void returning signature is the standard legacy signature. The Variant
 * returning signature was added in 1.10 to support event handlers returning
 * values.
 * 
 */
public abstract class InvocationProxy {

	/**
	 * the object we will try and forward to.
	 */
	protected Object mTargetObject = null;

	/**
	 * dummy constructor for subclasses that don't actually wrap anything and
	 * just want to override the invoke() method
	 */
	protected InvocationProxy() {
		super();
	}

	/**
	 * The method actually invoked by EventProxy.cpp. The method name is
	 * calculated by the underlying JNI code from the MS windows Callback
	 * function name. The method is assumed to take an array of Variant objects.
	 * The method may return a Variant or be a void. Those are the only two
	 * options that will not blow up.
	 * <p>
	 * Subclasses that override this should make sure mTargetObject is not null
	 * before processing.
	 * 
	 * @param methodName
	 *            name of method in mTargetObject we will invoke
	 * @param targetParameters
	 *            Variant[] that is the single parameter to the method
	 * @return an object that will be returned to the com event caller
	 */
	public abstract Variant invoke(String methodName,
			Variant targetParameters[]);

	/**
	 * used by EventProxy.cpp to create variant objects in the right thread
	 * 
	 * @return Variant object that will be used by the COM layer
	 */
	public Variant getVariant() {
		return new VariantViaEvent();
	}

	/**
	 * Sets the target for this InvocationProxy.
	 * 
	 * @param pTargetObject
	 * @throws IllegalArgumentException
	 *             if target is not publicly accessible
	 */
	public void setTarget(Object pTargetObject) {
		if (JTangramDispObj.isDebugEnabled()) {
			JTangramDispObj.debug("InvocationProxy: setting target "
					+ pTargetObject);
		}
		if (pTargetObject != null) {
			// JNI code apparently bypasses this check and could operate against
			// protected classes. This seems like a security issue...
			// maybe it was because JNI code isn't in a package?
			if (!java.lang.reflect.Modifier.isPublic(pTargetObject.getClass()
					.getModifiers())) {
				throw new IllegalArgumentException(
						"InvocationProxy only public classes can receive event notifications");
			}
		}
		mTargetObject = pTargetObject;
	}

}
