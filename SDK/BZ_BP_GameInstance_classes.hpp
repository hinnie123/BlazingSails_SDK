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

// BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C
// 0x016D (0x020D - 0x00A0)
class UBP_GameInstance_C : public UGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FString                                     PlayerName;                                               // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FST_Options                                 options;                                                  // 0x00B8(0x0038) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FST_Customisation                           Customisation;                                            // 0x00F0(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_Keybind>                         KeyBinds;                                                 // 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Version;                                                  // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	TArray<struct FSessionPropertyKeyPair>             SessionExtraSetting;                                      // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     Servername;                                               // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FST_Keybind>                         AzertyKeyBinds;                                           // 0x0188(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FST_Keybind>                         QuertyKeyBinds;                                           // 0x0198(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<E_TimesOfDay>                          TimeOfDay;                                                // 0x01A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01A9(0x0003) MISSED OFFSET
	int                                                GoldAmount;                                               // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FString>                             OwnedItems;                                               // 0x01B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Level;                                                    // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Progress;                                                 // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DefaultNameGenerated;                                     // 0x01C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01C9(0x0007) MISSED OFFSET
	struct FString                                     URL;                                                      // 0x01D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               UsedCodes;                                                // 0x01E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Index_Fair_;                                              // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartUpScreenShown;                                       // 0x01F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x01F5(0x0003) MISSED OFFSET
	TArray<struct FST_BanListEntry>                    BannedPlayersList;                                        // 0x01F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MaxPlayerPerCrew;                                         // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Dv;                                                       // 0x020C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C");
		return ptr;
	}


	void LoadBanList();
	void SaveBanList();
	void CheckIfPlayerHasItemUnlocked(int ItemIndex, TEnumAsByte<E_ClothingCategories> ClothingCategory, bool* HasItem);
	void AddUsedCode(const struct FText& Code);
	void RemoveGold(int GoldAmount);
	void AddScore(int Score);
	void AddGold(int GoldAmount);
	void SpawnActor(class UClass* ActorClass, const struct FTransform& Transform, class AActor** Actor);
	void SaveData();
	void LoadData();
	void ReceiveShutdown();
	void UpdateSessionPlayerAmount(int PlayerAmount);
	void ReceiveInit();
	void ResetKeysAzerty();
	void ResetKeysQuerty();
	void ExecuteUbergraph_BP_GameInstance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
