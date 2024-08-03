#include <windows.h>
#include <stdio.h>

int main() {
    char answer;
    char answer1;

    LPCSTR filePath = "C:\\Users\\02zak\\OneDrive\\Desktop\\project\\phone_fucker\\screen\\scrcpy.exe";
    
    printf("jus write y/n\n");
    // Execute the adb tcpip command
    printf("this phone is allaready change the port : \n");
    scanf("%c", &answer);

    if(answer == 'n') {
    LPCSTR commandLine1 = "cmd.exe /c C:\\Users\\02zak\\OneDrive\\Desktop\\project\\phone_fucker\\android\\adb.exe tcpip 5588";
    system(commandLine1);
    }
    // Execute the adb connect command
    printf("this phone is ready connect : \n");
    scanf("%c", &answer1);

    if(answer1 == 'n') {
    LPCSTR commandLine2 = "cmd.exe /c C:\\Users\\02zak\\OneDrive\\Desktop\\project\\phone_fucker\\android\\adb.exe connect your adress";
    system(commandLine2);
    }

    LPCSTR commandLine3 = "cmd.exe /c C:\\Users\\02zak\\OneDrive\\Desktop\\project\\phone_fucker\\screen\\scrcpy.exe";
    system(commandLine3);

        printf("The done\n");
    return 0;
}
