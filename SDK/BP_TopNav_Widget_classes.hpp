#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass BP_TopNav_Widget.BP_TopNav_Widget_C
class UBP_TopNav_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HBOX_Tabs;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TEXT_InputLeft;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TEXT_InputRight;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTopNavTab_Widget_C*                   TopNavTab_Widget;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTopNavTab_Widget_C*                   TopNavTab_Widget_266;                              // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTopNavTab_Widget_C*                   SelectedTab;                                       // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_TopNav_Widget_C* GetDefaultObj();

	void InitTopNav(TArray<enum class EQtnSubCategories>& Categories, class UBP_Inventory_Grid_Widget_C* InventoryGrid);
	void TabSelected(class UTopNavTab_Widget_C* SelectedTab);
	void ExecuteUbergraph_BP_TopNav_Widget(int32 EntryPoint, TArray<enum class EQtnSubCategories>& K2Node_CustomEvent_Categories, class UBP_Inventory_Grid_Widget_C* K2Node_CustomEvent_inventoryGrid, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, enum class EQtnSubCategories CallFunc_Array_Get_Item, class UTopNavTab_Widget_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UTopNavTab_Widget_C* K2Node_CustomEvent_SelectedTab, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UTopNavTab_Widget_C* K2Node_DynamicCast_AsTop_Nav_Tab_Widget, bool K2Node_DynamicCast_bSuccess);
};

}


