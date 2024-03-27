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

// 0xD (0xD - 0x0)
// Function DamageReceptorSmashable.DamageReceptorSmashable_C.ShouldAttractAimAssist
struct UDamageReceptorSmashable_C_ShouldAttractAimAssist_Params
{
public:
	class AQtnPawn*                              AttackingPawn;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FromCollateralDamage;                              // 0x8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	enum class EQtnOutputYesNoEnum               CallFunc_IsObjectOfType_outputPin;                 // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsHero_ReturnValue;                       // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1BA (0x1BA - 0x0)
// Function DamageReceptorSmashable.DamageReceptorSmashable_C.PreProcessIncomingDamage
struct UDamageReceptorSmashable_C_PreProcessIncomingDamage_Params
{
public:
	struct FQtnDamageInfo                        IncomingDamageInfo;                                // 0x0(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FQtnHitReactionInfo                   DamageSuggestedHitReact;                           // 0x88(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FQtnDamageInfo                        OutgoingDamageInfo;                                // 0xD8(0x88)(Parm, OutParm, ContainsInstancedReference)
	struct FQtnHitReactionInfo                   ActualHitReact;                                    // 0x160(0x50)(Parm, OutParm)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


