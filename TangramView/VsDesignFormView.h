#pragma once

class CTangramFormView;
class CTangramContentWnd;
// CVsDesignFormView ������ͼ

class CVsDesignFormView : public CFormView
{
	DECLARE_DYNCREATE(CVsDesignFormView)

protected:
	CVsDesignFormView();           // ��̬������ʹ�õ��ܱ����Ĺ��캯��
	virtual ~CVsDesignFormView();

	CString m_strXml;
	CTangramFormView* m_pForm;
public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_VSDESIGNFORMVIEW };
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
public:
	ITangramNode* m_pNode;
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL);
	virtual void OnInitialUpdate();
	afx_msg void OnBnClickedWinformbtn();
	afx_msg void OnBnClickedShowvisualstudio();
	afx_msg void OnBnClickedMfcsdiframe();
	afx_msg void OnBnClickedShowmdiframe();
};


