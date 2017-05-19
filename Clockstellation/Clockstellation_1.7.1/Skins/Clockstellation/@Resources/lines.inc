[MeterShape]
Meter=shape

;Midlines
Shape=Line #SecX#,#SecY#,#MidX#,#MidY# | Extend Midlines
Shape2=Line #MinX#,#MinY#,#MidX#,#MidY# | Extend Midlines
Shape3=Line #HourX#,#HourY#,#MidX#,#MidY# | Extend Midlines

;MidDot
Shape4=Ellipse #MidX#,#MidY#,(#Size#/20)  | Extend MidMidDot

;Shape
Shape5=Path ShapePath | Extend Lines
ShapePath=#SecX#,#SecY# | LineTo #MinX#,#MinY# | LineTo #HourX#,#HourY# | ClosePath 1 | SetRoundJoin 1

;Dots
Shape6=Ellipse #SecX#,#SecY#,(#Size#/16)  | Fill Color #Seccolor# | Extend Dots
Shape7=Ellipse #MinX#,#MinY#,(#Size#/15)  | Fill Color #Mincolor# | Extend Dots
Shape8=Ellipse #HourX#,#HourY#,(#Size#/13)  | Fill Color #Hourcolor# | Extend Dots

Shape9=Ellipse #D1X#,#D1Y#,(#Size#/30)  | Extend MidDots
Shape10=Ellipse #D2X#,#D2Y#,(#Size#/30)  | Extend MidDots
Shape11=Ellipse #D3X#,#D3Y#,(#Size#/30)  | Extend MidDots
Shape12=Ellipse #D4X#,#D4Y#,(#Size#/30)  | Extend MidDots
Shape13=Ellipse #D5X#,#D5Y#,(#Size#/30)  | Extend MidDots
Shape14=Ellipse #D6X#,#D6Y#,(#Size#/30)  | Extend MidDots
Shape15=Ellipse #D7X#,#D7Y#,(#Size#/30)  | Extend MidDots
Shape16=Ellipse #D8X#,#D8Y#,(#Size#/30)  | Extend MidDots
Shape17=Ellipse #D9X#,#D9Y#,(#Size#/30)  | Extend MidDots
Shape18=Ellipse #D10X#,#D10Y#,(#Size#/30)  | Extend MidDots
Shape19=Ellipse #D11X#,#D11Y#,(#Size#/30)  | Extend MidDots
Shape20=Ellipse #D12X#,#D12Y#,(#Size#/30)  | Extend MidDots
Shape21=Ellipse #MidX#,#MidY#,(#Size#/30)  | Extend MidDots

;Extentions
Lines=StrokeWidth #LineWidth# | Stroke Color #Linecolor# | Fill Color 255,255,255,0  | StrokeLineJoin Bevel
Dots=StrokeWidth 0
MidDots=Fill Color #RDotcolor# | StrokeWidth 0
MidMidDot=Fill Color #MDotcolor# | StrokeWidth 0
Midlines=StrokeWidth #LineWidth# | Stroke Color #MLinecolor#

AntiAlias=1
DynamicVariables=1









