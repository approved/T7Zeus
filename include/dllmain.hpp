#pragma once

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved);

extern "C" {
    int __declspec(dllexport) init(void* L);
}