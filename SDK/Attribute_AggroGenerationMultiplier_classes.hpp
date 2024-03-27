#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xD8 - 0xD0)
// BlueprintGeneratedClass Attribute_AggroGenerationMultiplier.Attribute_AggroGenerationMultiplier_C
class UAttribute_AggroGenerationMultiplier_C : public UQtnAttribute
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAttribute_AggroGenerationMultiplier_C* GetDefaultObj();

	void OnAdded();
	void OnRemoved();
	void ExecuteUbergraph_Attribute_AggroGenerationMultiplier(int32 EntryPoint, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin, bool K2Node_SwitchEnum_CmpSuccess, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin_1, class UObject* CallFunc_GetOwningObject_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


