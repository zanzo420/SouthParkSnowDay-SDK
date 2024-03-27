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

// 0x148 (0x148 - 0x0)
// Function Outcome_PlayerHealed.Outcome_PlayerHealed_C.K2_CalculateOutcome
struct UOutcome_PlayerHealed_C_K2_CalculateOutcome_Params
{
public:
	struct FQtnEventMessage                      EventMessage;                                      // 0x0(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FQtnPlayerOutcomeResult               ReturnValue;                                       // 0x60(0x30)(Parm, OutParm, ReturnParm)
	struct FQtnPlayerOutcomeResult               K2Node_MakeStruct_QtnPlayerOutcomeResult;          // 0x90(0x30)(None)
	float                                        CallFunc_StaticGetEventContextFloat_ReturnValue;   // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_72C8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_StaticGetEventWriter_ReturnValue;         // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnBodyPawn*                          K2Node_DynamicCast_AsQtn_Body_Pawn;                // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_72C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnPlayerState*                       CallFunc_GetOccupyingPlayerState_ReturnValue;      // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_QtnGetUniqueId_ReturnValue;               // 0xE8(0x28)(ConstParm, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_72CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnPlayerOutcomeResult               K2Node_MakeStruct_QtnPlayerOutcomeResult_1;        // 0x118(0x30)(None)
};

}
}


