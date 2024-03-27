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

// 0x338 (0x338 - 0x0)
// Function ExplosionDamageType_SwarmerBomb.ExplosionDamageType_SwarmerBomb_C.ApplyIncomingDamage
struct UExplosionDamageType_SwarmerBomb_C_ApplyIncomingDamage_Params
{
public:
	class AActor*                                ActorToDamage;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnDamageInfo                        IncomingDamageInfo;                                // 0x8(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FQtnDamageInfo                        OutgoingDamageInfo;                                // 0x90(0x88)(Parm, OutParm, ContainsInstancedReference)
	struct FQtnHitReactionInfo                   SuggestedHitReact;                                 // 0x118(0x50)(Parm, OutParm)
	struct FQtnDamageInfo                        CallFunc_ApplyIncomingDamage_outgoingDamageInfo;   // 0x168(0x88)(ContainsInstancedReference)
	struct FQtnHitReactionInfo                   CallFunc_ApplyIncomingDamage_suggestedHitReact;    // 0x1F0(0x50)(None)
	class AActor*                                CallFunc_GetAttachParentActor_ReturnValue;         // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x249(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47A3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetHealth_health;                         // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetHealth_maxHealth;                      // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47A4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_FMax_ReturnValue;                         // 0x258(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_47A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnDamageInfo                        CallFunc_ApplyIncomingDamage_outgoingDamageInfo_1; // 0x260(0x88)(ContainsInstancedReference)
	struct FQtnHitReactionInfo                   CallFunc_ApplyIncomingDamage_suggestedHitReact_1;  // 0x2E8(0x50)(None)
};

}
}


