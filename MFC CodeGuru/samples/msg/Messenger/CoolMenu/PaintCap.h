////////////////////////////////////////////////////////////////
// 1997 Microsoft Systems Journal. 
// If this code works, it was written by Paul DiLascia.
// If not, I don't know who wrote it.
//
#ifndef _PAINTCAP_H
#define _PAINTCAP_H

#include "Subclass.h"

//////////////////
// This struct is passed to client as LPARAM of callback message
//
struct PAINTCAP
{
	CSize	m_szCaption;	// size of caption rectangle
	CDC*	m_pDC;			// DC to draw in
};

//////////////////
// Generic caption painter. Handles WM_NCPAINT, WM_NCACTIVATE, etc. to
// handle drawing custom captions. To use it:
//
// - call Install from your frame's OnCreate function. You must specify a
//   callback message CCaptionPainter will send you when it's time to paint.
//	 (Vytukas, if no callback message specified will be called 
//   PaintCaption(bool, PAINTCAP*). Params similar to message params, see below)
//
// - handle the callback message: When you get nPaintMsg, respond by painting
//   your caption.
//
//	  nMsg   = your callback message specified in Install;
//	  wParam	= whether caption is active (TRUE) or not (FALSE);
//    lParam	= ptr to PAINTCAP struct above, or NULL if Windows sent
//				  WM_SETTINGSCHANGE: you should update your colors, fonts, etc.
//
//   The PAINTCAP struct contains a DC the size of the caption that you should
//   draw into. CCaptionPainter mantains a bitmap for the caption to do
//   flicker-free drawing. All you have to do is paint into the DC
//   when you get the callback message.
//
// - in your handler, you MUST call DrawIcon and DrawButtons to draw the
//   caption icon and buttons, or else they will not apear. If you are drawing
//   custom caption buttons as well, you must handle WM_NCLBUTTONDOWN & co.
//   yourself. CCaptionPainter does not handle the mouse for custom caption
//   buttons. DrawIcon/DrawButtons both return width of area painted.
//
class CCaptionPainter : public CSubclassWnd
{
protected:
	CBitmap		m_bmCaption[2];		// bitmaps for active/inactive captions 
	CSize		m_szCaption;		// size of caption rectangle
	BOOL		m_bActive;			// active/inactive state
	UINT		m_nPaintMsg;		// callback message to paint caption
	DECLARE_DYNAMIC(CCaptionPainter);

	// Helper
	void			PaintCaption();
	//default does nothing (Vytukas)
	virtual void	PaintCaption(BOOL bActive, const PAINTCAP*){bActive;};

	// These are similar to, but NOT the same as the equivalent CWnd fns. Don't
	// override unless you're a guru, and even THEN I wouldn't recommend it.
	virtual LRESULT WindowProc(UINT msg, WPARAM wp, LPARAM lp);	
	virtual void OnNcPaint(HRGN hUpdateRgn);
	virtual BOOL OnNcActivate(BOOL bActive);
	virtual void OnSetText(LPCTSTR lpText);

public:
	CCaptionPainter();
	virtual ~CCaptionPainter();

	BOOL Install(CFrameWnd* pFrameWnd, UINT nPaintMsg);
	int  DrawIcon(const PAINTCAP& pc);
	int  DrawButtons(const PAINTCAP& pc);
	void Invalidate() { m_szCaption=CSize(0,0); }
};

#endif
