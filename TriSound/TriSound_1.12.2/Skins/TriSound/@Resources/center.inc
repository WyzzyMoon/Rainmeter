[MeterTri]
Meter=shape
Shape=Path ShapePath | Extend Modifiers
ShapePath=#I1Xpos#,#I1Ypos# | LineTo #I2Xpos#,#I2Ypos# | LineTo #I3Xpos#,#I3Ypos# | ClosePath 1
Modifiers=StrokeWidth ((#BorderSize#/15)*#Size#) | Stroke Color #TriBarColor# | Fill Color #TriFillColor# | StrokeLineJoin Miter | Scale (1.0-(#CenterFlip#)),(1.0-(#CenterFlip#))
DynamicVariables=1

