#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_LootIcon.BP_LootIcon_C
// (None)

class UClass* UBP_LootIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LootIcon_C");

	return Clss;
}


// BP_LootIcon_C BP_LootIcon.Default__BP_LootIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_LootIcon_C* UBP_LootIcon_C::GetDefaultObj()
{
	static class UBP_LootIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_LootIcon_C*>(UBP_LootIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_LootIcon.BP_LootIcon_C.TrainingMomentFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LootIcon_C::TrainingMomentFinish(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "TrainingMomentFinish");

	Params::UBP_LootIcon_C_TrainingMomentFinish_Params Parms{};

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LootIcon.BP_LootIcon_C.TrainingMomentStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantedPressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBP_LootIcon_C::TrainingMomentStart(bool WantedPressed, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "TrainingMomentStart");

	Params::UBP_LootIcon_C_TrainingMomentStart_Params Parms{};

	Parms.WantedPressed = WantedPressed;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LootIcon.BP_LootIcon_C.CheckPowerEquipped
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                CallFunc_GetPower1ItemData_ReturnValue                           (ConstParm)
// struct FQtnItemData                CallFunc_GetPower2ItemData_ReturnValue                           (ConstParm)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LootIcon_C::CheckPowerEquipped(class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, const struct FQtnItemData& CallFunc_GetPower1ItemData_ReturnValue, const struct FQtnItemData& CallFunc_GetPower2ItemData_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "CheckPowerEquipped");

	Params::UBP_LootIcon_C_CheckPowerEquipped_Params Parms{};

	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;
	Parms.CallFunc_GetPower1ItemData_ReturnValue = CallFunc_GetPower1ItemData_ReturnValue;
	Parms.CallFunc_GetPower2ItemData_ReturnValue = CallFunc_GetPower2ItemData_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LootIcon.BP_LootIcon_C.GetMediaStatInstancesAndSetUpIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnItemData                IncomingPowerItemData                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemStatSettings        CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UQtnVerb>        CallFunc_SyncLoadVerbClass_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UQtnVerb*                    CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb_Archetype_C*        K2Node_DynamicCast_AsQtn_Verb_Archetype                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LootIcon_C::GetMediaStatInstancesAndSetUpIcon(const struct FQtnItemData& IncomingPowerItemData, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FQtnItemStatSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TSubclassOf<class UQtnVerb> CallFunc_SyncLoadVerbClass_ReturnValue, class UQtnVerb* CallFunc_GetClassDefaultObject_ReturnValue, class UQtnVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Verb_Archetype, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "GetMediaStatInstancesAndSetUpIcon");

	Params::UBP_LootIcon_C_GetMediaStatInstancesAndSetUpIcon_Params Parms{};

	Parms.IncomingPowerItemData = IncomingPowerItemData;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_SyncLoadVerbClass_ReturnValue = CallFunc_SyncLoadVerbClass_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Verb_Archetype = K2Node_DynamicCast_AsQtn_Verb_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LootIcon.BP_LootIcon_C.CheckMediaPlacement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_LootIcon_C::CheckMediaPlacement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "CheckMediaPlacement");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LootIcon.BP_LootIcon_C.SetMediaCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_LootIcon_C::SetMediaCategory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "SetMediaCategory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LootIcon.BP_LootIcon_C.RenderIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnItem*                    Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AItemIconRender_BP_C*        CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      CallFunc_CreateIconTexture_outTexture                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LootIcon_C::RenderIcon(class AQtnItem* Item, const struct FQtnItemData& Data, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AItemIconRender_BP_C* CallFunc_FinishSpawningActor_ReturnValue, class UTextureRenderTarget2D* CallFunc_CreateIconTexture_outTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "RenderIcon");

	Params::UBP_LootIcon_C_RenderIcon_Params Parms{};

	Parms.Item = Item;
	Parms.Data = Data;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_CreateIconTexture_outTexture = CallFunc_CreateIconTexture_outTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LootIcon.BP_LootIcon_C.GetRarityColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnItemData                Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UQtnGameInstance*            CallFunc_GetQtnGameInstance_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRarityGameplayTagFromStringCodes_TagFound            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                CallFunc_GetRarityGameplayTagFromStringCodes_ReturnValue         (NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LootIcon_C::GetRarityColor(const struct FQtnItemData& Data, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, bool CallFunc_GetRarityGameplayTagFromStringCodes_TagFound, const struct FGameplayTag& CallFunc_GetRarityGameplayTagFromStringCodes_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "GetRarityColor");

	Params::UBP_LootIcon_C_GetRarityColor_Params Parms{};

	Parms.Data = Data;
	Parms.CallFunc_GetQtnGameInstance_ReturnValue = CallFunc_GetQtnGameInstance_ReturnValue;
	Parms.CallFunc_GetRarityGameplayTagFromStringCodes_TagFound = CallFunc_GetRarityGameplayTagFromStringCodes_TagFound;
	Parms.CallFunc_GetRarityGameplayTagFromStringCodes_ReturnValue = CallFunc_GetRarityGameplayTagFromStringCodes_ReturnValue;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LootIcon.BP_LootIcon_C.GetOwningMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Inventory_Grid_Widget_C* InventoryGrid                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMenuEquipment_Widget_C*     EquipmentMenu                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LootIcon_C::GetOwningMenu(class UBP_Inventory_Grid_Widget_C* InventoryGrid, class UMenuEquipment_Widget_C* EquipmentMenu, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "GetOwningMenu");

	Params::UBP_LootIcon_C_GetOwningMenu_Params Parms{};

	Parms.InventoryGrid = InventoryGrid;
	Parms.EquipmentMenu = EquipmentMenu;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LootIcon.BP_LootIcon_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LootIcon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "Tick");

	Params::UBP_LootIcon_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LootIcon.BP_LootIcon_C.InitLootIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnItemRarity          Rarity                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Inventory_Grid_Widget_C* InventoryGrid                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                MyItemData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UMenuEquipment_Widget_C*     EquipmentMenu                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtn_EquipmentCategory  EquipmentCategory                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LootIcon_C::InitLootIcon(int32 Index, enum class EQtnItemRarity Rarity, class UBP_Inventory_Grid_Widget_C* InventoryGrid, const struct FQtnItemData& MyItemData, class UMenuEquipment_Widget_C* EquipmentMenu, enum class EQtn_EquipmentCategory EquipmentCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "InitLootIcon");

	Params::UBP_LootIcon_C_InitLootIcon_Params Parms{};

	Parms.Index = Index;
	Parms.Rarity = Rarity;
	Parms.InventoryGrid = InventoryGrid;
	Parms.MyItemData = MyItemData;
	Parms.EquipmentMenu = EquipmentMenu;
	Parms.EquipmentCategory = EquipmentCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LootIcon.BP_LootIcon_C.BndEvt__BUTTON_Loot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_LootIcon_C::BndEvt__BUTTON_Loot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "BndEvt__BUTTON_Loot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LootIcon.BP_LootIcon_C.LootSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LootIcon_C::LootSelected(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "LootSelected");

	Params::UBP_LootIcon_C_LootSelected_Params Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LootIcon.BP_LootIcon_C.LootEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Equipped                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LootIcon_C::LootEquipped(bool Equipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "LootEquipped");

	Params::UBP_LootIcon_C_LootEquipped_Params Parms{};

	Parms.Equipped = Equipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LootIcon.BP_LootIcon_C.InitCategoryIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMenuEquipment_Widget_C*     OwningMenu                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Inventory_Grid_Widget_C* EquipmentDrawer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtn_EquipmentCategory  Equipment_Category                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LootIcon_C::InitCategoryIcon(class UMenuEquipment_Widget_C* OwningMenu, class UBP_Inventory_Grid_Widget_C* EquipmentDrawer, enum class EQtn_EquipmentCategory Equipment_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "InitCategoryIcon");

	Params::UBP_LootIcon_C_InitCategoryIcon_Params Parms{};

	Parms.OwningMenu = OwningMenu;
	Parms.EquipmentDrawer = EquipmentDrawer;
	Parms.Equipment_Category = Equipment_Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LootIcon.BP_LootIcon_C.CategorySelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LootIcon_C::CategorySelected(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "CategorySelected");

	Params::UBP_LootIcon_C_CategorySelected_Params Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LootIcon.BP_LootIcon_C.UpdateCategoryVisual
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_LootIcon_C::UpdateCategoryVisual()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "UpdateCategoryVisual");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LootIcon.BP_LootIcon_C.BndEvt__BUTTON_Loot_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_LootIcon_C::BndEvt__BUTTON_Loot_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "BndEvt__BUTTON_Loot_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LootIcon.BP_LootIcon_C.BndEvt__BUTTON_Loot_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_LootIcon_C::BndEvt__BUTTON_Loot_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "BndEvt__BUTTON_Loot_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LootIcon.BP_LootIcon_C.LimitedInteraction_Powers
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Limited                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LootIcon_C::LimitedInteraction_Powers(bool Limited)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "LimitedInteraction_Powers");

	Params::UBP_LootIcon_C_LimitedInteraction_Powers_Params Parms{};

	Parms.Limited = Limited;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LootIcon.BP_LootIcon_C.RemoteClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_LootIcon_C::RemoteClick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "RemoteClick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LootIcon.BP_LootIcon_C.EquipAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_LootIcon_C::EquipAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "EquipAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LootIcon.BP_LootIcon_C.ButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AlreadySelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LootIcon_C::ButtonHovered(bool AlreadySelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "ButtonHovered");

	Params::UBP_LootIcon_C_ButtonHovered_Params Parms{};

	Parms.AlreadySelected = AlreadySelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LootIcon.BP_LootIcon_C.ButtonUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AlreadySelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LootIcon_C::ButtonUnhovered(bool AlreadySelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "ButtonUnhovered");

	Params::UBP_LootIcon_C_ButtonUnhovered_Params Parms{};

	Parms.AlreadySelected = AlreadySelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LootIcon.BP_LootIcon_C.StartTrainingHighlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_LootIcon_C::StartTrainingHighlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "StartTrainingHighlight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LootIcon.BP_LootIcon_C.UnbindTrainingEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_LootIcon_C::UnbindTrainingEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "UnbindTrainingEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LootIcon.BP_LootIcon_C.PauseTrainingHighlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_LootIcon_C*              HoveredButton                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtn_EquipmentCategory  Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CategoryHovered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LootIcon_C::PauseTrainingHighlight(class UBP_LootIcon_C* HoveredButton, enum class EQtn_EquipmentCategory Category, bool CategoryHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "PauseTrainingHighlight");

	Params::UBP_LootIcon_C_PauseTrainingHighlight_Params Parms{};

	Parms.HoveredButton = HoveredButton;
	Parms.Category = Category;
	Parms.CategoryHovered = CategoryHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LootIcon.BP_LootIcon_C.ExecuteUbergraph_BP_LootIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtn_EquipmentCategory  Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                Temp_struct_Variable                                             (ConstParm)
// struct FQtnItemData                Temp_struct_Variable_1                                           (ConstParm)
// enum class EQtn_EquipmentCategory  Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    Temp_object_Variable_1                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtn_EquipmentCategory  Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    Temp_object_Variable_2                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    Temp_object_Variable_3                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtn_EquipmentCategory  Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    Temp_object_Variable_4                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    Temp_object_Variable_5                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtn_EquipmentCategory  Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    Temp_object_Variable_6                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    Temp_object_Variable_7                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnItemRarity          K2Node_CustomEvent_Rarity                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Inventory_Grid_Widget_C* K2Node_CustomEvent_inventoryGrid                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                K2Node_CustomEvent_myItemData                                    (None)
// class UMenuEquipment_Widget_C*     K2Node_CustomEvent_EquipmentMenu                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtn_EquipmentCategory  K2Node_CustomEvent_EquipmentCategory                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Selected_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_3                                             (None)
// bool                               K2Node_CustomEvent_Equipped                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IItemUIInterfaces_C>K2Node_DynamicCast_AsItem_UIInterfaces                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtn_EquipmentCategory  Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOriginalBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOriginalBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMenuEquipment_Widget_C*     K2Node_CustomEvent_OwningMenu                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Inventory_Grid_Widget_C* K2Node_CustomEvent_EquipmentDrawer                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtn_EquipmentCategory  K2Node_CustomEvent_Equipment_Category                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Selected                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOriginalBody_outputPin_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOriginalBody_ReturnValue_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetIntendedEquippedWeapons_rangedWeapon                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetIntendedEquippedWeapons_meleeWeapon                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IItemUIInterfaces_C>K2Node_DynamicCast_AsItem_UIInterfaces_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IItemUIInterfaces_C>K2Node_DynamicCast_AsItem_UIInterfaces_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_limited                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGameInstance*            CallFunc_GetQtnGameInstance_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOriginalBody_outputPin_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOriginalBody_ReturnValue_2                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCombatSettings*          CallFunc_GetCombatSettings_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetIntendedEquippedWeapons_rangedWeapon_1               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetIntendedEquippedWeapons_meleeWeapon_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetIntendedEquippedWeapon_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnItemData                CallFunc_GetItemData_ReturnValue                                 (None)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Item                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnItem*                    CallFunc_GetItemArchetype_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseWeapon_C*               K2Node_DynamicCast_AsBase_Weapon                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetIconForUI_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetIntendedEquippedWeapon_ReturnValue_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnItemData                CallFunc_GetItemData_ReturnValue_1                               (None)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGameInstance*            CallFunc_GetQtnGameInstance_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnWeaponConfiguration     CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetItemTypeGameplayTagFromStringCodes_TagFound          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                CallFunc_GetItemTypeGameplayTagFromStringCodes_ReturnValue       (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOriginalBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_AlreadySelected_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_AlreadySelected                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetAnimation*            K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_LootIcon_C*              K2Node_CustomEvent_HoveredButton                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtn_EquipmentCategory  K2Node_CustomEvent_Category                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_CategoryHovered                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Sin_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_3                                          (None)
// class AQtnItem*                    K2Node_Select_Default_4                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetIconForUI_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnItemData                CallFunc_GetPower2ItemData_ReturnValue                           (ConstParm)
// struct FQtnItemData                CallFunc_GetPower1ItemData_ReturnValue                           (ConstParm)
// struct FQtnItemData                K2Node_Select_Default_5                                          (ConstParm)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnItem*                    K2Node_Select_Default_6                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    K2Node_Select_Default_7                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnItem*                    K2Node_Select_Default_8                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_9                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LootIcon_C::ExecuteUbergraph_BP_LootIcon(int32 EntryPoint, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EQtn_EquipmentCategory Temp_byte_Variable_2, const struct FQtnItemData& Temp_struct_Variable, const struct FQtnItemData& Temp_struct_Variable_1, enum class EQtn_EquipmentCategory Temp_byte_Variable_3, class AQtnItem* Temp_object_Variable, class AQtnItem* Temp_object_Variable_1, bool Temp_bool_Variable_1, enum class EQtn_EquipmentCategory Temp_byte_Variable_4, class AQtnItem* Temp_object_Variable_2, class AQtnItem* Temp_object_Variable_3, enum class EQtn_EquipmentCategory Temp_byte_Variable_5, class AQtnItem* Temp_object_Variable_4, class AQtnItem* Temp_object_Variable_5, enum class EQtn_EquipmentCategory Temp_byte_Variable_6, class AQtnItem* Temp_object_Variable_6, class AQtnItem* Temp_object_Variable_7, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 K2Node_CustomEvent_index, enum class EQtnItemRarity K2Node_CustomEvent_Rarity, class UBP_Inventory_Grid_Widget_C* K2Node_CustomEvent_inventoryGrid, const struct FQtnItemData& K2Node_CustomEvent_myItemData, class UMenuEquipment_Widget_C* K2Node_CustomEvent_EquipmentMenu, enum class EQtn_EquipmentCategory K2Node_CustomEvent_EquipmentCategory, bool K2Node_CustomEvent_Selected_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class FText Temp_text_Variable_3, bool K2Node_CustomEvent_Equipped, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IItemUIInterfaces_C> K2Node_DynamicCast_AsItem_UIInterfaces, bool K2Node_DynamicCast_bSuccess, enum class EQtn_EquipmentCategory Temp_byte_Variable_7, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UMenuEquipment_Widget_C* K2Node_CustomEvent_OwningMenu, class UBP_Inventory_Grid_Widget_C* K2Node_CustomEvent_EquipmentDrawer, enum class EQtn_EquipmentCategory K2Node_CustomEvent_Equipment_Category, bool K2Node_CustomEvent_Selected, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_TextIsEmpty_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue_1, class AQtnItem* CallFunc_GetIntendedEquippedWeapons_rangedWeapon, class AQtnItem* CallFunc_GetIntendedEquippedWeapons_meleeWeapon, bool K2Node_SwitchEnum_CmpSuccess_2, TScriptInterface<class IItemUIInterfaces_C> K2Node_DynamicCast_AsItem_UIInterfaces_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IItemUIInterfaces_C> K2Node_DynamicCast_AsItem_UIInterfaces_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_3, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1, bool K2Node_CustomEvent_limited, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin_2, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue_2, class UQtnCombatSettings* CallFunc_GetCombatSettings_ReturnValue, class AQtnItem* CallFunc_GetIntendedEquippedWeapons_rangedWeapon_1, class AQtnItem* CallFunc_GetIntendedEquippedWeapons_meleeWeapon_1, bool K2Node_SwitchEnum_CmpSuccess_3, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AQtnItem* CallFunc_GetIntendedEquippedWeapon_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_3, const struct FQtnItemData& CallFunc_GetItemData_ReturnValue, class UClass* CallFunc_SyncLoadClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Item, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue, class AQtnItem* CallFunc_GetItemArchetype_ReturnValue, class ABaseWeapon_C* K2Node_DynamicCast_AsBase_Weapon, bool K2Node_DynamicCast_bSuccess_4, class UTexture2D* CallFunc_GetIconForUI_ReturnValue, class AQtnItem* CallFunc_GetIntendedEquippedWeapon_ReturnValue_1, class UTexture2D* K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue_4, const struct FQtnItemData& CallFunc_GetItemData_ReturnValue_1, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue_1, const struct FQtnWeaponConfiguration& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_GetItemTypeGameplayTagFromStringCodes_TagFound, const struct FGameplayTag& CallFunc_GetItemTypeGameplayTagFromStringCodes_ReturnValue, bool Temp_bool_Variable_2, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_4, class AQtnBodyPawn* CallFunc_GetOriginalBodyPawn_ReturnValue, bool K2Node_CustomEvent_AlreadySelected_1, bool K2Node_CustomEvent_AlreadySelected, class UWidgetAnimation* K2Node_Select_Default_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_4, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_5, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_6, class UBP_LootIcon_C* K2Node_CustomEvent_HoveredButton, enum class EQtn_EquipmentCategory K2Node_CustomEvent_Category, bool K2Node_CustomEvent_CategoryHovered, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Sin_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_7, class FText K2Node_Select_Default_3, class AQtnItem* K2Node_Select_Default_4, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class UTexture2D* CallFunc_GetIconForUI_ReturnValue_1, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_5, const struct FQtnItemData& CallFunc_GetPower2ItemData_ReturnValue, const struct FQtnItemData& CallFunc_GetPower1ItemData_ReturnValue, const struct FQtnItemData& K2Node_Select_Default_5, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_8, bool CallFunc_IsVisible_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_6, class AQtnItem* K2Node_Select_Default_6, class AQtnItem* K2Node_Select_Default_7, bool CallFunc_IsValid_ReturnValue_5, class AQtnItem* K2Node_Select_Default_8, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_9, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "ExecuteUbergraph_BP_LootIcon");

	Params::UBP_LootIcon_C_ExecuteUbergraph_BP_LootIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_index = K2Node_CustomEvent_index;
	Parms.K2Node_CustomEvent_Rarity = K2Node_CustomEvent_Rarity;
	Parms.K2Node_CustomEvent_inventoryGrid = K2Node_CustomEvent_inventoryGrid;
	Parms.K2Node_CustomEvent_myItemData = K2Node_CustomEvent_myItemData;
	Parms.K2Node_CustomEvent_EquipmentMenu = K2Node_CustomEvent_EquipmentMenu;
	Parms.K2Node_CustomEvent_EquipmentCategory = K2Node_CustomEvent_EquipmentCategory;
	Parms.K2Node_CustomEvent_Selected_1 = K2Node_CustomEvent_Selected_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.K2Node_CustomEvent_Equipped = K2Node_CustomEvent_Equipped;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_UIInterfaces = K2Node_DynamicCast_AsItem_UIInterfaces;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.CallFunc_GetLocalPlayerOriginalBody_outputPin = CallFunc_GetLocalPlayerOriginalBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOriginalBody_ReturnValue = CallFunc_GetLocalPlayerOriginalBody_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_CustomEvent_OwningMenu = K2Node_CustomEvent_OwningMenu;
	Parms.K2Node_CustomEvent_EquipmentDrawer = K2Node_CustomEvent_EquipmentDrawer;
	Parms.K2Node_CustomEvent_Equipment_Category = K2Node_CustomEvent_Equipment_Category;
	Parms.K2Node_CustomEvent_Selected = K2Node_CustomEvent_Selected;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalPlayerOriginalBody_outputPin_1 = CallFunc_GetLocalPlayerOriginalBody_outputPin_1;
	Parms.CallFunc_GetLocalPlayerOriginalBody_ReturnValue_1 = CallFunc_GetLocalPlayerOriginalBody_ReturnValue_1;
	Parms.CallFunc_GetIntendedEquippedWeapons_rangedWeapon = CallFunc_GetIntendedEquippedWeapons_rangedWeapon;
	Parms.CallFunc_GetIntendedEquippedWeapons_meleeWeapon = CallFunc_GetIntendedEquippedWeapons_meleeWeapon;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_DynamicCast_AsItem_UIInterfaces_1 = K2Node_DynamicCast_AsItem_UIInterfaces_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsItem_UIInterfaces_2 = K2Node_DynamicCast_AsItem_UIInterfaces_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_SpawnSound2D_ReturnValue_1 = CallFunc_SpawnSound2D_ReturnValue_1;
	Parms.K2Node_CustomEvent_limited = K2Node_CustomEvent_limited;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.CallFunc_MakeColor_ReturnValue_1 = CallFunc_MakeColor_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_GetQtnGameInstance_ReturnValue = CallFunc_GetQtnGameInstance_ReturnValue;
	Parms.CallFunc_GetLocalPlayerOriginalBody_outputPin_2 = CallFunc_GetLocalPlayerOriginalBody_outputPin_2;
	Parms.CallFunc_GetLocalPlayerOriginalBody_ReturnValue_2 = CallFunc_GetLocalPlayerOriginalBody_ReturnValue_2;
	Parms.CallFunc_GetCombatSettings_ReturnValue = CallFunc_GetCombatSettings_ReturnValue;
	Parms.CallFunc_GetIntendedEquippedWeapons_rangedWeapon_1 = CallFunc_GetIntendedEquippedWeapons_rangedWeapon_1;
	Parms.CallFunc_GetIntendedEquippedWeapons_meleeWeapon_1 = CallFunc_GetIntendedEquippedWeapons_meleeWeapon_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_GetIntendedEquippedWeapon_ReturnValue = CallFunc_GetIntendedEquippedWeapon_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetItemData_ReturnValue = CallFunc_GetItemData_ReturnValue;
	Parms.CallFunc_SyncLoadClass_ReturnValue = CallFunc_SyncLoadClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsQtn_Item = K2Node_ClassDynamicCast_AsQtn_Item;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetItemArchetype_ReturnValue = CallFunc_GetItemArchetype_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Weapon = K2Node_DynamicCast_AsBase_Weapon;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetIconForUI_ReturnValue = CallFunc_GetIconForUI_ReturnValue;
	Parms.CallFunc_GetIntendedEquippedWeapon_ReturnValue_1 = CallFunc_GetIntendedEquippedWeapon_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetItemData_ReturnValue_1 = CallFunc_GetItemData_ReturnValue_1;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_GetQtnGameInstance_ReturnValue_1 = CallFunc_GetQtnGameInstance_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetItemTypeGameplayTagFromStringCodes_TagFound = CallFunc_GetItemTypeGameplayTagFromStringCodes_TagFound;
	Parms.CallFunc_GetItemTypeGameplayTagFromStringCodes_ReturnValue = CallFunc_GetItemTypeGameplayTagFromStringCodes_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_GetOriginalBodyPawn_ReturnValue = CallFunc_GetOriginalBodyPawn_ReturnValue;
	Parms.K2Node_CustomEvent_AlreadySelected_1 = K2Node_CustomEvent_AlreadySelected_1;
	Parms.K2Node_CustomEvent_AlreadySelected = K2Node_CustomEvent_AlreadySelected;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_3 = CallFunc_GetDynamicMaterial_ReturnValue_3;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_4 = CallFunc_GetDynamicMaterial_ReturnValue_4;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_5 = CallFunc_GetDynamicMaterial_ReturnValue_5;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_6 = CallFunc_GetDynamicMaterial_ReturnValue_6;
	Parms.K2Node_CustomEvent_HoveredButton = K2Node_CustomEvent_HoveredButton;
	Parms.K2Node_CustomEvent_Category = K2Node_CustomEvent_Category;
	Parms.K2Node_CustomEvent_CategoryHovered = K2Node_CustomEvent_CategoryHovered;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Sin_ReturnValue = CallFunc_Sin_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_7 = CallFunc_GetDynamicMaterial_ReturnValue_7;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin = CallFunc_GetLocalPlayerOccupiedBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue;
	Parms.CallFunc_GetIconForUI_ReturnValue_1 = CallFunc_GetIconForUI_ReturnValue_1;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_GetPower2ItemData_ReturnValue = CallFunc_GetPower2ItemData_ReturnValue;
	Parms.CallFunc_GetPower1ItemData_ReturnValue = CallFunc_GetPower1ItemData_ReturnValue;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_8 = CallFunc_GetDynamicMaterial_ReturnValue_8;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_9 = CallFunc_GetDynamicMaterial_ReturnValue_9;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_7 = K2Node_SwitchEnum_CmpSuccess_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LootIcon.BP_LootIcon_C.LootButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_LootIcon_C*              HoveredButton                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtn_EquipmentCategory  Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CategoryHovered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_LootIcon_C::LootButtonHovered__DelegateSignature(class UBP_LootIcon_C* HoveredButton, enum class EQtn_EquipmentCategory Category, bool CategoryHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LootIcon_C", "LootButtonHovered__DelegateSignature");

	Params::UBP_LootIcon_C_LootButtonHovered__DelegateSignature_Params Parms{};

	Parms.HoveredButton = HoveredButton;
	Parms.Category = Category;
	Parms.CategoryHovered = CategoryHovered;

	UObject::ProcessEvent(Func, &Parms);

}

}


