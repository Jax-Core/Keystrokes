
;===========================================================================================================================================================


[Loop]
Measure=Calc
UpdateDivider=1
DynamicVariables=1
OnUpdateAction=[!SetVariable PreviousPosX [MouseX]][!SetVariable PreviousPosY [MouseY]]

[MouseX]
Measure=Plugin
Plugin=MouseXY
Dimension=X
UpdateDivider=1

[AccelerationX]
Measure=Calc
Formula=(Clamp(([MouseX] - #PreviousPosX#),(-#MaxX#),#MaxX#))
DynamicVariables=1
MinValue=(-#MaxX#)
MaxValue=#MaxX#
UpdateDivider=1

[MouseY]
Measure=Plugin
Plugin=MouseXY
Dimension=Y
UpdateDivider=1

[AccelerationY]
Measure=Calc
Formula=(Clamp(([MouseY] - #PreviousPosY#),(-#MaxY#),#MaxY#))
DynamicVariables=1
MinValue=(-#MaxY#)
MaxValue=#MaxY#
UpdateDivider=1

;===========================================================================================================================================================

[MouseVis]
Meter=Shape
X=(250*#Size#)
Y=((50*1.25+2*#KeyPadding#)*#Size#)
Shape=Ellipse 0,0,50,50 | Fill Color #DefaultColor#,#DefaultOpacity# | Stroke Color #RGBOverride# | StrokeWidth (3*#Size#) | Scale #Size#,#Size#
Shape2=Ellipse ((90*[AccelerationX:%]/100-90/2)*#Size#),((90*[AccelerationY:%]/100-90/2)*#Size#),10,10 | Fill Color #RGBOverride# | StrokeWidth 0 | Scale #Size#,#Size#
DynamicVariables=1
UpdateDivider=1

;===========================================================================================================================================================
