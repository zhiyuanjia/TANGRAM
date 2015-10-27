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
#include "XZip.h"
namespace TangramUtilities
{
	class CTangramComponentInstaller
	{
	public:
		CTangramComponentInstaller(void);
		~CTangramComponentInstaller(void);

		CString m_strHostFile;
		//ѹ��һ���ļ�
		BOOL Zip(LPCTSTR lpszZipArchive, LPCTSTR lpszSrcFile);
		//��ѹѹ�����ڵ��ļ�
		void VerifyZip(HZIP hz, LPCTSTR lpszFile, LPCTSTR lpszPath);
		//�����ļ��Ƚ�
		BOOL Compare(LPCTSTR lpszFile1, LPCTSTR lpszFile2, BOOL *pbResult);
		//��ѹѹ�����ڵ��ļ���֧��һ���ļ�,����strName����,strName��·��
		BOOL UnZip(CString strZip, CString strName);
		//��ѹѹ�����ڵ��ļ���֧�ֶ���ļ�����������
		BOOL UnMultiZip(CString strZip, CString strPath);
		BOOL InstallComponent(CString strXml);

		BOOL RegComDll(const CString& strDllLib);
		BOOL UnRegComDll(const CString& strDllLib);
		BOOL SetDirectory(CString strFile);
	};
}