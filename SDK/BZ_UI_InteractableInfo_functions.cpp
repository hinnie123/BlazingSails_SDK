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

// Function UI_InteractableInfo.UI_InteractableInfo_C.SetInteractableInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_InteractableInfo_C::SetInteractableInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InteractableInfo.UI_InteractableInfo_C.SetInteractableInfo");

	UUI_InteractableInfo_C_SetInteractableInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InteractableInfo.UI_InteractableInfo_C.refresh
// (BlueprintCallable, BlueprintEvent)

void UUI_InteractableInfo_C::refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InteractableInfo.UI_InteractableInfo_C.refresh");

	UUI_InteractableInfo_C_refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InteractableInfo.UI_InteractableInfo_C.ExecuteUbergraph_UI_InteractableInfo
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InteractableInfo_C::ExecuteUbergraph_UI_InteractableInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InteractableInfo.UI_InteractableInfo_C.ExecuteUbergraph_UI_InteractableInfo");

	UUI_InteractableInfo_C_ExecuteUbergraph_UI_InteractableInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
