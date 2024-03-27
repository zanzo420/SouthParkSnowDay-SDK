#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x360 - 0x268)
// WidgetBlueprintGeneratedClass TutorialLine_Widget.TutorialLine_Widget_C
class UTutorialLine_Widget_C : public UQtnLocalizedUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Checkbox;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Checkmark;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RText_Instruction;                                 // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                StringGoal;                                        // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Completed;                                         // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3377[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            MyGoalComplete;                                    // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                  TutorialIdentity;                                  // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EQtnTutorialStatus                LastKnownState;                                    // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3378[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  GoalText;                                          // 0x2C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsUsingMouseAndKeyboard;                           // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3379[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                TutorialClass;                                     // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnTutorialSubAction                 GoalInstance;                                      // 0x2E8(0x78)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UTutorialLine_Widget_C* GetDefaultObj();

	void Construct();
	void RefreshText();
	void FormatText(bool IsUsingMouseAndKeyboard);
	void PreConstruct(bool IsDesignTime);
	void SetupFromTutorialSubgoal(const struct FQtnTutorialInstanceData& TutorialInstance, const struct FQtnTutorialSubAction& SubGoalInst);
	void UpdateTutorialSubgoal(const struct FQtnTutorialSubAction& SubGoal);
	void OnCultureChangedEvent();
	void ExecuteUbergraph_TutorialLine_Widget(int32 EntryPoint, float Temp_float_Variable, bool CallFunc_IsValidClass_ReturnValue, float Temp_float_Variable_1, bool Temp_bool_Variable, float Temp_float_Variable_2, float Temp_float_Variable_3, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable_1, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_CustomEvent_isUsingMouseAndKeyboard, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_StaticParseInputText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool Temp_bool_IsClosed_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_DecorateWithRichTextStyle_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, float K2Node_Select_Default, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue, float K2Node_Select_Default_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FQtnTutorialInstanceData& K2Node_CustomEvent_TutorialInstance, const struct FQtnTutorialSubAction& K2Node_CustomEvent_SubGoalInst, class FText CallFunc_GetTutorialSubGoalText_OutTitle, class FText CallFunc_GetTutorialSubGoalText_OutMessage, bool K2Node_SwitchEnum_CmpSuccess_2, bool Temp_bool_Variable_2, class FText K2Node_Select_Default_2, const struct FQtnTutorialSubAction& K2Node_CustomEvent_SubGoal, class UQtnTutorial* CallFunc_GetQtnTutorialObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetTutorialSubGoalText_OutTitle_1, class FText CallFunc_GetTutorialSubGoalText_OutMessage_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_FormatSubgoalText_ReturnValue);
	void MyGoalComplete__DelegateSignature(class UTutorialLine_Widget_C* MyLine);
};

}


