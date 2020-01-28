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

// Function WaterPlane.WaterPlane_C.GetPrimitiveCompFromBoatMesh
struct AWaterPlane_C_GetPrimitiveCompFromBoatMesh_Params
{
	class ABP_BoatMeshBase_C*                          BoatMeshRef;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         PrimitiveComponent;                                       // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WaterPlane.WaterPlane_C.UserConstructionScript
struct AWaterPlane_C_UserConstructionScript_Params
{
};

// Function WaterPlane.WaterPlane_C.ReceiveBeginPlay
struct AWaterPlane_C_ReceiveBeginPlay_Params
{
};

// Function WaterPlane.WaterPlane_C.No shadow
struct AWaterPlane_C_No_shadow_Params
{
};

// Function WaterPlane.WaterPlane_C.AddNewShipCulling
struct AWaterPlane_C_AddNewShipCulling_Params
{
	class ABP_ShipWaterCulling_C*                      CullingVolumeRef;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_BoatMeshBase_C*                          BoatMeshRef;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaterPlane.WaterPlane_C.CreateWaterMask
struct AWaterPlane_C_CreateWaterMask_Params
{
};

// Function WaterPlane.WaterPlane_C.RemoveShipCulling
struct AWaterPlane_C_RemoveShipCulling_Params
{
	class ABP_BoatMeshBase_C*                          BoatMeshRef;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaterPlane.WaterPlane_C.AddSeasphereVals
struct AWaterPlane_C_AddSeasphereVals_Params
{
};

// Function WaterPlane.WaterPlane_C.InitWater
struct AWaterPlane_C_InitWater_Params
{
};

// Function WaterPlane.WaterPlane_C.1_MakeGridLayer
struct AWaterPlane_C__1_MakeGridLayer_Params
{
};

// Function WaterPlane.WaterPlane_C.OverrideMaterialInstances
struct AWaterPlane_C_OverrideMaterialInstances_Params
{
};

// Function WaterPlane.WaterPlane_C.UpdateWaveParameters
struct AWaterPlane_C_UpdateWaveParameters_Params
{
	bool                                               CreateDynMat;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaterPlane.WaterPlane_C.ReceiveTick
struct AWaterPlane_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaterPlane.WaterPlane_C.ExecuteUbergraph_WaterPlane
struct AWaterPlane_C_ExecuteUbergraph_WaterPlane_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
