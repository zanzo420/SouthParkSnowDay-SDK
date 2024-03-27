#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x129 - 0x120)
// BlueprintGeneratedClass StatusEffect_Invisibility_AssassinAlly.StatusEffect_Invisibility_AssassinAlly_C
class UStatusEffect_Invisibility_AssassinAlly_C : public UStatusEffect_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x120(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         FX_Started;                                        // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UStatusEffect_Invisibility_AssassinAlly_C* GetDefaultObj();

	void StartFX();
	void OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed);
	void OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator);
	void ExecuteUbergraph_StatusEffect_Invisibility_AssassinAlly(int32 EntryPoint, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_1, class AQtnItem* CallFunc_GetIntendedEquippedWeapon_ReturnValue, class ABaseWeapon_C* K2Node_DynamicCast_AsBase_Weapon, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_2, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_1, class AQtnItem* CallFunc_GetIntendedEquippedWeapon_ReturnValue_1, class ABaseWeapon_C* K2Node_DynamicCast_AsBase_Weapon_1, bool K2Node_DynamicCast_bSuccess_2, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_3, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_4, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base_1, bool K2Node_DynamicCast_bSuccess_3, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue_1, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1, bool K2Node_Event_isActorBeingDestroyed, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_1, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess_4);
};

}


