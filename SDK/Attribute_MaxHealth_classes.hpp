#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x108 - 0xD0)
// BlueprintGeneratedClass Attribute_MaxHealth.Attribute_MaxHealth_C
class UAttribute_MaxHealth_C : public UQtnAttribute
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnMaxHealthModified;                               // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnMaxHealthIncreased;                              // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnMaxHealthDecreased;                              // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UAttribute_MaxHealth_C* GetDefaultObj();

	void RecalculateMaxHP(class AQtnBodyPawn* OwningBodyPawn, class AActor* Temp_object_Variable, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_GetOwningObject_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_1, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, const struct FQtnEntityTuningDataRow& CallFunc_GetEntityTuningData_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput, float CallFunc_GetAttributeValue_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput_1, float CallFunc_GetAttributeValue_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, class UObject* CallFunc_GetOwningObject_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_Multiply_FloatFloat_ReturnValue, class AActor* CallFunc_GetReferenceActor_ReturnValue);
	void OnAdded();
	void OnIncreased(float AmountIncreased);
	void MaxHPIncreased(float NewMaxHPScalar, float AmountIncreased);
	void MaxHPDecreased(float NewMaxHPScalar, float AmountDecreased);
	void OnDecreased(float AmountDecreased);
	void MaxHPBonusIncreased(float NewMaxHPBonus, float IncreasedAmount);
	void MaxHPBonusDecreased(float NewMaxHPBonus, float AmountDecreased);
	void ExecuteUbergraph_Attribute_MaxHealth(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* Temp_object_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_2, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue_1, class UQtnAttribute* Temp_object_Variable_1, class UAttribute_MaxHealth_Bonus_C* K2Node_DynamicCast_AsAttribute_Max_Health_Bonus, bool K2Node_DynamicCast_bSuccess_3, class UObject* CallFunc_GetOwningObject_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_2, bool K2Node_DynamicCast_bSuccess_4, class AActor* CallFunc_GetReferenceActor_ReturnValue, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin, float K2Node_Event_amountIncreased, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetCurrentValue_ReturnValue, float CallFunc_GetCurrentValue_ReturnValue_1, class UQtnAttribute* Temp_object_Variable_2, class UAttribute_MaxHealth_Scalar_C* K2Node_DynamicCast_AsAttribute_Max_Health_Scalar, bool K2Node_DynamicCast_bSuccess_5, float K2Node_CustomEvent_NewMaxHPScalar_1, float K2Node_CustomEvent_AmountIncreased, float K2Node_CustomEvent_NewMaxHPScalar, float K2Node_CustomEvent_AmountDecreased_1, float K2Node_Event_amountDecreased, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_CustomEvent_NewMaxHPBonus_1, float K2Node_CustomEvent_IncreasedAmount, float K2Node_CustomEvent_NewMaxHPBonus, float K2Node_CustomEvent_AmountDecreased);
	void OnMaxHealthDecreased__DelegateSignature(float NewMaxHealth, float DecreasedAmount);
	void OnMaxHealthIncreased__DelegateSignature(float NewMaxHealth, float IncreasedAmount);
	void OnMaxHealthModified__DelegateSignature(float NewMaxHealth, float Difference);
};

}


