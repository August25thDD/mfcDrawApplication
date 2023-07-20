
// draw2View.cpp: Cdraw2View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "draw2.h"
#endif

#include "draw2Doc.h"
#include "draw2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cdraw2View

IMPLEMENT_DYNCREATE(Cdraw2View, CView)

BEGIN_MESSAGE_MAP(Cdraw2View, CView)
	ON_COMMAND(ID_LINE, &Cdraw2View::OnLine)
	ON_COMMAND(ID_RECT, &Cdraw2View::OnRect)
	ON_COMMAND(ID_ELLPSE, &Cdraw2View::OnEllpse)
	ON_COMMAND(ID_W1, &Cdraw2View::OnW1)
	ON_COMMAND(ID_W2, &Cdraw2View::OnW2)
	ON_COMMAND(ID_W3, &Cdraw2View::OnW3)
	ON_COMMAND(ID_W4, &Cdraw2View::OnW4)
	ON_COMMAND(ID_W5, &Cdraw2View::OnW5)
	ON_COMMAND(ID_W6, &Cdraw2View::OnW6)
	ON_UPDATE_COMMAND_UI(ID_W1, &Cdraw2View::OnUpdateW1)
	ON_UPDATE_COMMAND_UI(ID_W2, &Cdraw2View::OnUpdateW2)
	ON_UPDATE_COMMAND_UI(ID_W3, &Cdraw2View::OnUpdateW3)
	ON_UPDATE_COMMAND_UI(ID_W4, &Cdraw2View::OnUpdateW4)
	ON_UPDATE_COMMAND_UI(ID_W5, &Cdraw2View::OnUpdateW5)
	ON_UPDATE_COMMAND_UI(ID_W6, &Cdraw2View::OnUpdateW6)
	ON_UPDATE_COMMAND_UI(ID_RECT, &Cdraw2View::OnUpdateRect)
	ON_UPDATE_COMMAND_UI(ID_LINE, &Cdraw2View::OnUpdateLine)
	ON_UPDATE_COMMAND_UI(ID_ELLPSE, &Cdraw2View::OnUpdateEllpse)
	ON_WM_PAINT()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_COLOR, &Cdraw2View::OnColor)
	ON_COMMAND(ID_FULLCOLOR, &Cdraw2View::OnFullcolor)
//	ON_COMMAND(ID_P1, &Cdraw2View::OnP1)
ON_COMMAND(ID_DRAW_SAVE, &Cdraw2View::OnDrawSave)
ON_COMMAND(ID_POLY, &Cdraw2View::OnPoly)
ON_UPDATE_COMMAND_UI(ID_POLY, &Cdraw2View::OnUpdatePoly)
END_MESSAGE_MAP()

// Cdraw2View 构造/析构

Cdraw2View::Cdraw2View() noexcept
{
	// TODO: 在此处添加构造代码
	w = 1;
	shape = 0;
}

Cdraw2View::~Cdraw2View()
{
}

BOOL Cdraw2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cdraw2View 绘图

void Cdraw2View::OnDraw(CDC* /*pDC*/)
{
	Cdraw2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cdraw2View 诊断

#ifdef _DEBUG
void Cdraw2View::AssertValid() const
{
	CView::AssertValid();
}

void Cdraw2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cdraw2Doc* Cdraw2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cdraw2Doc)));
	return (Cdraw2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cdraw2View 消息处理程序




void Cdraw2View::OnW1()
{
	// TODO: 在此添加命令处理程序代码
	w = 1;//令线宽为1
}


void Cdraw2View::OnW2()
{
	// TODO: 在此添加命令处理程序代码
	w = 2;//令线宽为2
}


void Cdraw2View::OnW3()
{
	// TODO: 在此添加命令处理程序代码
	w = 3;//令线宽为3
}


void Cdraw2View::OnW4()
{
	// TODO: 在此添加命令处理程序代码
	w = 4;//令线宽为4
}


void Cdraw2View::OnW5()
{
	// TODO: 在此添加命令处理程序代码
	w = 5;//令线宽为5
}


void Cdraw2View::OnW6()
{
	// TODO: 在此添加命令处理程序代码
	w = 6;//令线宽为6
}


void Cdraw2View::OnUpdateW1(CCmdUI* pCmdUI)
{
	// TODO: 在此添加命令更新用户界面处理程序代码
	pCmdUI->SetRadio(w == 1);//令线宽为1时，此选项前有圆点
}


void Cdraw2View::OnUpdateW2(CCmdUI* pCmdUI)
{
	// TODO: 在此添加命令更新用户界面处理程序代码
	pCmdUI->SetRadio(w == 2);//令线宽为2时，此选项前有圆点
}


void Cdraw2View::OnUpdateW3(CCmdUI* pCmdUI)
{
	// TODO: 在此添加命令更新用户界面处理程序代码
	pCmdUI->SetRadio(w == 3);//令线宽为3时，此选项前有圆点
}


void Cdraw2View::OnUpdateW4(CCmdUI* pCmdUI)
{
	// TODO: 在此添加命令更新用户界面处理程序代码
	pCmdUI->SetRadio(w == 4);//令线宽为4时，此选项前有圆点
}


void Cdraw2View::OnUpdateW5(CCmdUI* pCmdUI)
{
	// TODO: 在此添加命令更新用户界面处理程序代码
	pCmdUI->SetRadio(w == 5);//令线宽为5时，此选项前有圆点
}


void Cdraw2View::OnUpdateW6(CCmdUI* pCmdUI)
{
	// TODO: 在此添加命令更新用户界面处理程序代码
	pCmdUI->SetRadio(w == 6);//令线宽为6时，此选项前有圆点
}

void Cdraw2View::OnLine()
{
	// TODO: 在此添加命令处理程序代码
	shape = 1;//选择直线，则令shape=1
}


void Cdraw2View::OnRect()
{
	// TODO: 在此添加命令处理程序代码
	shape = 2;//选择矩形，则令shape=2
}


void Cdraw2View::OnEllpse()
{
	// TODO: 在此添加命令处理程序代码
	shape = 3;//选择椭圆，则令shape=3

}


void Cdraw2View::OnPoly()
{
	shape = 4;//选择多边形，则令shape=4
}


void Cdraw2View::OnUpdateLine(CCmdUI* pCmdUI)
{
	// TODO: 在此添加命令更新用户界面处理程序代码
	pCmdUI->SetCheck(shape == 1);//shape == 1时，直线选项前打上勾
}

void Cdraw2View::OnUpdateRect(CCmdUI* pCmdUI)
{
	// TODO: 在此添加命令更新用户界面处理程序代码
	pCmdUI->SetCheck(shape == 2);//shape == 2时，矩形选项前打上勾
}


void Cdraw2View::OnUpdateEllpse(CCmdUI* pCmdUI)
{
	// TODO: 在此添加命令更新用户界面处理程序代码
	pCmdUI->SetCheck(shape == 3);//shape == 3时，椭圆选项前打上勾
}

void Cdraw2View::OnUpdatePoly(CCmdUI* pCmdUI)
{
	pCmdUI->SetCheck(shape == 4);//shape == 4时，多边形选项前打上勾
}


void Cdraw2View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CView::OnPaint()
// TODO: 在此处添加消息处理程序代码
// 不要为绘制消息而调用 CWnd::OnPaint()
	CPen pen;//定义画笔
	CBrush brush;//定义画刷
	pen.CreatePen(PS_SOLID, w, m_nColor);//创建画笔
	brush.CreateSolidBrush(m_fColor);//创建画刷
	dc.SelectObject(&pen);//获取画笔
	dc.SelectObject(&brush);//获取画刷
	if (shape == 1) {
		dc.MoveTo(opoint.x, opoint.y);
		dc.LineTo(cpoint.x, cpoint.y);//绘制直线，从opoint到cpoint连线
	}
	if (shape == 2) {
		dc.Rectangle(opoint.x, opoint.y, cpoint.x, cpoint.y);//绘制矩形
	}
	if (shape == 3) {
		dc.Ellipse(opoint.x, opoint.y, cpoint.x, cpoint.y);//绘制椭圆
	}

	
}

void Cdraw2View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (m_Down) {			//如果鼠标按下
		cpoint = point;//把鼠标所在点的坐标赋给终点坐标cpoint
	}
	CView::OnMouseMove(nFlags, point);
}


void Cdraw2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	m_Down = TRUE;//鼠标按下
	SetCapture();//获取坐标
	opoint = point;//把鼠标所在点的坐标赋给起点坐标opoint
	ReleaseCapture();//释放坐标
	CView::OnLButtonDown(nFlags, point);
}


void Cdraw2View::OnLButtonUp(UINT nFlags, CPoint point)
{
	m_Down = FALSE;		//鼠标不按下，即弹起
	Invalidate(0);		//刷新
	CView::OnLButtonUp(nFlags, point);
}


void Cdraw2View::OnColor()
{
	// TODO: 在此添加命令处理程序代码
	CColorDialog Color;//创建颜色对话框
	if (Color.DoModal() == IDOK)//如果用户点击确定按钮
		m_nColor = Color.GetColor();//更改颜色，把颜色赋值到m_nColor

}


void Cdraw2View::OnFullcolor()
{
	// TODO: 在此添加命令处理程序代码
	CColorDialog FullColor;//创建颜色对话框
	if (FullColor.DoModal() == IDOK)//如果用户点击确定按钮
		m_fColor = FullColor.GetColor();//更改颜色，把颜色赋值到m_fColor

}


void Cdraw2View::OnDrawSave()//文件保存
{
	// TODO: 在此添加命令处理程序代码
	// TODO: 在此添加命令处理程序代码
	m_Close = true;	//表示要关闭
	CClientDC dc(this);
	CRect rect;
	BOOL  showMsgTag;                  //是否要弹出”图像保存成功对话框"     
	GetClientRect(&rect);                  //获取画布大小    
	HBITMAP hbitmap = CreateCompatibleBitmap(dc, rect.Width(), rect.Height());       //创建兼容位图  

	HDC hdc = CreateCompatibleDC(dc);      //创建兼容DC，以便将图像保存为不同的格式    
	HBITMAP hOldMap = (HBITMAP)SelectObject(hdc, hbitmap);  //将位图选入DC，并保存返回值   

	BitBlt(hdc, 0, 0, rect.right - rect.left, rect.bottom - rect.top, dc, 0, 0, SRCCOPY);        //将屏幕DC的图像复制到内存DC中    

	CImage image;
	image.Attach(hbitmap);                //将位图转化为一般图像     

	showMsgTag = TRUE;
	CString  strFilter = _T("位图文件(*.bmp)|*.bmp|JPEG 图像文件|*.jpg|GIF图像文件 | *.gif | PNG图像文件 | *.png | 其他格式*.*) | *.* || ");

	CFileDialog dlg(FALSE, _T("bmp"), _T("test.bmp"), NULL, strFilter);

	if (dlg.DoModal() != IDOK)
	{
		m_Close = false;		//表示不关闭
		return;
	}
	CString strFileName;          //如果用户没有指定文件扩展名，则为其添加一个  

	CString strExtension;

	strFileName = dlg.m_ofn.lpstrFile;

	if (dlg.m_ofn.nFileExtension == 0)               //扩展名项目为0    
	{
		switch (dlg.m_ofn.nFilterIndex)
		{
		case 1:
			strExtension = "bmp"; break;
		case 2:
			strExtension = "jpg"; break;
		case 3:
			strExtension = "gif"; break;
		case 4:
			strExtension = "png"; break;
		default:
			break;
		}
		strFileName = strFileName + "." + strExtension;
	}
	HRESULT hResult = image.Save(strFileName);     //保存图像    
	if (FAILED(hResult))
	{
		MessageBox(_T("保存图像文件失败！"), strFileName);
	}
	else
	{
		if (showMsgTag)
			MessageBox(_T("文件保存成功！"), strFileName);
	}
	image.Detach();
	SelectObject(hdc, hOldMap);
}






