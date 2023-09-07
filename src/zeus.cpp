#include "stdafx.hpp"

#include "zeus.hpp"

namespace zeus {
	bool Initialized{ false };
	bool DoParalyzerPatch{ false };

	bool IsIntialized() { return Initialized; }

	bool SetParalyzerPatchEnabled(void* L, bool state) {
		DoParalyzerPatch = true;
		return DoParalyzerPatch;
	}
}