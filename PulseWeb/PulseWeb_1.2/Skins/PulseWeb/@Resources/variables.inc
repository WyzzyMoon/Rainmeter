[Variables]

LineWidth=(#Size#/25)

Short3X=(((((#Length#)+((#Length#)*Cos(#A3Angle#)+(#Size#/10))-#RotMX#)*(#Short3#/10))
Short3Y=(((((#Length#)+((#Length#)*Sin(#A3Angle#)+(#Size#/10))-#RotMY#)*(#Short3#/10))
Short1X=(((((#Length#)+((#Length#)*Cos(#A1Angle#)+(#Size#/10))-#RotMX#)*(#Short1#/10))
Short1Y=(((((#Length#)+((#Length#)*Sin(#A1Angle#)+(#Size#/10))-#RotMY#)*(#Short1#/10))
Short2X=(((((#Length#)+((#Length#)*Cos(#A2Angle#)+(#Size#/10))-#RotMX#)*(#Short2#/10))
Short2Y=(((((#Length#)+((#Length#)*Sin(#A2Angle#)+(#Size#/10))-#RotMY#)*(#Short2#/10))
ShortallX=(((((#Length#)+((#Length#)*Cos(#AallAngle#)+(#Size#/10))-#RotMX#)*(#ShortAll#/10))
ShortallY=(((((#Length#)+((#Length#)*Sin(#AallAngle#)+(#Size#/10))-#RotMY#)*(#ShortAll#/10))


Aall=([MeasureAudio]*100)
A1=([MeasureBand5]*100)
A2=([MeasureBand15]*100)
A3=([MeasureBand25]*100)

Length=(#LineLength#*(#Size#/10))

Short3=([MeasureBand0]*#CenDist#)
Short1=([MeasureBand10]*#CenDist#)
Short2=([MeasureBand20]*#CenDist#)
ShortAll=([MeasureAudio]*#CenDist#)


AallAngle=(((2*PI)/100)*(#Aall#))-(0.5*PI)))
A1Angle=(((2*PI)/100)*(#A1#))-(0.5*PI)))
A2Angle=(((2*PI)/100)*(#A2#))-(0.5*PI)))
A3Angle=(((2*PI)/100)*(#A3#))-(0.5*PI)))




A1X=((((((#Length#)+((#Length#)*Cos(#A1Angle#)+(#Size#/10))-#Short1X#))+(#RestX#))
A1Y=((((((#Length#)+((#Length#)*Sin(#A1Angle#)+(#Size#/10))-#Short1Y#))+(#RestY#-45))

A2X=((((((#Length#)+((#Length#)*Cos(#A2Angle#)+(#Size#/10))-#Short2X#))+(#RestX#-40))
A2Y=((((((#Length#)+((#Length#)*Sin(#A2Angle#)+(#Size#/10))-#Short2Y#))+(#RestY#+25))

A3X=((((((#Length#)+((#Length#)*Cos(#A3Angle#)+(#Size#/10))-#Short3X#))+(#RestX#+40))
A3Y=((((((#Length#)+((#Length#)*Sin(#A3Angle#)+(#Size#/10))-#Short3Y#))+(#RestY#+25))

;MID POINTS

;Midpoint for the lines
MidX=500
MidY=500

;Midpoint for rotation, can't be MidX to prevent infinit loop
RotMX=50
RotMY=50

;0 point for no sound 
RestX=((#MidX#)-(((((#Length#)+((#Length#)*Cos((((2*PI)/60)*(0))-(0.5*PI))))+(#Size#/10))-#ShortallX#)))
RestY=((#MidY#)-(((((#Length#)+((#Length#)*Sin((((2*PI)/60)*(0))-(0.5*PI))))+(#Size#/10))-#ShortallY#)))






