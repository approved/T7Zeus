#pragma once

namespace zeus {
	extern bool Initialized;
	extern bool DoParalyzerPatch;
	
	bool IsIntialized();
	bool __declspec(dllexport) SetParalyzerPatchEnabled(void* L, bool state);
}