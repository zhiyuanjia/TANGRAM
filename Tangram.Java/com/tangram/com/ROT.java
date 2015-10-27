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

import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.WeakHashMap;

/**
 * The Running Object Table (ROT) maps each thread to a collection of all the
 * JacobObjects that were created in that thread. It always operates on the
 * current thread so all the methods are static and they implicitly get the
 * current thread.
 * <p>
 * The clearObjects method is used to release all the COM objects created by
 * Jacob in the current thread prior to uninitializing COM for that thread.
 * <p>
 * Prior to 1.9, manual garbage collection was the only option in Jacob, but
 * from 1.9 onward, setting the com.jacob.autogc system property allows the
 * objects referenced by the ROT to be automatically GCed. Automatic GC may be
 * preferable in systems with heavy event callbacks.
 * <p>
 * Is [ 1116101 ] jacob-msg 0284 relevant???
 */
public abstract class ROT {
	/**
	 * Manual garbage collection was the only option pre 1.9 Can staticly cache
	 * the results because only one value and we don't let it change during a
	 * run
	 */
	protected static final boolean USE_AUTOMATIC_GARBAGE_COLLECTION = "true"
			.equalsIgnoreCase(System.getProperty("com.jacob.autogc"));

	/**
	 * If the code is ran from an applet that is called from javascript the Java
	 * Plugin does not give full permissions to the code and thus System
	 * properties cannot be accessed. They can be accessed at class
	 * initialization time.
	 * 
	 * The default behavior is to include all classes in the ROT, setting a
	 * boolean here to indicate this prevents a call to System.getProperty as
	 * part of the general call flow.
	 */
	protected static final Boolean INCLUDE_ALL_CLASSES_IN_ROT = Boolean
			.valueOf(System.getProperty("com.jacob.includeAllClassesInROT",
					"true"));

	/**
	 * Suffix added to class name to make up property name that determines if
	 * this object should be stored in the ROT. This 1.13 "feature" makes it
	 * possible to cause VariantViaEvent objects to not be added to the ROT in
	 * event callbacks.
	 * <p>
	 * We don't have a static for the actual property because there is a
	 * different property for each class that may make use of this feature.
	 */
	protected static String PUT_IN_ROT_SUFFIX = ".PutInROT";

	/**
	 * ThreadLocal with the com objects created in that thread
	 */
	private static ThreadLocal<Map<JTangramDispObj, String>> rot = new ThreadLocal<Map<JTangramDispObj, String>>();

	/**
	 * adds a new thread storage area to rot
	 * 
	 * @return Map corresponding to the thread that this call was made in
	 */
	protected synchronized static Map<JTangramDispObj, String> addThread() {
		Map<JTangramDispObj, String> tab = rot.get();
		if (tab == null) {
			if (JTangramDispObj.isDebugEnabled()) {
				JTangramDispObj.debug("ROT: Automatic GC flag == "
						+ USE_AUTOMATIC_GARBAGE_COLLECTION);
			}
			if (!USE_AUTOMATIC_GARBAGE_COLLECTION) {
				tab = new HashMap<JTangramDispObj, String>();
			} else {
				tab = new WeakHashMap<JTangramDispObj, String>();
			}
			rot.set(tab);
		}
		return tab;
	}

	/**
	 * Returns the pool for this thread if it exists. can create a new one if
	 * you wish by passing in TRUE
	 * 
	 * @param createIfDoesNotExist
	 * @return Map the collection that holds the objects created in the current
	 *         thread
	 */
	protected synchronized static Map<JTangramDispObj, String> getThreadObjects(
			boolean createIfDoesNotExist) {
		Map<JTangramDispObj, String> tab = rot.get();
		if (tab == null && createIfDoesNotExist) {
			tab = addThread();
		}
		return tab;
	}

	/**
	 * Iterates across all of the entries in the Hashmap in the rot that
	 * corresponds to this thread. This calls safeRelease() on each entry and
	 * then clears the map when done and removes it from the rot. All traces of
	 * this thread's objects will disappear. This is called by COMThread in the
	 * tear down and provides a synchronous way of releasing memory
	 */
	protected static void clearObjects() {
		Map<JTangramDispObj, String> tab = getThreadObjects(false);
		if (tab != null) {
			if (JTangramDispObj.isDebugEnabled()) {
				JTangramDispObj.debug("ROT: " + tab.keySet().size()
						+ " objects to clear in this thread's ROT ");
			}
			// walk the values
			Iterator<JTangramDispObj> it = tab.keySet().iterator();
			while (it.hasNext()) {
				JTangramDispObj o = it.next();
				if (o != null
				// can't use this cause creates a Variant if calling SafeAray
				// and we get an exception modifying the collection while
				// iterating
				// && o.toString() != null
				) {
					if (JTangramDispObj.isDebugEnabled()) {
						if (o instanceof SafeArray) {
							// SafeArray create more objects when calling
							// toString()
							// which causes a concurrent modification exception
							// in HashMap
							JTangramDispObj.debug("ROT: removing "
									+ o.getClass().getName());
						} else {
							// Variant toString() is probably always bad in here
							JTangramDispObj.debug("ROT: removing " + o.hashCode()
									+ "->" + o.getClass().getName());
						}
					}
					o.safeRelease();
				}
			}
			// empty the collection
			tab.clear();
			// remove the collection from rot
			ROT.removeThread();
			if (JTangramDispObj.isDebugEnabled()) {
				JTangramDispObj.debug("ROT: thread table cleared and removed");
			}
		} else {
			if (JTangramDispObj.isDebugEnabled()) {
				JTangramDispObj.debug("ROT: nothing to clear!");
			}
		}
	}

	/**
	 * Removes the map from the rot that is associated with the current thread.
	 */
	private synchronized static void removeThread() {
		rot.remove();
	}

	/**
	 * @deprecated the java model leave the responsibility of clearing up
	 *             objects to the Garbage Collector. Our programming model
	 *             should not require that the user specifically remove object
	 *             from the thread. <br>
	 *             This will remove an object from the ROT <br>
	 *             This does not need to be synchronized because only the rot
	 *             modification related methods need to synchronized. Each
	 *             individual map is only modified in a single thread.
	 * @param o
	 */
	@Deprecated
	protected static void removeObject(JTangramDispObj o) {
		Map<JTangramDispObj, String> tab = ROT.getThreadObjects(false);
		if (tab != null) {
			tab.remove(o);
		}
		o.safeRelease();
	}

	/**
	 * Adds an object to the HashMap for the current thread. <br>
	 * <p>
	 * This method does not need to be threaded because the only concurrent
	 * modification risk is on the hash map that contains all of the thread
	 * related hash maps. The individual thread related maps are only used on a
	 * per thread basis so there isn't a locking issue.
	 * <p>
	 * In addition, this method cannot be threaded because it calls
	 * ComThread.InitMTA. The ComThread object has some methods that call ROT so
	 * we could end up deadlocked. This method should be safe without the
	 * synchronization because the ROT works on per thread basis and the methods
	 * that add threads and remove thread related entries are all synchronized
	 * 
	 * 
	 * @param o
	 */
	protected static void addObject(JTangramDispObj o) {
		String shouldIncludeClassInROT = "true";
		// only call System.getProperty if we are not including all classes in
		// the ROT. This lets us run with standard Jacob behavior in Applets
		// without the security exception raised by System.getProperty in the
		// flow
		if (!ROT.INCLUDE_ALL_CLASSES_IN_ROT) {
			shouldIncludeClassInROT = System.getProperty(o.getClass().getName()
					+ PUT_IN_ROT_SUFFIX, "true");
		}
		if (shouldIncludeClassInROT.equalsIgnoreCase("false")) {
			if (JTangramDispObj.isDebugEnabled()) {
				JTangramDispObj.debug("JTangramDispObj: New instance of "
						+ o.getClass().getName() + " not added to ROT");
			}
		} else {
			// first see if we have a table for this thread
			Map<JTangramDispObj, String> tab = getThreadObjects(false);
			if (tab == null) {
				// this thread has not been initialized as a COM thread
				// so make it part of MTA for backwards compatibility
				ComThread.InitMTA(false);
				// don't really need the "true" because the InitMTA will have
				// called back to the ROT to create a table for this thread
				tab = getThreadObjects(true);
			}
			if (JTangramDispObj.isDebugEnabled()) {
				JTangramDispObj.debug("ROT: adding " + o + "->"
						+ o.getClass().getName()
						+ " table size prior to addition:" + tab.size());
			}
			// add the object to the table that is specific to this thread
			if (tab != null) {
				tab.put(o, null);
			}
		}
	}

	/**
	 * ROT can't be a subclass of JTangramDispObj because of the way ROT pools are
	 * managed so we force a DLL load here by referencing JTangramDispObj
	 */
	static {
		LibraryLoader.loadJacobLibrary();
	}

}
