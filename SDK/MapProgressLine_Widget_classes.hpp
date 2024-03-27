#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xBC (0x31C - 0x260)
// WidgetBlueprintGeneratedClass MapProgressLine_Widget.MapProgressLine_Widget_C
class UMapProgressLine_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FillProgressBar;                                   // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        Hbox_Pins;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapProgressPin_Widget_C*              PinEnd_Widget;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapProgressPin_Widget_C*              PinStart_Widget;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_115;                                   // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        CachedProgressRatio;                               // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_57DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMapProgressPin_Widget_C*>      FlagWidgets;                                       // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        Index;                                             // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartingProgressRatio;                             // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FinalProgressRatio;                                // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_57DC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMenuMapEntry_Widget_C*                OwningMenu;                                        // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnPlayerController*                  Local_Player_Controller;                           // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TimerProgressLine;                                 // 0x2C8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UMapProgressPin_Widget_C*>      GoalPins;                                          // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        NextCompletedPin;                                  // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FinalCompletedPin;                                 // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ProgressLineFinished;                              // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FQtnStruct_ProgressPin>        PotentialPins;                                     // 0x2F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_ProgressPin>        CompletedPins;                                     // 0x308(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        CompletedLength;                                   // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMapProgressLine_Widget_C* GetDefaultObj();

	void GetPinBasedOnIndexAndCompletion(int32 IndexToTest, struct FQtnStruct_ProgressPin* ProgressPinStruct, int32 LOCAL_Index, bool Temp_bool_Variable, const struct FQtnStruct_ProgressPin& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FQtnStruct_ProgressPin& CallFunc_Array_Get_Item_1, const struct FQtnStruct_ProgressPin& K2Node_Select_Default);
	void Get_and_Show_Failure_Pin(int32 LOCAL_FailurePin, int32 CallFunc_Add_IntInt_ReturnValue, class UMapProgressPin_Widget_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void GetGoalName(class UClass* GoalClass, class FText* GoalTitle, class UClass* K2Node_ClassDynamicCast_AsGoal_Base, bool K2Node_ClassDynamicCast_bSuccess);
	void PopulateMapPins(TArray<struct FQtnStruct_ProgressPin>& CompletedPins, TArray<struct FQtnStruct_ProgressPin>& PotentialPins, const struct FQtnStruct_ProgressPin& LOCAL_CurrentPinStruct, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_SafeDivide_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_GetGoalName_GoalTitle, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Variable, const struct FQtnStruct_ProgressPin& CallFunc_GetPinBasedOnIndexAndCompletion_ProgressPinStruct, int32 CallFunc_Add_IntInt_ReturnValue_1, class FText CallFunc_GetGoalName_GoalTitle_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FQtnStruct_ProgressPin& CallFunc_GetPinBasedOnIndexAndCompletion_ProgressPinStruct_1, int32 CallFunc_Array_LastIndex_ReturnValue_2, class UMaterialInstance* CallFunc_GetIcons_Complete_Icon, class UMaterialInstance* CallFunc_GetIcons_Loss_Icon, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UMapProgressPin_Widget_C* CallFunc_SpawnObject_ReturnValue, class UMaterialInstance* CallFunc_GetIcons_Complete_Icon_1, class UMaterialInstance* CallFunc_GetIcons_Loss_Icon_1, int32 CallFunc_Array_Add_ReturnValue_2, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
	void GetIcons(struct FQtnStruct_ProgressPin& QtnStruct_ProgressPin, class UMaterialInstance** Complete_Icon, class UMaterialInstance** Loss_Icon, class UClass* K2Node_ClassDynamicCast_AsGoal_Base, bool K2Node_ClassDynamicCast_bSuccess);
	void Rotate_Map_Pins(bool LOCAL_EndlessMode, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Select_Default, class UMissionDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, int32 CallFunc_GetCurrentArc_CurrentArc, class UMapProgressPin_Widget_C* CallFunc_Array_Get_Item, bool CallFunc_StaticIsEndlessMode_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	float AnimDelay(class UWidgetAnimation* Self2);
	void GetStartingRatio(int32* StartIndex, int32 LOCAL_StartIndex, bool LOCAL_StartIndexFound);
	void MoveProgressLine(float UpdatedRatio, float LOCAL_UpdatedRatio, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UMapProgressPin_Widget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void OnInitialized();
	void ForceProgressLine();
	void DEPRECATED_PassOwningMenuAndBindEventToSkip(class UMenuMapEntry_Widget_C* MenuMapEntry);
	void Construct();
	void DEPRECATED_MapLineUpdateProgress();
	void DEPRECATED_StartUpdatingProgress();
	void ExecuteUbergraph_MapProgressLine_Widget(int32 EntryPoint, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UMenuMapEntry_Widget_C* K2Node_CustomEvent_MenuMapEntry, class UMapProgressPin_Widget_C* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, class UMapProgressPin_Widget_C* CallFunc_Array_Get_Item_1, float CallFunc_FClamp_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, float CallFunc_Lerp_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UMapProgressPin_Widget_C* CallFunc_Array_Get_Item_2);
	void ProgressLineFinished__DelegateSignature();
};

}


