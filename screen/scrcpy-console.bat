@echo off
setlocal

:: Prompt the user to enter the device IP address
set /p DEVICE_IP=192.168.0.109 

:: Set the path to adb and scrcpy directories
set ADB_PATH=.\platform-tools
set SCRCPY_PATH=.\scrcpy-win64-v2.6

:: Function to connect to the device and set up ADB over TCP/IP
:connect_device
echo Connecting to device at %DEVICE_IP%...
%ADB_PATH%\adb connect %DEVICE_IP%

:: Check if the connection was successful
%ADB_PATH%\adb devices | findstr /i %DEVICE_IP%
if %errorlevel% neq 0 (
    echo Device not connected. Attempting to set ADB to TCP/IP mode...
    %ADB_PATH%\adb -s %DEVICE_IP% tcpip 5566
    %ADB_PATH%\adb connect %DEVICE_IP%
) else (
    echo Device is already connected.
)

:: Launch scrcpy to mirror the device screen
echo Launching scrcpy...
cd %SCRCPY_PATH%
scrcpy -s %DEVICE_IP%

goto :eof

:end
echo Script finished.
pause
