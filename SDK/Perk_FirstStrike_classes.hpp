#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7 (0x88 - 0x81)
// BlueprintGeneratedClass Perk_FirstStrike.Perk_FirstStrike_C
class UPerk_FirstStrike_C : public UQtnPerkArchetype_C
{
public:
	uint8                                        Pad_6DE0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BonusDamagePercent;                                // 0x84(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPerk_FirstStrike_C* GetDefaultObj();

	void CalculateDamageValues(class UQtnVerb* SourceVerb, class AActor* TargetActor, float InBaseDamage, TSubclassOf<class UQtnDamageType> DamageType, float* OutDamageScalar, float* OutBonusDamage, class UQtnAttributeComponent* AttributeComp, bool CallFunc_IsValid_ReturnValue, class UQtnAttributeComponent* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput, float CallFunc_GetAttributeValue_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput_1, float CallFunc_GetAttributeValue_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_HasAttribute_self_CastInput, bool CallFunc_HasAttribute_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_HasAttribute_self_CastInput_1, bool CallFunc_HasAttribute_ReturnValue_1, float CallFunc_GetValueOfPerk_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void ModifyDamageValue(float InDamageAmount, float* OutNewDamageAmount, float CallFunc_GetValueOfPerk_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	float GetPerkValueAtInstanceCount(int32 ValueIndex, int32 InstanceCount, float CallFunc_Multiply_IntFloat_ReturnValue);
};

}


