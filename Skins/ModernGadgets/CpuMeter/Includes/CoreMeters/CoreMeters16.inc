[IncludeCoreMeters8]
@includeCoreMeters8=CoreMeters8.inc

; Core 9
[MeterCore9Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 9) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 9:
Group=CpuCore9
Hidden=(#cpuCores# < 9) || (#showAvgCpuUsage# = 1)

[MeterCore9Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore9
MeasureName2=MeasureCpuTempCoreTempCore9
MeasureName3=MeasureCpuTempSpeedFanCore9
Text=%1#deg##tempUnits#
Group=CpuCore9 | CoreTemps
Hidden=(#cpuCores# < 9) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore9Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore9
Group=CpuCore9 | CoreVoltages
Hidden=(#cpuCores# < 9) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore9Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore9
Text=%1%
Group=CpuCore9
Hidden=(#cpuCores# < 9) || (#showAvgCpuUsage# = 1)

[MeterCore9Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore9
BarColor=#colorCore9#
Group=CpuCore9
Hidden=(#cpuCores# < 9) || (#showAvgCpuUsage# = 1)

; Core 10
[MeterCore10Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 10) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 10:
Group=CpuCore10
Hidden=(#cpuCores# < 10) || (#showAvgCpuUsage# = 1)

[MeterCore10Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore10
MeasureName2=MeasureCpuTempCoreTempCore10
MeasureName3=MeasureCpuTempSpeedFanCore10
Text=%1#deg##tempUnits#
Group=CpuCore10 | CoreTemps
Hidden=(#cpuCores# < 10) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore10Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore10
Group=CpuCore10 | CoreVoltages
Hidden=(#cpuCores# < 10) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore10Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore10
Text=%1%
Group=CpuCore10
Hidden=(#cpuCores# < 10) || (#showAvgCpuUsage# = 1)

[MeterCore10Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore10
BarColor=#colorCore10#
Group=CpuCore10
Hidden=(#cpuCores# < 10) || (#showAvgCpuUsage# = 1)

; Core 11
[MeterCore11Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 11) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 11:
Group=CpuCore11
Hidden=(#cpuCores# < 11) || (#showAvgCpuUsage# = 1)

[MeterCore11Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore11
MeasureName2=MeasureCpuTempCoreTempCore1
MeasureName3=MeasureCpuTempSpeedFanCore11
Text=%1#deg##tempUnits#
Group=CpuCore11 | CoreTemps
Hidden=(#cpuCores# < 11) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore11Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore11
Group=CpuCore11 | CoreVoltages
Hidden=(#cpuCores# < 11) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore11Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore11
Text=%1%
Group=CpuCore11
Hidden=(#cpuCores# < 11) || (#showAvgCpuUsage# = 1)

[MeterCore11Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore11
BarColor=#colorCore11#
Group=CpuCore11
Hidden=(#cpuCores# < 11) || (#showAvgCpuUsage# = 1)

; Core 12
[MeterCore12Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 12) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 12:
Group=CpuCore12
Hidden=(#cpuCores# < 12) || (#showAvgCpuUsage# = 1)

[MeterCore12Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore12
MeasureName2=MeasureCpuTempCoreTempCore12
MeasureName3=MeasureCpuTempSpeedFanCore12
Text=%1#deg##tempUnits#
Group=CpuCore12 | CoreTemps
Hidden=(#cpuCores# < 12) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore12Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore12
Group=CpuCore12 | CoreVoltages
Hidden=(#cpuCores# < 12) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore12Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore12
Text=%1%
Group=CpuCore12
Hidden=(#cpuCores# < 12) || (#showAvgCpuUsage# = 1)

[MeterCore12Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore12
BarColor=#colorCore12#
Group=CpuCore12
Hidden=(#cpuCores# < 12) || (#showAvgCpuUsage# = 1)

; Core 13
[MeterCore13Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 13) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 13:
Group=CpuCore13
Hidden=(#cpuCores# < 13) || (#showAvgCpuUsage# = 1)

[MeterCore13Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore13
MeasureName2=MeasureCpuTempCoreTempCore13
MeasureName3=MeasureCpuTempSpeedFanCore13
Text=%1#deg##tempUnits#
Group=CpuCore13 | CoreTemps
Hidden=(#cpuCores# < 13) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore13Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore13
Group=CpuCore13 | CoreVoltages
Hidden=(#cpuCores# < 13) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore13Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore13
Text=%1%
Group=CpuCore13
Hidden=(#cpuCores# < 13) || (#showAvgCpuUsage# = 1)

[MeterCore13Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore13
BarColor=#colorCore13#
Group=CpuCore13
Hidden=(#cpuCores# < 13) || (#showAvgCpuUsage# = 1)

; Core 14
[MeterCore14Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 14) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 14:
Group=CpuCore14
Hidden=(#cpuCores# < 14) || (#showAvgCpuUsage# = 1)

[MeterCore14Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore14
MeasureName2=MeasureCpuTempCoreTempCore14
MeasureName3=MeasureCpuTempSpeedFanCore14
Text=%1#deg##tempUnits#
Group=CpuCore14 | CoreTemps
Hidden=(#cpuCores# < 14) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore14Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore14
Group=CpuCore14 | CoreVoltages
Hidden=(#cpuCores# < 14) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore14Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore14
Text=%1%
Group=CpuCore14
Hidden=(#cpuCores# < 14) || (#showAvgCpuUsage# = 1)

[MeterCore14Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore14
BarColor=#colorCore14#
Group=CpuCore14
Hidden=(#cpuCores# < 14) || (#showAvgCpuUsage# = 1)

; Core 15
[MeterCore15Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 15) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 15:
Group=CpuCore15
Hidden=(#cpuCores# < 15) || (#showAvgCpuUsage# = 1)

[MeterCore15Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore15
MeasureName2=MeasureCpuTempCoreTempCore15
MeasureName3=MeasureCpuTempSpeedFanCore15
Text=%1#deg##tempUnits#
Group=CpuCore15 | CoreTemps
Hidden=(#cpuCores# < 15) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore15Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore15
Group=CpuCore15 | CoreVoltages
Hidden=(#cpuCores# < 15) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore15Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore15
Text=%1%
Group=CpuCore15
Hidden=(#cpuCores# < 15) || (#showAvgCpuUsage# = 1)

[MeterCore15Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore15
BarColor=#colorCore15#
Group=CpuCore15
Hidden=(#cpuCores# < 15) || (#showAvgCpuUsage# = 1)

; Core 16
[MeterCore16Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 16) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 16:
Group=CpuCore16
Hidden=(#cpuCores# < 16) || (#showAvgCpuUsage# = 1)

[MeterCore16Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore16
MeasureName2=MeasureCpuTempCoreTempCore16
MeasureName3=MeasureCpuTempSpeedFanCore16
Text=%1#deg##tempUnits#
Group=CpuCore16 | CoreTemps
Hidden=(#cpuCores# < 16) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore16Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore16
Group=CpuCore16 | CoreVoltages
Hidden=(#cpuCores# < 16) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore16Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore16
Text=%1%
Group=CpuCore16
Hidden=(#cpuCores# < 16) || (#showAvgCpuUsage# = 1)

[MeterCore16Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore16
BarColor=#colorCore16#
Group=CpuCore16
Hidden=(#cpuCores# < 16) || (#showAvgCpuUsage# = 1)