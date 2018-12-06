
// mxlDlg.h : ��� ����
//

#pragma once

class CmxlDlgAutoProxy;


// CmxlDlg ��ȭ ����
class CmxlDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CmxlDlg);
	friend class CmxlDlgAutoProxy;

// �����Դϴ�.
public:
	CmxlDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.
	virtual ~CmxlDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_MXL_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	CmxlDlgAutoProxy* m_pAutoProxy;
	HICON m_hIcon;

	BOOL CanExit();



	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnClose();
	virtual void OnOK();
	virtual void OnCancel();
	DECLARE_MESSAGE_MAP()
};