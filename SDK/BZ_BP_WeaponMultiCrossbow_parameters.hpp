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

// Function BP_WeaponMultiCrossbow.BP_WeaponMultiCrossbow_C.UserConstructionScript
struct ABP_WeaponMultiCrossbow_C_UserConstructionScript_Params
{
};

// Function BP_WeaponMultiCrossbow.BP_WeaponMultiCrossbow_C.ReceiveTick
struct ABP_WeaponMultiCrossbow_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponMultiCrossbow.BP_WeaponMultiCrossbow_C.PrimaryFire
struct ABP_WeaponMultiCrossbow_C_PrimaryFire_Params
{
	struct FVector*                                    CameraLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              FullPrecision;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              WasSprinting;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponMultiCrossbow.BP_WeaponMultiCrossbow_C.LoadedState
struct ABP_WeaponMultiCrossbow_C_LoadedState_Params
{
	bool*                                              Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponMultiCrossbow.BP_WeaponMultiCrossbow_C.ExecuteUbergraph_BP_WeaponMultiCrossbow
struct ABP_WeaponMultiCrossbow_C_ExecuteUbergraph_BP_WeaponMultiCrossbow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
