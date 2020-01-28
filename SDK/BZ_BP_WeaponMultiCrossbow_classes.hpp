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

// BlueprintGeneratedClass BP_WeaponMultiCrossbow.BP_WeaponMultiCrossbow_C
// 0x000F (0x0538 - 0x0529)
class ABP_WeaponMultiCrossbow_C : public ABP_WeaponRangedBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0529(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponMultiCrossbow.BP_WeaponMultiCrossbow_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void PrimaryFire(struct FVector* CameraLocation, struct FVector* Direction, bool* FullPrecision, bool* WasSprinting);
	void LoadedState(bool* Loaded);
	void ExecuteUbergraph_BP_WeaponMultiCrossbow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
