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

// Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PickupExplosiveBarrel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.UserConstructionScript");

	ABP_PickupExplosiveBarrel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PickupExplosiveBarrel_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.ReceiveBeginPlay");

	ABP_PickupExplosiveBarrel_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PickupExplosiveBarrel_C::S_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.S_Activate");

	ABP_PickupExplosiveBarrel_C_S_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.ExecuteUbergraph_BP_PickupExplosiveBarrel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupExplosiveBarrel_C::ExecuteUbergraph_BP_PickupExplosiveBarrel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupExplosiveBarrel.BP_PickupExplosiveBarrel_C.ExecuteUbergraph_BP_PickupExplosiveBarrel");

	ABP_PickupExplosiveBarrel_C_ExecuteUbergraph_BP_PickupExplosiveBarrel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
