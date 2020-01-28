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

// Function WaterPlane.WaterPlane_C.GetPrimitiveCompFromBoatMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BoatMeshBase_C*      BoatMeshRef                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     PrimitiveComponent             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AWaterPlane_C::GetPrimitiveCompFromBoatMesh(class ABP_BoatMeshBase_C* BoatMeshRef, class UPrimitiveComponent** PrimitiveComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.GetPrimitiveCompFromBoatMesh");

	AWaterPlane_C_GetPrimitiveCompFromBoatMesh_Params params;
	params.BoatMeshRef = BoatMeshRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrimitiveComponent != nullptr)
		*PrimitiveComponent = params.PrimitiveComponent;
}


// Function WaterPlane.WaterPlane_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWaterPlane_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.UserConstructionScript");

	AWaterPlane_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWaterPlane_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.ReceiveBeginPlay");

	AWaterPlane_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.No shadow
// (BlueprintCallable, BlueprintEvent)

void AWaterPlane_C::No_shadow()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.No shadow");

	AWaterPlane_C_No_shadow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.AddNewShipCulling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ShipWaterCulling_C*  CullingVolumeRef               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_BoatMeshBase_C*      BoatMeshRef                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterPlane_C::AddNewShipCulling(class ABP_ShipWaterCulling_C* CullingVolumeRef, class ABP_BoatMeshBase_C* BoatMeshRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.AddNewShipCulling");

	AWaterPlane_C_AddNewShipCulling_Params params;
	params.CullingVolumeRef = CullingVolumeRef;
	params.BoatMeshRef = BoatMeshRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.CreateWaterMask
// (BlueprintCallable, BlueprintEvent)

void AWaterPlane_C::CreateWaterMask()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.CreateWaterMask");

	AWaterPlane_C_CreateWaterMask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.RemoveShipCulling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BoatMeshBase_C*      BoatMeshRef                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterPlane_C::RemoveShipCulling(class ABP_BoatMeshBase_C* BoatMeshRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.RemoveShipCulling");

	AWaterPlane_C_RemoveShipCulling_Params params;
	params.BoatMeshRef = BoatMeshRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.AddSeasphereVals
// (BlueprintCallable, BlueprintEvent)

void AWaterPlane_C::AddSeasphereVals()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.AddSeasphereVals");

	AWaterPlane_C_AddSeasphereVals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.InitWater
// (BlueprintCallable, BlueprintEvent)

void AWaterPlane_C::InitWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.InitWater");

	AWaterPlane_C_InitWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.1_MakeGridLayer
// (BlueprintCallable, BlueprintEvent)

void AWaterPlane_C::_1_MakeGridLayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.1_MakeGridLayer");

	AWaterPlane_C__1_MakeGridLayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.OverrideMaterialInstances
// (BlueprintCallable, BlueprintEvent)

void AWaterPlane_C::OverrideMaterialInstances()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.OverrideMaterialInstances");

	AWaterPlane_C_OverrideMaterialInstances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.UpdateWaveParameters
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CreateDynMat                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterPlane_C::UpdateWaveParameters(bool CreateDynMat)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.UpdateWaveParameters");

	AWaterPlane_C_UpdateWaveParameters_Params params;
	params.CreateDynMat = CreateDynMat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterPlane_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.ReceiveTick");

	AWaterPlane_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.ExecuteUbergraph_WaterPlane
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterPlane_C::ExecuteUbergraph_WaterPlane(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.ExecuteUbergraph_WaterPlane");

	AWaterPlane_C_ExecuteUbergraph_WaterPlane_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
