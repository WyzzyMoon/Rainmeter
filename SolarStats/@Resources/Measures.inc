[MeasureSec]
Measure=Time
Format=%S
DynamicVariables=1

[MeasureCPU]
Measure=CPU
Processor=0
DynamicVariables=1
AverageSize=50

[MeasureRAM]
Measure=PhysicalMemory
Total=1

[MeasureRAMused]
Measure=PhysicalMemory

[MeasureCalcRAM]
Measure=Calc
Formula=((MeasureRAMused)/(MeasureRAM/100))

[MeasureCalcCPU]
Measure=Calc
Formula=MeasureCPU
IfCondition=MeasureCPU > 70
IfTrueAction=[!SetOption MeasureCalcCPU Formula 70][!Update]
IfFalseAction=[!SetOption MeasureCalcCPU Formula MeasureCPU][!Update]