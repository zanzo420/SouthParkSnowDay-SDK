#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x1B8 - 0xE0)
// BlueprintGeneratedClass BattlefieldTrackingComponent.BattlefieldTrackingComponent_C
class UBattlefieldTrackingComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<int32, class ADirector_C*>              Battlefield_Directors;                             // 0xE8(0x50)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	int32                                        Battlefield_Of_Current_Tribunal;                   // 0x138(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Tribunal_Active;                                // 0x13C(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7219[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABodyPawnBase_C*>               NonPlayerBodies;                                   // 0x140(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class ABodyPawnAIAllyBot_C*>          AllyBotBodies;                                     // 0x150(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class ABodyPawnBase_C*>               PlayerBodies;                                      // 0x160(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         R_GameOver;                                        // 0x170(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_721A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeDeadWithNoBots;                                // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        TrackedActors;                                     // 0x178(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABodyPawnAIChaosMinion_C*>      ChaosMinionBodies;                                 // 0x188(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance, ContainsInstancedReference)
	class AQtnGameStateArchetype_C*              Game_State_Archetype;                              // 0x198(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABodyPawnBase_C*>               PlayerAndAllyBodies;                               // 0x1A0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance, ContainsInstancedReference)
	class AUpgradeStation_BP_C*                  ActiveUpgradeStation_LocalOnly;                    // 0x1B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBattlefieldTrackingComponent_C* GetDefaultObj();

	void GetPlayerAndAllyPawns(TArray<class AQtnPawn*>* PlayerAndAllyPawns);
	void PurgeAllChaosMinions_ServerOnly(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABodyPawnAIChaosMinion_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void UnRegisterChaosMinionBody(class ABodyPawnAIChaosMinion_C* ChaosMinionBody, class ABodyPawnAIChaosMinion_C* Temp_object_Variable, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1);
	void RegisterChaosMinionBody(class ABodyPawnAIChaosMinion_C* ChaosMinionBody, class ABodyPawnAIChaosMinion_C* Temp_object_Variable, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void UnregisterTrackedActor(class AActor* ActorToTrack, class AActor* Temp_object_Variable, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1);
	void RegisterTrackedActor(class AActor* ActorToTrack, class AActor* Temp_object_Variable, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void Destroy_All_Non_Players_Marked_For_Cleanup_Server_Only(bool ConsiderDeadBodiesMarked, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AQtnBodyPawn* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsDead_canBeRevived, bool CallFunc_IsDead_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsMarkedForCleanup_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void OnRep_r_GameOver(class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UMenuMapExit_Screen_C* CallFunc_GetScreen_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UMenuMapExit_Widget_C* K2Node_DynamicCast_AsMenu_Map_Exit_Widget, bool K2Node_DynamicCast_bSuccess);
	void Check_Game_Over_Server_Only(float DeltaSeconds, bool IsAnyPlayerAlive, bool AreAnyBotsAlive, bool IsAnyPlayerReviveable, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class AQtnBodyPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsDead_canBeRevived, bool CallFunc_IsDead_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, class AQtnBodyPawn* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsDead_canBeRevived_1, bool CallFunc_IsDead_ReturnValue_1);
	void GetPlayerAndBotBodies(TArray<class ABodyPawnBase_C*>* Bodies, const TArray<class ABodyPawnBase_C*>& Result);
	void UnRegisterPlayerBody(class ABodyPawnBase_C* PlayerBody, class ABodyPawnBase_C* Temp_object_Variable, class ABodyPawnBase_C* Temp_object_Variable_1, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue_2, bool CallFunc_Array_RemoveItem_ReturnValue_3);
	void RegisterPlayerBody(class ABodyPawnBase_C* PlayerBody, class ABodyPawnBase_C* Temp_object_Variable, class ABodyPawnBase_C* Temp_object_Variable_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1);
	void UnRegisterAllyBotBody(class ABodyPawnAIAllyBot_C* AllyBotBody, class ABodyPawnAIAllyBot_C* Temp_object_Variable, class ABodyPawnBase_C* Temp_object_Variable_1, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue_2, bool CallFunc_Array_RemoveItem_ReturnValue_3);
	void RegisterAllyBotBody(class ABodyPawnAIAllyBot_C* AllyBotBody, class ABodyPawnAIAllyBot_C* Temp_object_Variable, class ABodyPawnBase_C* Temp_object_Variable_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1);
	void UnRegisterNonPlayerBody(class ABodyPawnBase_C* NonPlayerBody, class ABodyPawnBase_C* Temp_object_Variable, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1);
	void RegisterNonPlayerBody(class ABodyPawnBase_C* NonPlayerBody, class ABodyPawnBase_C* Temp_object_Variable, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void RegisterDirector(class ADirector_C* Director, bool CallFunc_Map_Contains_ReturnValue);
	void Revive_Players_and_Bots_Server_Only(bool DidReviveAnyone, const TArray<class AQtnBodyPawn*>& AliveBodies, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, class AQtnBodyPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsDead_canBeRevived, bool CallFunc_IsDead_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class AQtnBodyPawn* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDead_canBeRevived_1, bool CallFunc_IsDead_ReturnValue_1, class AQtnBodyPawn* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void Get_Director_Of_Current_Tribunal(class ADirector_C** Current_Tribunal_s_Director, bool* Director_Found_, bool* Tribunal_Active_, bool CallFunc_Less_IntInt_ReturnValue, class ADirector_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Contains_ReturnValue);
	void Register_Start_of_Tribunal(class AActor* Instigating_Actor, const struct FVector& LOCAL_Position_To_Test, bool Battlefield_Found, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, class ADirector_C* Temp_wildcard_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float Temp_float_Variable, TArray<class ADirector_C*>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, class ADirector_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_GetUnscaledBoxExtent_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsPointInBoxWithTransform_ReturnValue, float CallFunc_Vector_DistanceSquared_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void Register_Start_Of_Known_Battlefield_Tribunal(int32 Battlefield_Index);
	void Register_End_Of_Tribunal();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BattlefieldTrackingComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaSeconds, bool CallFunc_IsServer_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapAMissionWorldBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess);
};

}


