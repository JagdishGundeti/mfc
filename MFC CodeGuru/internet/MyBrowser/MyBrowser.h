// MyBrowser.h : main header file for the MYBROWSER application
//

#if !defined(AFX_MYBROWSER_H__7A739619_F300_11D1_9F48_C49E4E07811D__INCLUDED_)
#define AFX_MYBROWSER_H__7A739619_F300_11D1_9F48_C49E4E07811D__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMyBrowserApp:
// See MyBrowser.cpp for the implementation of this class
//

class CMyBrowserApp : public CWinApp
{
public:
	CMyBrowserApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyBrowserApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMyBrowserApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYBROWSER_H__7A739619_F300_11D1_9F48_C49E4E07811D__INCLUDED_)
