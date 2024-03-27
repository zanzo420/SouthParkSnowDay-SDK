#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA (0x12A - 0x120)
// BlueprintGeneratedClass StatusEffect_DeathProof.StatusEffect_DeathProof_C
class UStatusEffect_DeathProof_C : public UStatusEffect_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x120(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         DontDecreaseThreshold;                             // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         NecroDieOnStatusEffectEnd;                         // 0x129(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UStatusEffect_DeathProof_C* GetDefaultObj();

	void OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator);
	void OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed);
	void OnStatusEffectTick(float DeltaSeconds);
	void ExecuteUbergraph_StatusEffect_DeathProof(int32 EntryPoint, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_1, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, float K2Node_Event_DeltaSeconds, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, bool K2Node_Event_isActorBeingDestroyed, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1);
};

}


