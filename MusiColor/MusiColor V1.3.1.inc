;MUSICOLOR by WyzzyMoon V1.3
;http://wyzzymoon.deviantart.com/
;
;A piece of code that generates colors and transparency based on the audio spectrum.
;Put this file in your resources folder and "@include6=#@#MusiColor.inc" to THE TOP of your main .ini file
;(if there are already "@include" lines make sure that the number (6 in this case) is higher than the others)
;Now the 4 variables "MusiColor", MusiColorA, MusiColorX and "MusiColorO" are avalible to you.
;Just replace a RGB or RGBA code anywere in the code with #MusiColor#, #MusiColorA#, #MusiColorX# or #MusiColorO#
;
;MusiColor:
;An RGBA value, includes transparency
;
;MusiColorO
;An opaque version of MusiColor that allows for you own (Static) transparency by adding a comma and a value between 0 and 255 behind it.
;
;MusiColorX
;Just an amplified version of MusiColor with more intense colors
;
;MusiColorA
;Just the music generated transparency levels, this can be used after any RGB value to have only the transparency change
;#MusiColorO#,#MusiColorA# would be the same as #MusiColor#




;---------------
;Variables
;---------------

[Variables]

MCavrS=10

MCR=(255-([MeasureCalcR]))
MCG=(255-([MeasureCalcG]))
MCB=(255-([MeasureCalcB]))

MCXR=([MeasureCalcRx])
MCXG=([MeasureCalcGx])
MCXB=([MeasureCalcBx])
MCXA=([MeasureCalcA])

MCTR=([MeasureCalcR])
MCTG=([MeasureCalcG])
MCTB=([MeasureCalcB])
MCTA=([MeasureCalcA])

MusiColor=#MCTR#,#MCTG#,#MCTB#,#MCTA#
MusiColorO=#MCR#,#MCG#,#MCB#
MusiColorA=#MCTA#
MusiColorX=#MCXR#,#MCXG#,#MCXB#,#MCXA#


;---------------
;calculations
;---------------

[MeasureCalcR]
Measure=Calc
Formula=Clamp(Trunc(((MCBand0+MCBand1+MCBand2+MCBand3+MCBand4+MCBand5+MCBand6+MCBand7+MCBand8+MCBand9+MCBand10+MCBand11)/12)*200),0,255)
DynamicVariables=1

[MeasureCalcG]
Measure=Calc
Formula=Clamp(Trunc(((MCBand12+MCBand13+MCBand14+MCBand15+MCBand16+MCBand17)/6)*200),0,255)
DynamicVariables=1

[MeasureCalcB]
Measure=Calc
Formula=Clamp(Trunc(((MCBand18+MCBand19+MCBand20+MCBand21+MCBand22+MCBand23+MCBand24+MCBand25+MCBand26+MCBand27+MCBand28+MCBand29)/12)*200),0,255)
DynamicVariables=1

[MeasureCalcRx]
Measure=Calc
Formula=Clamp(Trunc(((MCBand0)/1)*200),0,255)
DynamicVariables=1

[MeasureCalcGx]
Measure=Calc
Formula=Clamp(Trunc(((MCBand14+MCBand15)/2)*200),0,255)
DynamicVariables=1

[MeasureCalcBx]
Measure=Calc
Formula=Clamp(Trunc(((MCBand29)/1)*200),0,255)
DynamicVariables=1

[MeasureCalcA]
Measure=Calc
Formula=Clamp(Trunc((MCAudio*600)),0,255)
DynamicVariables=1


;----------------
;Audio bands
;----------------

[MCAudio]
Measure=Plugin
Plugin=AudioLevel
Port=Output
FFTSize=1024
FFTAttack=15
FFTDecay=250
Bands=30


[MCBand0]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=0
AverageSize=#MCavrS#

[MCBand1]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=1
AverageSize=#MCavrS#

[MCBand2]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=2
AverageSize=#MCavrS#

[MCBand3]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=3
AverageSize=#MCavrS#

[MCBand4]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=4
AverageSize=#MCavrS#

[MCBand5]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=5
AverageSize=#MCavrS#

[MCBand6]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=6
AverageSize=#MCavrS#

[MCBand7]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=7
AverageSize=#MCavrS#

[MCBand8]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=8
AverageSize=#MCavrS#

[MCBand9]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=9
AverageSize=#MCavrS#

[MCBand10]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=10
AverageSize=#MCavrS#

[MCBand11]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=11
AverageSize=#MCavrS#

[MCBand12]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=12
AverageSize=#MCavrS#

[MCBand13]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=13
AverageSize=#MCavrS#

[MCBand14]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=14
AverageSize=#MCavrS#

[MCBand15]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=15
AverageSize=#MCavrS#

[MCBand16]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=16
AverageSize=#MCavrS#

[MCBand17]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=17
AverageSize=#MCavrS#

[MCBand18]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=18
AverageSize=#MCavrS#

[MCBand19]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=19
AverageSize=#MCavrS#

[MCBand20]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=20
AverageSize=#MCavrS#

[MCBand21]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=21
AverageSize=#MCavrS#

[MCBand22]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=22
AverageSize=#MCavrS#

[MCBand23]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=23
AverageSize=#MCavrS#

[MCBand24]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=24
AverageSize=#MCavrS#

[MCBand25]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=25
AverageSize=#MCavrS#

[MCBand26]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=26
AverageSize=#MCavrS#

[MCBand27]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=27
AverageSize=#MCavrS#

[MCBand28]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=28
AverageSize=#MCavrS#

[MCBand29]
Measure=Plugin
Plugin=AudioLevel
Parent=MCAudio
Type=Band
BandIdx=29
AverageSize=#MCavrS#








