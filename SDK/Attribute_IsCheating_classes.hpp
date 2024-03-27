#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xF8 - 0xD0)
// BlueprintGeneratedClass Attribute_IsCheating.Attribute_IsCheating_C
class UAttribute_IsCheating_C : public UQtnAttribute
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            Cheating_Has_Begun;                                // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Cheating_Has_Stopped;                              // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UAttribute_IsCheating_C* GetDefaultObj();

	void OnTriggerHit(int32 Index, float Threshold, enum class EQtnAttributeThresholdDirection Direction);
	void OnRemoved();
	void OnAdded();
	void ExecuteUbergraph_Attribute_IsCheating(int32 EntryPoint, class UObject* CallFunc_GetOwningObject_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 K2Node_Event_index, float K2Node_Event_threshold, enum class EQtnAttributeThresholdDirection K2Node_Event_direction, bool K2Node_SwitchEnum_CmpSuccess, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_2);
	void Cheating_Has_Stopped__DelegateSignature();
	void Cheating_Has_Begun__DelegateSignature();
};

}


