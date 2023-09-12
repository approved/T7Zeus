#include "stdafx.hpp"

#include "database.hpp"

namespace zeus {
	XZone* Database::g_zones{};
	XZoneName* Database::g_zoneNames{};

	void Database::UnloadZone(std::string zonename, bool createDefault) {
		if (!g_zones) {
			g_zones = reinterpret_cast<XZone*>(G_ZONES);
			g_zoneNames = reinterpret_cast<XZoneName*>(G_ZONENAMES);
		}

		for (int i = 0; i < g_zoneCount + 1; i++) {
			if (g_zoneNames[i].state != XZONE_COMPLETE) continue;
			XZoneName zone = g_zoneNames[i];
			std::string name(zone.name);
			if (zonename == name) {
				DB_UnloadXZone(i - 1, createDefault, false);
				return;
			}
		}
	}
}