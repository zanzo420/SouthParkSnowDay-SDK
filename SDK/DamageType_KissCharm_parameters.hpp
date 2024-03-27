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

// 0x2C8 (0x2C8 - 0x0)
// Function DamageType_KissCharm.DamageType_KissCharm_C.ApplyIncomingDamage
struct UDamageType_KissCharm_C_ApplyIncomingDamage_Params
{
public:
	class AActor*                                ActorToDamage;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnDamageInfo                        IncomingDamageInfo;                                // 0x8(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FQtnDamageInfo                        OutgoingDamageInfo;                                // 0x90(0x88)(Parm, OutParm, ContainsInstancedReference)
	struct FQtnHitReactionInfo                   SuggestedHitReact;                                 // 0x118(0x50)(Parm, OutParm)
	struct FQtnDamageInfo                        CallFunc_ApplyIncomingDamage_outgoingDamageInfo;   // 0x168(0x88)(ContainsInstancedReference)
	struct FQtnHitReactionInfo                   CallFunc_ApplyIncomingDamage_suggestedHitReact;    // 0x1F0(0x50)(None)
	struct FQtnEventMessage                      CallFunc_StaticMakeEventMessage_ReturnValue;       // 0x240(0x60)(None)
	class AQtnBodyPawn*                          K2Node_DynamicCast_AsQtn_Body_Pawn;                // 0x2A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x2A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6E94[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnDamageReceptorComponent*           CallFunc_GetDamageReceptor_ReturnValue;            // 0x2B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Test_Whether_Normal_Status_Effect_Thresholding_Should_Apply_Thresholding_Should_Apply; // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6E95[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStatusEffect_Charmed_C*               CallFunc_AddStatusEffect_ServerOnly_ReturnValue;   // 0x2C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


