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

// Function BP_WeaponFishLauncher.BP_WeaponFishLauncher_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponFishLauncher_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponFishLauncher.BP_WeaponFishLauncher_C.UserConstructionScript");

	ABP_WeaponFishLauncher_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponFishLauncher.BP_WeaponFishLauncher_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WeaponFishLauncher_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponFishLauncher.BP_WeaponFishLauncher_C.ReceiveBeginPlay");

	ABP_WeaponFishLauncher_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponFishLauncher.BP_WeaponFishLauncher_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponFishLauncher_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponFishLauncher.BP_WeaponFishLauncher_C.ReceiveTick");

	ABP_WeaponFishLauncher_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponFishLauncher.BP_WeaponFishLauncher_C.LoadedState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponFishLauncher_C::LoadedState(bool* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponFishLauncher.BP_WeaponFishLauncher_C.LoadedState");

	ABP_WeaponFishLauncher_C_LoadedState_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponFishLauncher.BP_WeaponFishLauncher_C.ExecuteUbergraph_BP_WeaponFishLauncher
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponFishLauncher_C::ExecuteUbergraph_BP_WeaponFishLauncher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponFishLauncher.BP_WeaponFishLauncher_C.ExecuteUbergraph_BP_WeaponFishLauncher");

	ABP_WeaponFishLauncher_C_ExecuteUbergraph_BP_WeaponFishLauncher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
