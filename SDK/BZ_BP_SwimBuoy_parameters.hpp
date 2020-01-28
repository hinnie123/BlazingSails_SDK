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

// Function BP_SwimBuoy.BP_SwimBuoy_C.LoadBuoyancyPoints
struct ABP_SwimBuoy_C_LoadBuoyancyPoints_Params
{
	TArray<struct FVector>                             BuoyancyPoints;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_SwimBuoy.BP_SwimBuoy_C.UserConstructionScript
struct ABP_SwimBuoy_C_UserConstructionScript_Params
{
};

// Function BP_SwimBuoy.BP_SwimBuoy_C.ReceiveBeginPlay
struct ABP_SwimBuoy_C_ReceiveBeginPlay_Params
{
};

// Function BP_SwimBuoy.BP_SwimBuoy_C.ReceiveTick
struct ABP_SwimBuoy_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SwimBuoy.BP_SwimBuoy_C.ExecuteUbergraph_BP_SwimBuoy
struct ABP_SwimBuoy_C_ExecuteUbergraph_BP_SwimBuoy_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
