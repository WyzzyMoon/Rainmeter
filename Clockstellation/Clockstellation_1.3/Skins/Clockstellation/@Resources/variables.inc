[Variables]

;Size of the skin
Size=150

;Line Lenght
LineLength=6

;Width of the lines
LineWidth=4

;Color of the lines
Linecolor=255,255,255,150

;Color of the middle lines
MLinecolor=255,255,255,100

;Color of the Dots around (255,255,255,0 for OFF )
RDotcolor=255,255,255,100

;Color of the middle Dot (255,255,255,0 for OFF )
MDotcolor=255,255,255,255

;Color of the hour
Hourcolor=255,255,255,255

;Color of the minutes
Mincolor=255,255,255,255

;Color of the seconds
Seccolor=255,255,255,255


Sec=[MeasureSec]
Min=[MeasureMin]
Hour=[MeasureHours]

Length=(#LineLength#*(#Size#/10))

SecAngle=(((2*PI)/60)*#Sec#)-(0.5*PI)))
MinAngle=(((2*PI)/60)*#Min#)-(0.5*PI)))
HourAngle=(((2*PI)/12)*#Hour#)-(0.5*PI)))


;Sec to Min
SecStartX=(#Length#+(#Length#*Cos(#SecAngle#)
SecStartY=(#Length#+(#Length#*Sin(#SecAngle#)
SecStopX=(#Length#+(#Length#*Cos(#MinAngle#)
SecStopY=(#Length#+(#Length#*Sin(#MinAngle#)

;Min to Hour
MinStartX=(#Length#+(#Length#*Cos(#MinAngle#)
MinStartY=(#Length#+(#Length#*Sin(#MinAngle#)
MinStopX=(#Length#+(#Length#*Cos(#HourAngle#)
MinStopY=(#Length#+(#Length#*Sin(#HourAngle#)

;Hour to Sec
HourStartX=(#Length#+(#Length#*Cos(#HourAngle#)
HourStartY=(#Length#+(#Length#*Sin(#HourAngle#)
HourStopX=(#Length#+(#Length#*Cos(#SecAngle#)
HourStopY=(#Length#+(#Length#*Sin(#SecAngle#)

MidX=(#D12X#+(#Size#/10))
MidY=(#D9Y#+(#Size#/10))

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

D1X=(#Length#+(#Length#*Cos(#D1#)
D1Y=(#Length#+(#Length#*Sin(#D1#)
D2X=(#Length#+(#Length#*Cos(#D2#)
D2Y=(#Length#+(#Length#*Sin(#D2#)
D3X=(#Length#+(#Length#*Cos(#D3#)
D3Y=(#Length#+(#Length#*Sin(#D3#)
D4X=(#Length#+(#Length#*Cos(#D4#)
D4Y=(#Length#+(#Length#*Sin(#D4#)
D5X=(#Length#+(#Length#*Cos(#D5#)
D5Y=(#Length#+(#Length#*Sin(#D5#)
D6X=(#Length#+(#Length#*Cos(#D6#)
D6Y=(#Length#+(#Length#*Sin(#D6#)
D7X=(#Length#+(#Length#*Cos(#D7#)
D7Y=(#Length#+(#Length#*Sin(#D7#)
D8X=(#Length#+(#Length#*Cos(#D8#)
D8Y=(#Length#+(#Length#*Sin(#D8#)
D9X=(#Length#+(#Length#*Cos(#D9#)
D9Y=(#Length#+(#Length#*Sin(#D9#)
D10X=(#Length#+(#Length#*Cos(#D10#)
D10Y=(#Length#+(#Length#*Sin(#D10#)
D11X=(#Length#+(#Length#*Cos(#D11#)
D11Y=(#Length#+(#Length#*Sin(#D11#)
D12X=(#Length#+(#Length#*Cos(#D12#)
D12Y=(#Length#+(#Length#*Sin(#D12#)







