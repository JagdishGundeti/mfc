#include "stdafx.h"
#include "ReBar.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Helper functions

#define _RBGetDlgCtrlID(hWnd)          ((UINT)(WORD)::GetDlgCtrlID(hWnd))

static HWND _RBChildWindowFromPoint(HWND hWnd, POINT pt)
{
  ASSERT(hWnd != NULL);

  // check child windows
  ::ClientToScreen(hWnd, &pt);
  HWND hWndChild = ::GetWindow(hWnd, GW_CHILD);
  for (; hWndChild != NULL; hWndChild = ::GetWindow(hWndChild, GW_HWNDNEXT))
  {
    if (_RBGetDlgCtrlID(hWndChild) != (WORD)-1 &&
      (::GetWindowLong(hWndChild, GWL_STYLE) & WS_VISIBLE))
    {
      // see if point hits the child window
      CRect rect;
      ::GetWindowRect(hWndChild, rect);
      if (rect.PtInRect(pt))
        return hWndChild;
    }
  }

  return NULL;    // not found
}

/////////////////////////////////////////////////////////////////////////////
// CReBar

BEGIN_MESSAGE_MAP(CReBar, CControlBar)
  //{{AFX_MSG_MAP(CReBar)
  ON_WM_NCCREATE()
  ON_WM_PAINT()
  ON_WM_NCCALCSIZE()
  ON_WM_ERASEBKGND()
  ON_WM_NCPAINT()
  ON_NOTIFY_REFLECT(RBN_HEIGHTCHANGE, OnHeightChange)
  ON_NOTIFY_REFLECT(RBN_ENDDRAG, OnHeightChange)
  ON_MESSAGE(RB_SHOWBAND, OnShowBand)
  //}}AFX_MSG_MAP
END_MESSAGE_MAP()

CReBar::CReBar()
{
  // initialize common controls
  INITCOMMONCONTROLSEX icex;
  icex.dwSize = sizeof(icex);
  icex.dwICC = ICC_COOL_CLASSES;
  VERIFY(InitCommonControlsEx(&icex));

  SetBorders();
}

void CReBar::OnHeightChange(NMHDR* /*pNMHDR*/, LRESULT* pResult)
{
  CFrameWnd* pFrameWnd = GetParentFrame();
  if (pFrameWnd != NULL)
    pFrameWnd->RecalcLayout();
  *pResult = 0;
}

LRESULT CReBar::OnShowBand(WPARAM wParam, LPARAM)
{
  LRESULT lResult = Default();
  if (lResult)
  {
    // keep window visible state in sync with band visible state
    REBARBANDINFO rbBand;
    rbBand.cbSize = sizeof(rbBand);
    rbBand.fMask = RBBIM_CHILD|RBBIM_STYLE;
    VERIFY(DefWindowProc(RB_GETBANDINFO, wParam, (LPARAM)&rbBand));
    CControlBar* pBar = DYNAMIC_DOWNCAST(CControlBar, CWnd::FromHandlePermanent(rbBand.hwndChild));
    BOOL bWindowVisible;
    if (pBar != NULL)
      bWindowVisible = pBar->IsVisible();
    else
      bWindowVisible =  (::GetWindowLong(rbBand.hwndChild, GWL_STYLE) & WS_VISIBLE) != 0;
    BOOL bBandVisible = (rbBand.fStyle & RBBS_HIDDEN) == 0;
    if (bWindowVisible != bBandVisible)
      VERIFY(::ShowWindow(rbBand.hwndChild, bBandVisible ? SW_SHOW : SW_HIDE));
  }
  return lResult;
}

BOOL CReBar::_AddBar(CWnd* pBar, REBARBANDINFO* pRBBI)
{
  ASSERT_VALID(this);
  ASSERT(::IsWindow(m_hWnd));
  ASSERT(pBar != NULL);
  ASSERT(::IsWindow(pBar->m_hWnd));

  pRBBI->cbSize = sizeof(REBARBANDINFO);
  pRBBI->fMask |= RBBIM_CHILD | RBBIM_CHILDSIZE;
  pRBBI->hwndChild = pBar->m_hWnd;

  CSize size;
  CControlBar* pTemp = DYNAMIC_DOWNCAST(CControlBar, pBar);
  if (pTemp != NULL)
  {
    size = pTemp->CalcFixedLayout(FALSE, m_dwStyle & CBRS_ORIENT_HORZ);
  }
  else
  {
    CRect rect;
    pBar->GetWindowRect(&rect);
    size = rect.Size();
  }
  //WINBUG: COMCTL32.DLL is off by 4 pixels in its sizing logic.  Whatever
  //  is specified as the minimum size, the system rebar will allow that band
  //  to be 4 actual pixels smaller!  That's why we add 4 to the size here.
  pRBBI->cxMinChild = size.cx + 4;
  pRBBI->cyMinChild = size.cy;
  BOOL bResult = (BOOL)DefWindowProc(RB_INSERTBAND, (WPARAM)-1, (LPARAM)pRBBI);

  CFrameWnd* pFrameWnd = GetParentFrame();
  if (pFrameWnd != NULL)
    pFrameWnd->RecalcLayout();

  return bResult;
}

BOOL CReBar::AddBar(CWnd* pBar, LPCTSTR pszText, CBitmap* pbmp, DWORD dwStyle)
{
  REBARBANDINFO rbBand;
  rbBand.fMask = RBBIM_STYLE;
  rbBand.fStyle = dwStyle;
  if (pszText != NULL)
  {
    rbBand.fMask |= RBBIM_TEXT;
    rbBand.lpText = const_cast<LPTSTR>(pszText);
  }
  if (pbmp != NULL)
  {
    rbBand.fMask |= RBBIM_BACKGROUND;
    rbBand.hbmBack = (HBITMAP)*pbmp;
  }
  return _AddBar(pBar, &rbBand);
}

BOOL CReBar::AddBar(CWnd* pBar, COLORREF clrFore, COLORREF clrBack, LPCTSTR pszText, DWORD dwStyle)
{
  REBARBANDINFO rbBand;
  rbBand.fMask = RBBIM_STYLE | RBBIM_COLORS;
  rbBand.fStyle = dwStyle;
  rbBand.clrFore = clrFore;
  rbBand.clrBack = clrBack;
  if (pszText != NULL)
  {
    rbBand.fMask |= RBBIM_TEXT;
    rbBand.lpText = const_cast<LPTSTR>(pszText);
  }
  return _AddBar(pBar, &rbBand);
}

CSize CReBar::CalcFixedLayout(BOOL bStretch, BOOL bHorz)
{
  ASSERT_VALID(this);
  ASSERT(::IsWindow(m_hWnd));

  // the union of the band rectangles is the total bounding rect
  int nCount = DefWindowProc(RB_GETBANDCOUNT, 0, 0);
  REBARBANDINFO rbBand;
  rbBand.cbSize = sizeof(rbBand);
  int nTemp;

  // sync up hidden state of the bands
  for (nTemp = nCount; nTemp--; )
  {
    rbBand.fMask = RBBIM_CHILD|RBBIM_STYLE;
    VERIFY(DefWindowProc(RB_GETBANDINFO, nTemp, (LPARAM)&rbBand));
    CControlBar* pBar = DYNAMIC_DOWNCAST(CControlBar, CWnd::FromHandlePermanent(rbBand.hwndChild));
    BOOL bWindowVisible;
    if (pBar != NULL)
      bWindowVisible = pBar->IsVisible();
    else
      bWindowVisible =  (::GetWindowLong(rbBand.hwndChild, GWL_STYLE) & WS_VISIBLE) != 0;
    BOOL bBandVisible = (rbBand.fStyle & RBBS_HIDDEN) == 0;
    if (bWindowVisible != bBandVisible)
      VERIFY(DefWindowProc(RB_SHOWBAND, nTemp, bWindowVisible));
  }

  // determine bounding rect of all visible bands
  CRect rectBound; rectBound.SetRectEmpty();
  for (nTemp = nCount; nTemp--; )
  {
    rbBand.fMask = RBBIM_STYLE;
    VERIFY(DefWindowProc(RB_GETBANDINFO, nTemp, (LPARAM)&rbBand));
    if ((rbBand.fStyle & RBBS_HIDDEN) == 0)
    {
      CRect rect;
      VERIFY(DefWindowProc(RB_GETRECT, nTemp, (LPARAM)&rect));
      rectBound |= rect;
    }
  }

  // add borders as part of bounding rect
  if (!rectBound.IsRectEmpty())
  {
    CRect rect; rect.SetRectEmpty();
    CalcInsideRect(rect, bHorz);
    rectBound.right -= rect.Width();
    rectBound.bottom -= rect.Height();
  }

  return CSize((bHorz && bStretch) ? 32767 : rectBound.Width(),
    (!bHorz && bStretch) ? 32767 : rectBound.Height());
}

CSize CReBar::CalcDynamicLayout(int /*nLength*/, DWORD dwMode)
{
  if (dwMode & LM_HORZDOCK)
    ASSERT(dwMode & LM_HORZ);
  return CalcFixedLayout(dwMode & LM_STRETCH, dwMode & LM_HORZ);
}

BOOL CReBar::Create(CWnd* pParentWnd, DWORD dwCtrlStyle, DWORD dwStyle, UINT nID)
{
  ASSERT_VALID(pParentWnd);   // must have a parent
  ASSERT (!((dwStyle & CBRS_SIZE_FIXED) && (dwStyle & CBRS_SIZE_DYNAMIC)));

  // save the style
  m_dwStyle = dwStyle;
  if (nID == AFX_IDW_REBAR)
    m_dwStyle |= CBRS_HIDE_INPLACE;

  dwStyle &= ~CBRS_ALL;
  dwStyle |= CCS_NOPARENTALIGN|CCS_NOMOVEY|CCS_NODIVIDER|CCS_NORESIZE|RBS_VARHEIGHT;
  dwStyle |= dwCtrlStyle;

  // create the HWND
  CRect rect; rect.SetRectEmpty();
  if (!CWnd::Create(REBARCLASSNAME, NULL, dwStyle, rect, pParentWnd, nID))
    return FALSE;

  // Note: Parent must resize itself for control bar to be resized

  return TRUE;
}

void CReBar::OnUpdateCmdUI(CFrameWnd* pTarget, BOOL bDisableIfNoHandler)
{
  UpdateDialogControls(pTarget, bDisableIfNoHandler);
}

BOOL CReBar::OnNcCreate(LPCREATESTRUCT lpCreateStruct)
{
  if (!CControlBar::OnNcCreate(lpCreateStruct))
    return FALSE;

  // if the owner was set before the rebar was created, set it now
  if (m_hWndOwner != NULL)
    DefWindowProc(RB_SETPARENT, (WPARAM)m_hWndOwner, 0);

  return TRUE;
}

BOOL CReBar::OnEraseBkgnd(CDC*)
{
  return (BOOL)Default();
}

void CReBar::OnNcCalcSize(BOOL /*bCalcValidRects*/, NCCALCSIZE_PARAMS* lpncsp)
{
  // calculate border space (will add to top/bottom, subtract from right/bottom)
  CRect rect; rect.SetRectEmpty();
  BOOL bHorz = (m_dwStyle & CBRS_ORIENT_HORZ) != 0;
  CControlBar::CalcInsideRect(rect, bHorz);

  // adjust non-client area for border space
  lpncsp->rgrc[0].left += rect.left;
  lpncsp->rgrc[0].top += rect.top;
  lpncsp->rgrc[0].right += rect.right;
  lpncsp->rgrc[0].bottom += rect.bottom;
}

void CReBar::OnNcPaint()
{
  EraseNonClient();
}

void CReBar::OnPaint()
{
  Default();
}

int CReBar::OnToolHitTest(CPoint point, TOOLINFO* pTI) const
{
  ASSERT_VALID(this);
  ASSERT(::IsWindow(m_hWnd));

  HWND hWndChild = _RBChildWindowFromPoint(m_hWnd, point);
  CWnd* pWnd = CWnd::FromHandlePermanent(hWndChild);
  if (pWnd == NULL)
    return CControlBar::OnToolHitTest(point, pTI);

  ASSERT(pWnd->m_hWnd == hWndChild);
  return pWnd->OnToolHitTest(point, pTI);
}

LRESULT CReBar::WindowProc(UINT message, WPARAM wParam, LPARAM lParam)
{
  // special handling for certain messages (forwarding to owner/parent)
  switch (message)
  {
  case WM_POPMESSAGESTRING:
  case WM_SETMESSAGESTRING:
    return GetOwner()->SendMessage(message, wParam, lParam);
  }
  return CControlBar::WindowProc(message, wParam, lParam);
}

/////////////////////////////////////////////////////////////////////////////

IMPLEMENT_DYNAMIC(CReBar, CControlBar)

/////////////////////////////////////////////////////////////////////////////
