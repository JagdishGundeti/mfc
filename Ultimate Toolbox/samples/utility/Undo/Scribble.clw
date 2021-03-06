; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CScribbleApp
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "scribble.h"
LastPage=0

ClassCount=7
Class1=CChildFrame
Class2=CInPlaceFrame
Class3=CMainFrame
Class4=CPenWidthsDlg
Class5=CScribbleApp
Class6=CScribbleView
Class7=CScribbleDoc

ResourceCount=9
Resource1=IDR_SCRIBBTYPE_SRVR_EMB (_MAC)
Resource2=IDR_SCRIBBTYPE
Resource3=IDR_SCRIBBTYPE (_MAC)
Resource4=IDR_SCRIBBTYPE_SRVR_IP (_MAC)
Resource5=IDR_MAINFRAME
Resource6=IDR_MAINFRAME (_MAC)
Resource7=IDR_SCRIBBTYPE_SRVR_EMB
Resource8=IDR_SCRIBBTYPE_SRVR_IP
Resource9=IDD_PEN_WIDTHS

[CLS:CChildFrame]
Type=0
BaseClass=CMDIChildWnd
HeaderFile=CHILDFRM.H
ImplementationFile=CHILDFRM.CPP

[CLS:CInPlaceFrame]
Type=0
BaseClass=COleIPFrameWnd
HeaderFile=IPFRAME.H
ImplementationFile=IPFRAME.CPP

[CLS:CMainFrame]
Type=0
BaseClass=CMDIFrameWnd
HeaderFile=MAINFRM.H
ImplementationFile=MAINFRM.CPP
LastObject=ID_FILE_SEND_MAIL
Filter=T

[CLS:CPenWidthsDlg]
Type=0
BaseClass=CDialog
HeaderFile=PENDLG.H
ImplementationFile=PENDLG.CPP

[CLS:CScribbleApp]
Type=0
BaseClass=CWinApp
HeaderFile=SCRIBBLE.H
ImplementationFile=SCRIBBLE.CPP
Filter=N
VirtualFilter=AC
LastObject=CScribbleApp

[CLS:CScribbleDoc]
Type=0
BaseClass=COleServerDoc
HeaderFile=Scribdoc.h
ImplementationFile=Scribdoc.cpp
Filter=N
LastObject=ID_FILE_SEND_MAIL

[CLS:CScribbleView]
Type=0
BaseClass=CScrollView
HeaderFile=SCRIBVW.H
ImplementationFile=Scribvw.cpp

[DLG:IDD_PEN_WIDTHS]
Type=1
Class=CPenWidthsDlg
ControlCount=7
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_DEFAULT_PEN_WIDTHS,button,1342242816
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_THIN_PEN_WIDTH,edit,1350631552
Control7=IDC_THICK_PEN_WIDTH,edit,1350631552

[MNU:IDR_SCRIBBTYPE]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_CLOSE
Command4=ID_FILE_SAVE
Command5=ID_FILE_SAVE_AS
Command6=ID_FILE_PRINT
Command7=ID_FILE_PRINT_PREVIEW
Command8=ID_FILE_PRINT_SETUP
Command9=ID_FILE_SEND_MAIL
Command10=ID_FILE_MRU_FILE1
Command11=ID_APP_EXIT
Command12=ID_EDIT_UNDO
Command13=ID_EDIT_REDO
Command14=ID_EDIT_CLEAR_ALL
Command15=ID_PEN_THICK_OR_THIN
Command16=ID_PEN_WIDTHS
Command17=ID_VIEW_TOOLBAR
Command18=ID_VIEW_STATUS_BAR
Command19=ID_WINDOW_NEW
Command20=ID_WINDOW_CASCADE
Command21=ID_WINDOW_TILE_HORZ
Command22=ID_WINDOW_ARRANGE
Command23=ID_HELP_FINDER
Command24=ID_APP_ABOUT
CommandCount=24

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_PEN_THICK_OR_THIN
Command5=ID_FILE_PRINT
Command6=ID_APP_ABOUT
Command7=ID_CONTEXT_HELP
CommandCount=7

[TB:IDR_SCRIBBTYPE_SRVR_IP]
Type=1
Class=?
Command1=ID_PEN_THICK_OR_THIN
Command2=ID_APP_ABOUT
Command3=ID_CONTEXT_HELP
CommandCount=3

[MNU:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_PRINT_SETUP
Command4=ID_FILE_MRU_FILE1
Command5=ID_APP_EXIT
Command6=ID_VIEW_TOOLBAR
Command7=ID_VIEW_STATUS_BAR
Command8=ID_HELP_FINDER
Command9=ID_APP_ABOUT
CommandCount=9

[MNU:IDR_SCRIBBTYPE_SRVR_EMB]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_CLOSE
Command4=ID_FILE_UPDATE
Command5=ID_FILE_SAVE_COPY_AS
Command6=ID_FILE_PRINT
Command7=ID_FILE_PRINT_PREVIEW
Command8=ID_FILE_PRINT_SETUP
Command9=ID_FILE_SEND_MAIL
Command10=ID_FILE_MRU_FILE1
Command11=ID_APP_EXIT
Command12=ID_EDIT_UNDO
Command13=ID_EDIT_REDO
Command14=ID_EDIT_CLEAR_ALL
Command15=ID_PEN_THICK_OR_THIN
Command16=ID_PEN_WIDTHS
Command17=ID_VIEW_TOOLBAR
Command18=ID_VIEW_STATUS_BAR
Command19=ID_WINDOW_NEW
Command20=ID_WINDOW_CASCADE
Command21=ID_WINDOW_TILE_HORZ
Command22=ID_WINDOW_ARRANGE
Command23=ID_HELP_FINDER
Command24=ID_APP_ABOUT
CommandCount=24

[MNU:IDR_SCRIBBTYPE_SRVR_IP]
Type=1
Class=?
Command1=ID_EDIT_UNDO
Command2=ID_EDIT_REDO
Command3=ID_EDIT_CLEAR_ALL
Command4=ID_PEN_THICK_OR_THIN
Command5=ID_PEN_WIDTHS
Command6=ID_VIEW_TOOLBAR
Command7=ID_HELP_FINDER
Command8=ID_APP_ABOUT
CommandCount=8

[MNU:IDR_MAINFRAME (_MAC)]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_PRINT_SETUP
Command4=ID_FILE_MRU_FILE1
Command5=ID_APP_EXIT
Command6=ID_VIEW_TOOLBAR
Command7=ID_VIEW_STATUS_BAR
Command8=ID_HELP_FINDER
CommandCount=8

[MNU:IDR_SCRIBBTYPE (_MAC)]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_CLOSE
Command4=ID_FILE_SAVE
Command5=ID_FILE_SAVE_AS
Command6=ID_FILE_PRINT_SETUP
Command7=ID_FILE_PRINT
Command8=ID_FILE_PRINT_PREVIEW
Command9=ID_FILE_MRU_FILE1
Command10=ID_APP_EXIT
Command11=ID_EDIT_UNDO
Command12=ID_EDIT_CLEAR_ALL
Command13=ID_PEN_THICK_OR_THIN
Command14=ID_PEN_WIDTHS
Command15=ID_VIEW_TOOLBAR
Command16=ID_VIEW_STATUS_BAR
Command17=ID_WINDOW_NEW
Command18=ID_WINDOW_CASCADE
Command19=ID_WINDOW_TILE_HORZ
Command20=ID_HELP_FINDER
CommandCount=20

[MNU:IDR_SCRIBBTYPE_SRVR_EMB (_MAC)]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_CLOSE
Command4=ID_FILE_UPDATE
Command5=ID_FILE_SAVE_COPY_AS
Command6=ID_FILE_PRINT_SETUP
Command7=ID_FILE_PRINT
Command8=ID_FILE_PRINT_PREVIEW
Command9=ID_FILE_MRU_FILE1
Command10=ID_APP_EXIT
Command11=ID_EDIT_UNDO
Command12=ID_EDIT_CLEAR_ALL
Command13=ID_PEN_THICK_OR_THIN
Command14=ID_PEN_WIDTHS
Command15=ID_VIEW_TOOLBAR
Command16=ID_VIEW_STATUS_BAR
Command17=ID_WINDOW_NEW
Command18=ID_WINDOW_CASCADE
Command19=ID_WINDOW_TILE_HORZ
Command20=ID_HELP_FINDER
CommandCount=20

[MNU:IDR_SCRIBBTYPE_SRVR_IP (_MAC)]
Type=1
Class=?
Command1=ID_EDIT_UNDO
Command2=ID_EDIT_CLEAR_ALL
Command3=ID_PEN_THICK_OR_THIN
Command4=ID_PEN_WIDTHS
Command5=ID_VIEW_TOOLBAR
Command6=ID_HELP_FINDER
CommandCount=6

[ACL:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_EDIT_COPY
Command2=ID_FILE_NEW
Command3=ID_FILE_OPEN
Command4=ID_FILE_PRINT
Command5=ID_FILE_SAVE
Command6=ID_EDIT_PASTE
Command7=ID_EDIT_UNDO
Command8=ID_EDIT_CUT
Command9=ID_HELP
Command10=ID_CONTEXT_HELP
Command11=ID_NEXT_PANE
Command12=ID_PREV_PANE
Command13=ID_EDIT_COPY
Command14=ID_EDIT_PASTE
Command15=ID_EDIT_CUT
Command16=ID_EDIT_REDO
Command17=ID_EDIT_UNDO
CommandCount=17

[ACL:IDR_SCRIBBTYPE_SRVR_EMB]
Type=1
Class=?
Command1=ID_EDIT_COPY
Command2=ID_FILE_NEW
Command3=ID_FILE_OPEN
Command4=ID_FILE_PRINT
Command5=ID_FILE_UPDATE
Command6=ID_EDIT_PASTE
Command7=ID_EDIT_UNDO
Command8=ID_EDIT_CUT
Command9=ID_HELP
Command10=ID_CONTEXT_HELP
Command11=ID_NEXT_PANE
Command12=ID_PREV_PANE
Command13=ID_EDIT_COPY
Command14=ID_EDIT_PASTE
Command15=ID_EDIT_CUT
Command16=ID_EDIT_REDO
Command17=ID_EDIT_UNDO
CommandCount=17

[ACL:IDR_SCRIBBTYPE_SRVR_IP]
Type=1
Class=?
Command1=ID_EDIT_COPY
Command2=ID_EDIT_PASTE
Command3=ID_EDIT_UNDO
Command4=ID_EDIT_CUT
Command5=ID_CANCEL_EDIT_SRVR
Command6=ID_HELP
Command7=ID_CONTEXT_HELP
Command8=ID_EDIT_COPY
Command9=ID_EDIT_PASTE
Command10=ID_EDIT_CUT
Command11=ID_EDIT_REDO
Command12=ID_EDIT_UNDO
CommandCount=12

[ACL:IDR_MAINFRAME (_MAC)]
Type=1
Class=?
Command1=ID_EDIT_COPY
Command2=ID_FILE_NEW
Command3=ID_FILE_OPEN
Command4=ID_FILE_PRINT
Command5=ID_APP_EXIT
Command6=ID_FILE_SAVE
Command7=ID_EDIT_PASTE
Command8=ID_EDIT_UNDO
Command9=ID_EDIT_CUT
Command10=ID_HELP
Command11=ID_CONTEXT_HELP
Command12=ID_NEXT_PANE
Command13=ID_PREV_PANE
Command14=ID_EDIT_COPY
Command15=ID_EDIT_PASTE
Command16=ID_FILE_CLOSE
Command17=ID_EDIT_CUT
Command18=ID_EDIT_REDO
Command19=ID_EDIT_UNDO
Command20=ID_EDIT_UNDO
CommandCount=20

[ACL:IDR_SCRIBBTYPE_SRVR_IP (_MAC)]
Type=1
Class=?
Command1=ID_EDIT_COPY
Command2=ID_EDIT_PASTE
Command3=ID_EDIT_UNDO
Command4=ID_EDIT_CUT
Command5=ID_CANCEL_EDIT_SRVR
Command6=ID_HELP
Command7=ID_CONTEXT_HELP
Command8=ID_EDIT_COPY
Command9=ID_EDIT_PASTE
Command10=ID_EDIT_CUT
Command11=ID_EDIT_REDO
Command12=ID_EDIT_UNDO
CommandCount=12

[ACL:IDR_SCRIBBTYPE_SRVR_EMB (_MAC)]
Type=1
Class=?
Command1=ID_EDIT_COPY
Command2=ID_FILE_NEW
Command3=ID_FILE_OPEN
Command4=ID_FILE_PRINT
Command5=ID_APP_EXIT
Command6=ID_FILE_UPDATE
Command7=ID_EDIT_PASTE
Command8=ID_EDIT_UNDO
Command9=ID_EDIT_CUT
Command10=ID_HELP
Command11=ID_CONTEXT_HELP
Command12=ID_NEXT_PANE
Command13=ID_PREV_PANE
Command14=ID_EDIT_COPY
Command15=ID_EDIT_PASTE
Command16=ID_FILE_CLOSE
Command17=ID_EDIT_CUT
Command18=ID_EDIT_REDO
Command19=ID_EDIT_UNDO
CommandCount=19

