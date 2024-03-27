#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x100 - 0xD0)
// BlueprintGeneratedClass Attribute_MaxHealth_Scalar.Attribute_MaxHealth_Scalar_C
class UAttribute_MaxHealth_Scalar_C : public UQtnAttribute
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Default_max_HP;                                    // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F8F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMaxHPScalarIncreased;                            // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnMaxHPScalarDecreased;                            // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UAttribute_MaxHealth_Scalar_C* GetDefaultObj();

	void Recalculate_Max_Health(class AActor* Temp_object_Variable, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCurrentValue_ReturnValue, class UQtnAttributeComponent* CallFunc_GetComponentByClass_ReturnValue, class UObject* CallFunc_GetOwningObject_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput, float CallFunc_GetAttributeValue_ReturnValue, class AActor* CallFunc_GetReferenceActor_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue);
	void OnIncreased(float AmountIncreased);
	void OnDecreased(float AmountDecreased);
	void OnAdded();
	void Save_Out_Default_Max_HP();
	void ExecuteUbergraph_Attribute_MaxHealth_Scalar(int32 EntryPoint, float CallFunc_GetCurrentValue_ReturnValue, class AActor* Temp_object_Variable, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_amountIncreased, const struct FQtnEntityTuningDataRow& CallFunc_GetEntityTuningData_ReturnValue, float K2Node_Event_amountDecreased, float CallFunc_Conv_IntToFloat_ReturnValue, class UObject* CallFunc_GetOwningObject_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetReferenceActor_ReturnValue, float CallFunc_GetCurrentValue_ReturnValue_1);
	void OnMaxHPScalarDecreased__DelegateSignature(float NewMaxHPScalar, float AmountDecreased);
	void OnMaxHPScalarIncreased__DelegateSignature(float NewMaxHPScalar, float AmountIncreased);
};

}


