[MeasureData]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=http://wxdata.weather.com/wxdata/weather/local/#WeatherCode#?cc=*&dayf=1
RegExp=(?siU)<part p="n">.*<ppcp>(.*)</ppcp>
UpdateRate=3600
DynamicVariables=1

[MeasureRain]
Measure=Plugin
Plugin=WebParser
URL=[MeasureData]
StringIndex=1
DynamicVariables=1

[MeasureChop]
Measure=Calc
Formula=(380/100)*(MeasureRain)
DynamicVariables=1

[MeasureMove]
Measure=Calc
Formula=(64/100)*(MeasureRain)
DynamicVariables=1

