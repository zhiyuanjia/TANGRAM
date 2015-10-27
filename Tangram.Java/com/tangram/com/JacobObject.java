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
 * The superclass of all Jacob objects. It is used to create a standard API
 * framework and to facilitate memory management for Java and COM memory
 * elements.
 * <p>
 * All instances of this class and subclasses are automatically managed by the
 * ROT. This means the ROT cannot be a subclass of JTangramDispObj.
 * <p>
 * All COM object created by JACOB extend this class so that we can
 * automatically release them when the thread is detached from COM - if we leave
 * it to the finalizer it will call the release from another thread, which may
 * result in a segmentation violation.
 */
public class JTangramDispObj {

	/**
	 * Standard constructor that adds this JTangramDispObj to the memory management
	 * pool.
	 */
	public JTangramDispObj() {
		ROT.addObject(this);
	}

	/**
	 * Finalizers call this method. This method should release any COM data
	 * structures in a way that it can be called multiple times. This can happen
	 * if someone manually calls this and then a finalizer calls it.
	 */
	public void safeRelease() {
		// currently does nothing - subclasses may do something
		if (isDebugEnabled()) {
			// this used to do a toString() but that is bad for SafeArray
			debug("SafeRelease: " + this.getClass().getName());
		}
	}

	/**
	 * When things go wrong, it is useful to be able to debug the ROT. We stash
	 * this in a static so the getProperty() call only happens once. This can
	 * blow up with java.security.AccessControlException in a signed applet
	 * https://sourceforge.net/p/jacob-project/bugs/116/
	 */
	private static final boolean DEBUG =
	// true;
	"true".equalsIgnoreCase(System.getProperty("com.jacob.debug"));

	protected static boolean isDebugEnabled() {
		return DEBUG;
	}

	/**
	 * Loads JacobVersion.Properties and returns the value of version in it
	 * 
	 * @deprecated use JacobReleaseInfo.getBuildDate() instead.
	 * @return String value of version in JacobVersion.Properties or "" if none
	 */
	@Deprecated
	public static String getBuildDate() {
		return JacobReleaseInfo.getBuildDate();
	}

	/**
	 * Loads JacobVersion.Properties and returns the value of version in it
	 * 
	 * @deprecated use JacobReleaseInfo.getBuildVersion() instead.
	 * @return String value of version in JacobVersion.Properties or "" if none
	 */
	@Deprecated
	public static String getBuildVersion() {
		return JacobReleaseInfo.getBuildVersion();
	}

	/**
	 * Very basic debugging function.
	 * 
	 * @param istrMessage
	 */
	protected static void debug(String istrMessage) {
		if (isDebugEnabled()) {
			System.out.println(Thread.currentThread().getName() + ": "
					+ istrMessage);
		}
	}

	/**
	 * force the jacob DLL to be loaded whenever this class is referenced
	 */
	static {
		LibraryLoader.loadJacobLibrary();
	}

}