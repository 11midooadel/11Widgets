[Variables]
; Base

; Search
f_AddSearchInputToRecent=[!WriteKeyValue Variables Recent5 "#Recent4#" "#@#includes\settings\search-recent.inc"][!WriteKeyValue Variables Recent4 "#Recent3#" "#@#includes\settings\search-recent.inc"][!WriteKeyValue Variables Recent3 "#Recent2#" "#@#includes\settings\search-recent.inc"][!WriteKeyValue Variables Recent2 "#Recent1#" "#@#includes\settings\search-recent.inc"][!WriteKeyValue Variables Recent1 "[SearchInput]" "#@#includes\settings\search-recent.inc"]

f_ShowSearchResults=[!SetOption SearchText Text "#t_SearchText2#"][!HideMeterGroup SearchRecent][!HideMeterGroup SearchInfo]

f_ClearAllRecent=[!WriteKeyValue Variables Recent1 "" "#@#includes\settings\search-recent.inc"][!WriteKeyValue Variables Recent2 "" "#@#includes\settings\search-recent.inc"][!WriteKeyValue Variables Recent3 "" "#@#includes\settings\search-recent.inc"][!WriteKeyValue Variables Recent4 "" "#@#includes\settings\search-recent.inc"][!WriteKeyValue Variables Recent5 "" "#@#includes\settings\search-recent.inc"]