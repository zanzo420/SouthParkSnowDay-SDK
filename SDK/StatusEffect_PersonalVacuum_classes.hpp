#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x140 - 0x120)
// BlueprintGeneratedClass StatusEffect_PersonalVacuum.StatusEffect_PersonalVacuum_C
class UStatusEffect_PersonalVacuum_C : public UStatusEffect_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x120(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABodyPawnBase_C*                       As_Body_Pawn_Base;                                 // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UQtnUpgrade>               Upgrade_Class;                                     // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AQtnFXActor*                           FX;                                                // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStatusEffect_PersonalVacuum_C* GetDefaultObj();

	void Play_Effects(class AActor* Target_Actor, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue);
	void Get_Speed_Multiplier(class UQtnUpgradeSlot* Upgrade_To_Check, float* Speed_Multiplier, class UQtnUpgrade* CallFunc_GetCurrentSlottedUpgrade_ReturnValue, class UGravityBomb_PersonalVacuum_C* K2Node_DynamicCast_AsGravity_Bomb_Personal_Vacuum, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetValueOfUpgrade_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator);
	void OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed);
	void ExecuteUbergraph_StatusEffect_PersonalVacuum(int32 EntryPoint, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue_1, class UQtnUpgradeSlot* CallFunc_FindUpgrade_ReturnValue, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, bool K2Node_Event_isActorBeingDestroyed, float CallFunc_Get_Speed_Multiplier_Speed_Multiplier, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess);
};

}


