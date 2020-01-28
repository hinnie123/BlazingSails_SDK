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

// Function BP_ActionRestoreHealth.BP_ActionRestoreHealth_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ActionRestoreHealth_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionRestoreHealth.BP_ActionRestoreHealth_C.UserConstructionScript");

	ABP_ActionRestoreHealth_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionRestoreHealth.BP_ActionRestoreHealth_C.StartAction
// (BlueprintCallable, BlueprintEvent)

void ABP_ActionRestoreHealth_C::StartAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionRestoreHealth.BP_ActionRestoreHealth_C.StartAction");

	ABP_ActionRestoreHealth_C_StartAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionRestoreHealth.BP_ActionRestoreHealth_C.ExecuteUbergraph_BP_ActionRestoreHealth
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActionRestoreHealth_C::ExecuteUbergraph_BP_ActionRestoreHealth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionRestoreHealth.BP_ActionRestoreHealth_C.ExecuteUbergraph_BP_ActionRestoreHealth");

	ABP_ActionRestoreHealth_C_ExecuteUbergraph_BP_ActionRestoreHealth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
