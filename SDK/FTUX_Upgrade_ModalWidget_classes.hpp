#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2C0 - 0x298)
// WidgetBlueprintGeneratedClass FTUX_Upgrade_ModalWidget.FTUX_Upgrade_ModalWidget_C
class UFTUX_Upgrade_ModalWidget_C : public UQtnUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFTUX_Modal_Widget_C*                  FTUX_Modal_Widget;                                 // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_UpgradeCard_FTUX_C*                UI_UpgradeCard_FTUX;                               // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ModalOver;                                         // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UFTUX_Upgrade_ModalWidget_C* GetDefaultObj();

	void SetupImage(class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UUI_UpgradeCard_FTUX_C* CallFunc_Create_ReturnValue);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, int32 CallFunc_GetUserIndex_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void OnUIScreenActionPressed(enum class EQtnUIScreenActionEnum ScreenAction);
	void OnUIBodyActionPressed(enum class EQtnUIBodyActionEnum BodyAction);
	void OnQtnWidgetInitialized();
	void ModalComplete();
	void OnInputChange(bool IsUsingMouseAndKeyboard);
	void OnQtnWidgetTicked(float DeltaSeconds);
	void OnUIScroll(float ScrollDelta, bool FromStick);
	void OnQtnWidgetResumed(class UQtnScreen* PreviousScreen);
	void GamepadScroll();
	void ExecuteUbergraph_FTUX_Upgrade_ModalWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWidget* CallFunc_GetCurrentFocusedWidget_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& CallFunc_GetDisplayName_ReturnValue, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction, bool K2Node_SwitchEnum_CmpSuccess, enum class EQtnUIBodyActionEnum K2Node_Event_bodyAction, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, bool K2Node_CustomEvent_isUsingMouseAndKeyboard, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_2, float K2Node_Event_DeltaSeconds, float K2Node_Event_scrollDelta, bool K2Node_Event_fromStick, class UQtnScreen* K2Node_Event_previousScreen, const struct FVector2D& CallFunc_GetRightStickInput_ReturnValue, bool CallFunc_IsNearlyZero2D_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_3, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void ModalOver__DelegateSignature();
};

}


