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
LineLength=(#Size#/10)
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
LineLength=(#Size#/10)
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
LineLength=(#Size#/10)
LineColor=#Hourcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

;-----------------------
;LINES
;-----------------------

[MeterSecLine]
Meter=ROUNDLINE
MeasureName=MeasureSecAngle
X=(#SecStartX#-[MeasureSecLine])+((#Size#/100)*15)
Y=(#SecStartY#-[MeasureSecLine])+((#Size#/100)*15)
W=(2 * [MeasureSecLine])
H=(2 * [MeasureSecLine])
LineWidth=#LineWidth#
LineLength=([MeasureSecLine])
LineStart=0
StartAngle=(-PI/2)
RotationAngle=(PI * 2)
LineColor=#Linecolor#
Solid=0
AntiAlias=1
DynamicVariables=1

[MeterMinLine]
Meter=ROUNDLINE
MeasureName=MeasureMinAngle
X=(#MinStartX#-[MeasureMinLine])+((#Size#/100)*15)
Y=(#MinStartY#-[MeasureMinLine])+((#Size#/100)*15)
W=(2 * [MeasureMinLine])
H=(2 * [MeasureMinLine])
LineWidth=#LineWidth#
LineLength=([MeasureMinLine])
LineStart=0
StartAngle=(-PI/2)
RotationAngle=(PI * 2)
LineColor=#Linecolor#
Solid=0
AntiAlias=1
DynamicVariables=1

[MeterHourLine]
Meter=ROUNDLINE
MeasureName=MeasureHourAngle
X=(#HourStartX#-[MeasureHourLine])+((#Size#/100)*15)
Y=(#HourStartY#-[MeasureHourLine])+((#Size#/100)*15)
W=(2 * [MeasureHourLine])
H=(2 * [MeasureHourLine])
LineWidth=#LineWidth#
LineLength=([MeasureHourLine])
LineStart=0
StartAngle=(-PI/2)
RotationAngle=(PI * 2)
LineColor=#Linecolor#
Solid=0
AntiAlias=1
DynamicVariables=1


