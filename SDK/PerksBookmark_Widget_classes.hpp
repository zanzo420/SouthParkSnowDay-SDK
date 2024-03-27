#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2A0 - 0x260)
// WidgetBlueprintGeneratedClass PerksBookmark_Widget.PerksBookmark_Widget_C
class UPerksBookmark_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUniformGridPanel*                     Grid_Perks;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDataTable*                            MasterPerksDataTable;                              // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UQtnPerk*>                      AllPerks;                                          // 0x278(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UQtnPerkComponent*                     Character_Perk_Component;                          // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UPerkBookmarkButton_Widget_C*>  PerkButtonWidgets;                                 // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UPerksBookmark_Widget_C* GetDefaultObj();

	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue);
	void SetupPerkButton(int32 PerkIndex, class UPerkBookmarkButton_Widget_C* NewPerkButton, class UPerkBookmarkButton_Widget_C* LOCAL_PerkButton, class UQtnPerk* CallFunc_Array_Get_Item, class UQtnPerkArchetype_C* K2Node_DynamicCast_AsQtn_Perk_Archetype, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetReplicatedActiveInstances_ReturnValue, const struct FQtnPerkSettings& CallFunc_GetPerkSettings_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_1);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_PerksBookmark_Widget(int32 EntryPoint, class UPanelWidget* CallFunc_GetParent_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue, bool K2Node_Event_IsDesignTime, class UObject* CallFunc_GetOuterObject_ReturnValue_1, class UMenuBuild_Widget_C* K2Node_DynamicCast_AsMenu_Build_Widget, bool K2Node_DynamicCast_bSuccess, class UPerkBookmarkButton_Widget_C* CallFunc_SpawnObject_ReturnValue, int32 Temp_int_Variable, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<class UQtnPerk*>& CallFunc_GetAllPerks_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UQtnPerk* CallFunc_Array_Get_Item, class UQtnPerkArchetype_C* K2Node_DynamicCast_AsQtn_Perk_Archetype, bool K2Node_DynamicCast_bSuccess_1, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
};

}


