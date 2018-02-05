// LyricsDlg.h : header file
//

#if !defined(AFX_LYRICSDLG_H__ADF93BA1_56C6_4E3E_90A6_E094A98E17ED__INCLUDED_)
#define AFX_LYRICSDLG_H__ADF93BA1_56C6_4E3E_90A6_E094A98E17ED__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CLyricsDlg dialog

class CLyricsDlg : public CDialog
{
// Construction
public:
	CLyricsDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CLyricsDlg)
	enum { IDD = IDD_LYRICS };
	CString	m_Text;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLyricsDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CLyricsDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnBtnGo();
	afx_msg void OnDestroy();
	afx_msg void OnBtnClear();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LYRICSDLG_H__ADF93BA1_56C6_4E3E_90A6_E094A98E17ED__INCLUDED_)
