#pragma once
#include "tangram.h"
// CTangramOfficeToolView ������ͼ
class CTangramFormView;
class CTangramContentWnd;

class CTangramOfficeToolView : public CFormView
{
	DECLARE_DYNCREATE(CTangramOfficeToolView)

protected:
	CTangramOfficeToolView();           // ��̬������ʹ�õ��ܱ����Ĺ��캯��
	virtual ~CTangramOfficeToolView();

	CString m_strXml;
	CTangramFormView* m_pForm;
public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TANGRAMOFFICETOOLVIEW };
#endif
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
	afx_msg void OnBnClickedShowmsword();
	afx_msg void OnBnClickedShowmsexcel();
public:
	ITangramNode* m_pNode;
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL);
	virtual void OnInitialUpdate();
};


