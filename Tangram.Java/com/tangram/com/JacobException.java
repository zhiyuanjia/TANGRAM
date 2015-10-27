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
 * The parent class of all Jacob exceptions. They all used to be based off of
 * RuntimeException or ComException but it was decided to base them all off of
 * one owned by this project.
 */
public class JacobException extends RuntimeException {

	/**
	 * 
	 */
	private static final long serialVersionUID = -1637125318746002715L;

	/**
	 * Default constructor. Calls super with a "No Message Provided" string
	 */
	public JacobException() {
		super("No Message Provided");
	}

	/**
	 * standard constructor
	 * 
	 * @param message
	 */
	public JacobException(String message) {
		super(message);
	}
}
