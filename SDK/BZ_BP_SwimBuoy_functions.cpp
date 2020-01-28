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

// Function BP_SwimBuoy.BP_SwimBuoy_C.LoadBuoyancyPoints
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         BuoyancyPoints                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_SwimBuoy_C::LoadBuoyancyPoints(TArray<struct FVector>* BuoyancyPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimBuoy.BP_SwimBuoy_C.LoadBuoyancyPoints");

	ABP_SwimBuoy_C_LoadBuoyancyPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuoyancyPoints != nullptr)
		*BuoyancyPoints = params.BuoyancyPoints;
}


// Function BP_SwimBuoy.BP_SwimBuoy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SwimBuoy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimBuoy.BP_SwimBuoy_C.UserConstructionScript");

	ABP_SwimBuoy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimBuoy.BP_SwimBuoy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SwimBuoy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimBuoy.BP_SwimBuoy_C.ReceiveBeginPlay");

	ABP_SwimBuoy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimBuoy.BP_SwimBuoy_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SwimBuoy_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimBuoy.BP_SwimBuoy_C.ReceiveTick");

	ABP_SwimBuoy_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwimBuoy.BP_SwimBuoy_C.ExecuteUbergraph_BP_SwimBuoy
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SwimBuoy_C::ExecuteUbergraph_BP_SwimBuoy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimBuoy.BP_SwimBuoy_C.ExecuteUbergraph_BP_SwimBuoy");

	ABP_SwimBuoy_C_ExecuteUbergraph_BP_SwimBuoy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
