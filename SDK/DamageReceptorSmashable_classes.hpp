#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x327 - 0x31C)
// BlueprintGeneratedClass DamageReceptorSmashable.DamageReceptorSmashable_C
class UDamageReceptorSmashable_C : public UDamageReceptorArchetype_C
{
public:
	float                                        AccumulatedLocalDamage;                            // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                DefaultDamageColor;                                // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AimAssistActive;                                   // 0x324(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AllowNonPlayerAssist;                              // 0x325(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AimAssistForCollateralOnly;                        // 0x326(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UDamageReceptorSmashable_C* GetDefaultObj();

	bool ShouldAttractAimAssist(class AQtnPawn* AttackingPawn, bool FromCollateralDamage, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool CallFunc_IsHero_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void PreProcessIncomingDamage(struct FQtnDamageInfo& IncomingDamageInfo, struct FQtnHitReactionInfo& DamageSuggestedHitReact, struct FQtnDamageInfo* OutgoingDamageInfo, struct FQtnHitReactionInfo* ActualHitReact, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


