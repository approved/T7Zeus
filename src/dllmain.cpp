#include "stdafx.hpp"

#include "dllmain.hpp"
#include "zeus/exception_handler.hpp"
#include "zeus/script.hpp"

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
	return TRUE;
}

int init(void* L)
{
	auto cfuncs = zeus::Script::GetCommonFunctions();
	cfuncs->AddDebugCommand.actionFunc = zeus::Script::GScr_AddDebugCommand;

	zeus::ExceptionHandler::InstallExceptionDispatcher();

	return 1;
}