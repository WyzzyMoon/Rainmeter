;MUSICOLOR by WyzzyMoon V1.2
;http://wyzzymoon.deviantart.com/
;
;A piece of code that generates colors and transparenty based on the audio spectrum.
;Put this file in your resources folder and "@include6=#@#MusiColor.inc" to THE TOP of your main .ini file
;Now the 2 variables "MusiColor" and "MusiColorO" are avalible to you.
;Just replace a RGB or RGBA code anywere in the code with #MusiColor# or #MusiColorO#
;#MusiColorT# includes the transparensy generation, #MusiColor# alows for manual transparanty settings by edding "," and your 
;choise of transparensy level behind it. 


;---------------
;Variables
;---------------

[Variables]

MCavrS=10

MCR=(255-([MeasureCalcR]))
MCG=(255-([MeasureCalcG]))
MCB=(255-([MeasureCalcB]))

MCTR=([MeasureCalcR])
MCTG=([MeasureCalcG])
MCTB=([MeasureCalcB])
MCTA=([MeasureCalcA])

MusiColor=#MCTR#,#MCTG#,#MCTB#,#MCTA#
MusiColorO=#MCR#,#MCG#,#MCB#


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








