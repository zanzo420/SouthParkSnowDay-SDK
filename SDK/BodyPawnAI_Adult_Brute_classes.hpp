#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x15E8 - 0x15D8)
// BlueprintGeneratedClass BodyPawnAI_Adult_Brute.BodyPawnAI_Adult_Brute_C
class ABodyPawnAI_Adult_Brute_C : public ABodyPawnAI_AdultBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnGoalMarkerComponent*               QtnGoalMarker_0;                                   // 0x15E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABodyPawnAI_Adult_Brute_C* GetDefaultObj();

	void BndEvt__DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature(class UQtnDamageReceptorComponent* DamagedReceptor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer);
	void AlivenessEvent(class AQtnBodyPawn* bodyPawn, class AActor* AlivenessInstigator, enum class EQtnBodyAliveness OldBodyAliveness, enum class EQtnBodyAliveness bodyAliveness, bool IsServer);
	void ExecuteUbergraph_BodyPawnAI_Adult_Brute(int32 EntryPoint, bool CallFunc_HasUpgrade_ReturnValue, class UQtnDamageReceptorComponent* K2Node_ComponentBoundEvent_damagedReceptor, const struct FQtnDamageInfo& K2Node_ComponentBoundEvent_damageInfo, const struct FQtnHitReactionInfo& K2Node_ComponentBoundEvent_hitReactionInfo, bool K2Node_ComponentBoundEvent_isServer, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UStatusEffect_Enrage_C* CallFunc_AddStatusEffect_ServerOnly_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AQtnBodyPawn* K2Node_Event_bodyPawn, class AActor* K2Node_Event_alivenessInstigator, enum class EQtnBodyAliveness K2Node_Event_oldBodyAliveness, enum class EQtnBodyAliveness K2Node_Event_bodyAliveness, bool K2Node_Event_isServer, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HasUpgrade_ReturnValue_1, bool CallFunc_HasStatusEffect_ReturnValue_1, class UStatusEffect_Enrage_C* CallFunc_GetStatusEffect_ReturnValue);
};

}


