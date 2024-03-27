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
// Function Perk_Tester.Perk_Tester_C.OnDebugDisplay
struct UPerk_Tester_C_OnDebugDisplay_Params
{
public:
	class UQtnDebugWrapper*                      DebugWrapper;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Perk_Tester.Perk_Tester_C.IsPerkEquipped
struct UPerk_Tester_C_IsPerkEquipped_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Perk_Tester.Perk_Tester_C.OnActivatePerkEvent
struct UPerk_Tester_C_OnActivatePerkEvent_Params
{
public:
	class AQtnBodyPawn*                          TargetBodyPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Perk_Tester.Perk_Tester_C.OnDeactivatePerkEvent
struct UPerk_Tester_C_OnDeactivatePerkEvent_Params
{
public:
	class AQtnBodyPawn*                          TargetBodyPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function Perk_Tester.Perk_Tester_C.ExecuteUbergraph_Perk_Tester
struct UPerk_Tester_C_ExecuteUbergraph_Perk_Tester_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7FF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          K2Node_Event_TargetBodyPawn_1;                     // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnBodyPawn*                          K2Node_Event_TargetBodyPawn;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


