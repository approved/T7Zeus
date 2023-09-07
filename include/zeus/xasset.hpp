#pragma once

namespace zeus {
    struct XAsset {
	void* firstEntry;
	int size;
	int maximum;
	bool isSingleton[4];
	int count;
	void* entries;
};

struct LinkedListEntry
{
	LinkedListEntry* next;
};

enum XAssetType
{
	None = -1,
	PhysPreset,
	PhysContraints,
	DestructibleDef,
	XAnim,
	XModel,
	XModelMesh,
	Material,
	ComputeShaders,
	Techset,
	Image,
	Sound,
	SoundPatch,
	ColMap,
	ComMap,
	GameMap,
	MapEnts,
	GfxMap,
	LightDef,
	LensFlareDef,
	UiMap,
	Font,
	FontIcon,
	Localize,
	Weapon,
	WeaponDef,
	WeaponVariant,
	WeaponFull,
	CgMediaTable,
	PlayerSoundsTable,
	PlayerFxTable,
	SharedWeaponSounds,
	Attachment,
	AttachmentUnique,
	WeaponCamo,
	CustomizationTable,
	CustomizationTable_feimages,
	CustomizationTableColor,
	SndDriverGlobals,
	Fx,
	TagFx,
	KLF,
	ImpactsFxTable,
	ImpactsSoundsTable,
	Player_Character,
	AiType,
	Character,
	XModelAlias,
	Rawfile,
	StringTable,
	StructuredTable,
	LeaderboardDef,
	DDL,
	Glasses,
	TextureList,
	ScriptParseTree,
	KeyValuePairs,
	Vehicle,
	AddonMapEnts,
	Tracer,
	Slug,
	SurfaceFxTable,
	SurfaceSoundDef,
	FootStepTable,
	EntityFxImpacts,
	EntitySoundImpacts,
	ZBarrier,
	VehicleFxDef,
	VehicleSoundDef,
	TypeInfo,
	ScriptBundle,
	ScriptBundleList,
	Rumble,
	BulletPenetration,
	LocDmgTable,
	AimTable,
	AnimSelectorTable,
	AnimMappingTable,
	AnimStateMachine,
	BehaviorTree,
	BehaviorStateMachine,
	TTF,
	Sanim,
	LightDescription,
	Shellshock,
	XCam,
	BGCache,
	TextureCombo,
	FlameTable,
	BitField,
	AttachmentCosmeticVariant,
	MapTable,
	MapTableLoadingImages,
	Medal,
	MedalTable,
	Objective,
	ObjecetiveList,
	UmbraTome,
	NavMesh,
	NavVolume,
	BinaryHTML,
	Laser,
	Beam,
	StreamerHint,
	Count,
};
}