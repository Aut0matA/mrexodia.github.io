include windows.inc
include user32.inc
include kernel32.inc
include shell32.inc
include comctl32.inc
include comdlg32.inc

includelib user32.lib
includelib kernel32.lib
includelib shell32.lib
includelib comctl32.lib
includelib comdlg32.lib

WinMain				PROTO :DWORD,:DWORD,:DWORD,:DWORD
WndProc				PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetTxt				PROTO :DWORD
Convert				PROTO :DWORD
CreateXorSum		PROTO :DWORD
byteToText			PROTO :DWORD,:DWORD

IDD_DIALOG			equ 1000
IDC_GO				equ 1001
IDC_NAME			equ 1004
IDC_KEY				equ 1005
IDM_MENU			equ 10000
IDM_FILE_EXIT		equ 10001
IDM_HELP_ABOUT		equ 10101

.const

ClassName			db 'DLGCLASS',0
AppName				db 'Dialog as main',0
AboutMsg			db 'MASM32 RadASM Dialog as main',13,10,'Copyright � MASM32 2001',0
CodeKey				db  43,232,98,167

.data
rslt				db 0,0,0,0
buff				db 0

.data?

hInstance			dd ?
CommandLine			dd ?
hWnd				dd ?
inVal				db 50 dup (?)
InnerCnt			db (?)
OuterCnt			db (?)
sLength				db (?)
strOut				db 20 (?)