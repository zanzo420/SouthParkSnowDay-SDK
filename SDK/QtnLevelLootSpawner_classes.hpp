#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x3B8 - 0x368)
// BlueprintGeneratedClass QtnLevelLootSpawner.QtnLevelLootSpawner_C
class AQtnLevelLootSpawner_C : public AQtnSpawner
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnGoalMarkerComponent*               QtnGoalMarker;                                     // 0x370(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   Billboard;                                         // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         UsedByGoal;                                        // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AlwaysSpawnLoot;                                   // 0x381(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EQtnLootType_Enum                 LootTypeActuallySpawned;                           // 0x382(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Spawned;                                           // 0x383(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EQtnLootType_Enum                 LootType;                                          // 0x384(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Can_Spawn_Rulebook;                                // 0x385(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Can_Spawn_Dark_Matter_Loot;                        // 0x386(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Can_Spawn_Card_Pack_Tier_Loot;                     // 0x387(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Can_Spawn_Best_Tier_Loot;                          // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Can_Spawn_Medium_Tier_Loot;                        // 0x389(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Can_Spawn_Low_Tier_Health_Loot;                    // 0x38A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Can_Spawn_Low_Tier_Loot;                           // 0x38B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DE6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                OverrideContainerClass;                            // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                ValidArcs;                                         // 0x398(0x10)(Edit, BlueprintVisible)
	class UDataTable*                            DataTable_Region;                                  // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                LootContainerSpawned;                              // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AQtnLevelLootSpawner_C* GetDefaultObj();

	void BuildDebugLabel(class FString* Label, const class FString& L_debugLabel, const class FString& CallFunc_Concat_StrStr_ReturnValue, class ALoot_Container_Parent_C* K2Node_DynamicCast_AsLoot_Container_Parent, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, const class FString& CallFunc_GetClassNameWithoutSuffix_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const class FString& CallFunc_GetClassNameWithoutSuffix_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetClassNameWithoutSuffix_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, bool CallFunc_NotEqual_ByteByte_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue);
	void DrawDebugTextInWorld(class UQtnDebugWrapper* DebugWrapper, const class FString& ExtraText, const struct FColor& L_UnspawnedColor, class UQtnDebugWrapper* L_debugWrapper, const TArray<struct FColor>& L_spawnedColor, bool Temp_bool_Variable, TArray<struct FColor>& K2Node_MakeArray_Array, int32 CallFunc_Conv_ByteToInt_ReturnValue, const class FString& CallFunc_BuildDebugLabel_label, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FColor& K2Node_Select_Default, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void Get_Num_Loot_Tiers(int32* NumTiers, int32 Result, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, bool CallFunc_Can_Spawn_Tier_yes, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 Temp_int_Variable_2, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void Get_Lowest_Loot_Tier(enum class EQtnLootType_Enum* LowestTier, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, bool CallFunc_Can_Spawn_Tier_yes, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Get_Highest_Loot_Tier(enum class EQtnLootType_Enum* Highest_tier, int32 MaxIndex, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_Can_Spawn_Tier_yes, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1);
	void Can_Spawn_Tier(enum class EQtnLootType_Enum Tier, bool* Yes, bool K2Node_SwitchEnum_CmpSuccess);
	void TiersICanSpawn(class FString* Return_string, const class FString& LOCAL_ReturnString, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6);
	void GetTableForMap(const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_4, bool CallFunc_EqualEqual_StrStr_ReturnValue_5, bool CallFunc_EqualEqual_StrStr_ReturnValue_6, bool CallFunc_EqualEqual_StrStr_ReturnValue_7, bool CallFunc_EqualEqual_StrStr_ReturnValue_8, bool CallFunc_EqualEqual_StrStr_ReturnValue_9);
	void GetDefaultContainerForRegion(class UClass** Container_class, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FLootRegionDefault_Struct& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FLootTierToDefaultContainer_Struct& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValidClass_ReturnValue);
	void ConstructLoot(bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EQtnLootType_Enum CallFunc_Get_Highest_Loot_Tier_highest_tier);
	void ResetCanSpawnBools(bool CallFunc_IsServer_ReturnValue);
	void ReconcileLootTierAndOverride(bool K2Node_SwitchEnum_CmpSuccess);
	void GetLootContainerClass(class UClass** Loot_container, class UClass* CallFunc_getDefaultContainerForRegion_container_class);
	void SetLootType(class UClass* CallFunc_GetLootContainerClass_loot_container, bool CallFunc_IsValidClass_ReturnValue);
	void UserConstructionScript(bool K2Node_SwitchEnum_CmpSuccess, enum class EQtnLootType_Enum CallFunc_Get_Highest_Loot_Tier_highest_tier);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_QtnLevelLootSpawner(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue);
};

}


