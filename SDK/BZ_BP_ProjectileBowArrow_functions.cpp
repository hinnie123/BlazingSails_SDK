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

// Function BP_ProjectileBowArrow.BP_ProjectileBowArrow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileBowArrow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBowArrow.BP_ProjectileBowArrow_C.UserConstructionScript");

	ABP_ProjectileBowArrow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileBowArrow.BP_ProjectileBowArrow_C.PostHit
// (BlueprintCallable, BlueprintEvent)

void ABP_ProjectileBowArrow_C::PostHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBowArrow.BP_ProjectileBowArrow_C.PostHit");

	ABP_ProjectileBowArrow_C_PostHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileBowArrow.BP_ProjectileBowArrow_C.ExecuteUbergraph_BP_ProjectileBowArrow
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileBowArrow_C::ExecuteUbergraph_BP_ProjectileBowArrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBowArrow.BP_ProjectileBowArrow_C.ExecuteUbergraph_BP_ProjectileBowArrow");

	ABP_ProjectileBowArrow_C_ExecuteUbergraph_BP_ProjectileBowArrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
