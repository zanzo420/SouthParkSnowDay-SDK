#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x140 - 0x130)
// BlueprintGeneratedClass MessagingHUDScreen.MessagingHUDScreen_C
class UMessagingHUDScreen_C : public UQtnScreenMessagingHUD
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMessagingHUD_C*                       MessagingHUDWidget;                                // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMessagingHUDScreen_C* GetDefaultObj();

	void UpdateHintText(class FText HintText);
	void ShowHint(class FText& HintText, float Duration);
	void HideHint();
	void OnScreenInitialized();
	void ExecuteUbergraph_MessagingHUDScreen(int32 EntryPoint, class FText K2Node_Event_hintText, float K2Node_Event_duration, class UMessagingHUD_C* CallFunc_GetUserWidget_ReturnValue);
};

}


