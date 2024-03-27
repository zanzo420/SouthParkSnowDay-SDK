#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x110 - 0xF0)
// BlueprintGeneratedClass StatusEffect_Cheat_Base.StatusEffect_Cheat_Base_C
class UStatusEffect_Cheat_Base_C : public UQtnStatusEffect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnVerb*                              R_sourceVerb;                                      // 0xF8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class UQtn_CheatVerb_Archetype_C*            As_Qtn_Cheat_Verb_Archetype;                       // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FGameplayTag                          BullshitType;                                      // 0x108(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStatusEffect_Cheat_Base_C* GetDefaultObj();

	void OnRep_r_SourceVerb(class UQtn_CheatVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Cheat_Verb_Archetype, bool K2Node_DynamicCast_bSuccess);
	void OnStatusEffectTick(float DeltaSeconds);
	void OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator);
	void OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed);
	void ExecuteUbergraph_StatusEffect_Cheat_Base(int32 EntryPoint, float K2Node_Event_DeltaSeconds, float CallFunc_GetRemainingTime_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, bool K2Node_Event_isActorBeingDestroyed, bool CallFunc_IsServer_ReturnValue, class UQtn_CheatVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Cheat_Verb_Archetype, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, bool CallFunc_IsDoingScriptedAction_fullBody, bool CallFunc_IsDoingScriptedAction_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_3, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_2);
};

}


