#include "stdafx.hpp"

#include "dllmain.hpp"
#include "zeus/exception_handler.hpp"

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
	return TRUE;
}

int init(void* L)
{
	zeus::ExceptionHandler::InstallExceptionDispatcher();

	return 1;
}