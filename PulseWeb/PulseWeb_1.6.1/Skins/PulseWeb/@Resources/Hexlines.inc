;-----------------------
;DOTS
;-----------------------

[MeterDM]
Meter=Roundline
X=#MidX#
Y=#MidY#
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/20)
LineColor=#DotColor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterA1Block]
Meter=Roundline
X=#A1X#
Y=#A1Y#
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/#Dotsize#)
LineColor=#DotColor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterA2Block]
Meter=Roundline
X=#A2X#
Y=#A2Y#
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/#Dotsize#)
LineColor=#DotColor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterA3Block]
Meter=Roundline
X=#A3X#
Y=#A3Y#
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/#Dotsize#)
LineColor=#DotColor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterA4Block]
Meter=Roundline
X=#A4X#
Y=#A4Y#
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/#Dotsize#)
LineColor=#DotColor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterA5Block]
Meter=Roundline
X=#A5X#
Y=#A5Y#
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/#Dotsize#)
LineColor=#DotColor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterA6Block]
Meter=Roundline
X=#A6X#
Y=#A6Y#
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/#Dotsize#)
LineColor=#DotColor#
Solid=1
AntiAlias=1
DynamicVariables=1

;-----------------------
;LINES
;-----------------------
[MeterA2Line]
Meter=Roundline
X=#A2X#
Y=#A2Y#
LineWidth=#LineWidth#
LineLength=(Sqrt(((#A3X#-#A2X#)*(#A3X#-#A2X#))+((#A3Y#-#A2Y#)*(#A3Y#-#A2Y#))))
StartAngle=Rad(360)
RotationAngle=(Atan2(#A3Y#-#A2Y#, #A3X#-#A2X#))
LineColor=#Linecolor#
Solid=0
AntiAlias=1
DynamicVariables=1

[MeterA1Line]
Meter=Roundline
X=#A1X#
Y=#A1Y#
LineWidth=#LineWidth#
LineLength=(Sqrt(((#A2X#-#A1X#)*(#A2X#-#A1X#))+((#A2Y#-#A1Y#)*(#A2Y#-#A1Y#))))
StartAngle=Rad(360)
RotationAngle=(Atan2(#A2Y#-#A1Y#, #A2X#-#A1X#))
LineColor=#Linecolor#
Solid=0
AntiAlias=1
DynamicVariables=1

[MeterA3Line]
Meter=Roundline
X=#A3X#
Y=#A3Y#
LineWidth=#LineWidth#
LineLength=(Sqrt(((#A4X#-#A3X#)*(#A4X#-#A3X#))+((#A4Y#-#A3Y#)*(#A4Y#-#A3Y#))))
StartAngle=Rad(360)
RotationAngle=(Atan2(#A4Y#-#A3Y#, #A4X#-#A3X#))
LineColor=#Linecolor#
Solid=0
AntiAlias=1
DynamicVariables=1

[MeterA4Line]
Meter=Roundline
X=#A4X#
Y=#A4Y#
LineWidth=#LineWidth#
LineLength=(Sqrt(((#A5X#-#A4X#)*(#A5X#-#A4X#))+((#A5Y#-#A4Y#)*(#A5Y#-#A4Y#))))
StartAngle=Rad(360)
RotationAngle=(Atan2(#A5Y#-#A4Y#, #A5X#-#A4X#))
LineColor=#Linecolor#
Solid=0
AntiAlias=1
DynamicVariables=1

[MeterA5Line]
Meter=Roundline
X=#A5X#
Y=#A5Y#
LineWidth=#LineWidth#
LineLength=(Sqrt(((#A6X#-#A5X#)*(#A6X#-#A5X#))+((#A6Y#-#A5Y#)*(#A6Y#-#A5Y#))))
StartAngle=Rad(360)
RotationAngle=(Atan2(#A6Y#-#A5Y#, #A6X#-#A5X#))
LineColor=#Linecolor#
Solid=0
AntiAlias=1
DynamicVariables=1

[MeterA6Line]
Meter=Roundline
X=#A6X#
Y=#A6Y#
LineWidth=#LineWidth#
LineLength=(Sqrt(((#A1X#-#A6X#)*(#A1X#-#A6X#))+((#A1Y#-#A6Y#)*(#A1Y#-#A6Y#))))
StartAngle=Rad(360)
RotationAngle=(Atan2(#A1Y#-#A6Y#, #A1X#-#A6X#))
LineColor=#Linecolor#
Solid=0
AntiAlias=1
DynamicVariables=1



[MeterA2MidLine]
Meter=Roundline
X=#A2X#
Y=#A2Y#
LineWidth=#LineWidth#
LineLength=(Sqrt(((#MidX#-#A2X#)*(#MidX#-#A2X#))+((#MidY#-#A2Y#)*(#MidY#-#A2Y#))))
StartAngle=Rad(360)
RotationAngle=(Atan2(#MidY#-#A2Y#, #MidX#-#A2X#))
LineColor=#MLinecolor#
Solid=0
AntiAlias=1
DynamicVariables=1

[MeterA1MidLine]
Meter=Roundline
X=#A1X#
Y=#A1Y#
LineWidth=#LineWidth#
LineLength=(Sqrt(((#MidX#-#A1X#)*(#MidX#-#A1X#))+((#MidY#-#A1Y#)*(#MidY#-#A1Y#))))
StartAngle=Rad(360)
RotationAngle=(Atan2(#MidY#-#A1Y#, #MidX#-#A1X#))
LineColor=#MLinecolor#
Solid=0
AntiAlias=1
DynamicVariables=1

[MeterA3MidLine]
Meter=Roundline
X=#A3X#
Y=#A3Y#
LineWidth=#LineWidth#
LineLength=(Sqrt(((#MidX#-#A3X#)*(#MidX#-#A3X#))+((#MidY#-#A3Y#)*(#MidY#-#A3Y#))))
StartAngle=Rad(360)
RotationAngle=(Atan2(#MidY#-#A3Y#, #MidX#-#A3X#))
LineColor=#MLinecolor#
Solid=0
AntiAlias=1
DynamicVariables=1


[MeterA4MidLine]
Meter=Roundline
X=#A4X#
Y=#A4Y#
LineWidth=#LineWidth#
LineLength=(Sqrt(((#MidX#-#A4X#)*(#MidX#-#A4X#))+((#MidY#-#A4Y#)*(#MidY#-#A4Y#))))
StartAngle=Rad(360)
RotationAngle=(Atan2(#MidY#-#A4Y#, #MidX#-#A4X#))
LineColor=#MLinecolor#
Solid=0
AntiAlias=1
DynamicVariables=1


[MeterA5MidLine]
Meter=Roundline
X=#A5X#
Y=#A5Y#
LineWidth=#LineWidth#
LineLength=(Sqrt(((#MidX#-#A5X#)*(#MidX#-#A5X#))+((#MidY#-#A5Y#)*(#MidY#-#A5Y#))))
StartAngle=Rad(360)
RotationAngle=(Atan2(#MidY#-#A5Y#, #MidX#-#A5X#))
LineColor=#MLinecolor#
Solid=0
AntiAlias=1
DynamicVariables=1


[MeterA6MidLine]
Meter=Roundline
X=#A6X#
Y=#A6Y#
LineWidth=#LineWidth#
LineLength=(Sqrt(((#MidX#-#A6X#)*(#MidX#-#A6X#))+((#MidY#-#A6Y#)*(#MidY#-#A6Y#))))
StartAngle=Rad(360)
RotationAngle=(Atan2(#MidY#-#A6Y#, #MidX#-#A6X#))
LineColor=#MLinecolor#
Solid=0
AntiAlias=1
DynamicVariables=1








