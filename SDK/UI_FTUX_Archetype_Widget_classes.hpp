#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA1 (0x339 - 0x298)
// WidgetBlueprintGeneratedClass UI_FTUX_Archetype_Widget.UI_FTUX_Archetype_Widget_C
class UUI_FTUX_Archetype_Widget_C : public UQtnUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      RemoveTutorial;                                    // 0x2A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AddTutorial;                                       // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTutorialNonblocking_Widget_C*         TutorialNonblocking_Widget;                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBOX_TutorialList;                                 // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            RemoveTutorialFromActor;                           // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          FadeOpacityHandle;                                 // 0x2D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGameplayTag, class UTutorialNonblocking_Widget_C*> ActiveTutorialWidgets;                             // 0x2D8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UObject*>                       UI_Inhibitors;                                     // 0x328(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         InHUD;                                             // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_FTUX_Archetype_Widget_C* GetDefaultObj();

	void RefreshActiveTutorialWidgets(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UTutorialNonblocking_Widget_C*>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, class UTutorialNonblocking_Widget_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void CheckForHUD(bool LOCAL_IsInHUD, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_BoolBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, TArray<class UTutorialNonblocking_Widget_C*>& CallFunc_Map_Values_Values, class UQtnScreen* CallFunc_GetActiveScreen_ReturnValue, class UTutorialNonblocking_Widget_C* CallFunc_Array_Get_Item, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnRequestTutorialClosure(class UTutorialNonblocking_Widget_C* SelfReference, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_RemoveChild_ReturnValue);
	void OnTutorialStateChanged(const struct FQtnTutorialInstanceData& TutorialInstance, class UTutorialNonblocking_Widget_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UQtnTutorial* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UTutorialNonblocking_Widget_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void OnTutorialSubGoalChangedEvent(const struct FQtnTutorialInstanceData& TutorialInstance, class UTutorialNonblocking_Widget_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UQtnTutorial* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ToggleTutorialVisibility(bool WantHidden);
	void RemoveInhibitor(class UObject*& Inhibitor, bool CallFunc_AreTutorialsInhibited__WantInhibited, bool CallFunc_Array_RemoveItem_ReturnValue);
	void AddInhibitor(class UObject*& Inhibitor, int32 CallFunc_Array_Add_ReturnValue);
	void AreTutorialsInhibited_(bool* WantInhibited, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_DoCutscenesAllowTrainingWidgets_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsLocalCutsceneActive_doWorldCleanup, bool CallFunc_IsLocalCutsceneActive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Change_Position_Alignment(bool UseDefault, float AnchorMinY, float AnchorMaxY, enum class EVerticalAlignment VerticalAlignment, enum class EVerticalAlignment LOCAL_VerticalAlignment, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FAnchors& K2Node_MakeStruct_Anchors, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UTutorialNonblocking_Widget_C*>& CallFunc_Map_Values_Values, int32 CallFunc_Add_IntInt_ReturnValue_1, class UTutorialNonblocking_Widget_C* CallFunc_Array_Get_Item, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors_1, TArray<class UTutorialNonblocking_Widget_C*>& CallFunc_Map_Values_Values_1, class UTutorialNonblocking_Widget_C* CallFunc_Array_Get_Item_1, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue_1);
	void OnQtnWidgetInitialized();
	void OnQtnWidgetTicked(float DeltaSeconds);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_FTUX_Archetype_Widget(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, float K2Node_Event_DeltaSeconds, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_AreTutorialsInhibited__WantInhibited);
	void RemoveTutorialFromActor__DelegateSignature();
};

}


