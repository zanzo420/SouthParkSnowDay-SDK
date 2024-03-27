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

// 0x80 (0x80 - 0x0)
// Function BodyPawnAIRangedChaff.BodyPawnAIRangedChaff_C.HandleDeath
struct ABodyPawnAIRangedChaff_C_HandleDeath_Params
{
public:
	struct FGameplayTag                          CallFunc_MakeLiteralGameplayTag_ReturnValue;       // 0x0(0x8)(NoDestructor, HasGetValueTypeHash)
	class AQtnPawn*                              CallFunc_GetLastDamagingCulprit_ReturnValue;       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABodyPawnPlayer_C*                     K2Node_DynamicCast_AsBody_Pawn_Player;             // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6FB6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnEventMessage                      CallFunc_StaticMakeEventMessage_ReturnValue;       // 0x20(0x60)(None)
};

}
}


