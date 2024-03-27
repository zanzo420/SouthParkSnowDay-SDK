#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1B0 - 0x1A8)
// BlueprintGeneratedClass NotificationScreen.NotificationScreen_C
class UNotificationScreen_C : public UQtnScreenNotification
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UNotificationScreen_C* GetDefaultObj();

	void OnIntro();
	void OnOutro();
	void ExecuteUbergraph_NotificationScreen(int32 EntryPoint, class UUserWidget* CallFunc_GetNotificationWidget_ReturnValue, class UNotificationWidget_C* K2Node_DynamicCast_AsNotification_Widget, bool K2Node_DynamicCast_bSuccess, class UNotificationWidget_C* K2Node_DynamicCast_AsNotification_Widget_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


