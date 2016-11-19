[Variables]


;Enter your weather code
WeatherCode=UKXX0085


;Skinsize
Size=16


;Outside Color
;Default Rainmeter color 179,179,179
;Alternative Rainmeter color 42,109,155

OColor=179,179,179

;Inside Color
;Default Rainmeter color 161,186,220
;Alternative Rainmeter color 224,144,40

IColor=161,186,220



;Don't edit these varables if you don't know what you're doing
Fill=(374-(3.74*[MeasureRain]))
Cor=(((94/15)*#Size#)-(((0.94/15)*#Size#)*[MeasureRain]))

