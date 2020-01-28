// BlazingSails (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BaseGameMode.BP_BaseGameMode_C.GetPreferedSpawnPointFromteam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_BoatSpawn_C*         SpawnPoint                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BaseGameMode_C::GetPreferedSpawnPointFromteam(int TeamID, class ABP_BoatSpawn_C** SpawnPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGameMode.BP_BaseGameMode_C.GetPreferedSpawnPointFromteam");

	ABP_BaseGameMode_C_GetPreferedSpawnPointFromteam_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnPoint != nullptr)
		*SpawnPoint = params.SpawnPoint;
}


// Function BP_BaseGameMode.BP_BaseGameMode_C.CheckIfPlayerIsBanned
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Controller_C*        ControllerRef                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Banned                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BaseGameMode_C::CheckIfPlayerIsBanned(class ABP_Controller_C* ControllerRef, bool* Banned)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGameMode.BP_BaseGameMode_C.CheckIfPlayerIsBanned");

	ABP_BaseGameMode_C_CheckIfPlayerIsBanned_Params params;
	params.ControllerRef = ControllerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Banned != nullptr)
		*Banned = params.Banned;
}


// Function BP_BaseGameMode.BP_BaseGameMode_C.KickBanPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Banned_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UniqueNetId                    (Parm, OutParm, ZeroConstructor)

void ABP_BaseGameMode_C::KickBanPlayer(int PlayerId, bool Banned_, struct FString* UniqueNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGameMode.BP_BaseGameMode_C.KickBanPlayer");

	ABP_BaseGameMode_C_KickBanPlayer_Params params;
	params.PlayerId = PlayerId;
	params.Banned_ = Banned_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UniqueNetId != nullptr)
		*UniqueNetId = params.UniqueNetId;
}


// Function BP_BaseGameMode.BP_BaseGameMode_C.GetUndefeatedTeamsArray
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_Team>        UndefeatedTeamsArray           (Parm, OutParm, ZeroConstructor)

void ABP_BaseGameMode_C::GetUndefeatedTeamsArray(TArray<struct FST_Team>* UndefeatedTeamsArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGameMode.BP_BaseGameMode_C.GetUndefeatedTeamsArray");

	ABP_BaseGameMode_C_GetUndefeatedTeamsArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UndefeatedTeamsArray != nullptr)
		*UndefeatedTeamsArray = params.UndefeatedTeamsArray;
}


// Function BP_BaseGameMode.BP_BaseGameMode_C.PrepareTeamsForFair
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseGameMode_C::PrepareTeamsForFair()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGameMode.BP_BaseGameMode_C.PrepareTeamsForFair");

	ABP_BaseGameMode_C_PrepareTeamsForFair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseGameMode.BP_BaseGameMode_C.DefeatTeam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseGameMode_C::DefeatTeam(int Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGameMode.BP_BaseGameMode_C.DefeatTeam");

	ABP_BaseGameMode_C_DefeatTeam_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseGameMode.BP_BaseGameMode_C.DisplayPings
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseGameMode_C::DisplayPings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGameMode.BP_BaseGameMode_C.DisplayPings");

	ABP_BaseGameMode_C_DisplayPings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseGameMode.BP_BaseGameMode_C.StartGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BaseGameMode_C::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGameMode.BP_BaseGameMode_C.StartGame");

	ABP_BaseGameMode_C_StartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseGameMode.BP_BaseGameMode_C.CheckIfCrewIsEmpty
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CrewID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CrewIsEmpty                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BaseGameMode_C::CheckIfCrewIsEmpty(int CrewID, bool* CrewIsEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGameMode.BP_BaseGameMode_C.CheckIfCrewIsEmpty");

	ABP_BaseGameMode_C_CheckIfCrewIsEmpty_Params params;
	params.CrewID = CrewID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CrewIsEmpty != nullptr)
		*CrewIsEmpty = params.CrewIsEmpty;
}


// Function BP_BaseGameMode.BP_BaseGameMode_C.ClearEmptyCrews
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BaseGameMode_C::ClearEmptyCrews()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGameMode.BP_BaseGameMode_C.ClearEmptyCrews");

	ABP_BaseGameMode_C_ClearEmptyCrews_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseGameMode.BP_BaseGameMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseGameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGameMode.BP_BaseGameMode_C.UserConstructionScript");

	ABP_BaseGameMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseGameMode.BP_BaseGameMode_C.OnFailure_D04F3F4047CD2F1B9C80B780DAFC498D
// (BlueprintCallable, BlueprintEvent)

void ABP_BaseGameMode_C::OnFailure_D04F3F4047CD2F1B9C80B780DAFC498D()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGameMode.BP_BaseGameMode_C.OnFailure_D04F3F4047CD2F1B9C80B780DAFC498D");

	ABP_BaseGameMode_C_OnFailure_D04F3F4047CD2F1B9C80B780DAFC498D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseGameMode.BP_BaseGameMode_C.OnSuccess_D04F3F4047CD2F1B9C80B780DAFC498D
// (BlueprintCallable, BlueprintEvent)

void ABP_BaseGameMode_C::OnSuccess_D04F3F4047CD2F1B9C80B780DAFC498D()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGameMode.BP_BaseGameMode_C.OnSuccess_D04F3F4047CD2F1B9C80B780DAFC498D");

	ABP_BaseGameMode_C_OnSuccess_D04F3F4047CD2F1B9C80B780DAFC498D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseGameMode.BP_BaseGameMode_C.OnFailure_6716420744C0014FE83E3BAF8996ABB2
// (BlueprintCallable, BlueprintEvent)

void ABP_BaseGameMode_C::OnFailure_6716420744C0014FE83E3BAF8996ABB2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGameMode.BP_BaseGameMode_C.OnFailure_6716420744C0014FE83E3BAF8996ABB2");

	ABP_BaseGameMode_C_OnFailure_6716420744C0014FE83E3BAF8996ABB2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseGameMode.BP_BaseGameMode_C.OnSuccess_6716420744C0014FE83E3BAF8996ABB2
// (BlueprintCallable, BlueprintEvent)

void ABP_BaseGameMode_C::OnSuccess_6716420744C0014FE83E3BAF8996ABB2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGameMode.BP_BaseGameMode_C.OnSuccess_6716420744C0014FE83E3BAF8996ABB2");

	ABP_BaseGameMode_C_OnSuccess_6716420744C0014FE83E3BAF8996ABB2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseGameMode.BP_BaseGameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BaseGameMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGameMode.BP_BaseGameMode_C.ReceiveBeginPlay");

	ABP_BaseGameMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseGameMode.BP_BaseGameMode_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseGameMode_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGameMode.BP_BaseGameMode_C.ReceiveTick");

	ABP_BaseGameMode_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseGameMode.BP_BaseGameMode_C.K2_PostLogin
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController**      NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseGameMode_C::K2_PostLogin(class APlayerController** NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGameMode.BP_BaseGameMode_C.K2_PostLogin");

	ABP_BaseGameMode_C_K2_PostLogin_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseGameMode.BP_BaseGameMode_C.K2_OnLogout
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            ExitingController              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseGameMode_C::K2_OnLogout(class AController** ExitingController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGameMode.BP_BaseGameMode_C.K2_OnLogout");

	ABP_BaseGameMode_C_K2_OnLogout_Params params;
	params.ExitingController = ExitingController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseGameMode.BP_BaseGameMode_C.CreateNewTeam
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamFirstName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamSecondaryName              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamSecondaryNameIndex         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            teamColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Controller_C*        PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ShipName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            FlagEmblem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseGameMode_C::CreateNewTeam(int TeamFirstName, int TeamSecondaryName, int TeamSecondaryNameIndex, int teamColor, class ABP_Controller_C* PlayerController, const struct FText& ShipName, int FlagEmblem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGameMode.BP_BaseGameMode_C.CreateNewTeam");

	ABP_BaseGameMode_C_CreateNewTeam_Params params;
	params.TeamFirstName = TeamFirstName;
	params.TeamSecondaryName = TeamSecondaryName;
	params.TeamSecondaryNameIndex = TeamSecondaryNameIndex;
	params.teamColor = teamColor;
	params.PlayerController = PlayerController;
	params.ShipName = ShipName;
	params.FlagEmblem = FlagEmblem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseGameMode.BP_BaseGameMode_C.RefreshHUDs
// (BlueprintCallable, BlueprintEvent)

void ABP_BaseGameMode_C::RefreshHUDs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGameMode.BP_BaseGameMode_C.RefreshHUDs");

	ABP_BaseGameMode_C_RefreshHUDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseGameMode.BP_BaseGameMode_C.AddNewChatMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SimpleMessage       ChatMessage                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            TeamChatID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FormatText                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseGameMode_C::AddNewChatMessage(const struct FST_SimpleMessage& ChatMessage, int TeamChatID, bool FormatText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGameMode.BP_BaseGameMode_C.AddNewChatMessage");

	ABP_BaseGameMode_C_AddNewChatMessage_Params params;
	params.ChatMessage = ChatMessage;
	params.TeamChatID = TeamChatID;
	params.FormatText = FormatText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseGameMode.BP_BaseGameMode_C.RestartLevel
// (BlueprintCallable, BlueprintEvent)

void ABP_BaseGameMode_C::RestartLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGameMode.BP_BaseGameMode_C.RestartLevel");

	ABP_BaseGameMode_C_RestartLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseGameMode.BP_BaseGameMode_C.CloseGameServer
// (BlueprintCallable, BlueprintEvent)

void ABP_BaseGameMode_C::CloseGameServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGameMode.BP_BaseGameMode_C.CloseGameServer");

	ABP_BaseGameMode_C_CloseGameServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseGameMode.BP_BaseGameMode_C.ExecuteUbergraph_BP_BaseGameMode
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseGameMode_C::ExecuteUbergraph_BP_BaseGameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseGameMode.BP_BaseGameMode_C.ExecuteUbergraph_BP_BaseGameMode");

	ABP_BaseGameMode_C_ExecuteUbergraph_BP_BaseGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
