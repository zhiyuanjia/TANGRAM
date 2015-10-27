// This MFC Samples source code demonstrates using MFC Microsoft Office Fluent User Interface 
// (the "Fluent UI") and is provided only as referential material to supplement the 
// Microsoft Foundation Classes Reference and related electronic documentation 
// included with the MFC C++ library software.  
// License terms to copy, use or distribute the Fluent UI are available separately.  
// To learn more about our Fluent UI licensing program, please visit 
// http://go.microsoft.com/fwlink/?LinkId=238214.
//
// Copyright (C) Microsoft Corporation
// All rights reserved.

// VSIMDIHelper.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "afxwinappex.h"
#include "afxdialogex.h"
#include "VSIMDIHelper.h"
#include "MainFrm.h"
#include "TangramApplication.h"

#include "ChildFrm.h"
#include "VSIMDIHelperDoc.h"
#include "VSIMDIHelperView.h"
#include <initguid.h>
#include "VSIMDIHelper_i.c"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVSIMDIHelperApp

BEGIN_MESSAGE_MAP(CVSIMDIHelperApp, CWinAppEx)
	ON_COMMAND(ID_APP_ABOUT, &CVSIMDIHelperApp::OnAppAbout)
	// Standard file based document commands
	ON_COMMAND(ID_FILE_NEW, &CWinAppEx::OnFileNew)
	ON_COMMAND(ID_FILE_OPEN, &CWinAppEx::OnFileOpen)
END_MESSAGE_MAP()


// CVSIMDIHelperApp construction

CVSIMDIHelperApp::CVSIMDIHelperApp()
{
	m_pTangram = NULL;
	m_pTangramApplication = NULL;
	// TODO: replace application ID string below with unique ID string; recommended
	// format for string is CompanyName.ProductName.SubProduct.VersionInformation
	SetAppID(_T("VSIMDIHelper.AppID.NoVersion"));

	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

// The one and only CVSIMDIHelperApp object

CVSIMDIHelperApp theApp;


// CVSIMDIHelperApp initialization

BOOL CVSIMDIHelperApp::InitInstance()
{
	// InitCommonControlsEx() is required on Windows XP if an application
	// manifest specifies use of ComCtl32.dll version 6 or later to enable
	// visual styles.  Otherwise, any window creation will fail.
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// Set this to include all the common control classes you want to use
	// in your application.
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinAppEx::InitInstance();


	// Initialize OLE libraries
	if (!AfxOleInit())
	{
		AfxMessageBox(IDP_OLE_INIT_FAILED);
		return FALSE;
	}

	AfxEnableControlContainer();

	EnableTaskbarInteraction();

	// AfxInitRichEdit2() is required to use RichEdit control	
	// AfxInitRichEdit2();

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	// of your final executable, you should remove from the following
	// the specific initialization routines you do not need
	// Change the registry key under which our settings are stored
	// TODO: You should modify this string to be something appropriate
	// such as the name of your company or organization
	SetRegistryKey(_T("Local AppWizard-Generated Applications"));
	LoadStdProfileSettings(4);  // Load standard INI file options (including MRU)


	InitContextMenuManager();

	InitKeyboardManager();

	InitTooltipManager();
	CMFCToolTipInfo ttParams;
	ttParams.m_bVislManagerTheme = TRUE;
	theApp.GetTooltipManager()->SetTooltipParams(AFX_TOOLTIP_TYPE_ALL,
		RUNTIME_CLASS(CMFCToolTipCtrl), &ttParams);

	// Register the application's document templates.  Document templates
	//  serve as the connection between documents, frame windows and views
	CMultiDocTemplate* pDocTemplate;
	pDocTemplate = new CMultiDocTemplate(IDR_VSIMDIHelperTYPE,
		RUNTIME_CLASS(CVSIMDIHelperDoc),
		RUNTIME_CLASS(CChildFrame), // custom MDI child frame
		RUNTIME_CLASS(CVSIMDIHelperView));
	if (!pDocTemplate)
		return FALSE;
	AddDocTemplate(pDocTemplate);

	::MessageBox(NULL, _T("11"), _T("22"), MB_OK);
	// Parse command line for standard shell commands, DDE, file open
	CCommandLineInfo cmdInfo;
	ParseCommandLine(cmdInfo);

	// 通过 CoRegisterClassObject() 注册类工厂。
	if (FAILED(RegisterClassObjects(CLSCTX_LOCAL_SERVER, REGCLS_MULTIPLEUSE)))
		return FALSE;
	// 应用程序是用 /Embedding 或 /Automation 开关启动的。
	//// 将应用程序作为自动化服务器运行。
	//if (cmdInfo.m_bRunEmbedded || cmdInfo.m_bRunAutomated)
	//{
	//	// 不显示主窗口
	//	return TRUE;
	//}
	// 应用程序是用 /Unregserver 或 /Unregister 开关启动的。
	if (cmdInfo.m_nShellCommand == CCommandLineInfo::AppUnregister)
	{
		UpdateRegistryAppId(FALSE);
		UnregisterServer(TRUE);
		return FALSE;
	}
	// 应用程序是用 /Register 或 /Regserver 开关启动的。
	if (cmdInfo.m_nShellCommand == CCommandLineInfo::AppRegister)
	{
		UpdateRegistryAppId(TRUE);
		RegisterServer(TRUE);
		return FALSE;
	}

	// Dispatch commands specified on the command line.  Will return FALSE if
	// app was launched with /RegServer, /Register, /Unregserver or /Unregister.
	//if (!ProcessShellCommand(cmdInfo))
	//	return FALSE;
	// create main MDI Frame window
	CMainFrame* pMainFrame = new CMainFrame;
	if (!pMainFrame || !pMainFrame->LoadFrame(IDR_MAINFRAME))
	{
		delete pMainFrame;
		return FALSE;
	}
	m_pMainWnd = pMainFrame;
	// The main window has been initialized, so show and update it
	pMainFrame->ShowWindow(m_nCmdShow);
	pMainFrame->UpdateWindow();

	return TRUE;
}

int CVSIMDIHelperApp::ExitInstance()
{
	if (theApp.m_pTangramCore)
		theApp.m_pTangramCore.Detach();

	if (theApp.m_pTangramApplication)
	{
		delete theApp.m_pTangramApplication;
	}
	RevokeClassObjects();
	AfxOleTerm(FALSE);
	return CWinAppEx::ExitInstance();
}

// CVSIMDIHelperApp message handlers

// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()

// App command to run the dialog
void CVSIMDIHelperApp::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}

// CVSIMDIHelperApp customization load/save methods

void CVSIMDIHelperApp::PreLoadState()
{
	BOOL bNameValid;
	CString strName;
	bNameValid = strName.LoadString(IDS_EDIT_MENU);
	ASSERT(bNameValid);
	GetContextMenuManager()->AddMenu(strName, IDR_POPUP_EDIT);
}

void CVSIMDIHelperApp::LoadCustomState()
{
}

void CVSIMDIHelperApp::SaveCustomState()
{
}

