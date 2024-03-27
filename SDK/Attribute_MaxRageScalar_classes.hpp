#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xD8 - 0xD0)
// BlueprintGeneratedClass Attribute_MaxRageScalar.Attribute_MaxRageScalar_C
class UAttribute_MaxRageScalar_C : public UQtnAttribute
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAttribute_MaxRageScalar_C* GetDefaultObj();

	void Recalculate_Max_Rage(class AActor* Temp_object_Variable, class UObject* CallFunc_GetOwningObject_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetReferenceActor_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetCurrentValue_ReturnValue, class UQtnAttributeComponent* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput, float CallFunc_GetAttributeValue_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_Multiply_FloatFloat_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_2, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeMax_self_CastInput, float CallFunc_GetAttributeMax_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput_1, float CallFunc_GetAttributeValue_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void OnIncreased(float AmountIncreased);
	void OnDecreased(float AmountDecreased);
	void Recalculate_Rage();
	void ExecuteUbergraph_Attribute_MaxRageScalar(int32 EntryPoint, float K2Node_Event_amountIncreased, float K2Node_Event_amountDecreased);
};

}


