
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
};
