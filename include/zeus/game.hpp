#pragma once

#include "xasset.hpp"

namespace zeus
{
	class Game
	{
#define PTR_GET_XASSET_POOL (Game::ModuleBase + 0x094093F0)

	public:
		static char* ModuleBase;

		// Use this to check if any assets have been loaded yet
		static XAsset* GetXAssetPool(int index) {
			return &reinterpret_cast<XAsset*>(PTR_GET_XASSET_POOL)[index];
		}

		static long GetXAssetSize(int index);
		static void ResizeAssetLimits(int index, int newSize);

	private:
		using tGetXAssetSize = int(*)(int);
		static tGetXAssetSize DB_GetXAssetTypeSize;

		using tSys_ShowConsole = void(*)();
		static tSys_ShowConsole Sys_ShowConsolePtr;

		static XAsset* DB_XAssetPool;
	};
}
