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

#pragma once
namespace TangramUtilities
{
	class CTangramDownLoad
	{
	public:
		CTangramDownLoad();
		~CTangramDownLoad();

		CString m_strFileURL;
		CString m_strFilePath;
		CString m_strActionXml;
		BOOL InerDownloadAFile();
		BOOL OnDownLoadSuccess(int fileid);
		BOOL CTangramDownLoad::DownLoadFile(CString strURL, CString strTarget);
		static DWORD WINAPI DownloadThread(LPVOID v);
	private:
		ULONG crc32Table[256];			//CRC表
		HANDLE m_hThread;				//下载线程句柄
		CString m_strMac;

		void InitCRC32Table();
		int GetCRC32(CString& csData, DWORD dwSize);
		ULONG Reflect(ULONG ref, char ch);
		CString OpenFile(CString &filePath);
	};
}
