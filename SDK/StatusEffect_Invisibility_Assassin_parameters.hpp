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

// 0x4 (0x4 - 0x0)
// Function StatusEffect_Invisibility_Assassin.StatusEffect_Invisibility_Assassin_C.OnStatusEffectTick
struct UStatusEffect_Invisibility_Assassin_C_OnStatusEffectTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function StatusEffect_Invisibility_Assassin.StatusEffect_Invisibility_Assassin_C.OnStatusEffectEnd
struct UStatusEffect_Invisibility_Assassin_C_OnStatusEffectEnd_Params
{
public:
	class AActor*                                AffectedActor;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnPawn*                              Instigator;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsActorBeingDestroyed;                             // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function StatusEffect_Invisibility_Assassin.StatusEffect_Invisibility_Assassin_C.OnStatusEffectBegin
struct UStatusEffect_Invisibility_Assassin_C_OnStatusEffectBegin_Params
{
public:
	class AActor*                                AffectedActor;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnPawn*                              Instigator;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xEC (0xEC - 0x0)
// Function StatusEffect_Invisibility_Assassin.StatusEffect_Invisibility_Assassin_C.ExecuteUbergraph_StatusEffect_Invisibility_Assassin
struct UStatusEffect_Invisibility_Assassin_C_ExecuteUbergraph_StatusEffect_Invisibility_Assassin_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          CallFunc_GetAffectedBody_ReturnValue;              // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnBodyPawn*                          CallFunc_GetAffectedBody_ReturnValue_1;            // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABodyPawnBase_C*                       K2Node_DynamicCast_AsBody_Pawn_Base;               // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_66FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnCharacterAppearanceComponent*      CallFunc_GetBodyAppearanceComponent_ReturnValue;   // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnBodyPawn*                          CallFunc_GetAffectedBody_ReturnValue_2;            // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnDamageReceptorComponent*           CallFunc_GetDamageReceptor_ReturnValue;            // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasUpgrade_ReturnValue;                   // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EQtnOutputYesNoEnum               CallFunc_IsObjectOfType_outputPin;                 // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66FD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABodyPawnBase_C*                       K2Node_DynamicCast_AsBody_Pawn_Base_1;             // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_66FE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnItem*                              CallFunc_GetIntendedEquippedWeapon_ReturnValue;    // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnCharacterAppearanceComponent*      CallFunc_GetBodyAppearanceComponent_ReturnValue_1; // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseWeapon_C*                         K2Node_DynamicCast_AsBase_Weapon;                  // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_66FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          CallFunc_GetAffectedBody_ReturnValue_3;            // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnFXActor*                           CallFunc_BP_BeginEffect_ReturnValue;               // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6700[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_affectedActor_1;                      // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnPawn*                              K2Node_Event_instigator_1;                         // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_isActorBeingDestroyed;                // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6701[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_affectedActor;                        // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnPawn*                              K2Node_Event_instigator;                           // 0xB0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnBodyPawn*                          K2Node_DynamicCast_AsQtn_Body_Pawn;                // 0xB8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6702[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          CallFunc_GetAffectedBody_ReturnValue_4;            // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnDamageReceptorComponent*           CallFunc_GetDamageReceptor_ReturnValue_1;          // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnItem*                              CallFunc_GetIntendedEquippedWeapon_ReturnValue_1;  // 0xD8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseWeapon_C*                         K2Node_DynamicCast_AsBase_Weapon_1;                // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasUpgrade_ReturnValue_1;                 // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EQtnOutputYesNoEnum               CallFunc_IsObjectOfType_outputPin_1;               // 0xEA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0xEB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


