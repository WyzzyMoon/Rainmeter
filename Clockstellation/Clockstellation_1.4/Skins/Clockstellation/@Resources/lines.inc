;-----------------------
;DOTS
;-----------------------


[MeterSecBlock]
Meter=Roundline
X=#SecX#
Y=#SecY#
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/16)
LineColor=#Seccolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterMinBlock]
Meter=Roundline
X=#MinX#
Y=#MinY#
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/15)
LineColor=#mincolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterHourBlock]
Meter=Roundline
X=#HourX#
Y=#HourY#
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
X=#HourX#
Y=#HourY#
LineWidth=#LineWidth#
LineLength=(Sqrt(((#SecX#-#HourX#)*(#SecX#-#HourX#))+((#SecY#-#HourY#)*(#SecY#-#HourY#))))
StartAngle=Rad(360)
RotationAngle=(Atan2(#SecY#-#HourY#, #SecX#-#HourX#))
LineColor=#Linecolor#
Solid=0
AntiAlias=1
DynamicVariables=1

[MeterMinLine]
Meter=Roundline
X=#MinX#
Y=#MinY#
LineWidth=#LineWidth#
LineLength=(Sqrt(((#HourX#-#MinX#)*(#HourX#-#MinX#))+((#HourY#-#MinY#)*(#HourY#-#MinY#))))
StartAngle=Rad(360)
RotationAngle=(Atan2(#HourY#-#MinY#, #HourX#-#MinX#))
LineColor=#Linecolor#
Solid=0
AntiAlias=1
DynamicVariables=1

[MeterSecLine]
Meter=Roundline
X=#SecX#
Y=#SecY#
LineWidth=#LineWidth#
LineLength=(Sqrt(((#MinX#-#SecX#)*(#MinX#-#SecX#))+((#MinY#-#SecY#)*(#MinY#-#SecY#))))
StartAngle=Rad(360)
RotationAngle=(Atan2(#MinY#-#SecY#, #MinX#-#SecX#))
LineColor=#Linecolor#
Solid=0
AntiAlias=1
DynamicVariables=1

[MeterHourMidLine]
Meter=Roundline
X=#HourX#
Y=#HourY#
LineWidth=#LineWidth#
LineLength=(Sqrt(((#MidX#-#HourX#)*(#MidX#-#HourX#))+((#MidY#-#HourY#)*(#MidY#-#HourY#))))
StartAngle=Rad(360)
RotationAngle=(Atan2(#MidY#-#HourY#, #MidX#-#HourX#))
LineColor=#MLinecolor#
Solid=0
AntiAlias=1
DynamicVariables=1

[MeterMinMidLine]
Meter=Roundline
X=#MinX#
Y=#MinY#
LineWidth=#LineWidth#
LineLength=(Sqrt(((#MidX#-#MinX#)*(#MidX#-#MinX#))+((#MidY#-#MinY#)*(#MidY#-#MinY#))))
StartAngle=Rad(360)
RotationAngle=(Atan2(#MidY#-#MinY#, #MidX#-#MinX#))
LineColor=#MLinecolor#
Solid=0
AntiAlias=1
DynamicVariables=1

[MeterSecMidLine]
Meter=Roundline
X=#SecX#
Y=#SecY#
LineWidth=#LineWidth#
LineLength=(Sqrt(((#MidX#-#SecX#)*(#MidX#-#SecX#))+((#MidY#-#SecY#)*(#MidY#-#SecY#))))
StartAngle=Rad(360)
RotationAngle=(Atan2(#MidY#-#SecY#, #MidX#-#SecX#))
LineColor=#MLinecolor#
Solid=0
AntiAlias=1
DynamicVariables=1

;------
;Round
;------

[MeterD1]
Meter=Roundline
X=#D1X#
Y=#D1Y#
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#RDotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD2]
Meter=Roundline
X=#D2X#
Y=#D2Y#
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#RDotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD3]
Meter=Roundline
X=#D3X#
Y=#D3Y#
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#RDotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD4]
Meter=Roundline
X=#D4X#
Y=#D4Y#
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#RDotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD5]
Meter=Roundline
X=#D5X#
Y=#D5Y#
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#RDotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD6]
Meter=Roundline
X=#D6X#
Y=#D6Y#
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#RDotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD7]
Meter=Roundline
X=#D7X#
Y=#D7Y#
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#RDotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD8]
Meter=Roundline
X=#D8X#
Y=#D8Y#
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#RDotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD9]
Meter=Roundline
X=#D9X#
Y=#D9Y#
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#RDotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD10]
Meter=Roundline
X=#D10X#
Y=#D10Y#
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#RDotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD11]
Meter=Roundline
X=#D11X#
Y=#D11Y#
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#RDotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD12]
Meter=Roundline
X=#D12X#
Y=#D12Y#
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
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/20)
LineColor=#MDotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1




