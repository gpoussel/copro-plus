@ECHO off
SETLOCAL

call wt --size 160,50 --title "Watcher" -d "./" %~dp0\watch.cmd ; split-pane --title "Problem Solving" --tabColor #0078D4 -V -d %~dp0 ; new-tab -d %~dp0 --title "Miscellaneous" --tabColor #404040 ; focus-tab --target 0

ENDLOCAL

EXIT /B
