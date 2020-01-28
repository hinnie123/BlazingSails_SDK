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

// Function UI_Hit.UI_Hit_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Hit_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Hit.UI_Hit_C.Construct");

	UUI_Hit_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Hit.UI_Hit_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Hit_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Hit.UI_Hit_C.Tick");

	UUI_Hit_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Hit.UI_Hit_C.ShowHitIndicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           headshot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Hit_C::ShowHitIndicator(bool headshot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Hit.UI_Hit_C.ShowHitIndicator");

	UUI_Hit_C_ShowHitIndicator_Params params;
	params.headshot = headshot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Hit.UI_Hit_C.ExecuteUbergraph_UI_Hit
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Hit_C::ExecuteUbergraph_UI_Hit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Hit.UI_Hit_C.ExecuteUbergraph_UI_Hit");

	UUI_Hit_C_ExecuteUbergraph_UI_Hit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
