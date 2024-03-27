#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1B0 - 0x1A8)
// BlueprintGeneratedClass Attribute_SE_BurningThreshold.Attribute_SE_BurningThreshold_C
class UAttribute_SE_BurningThreshold_C : public UAttribute_StatusEffectThreshold_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAttribute_SE_BurningThreshold_C* GetDefaultObj();

	void OnTick(float DeltaTime);
	void ExecuteUbergraph_Attribute_SE_BurningThreshold(int32 EntryPoint, float K2Node_Event_deltaTime, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UObject* CallFunc_GetOwningObject_ReturnValue, class AActor* Temp_object_Variable, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetReferenceActor_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasStatusEffect_ReturnValue, bool CallFunc_IsInDeepSnow_ReturnValue, class UObject* CallFunc_GetOwningObject_ReturnValue_1, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_2, class UClass* CallFunc_GetObjectClass_ReturnValue);
};

}


