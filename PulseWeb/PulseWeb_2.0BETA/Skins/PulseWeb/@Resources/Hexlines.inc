;-----------------------
;DOTS
;-----------------------

[MeterBlocks]
Meter=Shape
Shape=Ellipse #A1X#,#A1Y#,#Dsize#  | Extend Modifiers
Shape2=Ellipse #A2X#,#A2Y#,#Dsize#  | Extend Modifiers
Shape3=Ellipse #A3X#,#A3Y#,#Dsize#  | Extend Modifiers
Shape4=Ellipse #A4X#,#A4Y#,#Dsize#  | Extend Modifiers
Shape5=Ellipse #A5X#,#A5Y#,#Dsize#  | Extend Modifiers
Shape6=Ellipse #A6X#,#A6Y#,#Dsize#  | Extend Modifiers
Shape7=Ellipse #MidX#,#MidY#,#Dsize#  | Extend Modifiers
Modifiers=Fill Color #DotColor# | StrokeWidth 0
AntiAlias=1
DynamicVariables=1


;-----------------------
;LINES
;-----------------------

[MeterLines]
Meter=shape
Shape=Line #A1X#,#A1Y#,#A2X#,#A2Y# | Extend Modifiers
Shape2=Line #A2X#,#A2Y#,#A3X#,#A3Y# | Extend Modifiers
Shape3=Line#A3X#,#A3Y#,#A4X#,#A4Y# | Extend Modifiers
Shape4=Line #A4X#,#A4Y#,#A5X#,#A5Y# | Extend Modifiers
Shape5=Line #A5X#,#A5Y#,#A6X#,#A6Y# | Extend Modifiers
Shape6=Line#A6X#,#A6Y#,#A1X#,#A1Y# | Extend Modifiers
Modifiers=StrokeWidth #LineWidth# | Stroke Color #Linecolor#
DynamicVariables=1

[MeterMidLines]
Meter=shape
Shape=Line #A1X#,#A1Y#,#MidX#,#MidY# | Extend Modifiers
Shape2=Line #A2X#,#A2Y#,#MidX#,#MidY# | Extend Modifiers
Shape3=Line #A3X#,#A3Y#,#MidX#,#MidY# | Extend Modifiers
Shape4=Line #A4X#,#A4Y#,#MidX#,#MidY# | Extend Modifiers
Shape5=Line #A5X#,#A5Y#,#MidX#,#MidY# | Extend Modifiers
Shape6=Line #A6X#,#A6Y#,#MidX#,#MidY# | Extend Modifiers
Modifiers=StrokeWidth #LineWidth# | Stroke Color #MLinecolor#
DynamicVariables=1










