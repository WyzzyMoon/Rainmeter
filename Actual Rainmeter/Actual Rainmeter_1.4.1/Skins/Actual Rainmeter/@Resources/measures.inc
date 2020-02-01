[MeasureData]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=https://www.wunderground.com/hourly/#CountryCode#/#City#
RegExp=(?siU)title="chance of precipitation"></span>.*>(.*)</strong>.*
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


