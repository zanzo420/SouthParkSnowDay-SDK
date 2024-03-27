#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x198 - 0x130)
// BlueprintGeneratedClass UI_FTUX_TrainingMoment_Screen.UI_FTUX_TrainingMoment_Screen_C
class UUI_FTUX_TrainingMoment_Screen_C : public UQtnScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                TutManagerWidget;                                  // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        VerbPrompts;                                       // 0x140(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AQtnBodyPawn*                          MyBodyPawn;                                        // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseWeapon_C*                         BaseWeapon;                                        // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRanged;                                          // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_70C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           NewVar_0;                                          // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_FTUX_Archetype_Widget_C*           TutorialManager;                                   // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Associated_Object;                                 // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CurrentHeading;                                    // 0x180(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FTimerHandle                          Timer;                                             // 0x190(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_FTUX_TrainingMoment_Screen_C* GetDefaultObj();

	void Change_Tutorial_Viewport_Position(bool UseDefaultAndIgnoreOtherInputs, float AnchorMinY, float AnchorMaxY, enum class EVerticalAlignment VerticalAlignment, class UUI_FTUX_Archetype_Widget_C* CallFunc_GetUserWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void RefreshTutorialWidgets(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UTutorialLine_Widget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetMyBody();
	void DEPRECATED_TrainingCompleted(TArray<class FString>& Prompt_string_to_remove);
	void OnScreenStopped();
	void OnScreenResumed(class UQtnScreen* PreviousScreen);
	void AddTrainingPrompt(const class FString& Prompt, const class FString& Heading, class FName Identity);
	void ForceTutorialReset();
	void ShutScreen();
	void CloseScreenOnTimer(float Time);
	void OnInputUsageChange(bool IsUsingMouseAndKeyboard);
	void OnScreenStarted();
	void ExecuteUbergraph_UI_FTUX_TrainingMoment_Screen(int32 EntryPoint, bool CallFunc_IsScreenActive_ReturnValue, float K2Node_CustomEvent_Time, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_Event_Prompt, const class FString& K2Node_Event_Heading, class FName K2Node_Event_Identity, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UQtnScreen* K2Node_Event_previousScreen, TArray<class FString>& K2Node_CustomEvent_prompt_string_to_remove, bool K2Node_Event_isUsingMouseAndKeyboard);
};

}


