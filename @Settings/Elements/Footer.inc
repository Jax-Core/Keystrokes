[SlideBackground]
Meter=Shape
DynamicVariables=1
Group=Slides
Shape=Rectangle 0,0,(#AniSlide#),(#PanelH#) | StrokeWidth 0 | Fill Color #SettingAltColor#
MouseOverAction=[!CommandMeasure ActionTimer "Stop 2"][!CommandMeasure ActionTimer "Execute 1"]
MouseLeaveAction=[!CommandMeasure ActionTimer "Stop 1"][!CommandMeasure ActionTimer "Execute 2"]

[SlideContainer]
Meter=Shape
DynamicVariables=1
Group=Slides
Shape=Rectangle 0,0,(#AniSlide#),(#PanelH#) | StrokeWidth 0 | Fill color 255,255,255

[ActionTimer]
Measure=Plugin
Plugin=ActionTimer
DynamicVariables=1
ActionList1=Repeat SlideIn,8.165,10
ActionList2=Repeat SlideOut,8.165,10
SlideIn=[!SetVariable AniSlide "(Clamp((#AniSlide#+25),60,220))"][!UpdateMeterGroup Slides][!UpdateMeasure ActionTimer][!Redraw]
SlideOut=[!SetVariable AniSlide "(Clamp((#AniSlide#-25),60,220))"][!UpdateMeterGroup Slides][!UpdateMeasure ActionTimer][!Redraw]

[OnLoad]
Measure=String
OnUpdateAction=[!DeactivateConfig "Keystrokes\Main"][!Zpos 0][!FadeDuration 200][!Draggable 1][!KeepOnScreen 0][!DisableMeasure #CURRENTSECTION#][!Delay 50][!EnableMeasureGroup NoUpdateOnLoad]

;[TitleBar]
;Meter=String
;Text=PowerToys+ Settings
;Padding=40,5,5,5
;MeterStyle=RegularText
;FontSize=9
;StringAlign=LEft

[Menu]
Meter=Image
ImageName=#@#Icons\Menu.png
X=20
Y=20
W=20
H=20
H=20
SolidColor=0,0,0,1
ImageTint=#FontColor#
Container=SlideContainer

[Menutext]
Meter=String
Text=Configuration
X=25R
y=10r
FontWeight=600
MeterStyle=RegularText | TextStyle

[Cross]
Meter=Image
ImageName=#@#Icons\Cross.png
X=(#PanelW#-40)
Y=20
W=20
H=20
H=20
LeftMouseUpAction=[!ActivateConfig "Keystrokes\Main" "#TypeIs#.ini"][!DeactivateConfig]
SolidColor=0,0,0,1
DynamicVariables=1
ImageTint=#FontColor#

; [CategoryText1]
; Meter=String
; X=10
; Y=110
; FontSize=9
; FontColor=#DarkColor#
; Text=General
; MeterStyle=RegularText
; Container=SlideContainer

[TextStyle]
X=r
Y=50r
FontSize=10
StringAlign=LeftCenter
Container=SlideContainer

[GlobalBox]
Meter=Shape
X=0
Y=120
Shape=Rectangle 0,0,#AniSlide#,50,(#Corner#/4*10),(#Corner#/4*10) | StrokeWidth 0 | Extend This | Extend That
This=Fill Color #DefaultFontColor#,0
DynamicVariables=1
Group=Slides
MouseOverAction=[!SetOption #CURRENTSECTION# This "Fill Color #DefaultFontColor#,50"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# This "Fill Color #DefaultFontColor#,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ActivateConfig "Keystrokes\@settings" "Main.ini"]

[Global]
Meter=Image
ImageName=#@#Icons\Info.png
X=20r
Y=15r
W=20
H=20
ImageTint=#FontColor#

[TextStyle]
X=r
Y=50r
FontSize=10
StringAlign=LeftCenter
Container=SlideContainer

[GlobalText]
Meter=String
Text=Info
X=([Global:X]+50)
Y=([Global:Y]+10)
MeterStyle=RegularText | TextStyle

[Div1]
Meter=Shape
X=0
Y=25R
Shape=Line 10,0,(#AniSlide#-10),0 | StrokeWidth 1 | Stroke color #DarkColor#
DynamicVariables=1
Group=Slides

[RunBox]
Meter=Shape
Y=10R
MeterStyle=GlobalBox
This=Fill Color #DefaultFontColor#,0
LeftMouseUpAction=[!ActivateConfig "Keystrokes\@settings" "Global.ini"]

[Run]
Meter=Image
ImageName=#@#Icons\Palette.png
MeterStyle=Global

[RunText]
Meter=String
Text=Appearance
FontWeight=
Y=70r
MeterStyle=RegularText | TextStyle

[ClipboardBox]
Meter=Shape
Y=15R
MeterStyle=GlobalBox
This=Fill Color #DefaultFontColor#,0
LeftMouseUpAction=[!ActivateConfig "Keystrokes\@settings" "Themes.ini"]

[Clipboard]
Meter=Image
ImageName=#@#Icons\Theme.png
MeterStyle=Global

[ClipboardText]
Meter=String
Text=Layout
FontWeight=
MeterStyle=RegularText | TextStyle






[CyclerBox]
Meter=Shape
Y=(#PanelH#-60)
MeterStyle=GlobalBox | Cycler2
This=Fill Color #DefaultFontColor#,0
[Cycler1]
LeftMouseUpAction=[!WriteKeyValue Variables PanelW (#SCREENAREAWIDTH#/2) "elements\variables.inc"][!WriteKeyValue Variables PanelH (#SCREENAREAHEIGHT#) "elements\variables.inc"][!WriteKeyValue CyclerBox MeterStyle "GlobalBox | Cycler2" "elements\footer.inc"][!Refresh]
[Cycler2]
LeftMouseUpAction=[!WriteKeyValue Variables PanelW 920 "elements\variables.inc"][!WriteKeyValue Variables PanelH 620 "elements\variables.inc"][!WriteKeyValue CyclerBox MeterStyle "GlobalBox | Cycler3" "elements\footer.inc"][!Refresh]
[Cycler3]
LeftMouseUpAction=[!WriteKeyValue Variables PanelW 1150 "elements\variables.inc"][!WriteKeyValue Variables PanelH 775 "elements\variables.inc"][!WriteKeyValue CyclerBox MeterStyle "GlobalBox | Cycler1" "elements\footer.inc"][!Refresh]

[Cycler]
Meter=Image
ImageName=#@#Icons\Window.png
X=20
Y=(#PanelH#-45)
W=20
H=20
H=20
MeterStyle=Global

[CyclerText]
Meter=String
Text=Cycle window type
Y=(#PanelH#-35)
FontWeight=
MeterStyle=RegularText | TextStyle

[BarHandler]
Meter=Shape
Shape=Rectangle 0,0,3,25 | Fill Color #DefaultFontColor# | StrokeWidth 0
X=5
Y=(132+#BarHandler#*50+20*(Clamp(#BarHandler#,0,1)))
