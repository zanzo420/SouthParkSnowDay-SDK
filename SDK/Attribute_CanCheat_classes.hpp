#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0xF9 - 0xD0)
// BlueprintGeneratedClass Attribute_CanCheat.Attribute_CanCheat_C
class UAttribute_CanCheat_C : public UQtnAttribute
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            Cheating_Now_Disallowed;                           // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Cheating_Now_Allowed;                              // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Temp_Tick_Cheating_Disallowed;                     // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAttribute_CanCheat_C* GetDefaultObj();

	void OnAdded();
	void OnRemoved();
	void OnTriggerHit(int32 Index, float Threshold, enum class EQtnAttributeThresholdDirection Direction);
	void OnDecreased(float AmountDecreased);
	void OnIncreased(float AmountIncreased);
	void ExecuteUbergraph_Attribute_CanCheat(int32 EntryPoint, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin, class UObject* CallFunc_GetOwningObject_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_1, int32 K2Node_Event_index, float K2Node_Event_threshold, enum class EQtnAttributeThresholdDirection K2Node_Event_direction, bool K2Node_SwitchInteger_CmpSuccess, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin_2, bool K2Node_SwitchEnum_CmpSuccess_2, class UObject* CallFunc_GetOwningObject_ReturnValue_1, float K2Node_Event_amountDecreased, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_3, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_GetCurrentValue_ReturnValue, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, float K2Node_Event_amountIncreased, float CallFunc_GetCurrentValue_ReturnValue_1, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin_4, bool CallFunc_Greater_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_4, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void Cheating_Now_Allowed__DelegateSignature();
	void Cheating_Now_Disallowed__DelegateSignature();
};

}


