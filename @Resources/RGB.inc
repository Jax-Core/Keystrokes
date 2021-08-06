
[MeasureR]
Measure=Loop
StartValue=510
EndValue=0
Increment=(-#RGBSpeed#)
LoopCount=1
UpdateDivider=1
Disabled=#RGB#

[MeasureG]
Measure=Loop
StartValue=0
EndValue=255
Increment=#RGBSpeed#
LoopCount=1
UpdateDivider=1
Disabled=#RGB#

[MeasureB]
Measure=Loop
StartValue=-510
EndValue=255
Increment=#RGBSpeed#
LoopCount=1
UpdateDivider=1
Disabled=#RGB#

[RGBLoop]
Measure=Calc
OnUpdateAction=[!CommandMeasure MeasureR "Reset"][!CommandMeasure MeasureG "Reset"][!CommandMeasure MeasureB "Reset"][!Delay (255/#RGBSpeed#*25*4)][!SetOption MeasureG InvertMeasure 1][!Delay (255/#RGBSpeed#*25)][!SetOption MeasureR InvertMeasure 1][!Delay (255/#RGBSpeed#*25)][!SetOption MeasureB InvertMeasure 1][!Delay (255/#RGBSpeed#*25*2)][!CommandMeasure MeasureR "Reset"][!CommandMeasure MeasureG "Reset"][!CommandMeasure MeasureB "Reset"][!SetOption MeasureR InvertMeasure 0][!SetOption MeasureG InvertMeasure 0][!SetOption MeasureB InvertMeasure 0][!UpdateMeasure RGBLoop]
Disabled=#RGB#
