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

// 0x30 (0x30 - 0x0)
// Function BP_DebugTargetFlag.BP_DebugTargetFlag_C.ProcessStringForDisplay
struct ABP_DebugTargetFlag_C_ProcessStringForDisplay_Params
{
public:
	class FText                                  Input;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Output;                                            // 0x18(0x18)(Parm, OutParm)
};

// 0x9 (0x9 - 0x0)
// Function BP_DebugTargetFlag.BP_DebugTargetFlag_C.OnRep_ColorIndex
struct ABP_DebugTargetFlag_C_OnRep_ColorIndex_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_DebugTargetFlag.BP_DebugTargetFlag_C.MulticastSetValues
struct ABP_DebugTargetFlag_C_MulticastSetValues_Params
{
public:
	int32                                        ColorIndex;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function BP_DebugTargetFlag.BP_DebugTargetFlag_C.ExecuteUbergraph_BP_DebugTargetFlag
struct ABP_DebugTargetFlag_C_ExecuteUbergraph_BP_DebugTargetFlag_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D0C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_ProcessStringForDisplay_Output;           // 0x8(0x18)(None)
	int32                                        K2Node_CustomEvent_ColorIndex;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D0D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_Array_Random_OutItem;                     // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Random_OutIndex;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


