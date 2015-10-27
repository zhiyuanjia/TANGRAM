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
 * If you need to pass a COM Dispatch object between STA threads, you have to
 * marshall the interface. This class is used as follows: the STA that creates
 * the Dispatch object must construct an instance of this class. Another thread
 * can then call toDispatch() on that instance and get a Dispatch pointer which
 * has been marshalled. WARNING: You can only call toDispatch() once! If you
 * need to call it multiple times (or from multiple threads) you need to
 * construct a separate DispatchProxy instance for each such case!
 */
public class DispatchProxy extends JTangramDispObj {
	/**
	 * Comment for <code>m_pStream</code>
	 */
	public long m_pStream;

	/**
	 * Marshals the passed in dispatch into the stream
	 * 
	 * @param localDispatch
	 */
	public DispatchProxy(Dispatch localDispatch) {
		MarshalIntoStream(localDispatch);
	}

	/**
	 * 
	 * @return Dispatch the dispatch retrieved from the stream
	 */
	public Dispatch toDispatch() {
		return MarshalFromStream();
	}

	private native void MarshalIntoStream(Dispatch d);

	private native Dispatch MarshalFromStream();

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
	public void finalize() {
		safeRelease();
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see com.jacob.com.JTangramDispObj#safeRelease()
	 */
	@Override
	public void safeRelease() {
		super.safeRelease();
		if (m_pStream != 0) {
			release();
			m_pStream = 0;
		} else {
			// looks like a double release
			if (isDebugEnabled()) {
				debug(this.getClass().getName() + ":" + this.hashCode()
						+ " double release");
			}
		}
	}
}