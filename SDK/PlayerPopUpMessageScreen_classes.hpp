#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x170 - 0x130)
// BlueprintGeneratedClass PlayerPopUpMessageScreen.PlayerPopUpMessageScreen_C
class UPlayerPopUpMessageScreen_C : public UQtnScreenPopUpMessage
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         PopUpHelpVisible;                                  // 0x138(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_759F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PopUpTimer;                                        // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPopUpMessageStruct>           PopUpMessagesToShow;                               // 0x140(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPopUpMessageStruct                   CurrentPopUpMessage;                               // 0x150(0x1C)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_75A0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlayerPopUpMessageScreen_C* GetDefaultObj();

	void OnScreenTicked(float DeltaSeconds);
	void PopUpScreenText(class FText& ScreenText, float PopUpTime, bool IsQueued);
	void ShowNextPopupInQueue();
	void ExecuteUbergraph_PlayerPopUpMessageScreen(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UPopUpMessageWidget_C* CallFunc_GetUserWidget_ReturnValue, class UPopUpMessageWidget_C* CallFunc_GetUserWidget_ReturnValue_1, class UPopUpMessageWidget_C* K2Node_DynamicCast_AsPop_Up_Message_Widget, bool K2Node_DynamicCast_bSuccess, class UPopUpMessageWidget_C* K2Node_DynamicCast_AsPop_Up_Message_Widget_1, bool K2Node_DynamicCast_bSuccess_1, class FText K2Node_Event_screenText, float K2Node_Event_popUpTime, bool K2Node_Event_isQueued, bool CallFunc_BooleanOR_ReturnValue, const struct FPopUpMessageStruct& K2Node_MakeStruct_PopUpMessageStruct, int32 CallFunc_Array_Add_ReturnValue, class UPopUpMessageWidget_C* CallFunc_GetUserWidget_ReturnValue_2, class UPopUpMessageWidget_C* K2Node_DynamicCast_AsPop_Up_Message_Widget_2, bool K2Node_DynamicCast_bSuccess_2, const struct FPopUpMessageStruct& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_StaticFormatText_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue);
};

}


