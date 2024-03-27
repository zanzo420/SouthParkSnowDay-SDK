#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B0 (0x290 - 0xE0)
// BlueprintGeneratedClass EnemyBSManagerComponent.EnemyBSManagerComponent_C
class UEnemyBSManagerComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        Enemy_BS_Events_Allowed_This_Session;              // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Show_Debug_Text;                                   // 0xEC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7270[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        R_CurrentEnemyBSList;                              // 0xF0(0x10)(Edit, BlueprintVisible, Net, Transient, DisableEditOnInstance)
	TArray<TSoftClassPtr<class UEnemyCheatActivationVerbBase_C>> FallbackBullshitList;                              // 0x100(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                        PendingBullshits_ServerOnly;                       // 0x110(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	class UClass*                                ChosenBullshit_ServerOnly;                         // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABodyPawnAI_C*>                 ChosenBullshitters_ServerOnly;                     // 0x128(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class ABodyPawnAI_C*>                 ActiveBullshitters_ServerOnly;                     // 0x138(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            StartedEnemyBullshit;                              // 0x148(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            BullshitIncremented;                               // 0x158(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            BullshitDecremented;                               // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class UClass*, struct FFQtnActiveBullshitData> ActiveBullshitMap;                                 // 0x178(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            BullshitCountChangedEvent;                         // 0x1C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class UClass*, int32>                   OpenBSWindows;                                     // 0x1D8(0x50)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	TArray<class UClass*>                        Debug_RolledBullshits;                             // 0x228(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ASkirmishBase_C*                       LastSkirmishThatOpenedBS;                          // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UDamageReceptorBodyPawn_C*>     DamageImmuneReceptors_ServerOnly;                  // 0x240(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AQtnBodyPawn*>                  ValidBullshitCamTargets;                           // 0x250(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	class USoundBase*                            EnemyBSAnnounceSound;                              // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ForceEndPlayerWeaponBullshit;                      // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABodyPawnAI_C*                         FTUX_Bullshitter;                                  // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            IncrementedPlayerBullshitCount;                    // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UEnemyBSManagerComponent_C* GetDefaultObj();

	void RefundPlayerResources_ServerOnly(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, int32 CallFunc_Array_Length_ReturnValue, class AQtnBodyPawn* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UQtnVerb* CallFunc_GetCurrentActiveVerb_ReturnValue, class UCheat_HeatVisionVerb_C* K2Node_DynamicCast_AsCheat_Heat_Vision_Verb, bool K2Node_DynamicCast_bSuccess);
	void CallBullshitAndScreenShake(float* Duration, enum class EQtnPlatform Temp_byte_Variable, class UForceFeedbackEffect* Temp_object_Variable, class UForceFeedbackEffect* Temp_object_Variable_1, class UForceFeedbackEffect* Temp_object_Variable_2, class UForceFeedbackEffect* Temp_object_Variable_3, class UForceFeedbackEffect* Temp_object_Variable_4, class UForceFeedbackEffect* Temp_object_Variable_5, enum class EQtnPlatform CallFunc_GetPlatform_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UForceFeedbackEffect* K2Node_Select_Default, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1);
	void ClearAllBSWindows_ServerOnly(int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void CloseBSWindow_ServerOnly(class UClass* BSType, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void OpenBSWindow_ServerOnly(class UClass* BSType, class ASkirmishBase_C* FromSkirmish, int32 Temp_int_Variable, const class FString& CallFunc_GetClassDisplayName_ReturnValue, int32 Temp_int_Variable_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void SetActiveInstanceTime(class UClass* BSClass, float Duration, float CallFunc_GetCombatInhibitableSeconds_ReturnValue, const struct FFQtnActiveBullshitData& K2Node_MakeStruct_FQtnActiveBullshitData, const struct FFQtnActiveBullshitData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FFQtnActiveBullshitData& K2Node_SetFieldsInStruct_StructOut);
	void AddActiveInstanceCount(class UClass* BSClass, int32 ValueToAdd, class AQtnBodyPawn* AffectedBody, float TimerMax, bool* IsActive, int32* Count, int32 Local_OldCount, int32 Local_Count, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FFQtnActiveBullshitData& K2Node_MakeStruct_FQtnActiveBullshitData, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFQtnActiveBullshitData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FFQtnActiveBullshitData& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_Map_Contains_ReturnValue);
	void GetBullshitActiveBullshitters(class UClass* Bullshit, int32* NumActiveBullshitters, class UClass* BullshitToCheck, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Map_Contains_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapForHordeMode_outputPin, TArray<class UClass*>& CallFunc_Map_Keys_Keys, bool K2Node_SwitchEnum_CmpSuccess, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FFQtnActiveBullshitData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void GetBullshitTimeRemaining(class UClass* Bullshit, float* RemainingTime, bool* Active, class UClass* BullshitToCheck, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapForHordeMode_outputPin, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, TArray<class UClass*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Add_IntInt_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool CallFunc_ClassIsChildOf_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapForHordeMode_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_1, float CallFunc_GetCombatInhibitableSeconds_ReturnValue, const struct FFQtnActiveBullshitData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void DebugDisplayEnemyBSManager(class UQtnDebugWrapper*& DebugWrapper, class UQtnDebugWrapper* LocalDebugWrapper, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetClassNameWithoutSuffix_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Update_Active_Bullshitter_List_Server_Only();
	void Set_Chosen_Bullshitters_Damage_Immunity(bool Should_Take_Damage, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class UDamageReceptorBodyPawn_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class ABodyPawnAI_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue);
	void Get_Distance_To_Closest_Player(class ABodyPawnAI_C* Pawn_To_Check, float* Distance_To_Closest_Player, float Shortest_Distance_So_Far, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, class AQtnBodyPawn* CallFunc_Array_Get_Item, class AQtnBodyPawn* CallFunc_Array_Get_Item_1, float CallFunc_GetDistanceTo_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	void Choose_Closest_To_Player_Server_Only(TArray<class ABodyPawnAI_C*>& Pawns_To_Choose_From, class ABodyPawnAI_C** Closest, float Shortest_Distance, class ABodyPawnAI_C* Closest_So_Far, int32 Temp_int_Array_Index_Variable, class ABodyPawnAI_C* CallFunc_Array_Get_Item, class ABodyPawnAI_C* CallFunc_Array_Get_Item_1, float CallFunc_Get_Distance_To_Closest_Player_Distance_To_Closest_Player, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Get_Distance_To_Closest_Player_Distance_To_Closest_Player_1);
	void Get_Enemies_Near_Players(TArray<class ABodyPawnAI_C*>* Enemies_Near_Players, const TArray<class ABodyPawnAI_C*>& Found_Enemies, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TArray<class ABodyPawnAI_C*>& K2Node_MakeArray_Array, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, int32 CallFunc_Array_Length_ReturnValue, class AQtnPlayerPawn* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AQtnPlayerController* CallFunc_GetQtnPlayerController_ReturnValue, TArray<class AQtnPawn*>& CallFunc_GetTrackedThreats_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class AQtnPawn* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_AddUnique_ReturnValue);
	void Reset_For_Next_Bullshit_Server_Only(const TArray<class ABodyPawnAI_C*>& Safe_Delete_Array, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABodyPawnAI_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, enum class EQtnBodyAliveness CallFunc_GetBodyAliveness_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue);
	void Is_AI_Healthy_Enough_For_Bullshit(float Minimum_Health_Fraction, class ABodyPawnAI_C* AI_to_check, bool* Is_Healthy, float CallFunc_GetHealthRatio_healthRatio, enum class EQtnBodyAliveness CallFunc_GetBodyAliveness_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Finalize_Bullshitter_List_Server_Only(TArray<class ABodyPawnAI_C*>& AI_To_Choose_From, int32 Number_To_Choose, const TArray<class ABodyPawnAI_C*>& Preferred_Bullshitters, const TArray<class ABodyPawnAI_C*>& Potential_Bullshitters, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class ABodyPawnAI_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, bool CallFunc_IsInActiveCombatPursuit_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class ABodyPawnAI_C* CallFunc_Array_Get_Item_1, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, class ABodyPawnAI_C* CallFunc_Choose_Closest_To_Player_Server_Only_Closest, bool CallFunc_Array_RemoveItem_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Array_AddUnique_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue);
	void Apply_Bullshit_Server_Only(int32 Temp_int_Array_Index_Variable, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidSoftClassReference_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class UEnemyCheatActivationVerbBase_C* CallFunc_GetClassDefaultObject_ReturnValue, class ABodyPawnAI_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Can_AI_Use_Bullshit_Server_Only(class ABodyPawnAI_C* AI_to_check, class UClass* Bullshit, bool* This_AI_Can_Use_This_Bullshit, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsInDeepSnow_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Is_AI_Healthy_Enough_For_Bullshit_Is_Healthy, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool CallFunc_IsEnemy_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Array_Contains_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<TSoftClassPtr<class AQtnBodyPawn>>& Temp_softclass_Variable, TSoftClassPtr<class AQtnBodyPawn> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsQtn_Body_Pawn, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Find_Appropriate_Bullshitters_for_Chosen_Bullshit_Server_Only(class UClass* Bullshit_to_Check, TArray<class ABodyPawnAI_C*>& AI_to_check, bool* This_Bullshit_Can_Start, const class FString& BullshitRequester, class UClass* Bullshit, const TArray<class ABodyPawnAI_C*>& Potential_Bullshitters, int32 Bullshitters_To_Find, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class ABodyPawnAI_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Can_AI_Use_Bullshit_Server_Only_This_AI_Can_Use_This_Bullshit, bool CallFunc_Greater_IntInt_ReturnValue);
	void Choose_Bullshitters_Server_Only(TArray<class ABodyPawnAI_C*>& Enemy_AI_To_Check, class UClass* Bullshit, bool* Can_Start, const class FString& BullshitRequester, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_GetClassDisplayName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Find_Appropriate_Bullshitters_for_Chosen_Bullshit_Server_Only_This_Bullshit_Can_Start, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class ABodyPawnAI_C* CallFunc_Array_Get_Item, bool CallFunc_Can_AI_Use_Bullshit_Server_Only_This_AI_Can_Use_This_Bullshit, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue);
	void Create_Bullshit_List_Server_Only(TArray<class UClass*>& Enemy_Cheat_Verbs, int32 RandomInt, const TArray<class UClass*>& BullshitsToChooseFrom, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, class UQtnSpokeManager* CallFunc_GetSpokeManager_ReturnValue, class UQtnSpokeManager* CallFunc_GetSpokeManager_ReturnValue_1, class USpokeManagerBP_C* K2Node_DynamicCast_AsSpoke_Manager_BP, bool K2Node_DynamicCast_bSuccess, TArray<class UQtnSpokeComponent*>& CallFunc_GetRegisteredSpokes_ReturnValue, class UQtnSpokeComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class USpokeBP_C* K2Node_DynamicCast_AsSpoke_BP, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UClass* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue, TArray<class UClass*>& Temp_wildcard_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, class UClass* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class UClass*>& Temp_wildcard_Variable_1, int32 CallFunc_Array_Length_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, TSoftClassPtr<class UEnemyCheatActivationVerbBase_C> CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_6, class UClass* CallFunc_SyncLoadClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, class UClass* K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base, bool K2Node_ClassDynamicCast_bSuccess, int32 CallFunc_Array_AddUnique_ReturnValue, class UQtnGlobalRunProgress* CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void ReceiveTick(float DeltaSeconds);
	void ActivateEnemyCheat(class UClass* CheatClass, class AQtnBodyPawn* bodyPawn);
	void BeginBullshitPresentation_ServerOnly();
	void StartEnemyBullshit_Multicast(class UClass* Bullshit);
	void UIDataBullshitActivated_Multicast(class UClass* StartedBullshit, float TimerMax, class AQtnBodyPawn* AffectedBody);
	void UIDataBullshitDeactivated_Multicast(class UClass* StoppedBullshit, class AQtnBodyPawn* AffectedBody);
	void PlayVOAndApplyBullshit_ServerOnly();
	void ShowCardLightningInWorld();
	void EndNerfs_ServerOnly();
	void ReceiveBeginPlay();
	void ClearNerfedUI_Multicast();
	void ClearStupidProjectilesUI_Multicast();
	void ResetTimedBullshitTimer_Multicast(class UClass* Bullshit, float Time);
	void FTUX_BSAttempt_ServerOnly(class ABodyPawnAI_C* Body_Pawn_AI);
	void bindFTUXCloseEvent_ServerOnly();
	void CloseTheWindow_ServerOnly(class UClass* Bullshit);
	void ManualStartBSPresentation();
	void MakeBullshitTargetReact_ServerOnly(class UClass* Bullshit);
	void ExecuteUbergraph_EnemyBSManagerComponent(int32 EntryPoint, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float K2Node_Event_DeltaSeconds, class UClass* K2Node_CustomEvent_cheatClass, class AQtnBodyPawn* K2Node_CustomEvent_BodyPawn, int32 Temp_int_Loop_Counter_Variable_2, class UBodyBSComponent_C* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Add_Cheat_ServerOnly_Addition_Successful, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, class UClass* K2Node_CustomEvent_Bullshit_3, class UClass* K2Node_CustomEvent_StartedBullshit, float K2Node_CustomEvent_TimerMax, class AQtnBodyPawn* K2Node_CustomEvent_AffectedBody_1, class UClass* K2Node_CustomEvent_StoppedBullshit, class AQtnBodyPawn* K2Node_CustomEvent_AffectedBody, bool CallFunc_AddActiveInstanceCount_IsActive, int32 CallFunc_AddActiveInstanceCount_Count, bool CallFunc_AddActiveInstanceCount_IsActive_1, int32 CallFunc_AddActiveInstanceCount_Count_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class UClass*>& CallFunc_Map_Keys_Keys, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class UEnemyCheatActivationVerbBase_C* CallFunc_GetClassDefaultObject_ReturnValue, float CallFunc_CallBullshitAndScreenShake_Duration, TArray<class AQtnBodyPawn*>& CallFunc_GatherValidBullshitCamTargets_ServerOnly_ValidCamTargets, bool CallFunc_IsServer_ReturnValue_1, TArray<class ABodyPawnAI_C*>& CallFunc_Get_Enemies_Near_Players_Enemies_Near_Players, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Choose_Bullshitters_Server_Only_Can_Start, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class AQtnBodyPawn* CallFunc_Array_Get_Item_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, class AQtnBodyPawn* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class UStatusEffect_BS_StupidProjectiles_C* CallFunc_GetStatusEffect_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, class UStatusEffect_BS_Nerfed_C* CallFunc_GetStatusEffect_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UClass* K2Node_CustomEvent_Bullshit_2, float K2Node_CustomEvent_Time, class ABodyPawnAI_C* K2Node_CustomEvent_Body_Pawn_AI, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_3, class UClass* K2Node_CustomEvent_Bullshit_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsServer_ReturnValue_4, class UClass* K2Node_CustomEvent_Bullshit, class UEnemyCheatActivationVerbBase_C* CallFunc_GetClassDefaultObject_ReturnValue_1);
	void IncrementedPlayerBullshitCount__DelegateSignature();
	void ForceEndPlayerWeaponBullshit__DelegateSignature();
	void BullshitCountChangedEvent__DelegateSignature(class UClass* BSClass, int32 NewCount, int32 OldCount, class AQtnBodyPawn* AffectedBody, float TimerMax);
	void BullshitDecremented__DelegateSignature(class UClass* StoppedBullshit);
	void BullshitIncremented__DelegateSignature(class UClass* ChosenBullshit, float TimerMax);
	void StartedEnemyBullshit__DelegateSignature(class UClass* Bullshit);
};

}

