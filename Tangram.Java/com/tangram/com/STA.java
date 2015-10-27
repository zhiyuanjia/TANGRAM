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
 * A class that implements a Single Threaded Apartment. Users will subclass this
 * and override OnInit() and OnQuit() where they will create and destroy a COM
 * component that wants to run in an STA other than the main STA.
 */
public class STA extends Thread {
	/**
	 * referenced by STA.cpp
	 */
	public int threadID;

	/**
	 * constructor for STA
	 */
	public STA() {
		start(); // start the thread
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see java.lang.Thread#run()
	 */
	public void run() {
		// init COM
		ComThread.InitSTA();
		if (OnInit()) {
			// this call blocks in the win32 message loop
			// until quitMessagePump is called
			doMessagePump();
		}
		OnQuit();
		// uninit COM
		ComThread.Release();
	}

	/**
	 * Override this method to create and initialize any COM component that you
	 * want to run in this thread. If anything fails, return false to terminate
	 * the thread.
	 * 
	 * @return always returns true
	 */
	public boolean OnInit() {
		return true;
	}

	/**
	 * Override this method to destroy any resource before the thread exits and
	 * COM in uninitialized
	 */
	public void OnQuit() {
		// there is nothing to see here
	}

	/**
	 * calls quitMessagePump
	 */
	public void quit() {
		quitMessagePump();
	}

	/**
	 * run a message pump for the main STA
	 */
	public native void doMessagePump();

	/**
	 * quit message pump for the main STA
	 */
	public native void quitMessagePump();

	/**
	 * STA isn't a subclass of JTangramDispObj so a reference to it doesn't load the
	 * DLL without this
	 */
	static {
		LibraryLoader.loadJacobLibrary();
	}
}