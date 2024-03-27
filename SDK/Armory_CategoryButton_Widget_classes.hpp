#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xDC (0x33C - 0x260)
// WidgetBlueprintGeneratedClass Armory_CategoryButton_Widget.Armory_CategoryButton_Widget_C
class UArmory_CategoryButton_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_0;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Card1;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Card2;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Focus;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Affordance1;                                  // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Affordance2;                                  // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Label;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInterface*                    Card1_Mat;                                         // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Card1_Art;                                         // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Card2_Mat;                                         // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Card2_Art;                                         // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Label;                                             // 0x2C0(0x18)(Edit, BlueprintVisible)
	enum class EUI_ArmoryCategory_Enum           ArmoryCategory;                                    // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EQtn_EquipmentCategory            EquipmentCategory;                                 // 0x2D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5673[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            CategoryButtonFocused;                             // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            CategoryButtonSelected;                            // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Disabled;                                          // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5674[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Hover_Current_Time;                                // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer_Handle;                                      // 0x308(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TimerHandle;                                       // 0x310(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         TrainingPulse;                                     // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5675[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Cached_CardColor1;                                 // 0x31C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Cached_CardColor2;                                 // 0x32C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UArmory_CategoryButton_Widget_C* GetDefaultObj();

	void Training_ResetCardColor(class UImage* Card, const struct FLinearColor& CachedColor, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void Training_PulseCardColor(class UImage* Card, const struct FLinearColor& CachedColor, float CallFunc_GetGameTimeInSeconds_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Sin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue);
	void Training_CacheOriginalCardColor(class UImage* Card, struct FLinearColor* Color, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void ToggleAffordanceVisibility(bool WantShown, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UPanelWidget* CallFunc_GetParent_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UPanelWidget* CallFunc_GetParent_ReturnValue_1);
	void InitializeLabel(class FText Label);
	void RefreshCardArts(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1);
	void InitializeCards(const struct FLinearColor& CallFunc_Training_CacheOriginalCardColor_Color, const struct FLinearColor& CallFunc_Training_CacheOriginalCardColor_Color_1);
	void Completed_758019064975A5545BB68589B615198A(float Value);
	void Tick_758019064975A5545BB68589B615198A(float Value);
	void Completed_C468D2BD4593CEA325BC7493AA70B18B(float Value);
	void Tick_C468D2BD4593CEA325BC7493AA70B18B(float Value);
	void AnimSeq_Hover(bool IsHovered);
	void ClearHover();
	void BndEvt__Armory_CategoryButton_Widget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Armory_CategoryButton_Widget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Armory_CategoryButton_Widget_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void RefreshHover(bool IsHovered);
	void InitalizeButton();
	void RefreshAffordance();
	void ToggleDisabled(bool WantDisabled);
	void StartTrainingHighlight();
	void UnbindTrainingEvent();
	void CategoryButtonFocused_Event(class UArmory_CategoryButton_Widget_C* HoveredWidget, bool IsHovered);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_Armory_CategoryButton_Widget(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_Value_2, float Temp_float_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float K2Node_CustomEvent_Value_1, float K2Node_CustomEvent_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float Temp_float_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool Temp_bool_Has_Been_Initd_Variable_1, bool K2Node_CustomEvent_IsHovered_2, bool Temp_bool_IsClosed_Variable_1, class UQtnAsyncInterpolateValue* CallFunc_AsyncInterpolateValue_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UQtnAsyncInterpolateValue* CallFunc_AsyncInterpolateValue_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, float K2Node_CustomEvent_Value_3, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_IsHovered_1, const class FString& CallFunc_GetButtonGlyphFromBodyAction_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_GetButtonGlyphFromBodyAction_ReturnValue_1, const class FString& CallFunc_GetButtonGlyphFromBodyAction_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_GetButtonGlyphFromBodyAction_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_3, bool K2Node_CustomEvent_WantDisabled, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_4, float CallFunc_Conv_BoolToFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UArmory_CategoryButton_Widget_C* K2Node_CustomEvent_HoveredWidget, bool K2Node_CustomEvent_IsHovered, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, const struct FSlateColor& K2Node_Select_Default_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_SwitchEnum_CmpSuccess_1);
	void CategoryButtonSelected__DelegateSignature(class UArmory_CategoryButton_Widget_C* SelectedWidget);
	void CategoryButtonFocused__DelegateSignature(class UArmory_CategoryButton_Widget_C* HoveredWidget, bool IsHovered);
};

}


