#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x130 - 0x120)
// BlueprintGeneratedClass StatusEffect_LowBurn.StatusEffect_LowBurn_C
class UStatusEffect_LowBurn_C : public UStatusEffect_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x120(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        DamagePerSecond;                                   // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Duration;                                          // 0x12C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStatusEffect_LowBurn_C* GetDefaultObj();

	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_MakeLiteralString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator);
	void OnStatusEffectTick(float DeltaSeconds);
	void OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed);
	void ExecuteUbergraph_StatusEffect_LowBurn(int32 EntryPoint, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, float K2Node_Event_DeltaSeconds, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, bool K2Node_Event_isActorBeingDestroyed, class AQtnPawn* CallFunc_GetStatusInstigator_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_1, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, float CallFunc_Add_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_2, float CallFunc_GetRemainingTime_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


