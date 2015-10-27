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

import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

/**
 * This class acts as a proxy between the windows event callback mechanism and
 * the Java classes that are looking for events. It assumes that all of the Java
 * classes that are looking for events implement methods with the same names as
 * the windows events and that the implemented methods accept an array of
 * variant objects. The methods can return void or a Variant that will be
 * returned to the calling layer. All Event methods that will be recognized by
 * InvocationProxyAllEvents have the signature
 * 
 * <code> void eventMethodName(Variant[])</code> or
 * <code> Variant eventMethodName(Variant[])</code>
 */
public class InvocationProxyAllVariants extends InvocationProxy {

	/*
	 * (non-Javadoc)
	 * 
	 * @see com.jacob.com.InvocationProxy#invoke(java.lang.String,
	 *      com.jacob.com.Variant[])
	 */
	@SuppressWarnings("unchecked")
	public Variant invoke(String methodName, Variant targetParameters[]) {
		Variant mVariantToBeReturned = null;
		if (mTargetObject == null) {
			if (JTangramDispObj.isDebugEnabled()) {
				JTangramDispObj.debug("InvocationProxy: received notification ("
						+ methodName + ") with no target set");
			}
			// structured programming guidlines say this return should not be up
			// here
			return null;
		}
		Class targetClass = mTargetObject.getClass();
		if (methodName == null) {
			throw new IllegalArgumentException(
					"InvocationProxy: missing method name");
		}
		if (targetParameters == null) {
			throw new IllegalArgumentException(
					"InvocationProxy: missing Variant parameters");
		}
		try {
			if (JTangramDispObj.isDebugEnabled()) {
				JTangramDispObj.debug("InvocationProxy: trying to invoke "
						+ methodName + " on " + mTargetObject);
			}
			Method targetMethod;
			targetMethod = targetClass.getMethod(methodName,
					new Class[] { Variant[].class });
			if (targetMethod != null) {
				// protected classes can't be invoked against even if they
				// let you grab the method. you could do
				// targetMethod.setAccessible(true);
				// but that should be stopped by the security manager
				Object mReturnedByInvocation = null;
				mReturnedByInvocation = targetMethod.invoke(mTargetObject,
						new Object[] { targetParameters });
				if (mReturnedByInvocation == null) {
					mVariantToBeReturned = null;
				} else if (!(mReturnedByInvocation instanceof Variant)) {
					// could try and convert to Variant here.
					throw new IllegalArgumentException(
							"InvocationProxy: invokation of target method returned "
									+ "non-null non-variant object: "
									+ mReturnedByInvocation);
				} else {
					mVariantToBeReturned = (Variant) mReturnedByInvocation;
				}
			}
		} catch (SecurityException e) {
			// what causes this exception?
			e.printStackTrace();
		} catch (NoSuchMethodException e) {
			// this happens whenever the listener doesn't implement all the
			// methods
			if (JTangramDispObj.isDebugEnabled()) {
				JTangramDispObj.debug("InvocationProxy: listener (" + mTargetObject
						+ ") doesn't implement " + methodName);
			}
		} catch (IllegalArgumentException e) {
			e.printStackTrace();
			// we can throw these inside the catch block so need to re-throw it
			throw e;
		} catch (IllegalAccessException e) {
			// can't access the method on the target instance for some reason
			if (JTangramDispObj.isDebugEnabled()) {
				JTangramDispObj
						.debug("InvocationProxy: probably tried to access public method on non public class"
								+ methodName);
			}
			e.printStackTrace();
		} catch (InvocationTargetException e) {
			// invocation of target method failed
			e.printStackTrace();
		}
		return mVariantToBeReturned;

	}
}
