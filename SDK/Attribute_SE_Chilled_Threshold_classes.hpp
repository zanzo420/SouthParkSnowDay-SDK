#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x1C4 - 0x1A8)
// BlueprintGeneratedClass Attribute_SE_Chilled_Threshold.Attribute_SE_Chilled_Threshold_C
class UAttribute_SE_Chilled_Threshold_C : public UAttribute_StatusEffectThreshold_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABodyPawnBase_C*                       As_Body_Pawn_Base;                                 // 0x1B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnFXActor*                           ChilledThresholdFX;                                // 0x1B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CalculatedVal;                                     // 0x1C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAttribute_SE_Chilled_Threshold_C* GetDefaultObj();

	void OnTick(float DeltaTime);
	void OnAdded();
	void OnRemoved();
	void ExecuteUbergraph_Attribute_SE_Chilled_Threshold(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Lerp_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* Temp_object_Variable, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_deltaTime, class UObject* CallFunc_GetOwningObject_ReturnValue, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetReferenceActor_ReturnValue, bool CallFunc_ShouldIncreaseAttribute_ServerOnly_yes, bool CallFunc_ShouldIncreaseAttribute_ServerOnly_canStopTicking, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class UMaterialInstanceDynamic*>& CallFunc_GetOverlayMaterialInstances_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UMaterialInstanceDynamic*>& CallFunc_GetPostProcessMaterialInstances_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, float CallFunc_GetCalculatedThresholdValue_value, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
};

}


