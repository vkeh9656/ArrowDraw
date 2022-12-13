
// ArrowDrawDlg.h: 헤더 파일
//

#pragma once


// CArrowDrawDlg 대화 상자
class CArrowDrawDlg : public CDialogEx
{
private:
	CImage m_image;
	CDC m_image_dc;

	CPen m_green_pen;
	CBrush m_green_brush;

	CRect m_rect;
	char m_is_clicked = 0; // 0 : non-click,   1: click
	CPoint m_start_pos;

// 생성입니다.
public:
	CArrowDrawDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ARROWDRAW_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDestroy();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};
