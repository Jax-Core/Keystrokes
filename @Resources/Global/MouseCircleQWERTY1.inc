
;===========================================================================================================================================================

[MouseAccelero]
Measure=Plugin
Plugin=Slider.dll
MoveAction=[!SetVariable PreviousX "#NowX#"][!SetVariable PreviousY "#NowY#"][!SetVariable NowX "$mouseX$"][!SetVariable NowY "$mouseY$"][!UpdateMeasureGroup Acceleration][!UpdateMeter MouseVis][!Redraw]
MoveDelay=#MouseFetchDelay#
RelativeToSkin=0
DynamicVariables=1
Group=Acceleration | Dynamic

[AccelerationX]
Measure=Calc
Formula=(Clamp((#NowX# - #PreviousX#),(-#MaxX#),#MaxX#))
DynamicVariables=1
MinValue=(-#MaxX#)
MaxValue=#MaxX#
Group=Acceleration | Dynamic

[AccelerationY]
Measure=Calc
Formula=(Clamp((#NowY# - #PreviousY#),(-#MaxY#),#MaxY#))
DynamicVariables=1
MinValue=(-#MaxY#)
MaxValue=#MaxY#
Group=Acceleration | Dynamic

;===========================================================================================================================================================

[MouseVis]
Meter=Shape
X=(60*#Scale#)
Y=((((Clamp(#Row1#,0,1)+Clamp(#Row2#,0,1)+Clamp(#Row3#,0,1)+Clamp(#Row4#,0,1))*50+((Clamp(#Row1#,0,1)+Clamp(#Row2#,0,1)+Clamp(#Row3#,0,1)+Clamp(#Row4#,0,1))-1)*#KeyPadding#)/2)*#scale#)
Shape=Ellipse 0,0,50,50 | Fill Color #DefaultColor#,#DefaultOpacity# | StrokeWidth (3*#Scale#) | Scale #Scale#,#Scale# | Extend One
Shape2=Ellipse ((90*[AccelerationX:%]/100-90/2)*#Scale#),((90*[AccelerationY:%]/100-90/2)*#Scale#),10,10 | StrokeWidth 0 | Scale #Scale#,#Scale# | Extend Two
MeterStyle=Vis#RGB#:S | VisPos#Mouse#:S
DynamicVariables=1
[Vis0:S]
One=Stroke Color #DefaultFontColor#
Two=Fill Color #DefaultFontColor#
[Vis1:S]
One=Stroke Color [RGB]
Two=Fill Color [RGB]
UpdateDivider=1

[VisPos0:S]
Y=((50*1.25+2*#KeyPadding#)*#Scale#)
[VisPos1:S]
Y=(95*#Scale#)

;===========================================================================================================================================================
