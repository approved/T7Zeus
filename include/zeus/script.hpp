#pragma once

#include "game.hpp"


namespace zeus {
	enum class LocalClientNum_t : int
	{
		INVALID_LOCAL_CLIENT = -1,
		LOCAL_CLIENT_0 = 0x0,
		LOCAL_CLIENT_FIRST = 0x0,
		LOCAL_CLIENT_KEYBOARD_AND_MOUSE = 0x0,
		LOCAL_CLIENT_1 = 0x1,
		LOCAL_CLIENT_2 = 0x2,
		LOCAL_CLIENT_3 = 0x3,
		LOCAL_CLIENT_COUNT = 0x4,
	};

	enum class scriptInstance_t : int
	{
		SCRIPTINSTANCE_SERVER = 0x0,
		SCRIPTINSTANCE_CLIENT = 0x1,
		SCRIPT_INSTANCE_MAX = 0x2,
	};

	typedef unsigned int ScrVarCanonicalName_t;
	struct BuiltinFunctionDef
	{
		ScrVarCanonicalName_t canonId;
		unsigned int min_args;
		unsigned int max_args;
		void(*actionFunc)(scriptInstance_t);
		int type;
	};

	struct CommonFunctions
	{
		BuiltinFunctionDef
			ReportStubUsage,
			Record3DText,
			RecordEntText,
			RecordLine,
			RecordStar,
			RecordSphere,
			RecordCircle,
			RecordCone,
			RecordEnt,
			RecorderPlayback,
			print,
			println,
			PrintTopRightln,
			iprintln,
			iprintlnbold,
			Print3D,
			Line,
			LineList,
			Box,
			Circle,
			SphericalCone,
			DebugStar,
			Sphere,
			GetEnterButton,
			ArraySort,
			ArraySortClosest,
			GetEnt,
			GetEntArray,
			GetEntArrayFromArray,
			IsNavVolumeLoaded,
			GeneratePointsAroundCenter,
			GetAngleFromBits,
			GetBitsForAngle,
			PredictPosition,
			GetNode,
			GetNodeArray,
			GetNodeArraySorted,
			GetAnyNodeArray,
			GetCoverNodeArray,
			GetAllNodes,
			GetNodesInRadius,
			GetNodesInRadiusSorted,
			GetNearestNode,
			GetVisibleNode,
			NodesVisible,
			CanClaimNode,
			GetNodeRegion,
			GetValidCoverPeekouts,
			GetVisibleNodes,
			SetEnableNode,
			LinkNodes,
			UnlinkNodes,
			LinkTraversal,
			UnlinkTraversal,
			NodesAreLinked,
			DropNodeToFloor,
			SpawnPathNode,
			DeletePathNode,
			SetTurretNode,
			UsnsetTurretNode,
			SetNodePriority,
			IsNodeOccupied,
			GetNodeOwner,
			IsWallRunNode,
			IsCoverNode,
			PathDistance,
			GetNearestPathPoint,
			IsNodeEnabled,
			GetOtherNodeInNegotiationPair,
			GetCllosestPointOnNavMesh,
			TracePassedOnNavMesh,
			_C19C6CB8,
			_62AB685B,
			_5F1E9992,
			PositionQuery_Source_Navigation,
			PositionQuery_Filter_Sight,
			PositionQuery_Filter_Directness,
			PositionQuery_Filter_DistanceToGoal,
			PositionQuery_Filter_InclaimedLocation,
			NavPointSightFilter,
			IsPointOnNavMesh,
			IsPointOnStairs,
			SetClearanceCeiling,
			GetNavMeshFaceNormal,
			GetNaveFaceRegion,
			EnableNavMeshTrigger,
			GetNavMeshTriggersForPoint,
			IsPointInNavVolume,
			GetReflectionLocs,
			GetReflectionOrigin,
			BBPrint,
			BBPostDemoStreamStatsForRound,
			RecordComScoreEvent,
			GetVehicleNode,
			GetVehicleNodeArray,
			GetAllVehicleNodes,
			GetTimeFromVehicleNodeToNode,
			ReconnectVehicleNodes,
			CreateTrack,
			GetNumVehicles,
			SetHeliHeightPatchEnabled,
			DoesWeaponReplaceSpawnWeapon,
			GetWeaponWorldModel,
			AddDebugCommand,
			IsEntity,
			IsAlive,
			IsCorpse,
			IsActorCorpse,
			IsActorSpawner,
			IsVehicleSpawner,
			IsSpawner,
			IsPlayer,
			IsAI,
			IsActor,
			IsVehicle,
			IsSentient,
			IsPathfinder,
			IsAirborne,
			IsUsingNavVolume,
			IsGodMode,
			HasASM,
			SetDvar,
			EACPathSet,
			GetTime,
			GetMillisecondsRaw,
			GetMicrosecondsRaw,
			SessionModeIsOnlineGame,
			SessionModeIsPrivateOnlineGame,
			SessionModeIsPrivate,
			SessionModeIsSystemlink,
			SessionModeIsZombiesGame,
			SessionModeIsCampaignGame,
			SessionModeIsMultiplayerGame,
			SessionModeAbreviation,
			CurrentSessionMode,
			IsDedicated,
			GameModeIsMode,
			GameModeIsUsingXP,
			GameModeIsUsingStats,
			GetGametypeSettings,
			SetGametypeSettings,
			GameModeIsArena,
			CheckpointCreate,
			CheckpointCommit,
			CheckpointClear,
			CheckpointRestore,
			SaveGame_Create,
			_797F40CF,
			_D0BAA7F4,
			_455FE809,
			PlaySoundAtPosition,
			GetLocalProfileVar,
			GetLocalProfileArrayVar,
			GetLocalProfileInt,
			GetLocalProfileArrayInt,
			GetLocalProfileFloat,
			GetLocalProfileString,
			ExecDevGUI,
			UploadStats,
			RegisterXP,
			IsMature,
			CanAnimScripteed,
			EndCamAnimScripted,
			ExtraCamAnimScripted,
			EndExtraCamAnimScripted,
			GetCamAnimTime,
			IsCamAnimLooping,
			GetClassIndexFromName,
			GetAIArray,
			GetVehicleArray,
			GetActorArray,
			GetAISpeciesArray,
			GetAIArchetypeArray,
			GetFreeActorCount,
			GetAITeamArray,
			GetActorTeamArray,
			_18E2CEAC,
			GetVehicleTeamArray,
			GetScriptMoveArray,
			GetZBarrierArray,
			GetItemArray,
			GetcorpseArray,
			GetSpawnerArray,
			GetVehicleSpawnerArray,
			GetActorSpawnerArray,
			GetSpawnerTeamArray,
			GetActorSpawnerTeamArray,
			GetVehicleSpawnerTeamArray,
			GetGrappleTargetArray,
			BadPlace_Delete,
			BadPlace_Box,
			BadPlace_Cylinder,
			PhysicsTraceEx,
			LUINotifyEvent,
			ProfileLog_BeginTiming,
			ProfileLog_EndTiming,
			GetNoteTracksInDelta,
			IsAnimLeaf,
			IsAnimLooping,
			IsAnimLoaded,
			GetAnimLength,
			GetAnimFrameCount,
			AnimHasNoteTrack,
			GetNoteTrackTimes,
			GetStartOrigin,
			GetStartAngles,
			DisableGrenadeSuicide,
			EnabledGrenadeSuicide,
			ActivateClientExploder,
			DeactivateClientExploder,
			ActivateClientRadiantExploder,
			DeactivateClientRadiantExploder,
			KillClientRadiantExploder,
			GetMissileOwner,
			PrecacheLeaderboards,
			IsAssetLoaded,
			DeployRiotShield,
			Scr_GetNumExpectedPlayers,
			Scr_GetNumConnectedPlayers,
			IsLoadingCinematicPlaying,
			GetAnimTreesLoaded_cont,
			FindAnimByName,
			AnimHasImportantNotifies,
			SetHideonClientWhenScriptedAnimCompleted,
			RegisterClientField,
			CodeSetClientField,
			CodeGetClientField,
			CodeIncrementClientField,
			CodeSetPlayerStateClientField,
			CodeGetPlayerStateClientField,
			CodeIncrementUIModelClientField,
			CodeSetUIModelClientField,
			CodeGetUIModelClientField,
			CodeIncrementPlayerStateClientField,
			CodeSetWorldClientField,
			CodeGetWorldClientField,
			CodeIncrementWorldClientField,
			GetClientFieldVersion,
			SetSavedDvar,
			GetWeapon,
			GetWeaponAccuracy,
			GetAttachmentCosmeticVariantIndexes,
			GetRandomCompatibleAttachmentsForWeapon,
			SetAILimit,
			GetAILimit,
			GetAICount,
			ResetAILimit,
			AwarenessUpdatePoolThresholds,
			AwarenessSetWeaponShotDistance,
			SwitchMap_Preload,
			Switchmap_Load,
			Switchmap_Switch,
			SwitchMap_SetLoadingMovie,
			GetNextMap,
			GetMapOrder,
			GetMapIntroMovie,
			GetMapOutroMovie,
			IsMapSubLevel,
			GetRootMapName,
			GetMissionName,
			MissionHasAccolades,
			MissionHasCollectibles,
			_970DA1E7,
			GetMissionUniqueID,
			GetMissionVersion,
			GetFreerunTrackIndex,
			GetPlayerCharacterAttribute,
			RatRecordMessage,
			RatReportCommandResult,
			GetHostMigrationValue,
			GetHostMigrationArrayCount,
			SetHostMigrationValue,
			SetLightingState,
			VideoPrime,
			VideoStart,
			VideoPause,
			VideoUnpause,
			VideoStop,
			HideMiscModels,
			ShowMiscModels,
			UmbraGate_Set,
			_57805DA3,
			UpdateNavTriggers,
			IsArenaMode,
			ShowInfoVolume,
			HideInfoVolume,
			InfoVolumeDebugInit;
	};

	class Script {
	public:
		static CommonFunctions* GetCommonFunctions();

		using tCbuf_AddText = void(*)(LocalClientNum_t, const char*);
		static void Cbuf_AddText(LocalClientNum_t localClientNum, const char* text);

		using tScr_GetString = char* (*)(scriptInstance_t, unsigned int);
		static char* Scr_GetString(scriptInstance_t inst, unsigned int index);

		static void GScr_AddDebugCommand(scriptInstance_t inst);
	};
}