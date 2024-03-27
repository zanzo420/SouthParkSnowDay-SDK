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
// Function BodyControllerAICartmanBossGolem.BodyControllerAICartmanBossGolem_C.OnQtnReadyForGameplay
struct ABodyControllerAICartmanBossGolem_C_OnQtnReadyForGameplay_Params
{
public:
	class AQtnBodyPawn*                          bodyPawn;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BodyControllerAICartmanBossGolem.BodyControllerAICartmanBossGolem_C.ExecuteUbergraph_BodyControllerAICartmanBossGolem
struct ABodyControllerAICartmanBossGolem_C_ExecuteUbergraph_BodyControllerAICartmanBossGolem_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnRangedFloat                       K2Node_MakeStruct_QtnRangedFloat;                  // 0x4(0x8)(NoDestructor)
	uint8                                        Pad_2DE7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          K2Node_Event_bodyPawn;                             // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


