#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xD8 - 0xD0)
// BlueprintGeneratedClass Attribute_WalkSpeedScalar.Attribute_WalkSpeedScalar_C
class UAttribute_WalkSpeedScalar_C : public UQtnAttribute
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAttribute_WalkSpeedScalar_C* GetDefaultObj();

	void OnAdded();
	void OnDecreased(float AmountDecreased);
	void OnIncreased(float AmountIncreased);
	void ExecuteUbergraph_Attribute_WalkSpeedScalar(int32 EntryPoint, class UObject* CallFunc_GetOwningObject_ReturnValue, class AActor* Temp_object_Variable, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetReferenceActor_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess_1, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue, float K2Node_Event_amountDecreased, float K2Node_Event_amountIncreased, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin, float CallFunc_GetCurrentValue_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


