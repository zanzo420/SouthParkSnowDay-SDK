#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4C (0x2AC - 0x260)
// WidgetBlueprintGeneratedClass SliderHairColor_Widget.SliderHairColor_Widget_C
class USliderHairColor_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_SliderHair;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAnalogSlider*                         SLIDER_Color_Gamepad;                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               SLIDER_Color_MK;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_Color;                              // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            HairColorChanged;                                  // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            SliderHairColorHoverChanged;                       // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        HairColor;                                         // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USliderHairColor_Widget_C* GetDefaultObj();

	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Construct();
	void BndEvt__HairColorWidget_SLIDER_Color_MK_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__HairColorWidget_SLIDER_Color_Gamepad_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void BndEvt__HairColorWidget_SLIDER_Color_MK_K2Node_ComponentBoundEvent_4_OnMouseCaptureEndEvent__DelegateSignature();
	void Save_Slider_Settings();
	void Input_Change(bool Is_Mouse_and_Keyboard);
	void BndEvt__HairColorWidget_Button_SliderHair_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__HairColorWidget_Button_SliderHair_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SliderHairColor_Widget_Button_SliderHair_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
	void ExecuteUbergraph_SliderHairColor_Widget(int32 EntryPoint, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, class UQtnBodyDataBag* CallFunc_GetBodyDataBag_ReturnValue, float K2Node_ComponentBoundEvent_Value_1, class UBodyDataBag_C* K2Node_DynamicCast_AsBody_Data_Bag, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetHairSettings_hairSettings, float K2Node_ComponentBoundEvent_Value, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool K2Node_CustomEvent_Is_Mouse_and_Keyboard, int32 CallFunc_Conv_BoolToInt_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_2, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData_1, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_1, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData_1, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_3, class UQtnBodyDataBag* CallFunc_GetBodyDataBag_ReturnValue_1, class UBodyDataBag_C* K2Node_DynamicCast_AsBody_Data_Bag_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_GetHairSettings_hairSettings_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_4);
	void SliderHairColorHoverChanged__DelegateSignature(bool IsHovered);
	void HairColorChanged__DelegateSignature(float HairColor);
};

}


