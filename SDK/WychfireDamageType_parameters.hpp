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

// 0x240 (0x240 - 0x0)
// Function WychfireDamageType.WychfireDamageType_C.ApplyIncomingDamage
struct UWychfireDamageType_C_ApplyIncomingDamage_Params
{
public:
	class AActor*                                ActorToDamage;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnDamageInfo                        IncomingDamageInfo;                                // 0x8(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FQtnDamageInfo                        OutgoingDamageInfo;                                // 0x90(0x88)(Parm, OutParm, ContainsInstancedReference)
	struct FQtnHitReactionInfo                   SuggestedHitReact;                                 // 0x118(0x50)(Parm, OutParm)
	struct FQtnDamageInfo                        CallFunc_ApplyIncomingDamage_outgoingDamageInfo;   // 0x168(0x88)(ContainsInstancedReference)
	struct FQtnHitReactionInfo                   CallFunc_ApplyIncomingDamage_suggestedHitReact;    // 0x1F0(0x50)(None)
};

}
}


