#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12 (0x9A - 0x88)
// BlueprintGeneratedClass EnemyUpgrade_ChangeDamageTypeArchetype.EnemyUpgrade_ChangeDamageTypeArchetype_C
class UEnemyUpgrade_ChangeDamageTypeArchetype_C : public UQtnEnemyUpgradeArchetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                DamageTypeToUse;                                   // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MeleeEnemiesOnly;                                  // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         RangedEnemiesOnly;                                 // 0x99(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UEnemyUpgrade_ChangeDamageTypeArchetype_C* GetDefaultObj();

	void SlotBelongsToProjectileKid(class UQtnUpgradeSlot* Slot, bool* IsProjectileKid, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
	bool K2_CanUpgradeBeSlotted(class UQtnUpgradeSlot* TargetSlot, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class AQtnItem* CallFunc_GetIntendedEquippedWeapon_ReturnValue, class AQtnItem* CallFunc_GetIntendedEquippedWeapon_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SlotBelongsToProjectileKid_IsProjectileKid, bool CallFunc_K2_CanUpgradeBeSlotted_ReturnValue);
	void IsDamageTypeChangerOkay(class AQtnGameState* ActiveGameState, bool* OkayToRoll, int32 Temp_int_Array_Index_Variable, TArray<TSubclassOf<class UQtnUpgrade>>& CallFunc_GetCurrentEnemyUpgrades_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool CallFunc_ClassIsChildOf_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UClass* CallFunc_Array_Get_Item_1, bool CallFunc_ClassIsChildOf_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	bool CanEnemyUpgradeBeRolled(class AQtnGameState* ActiveGameState, bool CallFunc_IsDamageTypeChangerOkay_OkayToRoll, bool CallFunc_CanEnemyUpgradeBeRolled_ReturnValue);
	void OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress);
	void OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData);
	void UpdateFX(class AQtnItem* Item, bool On);
	void ExecuteUbergraph_EnemyUpgrade_ChangeDamageTypeArchetype(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, bool K2Node_Event_LoadedRunProgress, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, TArray<class UQtnVerb*>& CallFunc_GetAllEquippedVerbs_pawnVerbs, TArray<class UQtnVerb*>& CallFunc_GetAllEquippedVerbs_pawnVerbs_1, class UQtnVerb* CallFunc_Array_Get_Item, class UQtnVerb* CallFunc_Array_Get_Item_1, class UQtnVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Verb_Archetype, bool K2Node_DynamicCast_bSuccess, class UQtnVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Verb_Archetype_1, bool K2Node_DynamicCast_bSuccess_1, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsPlayerControlled_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class AQtnItem* K2Node_CustomEvent_Item, bool K2Node_CustomEvent_On);
};

}


