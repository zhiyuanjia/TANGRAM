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
 * COM Fail Exception class raised when there is a problem
 */
public class ComFailException extends ComException {
	/**
	 * eclipse generated to get rid of a wanring
	 */
	private static final long serialVersionUID = -266047261992987700L;

	/**
	 * Constructor
	 * 
	 * @param hrNew
	 */
	public ComFailException(int hrNew) {
		super(hrNew);
	}

	/**
	 * Constructor
	 * 
	 * @param hrNew
	 * @param message
	 */
	public ComFailException(int hrNew, String message) {
		super(hrNew, message);
	}

	/**
	 * @param hrNew
	 * @param source
	 * @param helpFile
	 * @param helpContext
	 */
	public ComFailException(int hrNew, String source, String helpFile,
			int helpContext) {
		super(hrNew, source, helpFile, helpContext);
	}

	/**
	 * Constructor
	 * 
	 * @param hrNew
	 * @param description
	 * @param source
	 * @param helpFile
	 * @param helpContext
	 */
	public ComFailException(int hrNew, String description, String source,
			String helpFile, int helpContext) {
		super(hrNew, description, source, helpFile, helpContext);
	}

	/**
	 * No argument Constructor
	 */
	public ComFailException() {
		super();
	}

	/**
	 * @param message
	 */
	public ComFailException(String message) {
		super(message);
	}
}