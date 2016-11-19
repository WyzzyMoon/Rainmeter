[Variables]

;Size of the skin
Size=100

;Line Lenght
LineLength=6

;Color of the lines
Linecolor=255,255,255,100

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
SecStopX=#MinStartX#
SecStopY=#MinStartY#

;Min to Hour
MinStartX=(#Length#+(#Length#*Cos(#MinAngle#)
MinStartY=(#Length#+(#Length#*Sin(#MinAngle#)
MinStopX=#HourStartX#
MinStopY=#HourStartY#

;Hour to Sec
HourStartX=(#Length#+(#Length#*Cos(#HourAngle#)
HourStartY=(#Length#+(#Length#*Sin(#HourAngle#)
HourStopX=#SecStartX#
HourStopY=#SecStartY#

LineWidth=(#Size#/20)









