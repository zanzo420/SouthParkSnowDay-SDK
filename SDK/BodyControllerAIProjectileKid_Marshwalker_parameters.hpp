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

// 0x4 (0x4 - 0x0)
// Function BodyControllerAIProjectileKid_Marshwalker.BodyControllerAIProjectileKid_Marshwalker_C.OnThink
struct ABodyControllerAIProjectileKid_Marshwalker_C_OnThink_Params
{
public:
	float                                        TimeSinceLastThought;                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BodyControllerAIProjectileKid_Marshwalker.BodyControllerAIProjectileKid_Marshwalker_C.ExecuteUbergraph_BodyControllerAIProjectileKid_Marshwalker
struct ABodyControllerAIProjectileKid_Marshwalker_C_ExecuteUbergraph_BodyControllerAIProjectileKid_Marshwalker_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E89[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_timeSinceLastThought;                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E8C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          CallFunc_GetBodyPawn_ReturnValue;                  // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnVerbRequest                       K2Node_MakeStruct_QtnVerbRequest;                  // 0x20(0x18)(NoDestructor)
};

}
}


