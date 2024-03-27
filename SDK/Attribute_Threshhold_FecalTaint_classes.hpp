#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x1C8 - 0x1A8)
// BlueprintGeneratedClass Attribute_Threshhold_FecalTaint.Attribute_Threshhold_FecalTaint_C
class UAttribute_Threshhold_FecalTaint_C : public UAttribute_StatusEffectThreshold_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABodyPawnBase_C*                       As_Body_Pawn_Base;                                 // 0x1B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CalculatedVal;                                     // 0x1B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D6D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnFXActor*                           TaintOverlay;                                      // 0x1C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAttribute_Threshhold_FecalTaint_C* GetDefaultObj();

	void OnTick(float DeltaTime);
	void OnAdded();
	void OnRemoved();
	void ExecuteUbergraph_Attribute_Threshhold_FecalTaint(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* Temp_object_Variable, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_deltaTime, class UObject* CallFunc_GetOwningObject_ReturnValue, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetReferenceActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class UMaterialInstanceDynamic*>& CallFunc_GetOverlayMaterialInstances_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_GetCalculatedThresholdValue_value, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue_1, bool CallFunc_HasStatusEffect_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2);
};

}


