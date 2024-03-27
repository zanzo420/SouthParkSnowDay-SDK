#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x83 - 0x83)
// BlueprintGeneratedClass DoubleDaggers_Laceration.DoubleDaggers_Laceration_C
class UDoubleDaggers_Laceration_C : public UQtnUpgradeArchetype_C
{
public:

	static class UClass* StaticClass();
	static class UDoubleDaggers_Laceration_C* GetDefaultObj();

	void CalculateDamageValues(class UQtnUpgradeSlot* OwningSlot, class UQtnVerb* SourceVerb, class AActor* TargetActor, float InBaseDamage, TSubclassOf<class UQtnDamageType> DamageType, float* OutDamageScalar, float* OutBonusDamage, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, class UMeleeVerbDoubleDaggerAirDive_C* K2Node_DynamicCast_AsMelee_Verb_Double_Dagger_Air_Dive, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasStatusEffect_ReturnValue, class UMeleeVerbDaggerCombo_C* K2Node_DynamicCast_AsMelee_Verb_Dagger_Combo, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetValueOfUpgrade_ReturnValue);
};

}


