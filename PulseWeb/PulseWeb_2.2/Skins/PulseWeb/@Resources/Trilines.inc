[MeterShape]
Meter=shape

;Midlines
Shape=Line #A1X#,#A1Y#,#MidX#,#MidY# | Extend Midlines
Shape2=Line #A2X#,#A2Y#,#MidX#,#MidY# | Extend Midlines
Shape3=Line #A3X#,#A3Y#,#MidX#,#MidY# | Extend Midlines

;MidDot
Shape4=Ellipse #MidX#,#MidY#,#Dsize#  | Extend Dots

;Shape
Shape5=Path ShapePath | Extend Lines
ShapePath=#A1X#,#A1Y# | LineTo #A2X#,#A2Y# | LineTo #A3X#,#A3Y# | ClosePath 1 | SetRoundJoin 1

;Dots
Shape6=Ellipse #A1X#,#A1Y#,#Dsize#  | Extend Dots
Shape7=Ellipse #A2X#,#A2Y#,#Dsize#  | Extend Dots
Shape8=Ellipse #A3X#,#A3Y#,#Dsize#  | Extend Dots

;Extentions
Lines=StrokeWidth #LineWidth# | Stroke Color #Linecolor# | Fill Color #FillColor#  | StrokeLineJoin Bevel
Dots=Fill Color #DotColor# | StrokeWidth 0
Midlines=StrokeWidth #LineWidth# | Stroke Color #MLinecolor#

AntiAlias=1
DynamicVariables=1

















