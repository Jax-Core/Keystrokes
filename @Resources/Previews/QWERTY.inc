; ---------------------------------------------------------------------------- ;
;                                   Functions                                  ;
; ---------------------------------------------------------------------------- ;

[Script:M]
Measure=Script
ScriptFile=#SKINSPATH##Skin.Name#\Core\Gen.lua

;===========================================================================================================================================================

[1Shape]
Meter=Shape
MeterStyle=KeyFullboard:S
X=((50/2+#KeyPadding#)*[SEt.S])
Y=((50/2+#KeyPadding#)*[SEt.S])

[1Label]
Meter=String
MeterStyle=Key:S
Text=1

[2Shape]
Meter=Shape
MeterStyle=KeyFullboard:S

[2Label]
Meter=String
MeterStyle=Key:S
Text=2

[3Shape]
Meter=Shape
MeterStyle=KeyFullboard:S

[3Label]
Meter=String
MeterStyle=Key:S
Text=3

[4Shape]
Meter=Shape
MeterStyle=KeyFullboard:S

[4Label]
Meter=String
MeterStyle=Key:S
Text=4

[5Shape]
Meter=Shape
MeterStyle=KeyFullboard:S

[5Label]
Meter=String
MeterStyle=KeyNo:S
Text=5

[6Shape]
Meter=Shape
MeterStyle=KeyFullboard:S

[6Label]
Meter=String
MeterStyle=KeyNo:S
Text=6

[7Shape]
Meter=Shape
MeterStyle=KeyFullboard:S

[7Label]
Meter=String
MeterStyle=KeyNo:S
Text=7

[8Shape]
Meter=Shape
MeterStyle=KeyFullboard:S

[8Label]
Meter=String
MeterStyle=KeyNo:S
Text=8

[9Shape]
Meter=Shape
MeterStyle=KeyFullboard:S

[9Label]
Meter=String
MeterStyle=KeyNo:S
Text=9

[0Shape]
Meter=Shape
MeterStyle=KeyFullboard:S

[0Label]
Meter=String
MeterStyle=KeyNo:S
Text=0

;===========================================================================================================================================================

[QShape]
Meter=Shape
MeterStyle=KeyFullboard:S
X=((50+#KeyPadding#)*[SEt.S])
Y=((50+#KeyPadding#)*[SEt.S])r

[QLabel]
Meter=String
MeterStyle=Key:S
Text=Q

[WShape]
Meter=Shape
MeterStyle=KeyFullboard:S

[WLabel]
Meter=String
MeterStyle=Key:S
Text=W

[EShape]
Meter=Shape
MeterStyle=KeyFullboard:S

[ELabel]
Meter=String
MeterStyle=Key:S
Text=E

[RShape]
Meter=Shape
MeterStyle=KeyFullboard:S

[RLabel]
Meter=String
MeterStyle=Key:S
Text=R

[TShape]
Meter=Shape
MeterStyle=KeyFullboard:S

[TLabel]
Meter=String
MeterStyle=KeyNo:S
Text=T

[YShape]
Meter=Shape
MeterStyle=KeyFullboard:S

[YLabel]
Meter=String
MeterStyle=KeyNo:S
Text=Y

[UShape]
Meter=Shape
MeterStyle=KeyFullboard:S

[ULabel]
Meter=String
MeterStyle=KeyNo:S
Text=U

[IShape]
Meter=Shape
MeterStyle=KeyFullboard:S

[ILabel]
Meter=String
MeterStyle=KeyNo:S
Text=I

[OShape]
Meter=Shape
MeterStyle=KeyFullboard:S

[OLabel]
Meter=String
MeterStyle=KeyNo:S
Text=O

[PShape]
Meter=Shape
MeterStyle=KeyFullboard:S

[PLabel]
Meter=String
MeterStyle=KeyNo:S
Text=P

;===========================================================================================================================================================

[AShape]
Meter=Shape
MeterStyle=KeyFullboard:S
X=((50*1.5+#KeyPadding#)*[SEt.S])
Y=((50+#KeyPadding#)*[SEt.S])r

[ALabel]
Meter=String
MeterStyle=Key:S
Text=A

[SShape]
Meter=Shape
MeterStyle=KeyFullboard:S

[SLabel]
Meter=String
MeterStyle=Key:S
Text=S

[DShape]
Meter=Shape
MeterStyle=KeyFullboard:S

[DLabel]
Meter=String
MeterStyle=Key:S
Text=D

[FShape]
Meter=Shape
MeterStyle=KeyFullboard:S

[FLabel]
Meter=String
MeterStyle=Key:S
Text=F

[GShape]
Meter=Shape
MeterStyle=KeyFullboard:S

[GLabel]
Meter=String
MeterStyle=Key:S
Text=G

[HShape]
Meter=Shape
MeterStyle=KeyFullboard:S

[HLabel]
Meter=String
MeterStyle=KeyNo:S
Text=H

[JShape]
Meter=Shape
MeterStyle=KeyFullboard:S

[JLabel]
Meter=String
MeterStyle=KeyNo:S
Text=J

[KShape]
Meter=Shape
MeterStyle=KeyFullboard:S

[KLabel]
Meter=String
MeterStyle=KeyNo:S
Text=K

[LShape]
Meter=Shape
MeterStyle=KeyFullboard:S

[LLabel]
Meter=String
MeterStyle=KeyNo:S
Text=L

;===========================================================================================================================================================

[ZShape]
Meter=Shape
MeterStyle=KeyFullboard:S
X=((50*2+#KeyPadding#*2)*[SEt.S])
Y=((50+#KeyPadding#)*[SEt.S])r

[ZLabel]
Meter=String
MeterStyle=Key:S
Text=Z

[ZShape]
Meter=Shape
MeterStyle=KeyFullboard:S

[ZLabel]
Meter=String
MeterStyle=Key:S
Text=Z

[XShape]
Meter=Shape
MeterStyle=KeyFullboard:S

[XLabel]
Meter=String
MeterStyle=Key:S
Text=X

[CShape]
Meter=Shape
MeterStyle=KeyFullboard:S

[CLabel]
Meter=String
MeterStyle=Key:S
Text=C

[VShape]
Meter=Shape
MeterStyle=KeyFullboard:S

[VLabel]
Meter=String
MeterStyle=Key:S
Text=V

[BShape]
Meter=Shape
MeterStyle=KeyFullboard:S

[BLabel]
Meter=String
MeterStyle=KeyNo:S
Text=B

[NShape]
Meter=Shape
MeterStyle=KeyFullboard:S

[NLabel]
Meter=String
MeterStyle=KeyNo:S
Text=N

[MShape]
Meter=Shape
MeterStyle=KeyFullboard:S

[MLabel]
Meter=String
MeterStyle=KeyNo:S
Text=M


; ---------------------------------------------------------------------------- ;
;                                   Additions                                  ;
; ---------------------------------------------------------------------------- ;

[Option01]
Meter=Shape
X=([Container:W]*0.5-150*[Set.S]/2)
Y=([Container:H]*0.8)
OverColor=0,250,50,200
LeaveColor=0,230,50
Act=[!CommandMeasure Script:M "Generate()"]
Container=Container
MeterStyle=Set.Button:S

[Circ]
Meter=String
Container=Container
X=(150/2*[Set.S])r
StringAlign=CenterCenter
FontFace=Poppins Semibold
MeterStyle=Set.String:S | Set.Value:S
Text=Generate

; ---------------------------------------------------------------------------- ;
;                                    Buttons                                   ;
; ---------------------------------------------------------------------------- ;

