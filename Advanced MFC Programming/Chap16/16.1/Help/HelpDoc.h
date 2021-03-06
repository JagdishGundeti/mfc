#if !defined(AFX_HELPDOC_H__79855C2A_4C51_11D1_9C9A_444553540000__INCLUDED_)
#define AFX_HELPDOC_H__79855C2A_4C51_11D1_9C9A_444553540000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif

class CHelpDoc : public CDocument
{
protected:
	CHelpDoc();
	DECLARE_DYNCREATE(CHelpDoc)

public:
	//{{AFX_VIRTUAL(CHelpDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

public:
	virtual ~CHelpDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	//{{AFX_MSG(CHelpDoc)
	afx_msg void OnHelptestTestA();
	afx_msg void OnHelptestTestB();
	afx_msg void OnHelptestTestC();
	afx_msg void OnHelptestTestD();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};
//{{AFX_INSERT_LOCATION}}
#endif // !defined(AFX_HELPDOC_H__79855C2A_4C51_11D1_9C9A_444553540000__INCLUDED_)
