#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB4 (0x494 - 0x3E0)
// WidgetBlueprintGeneratedClass AIHealth_Widget.AIHealth_Widget_C
class UAIHealth_Widget_C : public UQtnHealthBarWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      StatusIconPulse;                                   // 0x3E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      StatusIconPulse_First;                             // 0x3F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_AttributePipContainer_C*           AttributePipContainer;                             // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_HealthBar;                                   // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_StatusBar;                                   // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_StatusBarGlow;                               // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_StatusIconBoss;                              // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_StatusIconBossGlow;                          // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_StatusIconBoss;                            // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Name;                                         // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AQtnPawn*                              bodyPawn;                                          // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                  ThreshholdColor;                                   // 0x440(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UQtnAttributeComponent*                AttributeComp;                                     // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                  ThresholdBGColor;                                  // 0x458(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_AIHealthBarWidgetComponent_C*      OwningComponent;                                   // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UQtnAttribute*>                 ActiveThresholdAttributes;                         // 0x470(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUMGSequencePlayer*                    CurrentPulseSequence;                              // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOptionsDataBag_C*                     CloudOptions;                                      // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HealthBarScale;                                    // 0x490(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIHealth_Widget_C* GetDefaultObj();

	void CalculateHealthBarSize(struct FVector2D* Size, float CallFunc_MapRangeClamped_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue);
	void Resize_Health_Bar(const struct FVector2D& CallFunc_CalculateHealthBarSize_Size, const struct FQtnHealthBarInitializationParameters& K2Node_MakeStruct_QtnHealthBarInitializationParameters);
	void SetupHealthBarTexture(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_BoolToFloat_ReturnValue);
	void BindToAttributes(const TArray<class UQtnAttribute*>& AttributesLocal, int32 Temp_int_Array_Index_Variable, class UQtnAttribute* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UQtnThresholdAttribute* K2Node_DynamicCast_AsQtn_Threshold_Attribute, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAllAttributes_self_CastInput, TArray<class UQtnAttribute*>& CallFunc_GetAllAttributes_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Finished_566CA2154BF7AFDCD19D70A12698F9AC();
	void Finished_213199134EDDA6F8E2C849B5F6FFBB58();
	void StartStatusDamage();
	void LoopStatusDamage();
	void StopStatusDamage();
	void OnAttributeAddedEvent(TSubclassOf<class UQtnAttribute> AttributeClass, class UQtnAttribute* Attribute);
	void Construct();
	void OnStartAttributeDamageEvent();
	void OnStopAttributeDamageEvent();
	void InitHealthBar(bool AlwaysVisible, class UQtnDamageReceptorComponent* DamageReceptor);
	void OnDataBagSettingsChangedEvent(bool IsHealthBarsEnabled, float HealthBarScale);
	void ExecuteUbergraph_AIHealth_Widget(int32 EntryPoint, bool CallFunc_GetFloatingHealthBarsEnabled_IsEnabled_, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetFloatingHealthBarsScale_OutScale, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_1, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TSubclassOf<class UQtnAttribute> K2Node_CustomEvent_attributeClass, class UQtnAttribute* K2Node_CustomEvent_Attribute, class UAttribute_StatusEffectThreshold_Base_C* K2Node_DynamicCast_AsAttribute_Status_Effect_Threshold_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue_3, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_4, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_5, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_BindTextWidgets_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BindBossIconWidgets_ReturnValue, bool K2Node_CustomEvent_alwaysVisible, class UQtnDamageReceptorComponent* K2Node_CustomEvent_damageReceptor, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttribute_self_CastInput, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttribute_self_CastInput_1, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue_1, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess_1, class UQtnAttributeComponent* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_CustomEvent_IsHealthBarsEnabled, float K2Node_CustomEvent_HealthBarScale, bool K2Node_SwitchEnum_CmpSuccess_1, class UOptionsDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, const struct FVector2D& CallFunc_CalculateHealthBarSize_Size, bool CallFunc_BindBarWidgets_ReturnValue, const struct FQtnHealthBarInitializationParameters& K2Node_MakeStruct_QtnHealthBarInitializationParameters, const struct FQtnHealthBarInitializationParameters& K2Node_MakeStruct_QtnHealthBarInitializationParameters_1);
};

}


