#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x3C0 - 0x3B4)
// WidgetBlueprintGeneratedClass BP_CapsuleBtnChild_Widget.BP_CapsuleBtnChild_Widget_C
class UBP_CapsuleBtnChild_Widget_C : public UBP_CapsuleBtn_Widget_C
{
public:
	uint8                                        Pad_57E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_CapsuleBtnChild_Widget_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_BP_CapsuleBtnChild_Widget(int32 EntryPoint, const struct FMargin& K2Node_MakeStruct_Margin, class USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue, bool K2Node_Event_IsDesignTime);
};

}


