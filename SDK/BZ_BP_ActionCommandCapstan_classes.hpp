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

// BlueprintGeneratedClass BP_ActionCommandCapstan.BP_ActionCommandCapstan_C
// 0x0008 (0x0350 - 0x0348)
class ABP_ActionCommandCapstan_C : public ABP_ActionBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ActionCommandCapstan.BP_ActionCommandCapstan_C");
		return ptr;
	}


	void UserConstructionScript();
	void StartAction();
	void ExecuteUbergraph_BP_ActionCommandCapstan(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif