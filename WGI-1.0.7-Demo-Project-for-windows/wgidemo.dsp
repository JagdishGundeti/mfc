# Microsoft Developer Studio Project File - Name="wgidemo" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Console Application" 0x0103

CFG=wgidemo - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "wgidemo.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "wgidemo.mak" CFG="wgidemo - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "wgidemo - Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE "wgidemo - Win32 Debug" (based on "Win32 (x86) Console Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "wgidemo - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "UNICODE" /FR /YX /FD /c
# ADD BASE RSC /l 0x804 /d "NDEBUG"
# ADD RSC /l 0x804 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /machine:I386
# SUBTRACT LINK32 /pdb:none

!ELSEIF  "$(CFG)" == "wgidemo - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /GZ /c
# ADD CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "UNICODE" /FR /YX /FD /GZ /c
# ADD BASE RSC /l 0x804 /d "_DEBUG"
# ADD RSC /l 0x804 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# SUBTRACT LINK32 /pdb:none

!ENDIF 

# Begin Target

# Name "wgidemo - Win32 Release"
# Name "wgidemo - Win32 Debug"
# Begin Group "oioic"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\oioic\o.c
# End Source File
# Begin Source File

SOURCE=.\oioic\o.h
# End Source File
# Begin Source File

SOURCE=.\oioic\oioic.c
# End Source File
# Begin Source File

SOURCE=.\oioic\oioic.h
# End Source File
# End Group
# Begin Group "se"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\se\se.c
# End Source File
# Begin Source File

SOURCE=.\se\se.h
# End Source File
# Begin Source File

SOURCE=.\se\wgi.c
# End Source File
# Begin Source File

SOURCE=.\se\wgi.h
# End Source File
# End Group
# Begin Group "so"

# PROP Default_Filter ""
# Begin Group "ao"

# PROP Default_Filter ""
# Begin Group "Main"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\so\ao\Main\Main.c
# End Source File
# Begin Source File

SOURCE=.\so\ao\Main\Main.h
# End Source File
# End Group
# Begin Source File

SOURCE=.\so\ao\ao.c
# End Source File
# Begin Source File

SOURCE=.\so\ao\ao.h
# End Source File
# End Group
# Begin Group "go"

# PROP Default_Filter ""
# Begin Group "VObject"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\so\go\VObject\VObject.c
# End Source File
# Begin Source File

SOURCE=.\so\go\VObject\VObject.h
# End Source File
# End Group
# Begin Group "WObject"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\so\go\WObject\WObject.c
# End Source File
# Begin Source File

SOURCE=.\so\go\WObject\WObject.h
# End Source File
# End Group
# Begin Group "CObject"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\so\go\CObject\CObject.c
# End Source File
# Begin Source File

SOURCE=.\so\go\CObject\CObject.h
# End Source File
# End Group
# Begin Group "WPanel"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\so\go\WPanel\WPanel.c
# End Source File
# Begin Source File

SOURCE=.\so\go\WPanel\WPanel.h
# End Source File
# End Group
# Begin Group "CButton"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\so\go\CButton\CButton.c
# End Source File
# Begin Source File

SOURCE=.\so\go\CButton\CButton.h
# End Source File
# End Group
# Begin Group "MyDialog"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\so\go\MyDialog\MyDialog.c
# End Source File
# Begin Source File

SOURCE=.\so\go\MyDialog\MyDialog.h
# End Source File
# Begin Source File

SOURCE=.\so\go\MyDialog\MyDialog_InitSub.c
# End Source File
# Begin Source File

SOURCE=.\so\go\MyDialog\MyDialog_InitSub.h
# End Source File
# End Group
# Begin Group "MyButton"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\so\go\MyButton\MyButton.c
# End Source File
# Begin Source File

SOURCE=.\so\go\MyButton\MyButton.h
# End Source File
# Begin Source File

SOURCE=.\so\go\MyButton\MyButton_InitSub.c
# End Source File
# Begin Source File

SOURCE=.\so\go\MyButton\MyButton_InitSub.h
# End Source File
# End Group
# Begin Group "MyButton2"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\so\go\MyButton2\MyButton2.c
# End Source File
# Begin Source File

SOURCE=.\so\go\MyButton2\MyButton2.h
# End Source File
# Begin Source File

SOURCE=.\so\go\MyButton2\MyButton2_InitSub.c
# End Source File
# Begin Source File

SOURCE=.\so\go\MyButton2\MyButton2_InitSub.h
# End Source File
# End Group
# Begin Source File

SOURCE=.\so\go\go.c
# End Source File
# Begin Source File

SOURCE=.\so\go\go.h
# End Source File
# End Group
# Begin Source File

SOURCE=.\so\so.c
# End Source File
# Begin Source File

SOURCE=.\so\so.h
# End Source File
# End Group
# Begin Source File

SOURCE=.\ho.c
# End Source File
# Begin Source File

SOURCE=.\ho.h
# End Source File
# Begin Source File

SOURCE=.\wgidemo.c
# End Source File
# Begin Source File

SOURCE=.\wgidemo.h
# End Source File
# Begin Source File

SOURCE=.\wgidemo.ico
# End Source File
# Begin Source File

SOURCE=.\wgidemo.rc
# End Source File
# End Target
# End Project
