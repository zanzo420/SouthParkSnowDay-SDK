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

// 0x1C0 (0x1C0 - 0x0)
// Function GrossOutDamageType.GrossOutDamageType_C.ApplyIncomingDamage
struct UGrossOutDamageType_C_ApplyIncomingDamage_Params
{
public:
	class AActor*                                ActorToDamage;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnDamageInfo                        IncomingDamageInfo;                                // 0x8(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FQtnDamageInfo                        OutgoingDamageInfo;                                // 0x90(0x88)(Parm, OutParm, ContainsInstancedReference)
	struct FQtnHitReactionInfo                   SuggestedHitReact;                                 // 0x118(0x50)(Parm, OutParm)
	bool                                         CallFunc_Test_Whether_Normal_Status_Effect_Thresholding_Should_Apply_Thresholding_Should_Apply; // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6E9B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnHitReactionInfo                   CallFunc_GetDefaultHitReaction_suggestedHitReact;  // 0x170(0x50)(None)
};

}
}


