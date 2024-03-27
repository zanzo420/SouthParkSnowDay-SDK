#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x280 - 0x260)
// WidgetBlueprintGeneratedClass Cursor_Widget.Cursor_Widget_C
class UCursor_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Gamepad;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Mouse;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AQtnPlayerUI*                          LocalPlayerUI;                                     // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCursor_Widget_C* GetDefaultObj();

	enum class ESlateVisibility SetVisibilityGamepad(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue);
	enum class ESlateVisibility SetVisibilityMouse(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue);
	void CheckAndSetVisibilities(bool IsUsingMouseKeyboard);
	void InputChange(bool IsUsingMouseAndKeyboard);
	void Construct();
	void ReadyForUIEvent_Event_0(class AQtnPlayerController* LocalPlayerController, class AQtnPlayerUI* LocalPlayerUI);
	void OnInitialized();
	void ExecuteUbergraph_Cursor_Widget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_isUsingMouseAndKeyboard, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsLocalPlayerUIReadyBP_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnPlayerController* K2Node_CustomEvent_localPlayerController, class AQtnPlayerUI* K2Node_CustomEvent_localPlayerUI, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue);
};

}


