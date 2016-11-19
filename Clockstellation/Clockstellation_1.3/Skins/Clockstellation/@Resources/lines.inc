;-----------------------
;DOTS
;-----------------------


[MeterSecBlock]
Meter=Roundline
X=#SecStartX#+(#Size#/10)
Y=#SecStartY#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/16)
LineColor=#Seccolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterMinBlock]
Meter=Roundline
X=#MinStartX#+(#Size#/10)
Y=#MinStartY#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/15)
LineColor=#mincolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterHourBlock]
Meter=Roundline
X=#HourStartX#+(#Size#/10)
Y=#HourStartY#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/13)
LineColor=#Hourcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

;-----------------------
;LINES
;-----------------------
[MeterHourLine]
Meter=Roundline
X=(#HourStartX#)+((#Size#/100)*15)
Y=(#HourStartY#)+((#Size#/100)*15)
LineWidth=#LineWidth#
LineLength=((#HourStopX#-#HourStartX#)/Cos(Atan2(#HourStopY#-#HourStartY#, #HourStopX#-#HourStartX#)))
StartAngle=Rad(360)
RotationAngle=(Atan2(#HourStopY#-#HourStartY#, #HourStopX#-#HourStartX#))
LineColor=#Linecolor#
Solid=0
AntiAlias=1
DynamicVariables=1

[MeterMinLine]
Meter=Roundline
X=(#MinStartX#)+((#Size#/100)*15)
Y=(#MinStartY#)+((#Size#/100)*15)
LineWidth=#LineWidth#
LineLength=((#MinStopX#-#MinStartX#)/Cos(Atan2(#MinStopY#-#MinStartY#, #MinStopX#-#MinStartX#)))
StartAngle=Rad(360)
RotationAngle=(Atan2(#MinStopY#-#MinStartY#, #MinStopX#-#MinStartX#))
LineColor=#Linecolor#
Solid=0
AntiAlias=1
DynamicVariables=1

[MeterSecLine]
Meter=Roundline
X=(#SecStartX#)+((#Size#/100)*15)
Y=(#SecStartY#)+((#Size#/100)*15)
LineWidth=#LineWidth#
LineLength=((#SecStopX#-#SecStartX#)/Cos(Atan2(#SecStopY#-#SecStartY#, #SecStopX#-#SecStartX#)))
StartAngle=Rad(360)
RotationAngle=(Atan2(#SecStopY#-#SecStartY#, #SecStopX#-#SecStartX#))
LineColor=#Linecolor#
Solid=0
AntiAlias=1
DynamicVariables=1

[MeterHourMidLine]
Meter=Roundline
X=(#HourStartX#)+((#Size#/100)*15)
Y=(#HourStartY#)+((#Size#/100)*15)
LineWidth=#LineWidth#
LineLength=(-6*(#Size#/10))
StartAngle=Rad(360)
RotationAngle=(((2*PI)/12)*#Hour#)-(0.5*PI)
LineColor=#MLinecolor#
Solid=0
AntiAlias=1
DynamicVariables=1

[MeterMinMidLine]
Meter=Roundline
X=(#MinStartX#)+((#Size#/100)*15)
Y=(#MinStartY#)+((#Size#/100)*15)
LineWidth=#LineWidth#
LineLength=(-6*(#Size#/10))
StartAngle=Rad(360)
RotationAngle=(((2*PI)/60)*#Min#)-(0.5*PI)
LineColor=#MLinecolor#
Solid=0
AntiAlias=1
DynamicVariables=1

[MeterSecMidLine]
Meter=Roundline
X=(#SecStartX#)+((#Size#/100)*15)
Y=(#SecStartY#)+((#Size#/100)*15)
LineWidth=#LineWidth#
LineLength=(-6*(#Size#/10))
StartAngle=Rad(360)
RotationAngle=(((2*PI)/60)*#Sec#)-(0.5*PI)
LineColor=#MLinecolor#
Solid=0
AntiAlias=1
DynamicVariables=1

;------
;Round
;------

[MeterD1]
Meter=Roundline
X=#D1X#+(#Size#/10)
Y=#D1Y#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#RDotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD2]
Meter=Roundline
X=#D2X#+(#Size#/10)
Y=#D2Y#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#RDotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD3]
Meter=Roundline
X=#D3X#+(#Size#/10)
Y=#D3Y#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#RDotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD4]
Meter=Roundline
X=#D4X#+(#Size#/10)
Y=#D4Y#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#RDotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD5]
Meter=Roundline
X=#D5X#+(#Size#/10)
Y=#D5Y#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#RDotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD6]
Meter=Roundline
X=#D6X#+(#Size#/10)
Y=#D6Y#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#RDotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD7]
Meter=Roundline
X=#D7X#+(#Size#/10)
Y=#D7Y#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#RDotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD8]
Meter=Roundline
X=#D8X#+(#Size#/10)
Y=#D8Y#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#RDotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD9]
Meter=Roundline
X=#D9X#+(#Size#/10)
Y=#D9Y#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#RDotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD10]
Meter=Roundline
X=#D10X#+(#Size#/10)
Y=#D10Y#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#RDotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD11]
Meter=Roundline
X=#D11X#+(#Size#/10)
Y=#D11Y#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#RDotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD12]
Meter=Roundline
X=#D12X#+(#Size#/10)
Y=#D12Y#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#RDotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterDM]
Meter=Roundline
X=#MidX#
Y=#MidY#
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/20)
LineColor=#MDotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1




