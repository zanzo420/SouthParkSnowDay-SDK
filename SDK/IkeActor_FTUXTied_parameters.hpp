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

// 0xE1 (0xE1 - 0x0)
// Function IkeActor_FTUXTied.IkeActor_FTUXTied_C.BndEvt__IkeActor_FTUXTied_DamageReceptorSmashable_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature
struct AIkeActor_FTUXTied_C_BndEvt__IkeActor_FTUXTied_DamageReceptorSmashable_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature_Params
{
public:
	class UQtnDamageReceptorComponent*           DamagedReceptor;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnDamageInfo                        DamageInfo;                                        // 0x8(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FQtnHitReactionInfo                   HitReactionInfo;                                   // 0x90(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         IsServer;                                          // 0xE0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x89 (0x89 - 0x0)
// Function IkeActor_FTUXTied.IkeActor_FTUXTied_C.BndEvt__IkeActor_FTUXTied_DamageReceptorSmashable_K2Node_ComponentBoundEvent_1_QtnIncomingTootFartEvent__DelegateSignature
struct AIkeActor_FTUXTied_C_BndEvt__IkeActor_FTUXTied_DamageReceptorSmashable_K2Node_ComponentBoundEvent_1_QtnIncomingTootFartEvent__DelegateSignature_Params
{
public:
	struct FQtnDamageInfo                        DamageInfo;                                        // 0x0(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         IsServer;                                          // 0x88(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x192 (0x192 - 0x0)
// Function IkeActor_FTUXTied.IkeActor_FTUXTied_C.ExecuteUbergraph_IkeActor_FTUXTied
struct AIkeActor_FTUXTied_C_ExecuteUbergraph_IkeActor_FTUXTied_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7534[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnDamageInfo                        K2Node_ComponentBoundEvent_damageInfo;             // 0x8(0x88)(ConstParm, ContainsInstancedReference)
	bool                                         K2Node_ComponentBoundEvent_isServer;               // 0x90(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7535[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnDamageReceptorComponent*           K2Node_ComponentBoundEvent_damagedReceptor;        // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnDamageInfo                        K2Node_ComponentBoundEvent_damageInfo_1;           // 0xA0(0x88)(ConstParm, ContainsInstancedReference)
	struct FQtnHitReactionInfo                   K2Node_ComponentBoundEvent_hitReactionInfo;        // 0x128(0x50)(ConstParm)
	bool                                         K2Node_ComponentBoundEvent_isServer_1;             // 0x178(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7536[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIkeRopes_RIG_Skeleton_AnimBlueprint_C* K2Node_DynamicCast_AsIke_Ropes_RIG_Skeleton_Anim_Blueprint; // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


