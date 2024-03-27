#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x168 (0x400 - 0x298)
// WidgetBlueprintGeneratedClass ModalDialogWidget.ModalDialogWidget_C
class UModalDialogWidget_C : public UQtnUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_Container;                                  // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CapsuleBtn_Widget_C*               BP_BtnNo;                                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CapsuleBtn_Widget_C*               BP_BtnYes;                                         // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsCheckboxWidget_C*              CHECKBOX_Subtitles;                                // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HBOX_Subtitles;                                    // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_0;                                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Body;                                         // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQtnInputTextBlock*                    TEXT_FastScroll;                                   // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Header;                                       // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQtnInputTextBlock*                    Text_ScrollToBottomMsg;                            // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        StickScrollSpeedMultiplier;                        // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7374[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTexture2D*>                    BackgroundTextures;                                // 0x2F8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<class UTexture2D*>                    ButtonYesTextures;                                 // 0x308(0x10)(Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<class UTexture2D*>                    ButtonNoTextures;                                  // 0x318(0x10)(Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FLinearColor>                  BackgroundColors;                                  // 0x328(0x10)(Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FLinearColor>                  ButtonYesColors;                                   // 0x338(0x10)(Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FLinearColor>                  ButtonNoColors;                                    // 0x348(0x10)(Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<class FText>                          ButtonYesTextArray;                                // 0x358(0x10)(Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<class FText>                          ButtonNoTextArray;                                 // 0x368(0x10)(Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FSlateColor>                   ButtonTextColors;                                  // 0x378(0x10)(Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FSlateColor>                   TextColors;                                        // 0x388(0x10)(Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                         FadingIn;                                          // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7375[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FadeValue;                                         // 0x39C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MustScrollToEnd;                                   // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EQtnModalDialogType               ThisModalDialogType;                               // 0x3A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7376[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Label_FastScroll;                                  // 0x3A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         FastScrollOn;                                      // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7377[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ScrollAccelerateTimer;                             // 0x3C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SubtitlePromptVisible;                             // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7378[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Label_FixedDirection;                              // 0x3D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Label_CameraRelative;                              // 0x3E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UModalDialogWidget_C* GetDefaultObj();

	void ShowSubtitlePrompt(bool ShowIt, bool CallFunc_AreSubtitlesEnabled_ReturnValue);
	void SetHasScrolledToEnd();
	void TestIfScrolledToEnd(const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, int32 CallFunc_GetUserIndex_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void PresentMessageInfo(const struct FQtnModalMessageInfo& ModalMessageInfo, uint8 CallFunc_MakeLiteralByte_ReturnValue, class FText CallFunc_StaticFormatText_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue);
	void OnUIBodyActionPressed(enum class EQtnUIBodyActionEnum BodyAction);
	void OnQtnWidgetResumed(class UQtnScreen* PreviousScreen);
	void OnInputUsageChange(bool IsUsingMouseAndKeyboard);
	void OnUIScroll(float ScrollDelta, bool FromStick);
	void OnUIScreenActionPressed(enum class EQtnUIScreenActionEnum ScreenAction);
	void OnUIScreenActionReleased(enum class EQtnUIScreenActionEnum ScreenAction);
	void BndEvt__OptionsCheckboxWidget_K2Node_ComponentBoundEvent_5_CheckboxValueChanged__DelegateSignature(bool NewValue);
	void ToggleSubtitleVis();
	void OnQtnWidgetStopped();
	void OnQtnWidgetTicked(float DeltaSeconds);
	void BndEvt__BP_BtnYes_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature();
	void BndEvt__BP_BtnNo_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature();
	void ExecuteUbergraph_ModalDialogWidget(int32 EntryPoint, bool K2Node_Event_isUsingMouseAndKeyboard, float K2Node_Event_scrollDelta, bool K2Node_Event_fromStick, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue_1, float CallFunc_FClamp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, class UQtnScreen* K2Node_Event_previousScreen, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EQtnUIBodyActionEnum K2Node_Event_bodyAction, bool K2Node_SwitchEnum_CmpSuccess_2, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, class UModalDialogScreen_C* K2Node_DynamicCast_AsModal_Dialog_Screen, bool K2Node_DynamicCast_bSuccess, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction, bool K2Node_SwitchEnum_CmpSuccess_3, float CallFunc_FMax_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool K2Node_ComponentBoundEvent_NewValue, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue_1, class UModalDialogScreen_C* K2Node_DynamicCast_AsModal_Dialog_Screen_1, bool K2Node_DynamicCast_bSuccess_1, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_4, class UOptionsDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, class UOptionsDataBag_C* K2Node_DynamicCast_AsOptions_Data_Bag, bool K2Node_DynamicCast_bSuccess_2, float K2Node_Event_DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_FClamp_ReturnValue_1, float CallFunc_Lerp_ReturnValue, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1, bool CallFunc_HasFocusedDescendants_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_5, bool K2Node_SwitchEnum_CmpSuccess_6);
};

}


