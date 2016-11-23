[Variables]
;Don't change these variables if you don't know what your doing or you will break it...;) 
;            |
;            V


;bar positions 
LXPos=((#Size#*12)-(#BarSpace#*4))+(#SkinFlip#*((#Size#/15)*47))
LYPos=((#Size#*23.2)-#BarLength#)+(#SkinFlip#*((#Size#/15)*228))
RXPos=(((#Size#/5)*5)-(#BarSpace#*5))-(#SkinFlip#*((#Size#/15)*47))
RYPos=(((#Size#/10)*-166.3)-#BarLength#)+(#SkinFlip#*((#Size#/15)*228))
MXPos=((#I1Xpos#+(#ISize#/2))-(((9*#BarSpace#)+(10*#Size#))/2))
MYPos=#I3Ypos#-(#SkinFlip#*((#Size#/15)*306))


;Triangle settings 
ISize=(12*#Size#)
I1Xpos=(17*#Size#)
I1Ypos=(17*#Size#)
I2Xpos=(((#I3Xpos#-#I1Xpos#)/2)+#I1Xpos#)
I2Ypos=(#I1Xpos#-((#ISize#)*Sin(Rad(60))))
I3Xpos=(#I1Xpos#+(#ISize#))
I3Ypos=(#I1Xpos#)

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


