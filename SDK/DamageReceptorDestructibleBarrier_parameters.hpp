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
// Function DamageReceptorDestructibleBarrier.DamageReceptorDestructibleBarrier_C.PreProcessIncomingDamage
struct UDamageReceptorDestructibleBarrier_C_PreProcessIncomingDamage_Params
{
public:
	struct FQtnDamageInfo                        IncomingDamageInfo;                                // 0x0(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FQtnHitReactionInfo                   DamageSuggestedHitReact;                           // 0x88(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FQtnDamageInfo                        OutgoingDamageInfo;                                // 0xD8(0x88)(Parm, OutParm, ContainsInstancedReference)
	struct FQtnHitReactionInfo                   ActualHitReact;                                    // 0x160(0x50)(Parm, OutParm)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnFXActor*                           CallFunc_BP_BeginEffect_ReturnValue;               // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


