#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xE0 - 0xD8)
// BlueprintGeneratedClass Attribute_Rage.Attribute_Rage_C
class UAttribute_Rage_C : public UQtnAttributeRage
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAttribute_Rage_C* GetDefaultObj();

	void OnDecreased(float AmountDecreased);
	void ExecuteUbergraph_Attribute_Rage(int32 EntryPoint, class AActor* Temp_object_Variable, float CallFunc_GetRagaholic_Scaler_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetUpgrade_Ragaholic_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, float K2Node_Event_amountDecreased, class UObject* CallFunc_GetOwningObject_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetReferenceActor_ReturnValue);
};

}


