#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x278 - 0x260)
// WidgetBlueprintGeneratedClass CardLevel_Widget.CardLevel_Widget_C
class UCardLevel_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                              OVERLAY_MainText;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Level;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCardLevel_Widget_C* GetDefaultObj();

	void InitTriialCredWidget(const struct FQtnBSChoice& Choice, bool PlayerCard, bool ModCard);
	void SetLevel(int32 Level);
	void ExecuteUbergraph_CardLevel_Widget(int32 EntryPoint, int32 K2Node_CustomEvent_level, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FQtnBSChoice& K2Node_CustomEvent_choice, bool K2Node_CustomEvent_playerCard, bool K2Node_CustomEvent_modCard, class UQtnBullshitBPBaseArchetype_C* CallFunc_GetBullshitArchetype_ReturnValue, class UQtnBullshitBPBaseArchetype_C* K2Node_DynamicCast_AsQtn_Bullshit_BPBase_Archetype, bool K2Node_DynamicCast_bSuccess);
};

}


