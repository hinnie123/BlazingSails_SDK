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

// Function UI_ShipInfo.UI_ShipInfo_C.SetShipHealth
struct UUI_ShipInfo_C_SetShipHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_ShipInfo.UI_ShipInfo_C.Tick
struct UUI_ShipInfo_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ShipInfo.UI_ShipInfo_C.RefreshShipInfo
struct UUI_ShipInfo_C_RefreshShipInfo_Params
{
};

// Function UI_ShipInfo.UI_ShipInfo_C.ExecuteUbergraph_UI_ShipInfo
struct UUI_ShipInfo_C_ExecuteUbergraph_UI_ShipInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
