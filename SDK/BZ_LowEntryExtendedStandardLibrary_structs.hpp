#pragma once

// BlazingSails (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum LowEntryExtendedStandardLibrary.ELowEntryBatteryState
enum class ELowEntryBatteryState : uint8_t
{
	Charging                       = 0,
	Discharging                    = 1,
	Full                           = 2,
	NotCharging                    = 3,
	Unknown                        = 4,
	ELowEntryBatteryState_MAX      = 5
};


// Enum LowEntryExtendedStandardLibrary.ELowEntryExtendedStandardLibrary0to9
enum class ELowEntryExtendedStandardLibrary0to9 : uint8_t
{
	_0_                            = 0,
	_1_                            = 1,
	_2_                            = 2,
	_3_                            = 3,
	_4_                            = 4,
	_5_                            = 5,
	_6_                            = 6,
	_7_                            = 7,
	_8_                            = 8,
	_9_                            = 9,
	_MAX                           = 10
};


// Enum LowEntryExtendedStandardLibrary.ELowEntryExtendedStandardLibrary1to10other
enum class ELowEntryExtendedStandardLibrary1to10other : uint8_t
{
	_1_                            = 0,
	_2_                            = 1,
	_3_                            = 2,
	_4_                            = 3,
	_5_                            = 4,
	_6_                            = 5,
	_7_                            = 6,
	_8_                            = 7,
	_9_                            = 8,
	_10_                           = 9,
	Other                          = 10,
	ELowEntryExtendedStandardLibrary1to10other_MAX = 11
};


// Enum LowEntryExtendedStandardLibrary.ELowEntryExtendedStandardLibraryTrueOrFalse
enum class ELowEntryExtendedStandardLibraryTrueOrFalse : uint8_t
{
	_True_                         = 0,
	_False_                        = 1,
	_MAX                           = 2
};


// Enum LowEntryExtendedStandardLibrary.ELowEntryHmacAlgorithm
enum class ELowEntryHmacAlgorithm : uint8_t
{
	MD5                            = 0,
	SHA1                           = 1,
	SHA256                         = 2,
	SHA512                         = 3,
	ELowEntryHmacAlgorithm_MAX     = 4
};


// Enum LowEntryExtendedStandardLibrary.ELowEntryImageFormat
enum class ELowEntryImageFormat : uint8_t
{
	Invalid                        = 0,
	PNG                            = 1,
	JPEG                           = 2,
	GrayscaleJPEG                  = 3,
	BMP                            = 4,
	ICO                            = 5,
	EXR                            = 6,
	ICNS                           = 7,
	ELowEntryImageFormat_MAX       = 8
};


// Enum LowEntryExtendedStandardLibrary.ELowEntryRGBFormat
enum class ELowEntryRGBFormat : uint8_t
{
	Invalid                        = 0,
	RGBA                           = 1,
	BGRA                           = 2,
	Gray                           = 3,
	ELowEntryRGBFormat_MAX         = 4
};


// Enum LowEntryExtendedStandardLibrary.ELowEntrySplitScreenType
enum class ELowEntrySplitScreenType : uint8_t
{
	None                           = 0,
	TwoPlayer_Horizontal           = 1,
	TwoPlayer_Vertical             = 2,
	ThreePlayer_FavorTop           = 3,
	ThreePlayer_FavorBottom        = 4,
	ThreePlayer_Vertical           = 5,
	FourPlayer_Grid                = 6,
	FourPlayer_Vertical            = 7,
	ELowEntrySplitScreenType_MAX   = 8
};


// Enum LowEntryExtendedStandardLibrary.ELowEntrySplitScreenTypeThreePlayers
enum class ELowEntrySplitScreenTypeThreePlayers : uint8_t
{
	FavorTop                       = 0,
	FavorBottom                    = 1,
	ELowEntrySplitScreenTypeThreePlayers_MAX = 2
};


// Enum LowEntryExtendedStandardLibrary.ELowEntrySplitScreenTypeTwoPlayers
enum class ELowEntrySplitScreenTypeTwoPlayers : uint8_t
{
	Horizontal                     = 0,
	Vertical                       = 1,
	ELowEntrySplitScreenTypeTwoPlayers_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LowEntryExtendedStandardLibrary.LowEntryRegexCaptureGroup
// 0x0020
struct FLowEntryRegexCaptureGroup
{
	int                                                CaptureGroupNumber;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BeginIndex;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EndIndex;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     Match;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct LowEntryExtendedStandardLibrary.LowEntryRegexMatch
// 0x0030
struct FLowEntryRegexMatch
{
	int                                                MatchNumber;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BeginIndex;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EndIndex;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     Match;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FLowEntryRegexCaptureGroup>          CaptureGroups;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
