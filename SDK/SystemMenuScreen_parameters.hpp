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

// 0x8 (0x8 - 0x0)
// Function SystemMenuScreen.SystemMenuScreen_C.OnScreenResumed
struct USystemMenuScreen_C_OnScreenResumed_Params
{
public:
	class UQtnScreen*                            PreviousScreen;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function SystemMenuScreen.SystemMenuScreen_C.ExecuteUbergraph_SystemMenuScreen
struct USystemMenuScreen_C_ExecuteUbergraph_SystemMenuScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_706C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USystemMenuWidget_C*                   CallFunc_GetUserWidget_ReturnValue;                // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnScreen*                            K2Node_Event_previousScreen;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


