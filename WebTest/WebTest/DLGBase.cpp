#include "stdafx.h"
#include "DLGBase.h"


CDLGBase::CDLGBase(UINT id, CWnd* pParent) 
: CDialogEx(id, pParent)
{
	m_id = id;
}


CDLGBase::~CDLGBase()
{
}


BOOL CDLGBase::Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext)
{
	// TODO:  在此添加专用代码和/或调用基类

	return CDialogEx::Create(m_id, pParentWnd);
}


void CDLGBase::OnOK()
{
	// TODO:  在此添加专用代码和/或调用基类
	return;
	//CDialogEx::OnOK();
}


void CDLGBase::OnCancel()
{
	// TODO:  在此添加专用代码和/或调用基类
	return;
	//CDialogEx::OnCancel();
}
