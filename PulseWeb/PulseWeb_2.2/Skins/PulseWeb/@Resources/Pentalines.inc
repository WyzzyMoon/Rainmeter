[MeterShape]
Meter=shape

;Midlines
Shape=Line #A1X#,#A1Y#,#MidX#,#MidY# | Extend Midlines
Shape2=Line #A2X#,#A2Y#,#MidX#,#MidY# | Extend Midlines
Shape3=Line #A3X#,#A3Y#,#MidX#,#MidY# | Extend Midlines
Shape4=Line #A4X#,#A4Y#,#MidX#,#MidY# | Extend Midlines
Shape5=Line #A5X#,#A5Y#,#MidX#,#MidY# | Extend Midlines

;MidDot
Shape6=Ellipse #MidX#,#MidY#,#Dsize#  | Extend Dots

;Shape
Shape7=Path ShapePath | Extend Lines
ShapePath=#A1X#,#A1Y# | LineTo #A2X#,#A2Y# | LineTo #A3X#,#A3Y# | LineTo #A4X#,#A4Y# | LineTo #A5X#,#A5Y# |ClosePath 1 | SetRoundJoin 1

;Dots
Shape8=Ellipse #A1X#,#A1Y#,#Dsize#  | Extend Dots
Shape9=Ellipse #A2X#,#A2Y#,#Dsize#  | Extend Dots
Shape10=Ellipse #A3X#,#A3Y#,#Dsize#  | Extend Dots
Shape11=Ellipse #A4X#,#A4Y#,#Dsize#  | Extend Dots
Shape12=Ellipse #A5X#,#A5Y#,#Dsize#  | Extend Dots

;Extentions
Lines=StrokeWidth #LineWidth# | Stroke Color #Linecolor# | Fill Color #FillColor#  | StrokeLineJoin Bevel
Dots=Fill Color #DotColor# | StrokeWidth 0
Midlines=StrokeWidth #LineWidth# | Stroke Color #MLinecolor#

AntiAlias=1
DynamicVariables=1










