#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x130 - 0x120)
// BlueprintGeneratedClass StatusEffect_EmpoweringBlocks.StatusEffect_EmpoweringBlocks_C
class UStatusEffect_EmpoweringBlocks_C : public UStatusEffect_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x120(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AQtnFXActor*                           Empowering_FX;                                     // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStatusEffect_EmpoweringBlocks_C* GetDefaultObj();

	void MULTI_StartEmpoweringBlocks_FX(class AActor* Affected_Actor);
	void MULTI_EndEmpoweringBlocks_FX();
	void OnStatusEffectTick(float DeltaSeconds);
	void OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed);
	void OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator);
	void ExecuteUbergraph_StatusEffect_EmpoweringBlocks(int32 EntryPoint, float CallFunc_GetRemainingTime_ReturnValue, class AActor* K2Node_CustomEvent_Affected_Actor, const class FString& CallFunc_Conv_FloatToString_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1, bool K2Node_Event_isActorBeingDestroyed, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator);
};

}


