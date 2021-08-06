[W]
Measure=Plugin
Plugin=HotKey
HotKey=W
KeyDownAction=[!SetOption WShape Fill "Fill Color #PressedColor#,#PressedOpacity#"][!SetOption WLabel FontColor "#*PressedFontColor*#"][!UpdateMeter Wlabel][!UpdateMeter WShape][!Redraw]
KeyUpAction=[!SetOption WShape Fill "Fill Color #DefaultColor#,#DefaultOpacity#"][!SetOption WLabel FontColor "#*RGBOverride*#"][!UpdateMeter Wlabel][!UpdateMeter WShape][!Redraw]

[A]
Measure=Plugin
Plugin=HotKey
HotKey=A
KeyDownAction=[!SetOption AShape Fill "Fill Color #PressedColor#,#PressedOpacity#"][!SetOption ALabel FontColor "#*PressedFontColor*#"][!UpdateMeter Alabel][!UpdateMeter AShape][!Redraw]
KeyUpAction=[!SetOption AShape Fill "Fill Color #DefaultColor#,#DefaultOpacity#"][!SetOption ALabel FontColor "#*RGBOverride*#"][!UpdateMeter Alabel][!UpdateMeter AShape][!Redraw]

[S]
Measure=Plugin
Plugin=HotKey
HotKey=S
KeyDownAction=[!SetOption SShape Fill "Fill Color #PressedColor#,#PressedOpacity#"][!SetOption SLabel FontColor "#*PressedFontColor*#"][!UpdateMeter Slabel][!UpdateMeter SShape][!Redraw]
KeyUpAction=[!SetOption SShape Fill "Fill Color #DefaultColor#,#DefaultOpacity#"][!SetOption SLabel FontColor "#*RGBOverride*#"][!UpdateMeter Slabel][!UpdateMeter SShape][!Redraw]

[D]
Measure=Plugin
Plugin=HotKey
HotKey=D
KeyDownAction=[!SetOption DShape Fill "Fill Color #PressedColor#,#PressedOpacity#"][!SetOption DLabel FontColor "#*PressedFontColor*#"][!UpdateMeter Dlabel][!UpdateMeter DShape][!Redraw]
KeyUpAction=[!SetOption DShape Fill "Fill Color #DefaultColor#,#DefaultOpacity#"][!SetOption DLabel FontColor "#*RGBOverride*#"][!UpdateMeter Dlabel][!UpdateMeter DShape][!Redraw]

[Space]
Measure=Plugin
Plugin=HotKey
HotKey=Space
KeyDownAction=[!SetOption SpaceShape Fill "Fill Color #PressedColor#,#PressedOpacity#"][!SetOption SpaceLabel FontColor "#*PressedFontColor*#"][!UpdateMeter SpaceLabel][!UpdateMeter SpaceShape][!Redraw]
KeyUpAction=[!SetOption SpaceShape Fill "Fill Color #DefaultColor#,#DefaultOpacity#"][!SetOption SpaceLabel FontColor "#*RGBOverride*#"][!UpdateMeter SpaceLabel][!UpdateMeter SpaceShape][!Redraw]

[FrostedGlass]
Measure=Plugin
Plugin=FrostedGlass
Type=#Blur#
;Acrylic | Blur
