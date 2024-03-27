#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x330 - 0x260)
// WidgetBlueprintGeneratedClass TutorialNonblocking_Widget.TutorialNonblocking_Widget_C
class UTutorialNonblocking_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AddTrainingWidget;                                 // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      CompleteRemoveTrainingWidget;                      // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            Text_Heading;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Vbox_Prompts;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTutorialLine_Widget_C*>        MyPromptLineWidgets;                               // 0x288(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            CloseTutorial;                                     // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  HeaderText;                                        // 0x2A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, class UTutorialLine_Widget_C*> PromptLineWidgetMap;                               // 0x2C0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            RequestClosure;                                    // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FGameplayTag                          SourceTutorialTag;                                 // 0x320(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                TutorialClass;                                     // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTutorialNonblocking_Widget_C* GetDefaultObj();

	void Finished_A016599045998BD99FB04081157714C4();
	void Completed_8F17F3684A421FB3434656A4F07EE6A9(float Value);
	void Tick_8F17F3684A421FB3434656A4F07EE6A9(float Value);
	void SetupFromTutorialInstanceData(const struct FQtnTutorialInstanceData& InstanceData);
	void OnTutorialStateChangeEvent(const struct FQtnTutorialInstanceData& InstanceData);
	void OnTutorialSubGoalChangeEvent(const struct FQtnTutorialInstanceData& InstanceData);
	void AddSubGoalWidget(const struct FQtnTutorialInstanceData& TutorialInst, const struct FQtnTutorialSubAction& SubGoal);
	void RefreshWidgetText();
	void ExecuteUbergraph_TutorialNonblocking_Widget(int32 EntryPoint, class UQtnTutorial* CallFunc_GetQtnTutorialObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetTutorialGoalText_OutTitle, class FText CallFunc_GetTutorialGoalText_OutMessage, float K2Node_CustomEvent_Value_1, float K2Node_CustomEvent_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float Temp_float_Variable, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, const struct FQtnTutorialInstanceData& K2Node_CustomEvent_InstanceData_2, const struct FQtnTutorialInstanceData& K2Node_CustomEvent_InstanceData_1, TArray<struct FQtnTutorialSubAction>& CallFunc_Map_Values_Values, int32 CallFunc_Map_Length_ReturnValue, const struct FQtnTutorialSubAction& CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UQtnTutorial* CallFunc_GetQtnTutorialObject_ReturnValue_1, class FText CallFunc_GetTutorialGoalText_OutTitle_1, class FText CallFunc_GetTutorialGoalText_OutMessage_1, const struct FQtnTutorialInstanceData& K2Node_CustomEvent_InstanceData, TArray<struct FQtnTutorialSubAction>& CallFunc_Map_Values_Values_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UTutorialLine_Widget_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FQtnTutorialInstanceData& K2Node_CustomEvent_TutorialInst, const struct FQtnTutorialSubAction& K2Node_CustomEvent_SubGoal, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class FText CallFunc_GetTutorialSubGoalText_OutTitle, class FText CallFunc_GetTutorialSubGoalText_OutMessage, const class FString& CallFunc_Conv_TextToString_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UTutorialLine_Widget_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FDelegateHandleBlueprint& Temp_struct_Variable, class UTutorialLine_Widget_C* CallFunc_Array_Get_Item_2, class UQtnAsyncInterpolateValueRealtime* CallFunc_AsyncInterpolateValueRealtime_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2);
	void RequestClosure__DelegateSignature(class UTutorialNonblocking_Widget_C* SelfReference);
	void CloseTutorial__DelegateSignature();
};

}


