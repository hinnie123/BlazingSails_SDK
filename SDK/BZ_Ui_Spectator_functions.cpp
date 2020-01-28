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

// Function Ui_Spectator.UI_Spectator_C.SetLevel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_Spectator_C::SetLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ui_Spectator.UI_Spectator_C.SetLevel");

	UUI_Spectator_C_SetLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ui_Spectator.UI_Spectator_C.SetSpectatingName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_Spectator_C::SetSpectatingName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ui_Spectator.UI_Spectator_C.SetSpectatingName");

	UUI_Spectator_C_SetSpectatingName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ui_Spectator.UI_Spectator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Spectator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ui_Spectator.UI_Spectator_C.Construct");

	UUI_Spectator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ui_Spectator.UI_Spectator_C.ExecuteUbergraph_UI_Spectator
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Spectator_C::ExecuteUbergraph_UI_Spectator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ui_Spectator.UI_Spectator_C.ExecuteUbergraph_UI_Spectator");

	UUI_Spectator_C_ExecuteUbergraph_UI_Spectator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
