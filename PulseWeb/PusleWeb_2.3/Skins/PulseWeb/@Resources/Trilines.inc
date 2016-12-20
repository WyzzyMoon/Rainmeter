[MeterShape]
Meter=shape

;MidDot
Shape=Ellipse #MidX#,#MidY#,#Dsize#  | Extend Dots

;Sides
Shape2=Path Side1 | Extend Sides
Side1=#A1X#,#A1Y# | LineTo #A2X#,#A2Y# | LineTo #MidX#,#MidY# | ClosePath 1 | SetRoundJoin 1
Shape3=Path Side2| Extend Sides
Side2=#A2X#,#A2Y# | LineTo #A3X#,#A3Y# | LineTo #MidX#,#MidY# | ClosePath 1 | SetRoundJoin 1
Shape4=Path Side3 | Extend Sides
Side3=#A3X#,#A3Y# | LineTo #A1X#,#A1Y# | LineTo #MidX#,#MidY# | ClosePath 1 | SetRoundJoin 1

;Midlines
Shape5=Line #A1X#,#A1Y#,#MidX#,#MidY# | Extend Midlines
Shape6=Line #A2X#,#A2Y#,#MidX#,#MidY# | Extend Midlines
Shape7=Line #A3X#,#A3Y#,#MidX#,#MidY# | Extend Midlines

;Shape
Shape8=Path ShapePath | Extend Lines
ShapePath=#A1X#,#A1Y# | LineTo #A2X#,#A2Y# | LineTo #A3X#,#A3Y# | ClosePath 1 | SetRoundJoin 1

;Dots
Shape9=Ellipse #A1X#,#A1Y#,#Dsize#  | Extend Dots
Shape10=Ellipse #A2X#,#A2Y#,#Dsize#  | Extend Dots
Shape11=Ellipse #A3X#,#A3Y#,#Dsize#  | Extend Dots

;Extentions
Lines=StrokeWidth #LineWidth# | Stroke Color #Linecolor# | Fill Color #FillColor#  | StrokeLineJoin Bevel
Dots=Fill Color #DotColor# | StrokeWidth 0
Midlines=StrokeWidth #LineWidth# | Stroke Color #MLinecolor#
Sides=StrokeWidth 0 | Stroke Color 0,0,0,0 | Fill Color #SideFillColor#  | StrokeLineJoin Bevel

AntiAlias=1
DynamicVariables=1

















