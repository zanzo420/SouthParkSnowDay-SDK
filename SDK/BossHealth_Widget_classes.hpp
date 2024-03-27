#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12C (0x50C - 0x3E0)
// WidgetBlueprintGeneratedClass BossHealth_Widget.BossHealth_Widget_C
class UBossHealth_Widget_C : public UQtnHealthBarWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AddAttribute;                                      // 0x3E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      StatusIconPulse;                                   // 0x3F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      StatusIconPulse_First;                             // 0x3F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_AttributePipContainer_C*           BP_AttributePipContainer;                          // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        DEPRECATED_Hbox_StatusEffect;                      // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DEPRECATED_Image_HealthBar_1;                      // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DEPRECATED_Image_StatusBar;                        // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DEPRECATED_Image_StatusBar_1;                      // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DEPRECATED_Image_StatusBarGlow;                    // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DEPRECATED_Image_StatusBarGlow_1;                  // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DEPRECATED_Image_StatusIconAI;                     // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DEPRECATED_Image_StatusIconAIGlow;                 // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DEPRECATED_Image_StatusIconBoss;                   // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DEPRECATED_Image_StatusIconBoss_1;                 // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DEPRECATED_Image_StatusIconBossGlow;               // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DEPRECATED_Image_StatusIconBossGlow_1;             // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              DEPRECATED_Overlay_StatusIconAI;                   // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              DEPRECATED_Overlay_StatusIconBoss;                 // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              DEPRECATED_Overlay_StatusIconBoss_1;               // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            DEPRECATED_TEXT_NAME;                              // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_264;                                         // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_HealthBar;                                   // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Hint;                                      // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_BossHint;                                     // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_BossName;                                     // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AQtnPawn*                              bodyPawn;                                          // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                  ThreshholdColor;                                   // 0x4C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UQtnAttributeComponent*                AttributeComp;                                     // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                  ThresholdBGColor;                                  // 0x4D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_AIHealthBarWidgetComponent_C*      OwningComponent;                                   // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UQtnAttribute*>                 ActiveThresholdAttributes;                         // 0x4F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUMGSequencePlayer*                    CurrentPulseSequence;                              // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AnimCurrentTime;                                   // 0x508(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBossHealth_Widget_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTBossHealth_Widget_0();
	void ResetAttributeAppearances(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void BindToAttributes(const TArray<class UQtnAttribute*>& AttributesLocal, int32 Temp_int_Array_Index_Variable, class UQtnAttribute* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyToBlame_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAllAttributes_self_CastInput, TArray<class UQtnAttribute*>& CallFunc_GetAllAttributes_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Finished_4F3FB20B4731016B5C854B8DE68E726B();
	void InitBossHealthBar(bool AlwaysVisible, class UQtnDamageReceptorComponent* DamageReceptor);
	void Construct();
	void StartStatusDamage();
	void LoopStatusDamage();
	void StopStatusDamage();
	void OnAttributeAddedEvent(TSubclassOf<class UQtnAttribute> AttributeClass, class UQtnAttribute* Attribute);
	void AnimSeq_AddAttribute(bool Adding, class UBP_GenericAttributePipWidget_C* SourceWidget);
	void EventRepeater();
	void OnStartAttributeDamageEvent();
	void OnStopAttributeDamageEvent();
	void UpdateBossHint(class FText SubGoal);
	void ExecuteUbergraph_BossHealth_Widget(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool K2Node_CustomEvent_alwaysVisible, class UQtnDamageReceptorComponent* K2Node_CustomEvent_damageReceptor, class AActor* CallFunc_GetOwner_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, class UQtnAttributeComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_1, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, enum class ESlateVisibility Temp_byte_Variable_1, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_3, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_4, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_5, bool Temp_bool_Variable, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TSubclassOf<class UQtnAttribute> K2Node_CustomEvent_attributeClass, class UQtnAttribute* K2Node_CustomEvent_Attribute, class UAttribute_StatusEffectThreshold_Base_C* K2Node_DynamicCast_AsAttribute_Status_Effect_Threshold_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsAnimationPlayingForward_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, const struct FQtnHealthBarInitializationParameters& K2Node_MakeStruct_QtnHealthBarInitializationParameters, bool K2Node_CustomEvent_Adding, class UBP_GenericAttributePipWidget_C* K2Node_CustomEvent_SourceWidget, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BindBarWidgets_ReturnValue, bool CallFunc_BindTextWidgets_ReturnValue, bool CallFunc_BindBossIconWidgets_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttribute_self_CastInput, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttribute_self_CastInput_1, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_BindStandardIconWidgets_ReturnValue, class FText K2Node_CustomEvent_SubGoal, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_Lerp_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
};

}


