@echo off
setlocal

call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat" >nul
if errorlevel 1 exit /b %errorlevel%

set "SOURCE_FILE=%~1"
set "SOURCE_DIR=%~2"
set "OUTPUT_DIR=%SOURCE_DIR%\build\Debug"

if not exist "%OUTPUT_DIR%" mkdir "%OUTPUT_DIR%"

cl /nologo /Zi /W4 "%SOURCE_FILE%" /Fe:"%OUTPUT_DIR%\outDebug.exe" /Fo:"%OUTPUT_DIR%\outDebug.obj"
exit /b %errorlevel%
