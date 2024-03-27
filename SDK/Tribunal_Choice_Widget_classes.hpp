#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x300 (0x560 - 0x260)
// WidgetBlueprintGeneratedClass Tribunal_Choice_Widget.Tribunal_Choice_Widget_C
class UTribunal_Choice_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_BullshitDescription;                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_ConfirmChoice;                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Edit;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RICHTEXT_Desc;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RICHTEXT_Uses;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RText_Rarity;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Edit;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBOX_Card;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  FormattedChoiceText;                               // 0x2A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        MyIndex;                                           // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C77[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerTribunalSlot_BP_C*              PlayerSlot;                                        // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InteractionAllowed;                                // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C78[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnBSChoice                          BSChoice;                                          // 0x2D8(0x9)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C79[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Is_Upgrade;                                        // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C7A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnUpgradeSettings                   Upgrade_Choice;                                    // 0x2F0(0x1F8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FQtnRolledUpgradeData                 Upgrade_Data;                                      // 0x4E8(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Max_Invoke_Count;                                  // 0x548(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C7B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OutString;                                         // 0x550(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTribunal_Choice_Widget_C* GetDefaultObj();

	class UWidget* NavigationConfirmChoice(enum class EUINavigation Navigation, int32 NextIndex, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchInteger_CmpSuccess, class ABS_Choice_Card_C* CallFunc_Array_Get_Item, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, class ABS_Choice_Card_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_3, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, class ABS_Choice_Card_C* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_2, class ABS_Choice_Card_C* CallFunc_Array_Get_Item_3, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_3);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue);
	void Format_Upgrade_Value(struct FQtnUpgradeSettings& UpgradeSettings, struct FQtnRolledUpgradeData& RolledData, int32 Index, class FText* OutFormattedValue, TSubclassOf<class UQtnUpgrade> CallFunc_SyncLoadUpgradeClass_ReturnValue, class UQtnUpgrade* CallFunc_GetClassDefaultObject_ReturnValue, class FText CallFunc_GetFormattedValueAtIndex_ReturnValue);
	void AngleAdjust(const struct FVector2D& Angles, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_RandomFloatInRange_ReturnValue);
	void UpdateChoiceText(class AQtnPlayerController* Player, class UQtnBullshitBPBaseArchetype_C* CurrentBSArchetype, bool Temp_bool_Variable, bool CallFunc_IsValidClass_ReturnValue, class FText CallFunc_Format_Upgrade_Value_OutFormattedValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Format_Upgrade_Value_OutFormattedValue_1, class FText CallFunc_Format_Upgrade_Value_OutFormattedValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Format_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText K2Node_Select_Default, class FText CallFunc_TextToUpper_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Get_Description_Text_descriptionText, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, const struct FVector2D& CallFunc_GetSize_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class FText CallFunc_Format_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, class FText CallFunc_Format_ReturnValue_3, class UQtnBullshitBPBaseArchetype_C* CallFunc_GetBullshitArchetype_ReturnValue, class UQtnBullshitBPBaseArchetype_C* CallFunc_GetBullshitArchetype_ReturnValue_1, class UQtnBullshitBPBaseArchetype_C* K2Node_DynamicCast_AsQtn_Bullshit_BPBase_Archetype, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_FormatChoiceText_populatedText);
	void FormatChoiceText(class FText ThisText, class FText* PopulatedText);
	void InitChoiceWidget(int32 Index, const struct FQtnBSChoice& Choice, class APlayerTribunalSlot_BP_C* PlayerSlot, bool AllowInteraction, bool IsUpgrade, const struct FQtnUpgradeSettings& UpgradeChoice, const struct FQtnRolledUpgradeData& UpgradeData);
	void CardSelected();
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_Tribunal_Choice_Widget(int32 EntryPoint, int32 K2Node_CustomEvent_index, const struct FQtnBSChoice& K2Node_CustomEvent_choice, class APlayerTribunalSlot_BP_C* K2Node_CustomEvent_PlayerSlot, bool K2Node_CustomEvent_AllowInteraction, bool K2Node_CustomEvent_isUpgrade, const struct FQtnUpgradeSettings& K2Node_CustomEvent_upgradeChoice, const struct FQtnRolledUpgradeData& K2Node_CustomEvent_UpgradeData, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IUpgradeInterface_C> K2Node_DynamicCast_AsUpgrade_Interface, bool K2Node_DynamicCast_bSuccess_2, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, class ABS_Choice_Card_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4);
};

}


