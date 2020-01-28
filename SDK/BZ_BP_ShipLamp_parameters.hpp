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

// Function BP_ShipLamp.BP_ShipLamp_C.SetLightColor
struct ABP_ShipLamp_C_SetLightColor_Params
{
	struct FLinearColor                                LightColor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LightMaterialColor;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShipLamp.BP_ShipLamp_C.SetLightQuality
struct ABP_ShipLamp_C_SetLightQuality_Params
{
	bool                                               CastShadows;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShipLamp.BP_ShipLamp_C.OnRep_Lit
struct ABP_ShipLamp_C_OnRep_Lit_Params
{
};

// Function BP_ShipLamp.BP_ShipLamp_C.UserConstructionScript
struct ABP_ShipLamp_C_UserConstructionScript_Params
{
};

// Function BP_ShipLamp.BP_ShipLamp_C.ReceiveBeginPlay
struct ABP_ShipLamp_C_ReceiveBeginPlay_Params
{
};

// Function BP_ShipLamp.BP_ShipLamp_C.ReceiveTick
struct ABP_ShipLamp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShipLamp.BP_ShipLamp_C.S_Activate
struct ABP_ShipLamp_C_S_Activate_Params
{
};

// Function BP_ShipLamp.BP_ShipLamp_C.RefreshShipLightSettings
struct ABP_ShipLamp_C_RefreshShipLightSettings_Params
{
};

// Function BP_ShipLamp.BP_ShipLamp_C.ExecuteUbergraph_BP_ShipLamp
struct ABP_ShipLamp_C_ExecuteUbergraph_BP_ShipLamp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
