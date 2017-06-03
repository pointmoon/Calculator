
// CalculatorDlg.h : ���� ���������
//

#pragma once
#include "afxwin.h"


// ���������� ���� CCalculatorDlg
class CCalculatorDlg : public CDialogEx
{
// ��������
public:
	CCalculatorDlg(CWnd* pParent = NULL);	// ����������� �����������

// ������ ����������� ����
	enum { IDD = IDD_CALCULATOR_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// ��������� DDX/DDV


// ����������
protected:
	HICON m_hIcon;

	// ��������� ������� ����� ���������
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	// ������� "1"
	CButton mButon_1;
	// ������� "2"
	CButton mButon_2;
	// ������� "3"
	CButton mButon_3;
	// ������� "4"
	CButton mButon_4;
	// ������� "5"
	CButton mButon_5;
	// ������ ������ ����������
	CString mStrResult;
	// ������� "+"
	CButton mButton_PLUS;
	// ������� "-"
	CButton mButton_MINUS;
	// ������� "*"
	CButton mButton_MULT;
	// ������� "/"
	CButton mButton_DIV;
	// ������� "C"
	CButton mButton_C;
	// ������� "="
	CButton mButton_RESULT;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton0();
	afx_msg void OnBnClickedButtonC();
	afx_msg void OnBnClickedButtonEqv();
	afx_msg void OnBnClickedButtonPlus();
	afx_msg void OnBnClickedButtonMinus();
	afx_msg void OnBnClickedButtonMult();
	afx_msg void OnBnClickedButtonDiv();
};
