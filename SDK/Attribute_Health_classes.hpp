#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x108 - 0xD0)
// BlueprintGeneratedClass Attribute_Health.Attribute_Health_C
class UAttribute_Health_C : public UQtnAttribute
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnHealthDepleted;                                  // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHealthIncreased;                                 // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHealthDecreased;                                 // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UAttribute_Health_C* GetDefaultObj();

	void OnMaxHPDecreased(float New_Max_Health, float Decreased_Amount, class UObject* CallFunc_GetOwningObject_ReturnValue, float CallFunc_GetCurrentValue_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void OnMaxHPIncreased(float New_Max_Health, float Increased_Amount, class UObject* CallFunc_GetOwningObject_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess);
	float OverrideSetCurrentValue(float NewValue, class UObject* CallFunc_GetOwningObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetOwningInterface_ReturnValue, float CallFunc_GetAttributeMin_ReturnValue, bool CallFunc_HasAttribute_ReturnValue, float CallFunc_GetAttributeValue_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_FMax_ReturnValue);
	void OnTriggerHit(int32 Index, float Threshold, enum class EQtnAttributeThresholdDirection Direction);
	void OnIncreased(float AmountIncreased);
	void OnDecreased(float AmountDecreased);
	void OnAdded();
	void MaxHPIncreased(float NewMaxHealth, float IncreasedAmount);
	void MaxHPModified(float NewMaxHealth, float Difference);
	void MaxHPDecreased(float NewMaxHealth, float DecreasedAmount);
	void ExecuteUbergraph_Attribute_Health(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* Temp_object_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, int32 K2Node_Event_index, float K2Node_Event_threshold, enum class EQtnAttributeThresholdDirection K2Node_Event_direction, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchInteger_CmpSuccess, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue, float K2Node_Event_amountIncreased, float K2Node_Event_amountDecreased, class UQtnAttribute* Temp_object_Variable_1, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UAttribute_MaxHealth_C* K2Node_DynamicCast_AsAttribute_Max_Health, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetOwningInterface_ReturnValue, class UObject* CallFunc_GetOwningObject_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_3, class AActor* CallFunc_GetReferenceActor_ReturnValue, float K2Node_CustomEvent_NewMaxHealth_2, float K2Node_CustomEvent_IncreasedAmount, float K2Node_CustomEvent_NewMaxHealth_1, float K2Node_CustomEvent_Difference, float K2Node_CustomEvent_NewMaxHealth, float K2Node_CustomEvent_DecreasedAmount, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_1);
	void OnHealthDecreased__DelegateSignature(float Amount_Decreased, class UAttribute_Health_C* Attribute_Taking_Damage);
	void OnHealthIncreased__DelegateSignature(float AmountIncreased, class UAttribute_Health_C* HealthAttribute);
	void OnHealthDepleted__DelegateSignature();
};

}


