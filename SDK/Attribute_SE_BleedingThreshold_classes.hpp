#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1B0 - 0x1A8)
// BlueprintGeneratedClass Attribute_SE_BleedingThreshold.Attribute_SE_BleedingThreshold_C
class UAttribute_SE_BleedingThreshold_C : public UAttribute_StatusEffectThreshold_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAttribute_SE_BleedingThreshold_C* GetDefaultObj();

	void OnAdded();
	void On_Healing(float AmountIncreased, class UAttribute_Health_C* HealthAttribute);
	void ExecuteUbergraph_Attribute_SE_BleedingThreshold(int32 EntryPoint, class UObject* CallFunc_GetOwningObject_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* Temp_object_Variable, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_1, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, float K2Node_CustomEvent_AmountIncreased, class UAttribute_Health_C* K2Node_CustomEvent_healthAttribute, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttribute_self_CastInput, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_HasAttribute_self_CastInput, bool CallFunc_HasAttribute_ReturnValue, class UAttribute_Health_C* K2Node_DynamicCast_AsAttribute_Health, bool K2Node_DynamicCast_bSuccess_2, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin, class UObject* CallFunc_GetOwningObject_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_3, class AActor* CallFunc_GetReferenceActor_ReturnValue);
};

}


