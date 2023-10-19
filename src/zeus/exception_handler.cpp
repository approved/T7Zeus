 #include "stdafx.hpp"

#include "exception_handler.hpp"
#include "zeus.hpp"

namespace zeus {
    void ExceptionHandler::InstallExceptionDispatcher()
    {
		auto ntdllModule = GetModuleHandleA("ntdll.dll");
		if (!ntdllModule) {
			return;
		}
		auto dispatcherptr = (char*)GetProcAddress(ntdllModule, "KiUserExceptionDispatcher");
		auto distance = *(int*)(dispatcherptr + 4); // LdrParentRtlInitializeNtUserPfn
		auto ptr = (dispatcherptr + 8) + distance;

		auto OldProtection = 0ul;
		VirtualProtect(reinterpret_cast<void*>(ptr), 8, PAGE_EXECUTE_READWRITE, &OldProtection);
		*reinterpret_cast<void**>(ptr) = (void*)ExceptionHandler::ExceptionDispatcher;
		VirtualProtect(reinterpret_cast<void*>(ptr), 8, OldProtection, &OldProtection);
    }

    void zeus::ExceptionHandler::ExceptionDispatcher(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord)
    {
		if (DoParalyzerPatch && ExceptionRecord->ExceptionAddress == EXCP_HEAT_PERCENT)
		{
			ContextRecord->Xmm1 = (M128A)0;					// Set the heat percent multiplier to 0
			ContextRecord->Rip = (DWORD64)EXCP_HEAT_RESUME; // jump to the next instruction
			ZwContinue(ContextRecord, false);
		}
    }
}
