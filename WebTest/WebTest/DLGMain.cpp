// DLGMain.cpp : 实现文件
//

#include "stdafx.h"
#include "WebTest.h"
#include "DLGMain.h"
#include "afxdialogex.h"


// CDLGMain 对话框

IMPLEMENT_DYNAMIC(CDLGMain, CDialogEx)

CDLGMain::CDLGMain(CWnd* pParent /*=NULL*/)
	: CDLGBase(CDLGMain::IDD, pParent)
{

}

CDLGMain::~CDLGMain()
{
}

void CDLGMain::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDLGMain, CDialogEx)
END_MESSAGE_MAP()


// CDLGMain 消息处理程序