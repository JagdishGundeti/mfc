// ex21bDoc.h : interface of the CEx21bDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX21BDOC_H__CBB3140E_974D_11D0_BED2_00C04FC2A0C2__INCLUDED_)
#define AFX_EX21BDOC_H__CBB3140E_974D_11D0_BED2_00C04FC2A0C2__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000


class CEx21bDoc : public CDocument
{
protected: // create from serialization only
	CEx21bDoc();
	DECLARE_DYNCREATE(CEx21bDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEx21bDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CEx21bDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CEx21bDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EX21BDOC_H__CBB3140E_974D_11D0_BED2_00C04FC2A0C2__INCLUDED_)
