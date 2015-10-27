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

import java.util.Calendar;
import java.util.Date;

/**
 * java / windows date conversion utilities
 * 
 * @author joe
 * 
 */
public class DateUtilities {

	/**
	 * converts a windows time to a Java Date Object
	 * 
	 * @param comTime
	 * @return Date object representing the windows time as specified in comTime
	 */
	static public Date convertWindowsTimeToDate(double comTime) {
		return new Date(convertWindowsTimeToMilliseconds(comTime));
	}

	/**
	 * Convert a COM time from functions Date(), Time(), Now() to a Java time
	 * (milliseconds). Visual Basic time values are based to 30.12.1899, Java
	 * time values are based to 1.1.1970 (= 0 milliseconds). The difference is
	 * added to the Visual Basic value to get the corresponding Java value. The
	 * Visual Basic double value reads: <day count delta since 30.12.1899>.<1
	 * day percentage fraction>, e.g. "38100.6453" means: 38100 days since
	 * 30.12.1899 plus (24 hours * 0.6453). Example usage:
	 * <code>Date javaDate = new Date(toMilliseconds (vbDate));</code>.
	 * 
	 * @param comTime
	 *            COM time.
	 * @return Java time.
	 */
	static public long convertWindowsTimeToMilliseconds(double comTime) {
		long result = 0;

		// code from jacobgen:
		comTime = comTime - 25569D;
		Calendar cal = Calendar.getInstance();
		result = Math.round(86400000L * comTime)
				- cal.get(Calendar.ZONE_OFFSET);
		cal.setTime(new Date(result));
		result -= cal.get(Calendar.DST_OFFSET);

		return result;
	}// convertWindowsTimeToMilliseconds()

	/**
	 * converts a java date to a windows time object (is this timezone safe?)
	 * 
	 * @param javaDate
	 *            the java date to be converted to windows time
	 * @return the double representing the date in a form windows understands
	 */
	static public double convertDateToWindowsTime(Date javaDate) {
		if (javaDate == null) {
			throw new IllegalArgumentException(
					"cannot convert null to windows time");
		}
		return convertMillisecondsToWindowsTime(javaDate.getTime());
	}

	/**
	 * Convert a Java time to a COM time.
	 * 
	 * @param milliseconds
	 *            Java time.
	 * @return COM time.
	 */
	static public double convertMillisecondsToWindowsTime(long milliseconds) {
		double result = 0.0;

		// code from jacobgen:
		Calendar cal = Calendar.getInstance();
		cal.setTimeInMillis(milliseconds);
		milliseconds += (cal.get(Calendar.ZONE_OFFSET) + cal
				.get(Calendar.DST_OFFSET)); // add GMT offset
		result = (milliseconds / 86400000D) + 25569D;

		return result;
	}// convertMillisecondsToWindowsTime()
}
