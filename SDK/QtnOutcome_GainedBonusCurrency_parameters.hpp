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

// 0x159 (0x159 - 0x0)
// Function QtnOutcome_GainedBonusCurrency.QtnOutcome_GainedBonusCurrency_C.K2_CalculateOutcome
struct UQtnOutcome_GainedBonusCurrency_C_K2_CalculateOutcome_Params
{
public:
	struct FQtnEventMessage                      EventMessage;                                      // 0x0(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FQtnPlayerOutcomeResult               ReturnValue;                                       // 0x60(0x30)(Parm, OutParm, ReturnParm)
	class UObject*                               CallFunc_StaticGetEventWriter_ReturnValue;         // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_StaticGetEventContextInt_ReturnValue;     // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_72BC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          K2Node_DynamicCast_AsQtn_Body_Pawn;                // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_72BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnPlayerState*                       CallFunc_GetOccupyingPlayerState_ReturnValue;      // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsOccupiedByPlayer_ReturnValue;           // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_72BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_QtnGetUniqueId_ReturnValue;               // 0xC0(0x28)(ConstParm, HasGetValueTypeHash)
	struct FQtnPlayerOutcomeResult               K2Node_MakeStruct_QtnPlayerOutcomeResult;          // 0xE8(0x30)(None)
	struct FQtnPlayerOutcomeResult               K2Node_MakeStruct_QtnPlayerOutcomeResult_1;        // 0x118(0x30)(None)
	struct FGameplayTag                          CallFunc_MakeLiteralGameplayTag_ReturnValue;       // 0x148(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_StaticGetEventContextGameplayTag_ReturnValue; // 0x150(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


