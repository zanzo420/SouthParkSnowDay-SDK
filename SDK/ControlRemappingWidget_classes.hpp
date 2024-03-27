#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD9 (0x371 - 0x298)
// WidgetBlueprintGeneratedClass ControlRemappingWidget.ControlRemappingWidget_C
class UControlRemappingWidget_C : public UQtnUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAffordance_Widget_C*                  Affordance_Close;                                  // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAffordance_Widget_C*                  Affordance_Reset;                                  // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CapsuleBtn_Widget_C*               Btn_Reset;                                         // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Holder_Actions;                                    // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Holder_Interface;                                  // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Holder_Movement;                                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Holder_Social;                                     // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RText_Actions;                                     // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RText_Interface;                                   // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RText_Movement;                                    // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RText_Social;                                      // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Header;                                       // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBox_Action;                                       // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBox_Interface;                                    // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBox_Movement;                                     // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBox_Social;                                       // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          CurrentVBox;                                       // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UControlToRemapWidget_C*>       RemapWidgets;                                      // 0x330(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class FText                                  TEXT_Reset;                                        // 0x340(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  TEXT_Close;                                        // 0x358(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsBinding;                                         // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UControlRemappingWidget_C* GetDefaultObj();

	void InitializeHeader(class FText Text, class URichTextBlock* RText, class FText CallFunc_TextToUpper_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void InitializeUi();
	void InitButtons(bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue);
	class UWidget* Custom_Navigation(enum class EUINavigation Navigation, enum class EUINavigation Temp_byte_Variable, class UOptionsMenuButtonWidget_C* Temp_object_Variable, class UOptionsMenuButtonWidget_C* Temp_object_Variable_1, class UOptionsMenuButtonWidget_C* Temp_object_Variable_2, class UOptionsMenuButtonWidget_C* Temp_object_Variable_3, class UOptionsMenuButtonWidget_C* Temp_object_Variable_4, class UOptionsMenuButtonWidget_C* Temp_object_Variable_5, class UControlToRemapWidget_C* CallFunc_Array_Get_Item, class UOptionsMenuButtonWidget_C* K2Node_Select_Default);
	void PopulateControlList(const struct FQtnRebindableInput& LastFocusedInput);
	void OnQtnWidgetResumed(class UQtnScreen* PreviousScreen);
	void OnInputUsageChange(bool IsUsingMouseAndKeyboard);
	void UpdateInputUI();
	void OnUIScreenActionPressed(enum class EQtnUIScreenActionEnum ScreenAction);
	void Event_ResetBindings();
	void Event_CloseMenu();
	void IsBindingInput(bool IsBinding, class UControlToRemapWidget_C* BindingButton);
	void Gamepad_Focus();
	void PreConstruct(bool IsDesignTime);
	void OnQtnWidgetInitialized();
	void RefreshAffordance(bool IsUsingMouseAndKeyboard);
	void BndEvt__ControlRemappingWidget_Btn_Reset_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
	void ExecuteUbergraph_ControlRemappingWidget(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FQtnRebindableInput& K2Node_CustomEvent_LastFocusedInput, TArray<struct FQtnRebindableInput>& K2Node_MakeArray_Array, class UQtnScreen* K2Node_Event_previousScreen, int32 Temp_int_Array_Index_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_isUsingMouseAndKeyboard, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction, int32 Temp_int_Array_Index_Variable_2, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable, bool K2Node_CustomEvent_isBinding, class UControlToRemapWidget_C* K2Node_CustomEvent_BindingButton, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_2, class UControlToRemapWidget_C* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class UControlToRemapWidget_C* CallFunc_Create_ReturnValue, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, class UControlRemappingScreen_C* K2Node_DynamicCast_AsControl_Remapping_Screen, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_AddUnique_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue_1, class UControlRemappingScreen_C* K2Node_DynamicCast_AsControl_Remapping_Screen_1, bool K2Node_DynamicCast_bSuccess_1, class UControlToRemapWidget_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1, enum class EQtnInputCategory Temp_byte_Variable_4, TArray<struct FQtnRebindableInputCategory>& CallFunc_StaticGetRebindableInputsByCategories_ReturnValue, const struct FQtnRebindableInputCategory& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FQtnRebindableInput& CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_Event_IsDesignTime, class UVerticalBox* K2Node_Select_Default, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_isUsingMouseAndKeyboard, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2);
};

}


