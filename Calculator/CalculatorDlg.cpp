
// CalculatorDlg.cpp : ���� ����������
//

#include "stdafx.h"
#include "Calculator.h"
#include "CalculatorDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ���������� ���� CAboutDlg ������������ ��� �������� �������� � ����������

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// ������ ����������� ����
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // ��������� DDX/DDV

// ����������
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


// ���������� ���� CCalculatorDlg



CCalculatorDlg::CCalculatorDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CCalculatorDlg::IDD, pParent)
	, mStrResult(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCalculatorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON1, mButon_1);
	DDX_Control(pDX, IDC_BUTTON2, mButon_2);
	DDX_Control(pDX, IDC_BUTTON3, mButon_3);
	DDX_Control(pDX, IDC_BUTTON4, mButon_4);
	DDX_Control(pDX, IDC_BUTTON5, mButon_5);
	DDX_Text(pDX, IDC_EDIT_RESULT, mStrResult);
	DDX_Control(pDX, IDC_BUTTON_PLUS, mButton_PLUS);
	DDX_Control(pDX, IDC_BUTTON_MINUS, mButton_MINUS);
	DDX_Control(pDX, IDC_BUTTON_MULT, mButton_MULT);
	DDX_Control(pDX, IDC_BUTTON_DIV, mButton_DIV);
	DDX_Control(pDX, IDC_BUTTON_C, mButton_C);
	DDX_Control(pDX, IDC_BUTTON_EQV, mButton_RESULT);
}

BEGIN_MESSAGE_MAP(CCalculatorDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CCalculatorDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CCalculatorDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CCalculatorDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CCalculatorDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CCalculatorDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CCalculatorDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CCalculatorDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CCalculatorDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CCalculatorDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON0, &CCalculatorDlg::OnBnClickedButton0)
	ON_BN_CLICKED(IDC_BUTTON_C, &CCalculatorDlg::OnBnClickedButtonC)
	ON_BN_CLICKED(IDC_BUTTON_EQV, &CCalculatorDlg::OnBnClickedButtonEqv)
	ON_BN_CLICKED(IDC_BUTTON_PLUS, &CCalculatorDlg::OnBnClickedButtonPlus)
	ON_BN_CLICKED(IDC_BUTTON_MINUS, &CCalculatorDlg::OnBnClickedButtonMinus)
	ON_BN_CLICKED(IDC_BUTTON_MULT, &CCalculatorDlg::OnBnClickedButtonMult)
	ON_BN_CLICKED(IDC_BUTTON_DIV, &CCalculatorDlg::OnBnClickedButtonDiv)
END_MESSAGE_MAP()


// ����������� ��������� CCalculatorDlg

BOOL CCalculatorDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ���������� ������ "� ���������..." � ��������� ����.

	// IDM_ABOUTBOX ������ ���� � �������� ��������� �������.
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

	// ������ ������ ��� ����� ����������� ����.  ����� ������ ��� �������������,
	//  ���� ������� ���� ���������� �� �������� ����������
	SetIcon(m_hIcon, TRUE);			// ������� ������
	SetIcon(m_hIcon, FALSE);		// ������ ������

	// TODO: �������� �������������� �������������

	return TRUE;  // ������� �������� TRUE, ���� ����� �� ������� �������� ����������
}

void CCalculatorDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// ��� ���������� ������ ����������� � ���������� ���� ����� ��������������� ����������� ���� �����,
//  ����� ���������� ������.  ��� ���������� MFC, ������������ ������ ���������� ��� �������������,
//  ��� ������������� ����������� ������� ��������.

void CCalculatorDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // �������� ���������� ��� ���������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ������������ ������ �� ������ ����������� ��������������
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ��������� ������
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// ������� �������� ��� ������� ��� ��������� ����������� ������� ��� �����������
//  ���������� ����.
HCURSOR CCalculatorDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CCalculatorDlg::OnBnClickedButton1()
{
	// TODO: �������� ���� ��� ����������� �����������
}


void CCalculatorDlg::OnBnClickedButton2()
{
	// TODO: �������� ���� ��� ����������� �����������
}


void CCalculatorDlg::OnBnClickedButton3()
{
	// TODO: �������� ���� ��� ����������� �����������
}


void CCalculatorDlg::OnBnClickedButton4()
{
	// TODO: �������� ���� ��� ����������� �����������
}


void CCalculatorDlg::OnBnClickedButton5()
{
	// TODO: �������� ���� ��� ����������� �����������
}


void CCalculatorDlg::OnBnClickedButton6()
{
	// TODO: �������� ���� ��� ����������� �����������
}


void CCalculatorDlg::OnBnClickedButton7()
{
	// TODO: �������� ���� ��� ����������� �����������
}


void CCalculatorDlg::OnBnClickedButton8()
{
	// TODO: �������� ���� ��� ����������� �����������
}


void CCalculatorDlg::OnBnClickedButton9()
{
	// TODO: �������� ���� ��� ����������� �����������
}


void CCalculatorDlg::OnBnClickedButton0()
{
	// TODO: �������� ���� ��� ����������� �����������
}


void CCalculatorDlg::OnBnClickedButtonC()
{
	// TODO: �������� ���� ��� ����������� �����������
}


void CCalculatorDlg::OnBnClickedButtonEqv()
{
	// TODO: �������� ���� ��� ����������� �����������
}


void CCalculatorDlg::OnBnClickedButtonPlus()
{
	// TODO: �������� ���� ��� ����������� �����������
}


void CCalculatorDlg::OnBnClickedButtonMinus()
{
	// TODO: �������� ���� ��� ����������� �����������
}


void CCalculatorDlg::OnBnClickedButtonMult()
{
	// TODO: �������� ���� ��� ����������� �����������
}


void CCalculatorDlg::OnBnClickedButtonDiv()
{
	// TODO: �������� ���� ��� ����������� �����������
}
