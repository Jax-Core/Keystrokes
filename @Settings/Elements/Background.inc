[Variables]
@includevar=#@#Var.inc
@includeHotkey=#@#Actions\HotKeys.ini
@includeCV=Variables.inc

[Background]
Meter=Shape
;31,31,31 | 247, 241, 242
Shape=Rectangle 0,0,(#PanelW#),#PanelH# | StrokeWidth 0 | Fill Color #SettingColor#
;0,0,0 | 255,255,255