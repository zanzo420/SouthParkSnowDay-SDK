#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9C (0x13C - 0xA0)
// BlueprintGeneratedClass PlayerRunProgress.PlayerRunProgress_C
class UPlayerRunProgress_C : public UQtnPlayerRunProgress
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Rage;                                              // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Health;                                            // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnMissionStats                      MissionStats;                                      // 0xB0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          SessionUnlocks;                                    // 0x100(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        ToiletPaper;                                       // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ToiletPaperSpent;                                  // 0x114(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CheckedFamilyHeirlooms;                            // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E9D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          RangedWeaponId;                                    // 0x11C(0x8)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          MeleeWeaponId;                                     // 0x124(0x8)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  Power1Id;                                          // 0x12C(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Power2Id;                                          // 0x134(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPlayerRunProgress_C* GetDefaultObj();

	void CheckWeaponConsistancy(class AQtnBodyPawn* bodyPawn, bool* IsInvalid, class AQtnItem* CallFunc_GetIntendedEquippedWeapons_rangedWeapon, class AQtnItem* CallFunc_GetIntendedEquippedWeapons_meleeWeapon, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, const struct FQtnItemData& CallFunc_GetPower2ItemData_ReturnValue, const struct FQtnItemData& CallFunc_GetPower1ItemData_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_NotEqual_GameplayTag_ReturnValue, bool CallFunc_NotEqual_GameplayTag_ReturnValue_1);
	void SaveFamilyHeirlooms();
	void Check_Family_Heirlooms(bool* Player_has_family_heirlooms);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, class FName CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4);
	void OnRunProgressCheckpoint_ServerOnly(class AQtnBodyPawn* PlayerBody, bool FlushMissionProgress);
	void OnReadyForGameplay_ServerOnly(class AQtnPlayerPawn* PlayerPawn, class AQtnBodyPawn* PlayerBody, bool HasCheckpointHappened);
	void OnRunProgressReset_ServerOnly();
	void ExecuteUbergraph_PlayerRunProgress(int32 EntryPoint, class AQtnPlayerPawn* K2Node_Event_playerPawn, class AQtnBodyPawn* K2Node_Event_PlayerBody, bool K2Node_Event_hasCheckpointHappened, class AQtnBodyPawn* K2Node_Event_PlayerBody_1, bool K2Node_Event_flushMissionProgress, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, const struct FQtnItemData& CallFunc_GetPower2ItemData_ReturnValue, TArray<class FName>& CallFunc_GetSessionUnlockedRowNames_ReturnValue, const struct FQtnItemData& CallFunc_GetPower1ItemData_ReturnValue, class AQtnPlayerState* CallFunc_GetOccupyingPlayerState_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_QtnGetUniqueId_ReturnValue, class UQtnEventHandlerMissionStats* CallFunc_GetEventHandlerMissionStatsInstance_ReturnValue, class AQtnItem* CallFunc_GetIntendedEquippedWeapons_rangedWeapon, class AQtnItem* CallFunc_GetIntendedEquippedWeapons_meleeWeapon, float CallFunc_GetStatForPlayer_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FQtnMissionStats& CallFunc_GetMissionStatsForPlayer_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue_1, int32 CallFunc_GetCurrencyQuantity_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput, float CallFunc_GetAttributeValue_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput_1, float CallFunc_GetAttributeValue_ReturnValue_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CheckWeaponConsistancy_IsInvalid, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue_2, class UQtnEventHandlerMissionStats* CallFunc_GetEventHandlerMissionStatsInstance_ReturnValue_1, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue_1, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput_2, float CallFunc_GetAttributeValue_ReturnValue_2, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput_3, float CallFunc_GetAttributeValue_ReturnValue_3, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_SetAttributeValue_self_CastInput, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_SetAttributeValue_self_CastInput_1, class UPlayerSubProgress_Upgrades_C* CallFunc_GetPlayerSubProgress_ServerOnly_ReturnValue);
};

}


