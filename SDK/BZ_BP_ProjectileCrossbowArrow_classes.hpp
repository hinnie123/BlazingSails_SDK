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

// BlueprintGeneratedClass BP_ProjectileCrossbowArrow.BP_ProjectileCrossbowArrow_C
// 0x000F (0x04B8 - 0x04A9)
class ABP_ProjectileCrossbowArrow_C : public ABP_ProjectileBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileCrossbowArrow.BP_ProjectileCrossbowArrow_C");
		return ptr;
	}


	void UserConstructionScript();
	void PostHit();
	void ExecuteUbergraph_BP_ProjectileCrossbowArrow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
