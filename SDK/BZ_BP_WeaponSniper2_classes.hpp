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

// BlueprintGeneratedClass BP_WeaponSniper2.BP_WeaponSniper2_C
// 0x000F (0x0538 - 0x0529)
class ABP_WeaponSniper2_C : public ABP_WeaponRangedBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0529(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponSniper2.BP_WeaponSniper2_C");
		return ptr;
	}


	void UserConstructionScript();
	void SecondaryFire(struct FVector* CameraLocation, struct FVector* Direction);
	void HolsteredEvent();
	void StopSecondaryFire(struct FVector* CameraLocation, struct FVector* Direction);
	void ExecuteUbergraph_BP_WeaponSniper2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
