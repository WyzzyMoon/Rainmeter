[MeasureAudio]
Measure=Plugin
Plugin=AudioLevel
Port=Output
FFTSize=#FFTSize#
FFTAttack=#FFTAttack#
FFTDecay=#FFTDecay#
Bands=30
Sensitivity=#Sensitivity#

[MeasureBandMid]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=15

[MeasureBandHigh]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=25

[MeasureBandLow]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=5
