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

// Function BP_AOEBase.BP_AOEBase_C.CalculateDamage
struct ABP_AOEBase_C_CalculateDamage_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AOEBase.BP_AOEBase_C.CheckIfBehindObstacle
struct ABP_AOEBase_C_CheckIfBehindObstacle_Params
{
	class ABP_Character_C*                             Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeDamaged;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AOEBase.BP_AOEBase_C.UserConstructionScript
struct ABP_AOEBase_C_UserConstructionScript_Params
{
};

// Function BP_AOEBase.BP_AOEBase_C.ReceiveBeginPlay
struct ABP_AOEBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_AOEBase.BP_AOEBase_C.ReceiveActorBeginOverlap
struct ABP_AOEBase_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AOEBase.BP_AOEBase_C.ExecuteUbergraph_BP_AOEBase
struct ABP_AOEBase_C_ExecuteUbergraph_BP_AOEBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
