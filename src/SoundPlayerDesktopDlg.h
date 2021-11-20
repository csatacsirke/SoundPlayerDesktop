
// SoundPlayerDesktopDlg.h : header file
//

#pragma once


// CSoundPlayerDesktopDlg dialog
class CSoundPlayerDesktopDlg : public CDHtmlDialog
{
// Construction
public:
	CSoundPlayerDesktopDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SOUNDPLAYERDESKTOP_DIALOG, IDH = IDR_HTML_SOUNDPLAYERDESKTOP_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

	HRESULT OnButtonOK(IHTMLElement *pElement);
	HRESULT OnButtonCancel(IHTMLElement *pElement);

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	DECLARE_DHTML_EVENT_MAP()
};
