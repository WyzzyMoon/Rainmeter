[Variables]
;ORBITS

;Orbit 1
Orb1Speed=((1-((([MeasureCalcRAM])/100)))*#Speed#)

Orb1Count=[Orb1Counter]
Orb1Reset=1
Orb1Angle=(((2*PI)/#Orb1Speed#)*(#Orb1Count#))-(0.5*PI)))
Orb1X=((((5*#Size#))+((#Orb1Dist#)*Cos(#Orb1Angle#)+(10/10))
Orb1Y=((((5*#Size#))+((#Orb1Dist#)*Sin(#Orb1Angle#)+(20/10))

;Orbit 2
Orb2Speed=(2*#Speed#)

Orb2Count=[Orb2Counter]
Orb2Reset=1
Orb2Angle=(((2*PI)/(#Orb2Speed#))*(#Orb2Count#))-(0.5*PI)))
Orb2X=((((5*#Size#))+((#Orb2Dist#)*Cos(#Orb2Angle#)+(10/10))
Orb2Y=((((5*#Size#))+((#Orb2Dist#)*Sin(#Orb2Angle#)+(20/10))

;Orbit 3
Orb3Speed=(3*#Speed#)

Orb3Count=[Orb3Counter]
Orb3Reset=1
Orb3Angle=(((2*PI)/#Orb3Speed#)*(#Orb3Count#))-(0.5*PI)))
Orb3X=((((5*#Size#))+((#Orb3Dist#)*Cos(#Orb3Angle#)+(10/10))
Orb3Y=((((5*#Size#))+((#Orb3Dist#)*Sin(#Orb3Angle#)+(20/10))

;Orbit 4
Orb4Speed=(4*#Speed#)

Orb4Count=[Orb4Counter]
Orb4Reset=1
Orb4Angle=(((2*PI)/#Orb4Speed#)*(#Orb4Count#))-(0.5*PI)))
Orb4X=((((5*#Size#))+((#Orb4Dist#)*Cos(#Orb4Angle#)+(10/10))
Orb4Y=((((5*#Size#))+((#Orb4Dist#)*Sin(#Orb4Angle#)+(20/10))

;Orbit 5
Orb5Speed=(5*#Speed#)

Orb5Count=[Orb5Counter]
Orb5Reset=1
Orb5Angle=(((2*PI)/#Orb5Speed#)*(#Orb5Count#))-(0.5*PI)))
Orb5X=((((5*#Size#))+((#Orb5Dist#)*Cos(#Orb5Angle#)+(10/10))
Orb5Y=((((5*#Size#))+((#Orb5Dist#)*Sin(#Orb5Angle#)+(20/10))
