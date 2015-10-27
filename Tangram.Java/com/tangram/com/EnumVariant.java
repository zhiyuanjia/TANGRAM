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
 * An implementation of IEnumVariant based on code submitted by Thomas Hallgren
 * (mailto:Thomas.Hallgren@eoncompany.com)
 */
public class EnumVariant extends JTangramDispObj implements
		java.util.Enumeration<Variant> {
	/** pointer to windows memory */
	private long m_pIEnumVARIANT;

	private final Variant[] m_recBuf = new Variant[1];

	// this only gets called from JNI
	//
	protected EnumVariant(long pIEnumVARIANT) {
		m_pIEnumVARIANT = pIEnumVARIANT;
	}

	/**
	 * @param disp
	 */
	public EnumVariant(Dispatch disp) {
		int[] hres = new int[1];
		// SF 3377279
		// Added Dispatch.Method to the invoke flags to call _NewEnum. There are
		// some
		// non-conforming legacy implementations that expose _NewEnum as a
		// method.
		Variant evv = Dispatch.invokev(disp, DispatchIdentifier.DISPID_NEWENUM,
				Dispatch.Get | Dispatch.Method, new Variant[0], hres);
		if (evv.getvt() != Variant.VariantObject)
			// The DISPID_NEWENUM did not result in a valid object
			throw new ComFailException("Can't obtain EnumVARIANT");

		EnumVariant tmp = evv.toEnumVariant();
		m_pIEnumVARIANT = tmp.m_pIEnumVARIANT;
		tmp.m_pIEnumVARIANT = 0;
	}

	/**
	 * Implements java.util.Enumeration
	 * 
	 * @return boolean true if there are more elements in this enumeration
	 */
	public boolean hasMoreElements() {
		{
			if (m_recBuf[0] == null) {
				if (this.Next(m_recBuf) <= 0)
					return false;
			}
			return true;
		}
	}

	/**
	 * Implements java.util.Enumeration
	 * 
	 * @return next element in the enumeration
	 */
	public Variant nextElement() {
		Variant last = m_recBuf[0];
		if (last == null) {
			if (this.Next(m_recBuf) <= 0)
				throw new java.util.NoSuchElementException();
			last = m_recBuf[0];
		}
		m_recBuf[0] = null;
		return last;
	}

	/**
	 * Get next element in collection or null if at end
	 * 
	 * @return Variant that is next in the collection
	 * @deprecated use nextElement() instead
	 */
	@Deprecated
	public Variant Next() {
		if (hasMoreElements())
			return nextElement();
		return null;
	}

	/**
	 * This should be private and wrapped to protect JNI layer.
	 * 
	 * @param receiverArray
	 * @return Returns the next variant object pointer as an int from windows
	 *         layer
	 */
	public native int Next(Variant[] receiverArray);

	/**
	 * This should be private and wrapped to protect JNI layer.
	 * 
	 * @param count
	 *            number to skip
	 */
	public native void Skip(int count);

	/**
	 * This should be private and wrapped to protect JNI layer
	 */
	public native void Reset();

	/**
	 * now private so only this object can access was: call this to explicitly
	 * release the com object before gc
	 * 
	 */
	private native void release();

	/*
	 * (non-Javadoc)
	 * 
	 * @see java.lang.Object#finalize()
	 */
	@Override
	protected void finalize() {
		safeRelease();
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see com.tangram.JTangramDispObj#safeRelease()
	 */
	@Override
	public void safeRelease() {
		super.safeRelease();
		if (m_pIEnumVARIANT != 0) {
			this.release();
			m_pIEnumVARIANT = 0;
		} else {
			// looks like a double release
			if (isDebugEnabled()) {
				debug(this.getClass().getName() + ":" + this.hashCode()
						+ " double release");
			}
		}
	}
}