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

// 0x20 (0x20 - 0x0)
// Function LoadingSpinner_Screen.LoadingSpinner_Screen_C.Event Setup Spinner
struct ULoadingSpinner_Screen_C_Event_Setup_Spinner_Params
{
public:
	bool                                         DisableCancel;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_69AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  LoadingDescription;                                // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x38 (0x38 - 0x0)
// Function LoadingSpinner_Screen.LoadingSpinner_Screen_C.ExecuteUbergraph_LoadingSpinner_Screen
struct ULoadingSpinner_Screen_C_ExecuteUbergraph_LoadingSpinner_Screen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_CustomEvent_DisableCancel;                  // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_69AD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_LoadingDescription;             // 0x18(0x18)(None)
	class ULoadingSpinner_Widget_C*              CallFunc_GetUserWidget_ReturnValue;                // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


