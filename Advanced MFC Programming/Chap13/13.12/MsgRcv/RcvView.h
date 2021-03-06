#if !defined(AFX_RCVVIEW_H__D649DA79_3EFC_11D1_9C9A_444553540000__INCLUDED_)
#define AFX_RCVVIEW_H__D649DA79_3EFC_11D1_9C9A_444553540000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif

class CMsgRcvView : public CEditView
{
protected:
	CMsgRcvView();
	DECLARE_DYNCREATE(CMsgRcvView)

public:
	CMsgRcvDoc* GetDocument();

	//{{AFX_VIRTUAL(CMsgRcvView)
	public:
	virtual void OnDraw(CDC* pDC);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate();
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

public:
	virtual ~CMsgRcvView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	//{{AFX_MSG(CMsgRcvView)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG
inline CMsgRcvDoc* CMsgRcvView::GetDocument()
   { return (CMsgRcvDoc*)m_pDocument; }
#endif
//{{AFX_INSERT_LOCATION}}
#endif // !defined(AFX_RCVVIEW_H__D649DA79_3EFC_11D1_9C9A_444553540000__INCLUDED_)
