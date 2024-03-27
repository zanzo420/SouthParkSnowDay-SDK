#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x170 - 0x160)
// BlueprintGeneratedClass StatusEffect_NecroCheesed.StatusEffect_NecroCheesed_C
class UStatusEffect_NecroCheesed_C : public UStatusEffect_Cheesed_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x160(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AQtnFXActor*                           NecroCheeseFX;                                     // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStatusEffect_NecroCheesed_C* GetDefaultObj();

	void OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed);
	void OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator);
	void ToggleNecroCheeseFX(bool On);
	void ExecuteUbergraph_StatusEffect_NecroCheesed(int32 EntryPoint, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1, bool K2Node_Event_isActorBeingDestroyed, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool K2Node_CustomEvent_On, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_1, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_2);
};

}


