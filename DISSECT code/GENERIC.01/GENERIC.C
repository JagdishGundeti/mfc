//---------------------------------------------------------------------
//           Generic - �ܽd Win32 �{������¦�g�k
//                   Top Studio * J.J.Hou
// �ɦW     : generic.c
// �@��     : �J�T��
// �sĶ�p�� : �аѦ� generic.mak
//---------------------------------------------------------------------

#include <windows.h>   // �C�@�� Windows �{�����ݭn�t�J����
#include "resource.h"  // ���t�U�� resource IDs
#include "generic.h"   // ���{�����t�J��

HINSTANCE _hInst;      // Instance handle
HWND      _hWnd;

char _szAppName[] = "Generic";    // �{���W��
char _szTitle[]   = "Generic Sample Application"; // �������D

//---------------------------------------------------------------------
// WinMain - �{���i�J�I
//---------------------------------------------------------------------
int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                     LPSTR lpCmdLine,     int nCmdShow)
{
MSG msg;

  UNREFERENCED_PARAMETER(lpCmdLine);      // �קK�sĶ�ɪ�ĵ�i

  if (!hPrevInstance)
      if (!InitApplication(hInstance))
          return (FALSE);

  if (!InitInstance(hInstance, nCmdShow))
      return (FALSE);

  while (GetMessage(&msg, NULL, 0, 0)) {
      TranslateMessage(&msg);
      DispatchMessage(&msg);
  }

  return (msg.wParam); // �Ǧ^ PostQuitMessage ���Ѽ�
}
//---------------------------------------------------------------------
// InitApplication - ���U�������O
//---------------------------------------------------------------------
BOOL InitApplication(HINSTANCE hInstance)
{
WNDCLASS  wc;

  wc.style         = CS_HREDRAW | CS_VREDRAW;
  wc.lpfnWndProc   = (WNDPROC)WndProc;     // �����禡
  wc.cbClsExtra    = 0;
  wc.cbWndExtra    = 0;
  wc.hInstance     = hInstance;
  wc.hIcon         = LoadIcon(hInstance, "jjhouricon");
  wc.hCursor       = LoadCursor(NULL, IDC_ARROW);
  wc.hbrBackground = GetStockObject(WHITE_BRUSH);  // �����I���C��
  wc.lpszMenuName  = "GenericMenu";                // .RC �ҩw�q������
  wc.lpszClassName = _szAppName;

  return (RegisterClass(&wc));
}
//---------------------------------------------------------------------
// InitInstance - ���͵���
//---------------------------------------------------------------------
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
  _hInst = hInstance; // �x�s�������ܼơA��K�ϥΡC

  _hWnd = CreateWindow(
                       _szAppName,
                       _szTitle,
                       WS_OVERLAPPEDWINDOW,
                       CW_USEDEFAULT,
                       CW_USEDEFAULT,
                       CW_USEDEFAULT,
                       CW_USEDEFAULT,
                       NULL,
                       NULL,
                       hInstance,
                       NULL
                      );

  if (!_hWnd)
      return (FALSE);

  ShowWindow(_hWnd, nCmdShow); // ��ܵ���
  UpdateWindow(_hWnd);         // �e�X WM_PAINT
  return (TRUE);
}
//---------------------------------------------------------------------
// WndProc - �����禡
//---------------------------------------------------------------------
LRESULT CALLBACK WndProc(HWND hWnd,     UINT message,
                         WPARAM wParam, LPARAM lParam)
{
int wmId, wmEvent;

  switch (message) {
    case WM_COMMAND:

         wmId    = LOWORD(wParam);
         wmEvent = HIWORD(wParam);

         switch (wmId) {
           case IDM_ABOUT:
                DialogBox(_hInst,
                          "AboutBox",     // ��ܲ��귽�W��
                          hWnd,           // ������
                          (DLGPROC)About  // ��ܲ��禡�W��
                         );
                break;

           case IDM_EXIT:
                // �ϥΪ̷Q�����{���C�B�z�覡�P WM_CLOSE �ۦP�C
                DestroyWindow (hWnd);
                break;

           default:
                return (DefWindowProc(hWnd, message, wParam, lParam));
         }
         break;

    case WM_DESTROY:  // �����w�g�Q�R�� (�{���Y�N����)�C
         PostQuitMessage(0);
         break;

    default:
         return (DefWindowProc(hWnd, message, wParam, lParam));
  }
  return (0);
}
//---------------------------------------------------------------------
// About - ��ܲ��禡
//---------------------------------------------------------------------
LRESULT CALLBACK About(HWND hDlg,     UINT message,
                       WPARAM wParam, LPARAM lParam)
{
  UNREFERENCED_PARAMETER(lParam);      // �קK�sĶ�ɪ�ĵ�i

  switch (message) {
    case WM_INITDIALOG:
         return (TRUE);      // TRUE ���ܧڤw�B�z�L�o�ӰT��

    case WM_COMMAND:
         if (LOWORD(wParam) == IDOK
             || LOWORD(wParam) == IDCANCEL) {
             EndDialog(hDlg, TRUE);
             return (TRUE);  // TRUE ���ܧڤw�B�z�L�o�ӰT��
         }
         break;
  }
  return (FALSE); // FALSE ���ܧڨS���B�z�o�ӰT��
}
//------------------------ end of file ------------------------------
