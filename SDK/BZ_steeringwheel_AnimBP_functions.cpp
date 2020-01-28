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

// Function steeringwheel_AnimBP.steeringwheel_AnimBP_C.ExecuteUbergraph_steeringwheel_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usteeringwheel_AnimBP_C::ExecuteUbergraph_steeringwheel_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function steeringwheel_AnimBP.steeringwheel_AnimBP_C.ExecuteUbergraph_steeringwheel_AnimBP");

	Usteeringwheel_AnimBP_C_ExecuteUbergraph_steeringwheel_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
