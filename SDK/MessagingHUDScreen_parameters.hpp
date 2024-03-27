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

// 0x18 (0x18 - 0x0)
// Function MessagingHUDScreen.MessagingHUDScreen_C.UpdateHintText
struct UMessagingHUDScreen_C_UpdateHintText_Params
{
public:
	class FText                                  HintText;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1C (0x1C - 0x0)
// Function MessagingHUDScreen.MessagingHUDScreen_C.ShowHint
struct UMessagingHUDScreen_C_ShowHint_Params
{
public:
	class FText                                  HintText;                                          // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                        Duration;                                          // 0x18(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function MessagingHUDScreen.MessagingHUDScreen_C.ExecuteUbergraph_MessagingHUDScreen
struct UMessagingHUDScreen_C_ExecuteUbergraph_MessagingHUDScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A57[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_hintText;                             // 0x8(0x18)(ConstParm)
	float                                        K2Node_Event_duration;                             // 0x20(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A58[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMessagingHUD_C*                       CallFunc_GetUserWidget_ReturnValue;                // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


