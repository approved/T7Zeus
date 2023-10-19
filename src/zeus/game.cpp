#include "stdafx.hpp"

#include "game.hpp"

namespace zeus {
	char* Game::ModuleBase = (char*)GetModuleHandle(NULL);
	
	// Do this because certain assets 
	// don't have a function to return size
	long Game::GetXAssetSize(int index) {
		if (index >= 103 || index < 0)
			return -1;

		switch (index)
		{
		case XAssetType::PhysPreset:
			return 120;
		case XAssetType::PhysContraints:
			return 1680;
		case XAssetType::DestructibleDef:
			return 48;
		case XAssetType::XAnim:
			return 248;
		case XAssetType::XModel:
			return 392;
		case XAssetType::XModelMesh:
			return 120;
		case XAssetType::Material:
			return 672;
		case XAssetType::ComputeShaders:
			return 24;
		case XAssetType::Techset:
			return 112;
		case XAssetType::Image:
			return 264;
		case XAssetType::Sound:
			return 139440;
		case XAssetType::SoundPatch:
			return 24;
		case XAssetType::ColMap:
			return 720;
		case XAssetType::ComMap:
			return 136;
		case XAssetType::GameMap:
			return 80;
		case XAssetType::MapEnts:
			return 72;
		case XAssetType::GfxMap:
			return 8256;
		case XAssetType::LightDef:
			return 40;
		case XAssetType::LensFlareDef:
			return 536;
		case XAssetType::UiMap:
			return 0;
		case XAssetType::Font:
			return 56;
		case XAssetType::FontIcon:
			return 32;
		case XAssetType::Localize:
			return 16;
		case XAssetType::Weapon:
			return 768;
		case XAssetType::WeaponDef:
			return 0;
		case XAssetType::WeaponVariant:
			return 0;
		case XAssetType::WeaponFull:
			return 0;
		case XAssetType::CgMediaTable:
			return 1056;
		case XAssetType::PlayerSoundsTable:
			return 1096;
		case XAssetType::PlayerFxTable:
			return 152;
		case XAssetType::SharedWeaponSounds:
			return 240;
		case XAssetType::Attachment:
			return 544;
		case XAssetType::AttachmentUnique:
			return 2112;
		case XAssetType::WeaponCamo:
			return 24;
		case XAssetType::CustomizationTable:
			return 40;
		case XAssetType::CustomizationTable_feimages:
			return 24;
		case XAssetType::CustomizationTableColor:
			return 48;
		case XAssetType::SndDriverGlobals:
			return 120;
		case XAssetType::Fx:
			return 144;
		case XAssetType::TagFx:
			return 24;
		case XAssetType::KLF:
			return 168;
		case XAssetType::ImpactsFxTable:
			return 24;
		case XAssetType::ImpactsSoundsTable:
			return 32;
		case XAssetType::Player_Character:
			return 144;
		case XAssetType::AiType:
			return 2352;
		case XAssetType::Character:
			return 624;
		case XAssetType::XModelAlias:
			return 408;
		case XAssetType::Rawfile:
			return 47;
		case XAssetType::StringTable:
			return 32;
		case XAssetType::StructuredTable:
			return 56;
		case XAssetType::LeaderboardDef:
			return 48;
		case XAssetType::DDL:
			return 16;
		case XAssetType::Glasses:
			return 88;
		case XAssetType::TextureList:
			return 72;
		case XAssetType::ScriptParseTree:
			return 24;
		case XAssetType::KeyValuePairs:
			return 24;
		case XAssetType::Vehicle:
			return 2728;
		case XAssetType::AddonMapEnts:
			return 104;
		case XAssetType::Tracer:
			return 152;
		case XAssetType::Slug:
			return 24;
		case XAssetType::SurfaceFxTable:
			return 328;
		case XAssetType::SurfaceSoundDef:
			return 168;
		case XAssetType::FootStepTable:
			return 64;
		case XAssetType::EntityFxImpacts:
			return 536;
		case XAssetType::EntitySoundImpacts:
			return 272;
		case XAssetType::ZBarrier:
			return 768;
		case XAssetType::VehicleFxDef:
			return 984;
		case XAssetType::VehicleSoundDef:
			return 4096;
		case XAssetType::TypeInfo:
			return 8208;
		case XAssetType::ScriptBundle:
			return 48;
		case XAssetType::ScriptBundleList:
			return 32;
		case XAssetType::Rumble:
			return 64;
		case XAssetType::BulletPenetration:
			return 488;
		case XAssetType::LocDmgTable:
			return 96;
		case XAssetType::AimTable:
			return 816;
		case XAssetType::AnimSelectorTable:
			return 24;
		case XAssetType::AnimMappingTable:
			return 24;
		case XAssetType::AnimStateMachine:
			return 56;
		case XAssetType::BehaviorTree:
			return 40;
		case XAssetType::BehaviorStateMachine:
			return 32;
		case XAssetType::TTF:
			return 131104;
		case XAssetType::Sanim:
			return 114;
		case XAssetType::LightDescription:
			return 576;
		case XAssetType::Shellshock:
			return 176;
		case XAssetType::XCam:
			return 168;
		case XAssetType::BGCache:
			return 24;
		case XAssetType::TextureCombo:
			return 128;
		case XAssetType::FlameTable:
			return 536;
		case XAssetType::BitField:
			return 32;
		case XAssetType::AttachmentCosmeticVariant:
			return 24;
		case XAssetType::MapTable:
			return 40;
		case XAssetType::MapTableLoadingImages:
			return 24;
		case XAssetType::Medal:
			return 48;
		case XAssetType::MedalTable:
			return 24;
		case XAssetType::Objective:
			return 112;
		case XAssetType::ObjecetiveList:
			return 24;
		case XAssetType::UmbraTome:
			return 0;
		case XAssetType::NavMesh:
			return 104;
		case XAssetType::NavVolume:
			return 72;
		case XAssetType::BinaryHTML:
			return 24;
		case XAssetType::Laser:
			return 112;
		case XAssetType::Beam:
			return 688;
		case XAssetType::StreamerHint:
			return 40;
		default:
			return -1;
		}
	};

	void Game::ResizeAssetLimits(int index, int newSize) {
		auto structSize = GetXAssetSize(index);
		auto assetPool = GetXAssetPool(index);

		if (structSize != -1 && assetPool != 0 && assetPool->maximum < newSize)
		{
			auto newBlock = (LinkedListEntry*)calloc(static_cast<size_t>(newSize) - assetPool->maximum, structSize);
			if (newBlock != 0)
			{
				LinkedListEntry* nextBlockPtr = newBlock;
				if (!assetPool->firstEntry)
				{
					assetPool->firstEntry = newBlock;
					nextBlockPtr = (LinkedListEntry*)((uint8_t*)nextBlockPtr + structSize);
				}

				LinkedListEntry* blockPtr = (LinkedListEntry*)assetPool->firstEntry;

				auto size_c = newSize - 1;
				do
				{
					if (!blockPtr->next)
					{
						blockPtr->next = nextBlockPtr;
						blockPtr = nextBlockPtr;
						nextBlockPtr = (LinkedListEntry*)((uint8_t*)nextBlockPtr + structSize);
					}
					else
					{
						blockPtr = (LinkedListEntry*)((uint8_t*)blockPtr + structSize);
					}
					--size_c;
				} while (size_c);
				assetPool->maximum = newSize;
			}
		}
	}
}
