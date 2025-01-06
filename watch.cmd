@ECHO off
SETLOCAL

where /q python
IF ERRORLEVEL 1 (
    echo %ESC%[91mThis executable needs python.exe in the PATH%ESC%[0m
    EXIT /B
)

echo.Running watcher...
CALL python cli/python/watch.py %*

ENDLOCAL

EXIT /B
