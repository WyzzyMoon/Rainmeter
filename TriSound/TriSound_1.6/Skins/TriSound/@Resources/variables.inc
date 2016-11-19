[Variables]


;Size of the skin
Size=15

;Change Max bar length ( positive and negative numbers allowed ) (max 150 )
BarLength=0

;Space between the bars (0-16)
BarSpace=2

;Color of the bars
Color=255,255,255,100

;Color of the triangle
TriColor=255,255,255

;Audio bar Settings ( Default S-1024 A-15 D-250 )
FFTSize=1024
FFTAttack=15
FFTDecay=250


;Don't change these variables if you don't know what your doing or you will break it...;) 
;            |
;            V


;bar positions 
LXPos=(#Size#*6)-(#BarSpace#*4)
LYPos=(#Size#*19.4)-#BarLength#
RXPos=((#Size#/5)*7.3)-(#BarSpace#*5)
RYPos=((#Size#/10)*-109.2)-#BarLength#
MXPos=((#Size#/10)*125)-(#BarSpace#*4.5)
MYPos=((#Size#/10)*214.6)

;Triangle settings 
IWidth=(15*#Size#)
IHeight=(15*#Size#)
IXpos=(10*#Size#)
IYpos=((#Size#/10)*75)

;Size Settings  
Width=#Size#
Height=(#Size#*10)+#BarLength#

;Diagonal settings 
Angle0=(PI/3)
Angle1=(PI/-3)
Orientation1=(cos(#Angle0#));(-sin(#Angle0#));(sin(#Angle0#));(cos(#Angle0#));(-(20*#Size#)*sin(#Angle0#));((20*#Size#)*(1-cos(#Angle0#))) 
Orientation2=(cos(#Angle1#));(-sin(#Angle1#));(sin(#Angle1#));(cos(#Angle1#));(-(20*#Size#)*sin(#Angle1#));((20*#Size#)*(1-cos(#Angle1#)))
