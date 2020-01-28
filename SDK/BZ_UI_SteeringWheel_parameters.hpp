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

// Function UI_SteeringWheel.UI_SteeringWheel_C.ShowTooltip
struct UUI_SteeringWheel_C_ShowTooltip_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_SteeringWheel.UI_SteeringWheel_C.ShowCooldown
struct UUI_SteeringWheel_C_ShowCooldown_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_SteeringWheel.UI_SteeringWheel_C.Construct
struct UUI_SteeringWheel_C_Construct_Params
{
};

// Function UI_SteeringWheel.UI_SteeringWheel_C.Tick
struct UUI_SteeringWheel_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SteeringWheel.UI_SteeringWheel_C.ExecuteUbergraph_UI_SteeringWheel
struct UUI_SteeringWheel_C_ExecuteUbergraph_UI_SteeringWheel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
