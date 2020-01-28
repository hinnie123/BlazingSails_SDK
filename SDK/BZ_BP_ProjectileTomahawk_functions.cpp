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

// Function BP_ProjectileTomahawk.BP_ProjectileTomahawk_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileTomahawk_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileTomahawk.BP_ProjectileTomahawk_C.UserConstructionScript");

	ABP_ProjectileTomahawk_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTomahawk.BP_ProjectileTomahawk_C.PostHit
// (BlueprintCallable, BlueprintEvent)

void ABP_ProjectileTomahawk_C::PostHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileTomahawk.BP_ProjectileTomahawk_C.PostHit");

	ABP_ProjectileTomahawk_C_PostHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTomahawk.BP_ProjectileTomahawk_C.ExecuteUbergraph_BP_ProjectileTomahawk
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileTomahawk_C::ExecuteUbergraph_BP_ProjectileTomahawk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileTomahawk.BP_ProjectileTomahawk_C.ExecuteUbergraph_BP_ProjectileTomahawk");

	ABP_ProjectileTomahawk_C_ExecuteUbergraph_BP_ProjectileTomahawk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
