; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CDBApp
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "DB.h"

ClassCount=3
Class1=CDBApp
Class2=CDBDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_DB_DIALOG

[CLS:CDBApp]
Type=0
HeaderFile=DB.h
ImplementationFile=DB.cpp
Filter=N
BaseClass=CWinApp
VirtualFilter=AC
LastObject=CDBApp

[CLS:CDBDlg]
Type=0
HeaderFile=DBDlg.h
ImplementationFile=DBDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CDBDlg

[CLS:CAboutDlg]
Type=0
HeaderFile=DBDlg.h
ImplementationFile=DBDlg.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_DB_DIALOG]
Type=1
Class=CDBDlg
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816

[TB:IDD_DB_DIALOG]
Type=1
Command1=ID_BUTTON_YELLOW
Command2=ID_BUTTON_GREEN
Command3=ID_BUTTON_RED
Command4=ID_BUTTON_BLUE
CommandCount=4

