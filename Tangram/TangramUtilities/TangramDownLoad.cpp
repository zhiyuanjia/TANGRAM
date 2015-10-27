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

#include "..\stdafx.h"
#include "..\TangramApp.h"
#include "Psapi.h"
#include "Wininet.h"
#include <Mmsystem.h>
#include "Tlhelp32.h"
#include "TangramDownLoad.h"
#include "TangramComponentInstaller.h"


#pragma comment(lib,"Version.lib")
#pragma comment(lib,"Wininet.lib")
#pragma comment(lib,"Winmm.lib")

namespace TangramUtilities
{
	CTangramDownLoad::CTangramDownLoad()
	{
		m_strFileURL = _T("");
		m_strFilePath = _T("");
		m_strActionXml = _T("");
	}

	CTangramDownLoad::~CTangramDownLoad()
	{
	}

	BOOL CTangramDownLoad::InerDownloadAFile()
	{
		DWORD dwFlags;
		InternetGetConnectedState(&dwFlags, 0);
		TCHAR strAgent[64];
		memset(strAgent, 0, sizeof(strAgent));
		_tprintf(strAgent, _T("Agent%ld"), timeGetTime(), 64);
		HINTERNET hOpen;
		if (!(dwFlags & INTERNET_CONNECTION_PROXY))
			hOpen = InternetOpen(strAgent, INTERNET_OPEN_TYPE_PRECONFIG_WITH_NO_AUTOPROXY, NULL, NULL, 0);
		else
			hOpen = InternetOpen(strAgent, INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0);
		if (!hOpen)
		{
			return FALSE;
		}

		DWORD dwSize;
		TCHAR   szHead[] = _T("Accept: */*\r\n\r\n");
		BYTE szTemp[16385];
		HINTERNET  hConnect;
		hConnect = InternetOpenUrl(hOpen, m_strFileURL, szHead, _tcslen(szHead), INTERNET_FLAG_DONT_CACHE | INTERNET_FLAG_PRAGMA_NOCACHE | INTERNET_FLAG_RELOAD, 0);
		if (!hConnect)
		{
			DWORD dw = GetLastError();
			InternetCloseHandle(hOpen);
			return false;
		}

		BOOL bTangramMsi = FALSE;
		HANDLE hFile = INVALID_HANDLE_VALUE;
		if (m_strFilePath.CompareNoCase(_T("\\TangramMsi\\Tangram.msi")) == 0)
		{
			m_strFilePath = theApp.m_strAppDataPath + _T("\\TangramMsi\\Tangram.msi");
			bTangramMsi = TRUE;
		}
		int nPos = m_strFilePath.ReverseFind('\\');
		CString strDir = m_strFilePath.Left(nPos);
		if (::PathIsDirectory(strDir) == FALSE)
			if (::SHCreateDirectoryEx(NULL, strDir, NULL))
				return false;
		hFile = CreateFile(m_strFilePath, GENERIC_WRITE, FILE_SHARE_READ, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);

		if (hFile == INVALID_HANDLE_VALUE)
		{
			return false;
		}

		char bufQuery[32];
		DWORD dwLengthBufQuery = sizeof(bufQuery);
		BOOL bQuery = ::HttpQueryInfo(hConnect, HTTP_QUERY_CONTENT_LENGTH, bufQuery, &dwLengthBufQuery, NULL);

		memset(szTemp, 0, sizeof(szTemp));
		do
		{
			if (!InternetReadFile(hConnect, szTemp, 16384, &dwSize))
			{
				CloseHandle(hFile);
				return FALSE;
			}
			if (dwSize == 0)
			{
				break;
			}
			else
			{
				DWORD dwWrite = dwSize;
				WriteFile(hFile, szTemp, dwSize, &dwWrite, NULL);
				//m_dwFileSize = GetFileSize(hFile,NULL);
			}
		} while (TRUE);
		if (GetFileSize(hFile, NULL) == 0)
		{
			CloseHandle(hFile);
			InternetCloseHandle(hConnect);
			InternetCloseHandle(hOpen);
			return FALSE;
		}
		//m_bAFileIsOK = GetFileSize(hFile,NULL);
		CloseHandle(hFile);
		InternetCloseHandle(hConnect);
		InternetCloseHandle(hOpen);

		if (bTangramMsi)
		{
			CString boutiqueInstallCmd, msi, log;
			CString cmdLine = _T("msiexec /q /I %s ");
			msi.Format(_T("\"%s%s\""), _T(""), _T(""));
			//boutiqueInstallCmd.Format(cmdLine, msi, log);
			boutiqueInstallCmd.Format(cmdLine, msi);

			//TODO: You can use MSI API to gather and present install progress feedback from your MSI.
			theApp.ExecCmd(boutiqueInstallCmd, TRUE);
		}
		return TRUE;

	}

	CString CTangramDownLoad::OpenFile(CString &filePath)
	{
		HANDLE hFile = CreateFile(filePath, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE,
			NULL, OPEN_EXISTING,
			FILE_FLAG_SEQUENTIAL_SCAN, NULL);
		if (hFile == INVALID_HANDLE_VALUE)
		{
			return _T("");
		}
		DWORD dwSize = GetFileSize(hFile, NULL);
		CString csData(' ', dwSize);
		DWORD bytesRead;
		DWORD dwRead = ReadFile(hFile,/*csData*/csData.GetBuffer(dwSize), dwSize, &bytesRead, NULL);
		CloseHandle(hFile);
		CString str(csData);
		csData.ReleaseBuffer();
		if (dwSize != bytesRead)
		{
		}
		int iCRC = GetCRC32(csData, dwSize);
		char ch[20];
		_itoa_s(iCRC, ch, 16);
		CString strCheckKey;
		strCheckKey = ch;
		return strCheckKey;


	}

	//��ʼ��CRC����ȡCRCֵ���ȳ�ʼ��CRC��
	void CTangramDownLoad::InitCRC32Table()
	{
		ULONG ulPolynomial = 0x04c11db7;

		// 256 values representing ASCII character codes.
		for (int i = 0; i <= 0xFF; i++)
		{
			crc32Table[i] = Reflect(i, 8) << 24;
			for (int j = 0; j < 8; j++)
				crc32Table[i] = (crc32Table[i] << 1) ^ (crc32Table[i] & (1 << 31) ? ulPolynomial : 0);
			crc32Table[i] = Reflect(crc32Table[i], 32);
		}
	}

	int CTangramDownLoad::GetCRC32(CString& csData, DWORD dwSize)
	{
		ULONG crc = 0xffffffff;
		int len;
		unsigned char* buffer;
		len = dwSize;
		buffer = (unsigned char*)(LPCTSTR)csData;
		while (len--)
		{
			crc = (crc >> 8) ^ crc32Table[(crc & 0xFF) ^ *buffer++];
		}
		return crc ^ 0xffffffff;
	}

	ULONG CTangramDownLoad::Reflect(ULONG ref, char ch)
	{
		ULONG value(0);

		// Swap bit 0 for bit 7
		// bit 1 for bit 6, etc.
		for (int i = 1; i < (ch + 1); i++)
		{
			if (ref & 1)
				value |= 1 << (ch - i);
			ref >>= 1;
		}
		return value;
	}

	BOOL CTangramDownLoad::OnDownLoadSuccess(int id)
	{
		CString strCRC = OpenFile(m_strFilePath);
		if (m_strActionXml != _T(""))
		{
			TangramUtilities::CTangramComponentInstaller m_Installer;
			m_Installer.m_strHostFile = m_strFilePath;
			m_Installer.InstallComponent(m_strActionXml);
		}
		//�������سɹ���Ϣ
		::PostMessage(theApp.m_pMainWnd->m_hWnd, WM_DOWNLOAD_MSG, (WPARAM)this, (LPARAM)TRUE);
		return TRUE;
	}

	DWORD WINAPI CTangramDownLoad::DownloadThread(LPVOID v)
	{
		ATLASSERT(v);
		CTangramDownLoad* pDownLoadObj = (CTangramDownLoad*)v;

		SleepEx(50, TRUE);
		if (pDownLoadObj)
		{
			try
			{
				if (!pDownLoadObj->InerDownloadAFile())
				{
					::PostMessage(theApp.m_pMainWnd->m_hWnd, WM_DOWNLOAD_MSG, (WPARAM)pDownLoadObj, (LPARAM)FALSE);
				}
				else
				{
					pDownLoadObj->OnDownLoadSuccess(0);
				}
			}
			catch (...)
			{
				ATLASSERT(FALSE);
				return 0;
			}

			return 1;
		}
		return 0;
	}

	BOOL CTangramDownLoad::DownLoadFile(CString strURL, CString strTarget)
	{
		m_strFilePath = strTarget;
		m_strFileURL = strURL;
		DWORD dwThread = 0;
		m_hThread = CreateThread(NULL, NULL, DownloadThread, (void*)this, NULL, &dwThread);
		return m_hThread != NULL;
	}
}
