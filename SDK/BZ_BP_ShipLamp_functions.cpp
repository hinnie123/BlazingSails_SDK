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

// Function BP_ShipLamp.BP_ShipLamp_C.SetLightColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            LightColor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LightMaterialColor             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShipLamp_C::SetLightColor(const struct FLinearColor& LightColor, const struct FLinearColor& LightMaterialColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipLamp.BP_ShipLamp_C.SetLightColor");

	ABP_ShipLamp_C_SetLightColor_Params params;
	params.LightColor = LightColor;
	params.LightMaterialColor = LightMaterialColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipLamp.BP_ShipLamp_C.SetLightQuality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CastShadows                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShipLamp_C::SetLightQuality(bool CastShadows)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipLamp.BP_ShipLamp_C.SetLightQuality");

	ABP_ShipLamp_C_SetLightQuality_Params params;
	params.CastShadows = CastShadows;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipLamp.BP_ShipLamp_C.OnRep_Lit
// (BlueprintCallable, BlueprintEvent)

void ABP_ShipLamp_C::OnRep_Lit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipLamp.BP_ShipLamp_C.OnRep_Lit");

	ABP_ShipLamp_C_OnRep_Lit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipLamp.BP_ShipLamp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ShipLamp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipLamp.BP_ShipLamp_C.UserConstructionScript");

	ABP_ShipLamp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipLamp.BP_ShipLamp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ShipLamp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipLamp.BP_ShipLamp_C.ReceiveBeginPlay");

	ABP_ShipLamp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipLamp.BP_ShipLamp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShipLamp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipLamp.BP_ShipLamp_C.ReceiveTick");

	ABP_ShipLamp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipLamp.BP_ShipLamp_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_ShipLamp_C::S_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipLamp.BP_ShipLamp_C.S_Activate");

	ABP_ShipLamp_C_S_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipLamp.BP_ShipLamp_C.RefreshShipLightSettings
// (BlueprintCallable, BlueprintEvent)

void ABP_ShipLamp_C::RefreshShipLightSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipLamp.BP_ShipLamp_C.RefreshShipLightSettings");

	ABP_ShipLamp_C_RefreshShipLightSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipLamp.BP_ShipLamp_C.ExecuteUbergraph_BP_ShipLamp
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShipLamp_C::ExecuteUbergraph_BP_ShipLamp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipLamp.BP_ShipLamp_C.ExecuteUbergraph_BP_ShipLamp");

	ABP_ShipLamp_C_ExecuteUbergraph_BP_ShipLamp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
