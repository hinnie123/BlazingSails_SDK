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

// BlueprintGeneratedClass BP_ProjectileHeavyShot.BP_ProjectileHeavyShot_C
// 0x0008 (0x04D8 - 0x04D0)
class ABP_ProjectileHeavyShot_C : public ABP_ProjectileCannonballBase_C
{
public:
	class UParticleSystemComponent*                    ParticleSystem_1;                                         // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileHeavyShot.BP_ProjectileHeavyShot_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
