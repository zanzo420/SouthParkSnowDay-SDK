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

// 0x140 (0x140 - 0x0)
// Function Outcome_PlayerTookDamage.Outcome_PlayerTookDamage_C.K2_CalculateOutcome
struct UOutcome_PlayerTookDamage_C_K2_CalculateOutcome_Params
{
public:
	struct FQtnEventMessage                      EventMessage;                                      // 0x0(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FQtnPlayerOutcomeResult               ReturnValue;                                       // 0x60(0x30)(Parm, OutParm, ReturnParm)
	struct FQtnPlayerOutcomeResult               K2Node_MakeStruct_QtnPlayerOutcomeResult;          // 0x90(0x30)(None)
	float                                        CallFunc_StaticGetEventContextFloat_ReturnValue;   // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_72BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_StaticGetEventWriter_ReturnValue;         // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnBodyPawn*                          K2Node_DynamicCast_AsQtn_Body_Pawn;                // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsOccupiedByPlayer_ReturnValue;           // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_72C0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnPlayerState*                       CallFunc_GetOccupyingPlayerState_ReturnValue;      // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_QtnGetUniqueId_ReturnValue;               // 0xE8(0x28)(ConstParm, HasGetValueTypeHash)
	struct FQtnPlayerOutcomeResult               K2Node_MakeStruct_QtnPlayerOutcomeResult_1;        // 0x110(0x30)(None)
};

}
}


