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

// Function BP_Mannequin.BP_Mannequin_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Mannequin_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mannequin.BP_Mannequin_C.UserConstructionScript");

	ABP_Mannequin_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mannequin.BP_Mannequin_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Mannequin_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mannequin.BP_Mannequin_C.ReceiveBeginPlay");

	ABP_Mannequin_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mannequin.BP_Mannequin_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mannequin_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mannequin.BP_Mannequin_C.ReceiveTick");

	ABP_Mannequin_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mannequin.BP_Mannequin_C.ResetClothing
// (BlueprintCallable, BlueprintEvent)

void ABP_Mannequin_C::ResetClothing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mannequin.BP_Mannequin_C.ResetClothing");

	ABP_Mannequin_C_ResetClothing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mannequin.BP_Mannequin_C.SetSkinColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SkinColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mannequin_C::SetSkinColor(float SkinColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mannequin.BP_Mannequin_C.SetSkinColor");

	ABP_Mannequin_C_SetSkinColor_Params params;
	params.SkinColor = SkinColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mannequin.BP_Mannequin_C.SetScar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Scar                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mannequin_C::SetScar(int Scar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mannequin.BP_Mannequin_C.SetScar");

	ABP_Mannequin_C_SetScar_Params params;
	params.Scar = Scar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mannequin.BP_Mannequin_C.ExecuteUbergraph_BP_Mannequin
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mannequin_C::ExecuteUbergraph_BP_Mannequin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mannequin.BP_Mannequin_C.ExecuteUbergraph_BP_Mannequin");

	ABP_Mannequin_C_ExecuteUbergraph_BP_Mannequin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
