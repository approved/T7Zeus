#pragma once

#include "game.hpp"

namespace zeus {
	struct XBlock {
		char* data;
		size_t size;
	};

	struct XZone {
		unsigned int index;
		int flags;
		int slot;
		XBlock blocks[10];
	};

	enum XZoneState {
		XZONE_UNLOADING = 0xFFFFFFFF,
		XZONE_EMPTY = 0x0,
		XZONE_LOADING = 0x1,
		XZONE_LOADED = 0x2,
		XZONE_COMPLETE = 0x3,
		XZONE_FAILED = 0x4,
	};

	struct alignas(4) XZoneName {
		char name[64];
		int flags;
		int slot;
		int unk2;
		char gap4C[12];
		XZoneState state;
		char unk3[4];
	};


	class Database {
#define G_ZONENAMES	(Game::ModuleBase + 0x998FBE0)
#define G_ZONES		(Game::ModuleBase + 0x99913E4)

	public:
		static void UnloadZone(std::string zonename);
		static const int g_zoneCount{ 64 };
		static XZone* g_zones;
		static XZoneName* g_zoneNames;

	private:
		using tDB_UnloadXZone = void(*)(int, bool, bool); 
		static void DB_UnloadXZone(int zoneIndex, bool createDefault, bool suppressSync) {
			((tDB_UnloadXZone)(Game::ModuleBase + 0x1425A70))(zoneIndex, createDefault, suppressSync);
		}
	};
}