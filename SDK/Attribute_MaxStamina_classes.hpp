#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xD8 - 0xD0)
// BlueprintGeneratedClass Attribute_MaxStamina.Attribute_MaxStamina_C
class UAttribute_MaxStamina_C : public UQtnAttribute
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAttribute_MaxStamina_C* GetDefaultObj();

	void RefreshMaxStamina(float CallFunc_GetCurrentValue_ReturnValue, class UObject* CallFunc_GetOwningObject_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess);
	void OnAdded();
	void OnDecreased(float AmountDecreased);
	void OnIncreased(float AmountIncreased);
	void ExecuteUbergraph_Attribute_MaxStamina(int32 EntryPoint, float K2Node_Event_amountDecreased, float K2Node_Event_amountIncreased);
};

}


