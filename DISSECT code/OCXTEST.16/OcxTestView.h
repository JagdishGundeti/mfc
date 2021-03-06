// OcxTestView.h : interface of the COcxTestView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_OCXTESTVIEW_H__ED5CE7A6_B2C3_11D0_968D_444553540000__INCLUDED_)
#define AFX_OCXTESTVIEW_H__ED5CE7A6_B2C3_11D0_968D_444553540000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

class COcxTestView : public CView
{
protected: // create from serialization only
	COcxTestView();
	DECLARE_DYNCREATE(COcxTestView)

// Attributes
public:
	COcxTestDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(COcxTestView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~COcxTestView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(COcxTestView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in OcxTestView.cpp
inline COcxTestDoc* COcxTestView::GetDocument()
   { return (COcxTestDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_OCXTESTVIEW_H__ED5CE7A6_B2C3_11D0_968D_444553540000__INCLUDED_)
