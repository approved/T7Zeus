#include "stdafx.hpp"

#include "dllmain.hpp"
#include "zeus/database.hpp"
#include "zeus/exception_handler.hpp"
#include "zeus/script.hpp"

#define DEBUG_CONSOLE true

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fwdReason, LPVOID lpReserved)
{
	return TRUE;
}

int init(void* L)
{
	if (DEBUG_CONSOLE && AllocConsole()) {

		SetConsoleTitleA("T7 Zeus: Console");
		FILE* fDummy;
		freopen_s(&fDummy, "CONIN$", "r", stdin);
		freopen_s(&fDummy, "CONOUT$", "w", stderr);
		freopen_s(&fDummy, "CONOUT$", "w", stdout);
	}

	auto cfuncs = zeus::Script::GetCommonFunctions();
	cfuncs->AddDebugCommand.actionFunc = zeus::Script::GScr_AddDebugCommand;

	zeus::ExceptionHandler::InstallExceptionDispatcher();

	std::cout << "T7 Zeus loaded\n";

	return 1;
}
