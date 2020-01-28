#pragma once

// BlazingSails (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_BaseGameMode.BP_BaseGameMode_C.GetPreferedSpawnPointFromteam
struct ABP_BaseGameMode_C_GetPreferedSpawnPointFromteam_Params
{
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_BoatSpawn_C*                             SpawnPoint;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseGameMode.BP_BaseGameMode_C.CheckIfPlayerIsBanned
struct ABP_BaseGameMode_C_CheckIfPlayerIsBanned_Params
{
	class ABP_Controller_C*                            ControllerRef;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Banned;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseGameMode.BP_BaseGameMode_C.KickBanPlayer
struct ABP_BaseGameMode_C_KickBanPlayer_Params
{
	int                                                PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Banned_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UniqueNetId;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BaseGameMode.BP_BaseGameMode_C.GetUndefeatedTeamsArray
struct ABP_BaseGameMode_C_GetUndefeatedTeamsArray_Params
{
	TArray<struct FST_Team>                            UndefeatedTeamsArray;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BaseGameMode.BP_BaseGameMode_C.PrepareTeamsForFair
struct ABP_BaseGameMode_C_PrepareTeamsForFair_Params
{
};

// Function BP_BaseGameMode.BP_BaseGameMode_C.DefeatTeam
struct ABP_BaseGameMode_C_DefeatTeam_Params
{
	int                                                Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseGameMode.BP_BaseGameMode_C.DisplayPings
struct ABP_BaseGameMode_C_DisplayPings_Params
{
};

// Function BP_BaseGameMode.BP_BaseGameMode_C.StartGame
struct ABP_BaseGameMode_C_StartGame_Params
{
};

// Function BP_BaseGameMode.BP_BaseGameMode_C.CheckIfCrewIsEmpty
struct ABP_BaseGameMode_C_CheckIfCrewIsEmpty_Params
{
	int                                                CrewID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CrewIsEmpty;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseGameMode.BP_BaseGameMode_C.ClearEmptyCrews
struct ABP_BaseGameMode_C_ClearEmptyCrews_Params
{
};

// Function BP_BaseGameMode.BP_BaseGameMode_C.UserConstructionScript
struct ABP_BaseGameMode_C_UserConstructionScript_Params
{
};

// Function BP_BaseGameMode.BP_BaseGameMode_C.OnFailure_D04F3F4047CD2F1B9C80B780DAFC498D
struct ABP_BaseGameMode_C_OnFailure_D04F3F4047CD2F1B9C80B780DAFC498D_Params
{
};

// Function BP_BaseGameMode.BP_BaseGameMode_C.OnSuccess_D04F3F4047CD2F1B9C80B780DAFC498D
struct ABP_BaseGameMode_C_OnSuccess_D04F3F4047CD2F1B9C80B780DAFC498D_Params
{
};

// Function BP_BaseGameMode.BP_BaseGameMode_C.OnFailure_6716420744C0014FE83E3BAF8996ABB2
struct ABP_BaseGameMode_C_OnFailure_6716420744C0014FE83E3BAF8996ABB2_Params
{
};

// Function BP_BaseGameMode.BP_BaseGameMode_C.OnSuccess_6716420744C0014FE83E3BAF8996ABB2
struct ABP_BaseGameMode_C_OnSuccess_6716420744C0014FE83E3BAF8996ABB2_Params
{
};

// Function BP_BaseGameMode.BP_BaseGameMode_C.ReceiveBeginPlay
struct ABP_BaseGameMode_C_ReceiveBeginPlay_Params
{
};

// Function BP_BaseGameMode.BP_BaseGameMode_C.ReceiveTick
struct ABP_BaseGameMode_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseGameMode.BP_BaseGameMode_C.K2_PostLogin
struct ABP_BaseGameMode_C_K2_PostLogin_Params
{
	class APlayerController**                          NewPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseGameMode.BP_BaseGameMode_C.K2_OnLogout
struct ABP_BaseGameMode_C_K2_OnLogout_Params
{
	class AController**                                ExitingController;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseGameMode.BP_BaseGameMode_C.CreateNewTeam
struct ABP_BaseGameMode_C_CreateNewTeam_Params
{
	int                                                TeamFirstName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamSecondaryName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamSecondaryNameIndex;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                teamColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Controller_C*                            PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ShipName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                FlagEmblem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseGameMode.BP_BaseGameMode_C.RefreshHUDs
struct ABP_BaseGameMode_C_RefreshHUDs_Params
{
};

// Function BP_BaseGameMode.BP_BaseGameMode_C.AddNewChatMessage
struct ABP_BaseGameMode_C_AddNewChatMessage_Params
{
	struct FST_SimpleMessage                           ChatMessage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                TeamChatID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FormatText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseGameMode.BP_BaseGameMode_C.RestartLevel
struct ABP_BaseGameMode_C_RestartLevel_Params
{
};

// Function BP_BaseGameMode.BP_BaseGameMode_C.CloseGameServer
struct ABP_BaseGameMode_C_CloseGameServer_Params
{
};

// Function BP_BaseGameMode.BP_BaseGameMode_C.ExecuteUbergraph_BP_BaseGameMode
struct ABP_BaseGameMode_C_ExecuteUbergraph_BP_BaseGameMode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
