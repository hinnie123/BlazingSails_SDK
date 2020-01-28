#pragma once

// BlazingSails (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_HangLamp.BP_HangLamp_C.SetLightColor
struct ABP_HangLamp_C_SetLightColor_Params
{
	struct FLinearColor                                LightColor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LightMaterialColor;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HangLamp.BP_HangLamp_C.SetLightQuality
struct ABP_HangLamp_C_SetLightQuality_Params
{
	bool                                               CastShadows;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HangLamp.BP_HangLamp_C.OnRep_Lit
struct ABP_HangLamp_C_OnRep_Lit_Params
{
};

// Function BP_HangLamp.BP_HangLamp_C.UserConstructionScript
struct ABP_HangLamp_C_UserConstructionScript_Params
{
};

// Function BP_HangLamp.BP_HangLamp_C.ReceiveBeginPlay
struct ABP_HangLamp_C_ReceiveBeginPlay_Params
{
};

// Function BP_HangLamp.BP_HangLamp_C.ReceiveTick
struct ABP_HangLamp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HangLamp.BP_HangLamp_C.S_Activate
struct ABP_HangLamp_C_S_Activate_Params
{
};

// Function BP_HangLamp.BP_HangLamp_C.RefreshLanternSettings
struct ABP_HangLamp_C_RefreshLanternSettings_Params
{
};

// Function BP_HangLamp.BP_HangLamp_C.ExecuteUbergraph_BP_HangLamp
struct ABP_HangLamp_C_ExecuteUbergraph_BP_HangLamp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
