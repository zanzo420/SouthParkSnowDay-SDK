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

// 0x69 (0x69 - 0x0)
// Function DroneBomb_BugZapper.DroneBomb_BugZapper_C.OnSlottedEvent
struct UDroneBomb_BugZapper_C_OnSlottedEvent_Params
{
public:
	class UQtnUpgradeSlot*                       TargetSlot;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnRolledUpgradeData                 RolledData;                                        // 0x8(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         LoadedRunProgress;                                 // 0x68(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function DroneBomb_BugZapper.DroneBomb_BugZapper_C.OnUnslottedEvent
struct UDroneBomb_BugZapper_C_OnUnslottedEvent_Params
{
public:
	class UQtnUpgradeSlot*                       PreviousSlot;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnRolledUpgradeData                 RolledData;                                        // 0x8(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xC8 (0xC8 - 0x0)
// Function DroneBomb_BugZapper.DroneBomb_BugZapper_C.OnUpgradeRolledDataChangedEvent
struct UDroneBomb_BugZapper_C_OnUpgradeRolledDataChangedEvent_Params
{
public:
	class UQtnUpgradeSlot*                       OwningSlot;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnRolledUpgradeData                 PreviousRolledData;                                // 0x8(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FQtnRolledUpgradeData                 NewRolledData;                                     // 0x68(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x209 (0x209 - 0x0)
// Function DroneBomb_BugZapper.DroneBomb_BugZapper_C.ExecuteUbergraph_DroneBomb_BugZapper
struct UDroneBomb_BugZapper_C_ExecuteUbergraph_DroneBomb_BugZapper_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A3C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnUpgradeSlot*                       K2Node_Event_OwningSlot;                           // 0x8(0x8)(ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnRolledUpgradeData                 K2Node_Event_PreviousRolledData;                   // 0x10(0x60)(ConstParm)
	struct FQtnRolledUpgradeData                 K2Node_Event_NewRolledData;                        // 0x70(0x60)(ConstParm)
	class UQtnUpgradeSlot*                       K2Node_Event_PreviousSlot;                         // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnRolledUpgradeData                 K2Node_Event_RolledData;                           // 0xD8(0x60)(ConstParm)
	class UQtnVerb*                              CallFunc_GetOwningVerb_ReturnValue;                // 0x138(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueOfUpgrade_ReturnValue;            // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A3D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimeBombVerb_C*                       K2Node_DynamicCast_AsTime_Bomb_Verb;               // 0x148(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A3E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetValueOfUpgrade_ReturnValue_1;          // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A3F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnVerb*                              CallFunc_GetOwningVerb_ReturnValue_1;              // 0x160(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnUpgradeSlot*                       K2Node_Event_TargetSlot;                           // 0x168(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnRolledUpgradeData                 K2Node_Event_RolledData_1;                         // 0x170(0x60)(ConstParm)
	bool                                         K2Node_Event_LoadedRunProgress;                    // 0x1D0(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A40[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimeBombVerb_C*                       K2Node_DynamicCast_AsTime_Bomb_Verb_1;             // 0x1D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A41[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetValueOfUpgrade_ReturnValue_2;          // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueOfUpgrade_ReturnValue_3;          // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A42[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnVerb*                              CallFunc_GetOwningVerb_ReturnValue_2;              // 0x1F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A43[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimeBombVerb_C*                       K2Node_DynamicCast_AsTime_Bomb_Verb_2;             // 0x200(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


