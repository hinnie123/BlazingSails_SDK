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

// Function BP_ProjectileCannonballBase.BP_ProjectileCannonballBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileCannonballBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileCannonballBase.BP_ProjectileCannonballBase_C.UserConstructionScript");

	ABP_ProjectileCannonballBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileCannonballBase.BP_ProjectileCannonballBase_C.PostHit
// (BlueprintCallable, BlueprintEvent)

void ABP_ProjectileCannonballBase_C::PostHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileCannonballBase.BP_ProjectileCannonballBase_C.PostHit");

	ABP_ProjectileCannonballBase_C_PostHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileCannonballBase.BP_ProjectileCannonballBase_C.ExecuteUbergraph_BP_ProjectileCannonballBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileCannonballBase_C::ExecuteUbergraph_BP_ProjectileCannonballBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileCannonballBase.BP_ProjectileCannonballBase_C.ExecuteUbergraph_BP_ProjectileCannonballBase");

	ABP_ProjectileCannonballBase_C_ExecuteUbergraph_BP_ProjectileCannonballBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
