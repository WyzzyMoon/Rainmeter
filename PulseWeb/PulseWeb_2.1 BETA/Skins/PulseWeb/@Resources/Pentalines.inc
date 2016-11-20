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
Shape6=Ellipse #MidX#,#MidY#,#Dsize#  | Extend Modifiers
Modifiers=Fill Color #DotColor# | StrokeWidth 0
AntiAlias=1
DynamicVariables=1


;-----------------------
;LINES
;-----------------------

[MeterLines]
Meter=shape
Shape=Path ShapePath | Extend Modifiers
ShapePath=#A1X#,#A1Y# | LineTo #A2X#,#A2Y# | LineTo #A3X#,#A3Y# | LineTo #A4X#,#A4Y# | LineTo #A5X#,#A5Y# |ClosePath 1 | SetRoundJoin 1
Modifiers=StrokeWidth #LineWidth# | Stroke Color #Linecolor# | Fill Color #FillColor#  | StrokeLineJoin Bevel
DynamicVariables=1

[MeterMidLines]
Meter=shape
Shape=Line #A1X#,#A1Y#,#MidX#,#MidY# | Extend Modifiers
Shape2=Line #A2X#,#A2Y#,#MidX#,#MidY# | Extend Modifiers
Shape3=Line #A3X#,#A3Y#,#MidX#,#MidY# | Extend Modifiers
Shape4=Line #A4X#,#A4Y#,#MidX#,#MidY# | Extend Modifiers
Shape5=Line #A5X#,#A5Y#,#MidX#,#MidY# | Extend Modifiers
Modifiers=StrokeWidth #LineWidth# | Stroke Color #MLinecolor#
DynamicVariables=1










