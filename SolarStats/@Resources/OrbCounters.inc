[Orb1Counter]
Measure=Calc
Formula=(Orb1Counter+1)*#Orb1Reset#
IfBelowValue=1
IfBelowAction=!SetVariable Orb1Reset 1
IfAboveValue=#Orb1Speed#
IfAboveAction=!SetVariable Orb1Reset 0
DynamicVariables=1

[Orb2Counter]
Measure=Calc
Formula=(Orb2Counter+1)*#Orb2Reset#
IfBelowValue=1
IfBelowAction=!SetVariable Orb2Reset 1
IfAboveValue=#Orb2Speed#
IfAboveAction=!SetVariable Orb2Reset 0
DynamicVariables=1

[Orb3Counter]
Measure=Calc
Formula=(Orb3Counter+1)*#Orb3Reset#
IfBelowValue=1
IfBelowAction=!SetVariable Orb3Reset 1
IfAboveValue=#Orb3Speed#
IfAboveAction=!SetVariable Orb3Reset 0
DynamicVariables=1

[Orb4Counter]
Measure=Calc
Formula=(Orb4Counter+1)*#Orb4Reset#
IfBelowValue=1
IfBelowAction=!SetVariable Orb4Reset 1
IfAboveValue=#Orb4Speed#
IfAboveAction=!SetVariable Orb4Reset 0
DynamicVariables=1

[Orb5Counter]
Measure=Calc
Formula=(Orb5Counter+1)*#Orb5Reset#
IfBelowValue=1
IfBelowAction=!SetVariable Orb5Reset 1
IfAboveValue=#Orb5Speed#
IfAboveAction=!SetVariable Orb5Reset 0
DynamicVariables=1