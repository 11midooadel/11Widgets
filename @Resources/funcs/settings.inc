[Variables]
; Base
f_CenterWindow=[!SetWindowPosition "((#WORKAREAWIDTH#/2)-(#WindowW#/2))" "((#WORKAREAHEIGHT#/2)-(#WindowH#/2))"]

f_ShowSettingsLoading=[!HideMeterGroup Sidebar][!DisableMouseAction * *][!EnableMouseAction SettingsLoadingBG *][!ShowMeterGroup SettingsLoading]

; Tab style
f_SwitchOnBG=Fill Color 387aff

f_SwitchOnFG=Offset (30*#Scale#), 0

; Search
f_AddSearchInputToRecent=[!WriteKeyValue Variables Recent5 "#Recent4#" "#@#data\settings.inc"][!WriteKeyValue Variables Recent4 "#Recent3#" "#@#data\settings.inc"][!WriteKeyValue Variables Recent3 "#Recent2#" "#@#data\settings.inc"][!WriteKeyValue Variables Recent2 "#Recent1#" "#@#data\settings.inc"][!WriteKeyValue Variables Recent1 "[SearchInput]" "#@#data\settings.inc"]

f_ShowSearchResults=[!SetOption SearchText Text "#t_SearchText2#"][!HideMeterGroup SearchRecent][!HideMeterGroup SearchInfo]

f_ClearAllRecent=[!WriteKeyValue Variables Recent1 "" "#@#data\settings.inc"][!WriteKeyValue Variables Recent2 "" "#@#data\settings.inc"][!WriteKeyValue Variables Recent3 "" "#@#data\settings.inc"][!WriteKeyValue Variables Recent4 "" "#@#data\settings.inc"][!WriteKeyValue Variables Recent5 "" "#@#data\settings.inc"]