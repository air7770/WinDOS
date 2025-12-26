#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    string answer;
    cout << "F11? -- Y(yes) or N(no)" << endl;
    cin >> answer;
        if (answer == "y" || answer == "Y") {
            system("powershell.exe -Command \"[void]($wshell = New-Object -ComObject WScript.Shell); [void]($wshell.AppActivate('cmd.exe')); $wshell.SendKeys('{F11}')\"");
            system("cls");
    }
        else if (answer == "n" || answer == "N") {
            system("cls");

        }

    string var;
    string ver = "Version system '5.0'\nVersion core: '1.0'";
    cout << "Welcome to WinDOS Console BETA!\n" << endl;
    
    while (true) {
        cout << "> " << "";
        getline(cin, var);


        if (var == "help" || var == "Help") {
            cout << "Test command:" << endl;
            cout << "sys        - System's information" << endl;
            cout << "ver        - Version core system's" << endl;
            cout << "infopc     - Information your pc" << endl;
            cout << "exit       - Exit is WinDOS" << endl;
        }
        else if (var == "Sys" || var == "sys") {
            cout << "WinDOS Console, only windows, soon linux..." << endl;
        }
        else if (var == "Ver" || var == "ver") {
            cout << ver << endl;
        }
        else if (var == "InfoPc" || var == "Infopc" || var == "infoPc" || var == "infopc") {
            cout << "CPU: " << endl;
            system("wmic cpu get name");
            cout << "------" << endl;
            cout << "GPU: " << endl;
            system("wmic path win32_VideoController get name");
            system("wmic path win32_VideoController get PNPDeviceID");
            system("wmic path win32_VideoController get DriverVersion");
            cout << "------" << endl;
            cout << "RAM: " << endl;
            system("wmic MEMORYCHIP get BankLabel,DeviceLocator,Capacity,Speed");

        }
        else if (var == "test") {
            system("test");
        }
        else if (var == "exit") {
            system("taskkill /F /IM windos.exe");
        }
        else {
            cout << "Error, command not found, command for help 'Help'! " << endl;
        }
    }
    return 0;
}
