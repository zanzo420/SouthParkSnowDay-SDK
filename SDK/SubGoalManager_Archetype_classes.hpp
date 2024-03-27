#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10C (0x35C - 0x250)
// BlueprintGeneratedClass SubGoalManager_Archetype.SubGoalManager_Archetype_C
class ASubGoalManager_Archetype_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        OrderedListOfGoals;                                // 0x260(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ASubGoalArchetype_C*>           SubGoalActors;                                     // 0x270(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        CurrentGoalIndex;                                  // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5986[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASubGoalArchetype_C*                   CurrentGoal;                                       // 0x288(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         LocalInit;                                         // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Local_Late;                                        // 0x291(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5987[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FrobbablesPercentage;                              // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SmashablesPercentage;                              // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AmazingFrobbablesPercentage;                       // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LootInit;                                          // 0x2A0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5988[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AQtnLevelLootSpawner_C*>        Smashables;                                        // 0x2A8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AQtnLevelLootSpawner_C*>        AverageFrobbables;                                 // 0x2B8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AQtnLevelLootSpawner_C*>        AmazingFrobbables;                                 // 0x2C8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            GoalEndedEvent;                                    // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            GoalNotifyEvent;                                   // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        NumReadyToAdvance;                                 // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumRequiredToAdvance;                              // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurEvent;                                          // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5989[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASubGoalArchetype_C*                   GoalToSend;                                        // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFinalLevel;                                      // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_598A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Num_XP_Events;                                     // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumLoot_Smashables;                                // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumLoot_AverageFrob;                               // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumLoot_AmazingFrob;                               // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_598C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ALoot_Container_TreasureChest_C*> RegisteredTreasure;                                // 0x328(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class ALoot_Container_Lunchbox_C*>    RegisteredAvgFrob;                                 // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class ALoot_Container_Parent_Smash_C*> RegisteredSmashables;                              // 0x348(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        NumLoot_CardPackChests;                            // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASubGoalManager_Archetype_C* GetDefaultObj();

	void GetTotalLootInstances(TArray<class UClass*>& External_loot, int32* Num_Treasure_Chests, int32* Num_Avg_Frobs, int32* Num_Smashables, int32* NumCardPackChests, int32 LOCAL_NumExternal_CardPackChest, int32 LOCAL_NumExternal_Chests, int32 LOCAL_NumExternal_AvgFrobs, int32 LOCAL_NumExternal_Smashables, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UClass* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_3);
	void ServerRegisterExternalLoot();
	void Server_RegisterXPEvents(int32 Temp_int_Array_Index_Variable, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue);
	void SpawnPercentageOfTotalLootType(float Percentage_of_total, TArray<class AQtnLevelLootSpawner_C*>& Loot_spawners, enum class EQtnLootType_Enum Loot_type, const TArray<class AQtnLevelLootSpawner_C*>& LOCAL_Spawners, class UClass* LOCAL_classToSpawn);
	void InitLevelLoot(int32 LOCAL_totalSmashables, float NumAmazingFrobbables, float NumFrobbables, float NumSmashables, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AQtnLevelLootSpawner_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_IsServer_ReturnValue, class AQtnLevelLootSpawner_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateCurrentGoalInfo(class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess);
	void OnRep_currentGoal();
	void StartNextGoal(class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanOR_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_2, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_3, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_2, bool K2Node_DynamicCast_bSuccess_2, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_3, bool K2Node_DynamicCast_bSuccess_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UClass* CallFunc_Array_Get_Item, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ASubGoalArchetype_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void InitSubGoals(int32 Index, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_Array_Get_Item, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ASubGoalArchetype_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void BindEndGoalEvents(class ASubGoalArchetype_C* Starting_goal);
	void Server_SetPlayerPresenceInWorld(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer);
	void HandleEndGoal(class ASubGoalArchetype_C* Completed_goal);
	void NotifyClientsEndGoal(class UClass* GoalClass);
	void GoalNotify(class ASubGoalArchetype_C* GoalArchetype, int32 EventNum);
	void ClientGoalNotifyEvent_MC(int32 EventNum, class UClass* SubGoal);
	void ExecuteUbergraph_SubGoalManager_Archetype(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, bool K2Node_CustomEvent_isLocalPlayer, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class ASubGoalArchetype_C* K2Node_CustomEvent_completed_goal, bool CallFunc_IsServer_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UClass* K2Node_CustomEvent_goalClass, bool CallFunc_IsLocalPlayerUIReadyBP_ReturnValue, class ASubGoalArchetype_C* K2Node_CustomEvent_GoalArchetype, int32 K2Node_CustomEvent_EventNum_1, int32 K2Node_CustomEvent_EventNum, class UClass* K2Node_CustomEvent_SubGoal, class UClass* CallFunc_GetObjectClass_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_2, TArray<class ADirector_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ADirector_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsServer_ReturnValue_3, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class ASubGoalArchetype_C* K2Node_CustomEvent_starting_goal, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Event_DeltaSeconds, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void GoalNotifyEvent__DelegateSignature(class UClass* GoalClass, int32 EventNum, class ASubGoalManager_Archetype_C* Manager);
	void GoalEndedEvent__DelegateSignature(class UClass* GoalClass);
};

}


