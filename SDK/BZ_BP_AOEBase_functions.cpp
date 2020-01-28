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

// Function BP_AOEBase.BP_AOEBase_C.CalculateDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AOEBase_C::CalculateDamage(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AOEBase.BP_AOEBase_C.CalculateDamage");

	ABP_AOEBase_C_CalculateDamage_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AOEBase.BP_AOEBase_C.CheckIfBehindObstacle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*         Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBeDamaged                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AOEBase_C::CheckIfBehindObstacle(class ABP_Character_C* Character, bool* CanBeDamaged)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AOEBase.BP_AOEBase_C.CheckIfBehindObstacle");

	ABP_AOEBase_C_CheckIfBehindObstacle_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanBeDamaged != nullptr)
		*CanBeDamaged = params.CanBeDamaged;
}


// Function BP_AOEBase.BP_AOEBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AOEBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AOEBase.BP_AOEBase_C.UserConstructionScript");

	ABP_AOEBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AOEBase.BP_AOEBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AOEBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AOEBase.BP_AOEBase_C.ReceiveBeginPlay");

	ABP_AOEBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AOEBase.BP_AOEBase_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AOEBase_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AOEBase.BP_AOEBase_C.ReceiveActorBeginOverlap");

	ABP_AOEBase_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AOEBase.BP_AOEBase_C.ExecuteUbergraph_BP_AOEBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AOEBase_C::ExecuteUbergraph_BP_AOEBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AOEBase.BP_AOEBase_C.ExecuteUbergraph_BP_AOEBase");

	ABP_AOEBase_C_ExecuteUbergraph_BP_AOEBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
