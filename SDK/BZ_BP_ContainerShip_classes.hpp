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

// BlueprintGeneratedClass BP_ContainerShip.BP_ContainerShip_C
// 0x000A (0x0448 - 0x043E)
class ABP_ContainerShip_C : public ABP_ContainerBase_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x043E(0x0002) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ContainerShip.BP_ContainerShip_C");
		return ptr;
	}


	void SpawnDuplicateShipDeathContainer();
	void UserConstructionScript();
	void RefreshQuickAccessPoints();
	void ExecuteUbergraph_BP_ContainerShip(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
