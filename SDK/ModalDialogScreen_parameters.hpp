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

// 0x50 (0x50 - 0x0)
// Function ModalDialogScreen.ModalDialogScreen_C.PresentMessageInfo
struct UModalDialogScreen_C_PresentMessageInfo_Params
{
public:
	struct FQtnModalMessageInfo                  MessageInfo;                                       // 0x0(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x60 (0x60 - 0x0)
// Function ModalDialogScreen.ModalDialogScreen_C.ExecuteUbergraph_ModalDialogScreen
struct UModalDialogScreen_C_ExecuteUbergraph_ModalDialogScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B5E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UModalDialogWidget_C*                  CallFunc_GetUserWidget_ReturnValue;                // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnModalMessageInfo                  K2Node_Event_messageInfo;                          // 0x10(0x50)(ConstParm, ContainsInstancedReference)
};

}
}


