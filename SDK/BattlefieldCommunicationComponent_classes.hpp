#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x160 (0x240 - 0xE0)
// BlueprintGeneratedClass BattlefieldCommunicationComponent.BattlefieldCommunicationComponent_C
class UBattlefieldCommunicationComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FRandomStream                         AudioStream;                                       // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	TArray<class USoundCue*>                     KyleDefeatCues;                                    // 0xF0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USoundCue*>                     CartmanVictoryCues;                                // 0x100(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundCue*                             PlayedCue;                                         // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USoundCue*>                     KyleStartVO;                                       // 0x118(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USoundCue*>                     CartmanStartVO;                                    // 0x128(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        Delay;                                             // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C72[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USoundCue*>                     CurKyleVO;                                         // 0x140(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USoundCue*>                     CurCartmanVO;                                      // 0x150(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         StartingArena;                                     // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C73[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CurrentAudio;                                      // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CueLength;                                         // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C74[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             ArenaVictoryCue;                                   // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Config_TrialMusic;                                 // 0x180(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CurrentMusic;                                      // 0x188(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             CueToPlay;                                         // 0x190(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FinalArena;                                        // 0x198(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WasInBattle;                                       // 0x199(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C75[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LastVODuration;                                    // 0x19C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ResumeMusic;                                       // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         LegacyCall;                                        // 0x1A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C76[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTribunal_CharacterResponse>   VOQueue;                                           // 0x1A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         VOActive;                                          // 0x1B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C77[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            VOFinished;                                        // 0x1C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UObject*>                       CombatMusicInducers;                               // 0x1D0(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	TArray<class UObject*>                       CombatMusicInhibitors;                             // 0x1E0(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	bool                                         IsMusicDesired;                                    // 0x1F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsTrialMusicDesired;                               // 0x1F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsCombatMusicDesired;                              // 0x1F2(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsInAMissionWorld;                                 // 0x1F3(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C78[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            MusicDataTable;                                    // 0x1F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USoundCue*>                     CombatMusicOverrideStack;                          // 0x200(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	class USoundCue*                             ExplorationMusic;                                  // 0x210(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             CombatMusic;                                       // 0x218(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnGameStateArchetype_C*              GameState;                                         // 0x220(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                MusicalActorOverride;                              // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                       GlobalMusicInhibitors;                             // 0x230(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBattlefieldCommunicationComponent_C* GetDefaultObj();

	void RemoveMusicInhibitor(class UObject* Inhibitor, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void AddMusicInhibitor(class UObject* Inhibitor, bool LocalWasEmpty, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void DebugDisplayBattlefieldComm(class UQtnDebugWrapper*& DebugWrapper, class UQtnDebugWrapper* LocalDebugWrapper, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetClassNameFromObject_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FColor& CallFunc_MakeRandomColor_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue);
	void CalculateAliveEnemies(int32* NumEnemies, int32 AliveEnemies, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class ABodyPawnBase_C* CallFunc_Array_Get_Item, bool CallFunc_IsAliveAndConscious_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
	void EvaluateMusicParameters(int32 WallaIntensity, int32 NumEnemies, int32 CallFunc_CalculateAliveEnemies_NumEnemies, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess);
	void ChangeMusicFromCombatInducers();
	void EvaluateCombatMusic(bool ForceNewMusic, bool WantCombatMusic, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1);
	void PopCombatMusicOverride(bool ForceMusicEvaluation, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void PushCombatMusicOverride(TSoftObjectPtr<class USoundCue> CombatMusicOverride, class AActor* AttachedActorOverride, bool ForceMusicEvaluation, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class USoundCue* K2Node_DynamicCast_AsSound_Cue, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue);
	void RemoveCombatMusicInhibitor(class UObject*& Inhibitor, bool CallFunc_Array_RemoveItem_ReturnValue);
	void AddCombatMusicInhibitor(class UObject*& Inhibitor, int32 CallFunc_Array_AddUnique_ReturnValue);
	void RemoveCombatMusicInducer(class UObject*& Inducer, bool CallFunc_Array_RemoveItem_ReturnValue);
	void AddCombatMusicInducer(class UObject*& Inducer, int32 CallFunc_Array_AddUnique_ReturnValue);
	void StopMusic(float FadeOutDuration, bool CallFunc_IsValid_ReturnValue);
	void SelectMusic(class USoundCue** Music, const struct FQtnMusicSet& Local_musicSet, int32 CallFunc_Array_LastIndex_ReturnValue, class USoundCue* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_AreBotsOrPlayersInCombat_ReturnValue);
	void PlayMusic(class USoundCue* Local_selectedMusic, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class USoundCue* CallFunc_SelectMusic_music);
	void Toggle_Music_Internal(bool On);
	void LoadMusic(class FName CallFunc_GetMusicDataTableRowName_ReturnValue, const struct FQtnMusicSet& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class USoundCue* K2Node_DynamicCast_AsSound_Cue, bool K2Node_DynamicCast_bSuccess, class USoundCue* K2Node_DynamicCast_AsSound_Cue_1, bool K2Node_DynamicCast_bSuccess_1);
	void ProcessVOQueue(bool* QueueEmpty, const struct FTribunal_CharacterResponse& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void EventToggleTrialMusic(bool On);
	void ReceiveBeginPlay();
	void EventStartExploreMusic();
	void UIFeedback(bool Starting, bool IsCartman, enum class EQtnVOSpeaker Speaker, const struct FTribunal_CharacterResponse& ResponseStruct, bool ResumeMusic);
	void Ready(class AQtnPlayerController* LocalPlayerController, class AQtnPlayerUI* LocalPlayerUI, class AQtnBodyPawn* LocalOccupiedBodyPawn);
	void PlayGlobalFacetimeVO(enum class EQtnVOSpeaker Speaker, bool In_battle, const struct FTribunal_CharacterResponse& ResponseStruct, float Delay);
	void ReceiveTick(float DeltaSeconds);
	void AnnouncementVOOver();
	void PlayNextVOLine(const struct FTribunal_CharacterResponse& Response_struct);
	void InitComponent();
	void OnGlobalCombat(bool CombatBeginning);
	void ExecuteUbergraph_BattlefieldCommunicationComponent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_On, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UPlayerHUD_C* K2Node_DynamicCast_AsPlayer_HUD, bool K2Node_DynamicCast_bSuccess, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool K2Node_CustomEvent_starting, bool K2Node_CustomEvent_isCartman, enum class EQtnVOSpeaker K2Node_CustomEvent_speaker_1, const struct FTribunal_CharacterResponse& K2Node_CustomEvent_responseStruct_1, bool K2Node_CustomEvent_resumeMusic, bool CallFunc_IsReadyForGameplay_ReturnValue, float CallFunc_CharacterCommunication_soundDuration, class AActor* CallFunc_GetOwner_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, class AQtnPlayerController* K2Node_CustomEvent_localPlayerController, class AQtnPlayerUI* K2Node_CustomEvent_localPlayerUI, class AQtnBodyPawn* K2Node_CustomEvent_localOccupiedBodyPawn, enum class EQtnVOSpeaker K2Node_CustomEvent_speaker, bool K2Node_CustomEvent_in_battle, const struct FTribunal_CharacterResponse& K2Node_CustomEvent_responseStruct, float K2Node_CustomEvent_Delay, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapAMissionWorldBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, float K2Node_Event_DeltaSeconds, const struct FTribunal_CharacterResponse& K2Node_CustomEvent_response_struct, bool CallFunc_ProcessVOQueue_queueEmpty, int32 CallFunc_Array_Add_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_ProcessVOQueue_queueEmpty_1, bool K2Node_CustomEvent_combatBeginning, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_2, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_2);
	void VOFinished__DelegateSignature(const struct FTribunal_CharacterResponse& This_cue_finished);
};

}


