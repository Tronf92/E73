
// e 73Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "e 73.h"
#include "e 73Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// Ce73Dlg dialog



Ce73Dlg::Ce73Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(Ce73Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void Ce73Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_RADIO2, r1);
	DDX_Control(pDX, IDC_RADIO3, r2);
	DDX_Control(pDX, IDC_RADIO4, r3);
	DDX_Control(pDX, IDC_RADIO5, r4);
	DDX_Control(pDX, IDC_RADIO6, r5);
	DDX_Control(pDX, IDC_RADIO7, r6);
	DDX_Control(pDX, IDC_RADIO8, r7);
	DDX_Control(pDX, IDC_CHECK3, c1);
	DDX_Control(pDX, IDC_CHECK2, c2);
	DDX_Control(pDX, IDC_CHECK1, c3);
	DDX_Control(pDX, IDC_PROGRESS1, p);
	DDX_Control(pDX, IDC_DATETIMEPICKER1, dataControl);
}

BEGIN_MESSAGE_MAP(Ce73Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_RADIO1, &Ce73Dlg::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_RADIO2, &Ce73Dlg::OnBnClickedRadio2)
	ON_BN_CLICKED(IDC_RADIO6, &Ce73Dlg::OnBnClickedRadio6)
	ON_BN_CLICKED(IDC_RADIO7, &Ce73Dlg::OnBnClickedRadio7)
	ON_BN_CLICKED(IDC_RADIO3, &Ce73Dlg::OnBnClickedRadio3)
	ON_BN_CLICKED(IDC_RADIO4, &Ce73Dlg::OnBnClickedRadio4)
	ON_BN_CLICKED(IDC_RADIO5, &Ce73Dlg::OnBnClickedRadio5)
	ON_BN_CLICKED(IDC_RADIO8, &Ce73Dlg::OnBnClickedRadio8)
	ON_BN_CLICKED(IDC_UMPLERE, &Ce73Dlg::OnBnClickedUmplere)
END_MESSAGE_MAP()


// Ce73Dlg message handlers

BOOL Ce73Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void Ce73Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void Ce73Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR Ce73Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void Ce73Dlg::OnBnClickedRadio1()
{
	binar();
	// TODO: Add your control notification handler code here
}


void Ce73Dlg::OnBnClickedRadio2()
{
	binar();
	// TODO: Add your control notification handler code here
}


void Ce73Dlg::OnBnClickedRadio6()
{
	binar();
	// TODO: Add your control notification handler code here
}


void Ce73Dlg::OnBnClickedRadio7()
{
	binar();
	// TODO: Add your control notification handler code here
}


void Ce73Dlg::OnBnClickedRadio3()
{
	binar();
	// TODO: Add your control notification handler code here
}


void Ce73Dlg::OnBnClickedRadio4()
{
	binar();
	// TODO: Add your control notification handler code here
}


void Ce73Dlg::OnBnClickedRadio5()
{
	binar();
	// TODO: Add your control notification handler code here
}


void Ce73Dlg::OnBnClickedRadio8()
{
	binar();
	// TODO: Add your control notification handler code here
}


void Ce73Dlg::OnBnClickedUmplere()
{
	p.SetRange(0,1000);
	p.SetStep(1);
	p.SetPos(0);
	for(int i=0;i<1000;i++){
		Sleep(10);
		p.StepIt();
	}
	// TODO: Add your control notification handler code here
}
