#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x12C - 0x120)
// BlueprintGeneratedClass StatusEffect_Revive.StatusEffect_Revive_C
class UStatusEffect_Revive_C : public UStatusEffect_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x120(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        DelayTimer;                                        // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStatusEffect_Revive_C* GetDefaultObj();

	void OnStatusEffectTick(float DeltaSeconds);
	void OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator);
	void ExecuteUbergraph_StatusEffect_Revive(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, bool CallFunc_IsHero_ReturnValue, class AQtnPawn* CallFunc_GetLastDamagingCulprit_ReturnValue, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_1, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_2, bool CallFunc_IsDead_canBeRevived, bool CallFunc_IsDead_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
};

}


