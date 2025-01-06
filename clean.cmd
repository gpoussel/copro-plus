@ECHO off
SETLOCAL

REM Remove all .in files recursively
FOR /R %%f IN (*.in) DO (
    ECHO Deleting %%f
    DEL /Q %%f
)

REM Remove all .out files recursively
FOR /R %%f IN (*.out) DO (
    ECHO Deleting %%f
    DEL /Q %%f
)

REM Remove all .exe files recursively
FOR /R %%f IN (*.exe) DO (
    ECHO Deleting %%f
    DEL /Q %%f
)

ENDLOCAL

EXIT /B
