#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x368 - 0x260)
// WidgetBlueprintGeneratedClass EquipmentVariations_Widget.EquipmentVariations_Widget_C
class UEquipmentVariations_Widget_C : public UUserWidget
{
public:
	class UAffordance_Widget_C*                  Affordance_Select;                                 // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Root;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBOX_Items;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FQtnItemData                          ArchetypeItemData;                                 // 0x278(0x68)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FQtnItemData                          SelectedVariationItemData;                         // 0x2E0(0x68)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UArmoryItem_Widget_C*>          VariationItems;                                    // 0x348(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            OnVariationSelected;                               // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UEquipmentVariations_Widget_C* GetDefaultObj();

	void GetNthVariationFromIndex(int32 InIndex, int32 InN, class UArmoryItem_Widget_C** OutItem, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, class UArmoryItem_Widget_C* CallFunc_Array_Get_Item);
	void OnItemVariationSelected(class UArmoryItem_Widget_C* SelectedGear, bool WasAlreadyEquipped);
	void GetWeaponConfigFromItemData(const struct FQtnItemData& ItemItemData, struct FQtnWeaponConfiguration* OutConfig, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class UQtnCombatSettings* CallFunc_GetCombatSettings_ReturnValue, const struct FQtnWeaponConfiguration& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void GetSelectedVariationItemInfo(const struct FQtnItemData& InItemInfo, struct FQtnItemData* OutItemInfo);
	void FocusSelectedVariation(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UArmoryItem_Widget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue);
	void GetAllVariationItemInfo(const struct FQtnItemData& InArchtetype, TArray<struct FQtnItemData>* OutVariations, const TArray<struct FQtnItemData>& Variations, int32 Temp_int_Array_Index_Variable, TArray<struct FGameplayTag>& CallFunc_Gather_All_Weapon_VariationTags_AllRelevantTags, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, TArray<struct FQtnItemData>& CallFunc_GetVaultWeapons_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FQtnItemData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Add_ReturnValue);
	void PopulateItemVariations(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UArmoryItem_Widget_C* CallFunc_GetNthVariationFromIndex_OutItem, class UArmoryItem_Widget_C* CallFunc_GetNthVariationFromIndex_OutItem_1, class UArmoryItem_Widget_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable_1, class UArmoryItem_Widget_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, enum class EQtn_EquipmentCategory Temp_byte_Variable, int32 CallFunc_Array_Add_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EQtn_EquipmentCategory Temp_byte_Variable_1, bool Temp_bool_Variable_1, TArray<struct FQtnItemData>& CallFunc_GetAllVariationItemInfo_OutVariations, int32 CallFunc_Array_Length_ReturnValue_1, const struct FQtnItemData& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FQtnItemData& CallFunc_ItemFromGameplayTag_Item, bool CallFunc_ItemFromGameplayTag_Found, int32 CallFunc_ItemFromGameplayTag_Array_Index, enum class EQtn_EquipmentCategory K2Node_Select_Default, const struct FQtnWeaponConfiguration& CallFunc_GetWeaponConfigFromItemData_OutConfig, class UClass* CallFunc_SyncLoadClass_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Item, bool K2Node_ClassDynamicCast_bSuccess, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class AQtnItem* CallFunc_GetItemArchetype_ReturnValue, class ABaseWeapon_C* K2Node_DynamicCast_AsBase_Weapon, bool K2Node_DynamicCast_bSuccess_1, class UTexture2D* CallFunc_GetIconForUI_ReturnValue, class UTexture2D* K2Node_Select_Default_1);
	void InitFromArchetypeItemData(const struct FQtnItemData& InItemData, int32 InVaultItemIndex, const struct FQtnItemData& CallFunc_GetSelectedVariationItemInfo_OutItemInfo);
	void OnVariationSelected__DelegateSignature(class UArmoryItem_Widget_C* ArmoryItem, bool WasAlreadySelcted);
};

}


