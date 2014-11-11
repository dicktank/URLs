#pragma once
#include "afxdialogex.h"
class CDLGBase :
	public CDialogEx
{
public:
	CDLGBase(UINT id, CWnd* pParent);
	~CDLGBase();
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext);
protected:
	UINT m_id;
	virtual void OnOK();
	virtual void OnCancel();
};

