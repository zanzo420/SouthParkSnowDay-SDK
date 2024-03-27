#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x83 - 0x78)
// BlueprintGeneratedClass QtnUpgradeArchetype.QtnUpgradeArchetype_C
class UQtnUpgradeArchetype_C : public UQtnUpgrade
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x78(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         DebugMessages;                                     // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SendSlottedGameplayEvents;                         // 0x81(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         RequiresUnlockToUse;                               // 0x82(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UQtnUpgradeArchetype_C* GetDefaultObj();

	void TrackNewUpgrades(class UQtnUpgradeSlot* Slot, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, TSoftClassPtr<class UQtnUpgradeArchetype_C> CallFunc_Conv_ClassToSoftClassReference_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess);
	void Handle_Achievements_Server_Only(class AQtnBodyPawn* TargetPawn, const struct FQtnRolledUpgradeData& RolledData, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1);
	bool IsUnlocked(class AQtnBodyPawn* TargetBodyPawn, class UQtnUnlocksComponent* CallFunc_GetUnlocksComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsUnlocked_ReturnValue);
	void OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress);
	void OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData);
	void OnUpgradeRolledDataChangedEvent(class UQtnUpgradeSlot* OwningSlot, struct FQtnRolledUpgradeData& PreviousRolledData, struct FQtnRolledUpgradeData& NewRolledData);
	void ExecuteUbergraph_QtnUpgradeArchetype(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, bool K2Node_Event_LoadedRunProgress, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FName CallFunc_GetTagName_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FName CallFunc_GetTagName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, float CallFunc_GetValueOfUpgrade_ReturnValue_1, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, class UClass* CallFunc_GetObjectClass_ReturnValue, class UQtnUpgradeSlot* K2Node_Event_OwningSlot, const struct FQtnRolledUpgradeData& K2Node_Event_PreviousRolledData, const struct FQtnRolledUpgradeData& K2Node_Event_NewRolledData, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, class FName CallFunc_GetTagName_ReturnValue_2, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, float CallFunc_GetValueOfUpgrade_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Conv_FloatToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const struct FQtnTagPresence& K2Node_MakeStruct_QtnTagPresence, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, int32 CallFunc_Array_AddUnique_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, bool CallFunc_IsServer_ReturnValue_1);
};

}


