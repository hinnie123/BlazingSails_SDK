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

// Function BP_BoatSpawn.BP_BoatSpawn_C.OnRep_Disabled
// (BlueprintCallable, BlueprintEvent)

void ABP_BoatSpawn_C::OnRep_Disabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatSpawn.BP_BoatSpawn_C.OnRep_Disabled");

	ABP_BoatSpawn_C_OnRep_Disabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoatSpawn.BP_BoatSpawn_C.OnRep_Selected
// (BlueprintCallable, BlueprintEvent)

void ABP_BoatSpawn_C::OnRep_Selected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatSpawn.BP_BoatSpawn_C.OnRep_Selected");

	ABP_BoatSpawn_C_OnRep_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoatSpawn.BP_BoatSpawn_C.OnRep_TeamPlayerColors
// (BlueprintCallable, BlueprintEvent)

void ABP_BoatSpawn_C::OnRep_TeamPlayerColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatSpawn.BP_BoatSpawn_C.OnRep_TeamPlayerColors");

	ABP_BoatSpawn_C_OnRep_TeamPlayerColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoatSpawn.BP_BoatSpawn_C.UpdateButton
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BoatSpawn_C::UpdateButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatSpawn.BP_BoatSpawn_C.UpdateButton");

	ABP_BoatSpawn_C_UpdateButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoatSpawn.BP_BoatSpawn_C.OnRep_TeamUsingThisSpawnPoint
// (BlueprintCallable, BlueprintEvent)

void ABP_BoatSpawn_C::OnRep_TeamUsingThisSpawnPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatSpawn.BP_BoatSpawn_C.OnRep_TeamUsingThisSpawnPoint");

	ABP_BoatSpawn_C_OnRep_TeamUsingThisSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoatSpawn.BP_BoatSpawn_C.OnRep_InUse
// (BlueprintCallable, BlueprintEvent)

void ABP_BoatSpawn_C::OnRep_InUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatSpawn.BP_BoatSpawn_C.OnRep_InUse");

	ABP_BoatSpawn_C_OnRep_InUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoatSpawn.BP_BoatSpawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BoatSpawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatSpawn.BP_BoatSpawn_C.UserConstructionScript");

	ABP_BoatSpawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoatSpawn.BP_BoatSpawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BoatSpawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatSpawn.BP_BoatSpawn_C.ReceiveBeginPlay");

	ABP_BoatSpawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoatSpawn.BP_BoatSpawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BoatSpawn_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatSpawn.BP_BoatSpawn_C.ReceiveTick");

	ABP_BoatSpawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoatSpawn.BP_BoatSpawn_C.RemovePoint
// (BlueprintCallable, BlueprintEvent)

void ABP_BoatSpawn_C::RemovePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatSpawn.BP_BoatSpawn_C.RemovePoint");

	ABP_BoatSpawn_C_RemovePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoatSpawn.BP_BoatSpawn_C.ExecuteUbergraph_BP_BoatSpawn
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BoatSpawn_C::ExecuteUbergraph_BP_BoatSpawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatSpawn.BP_BoatSpawn_C.ExecuteUbergraph_BP_BoatSpawn");

	ABP_BoatSpawn_C_ExecuteUbergraph_BP_BoatSpawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
