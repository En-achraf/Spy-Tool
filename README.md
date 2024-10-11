## Spy Tool - Android Device Control and Screen Mirroring

Version: 1.0
Developer: acennadi

# Spy Tool is a command-line utility designed for controlling and mirroring Android devices over a TCP/IP connection using adb and scrcpy. The tool allows users to connect, save device information, and launch screen mirroring with ease.
Features

   - Connect to Android devices via Wi-Fi using IP addresses.
   - Change Android device connection ports using adb tcpip.
   - Save device IP addresses for future quick connections.
   - List and manage multiple saved devices.
   - Automatically launch screen mirroring using scrcpy.
   - Logs connection errors and command failures to an error log for troubleshooting.

Requirements

- Windows Operating System
- Preconfigured ADB: The adb.exe should be available in the android/ folder inside the project directory.
- Preconfigured Scrcpy: Scrcpy should also be available and accessible from the project directory.

How to Install

    Clone this repository or download the project files:

    bash

https://github.com/En-achraf/Spy-Tool.git

Compile the project:

    If using GCC:

bash

gcc -o spy_tool spy_tool.c

    Or use any other C compiler of your choice.

Run the tool from the terminal/command prompt:

bash

    spy_tool.exe

Usage
1. Start the Program

    Upon running the program, a welcome banner will be displayed with the current version of the tool.
    If there are any saved devices, they will be listed, and you can select one to connect to.

2. Add a New Device

    If there are no saved devices or you want to add a new one, choose the option for a new device.
    The program will ask if you've already changed the port for the device. If not, the tool will issue the necessary adb tcpip command to set the port.
    Input the device's IP address (e.g., 192.168.1.100) and optionally save it for future use.

3. Connect to a Device

    Select the device from the saved list or enter the IP of a new device.
    The tool will use adb connect to connect to the device.
    Once connected, Spy Tool will automatically launch scrcpy to mirror the device's screen.

4. Disconnecting the Device

    After using scrcpy, the tool will automatically disconnect the device using the adb disconnect command.

Configuration Files
android/devices.env

    Stores saved devices' names and IP addresses.
    Each entry is in the format: <device_name> <ip_address>.

error_log.txt

    Logs any errors encountered during device connection or launching of scrcpy.
    Useful for troubleshooting issues with the tool.

Example of Running the Tool

    Launch the tool:

Spy Tool v1.0

Select a device from the saved list or add a new device:

java

Saved Devices:
1. MyPhone (192.168.1.100)
Choose a device (1-1) or enter 'n' for a new device: n

Enter the IP address and optionally save it:

rust

Has this phone already changed the port? (y/n): n
Port changed successfully.
Please enter the phone's IP address (e.g., 192.168.100.000): 192.168.1.101
Would you like to save this device for future use? (y/n): y
Enter a name for this device: WorkPhone
Device saved successfully.

The tool connects to the device and launches scrcpy:

arduino

    Device is connected.
    Scrcpy launched successfully for 192.168.1.101.

Troubleshooting

    If you encounter issues during connection or launching scrcpy, check the error_log.txt file for details.

Contributing

Contributions are welcome! If you'd like to improve the tool or report issues, feel free to create pull requests or submit issues to this repository.
License

This project is licensed under the MIT License. See the LICENSE file for more details.
