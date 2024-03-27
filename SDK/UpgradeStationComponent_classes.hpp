#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x170 - 0x108)
// BlueprintGeneratedClass UpgradeStationComponent.UpgradeStationComponent_C
class UUpgradeStationComponent_C : public UQtnUpgradeStationComponent
{
public:
	TArray<struct FFQtnDebugUpgradeCard>         Debug_PresetCardsArray;                            // 0x108(0x10)(Edit, BlueprintVisible)
	TArray<struct FQtnReactionToTag>             NPCPresentationTags;                               // 0x118(0x10)(Edit, BlueprintVisible)
	bool                                         Debug_AllowInfiniteUses;                           // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Debug_AllowInfiniteRerolls;                        // 0x129(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Debug_PlayInEditor;                                // 0x12A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Debug_VerboseReporting;                            // 0x12B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B47[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnUpgradeCardsArrayUpdatedEvent;                   // 0x130(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUpgradeProcessBegin;                             // 0x140(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUpgradeProcessComplete;                          // 0x150(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUpgradeRerollEvent;                              // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UUpgradeStationComponent_C* GetDefaultObj();

	void ResetSpecificPlayer_ServerOnly(class AQtnBodyPawn* PlayerToReset, const TArray<class UQtnUpgradeSession*>& NewPlayerSessionArray, class UQtnUpgradeSession* CallFunc_FindAssociatedUpgradeSession_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void CalculatePlayerBonusQuantity(class AQtnBodyPawn* bodyPawn, int32* Value, class UPerk_AceInTheHole_C* CallFunc_FindPerk_ReturnValue, const struct FQtnReactionToTag& K2Node_MakeStruct_QtnReactionToTag, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, float CallFunc_GetValueOfPerk_ReturnValue, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	void CalculatePlayerRollQuantity(class AQtnBodyPawn* bodyPawn, int32* Value, class UPerk_OnlyTheBest_C* CallFunc_FindPerk_ReturnValue, bool CallFunc_IsPerkActive_ReturnValue, float CallFunc_GetValueOfPerk_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FQtnReactionToTag& K2Node_MakeStruct_QtnReactionToTag, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void RollUpgrades(class AQtnBodyPawn* TargetPawn, TArray<struct FQtnRolledUpgradeResult>& RollHistory, bool AllowRerolls, TArray<struct FQtnRolledUpgradeResult>* Results, int32* RollQuantity, int32* BonusQuantity, int32 BonusQuant, int32 RollQuant, int32 CallFunc_CalculatePlayerBonusQuantity_Value, int32 CallFunc_CalculatePlayerRollQuantity_Value, TArray<struct FQtnRolledUpgradeResult>& CallFunc_RollUpgrades_ReturnValue);
	void ResetCurrentPlayers(const TArray<class UQtnUpgradeSession*>& LOCAL_EmptyArray, bool CallFunc_IsServer_ReturnValue);
	void HaveExpectedPlayersUpgraded__Q(bool* HaveAllUpgraded, int32 UpgradedPlayers, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_GetExpectedUpgradingPlayersCount____Count, class UQtnUpgradeSession* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void GetExpectedUpgradingPlayersCount___(int32* Count, int32 CallFunc_GetNumberOfPlayers_ReturnValue);
	void IsServer___(bool* IsServer, bool CallFunc_IsServer_ReturnValue);
	void GetActiveUpgradingPlayers__h__h__f__f(int32* Count, int32 ValueCount, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable, class UQtnUpgradeSession* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void FindPlayerData___(class ABodyPawnPlayer_C* TargetPlayer, bool* FoundPlayer, class UPlayerUpgradeSessionState_C** PlayerSession, int32* PlayerIndex, int32 Temp_int_Array_Index_Variable, class AQtnPlayerState* CallFunc_GetOccupyingPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer____IsServer, class UQtnUpgradeSession* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPlayerUpgradeSessionState_C* K2Node_DynamicCast_AsPlayer_Upgrade_Session_State, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_MatchesQtnUniqueId_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void RegisterNewPlayer___(class ABodyPawnPlayer_C* TargetBodyPawn, class UPlayerPlacementComp_C* PlacementSlot, class APlayerTribunalSlot_BP_C* TribunalSlot, const TArray<class UQtnUpgradeSession*>& LocalPlayerArray, class UPlayerUpgradeSessionState_C* TargetPlayerState, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IInterface_UpgradeStation_BP_C> K2Node_DynamicCast_AsInterface_Upgrade_Station_BP, bool K2Node_DynamicCast_bSuccess, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, class AScriptedSkeletalActor_Trial_C* CallFunc_DoGetSpawnedUpgradeCharacter_spawnedUpgradeCharacter, bool K2Node_SwitchEnum_CmpSuccess, class UPlayerUpgradeSessionState_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void OnUpgradeRerollEvent__DelegateSignature(class UPlayerUpgradeSessionState_C* UpgradeSession);
	void OnUpgradeProcessComplete__DelegateSignature(class UPlayerUpgradeSessionState_C* UpgradeSession);
	void OnUpgradeProcessBegin__DelegateSignature(class UPlayerUpgradeSessionState_C* UpgradeSession);
	void OnUpgradeCardsArrayUpdatedEvent__DelegateSignature(class UPlayerUpgradeSessionState_C* UpgradeSession);
};

}


