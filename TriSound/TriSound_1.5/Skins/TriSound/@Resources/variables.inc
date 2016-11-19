[Variables]

;Size of the skin
Size=15

;Change Max bar length ( positive and negative numbers allowed )
BarLength=0

;Color of the bars
Color=255,255,255,100

;Color of the triangle
TriColor=255,255,255




;Don't change these variables 
;            |
;            V

;bar positions DON'T CHANGE
LXPos=(#Size#*5)
LYPos=(#Size#*20)-#BarLength#
RXPos=((#Size#/10)*6)
RYPos=((#Size#/10)*-100)-#BarLength#
MXPos=((#Size#/10)*115)
MYPos=((#Size#/10)*214)

;Canvas Size DON'T CHANGE
CSize=(#Size#*30)
CWidth=#CSize#
CHeight=#CSize#

;Triangle settings DON'T CHANGE
IWidth=(15*#Size#)
IHeight=(15*#Size#)
IXpos=(10*#Size#)
IYpos=((#Size#/10)*75)

;Size Settings  DON'T CHANGE
Width=#Size#
Height=(#Size#*10)+#BarLength#

;Diagonal settings DON'T CHANGE
Angle0=(PI/3)
Angle1=(PI/-3)
Orientation1=(cos(#Angle0#));(-sin(#Angle0#));(sin(#Angle0#));(cos(#Angle0#));(-(20*#Size#)*sin(#Angle0#));((20*#Size#)*(1-cos(#Angle0#))) 
Orientation2=(cos(#Angle1#));(-sin(#Angle1#));(sin(#Angle1#));(cos(#Angle1#));(-(20*#Size#)*sin(#Angle1#));((20*#Size#)*(1-cos(#Angle1#)))
