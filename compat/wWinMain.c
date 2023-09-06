#include <windows.h>
#include <stdlib.h>

INT WINAPI
WinMain(HINSTANCE   hInstance,
        HINSTANCE   hPrevInstance,
        LPSTR       lpCmdLine,
        INT         nCmdShow);

INT WINAPI
wWinMain(HINSTANCE   hInstance,
         HINSTANCE   hPrevInstance,
         LPWSTR      lpCmdLine,
         INT         nCmdShow)
{
    CHAR szCmdLine[512];
    WideCharToMultiByte(CP_ACP, 0, lpCmdLine, -1, szCmdLine, _countof(szCmdLine), NULL, NULL);
    szCmdLine[_countof(szCmdLine) - 1] = ANSI_NULL;
    return WinMain(hInstance, hPrevInstance, szCmdLine, nCmdShow);
}
