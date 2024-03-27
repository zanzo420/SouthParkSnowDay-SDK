#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x154 (0x3B4 - 0x260)
// WidgetBlueprintGeneratedClass BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C
class UBP_CapsuleBtn_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Launch;                                            // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FTUX_SinglePulse;                                  // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Training;                                          // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Shake_Seq;                                         // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Shake;                                             // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Shake_Negative;                                    // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_Btn;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Btn;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RichText_Prompt;                                   // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_Text;                                     // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Btn;                                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_TrainingCircle_Widget_C*           UI_TrainingCircle_Widget;                          // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      CurrentAnim;                                       // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Value;                                             // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C30[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ButtonClicked;                                     // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsHighlighted;                                     // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDisabled;                                        // 0x2E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         IsHold;                                            // 0x2EA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3C31[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ButtonHoldSuccess;                                 // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        PercentFilled;                                     // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Holding;                                           // 0x304(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C32[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ButtonHovered;                                     // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ButtonSelected;                                    // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsSelected;                                        // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         RichTextStates;                                    // 0x329(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C33[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Label;                                             // 0x330(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Text_Signifier;                                    // 0x348(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Text_InputText;                                    // 0x360(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         BlockHighlight;                                    // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C34[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDelegateHandleBlueprint              TimerHandle;                                       // 0x380(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        Hover_Current_Time;                                // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Negative;                                       // 0x38C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C35[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ShakeCurrentTime;                                  // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C36[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TimerJiggle;                                       // 0x398(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFinal;                                           // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C37[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDelegateHandleBlueprint              TimerPress;                                        // 0x3A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        PressCurrentTime;                                  // 0x3B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_CapsuleBtn_Widget_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTBP_CapsuleBtn_Widget_2();
	void SequenceEvent__ENTRYPOINTBP_CapsuleBtn_Widget_1();
	void SequenceEvent__ENTRYPOINTBP_CapsuleBtn_Widget_0();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Refresh_Text_State(enum class EQtn_UI_States_Enum Temp_byte_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, enum class EQtn_UI_States_Enum CallFunc_Get_EQtn_Button_State_ButtonState, const class FString& K2Node_Select_Default, class FText CallFunc_DecorateWithRichTextStyle_ReturnValue);
	class FText Check_for_Input_String(class FText InputText, const class FString& CallFunc_StaticParseInputText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Get_EQtn_Button_State(enum class EQtn_UI_States_Enum* ButtonState);
	void Completed_A28CF2934C645C3633A7FE99F6461B83(float Value);
	void Tick_A28CF2934C645C3633A7FE99F6461B83(float Value);
	void Completed_F3740511400E1FA354CA359EE6227C64(float Value);
	void Tick_F3740511400E1FA354CA359EE6227C64(float Value);
	void Completed_7E5B829D4A8899BFB231C6B1870C2C35(float Value);
	void Tick_7E5B829D4A8899BFB231C6B1870C2C35(float Value);
	void Completed_732D043D4DC7103C51E7B886A5B84FBB(float Value);
	void Tick_732D043D4DC7103C51E7B886A5B84FBB(float Value);
	void AnimSeq_ButtonHover(bool IsHovered);
	void ShakeRepeater();
	void AnimSeq_Shake();
	void ShakeButtonLoop();
	void ChangeShakeRandomAngle();
	void ResetShakeAngle();
	void AnimSeq_Pressed(bool IsPressed);
	void ClearHover();
	void InitButton(class FText InputContextLabel, class FText Label, bool Negative, bool HoldInput, bool Disabled);
	void BndEvt__Button_Btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BP_CapsuleBtn_Widget_Button_Btn_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__BP_CapsuleBtn_Widget_Button_Btn_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void TickHoldButton(float DTime);
	void HoldButtonPressed(bool Pressed);
	void OnSelected(bool Selected);
	void ToggleDisabled(bool IsDisabled);
	void SetNegative(bool IsNegative);
	void SetHoldInput(bool IsHold);
	void Anim_Shake(bool NegativeShake);
	void RefreshHover(bool Hovered_);
	void StartTrainingHighlight();
	void PauseTrainingHighlight(bool Hovered);
	void UnbindTrainingEvent();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void TrainingHighlight_SetLoops(int32 NumLoopsToPlay);
	void ExecuteUbergraph_BP_CapsuleBtn_Widget(int32 EntryPoint, float K2Node_CustomEvent_Value_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_Value_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float Temp_float_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float K2Node_CustomEvent_Value_3, float K2Node_CustomEvent_Value_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, float Temp_float_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float K2Node_CustomEvent_Value_1, float K2Node_CustomEvent_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, float Temp_float_Variable_2, float CallFunc_Conv_BoolToFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_IsClosed_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool Temp_bool_Has_Been_Initd_Variable_3, bool K2Node_CustomEvent_IsHovered, bool CallFunc_IsAnimationPlayingForward_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool Temp_bool_IsClosed_Variable_2, bool K2Node_CustomEvent_IsPressed, class UQtnAsyncInterpolateValueRealtime* CallFunc_AsyncInterpolateValueRealtime_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnAsyncInterpolateValueRealtime* CallFunc_AsyncInterpolateValueRealtime_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UQtnAsyncInterpolateValueRealtime* CallFunc_AsyncInterpolateValueRealtime_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class UQtnAsyncInterpolateValueRealtime* CallFunc_AsyncInterpolateValueRealtime_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float CallFunc_Ease_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class FText K2Node_CustomEvent_InputContextLabel, class FText K2Node_CustomEvent_Label, bool K2Node_CustomEvent_Negative, bool K2Node_CustomEvent_HoldInput, bool K2Node_CustomEvent_Disabled, float Temp_float_Variable_3, float K2Node_CustomEvent_DTime, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_CustomEvent_Pressed, bool K2Node_CustomEvent_Selected, bool CallFunc_IsHovered_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1, bool K2Node_CustomEvent_isDisabled, class FText CallFunc_Check_for_Input_String_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool K2Node_CustomEvent_IsNegative, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool K2Node_CustomEvent_IsHold, float K2Node_CustomEvent_Value_6, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_4, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_5, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_6, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_7, bool K2Node_CustomEvent_NegativeShake, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_CustomEvent_Hovered_, bool CallFunc_Not_PreBool_ReturnValue_2, float CallFunc_Conv_BoolToFloat_ReturnValue_2, float CallFunc_Conv_BoolToFloat_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool K2Node_CustomEvent_Hovered, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool Temp_bool_IsClosed_Variable_3, float K2Node_CustomEvent_Value_7, class FName K2Node_Select_Default, int32 K2Node_CustomEvent_NumLoopsToPlay, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, float CallFunc_Lerp_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1);
	void ButtonSelected__DelegateSignature(bool Selected);
	void ButtonHovered__DelegateSignature(bool Hovered);
	void ButtonHoldSuccess__DelegateSignature();
	void ButtonClicked__DelegateSignature();
};

}


