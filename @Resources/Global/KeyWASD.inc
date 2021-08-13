[W]
Measure=Plugin
Plugin=HotKey
HotKey=W
KeyDownAction=[!SetOption WShape Fill "Fill Color #PressedColor#,#PressedOpacity#"][!SetOption WLabel MeterStyle "Key#RGBOverride#Over:S"][!UpdateMeter Wlabel][!UpdateMeter WShape][!Redraw]
KeyUpAction=[!SetOption WShape Fill "Fill Color #DefaultColor#,#DefaultOpacity#"][!SetOption WLabel MeterStyle "Key#RGB#:S"][!UpdateMeter Wlabel][!UpdateMeter WShape][!Redraw]

[A]
Measure=Plugin
Plugin=HotKey
HotKey=A
KeyDownAction=[!SetOption AShape Fill "Fill Color #PressedColor#,#PressedOpacity#"][!SetOption ALabel MeterStyle "Key#RGBOverride#Over:S"][!UpdateMeter Alabel][!UpdateMeter AShape][!Redraw]
KeyUpAction=[!SetOption AShape Fill "Fill Color #DefaultColor#,#DefaultOpacity#"][!SetOption ALabel MeterStyle "Key#RGB#:S"][!UpdateMeter Alabel][!UpdateMeter AShape][!Redraw]

[S]
Measure=Plugin
Plugin=HotKey
HotKey=S
KeyDownAction=[!SetOption SShape Fill "Fill Color #PressedColor#,#PressedOpacity#"][!SetOption SLabel MeterStyle "Key#RGBOverride#Over:S"][!UpdateMeter Slabel][!UpdateMeter SShape][!Redraw]
KeyUpAction=[!SetOption SShape Fill "Fill Color #DefaultColor#,#DefaultOpacity#"][!SetOption SLabel MeterStyle "Key#RGB#:S"][!UpdateMeter Slabel][!UpdateMeter SShape][!Redraw]

[D]
Measure=Plugin
Plugin=HotKey
HotKey=D
KeyDownAction=[!SetOption DShape Fill "Fill Color #PressedColor#,#PressedOpacity#"][!SetOption DLabel MeterStyle "Key#RGBOverride#Over:S"][!UpdateMeter Dlabel][!UpdateMeter DShape][!Redraw]
KeyUpAction=[!SetOption DShape Fill "Fill Color #DefaultColor#,#DefaultOpacity#"][!SetOption DLabel MeterStyle "Key#RGB#:S"][!UpdateMeter Dlabel][!UpdateMeter DShape][!Redraw]

[Space]
Measure=Plugin
Plugin=HotKey
HotKey=Space
KeyDownAction=[!SetOption SpaceShape Fill "Fill Color #PressedColor#,#PressedOpacity#"][!SetOption SpaceLabel MeterStyle "Key#RGBOverride#Over:S"][!UpdateMeter SpaceLabel][!UpdateMeter SpaceShape][!Redraw]
KeyUpAction=[!SetOption SpaceShape Fill "Fill Color #DefaultColor#,#DefaultOpacity#"][!SetOption SpaceLabel MeterStyle "Key#RGB#:S"][!UpdateMeter SpaceLabel][!UpdateMeter SpaceShape][!Redraw]
