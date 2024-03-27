#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2AC (0x50C - 0x260)
// WidgetBlueprintGeneratedClass CardChoiceButton_Widget.CardChoiceButton_Widget_C
class UCardChoiceButton_Widget_C : public UUserWidget
{
public:
	class UButton*                               Button_ConfirmChoice;                              // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  FormattedChoiceText;                               // 0x268(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        MyIndex;                                           // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3495[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerTribunalSlot_BP_C*              PlayerSlot;                                        // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InteractionAllowed;                                // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3496[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnBSChoice                          BSChoice;                                          // 0x298(0x9)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3497[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Is_Upgrade;                                        // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3498[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnUpgradeSettings                   Upgrade_Choice;                                    // 0x2B0(0x1F8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FQtnRolledUpgradeData                 Upgrade_Data;                                      // 0x4A8(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Max_Invoke_Count;                                  // 0x508(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCardChoiceButton_Widget_C* GetDefaultObj();

	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue);
};

}


