[Variables]


;Size of the skin
Size=15

;Change Max bar length ( positive and negative numbers allowed ) (max 150 )
BarLength=0

;Space between the bars (0-16)
BarSpace=2

;Color of the bars (Supports MusiColor)
Color=255,255,255,100

;Color of the triangle Border (Supports MusiColor)
TriBarColor=255,255,255,255

;Color of the triangle Inside (Supports MusiColor)
TriFillColor=255,255,255,75

;Orientation of the skin ( 1 or 0 )
SkinFlip=0

;Audio bar Settings ( Default S-1024 A-15 D-250 )
FFTSize=1024
FFTAttack=15
FFTDecay=250























;Don't change these variables if you don't know what your doing or you will break it...;) 
;            |
;            V


;bar positions 
LXPos=((#Size#*6)-(#BarSpace#*4))+(#SkinFlip#*((#Size#/15)*60))
LYPos=((#Size#*19.4)-#BarLength#)+(#SkinFlip#*((#Size#/15)*247))
RXPos=(((#Size#/5)*7.3)-(#BarSpace#*5))-(#SkinFlip#*((#Size#/15)*60))
RYPos=(((#Size#/10)*-109.2)-#BarLength#)+(#SkinFlip#*((#Size#/15)*248))
MXPos=(((#Size#/10)*125)-(#BarSpace#*4.5))
MYPos=(((#Size#/10)*214.6))-(#SkinFlip#*((#Size#/15)*344))

;Triangle settings 
I1Xpos=((164/15)*#Size#)
I1Ypos=((313/15)*#Size#)
I2Xpos=(((#I3Xpos#-#I1Xpos#)/2)+#I1Xpos#)
I2Ypos=((144/15)*#Size#)
I3Xpos=((361/15)*#Size#)
I3Ypos=#I1Ypos#

;Size Settings  
Width=#Size#
Height=(#Size#*10)+#BarLength#

;Flip Setting
CenterFlip=2*#SkinFlip#

;Diagonal settings 
Angle0=(PI/3)
Angle1=(PI/-3)
Orientation1=(cos(#Angle0#));(-sin(#Angle0#));(sin(#Angle0#));(cos(#Angle0#));(-(20*#Size#)*sin(#Angle0#));((20*#Size#)*(1-cos(#Angle0#))) 
Orientation2=(cos(#Angle1#));(-sin(#Angle1#));(sin(#Angle1#));(cos(#Angle1#));(-(20*#Size#)*sin(#Angle1#));((20*#Size#)*(1-cos(#Angle1#)))


