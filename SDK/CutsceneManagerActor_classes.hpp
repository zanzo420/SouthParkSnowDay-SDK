#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x2B8 - 0x250)
// BlueprintGeneratedClass CutsceneManagerActor.CutsceneManagerActor_C
class ACutsceneManagerActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnGoalMarkerComponent*               QtnGoalMarker;                                     // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        NumReadyToAdvance;                                 // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B0E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            CutsceneFinishedForAllPlayers;                     // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        NumPlayersToExpect;                                // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B0F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            DelayFinished;                                     // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            FaceTimeFinishedForAllPlayers;                     // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        Cutscene_ID;                                       // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B10[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Calling_goal_class;                                // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACutsceneManagerActor_C* GetDefaultObj();

	void DebugDisplayCutsceneManagerActor(class UQtnDebugWrapper*& Wrapper, class UQtnDebugWrapper* LocalDebugWrapper, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void Server_PostCutscene();
	void OnEndScene();
	void OnStartScene();
	void DetermineNumberOfPlayers(class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, int32 CallFunc_GetNumberOfPlayers_ReturnValue);
	void Player_Ready_To_Advance(int32 Temp_int_Variable, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Sequence_Holding_Pattern_Prep();
	void Check_Ready_to_Advance(bool* Ready, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void Server_AdjustExpectedPlayerCount(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn);
	void Multicast_StartScene(class ACinematicSceneArchetype_BP_C* Cinematic_actor);
	void Server_ForceDelay(float Delay_time, class FName Delay_ID_Tag);
	void Multicast_PlayGlobalSFX(class USoundCue* Cue);
	void PlayFacetime(float Delay, const struct FTribunal_CharacterResponse& Cue_struct);
	void Multicast_PlayFacetimeVO(const struct FTribunal_CharacterResponse& Cue_struct, float Delay);
	void TriggerReadyCheck();
	void Server_AdjustCountUp(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer);
	void Play(class ACinematicSceneArchetype_BP_C* CinematicActor, int32 Cutscene_ID, class UClass* Calling_goal_class);
	void ReceiveBeginPlay();
	void Multicast_EndScene();
	void ExecuteUbergraph_CutsceneManagerActor(int32 EntryPoint, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul_1, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class ACinematicSceneArchetype_BP_C* K2Node_CustomEvent_cinematic_actor, float K2Node_CustomEvent_delay_time, class FName K2Node_CustomEvent_Delay_ID_Tag, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class USoundCue* K2Node_CustomEvent_cue, float K2Node_CustomEvent_Delay_1, const struct FTribunal_CharacterResponse& K2Node_CustomEvent_cue_struct_1, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_PickScriptedVOVariant_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, const struct FTribunal_CharacterResponse& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_IsGameplayTagValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Check_Ready_to_Advance_ready, const struct FTribunal_CharacterResponse& K2Node_CustomEvent_cue_struct, float K2Node_CustomEvent_Delay, bool CallFunc_Check_Ready_to_Advance_ready_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, bool K2Node_CustomEvent_isLocalPlayer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsServer_ReturnValue_2, class ACinematicSceneArchetype_BP_C* K2Node_CustomEvent_cinematicActor, int32 K2Node_CustomEvent_Cutscene_ID, class UClass* K2Node_CustomEvent_calling_goal_class, bool CallFunc_IsServer_ReturnValue_3, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_1);
	void FaceTimeFinishedForAllPlayers__DelegateSignature(const struct FTribunal_CharacterResponse& Completed_cue);
	void DelayFinished__DelegateSignature(class FName Delay_ID_Tag);
	void CutsceneFinishedForAllPlayers__DelegateSignature(class UClass* Calling_goal_class, int32 Cutscene_ID);
};

}


