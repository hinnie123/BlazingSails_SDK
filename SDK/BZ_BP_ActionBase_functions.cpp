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

// Function BP_ActionBase.BP_ActionBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ActionBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionBase.BP_ActionBase_C.UserConstructionScript");

	ABP_ActionBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionBase.BP_ActionBase_C.StartAction
// (BlueprintCallable, BlueprintEvent)

void ABP_ActionBase_C::StartAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionBase.BP_ActionBase_C.StartAction");

	ABP_ActionBase_C_StartAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionBase.BP_ActionBase_C.ExecuteUbergraph_BP_ActionBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActionBase_C::ExecuteUbergraph_BP_ActionBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionBase.BP_ActionBase_C.ExecuteUbergraph_BP_ActionBase");

	ABP_ActionBase_C_ExecuteUbergraph_BP_ActionBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
