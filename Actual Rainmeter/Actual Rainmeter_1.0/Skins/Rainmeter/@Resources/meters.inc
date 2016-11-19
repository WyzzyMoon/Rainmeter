
[MeterRain]
Meter=Image
ImageName=#@#Images\Inside
ImageTint=#IColor#
PreserveAspectRatio=1
X=((17.95/15)*#Size#)
Y=(((35.6/15)*#Size#)+#cor#)
W=(6.2*#Size#)
H=(6.2*#Size#)
ImageCrop=0,(140+#Fill#),340,376,1
DynamicVariables=1
AntiAlias=1

[MeterOutline]
Meter=Image
ImageName=#@#Images\Outside
ImageTint=#OColor#
PreserveAspectRatio=1
W=(10*#Size#)
H=(10*#Size#)
X=0
Y=0
Tile=0
DynamicVariables=1
AntiAlias=1