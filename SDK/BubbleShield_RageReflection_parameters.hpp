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
// Function BubbleShield_RageReflection.BubbleShield_RageReflection_C.OnSlottedEvent
struct UBubbleShield_RageReflection_C_OnSlottedEvent_Params
{
public:
	class UQtnUpgradeSlot*                       TargetSlot;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnRolledUpgradeData                 RolledData;                                        // 0x8(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         LoadedRunProgress;                                 // 0x68(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function BubbleShield_RageReflection.BubbleShield_RageReflection_C.OnUnslottedEvent
struct UBubbleShield_RageReflection_C_OnUnslottedEvent_Params
{
public:
	class UQtnUpgradeSlot*                       PreviousSlot;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnRolledUpgradeData                 RolledData;                                        // 0x8(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xC8 (0xC8 - 0x0)
// Function BubbleShield_RageReflection.BubbleShield_RageReflection_C.OnUpgradeRolledDataChangedEvent
struct UBubbleShield_RageReflection_C_OnUpgradeRolledDataChangedEvent_Params
{
public:
	class UQtnUpgradeSlot*                       OwningSlot;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnRolledUpgradeData                 PreviousRolledData;                                // 0x8(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FQtnRolledUpgradeData                 NewRolledData;                                     // 0x68(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1F9 (0x1F9 - 0x0)
// Function BubbleShield_RageReflection.BubbleShield_RageReflection_C.ExecuteUbergraph_BubbleShield_RageReflection
struct UBubbleShield_RageReflection_C_ExecuteUbergraph_BubbleShield_RageReflection_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_75AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnUpgradeSlot*                       K2Node_Event_OwningSlot;                           // 0x8(0x8)(ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnRolledUpgradeData                 K2Node_Event_PreviousRolledData;                   // 0x10(0x60)(ConstParm)
	struct FQtnRolledUpgradeData                 K2Node_Event_NewRolledData;                        // 0x70(0x60)(ConstParm)
	float                                        CallFunc_GetValueOfUpgrade_ReturnValue;            // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueOfUpgrade_ReturnValue_1;          // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnVerb*                              CallFunc_GetOwningVerb_ReturnValue;                // 0xD8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnUpgradeSlot*                       K2Node_Event_TargetSlot;                           // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnRolledUpgradeData                 K2Node_Event_RolledData_1;                         // 0xE8(0x60)(ConstParm)
	bool                                         K2Node_Event_LoadedRunProgress;                    // 0x148(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_75AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBubbleShieldVerb_C*                   K2Node_DynamicCast_AsBubble_Shield_Verb;           // 0x150(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_75AE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetValueOfUpgrade_ReturnValue_2;          // 0x15C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueOfUpgrade_ReturnValue_3;          // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_75AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnVerb*                              CallFunc_GetOwningVerb_ReturnValue_1;              // 0x168(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnUpgradeSlot*                       K2Node_Event_PreviousSlot;                         // 0x170(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnRolledUpgradeData                 K2Node_Event_RolledData;                           // 0x178(0x60)(ConstParm)
	class UBubbleShieldVerb_C*                   K2Node_DynamicCast_AsBubble_Shield_Verb_1;         // 0x1D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_75B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnVerb*                              CallFunc_GetOwningVerb_ReturnValue_2;              // 0x1E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBubbleShieldVerb_C*                   K2Node_DynamicCast_AsBubble_Shield_Verb_2;         // 0x1F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


