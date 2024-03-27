#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x2F0 - 0x260)
// WidgetBlueprintGeneratedClass ButtersTopNavButton_Widget.ButtersTopNavButton_Widget_C
class UButtersTopNavButton_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hover;                                             // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_Tab;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ButtonImage;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Label;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Selected;                                          // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F3[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Hover_Current_Time;                                // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Label;                                             // 0x290(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            TopNavButtonClicked;                               // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSelected;                                        // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AQtnPlayerUI*                          Local_Player_UI;                                   // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DefaultColor;                                      // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_F4[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    BrushMat;                                          // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UButtersTopNavButton_Widget_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTButtersTopNavButton_Widget_0();
	void CacheQtnLocalPlayerUI(bool CallFunc_IsLocalPlayerUIReadyBP_ReturnValue, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess);
	void HoverRepeater();
	void AnimSeq_Hover(bool CurrentlyHovered);
	void BndEvt__OptionsTopNav_Widget_Button_Tab_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__OptionsTopNav_Widget_Button_Tab_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void OnInitialized();
	void TopNav_UpdateSelected(bool IsSelected);
	void BndEvt__OptionsTopNav_Widget_Button_Tab_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_ButtersTopNavButton_Widget(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_CurrentlyHovered, bool CallFunc_IsAnimationPlayingForward_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_isSelected, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, bool CallFunc_IsLocalPlayerUIReadyBP_ReturnValue, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, float CallFunc_Conv_BoolToFloat_ReturnValue);
	void OnSelected__DelegateSignature(bool IsSelected);
	void TopNavButtonClicked__DelegateSignature(int32 ClickedIndex);
};

}


