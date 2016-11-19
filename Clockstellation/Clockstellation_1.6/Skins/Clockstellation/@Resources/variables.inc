[Variables]

;Size of the skin
Size=110

;Line Lenght
LineLength=8

;Smooth (0) or second jumps (1) 
SmoothMove=0

;Sorten individual lines
ShortSec=0
ShortMin=10
ShortHour=20

;Width of the lines
LineWidth=4

;Color of the lines
Linecolor=255,255,255,150

;Color of the middle lines
MLinecolor=255,255,255,20

;Color of the Dots around (255,255,255,0 for OFF )
RDotcolor=255,255,255,0

;Color of the middle Dot (255,255,255,0 for OFF )
MDotcolor=255,255,255,255

;Color of the hour
Hourcolor=255,255,255,255

;Color of the minutes
Mincolor=255,255,255,255

;Color of the seconds
Seccolor=255,255,255,255


Sec=[MeasureSecSmooth]
Min=[MeasureMinSmooth]
Hour=[MeasureHoursSmooth]

Length=((#LineLength#)*(#Size#/10))

SecAngle=((((2*PI)/((60)*#Smooth#))*(#Sec#))-(0.5*PI))
MinAngle=((((2*PI)/((60*60)*#Smooth#))*(#Min#))-(0.5*PI))
HourAngle=((((2*PI)/((12*60*60)*#Smooth#))*(#Hour#))-(0.5*PI))

;Sec point
SecX=((#Length#)+((#Length#-#ShortSec#)*Cos(#SecAngle#)+(#Size#/10)))
SecY=((#Length#)+((#Length#-#ShortSec#)*Sin(#SecAngle#)+(#Size#/10)))

;Min point
MinX=((#Length#)+((#Length#-#ShortMin#)*Cos(#MinAngle#)+(#Size#/10)))
MinY=((#Length#)+((#Length#-#ShortMin#)*Sin(#MinAngle#)+(#Size#/10)))

;Hour point
HourX=((#Length#)+((#Length#-#ShortHour#)*Cos(#HourAngle#)+(#Size#/10)))
HourY=((#Length#)+((#Length#-#ShortHour#)*Sin(#HourAngle#)+(#Size#/10)))

;Mid  point
MidX=#D6X#
MidY=#D3Y#

;Smoothness
Smooth=10-(#SmoothMove#*9)

D1=(((2*PI)/12)*1)-(0.5*PI)))
D2=(((2*PI)/12)*2)-(0.5*PI)))
D3=(((2*PI)/12)*3)-(0.5*PI)))
D4=(((2*PI)/12)*4)-(0.5*PI)))
D5=(((2*PI)/12)*5)-(0.5*PI)))
D6=(((2*PI)/12)*6)-(0.5*PI)))
D7=(((2*PI)/12)*7)-(0.5*PI)))
D8=(((2*PI)/12)*8)-(0.5*PI)))
D9=(((2*PI)/12)*9)-(0.5*PI)))
D10=(((2*PI)/12)*10)-(0.5*PI)))
D11=(((2*PI)/12)*11)-(0.5*PI)))
D12=(((2*PI)/12)*12)-(0.5*PI)))

D1X=(#Length#+(#Length#*Cos(#D1#)+(#Size#/10)
D1Y=(#Length#+(#Length#*Sin(#D1#)+(#Size#/10)
D2X=(#Length#+(#Length#*Cos(#D2#)+(#Size#/10)
D2Y=(#Length#+(#Length#*Sin(#D2#)+(#Size#/10)
D3X=(#Length#+(#Length#*Cos(#D3#)+(#Size#/10)
D3Y=(#Length#+(#Length#*Sin(#D3#)+(#Size#/10)
D4X=(#Length#+(#Length#*Cos(#D4#)+(#Size#/10)
D4Y=(#Length#+(#Length#*Sin(#D4#)+(#Size#/10)
D5X=(#Length#+(#Length#*Cos(#D5#)+(#Size#/10)
D5Y=(#Length#+(#Length#*Sin(#D5#)+(#Size#/10)
D6X=(#Length#+(#Length#*Cos(#D6#)+(#Size#/10)
D6Y=(#Length#+(#Length#*Sin(#D6#)+(#Size#/10)
D7X=(#Length#+(#Length#*Cos(#D7#)+(#Size#/10)
D7Y=(#Length#+(#Length#*Sin(#D7#)+(#Size#/10)
D8X=(#Length#+(#Length#*Cos(#D8#)+(#Size#/10)
D8Y=(#Length#+(#Length#*Sin(#D8#)+(#Size#/10)
D9X=(#Length#+(#Length#*Cos(#D9#)+(#Size#/10)
D9Y=(#Length#+(#Length#*Sin(#D9#)+(#Size#/10)
D10X=(#Length#+(#Length#*Cos(#D10#)+(#Size#/10)
D10Y=(#Length#+(#Length#*Sin(#D10#)+(#Size#/10)
D11X=(#Length#+(#Length#*Cos(#D11#)+(#Size#/10)
D11Y=(#Length#+(#Length#*Sin(#D11#)+(#Size#/10)
D12X=(#Length#+(#Length#*Cos(#D12#)+(#Size#/10)
D12Y=(#Length#+(#Length#*Sin(#D12#)+(#Size#/10)







