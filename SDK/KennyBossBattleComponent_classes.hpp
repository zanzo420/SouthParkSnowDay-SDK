#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x108 - 0xE0)
// BlueprintGeneratedClass KennyBossBattleComponent.KennyBossBattleComponent_C
class UKennyBossBattleComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABodyPawnAI_PrincessKenny_C*           KennyBody;                                         // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKennyBossFightMusicSpeaker_C*         KennyMusicSpeaker;                                 // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         KennyBossMusicActive;                              // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7122[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBattlefieldCommunicationComponent_C*  LocalBattlefieldComm;                              // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UKennyBossBattleComponent_C* GetDefaultObj();

	void EnsureLocalBattlefieldComm(class UBattlefieldCommunicationComponent_C** battlefieldComm, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void DebugDisplayKennyBossBattle(class UQtnDebugWrapper*& DebugWrapper, class UQtnDebugWrapper* LocalDebugWrapper, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FColor& CallFunc_MakeRandomColor_ReturnValue);
	void UnRegisterKennyMusicSpeaker(class AKennyBossFightMusicSpeaker_C* MusicSpeaker, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void RegisterKennyMusicSpeaker(class AKennyBossFightMusicSpeaker_C* MusicSpeaker);
	void UnRegisterKennyBody(class ABodyPawnAI_PrincessKenny_C* Kenny, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void RegisterKennyBody(class ABodyPawnAI_PrincessKenny_C* Kenny);
	void StopKennyBossMusic(class UBattlefieldCommunicationComponent_C* CallFunc_EnsureLocalBattlefieldComm_battlefieldComm);
	void StartKennyBossMusic(class UBattlefieldCommunicationComponent_C* CallFunc_EnsureLocalBattlefieldComm_battlefieldComm);
	void ReceiveBeginPlay();
	void BossThreatEvent(class AActor* bossThreat, bool CombatBeginning);
	void BossDeathBegin_Event_0(class AQtnPawn* bossPawn);
	void BossDeathEnd_Event_0(class AQtnPawn* bossPawn);
	void PlayerEnterWorldEvent_Event_0(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer);
	void ExecuteUbergraph_KennyBossBattleComponent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AActor* K2Node_CustomEvent_bossThreat, bool K2Node_CustomEvent_combatBeginning, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AQtnPawn* K2Node_CustomEvent_bossPawn_1, class AQtnPawn* K2Node_CustomEvent_bossPawn, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_2, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, bool K2Node_CustomEvent_isLocalPlayer, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_1, class UBattlefieldCommunicationComponent_C* CallFunc_EnsureLocalBattlefieldComm_battlefieldComm, class UBattlefieldCommunicationComponent_C* CallFunc_EnsureLocalBattlefieldComm_battlefieldComm_1);
};

}


