
// CalculatorDlg.h : файл заголовка
//

#pragma once
#include "afxwin.h"


// диалоговое окно CCalculatorDlg
class CCalculatorDlg : public CDialogEx
{
// Создание
public:
	CCalculatorDlg(CWnd* pParent = NULL);	// стандартный конструктор

// Данные диалогового окна
	enum { IDD = IDD_CALCULATOR_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// поддержка DDX/DDV


// Реализация
protected:
	HICON m_hIcon;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	// Клавиша "1"
	CButton mButon_1;
	// Клавиша "2"
	CButton mButon_2;
	// Клавиша "3"
	CButton mButon_3;
	// Клавиша "4"
	CButton mButon_4;
	// Клавиша "5"
	CButton mButon_5;
	// Строка вывода результата
	CString mStrResult;
	// Клавиша "+"
	CButton mButton_PLUS;
	// Клавиша "-"
	CButton mButton_MINUS;
	// Клавиша "*"
	CButton mButton_MULT;
	// Клавиша "/"
	CButton mButton_DIV;
	// Клавиша "C"
	CButton mButton_C;
	// Клавиша "="
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
