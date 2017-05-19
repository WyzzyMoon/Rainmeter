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
Format="%S"

[MeasureSmooth]
Measure=Script
ScriptFile=#@#Counter.lua

[MeasureSecSmooth]
Measure=Calc
Formula=(MeasureSec + MeasureSmooth)/60

[MeasureMinSmooth]
Measure=Calc
Formula=(MeasureMin + MeasureSecSmooth)/60

[MeasureHoursSmooth]
Measure=Calc
Formula=(MeasureHours + MeasureMinSmooth)/60






