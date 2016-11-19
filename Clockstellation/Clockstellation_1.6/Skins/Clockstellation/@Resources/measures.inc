[MeasureHours]
Measure=Time
Format=%I
DynamicVariables=1


[MeasureMin]
Measure=Time
Format=%M
DynamicVariables=1


[MeasureSec]
Measure=Time
Format=%S
DynamicVariables=1



[MeasureHoursSmooth]
Measure=Loop
StartValue=([MeasureHours]*60*60*#Smooth#)
EndValue=((60*60*12)*#Smooth#)
DynamicVariables=1

[MeasureMinSmooth]
Measure=Loop
StartValue=([MeasureMin]*60*#Smooth#)
EndValue=(3600*#Smooth#)
DynamicVariables=1

[MeasureSecSmooth]
Measure=Loop
StartValue=([MeasureSec]*#Smooth#)
EndValue=(60*#Smooth#)
DynamicVariables=1





