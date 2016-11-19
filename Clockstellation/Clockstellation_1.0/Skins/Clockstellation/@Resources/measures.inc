[MeasureHours]
Measure=Time
Format=%H
DynamicVariables=1

[MeasureMin]
Measure=Time
Format=%M
DynamicVariables=1

[MeasureSec]
Measure=Time
Format=%S
DynamicVariables=1




[MeasureAngleSecATAN]
Measure=CALC
Formula=Atan((#SecStopY# - #SecStartY#) / (#SecStopX# - #SecStartX#))
DynamicVariables=1

[MeasureAngleMinATAN]
Measure=CALC
Formula=Atan((#MinStopY# - #MinStartY#) / (#MinStopX# - #MinStartX#))
DynamicVariables=1

[MeasureAngleHourATAN]
Measure=CALC
Formula=Atan((#HourStopY# - #HourStartY#) / (#HourStopX# - #HourStartX#))
DynamicVariables=1



[MeasureSecAngle]
Measure=CALC
Formula=(#SecStopX# - #SecStartX#) <= 0 ? MeasureAngleSecATAN + (PI * 1.5) : MeasureAngleSecATAN + (PI / 2)
DynamicVariables=1
MinValue=0
MaxValue=(2*PI)

[MeasureMinAngle]
Measure=CALC
Formula=(#MinStopX# - #MinStartX#) <= 0 ? MeasureAngleMinATAN + (PI * 1.5) : MeasureAngleMinATAN + (PI / 2)
DynamicVariables=1
MinValue=0
MaxValue=(2*PI)

[MeasureHourAngle]
Measure=CALC
Formula=(#HourStopX# - #HourStartX#) <= 0 ? MeasureAngleHourATAN + (PI * 1.5) : MeasureAngleHourATAN + (PI / 2)
DynamicVariables=1
MinValue=0
MaxValue=(2*PI)






[MeasureSecLine]
Measure=CALC
Formula=Floor(Sqrt(((#SecStartX#-#SecStopX#)*(#SecStartX#-#SecStopX#))+((#SecStartY#-#SecStopY#)*(#SecStartY#-#SecStopY#))) + 0.5)
DynamicVariables=1

[MeasureMinLine]
Measure=CALC
Formula=Floor(Sqrt(((#MinStartX#-#MinStopX#)*(#MinStartX#-#MinStopX#))+((#MinStartY#-#MinStopY#)*(#MinStartY#-#MinStopY#))) + 0.5)
DynamicVariables=1

[MeasureHourLine]
Measure=CALC
Formula=Floor(Sqrt(((#HourStartX#-#HourStopX#)*(#HourStartX#-#HourStopX#))+((#HourStartY#-#HourStopY#)*(#HourStartY#-#HourStopY#))) + 0.5)
DynamicVariables=1
