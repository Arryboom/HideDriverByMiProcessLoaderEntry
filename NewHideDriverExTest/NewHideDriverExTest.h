
// NewHideDriverExTest.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CNewHideDriverExTestApp: 
// �йش����ʵ�֣������ NewHideDriverExTest.cpp
//

class CNewHideDriverExTestApp : public CWinApp
{
public:
	CNewHideDriverExTestApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CNewHideDriverExTestApp theApp;