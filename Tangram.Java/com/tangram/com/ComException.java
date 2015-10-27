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
 * Standard exception thrown by com jni code when there is a problem
 */
public abstract class ComException extends JacobException {

	/**
	 * COM code initializes this filed with an appropriate return code that was
	 * returned by the underlying com code
	 */
	protected int hr;
	/**
	 * No documentation is available at this time. Someone should document this
	 * field
	 */
	protected int m_helpContext;
	/**
	 * No documentation is available at this time. Someone should document this
	 * field
	 */
	protected String m_helpFile;
	/**
	 * No documentation is available at this time. Someone should document this
	 * field
	 */
	protected String m_source;

	/**
	 * constructor
	 * 
	 */
	public ComException() {
		super();
	}

	/**
	 * constructor with error code?
	 * 
	 * @param newHr ??
	 */
	public ComException(int newHr) {
		super();
		this.hr = newHr;
	}

	/**
	 * @param newHr
	 * @param description
	 */
	public ComException(int newHr, String description) {
		super(description);
		this.hr = newHr;
	}

	/**
	 * @param newHr
	 * @param source
	 * @param helpFile
	 * @param helpContext
	 */
	public ComException(int newHr, String source, String helpFile,
			int helpContext) {
		super();
		this.hr = newHr;
		m_source = source;
		m_helpFile = helpFile;
		m_helpContext = helpContext;
	}

	/**
	 * @param newHr
	 * @param description
	 * @param source
	 * @param helpFile
	 * @param helpContext
	 */
	public ComException(int newHr, String description, String source,
			String helpFile, int helpContext) {
		super(description);
		this.hr = newHr;
		m_source = source;
		m_helpFile = helpFile;
		m_helpContext = helpContext;
	}

	/**
	 * @param description
	 */
	public ComException(String description) {
		super(description);
	}

	/**
	 * @return int representation of the help context
	 */
	// Methods
	public int getHelpContext() {
		return m_helpContext;
	}

	/**
	 * @return String ??? help file
	 */
	public String getHelpFile() {
		return m_helpFile;
	}

	/**
	 * @return int hr result ??
	 */
	public int getHResult() {
		return hr;
	}

	/**
	 * @return String source ??
	 */
	public String getSource() {
		return m_source;
	}
}