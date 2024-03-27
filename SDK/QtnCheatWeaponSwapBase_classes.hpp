#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x91 (0x219 - 0x188)
// BlueprintGeneratedClass QtnCheatWeaponSwapBase.QtnCheatWeaponSwapBase_C
class UQtnCheatWeaponSwapBase_C : public UQtnCheatBPBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x188(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                Weapon_Class_To_Install;                           // 0x190(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Weapon_Class_Overwritten;                          // 0x198(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnItemData                          Weapon_Item_Data_Overwritten;                      // 0x1A0(0x68)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FFQtnUpgradeSaveData>          Weapon_Upgrade_Data_Overwritten;                   // 0x208(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Is_Ranged_Weapon;                                  // 0x218(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UQtnCheatWeaponSwapBase_C* GetDefaultObj();

	void HasSavedUpgrades(bool* HasSavedUpgrades, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void IncreaseRandomWeaponUpgradeLevel(bool* FoundUpgrade, struct FFQtnUpgradeSaveData* UpgradeSaveData, const struct FFQtnUpgradeSaveData& SaveData, const TArray<float>& Weights, int32 Randex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_ChooseIndexFromWeightedList_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, const struct FFQtnUpgradeSaveData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FQtnUpgradeSettings& CallFunc_ConvertReplicatedUpgradeSettings_OutValidUpgradeSettings, bool CallFunc_Less_IntInt_ReturnValue_1);
	void GetWeaponToOverwrite(class AQtnItem** WeaponToOverwrite, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, class AQtnItem* CallFunc_GetIntendedEquippedWeapon_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnItem* CallFunc_GetBestRangedEquippable_ReturnValue, class AQtnItem* CallFunc_GetBestMeleeEquippable_ReturnValue);
	void Retire_Cheat(int32 Temp_int_Array_Index_Variable, const struct FFQtnUpgradeSaveData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsWeaponRanged_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_1, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AQtnItem* CallFunc_SpawnWeapon_ServerOnly_ReturnValue, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue, class UQtnUpgradeSlot* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_SlotUpgrade_ServerOnly_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_2, class AQtnItem* CallFunc_GetActualEquippedItem_ReturnValue);
	void Invoke_Cheat(int32 Temp_int_Array_Index_Variable, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnItem* CallFunc_GetWeaponToOverwrite_weaponToOverwrite, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue, const struct FQtnItemData& CallFunc_GetItemData_ReturnValue, class UQtnUpgradeSlot* CallFunc_Array_Get_Item, bool CallFunc_IsSlotFilled_ReturnValue, class UQtnUpgrade* CallFunc_GetCurrentSlottedUpgrade_ReturnValue, const struct FQtnUpgradeSettings& CallFunc_GetUpgradeSettings_ReturnValue, const struct FQtnRolledUpgradeData& CallFunc_GetRolledUpgradeData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FFQtnUpgradeSaveData& K2Node_MakeStruct_FQtnUpgradeSaveData, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class AQtnItem* CallFunc_GetWeaponToOverwrite_weaponToOverwrite_1, class UClass* CallFunc_GetObjectClass_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_2, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue_1, bool CallFunc_IsServer_ReturnValue);
	void OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator);
	void OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed);
	void ExecuteUbergraph_QtnCheatWeaponSwapBase(int32 EntryPoint, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, bool K2Node_Event_isActorBeingDestroyed, bool CallFunc_IsValidClass_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue);
};

}


