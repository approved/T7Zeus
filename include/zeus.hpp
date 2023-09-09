#pragma once

namespace zeus {
	extern bool Initialized;
	extern bool DoParalyzerPatch;
	
	bool IsIntialized();
	extern "C" {
		bool __declspec(dllexport) SetParalyzerPatchEnabled(void* L);
	}
}