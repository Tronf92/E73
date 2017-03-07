
// e 73Dlg.h : header file
//

#pragma once
#include "afxwin.h"
#include "afxcmn.h"
#include "afxdtctl.h"


// Ce73Dlg dialog
class Ce73Dlg : public CDialogEx
{
	void binar(){
		if(r1.GetCheck() ){
			c1.SetCheck(0);
			c2.SetCheck(0);
			c3.SetCheck(0);
		}
		
		if(r2.GetCheck() ){
			c1.SetCheck(0);
			c2.SetCheck(1);
			c3.SetCheck(0);
		}
	}

// Construction
public:
	Ce73Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_E73_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedRadio6();
	afx_msg void OnBnClickedRadio7();
	int r0;
	CButton r1;
	CButton r2;
	CButton r3;
	CButton r4;
	CButton r5;
	CButton r6;
	CButton r7;
	CButton c1;
	CButton c2;
	CButton c3;
	CProgressCtrl p;
	CDateTimeCtrl dataControl;
	afx_msg void OnBnClickedRadio3();
	afx_msg void OnBnClickedRadio4();
	afx_msg void OnBnClickedRadio5();
	afx_msg void OnBnClickedRadio8();
	afx_msg void OnBnClickedUmplere();
};
