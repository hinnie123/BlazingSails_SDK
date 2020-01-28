#pragma once

// BlazingSails (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BaseGameMode.BP_BaseGameMode_C
// 0x00B9 (0x04C9 - 0x0410)
class ABP_BaseGameMode_C : public AGameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ABP_Controller_C*>                    ConnectedControllers;                                     // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                ConnectionIDs;                                            // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0434(0x0004) MISSED OFFSET
	class ABP_GameState_C*                             GameStateRef;                                             // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                TeamIndex;                                                // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0444(0x0004) MISSED OFFSET
	TArray<struct FST_Team>                            TeamTransferArray;                                        // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              StartTimer;                                               // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PauseStartTimer;                                          // 0x045C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DeathMatch;                                               // 0x045D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x045E(0x0002) MISSED OFFSET
	class UClass*                                      ShipClass;                                                // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FSessionPropertyKeyPair>             NewSessionSettings;                                       // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               PreGame;                                                  // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0479(0x0003) MISSED OFFSET
	int                                                MaxPlayersPerTeam;                                        // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_TimesOfDay>                          TimeOfDay;                                                // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0481(0x0007) MISSED OFFSET
	TArray<class ABP_BoatMeshBase_C*>                  ShipReferences;                                           // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FVector>                             SpawnPoints;                                              // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               FairMatch_PredefinedTeams_;                               // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	TArray<struct FST_BanListEntry>                    BannedPlayerList;                                         // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               CheckForBans;                                             // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x04C1(0x0003) MISSED OFFSET
	float                                              DeltaTime;                                                // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForceStart;                                               // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseGameMode.BP_BaseGameMode_C");
		return ptr;
	}


	void GetPreferedSpawnPointFromteam(int TeamID, class ABP_BoatSpawn_C** SpawnPoint);
	void CheckIfPlayerIsBanned(class ABP_Controller_C* ControllerRef, bool* Banned);
	void KickBanPlayer(int PlayerId, bool Banned_, struct FString* UniqueNetId);
	void GetUndefeatedTeamsArray(TArray<struct FST_Team>* UndefeatedTeamsArray);
	void PrepareTeamsForFair();
	void DefeatTeam(int Team);
	void DisplayPings();
	void StartGame();
	void CheckIfCrewIsEmpty(int CrewID, bool* CrewIsEmpty);
	void ClearEmptyCrews();
	void UserConstructionScript();
	void OnFailure_D04F3F4047CD2F1B9C80B780DAFC498D();
	void OnSuccess_D04F3F4047CD2F1B9C80B780DAFC498D();
	void OnFailure_6716420744C0014FE83E3BAF8996ABB2();
	void OnSuccess_6716420744C0014FE83E3BAF8996ABB2();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void K2_PostLogin(class APlayerController** NewPlayer);
	void K2_OnLogout(class AController** ExitingController);
	void CreateNewTeam(int TeamFirstName, int TeamSecondaryName, int TeamSecondaryNameIndex, int teamColor, class ABP_Controller_C* PlayerController, const struct FText& ShipName, int FlagEmblem);
	void RefreshHUDs();
	void AddNewChatMessage(const struct FST_SimpleMessage& ChatMessage, int TeamChatID, bool FormatText);
	void RestartLevel();
	void CloseGameServer();
	void ExecuteUbergraph_BP_BaseGameMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
