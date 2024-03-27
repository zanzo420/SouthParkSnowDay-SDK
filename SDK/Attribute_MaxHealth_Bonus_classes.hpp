#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x108 - 0xD0)
// BlueprintGeneratedClass Attribute_MaxHealth_Bonus.Attribute_MaxHealth_Bonus_C
class UAttribute_MaxHealth_Bonus_C : public UQtnAttribute
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnMaxHPBonusIncreased;                             // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ONMaxHPBonusDecreased;                             // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnMaxHPBonusModified;                              // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UAttribute_MaxHealth_Bonus_C* GetDefaultObj();

	void OnIncreased(float AmountIncreased);
	void OnDecreased(float AmountDecreased);
	void ExecuteUbergraph_Attribute_MaxHealth_Bonus(int32 EntryPoint, float CallFunc_GetCurrentValue_ReturnValue, float CallFunc_GetCurrentValue_ReturnValue_1, float K2Node_Event_amountDecreased, float K2Node_Event_amountIncreased, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void OnMaxHPBonusModified__DelegateSignature(float NewMaxHPBonus, float Difference);
	void ONMaxHPBonusDecreased__DelegateSignature(float NewMaxHPBonus, float AmountDecreased);
	void OnMaxHPBonusIncreased__DelegateSignature(float NewMaxHPBonus, float IncreasedAmount);
};

}


