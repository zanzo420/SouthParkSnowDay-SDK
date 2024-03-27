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

// 0x78 (0x78 - 0x0)
// Function Loot_Container_Parent_Whack.Loot_Container_Parent_Whack_C.HandleDeath
struct ALoot_Container_Parent_Whack_C_HandleDeath_Params
{
public:
	class AQtnPawn*                              CallFunc_GetLastDamagingCulprit_ReturnValue;       // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnEventMessage                      CallFunc_StaticMakeEventMessage_ReturnValue;       // 0x8(0x60)(None)
	class AQtnPawn*                              CallFunc_GetLastDamagingCulprit_ReturnValue_1;     // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsHero_ReturnValue;                       // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F15[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SpawnLoot_ServerOnly_secondsToFinishSpawning; // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function Loot_Container_Parent_Whack.Loot_Container_Parent_Whack_C.HandleDamage
struct ALoot_Container_Parent_Whack_C_HandleDamage_Params
{
public:
	struct FQtnDamageInfo                        DamageInfo;                                        // 0x0(0x88)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FQtnDamageNumberOptionalInfo          K2Node_MakeStruct_QtnDamageNumberOptionalInfo;     // 0x88(0x38)(NoDestructor, ContainsInstancedReference)
	float                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F16[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_DecreaseAttributeValue_self_CastInput;    // 0xC8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F17[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnDamageNumbersSubsystem*            CallFunc_GetWorldSubsystem_ReturnValue;            // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Loot_Container_Parent_Whack.Loot_Container_Parent_Whack_C.UserConstructionScript
struct ALoot_Container_Parent_Whack_C_UserConstructionScript_Params
{
public:
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue;                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE1 (0xE1 - 0x0)
// Function Loot_Container_Parent_Whack.Loot_Container_Parent_Whack_C.BndEvt__Loot_Container_Parent_Whack_DamageReceptorSmashable_K2Node_ComponentBoundEvent_1_QtnIncomingDamageEvent__DelegateSignature
struct ALoot_Container_Parent_Whack_C_BndEvt__Loot_Container_Parent_Whack_DamageReceptorSmashable_K2Node_ComponentBoundEvent_1_QtnIncomingDamageEvent__DelegateSignature_Params
{
public:
	class UQtnDamageReceptorComponent*           DamagedReceptor;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnDamageInfo                        DamageInfo;                                        // 0x8(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FQtnHitReactionInfo                   HitReactionInfo;                                   // 0x90(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         IsServer;                                          // 0xE0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Loot_Container_Parent_Whack.Loot_Container_Parent_Whack_C.BndEvt__QtnAttribute_K2Node_ComponentBoundEvent_1_QtnOnAttributeAddedEvent__DelegateSignature
struct ALoot_Container_Parent_Whack_C_BndEvt__QtnAttribute_K2Node_ComponentBoundEvent_1_QtnOnAttributeAddedEvent__DelegateSignature_Params
{
public:
	TSubclassOf<class UQtnAttribute>             AttributeClass;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UQtnAttribute*                         Attribute;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x119 (0x119 - 0x0)
// Function Loot_Container_Parent_Whack.Loot_Container_Parent_Whack_C.ExecuteUbergraph_Loot_Container_Parent_Whack
struct ALoot_Container_Parent_Whack_C_ExecuteUbergraph_Loot_Container_Parent_Whack_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F18[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnDamageReceptorComponent*           K2Node_ComponentBoundEvent_damagedReceptor;        // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnDamageInfo                        K2Node_ComponentBoundEvent_damageInfo;             // 0x10(0x88)(ConstParm, ContainsInstancedReference)
	struct FQtnHitReactionInfo                   K2Node_ComponentBoundEvent_hitReactionInfo;        // 0x98(0x50)(ConstParm)
	bool                                         K2Node_ComponentBoundEvent_isServer;               // 0xE8(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F19[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xEC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_2F1A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UQtnAttribute>             K2Node_ComponentBoundEvent_attributeClass;         // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UQtnAttribute*                         K2Node_ComponentBoundEvent_attribute;              // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAttribute_Health_C*                   K2Node_DynamicCast_AsAttribute_Health;             // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Loot_Container_Parent_Whack.Loot_Container_Parent_Whack_C.opened__DelegateSignature
struct ALoot_Container_Parent_Whack_C_Opened__DelegateSignature_Params
{
public:
	class ALoot_Container_Parent_Whack_C*        Container;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Opener;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


