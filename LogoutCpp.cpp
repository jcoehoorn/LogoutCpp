#include <windows.h>
// #include <iostream>
// #include <iomanip>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    int msgboxID = MessageBox(
        NULL,
        L"Are you sure you want to log out?",
        L"Logout",
        MB_YESNO | MB_ICONQUESTION
    );

    if (msgboxID == IDYES) {
        // Initiate the logout process
        // Note: This requires appropriate privileges and might be blocked by security policies.
        BOOL result = ExitWindowsEx(EWX_LOGOFF | EWX_FORCEIFHUNG, 0);
    }

    return 0;
}