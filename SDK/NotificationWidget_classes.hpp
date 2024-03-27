#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass NotificationWidget.NotificationWidget_C
class UNotificationWidget_C : public UUserWidget
{
public:
	class UWidgetAnimation*                      OutroAnimation;                                    // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      IntroAnimation;                                    // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UNotificationWidget_C* GetDefaultObj();

	void PlayOutro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void PlayIntro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}


