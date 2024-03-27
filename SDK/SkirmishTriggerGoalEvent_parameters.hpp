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

// 0x10 (0x10 - 0x0)
// Function SkirmishTriggerGoalEvent.SkirmishTriggerGoalEvent_C.fireEvent
struct USkirmishTriggerGoalEvent_C_FireEvent_Params
{
public:
	class UQtnGoal*                              Goal_calling_event;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Tag;                                               // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function SkirmishTriggerGoalEvent.SkirmishTriggerGoalEvent_C.OnSkirmishInit
struct USkirmishTriggerGoalEvent_C_OnSkirmishInit_Params
{
public:
	class AQtnSkirmish*                          OwningSkirmish;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function SkirmishTriggerGoalEvent.SkirmishTriggerGoalEvent_C.FireGoalEvent
struct USkirmishTriggerGoalEvent_C_FireGoalEvent_Params
{
public:
	class ASubGoalArchetype_C*                   Goal_calling_event;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnGoal*                              QTN_goal_calling_event;                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Tag;                                               // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x72 (0x72 - 0x0)
// Function SkirmishTriggerGoalEvent.SkirmishTriggerGoalEvent_C.ExecuteUbergraph_SkirmishTriggerGoalEvent
struct USkirmishTriggerGoalEvent_C_ExecuteUbergraph_SkirmishTriggerGoalEvent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_752C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnGoal*                              K2Node_CustomEvent_goal_calling_event_1;           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_Tag_1;                          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0x10)(ZeroConstructor, NoDestructor)
	class AQtnSkirmish*                          K2Node_Event_owningSkirmish;                       // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASubGoalArchetype_C*                   K2Node_CustomEvent_goal_calling_event;             // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnGoal*                              K2Node_CustomEvent_QTN_goal_calling_event;         // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_Tag;                            // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASkirmishBase_C*                       K2Node_DynamicCast_AsSkirmish_Base;                // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_752D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASkirmishWithGoalEvent_C*              K2Node_DynamicCast_AsSkirmish_with_Goal_Event;     // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


