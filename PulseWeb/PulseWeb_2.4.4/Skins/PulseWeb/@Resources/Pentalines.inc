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
Side3=#A3X#,#A3Y# | LineTo #A4X#,#A4Y# | LineTo #MidX#,#MidY# | ClosePath 1 | SetRoundJoin 1
Shape5=Path Side4 | Extend Sides
Side4=#A4X#,#A4Y# | LineTo #A5X#,#A5Y# | LineTo #MidX#,#MidY# | ClosePath 1 | SetRoundJoin 1
Shape6=Path Side5 | Extend Sides
Side5=#A5X#,#A5Y# | LineTo #A1X#,#A1Y# | LineTo #MidX#,#MidY# | ClosePath 1 | SetRoundJoin 1

;Midlines
Shape7=Line #A1X#,#A1Y#,#MidX#,#MidY# | Extend Midlines
Shape8=Line #A2X#,#A2Y#,#MidX#,#MidY# | Extend Midlines
Shape9=Line #A3X#,#A3Y#,#MidX#,#MidY# | Extend Midlines
Shape10=Line #A4X#,#A4Y#,#MidX#,#MidY# | Extend Midlines
Shape11=Line #A5X#,#A5Y#,#MidX#,#MidY# | Extend Midlines

;Shape
Shape12=Path ShapePath | Extend Lines
ShapePath=#A1X#,#A1Y# | LineTo #A2X#,#A2Y# | LineTo #A3X#,#A3Y# | LineTo #A4X#,#A4Y# | LineTo #A5X#,#A5Y# | ClosePath 1 | SetRoundJoin 1

;Dots
Shape13=Ellipse #A1X#,#A1Y#,#Dsize#  | Extend Dots
Shape14=Ellipse #A2X#,#A2Y#,#Dsize#  | Extend Dots
Shape15=Ellipse #A3X#,#A3Y#,#Dsize#  | Extend Dots
Shape16=Ellipse #A4X#,#A4Y#,#Dsize#  | Extend Dots
Shape17=Ellipse #A5X#,#A5Y#,#Dsize#  | Extend Dots

;Extentions
Lines=StrokeWidth #LineWidth# | Stroke Color #Linecolor# | Fill Color #FillColor#  | StrokeLineJoin Bevel
Dots=Fill Color #DotColor# | StrokeWidth 0
Midlines=StrokeWidth #LineWidth# | Stroke Color #MLinecolor#
Sides=StrokeWidth 0 | Stroke Color 0,0,0,0 | Fill Color #SideFillColor#  | StrokeLineJoin Bevel

AntiAlias=1
DynamicVariables=1













