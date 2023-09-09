#include "stdafx.hpp"

#include "zeus.hpp"

namespace zeus {
	bool Initialized{ false };
	bool DoParalyzerPatch{ false };

	bool IsIntialized() { return Initialized; }

	bool SetParalyzerPatchEnabled(void* L) {
		DoParalyzerPatch = true;
		return DoParalyzerPatch;
	}
}