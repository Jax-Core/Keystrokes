
[WShape]
Meter=Shape
MeterStyle=KeyB:S
X=(170/2*[Set.S])
Y=((50/2+#KeyPadding#)*[Set.S])

[WLabel]
Meter=String
MeterStyle=Key:S
Text=W

[AShape]
Meter=Shape
MeterStyle=KeyB:S
X=((50/2+#KeyPadding#)*[Set.S])
Y=((50+#KeyPadding#)*[Set.S])r

[ALabel]
Meter=String
MeterStyle=Key:S
Text=A

[SShape]
Meter=Shape
MeterStyle=KeyB:S
X=((50+#KeyPadding#)*[Set.S])r
Y=r

[SLabel]
Meter=String
MeterStyle=Key:S
Text=S

[DShape]
Meter=Shape
MeterStyle=KeyB:S
X=((50+#KeyPadding#)*[Set.S])r
Y=r

[DLabel]
Meter=String
MeterStyle=Key:S
Text=D

[SpaceShape]
Meter=Shape
MeterStyle=KeyB:S | Key3Style
X=(170/2*[Set.S])
Y=((50/2+50/4+#KeyPadding#)*[Set.S])r

[SpaceLabel]
Meter=String
MeterStyle=Key:S
Text=---

; ---------------------------------------------------------------------------- ;
;                                   Additions                                  ;
; ---------------------------------------------------------------------------- ;

; ----------------------------------- Button ---------------------------------- ;

[LeftShape]
Meter=Shape
MeterStyle=KeyB:S | Key2Style
X=((75/2+#KeyPadding#)*[Set.S])
Y=((50/2+50/4+#KeyPadding#)*[Set.S])r
Hidden=(1-#Mouse#)

[LeftLabel]
Meter=String
MeterStyle=Key:S
Text=#CPS#
Hidden=(1-#Mouse#)

[RightShape]
Meter=Shape
MeterStyle=KeyB:S | Key2Style
X=((75+#KeyPadding#*2)*[Set.S])r
Y=r
Hidden=(1-#Mouse#)

[RightLabel]
Meter=String
MeterStyle=Key:S
Text=#CPS2#
Hidden=(1-#Mouse#)

; ----------------------------------- Mouse ---------------------------------- ;

[MouseVis]
Meter=Shape
X=(250*[Set.S])
Shape=Ellipse 0,0,50,50 | Fill Color #DefaultColor#,#DefaultOpacity# | StrokeWidth (3*[Set.S]) | Scale [Set.S],[Set.S] | Extend One
Shape2=Ellipse 0,0,10,10 | StrokeWidth 0 | Scale [Set.S],[Set.S] | Extend Two
One=Stroke Color #DefaultFontColor#
Two=Fill Color #DefaultFontColor#
MeterStyle=VisPos#Mouse#:S
DynamicVariables=1
Container=PreviewContainer
Hidden=(1-#Circ#)

[VisPos0:S]
Y=((50*1.25+2*#KeyPadding#)*[Set.S])
[VisPos1:S]
Y=(95*[Set.S])