
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
};
