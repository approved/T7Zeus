#pragma once

#include "game.hpp"

namespace zeus {
    typedef unsigned long long(__fastcall* ZwContinue_t)(PCONTEXT ThreadContext, BOOLEAN RaiseAlert);
    static ZwContinue_t ZwContinue = reinterpret_cast<ZwContinue_t>(GetProcAddress(GetModuleHandleA("ntdll.dll"), "ZwContinue"));

    class ExceptionHandler {
#define EXCP_HEAT_PERCENT (Game::ModuleBase + 0x129A2C7)
#define EXCP_HEAT_RESUME  (Game::ModuleBase + 0x129A2F2)
    public:
        static void InstallExceptionDispatcher();
    private:
		static void ExceptionDispatcher(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord);
    };
}