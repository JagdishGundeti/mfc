#if !defined(__HOOKLIB_H__)
#define __HOOKLIB_H__

#include "Windows.h"
#include "BaseTyps.h"

#define WM_FINISHJOURNAL		"Finish Journal"

#if !defined(__DLLIMPORT__)

#define DLLENTRY EXTERN_C __declspec(dllexport)
#define STDENTRY EXTERN_C __declspec(dllexport) HRESULT STDAPICALLTYPE
#define STDENTRY_(type) EXTERN_C __declspec(dllexport) type STDAPICALLTYPE

typedef struct tagEVENTNODE
{
	EVENTMSG Event;
	struct tagEVENTNODE *lpNextEvent;
}EVENTNODE, *LPEVENTNODE;

BOOL CALLBACK LibMain(HANDLE, DWORD, LPVOID);
int	CALLBACK WEP(int);
LRESULT CALLBACK KeyboardProc(int, WPARAM, LPARAM);
LRESULT CALLBACK JournalPlaybackProc(int, WPARAM, LPARAM);
LRESULT CALLBACK JournalRecordProc(int, WPARAM, LPARAM);
BOOL UnsetKeyboardHook();
BOOL UnsetJournalPlaybackHook();
BOOL UnsetJournalRecordHook();

#else

#define DLLENTRY EXTERN_C __declspec(dllimport)
#define STDENTRY EXTERN_C __declspec(dllimport) HRESULT STDAPICALLTYPE
#define STDENTRY_(type) EXTERN_C __declspec(dllimport) type STDAPICALLTYPE

#endif

STDENTRY_(BOOL) SetKeyboardHook(HWND, HINSTANCE);
STDENTRY_(BOOL) SetJournalPlaybackHook(HWND, HINSTANCE);
STDENTRY_(BOOL) SetJournalRecordHook(HWND, HINSTANCE);
STDENTRY_(void) RegisterMessage();

#endif