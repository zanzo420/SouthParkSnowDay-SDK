#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x2C8 - 0x260)
// WidgetBlueprintGeneratedClass RadialButtonCollection_Widget.RadialButtonCollection_Widget_C
class URadialButtonCollection_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalRadialbuttonWidget_C*       HorizontalRadialbuttonWidget;                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalRadialbuttonWidget_C*         VerticalRadialbuttonWidget;                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalRadialbuttonWidget_C*         VerticalRadialbuttonWidget_1;                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              WrapBox_Primary;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FQtnRadialButtonConfiguration> ButtonSettings;                                    // 0x288(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UClass*                                RadialWidgetClass;                                 // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class URadialButtonWidgetArchetype_C*> LOCAL_WidgetsInRadialCollection;                   // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class URadialButtonWidgetArchetype_C*        LOCAL_CurrentWidget;                               // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnRadialButtonWasPressed;                          // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class URadialButtonCollection_Widget_C* GetDefaultObj();

	void Get_Last_Button_Entry(class UWidget** Button, int32 CallFunc_Array_LastIndex_ReturnValue, class URadialButtonWidgetArchetype_C* CallFunc_Array_Get_Item);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, class URadialButtonWidgetArchetype_C* CallFunc_Array_Get_Item, class URadialButtonWidgetArchetype_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void ChangeBasedOnSelection(TArray<struct FQtnRadialButtonConfiguration>& NewButtonSettings, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue, class URadialButtonWidgetArchetype_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class URadialButtonWidgetArchetype_C* CallFunc_Create_ReturnValue, const struct FQtnRadialButtonConfiguration& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnRadialButtonHovered(bool IsHovered_, int32 IndexOfButton, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class URadialButtonWidgetArchetype_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class URadialButtonWidgetArchetype_C* CallFunc_Array_Get_Item_1);
	void OnRadialButtonPressed(int32 ButtonIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class URadialButtonWidgetArchetype_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void InitRadioButtons(TArray<struct FQtnRadialButtonConfiguration>& RadioButtonSettings);
	void SetUpButtons();
	void ExecuteUbergraph_RadialButtonCollection_Widget(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FQtnRadialButtonConfiguration& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class URadialButtonWidgetArchetype_C* CallFunc_Create_ReturnValue, class URadialButtonWidgetArchetype_C* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue, bool K2Node_Event_IsDesignTime, TArray<struct FQtnRadialButtonConfiguration>& K2Node_CustomEvent_RadioButtonSettings);
	void OnRadialButtonWasPressed__DelegateSignature(int32 ButtonIndex, const struct FQtnRadialButtonConfiguration& ButtonConfig);
};

}


