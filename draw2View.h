
// draw2View.h: Cdraw2View 类的接口
//

#pragma once


class Cdraw2View : public CView
{
protected: // 仅从序列化创建
	Cdraw2View() noexcept;
	DECLARE_DYNCREATE(Cdraw2View)

// 特性
public:
	Cdraw2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cdraw2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	COLORREF m_nColor;
	COLORREF m_fColor;
	CPoint cpoint;
	CPoint opoint;
	BOOL m_Down;//判断鼠标点击
	int w;//线条粗细
	int shape;//画图类型
	int m_listPos;		//链表的位置
	bool m_Close;		//是否要关闭文件
	CList<CDC*, CDC*&> m_listDC;		//位图存入链表	
/*	CPoint m_scRollpt;		//滚动条（视图位移点）
	CPoint m_ptPolyFirst;	//折线图中的第一个点
	CPoint m_ptPolyLast;	//折线图中最后点
	CPoint m_arrayP[255];	//存储折线图中所有点
	int m_PolyCount;		//折线的点的计数
	CDC* m_pMDC;			//存于内存中的设备环境对象（DC对象）*/

	afx_msg void OnLine();
	afx_msg void OnRect();
	afx_msg void OnEllpse();
	afx_msg void OnW1();
	afx_msg void OnW2();
	afx_msg void OnW3();
	afx_msg void OnW4();
	afx_msg void OnW5();
	afx_msg void OnW6();
	afx_msg void OnUpdateW1(CCmdUI* pCmdUI);
	afx_msg void OnUpdateW2(CCmdUI* pCmdUI);
	afx_msg void OnUpdateW3(CCmdUI* pCmdUI);
	afx_msg void OnUpdateW4(CCmdUI* pCmdUI);
	afx_msg void OnUpdateW5(CCmdUI* pCmdUI);
	afx_msg void OnUpdateW6(CCmdUI* pCmdUI);
	afx_msg void OnUpdateRect(CCmdUI* pCmdUI);
	afx_msg void OnUpdateLine(CCmdUI* pCmdUI);
	afx_msg void OnUpdateEllpse(CCmdUI* pCmdUI);
	afx_msg void OnPaint();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnColor();
	afx_msg void OnFullcolor();
	afx_msg void OnDrawSave();
	afx_msg void OnPoly();
	afx_msg void OnUpdatePoly(CCmdUI* pCmdUI);
};

#ifndef _DEBUG  // draw2View.cpp 中的调试版本
inline Cdraw2Doc* Cdraw2View::GetDocument() const
   { return reinterpret_cast<Cdraw2Doc*>(m_pDocument); }
#endif

