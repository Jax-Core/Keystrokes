#SingleInstance Force
#NoTrayIcon
SetTitleMatchMode, 2
DetectHiddenWindows, On
ThisVar := 0

IniRead, OutputVar, Hotkeys.ini, Variables, Toggle
IniRead, OutputVar2, Hotkeys.ini, Variables, TypeIs

Hotkey,#%OutputVar%,Button
Return

Button:
if (ThisVar = 0) {
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!ActivateConfig "Keystrokes\Main" "%OutputVar2%.ini" ""
	ThisVar := 1
	return
}
else {
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!DeactivateConfig "Keystrokes\Main"""
	ThisVar := 0
	return
}
return