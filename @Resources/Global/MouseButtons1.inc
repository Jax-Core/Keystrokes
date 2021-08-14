
;===========================================================================================================================================================

[LeftMouse]
Measure=Plugin
Plugin=Slider.dll
MouseButton=Left
ClickAction=[!UpdateMeasure Lefthandler][!SetOption LeftShape Fill "Fill Color #PressedColor#,#PressedOpacity#"][!SetOption LeftLabel MeterStyle "Key#RGBOverride#Over:S"][!UpdateMeter Leftlabel][!UpdateMeter LeftShape][!Redraw]
ReleaseAction=[!SetOption LeftShape Fill "Fill Color #DefaultColor#,#DefaultOpacity#"][!SetOption LeftLabel MeterStyle "Key#RGB#:S"][!UpdateMeter Leftlabel][!UpdateMeter LeftShape][!Redraw]
MoveDelay=1000000
RelativeToSkin=0
Group=Dynamic

[RightMouse]
Measure=Plugin
Plugin=Slider.dll
MouseButton=Right
ClickAction=[!UpdateMeasure Righthandler][!SetOption RightShape Fill "Fill Color #PressedColor#,#PressedOpacity#"][!SetOption RightLabel MeterStyle "Key#RGBOverride#Over:S"][!UpdateMeter Rightlabel][!UpdateMeter RightShape][!Redraw]
ReleaseAction=[!SetOption RightShape Fill "Fill Color #DefaultColor#,#DefaultOpacity#"][!SetOption RightLabel MeterStyle "Key#RGB#:S"][!UpdateMeter Rightlabel][!UpdateMeter RightShape][!Redraw]
MoveDelay=1000000
RelativeToSkin=0
Group=Dynamic

[Lefthandler]
Measure=calc
OnUpdateAction=[!SetVariable Clicks "(#Clicks#+1)"][!CommandMeasure Lua "t[[&Time]]=[#Clicks]"]
DynamicVariables=1
Disabled=(1-#MouseCPS#)
Group=Dynamic

[Righthandler]
Measure=calc
OnUpdateAction=[!SetVariable Clicks2 "(#Clicks2#+1)"][!CommandMeasure Lua "t2[[&Time]]=[#Clicks2]"]
DynamicVariables=1
Disabled=(1-#MouseCPS#)
Group=Dynamic

[Lua]
Measure=Script
ScriptFile=#@#Lua\CPS.lua
UpdateDivider=(#MouseCPS# = 1 ? 1 : -1)
Disabled=(1-#MouseCPS#)

[Time]
Measure=Calc
Formula=Time+0.05
UpdateDivider=1
DynamicVariables=1
;===========================================================================================================================================================

[LeftShape]
Meter=Shape
MeterStyle=KeyB:S | Key2Style
X=((75/2+#KeyPadding#)*#Scale#)
Y=((50/2+50/4+#KeyPadding#)*#Scale#)r

[LeftLabel]
Meter=String
MeterStyle=Key#RGB#:S | Left#MouseCPS#:S
Text=#CPS#

[RightShape]
Meter=Shape
MeterStyle=KeyB:S | Key2Style
X=((75+#KeyPadding#*2)*#Scale#)r
Y=r

[RightLabel]
Meter=String
MeterStyle=Key#RGB#:S | Right#MouseCPS#:S
Text=#CPS2#


;===========================================================================================================================================================
