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

[MeasureRainper]
Measure=Calc
Formula=(MeasureRain)
DynamicVariables=1

