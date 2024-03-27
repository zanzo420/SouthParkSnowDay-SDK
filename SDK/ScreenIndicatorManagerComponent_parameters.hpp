#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x41 - 0x0)
// Function ScreenIndicatorManagerComponent.ScreenIndicatorManagerComponent_C.RemoveIndicator_LocalOnly
struct UScreenIndicatorManagerComponent_C_RemoveIndicator_LocalOnly_Params
{
public:
	class UScreenIndicator_C*                    Indicator_Ref;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Immediately;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F92[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnPlayerUI*                          CallFunc_GetLocalPlayerUIBP_localPlayerUI;         // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EQtnOutputValidityEnum            CallFunc_GetLocalPlayerUIBP_outputPin;             // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F93[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerHUDScreen_C*                    CallFunc_GetScreen_ReturnValue;                    // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F94[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_GetMainWidget_ReturnValue;                // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerHUD_C*                          K2Node_DynamicCast_AsPlayer_HUD;                   // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x180 (0x180 - 0x0)
// Function ScreenIndicatorManagerComponent.ScreenIndicatorManagerComponent_C.CreateIndicator_LocalOnly
struct UScreenIndicatorManagerComponent_C_CreateIndicator_LocalOnly_Params
{
public:
	struct FIndicatorData                        Indicator_Data;                                    // 0x0(0x129)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_2F97[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                IndicatorActor;                                    // 0x130(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScreenIndicator_C*                    Indicator_Ref;                                     // 0x138(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnPlayerUI*                          CallFunc_GetLocalPlayerUIBP_localPlayerUI;         // 0x140(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EQtnOutputValidityEnum            CallFunc_GetLocalPlayerUIBP_outputPin;             // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F98[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerHUDScreen_C*                    CallFunc_GetScreen_ReturnValue;                    // 0x150(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F99[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_GetMainWidget_ReturnValue;                // 0x160(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerHUD_C*                          K2Node_DynamicCast_AsPlayer_HUD;                   // 0x168(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F9A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScreenIndicator_C*                    CallFunc_AddScreenIndicator_newIndicator;          // 0x178(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


