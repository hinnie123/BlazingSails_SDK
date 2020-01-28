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

// Function BP_ProjectileExplosiveBarrel.BP_ProjectileExplosiveBarrel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileExplosiveBarrel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileExplosiveBarrel.BP_ProjectileExplosiveBarrel_C.UserConstructionScript");

	ABP_ProjectileExplosiveBarrel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileExplosiveBarrel.BP_ProjectileExplosiveBarrel_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileExplosiveBarrel_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileExplosiveBarrel.BP_ProjectileExplosiveBarrel_C.ReceiveTick");

	ABP_ProjectileExplosiveBarrel_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileExplosiveBarrel.BP_ProjectileExplosiveBarrel_C.WaterSplash
// (BlueprintCallable, BlueprintEvent)

void ABP_ProjectileExplosiveBarrel_C::WaterSplash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileExplosiveBarrel.BP_ProjectileExplosiveBarrel_C.WaterSplash");

	ABP_ProjectileExplosiveBarrel_C_WaterSplash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileExplosiveBarrel.BP_ProjectileExplosiveBarrel_C.PostHit
// (BlueprintCallable, BlueprintEvent)

void ABP_ProjectileExplosiveBarrel_C::PostHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileExplosiveBarrel.BP_ProjectileExplosiveBarrel_C.PostHit");

	ABP_ProjectileExplosiveBarrel_C_PostHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileExplosiveBarrel.BP_ProjectileExplosiveBarrel_C.ExecuteUbergraph_BP_ProjectileExplosiveBarrel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileExplosiveBarrel_C::ExecuteUbergraph_BP_ProjectileExplosiveBarrel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileExplosiveBarrel.BP_ProjectileExplosiveBarrel_C.ExecuteUbergraph_BP_ProjectileExplosiveBarrel");

	ABP_ProjectileExplosiveBarrel_C_ExecuteUbergraph_BP_ProjectileExplosiveBarrel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
