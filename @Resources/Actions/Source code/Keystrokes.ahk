#SingleInstance Force
#NoTrayIcon
dragging = 0


SD = %A_ScriptDir%
UpOne = % RegExReplace(SD,"[^\\]+\\?$")
UpTwo = % RegExReplace(UpOne,"[^\\]+\\?$")
UpThree = % RegExReplace(UpTwo,"[^\\]+\\?$")
Path = %UpThree%Main\Main.ini

IniRead, Key1, Hotkeys.ini, Variables, Key
IniRead, Key2, Hotkeys.ini, Variables, Key2
IniRead, RainmeterPath, Hotkeys.ini, Variables, RMPATH

Hotkey, %Key1%, Action1
Hotkey, %Key2%, Action2

Name = ValliStart.ahk
DetectHiddenWindows On
SetTitleMatchMode RegEx
IfWinExist, i)%Name%.* ahk_class AutoHotkey
{
    ValliScriptPath = % RegExReplace(a_scriptdir,"Keystrokes.*\\?$")"Vallistart\@Resources\Actions\Source code\Vallistart.ahk"
    ValliAhkPath = % RegExReplace(a_scriptdir,"Keystrokes.*\\?$")"Vallistart\@Resources\Actions\"
    Run, %ValliAhkPath%AHKv1.exe `"%ValliScriptPath%`", %ValliAhkPath%
}
SetTitleMatchMode, 2
Return

Action1:
    Run "%RainmeterPath% "!UpdateMeasure "mToggle" "Keystrokes\Main" "
    Return
Action2:
    if not dragging {
        dragging = 1
        SplashTextOn , 400, 100, JaxCore, Keystrokes: Draggable
        Sleep 1000
        SplashTextOff
        WinSet, Enable ,, %Path%,,,
        WinSet, ExStyle, -0x20, %Path%,,,
    } else {
        dragging = 0
        SplashTextOn , 400, 100, JaxCore, Keystrokes: Disabled dragging
        Sleep 1000
        SplashTextOff
        WinSet, Disable ,, %Path%,,,
        WinSet, AlwaysOnTop, On, %Path%,,,
        WinSet, ExStyle, +0x20, %Path%,,,
    }
    Return