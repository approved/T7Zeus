#include "stdafx.hpp"

#include "script.hpp"

namespace zeus {
	CommonFunctions* Script::GetCommonFunctions() {
		return ((CommonFunctions*)(Game::ModuleBase + 0x33477A0));
	}

	char* Script::Scr_GetString(scriptInstance_t inst, unsigned int index) {
		return ((tScr_GetString)(Game::ModuleBase + 0x12EBAA0))(inst, index);
	}

	void Script::Cbuf_AddText(LocalClientNum_t localClientNum, const char* text) {
		((tCbuf_AddText)(Game::ModuleBase + 0x20EC8B0))(localClientNum, text);
	}

	void Script::GScr_AddDebugCommand(scriptInstance_t inst)
	{
		auto str = Scr_GetString(inst, 0);
		Cbuf_AddText(LocalClientNum_t::LOCAL_CLIENT_0, str);
	}
}