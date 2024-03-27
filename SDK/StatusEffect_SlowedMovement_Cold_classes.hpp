#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x100 - 0xF0)
// BlueprintGeneratedClass StatusEffect_SlowedMovement_Cold.StatusEffect_SlowedMovement_Cold_C
class UStatusEffect_SlowedMovement_Cold_C : public UQtnStatusEffect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        MaxSpeedMultiplier;                                // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CustomDuration;                                    // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStatusEffect_SlowedMovement_Cold_C* GetDefaultObj();

	void Init_Slow_and_Duration(float MaxSpeedMultiplier, float CustomDuration);
	void OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator);
	void OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed);
	void ExecuteUbergraph_StatusEffect_SlowedMovement_Cold(int32 EntryPoint, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, bool K2Node_Event_isActorBeingDestroyed, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_1, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue_1, bool CallFunc_IsServer_ReturnValue);
};

}


