#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x26 (0x150 - 0x12A)
// BlueprintGeneratedClass StatusEffect_MarshwalkerClericDeathProof.StatusEffect_MarshwalkerClericDeathProof_C
class UStatusEffect_MarshwalkerClericDeathProof_C : public UStatusEffect_DeathProof_C
{
public:
	uint8                                        Pad_BBA[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABodyPawnAICleric_Marshwalker_C*       ClericBody;                                        // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AClericWeapon_Marshwalker_C*           MarshwalkerStaff;                                  // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AQtnFXActor*                           ImmunityFX;                                        // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStatusEffect_MarshwalkerClericDeathProof_C* GetDefaultObj();

	void OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator);
	void OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed);
	void OnStatusEffectTick(float DeltaSeconds);
	void ExecuteUbergraph_StatusEffect_MarshwalkerClericDeathProof(int32 EntryPoint, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, class ABodyPawnAICleric_Marshwalker_C* K2Node_DynamicCast_AsBody_Pawn_AICleric_Marshwalker, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, bool K2Node_Event_isActorBeingDestroyed, class AQtnItem* CallFunc_GetActualEquippedItem_ReturnValue, class AClericWeapon_Marshwalker_C* K2Node_DynamicCast_AsCleric_Weapon_Marshwalker, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetAffectedActor_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
};

}


