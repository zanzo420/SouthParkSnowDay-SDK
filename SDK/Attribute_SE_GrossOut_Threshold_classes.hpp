#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x1C4 - 0x1A8)
// BlueprintGeneratedClass Attribute_SE_GrossOut_Threshold.Attribute_SE_GrossOut_Threshold_C
class UAttribute_SE_GrossOut_Threshold_C : public UAttribute_StatusEffectThreshold_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABodyPawnBase_C*                       As_Body_Pawn_Base;                                 // 0x1B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnFXActor*                           GrossOutThresholdFX;                               // 0x1B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CalculatedVal;                                     // 0x1C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAttribute_SE_GrossOut_Threshold_C* GetDefaultObj();

	void OnTick(float DeltaTime);
	void OnAdded();
	void ExecuteUbergraph_Attribute_SE_GrossOut_Threshold(int32 EntryPoint, float K2Node_Event_deltaTime, bool CallFunc_ShouldIncreaseAttribute_ServerOnly_yes, bool CallFunc_ShouldIncreaseAttribute_ServerOnly_canStopTicking, bool CallFunc_Not_PreBool_ReturnValue, class UObject* CallFunc_GetOwningObject_ReturnValue, class AActor* Temp_object_Variable, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetReferenceActor_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_1, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class UMaterialInstanceDynamic*>& CallFunc_GetPostProcessMaterialInstances_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, float CallFunc_GetCalculatedThresholdValue_value, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

}


