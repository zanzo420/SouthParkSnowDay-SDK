#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KennyBossBattleComponent.KennyBossBattleComponent_C
// (None)

class UClass* UKennyBossBattleComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KennyBossBattleComponent_C");

	return Clss;
}


// KennyBossBattleComponent_C KennyBossBattleComponent.Default__KennyBossBattleComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKennyBossBattleComponent_C* UKennyBossBattleComponent_C::GetDefaultObj()
{
	static class UKennyBossBattleComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKennyBossBattleComponent_C*>(UKennyBossBattleComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KennyBossBattleComponent.KennyBossBattleComponent_C.EnsureLocalBattlefieldComm
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBattlefieldCommunicationComponent_C*battlefieldComm                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOriginalBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOriginalBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UKennyBossBattleComponent_C::EnsureLocalBattlefieldComm(class UBattlefieldCommunicationComponent_C** battlefieldComm, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KennyBossBattleComponent_C", "EnsureLocalBattlefieldComm");

	Params::UKennyBossBattleComponent_C_EnsureLocalBattlefieldComm_Params Parms{};

	Parms.CallFunc_GetLocalPlayerOriginalBody_outputPin = CallFunc_GetLocalPlayerOriginalBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOriginalBody_ReturnValue = CallFunc_GetLocalPlayerOriginalBody_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (battlefieldComm != nullptr)
		*battlefieldComm = Parms.battlefieldComm;

}


// Function KennyBossBattleComponent.KennyBossBattleComponent_C.DebugDisplayKennyBossBattle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnDebugWrapper*            DebugWrapper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnDebugWrapper*            LocalDebugWrapper                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FColor                      CallFunc_MakeRandomColor_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKennyBossBattleComponent_C::DebugDisplayKennyBossBattle(class UQtnDebugWrapper*& DebugWrapper, class UQtnDebugWrapper* LocalDebugWrapper, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FColor& CallFunc_MakeRandomColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KennyBossBattleComponent_C", "DebugDisplayKennyBossBattle");

	Params::UKennyBossBattleComponent_C_DebugDisplayKennyBossBattle_Params Parms{};

	Parms.DebugWrapper = DebugWrapper;
	Parms.LocalDebugWrapper = LocalDebugWrapper;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeRandomColor_ReturnValue = CallFunc_MakeRandomColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KennyBossBattleComponent.KennyBossBattleComponent_C.UnRegisterKennyMusicSpeaker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKennyBossFightMusicSpeaker_C*MusicSpeaker                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UKennyBossBattleComponent_C::UnRegisterKennyMusicSpeaker(class AKennyBossFightMusicSpeaker_C* MusicSpeaker, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KennyBossBattleComponent_C", "UnRegisterKennyMusicSpeaker");

	Params::UKennyBossBattleComponent_C_UnRegisterKennyMusicSpeaker_Params Parms{};

	Parms.MusicSpeaker = MusicSpeaker;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KennyBossBattleComponent.KennyBossBattleComponent_C.RegisterKennyMusicSpeaker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKennyBossFightMusicSpeaker_C*MusicSpeaker                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKennyBossBattleComponent_C::RegisterKennyMusicSpeaker(class AKennyBossFightMusicSpeaker_C* MusicSpeaker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KennyBossBattleComponent_C", "RegisterKennyMusicSpeaker");

	Params::UKennyBossBattleComponent_C_RegisterKennyMusicSpeaker_Params Parms{};

	Parms.MusicSpeaker = MusicSpeaker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KennyBossBattleComponent.KennyBossBattleComponent_C.UnRegisterKennyBody
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnAI_PrincessKenny_C* Kenny                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UKennyBossBattleComponent_C::UnRegisterKennyBody(class ABodyPawnAI_PrincessKenny_C* Kenny, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KennyBossBattleComponent_C", "UnRegisterKennyBody");

	Params::UKennyBossBattleComponent_C_UnRegisterKennyBody_Params Parms{};

	Parms.Kenny = Kenny;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KennyBossBattleComponent.KennyBossBattleComponent_C.RegisterKennyBody
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnAI_PrincessKenny_C* Kenny                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKennyBossBattleComponent_C::RegisterKennyBody(class ABodyPawnAI_PrincessKenny_C* Kenny)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KennyBossBattleComponent_C", "RegisterKennyBody");

	Params::UKennyBossBattleComponent_C_RegisterKennyBody_Params Parms{};

	Parms.Kenny = Kenny;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KennyBossBattleComponent.KennyBossBattleComponent_C.StopKennyBossMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBattlefieldCommunicationComponent_C*CallFunc_EnsureLocalBattlefieldComm_battlefieldComm              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKennyBossBattleComponent_C::StopKennyBossMusic(class UBattlefieldCommunicationComponent_C* CallFunc_EnsureLocalBattlefieldComm_battlefieldComm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KennyBossBattleComponent_C", "StopKennyBossMusic");

	Params::UKennyBossBattleComponent_C_StopKennyBossMusic_Params Parms{};

	Parms.CallFunc_EnsureLocalBattlefieldComm_battlefieldComm = CallFunc_EnsureLocalBattlefieldComm_battlefieldComm;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KennyBossBattleComponent.KennyBossBattleComponent_C.StartKennyBossMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBattlefieldCommunicationComponent_C*CallFunc_EnsureLocalBattlefieldComm_battlefieldComm              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKennyBossBattleComponent_C::StartKennyBossMusic(class UBattlefieldCommunicationComponent_C* CallFunc_EnsureLocalBattlefieldComm_battlefieldComm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KennyBossBattleComponent_C", "StartKennyBossMusic");

	Params::UKennyBossBattleComponent_C_StartKennyBossMusic_Params Parms{};

	Parms.CallFunc_EnsureLocalBattlefieldComm_battlefieldComm = CallFunc_EnsureLocalBattlefieldComm_battlefieldComm;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KennyBossBattleComponent.KennyBossBattleComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UKennyBossBattleComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KennyBossBattleComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KennyBossBattleComponent.KennyBossBattleComponent_C.BossThreatEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      bossThreat                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CombatBeginning                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKennyBossBattleComponent_C::BossThreatEvent(class AActor* bossThreat, bool CombatBeginning)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KennyBossBattleComponent_C", "BossThreatEvent");

	Params::UKennyBossBattleComponent_C_BossThreatEvent_Params Parms{};

	Parms.bossThreat = bossThreat;
	Parms.CombatBeginning = CombatBeginning;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KennyBossBattleComponent.KennyBossBattleComponent_C.BossDeathBegin_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPawn*                    bossPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKennyBossBattleComponent_C::BossDeathBegin_Event_0(class AQtnPawn* bossPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KennyBossBattleComponent_C", "BossDeathBegin_Event_0");

	Params::UKennyBossBattleComponent_C_BossDeathBegin_Event_0_Params Parms{};

	Parms.bossPawn = bossPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KennyBossBattleComponent.KennyBossBattleComponent_C.BossDeathEnd_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPawn*                    bossPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKennyBossBattleComponent_C::BossDeathEnd_Event_0(class AQtnPawn* bossPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KennyBossBattleComponent_C", "BossDeathEnd_Event_0");

	Params::UKennyBossBattleComponent_C_BossDeathEnd_Event_0_Params Parms{};

	Parms.bossPawn = bossPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KennyBossBattleComponent.KennyBossBattleComponent_C.PlayerEnterWorldEvent_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerPawnSoul                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLocalPlayer                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKennyBossBattleComponent_C::PlayerEnterWorldEvent_Event_0(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KennyBossBattleComponent_C", "PlayerEnterWorldEvent_Event_0");

	Params::UKennyBossBattleComponent_C_PlayerEnterWorldEvent_Event_0_Params Parms{};

	Parms.PlayerPawnSoul = PlayerPawnSoul;
	Parms.OccupiedBodyPawn = OccupiedBodyPawn;
	Parms.IsLocalPlayer = IsLocalPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KennyBossBattleComponent.KennyBossBattleComponent_C.ExecuteUbergraph_KennyBossBattleComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_bossThreat                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_combatBeginning                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    K2Node_CustomEvent_bossPawn_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_CustomEvent_bossPawn                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerPawnSoul                                (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_occupiedBodyPawn                              (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isLocalPlayer                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlefieldCommunicationComponent_C*CallFunc_EnsureLocalBattlefieldComm_battlefieldComm              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBattlefieldCommunicationComponent_C*CallFunc_EnsureLocalBattlefieldComm_battlefieldComm_1            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKennyBossBattleComponent_C::ExecuteUbergraph_KennyBossBattleComponent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AActor* K2Node_CustomEvent_bossThreat, bool K2Node_CustomEvent_combatBeginning, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AQtnPawn* K2Node_CustomEvent_bossPawn_1, class AQtnPawn* K2Node_CustomEvent_bossPawn, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_2, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, bool K2Node_CustomEvent_isLocalPlayer, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_1, class UBattlefieldCommunicationComponent_C* CallFunc_EnsureLocalBattlefieldComm_battlefieldComm, class UBattlefieldCommunicationComponent_C* CallFunc_EnsureLocalBattlefieldComm_battlefieldComm_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KennyBossBattleComponent_C", "ExecuteUbergraph_KennyBossBattleComponent");

	Params::UKennyBossBattleComponent_C_ExecuteUbergraph_KennyBossBattleComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_CustomEvent_bossThreat = K2Node_CustomEvent_bossThreat;
	Parms.K2Node_CustomEvent_combatBeginning = K2Node_CustomEvent_combatBeginning;
	Parms.CallFunc_GetQtnGameState_ReturnValue_1 = CallFunc_GetQtnGameState_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_CustomEvent_bossPawn_1 = K2Node_CustomEvent_bossPawn_1;
	Parms.K2Node_CustomEvent_bossPawn = K2Node_CustomEvent_bossPawn;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
	Parms.CallFunc_GetQtnGameState_ReturnValue_2 = CallFunc_GetQtnGameState_ReturnValue_2;
	Parms.K2Node_CustomEvent_playerPawnSoul = K2Node_CustomEvent_playerPawnSoul;
	Parms.K2Node_CustomEvent_occupiedBodyPawn = K2Node_CustomEvent_occupiedBodyPawn;
	Parms.K2Node_CustomEvent_isLocalPlayer = K2Node_CustomEvent_isLocalPlayer;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EnsureLocalBattlefieldComm_battlefieldComm = CallFunc_EnsureLocalBattlefieldComm_battlefieldComm;
	Parms.CallFunc_EnsureLocalBattlefieldComm_battlefieldComm_1 = CallFunc_EnsureLocalBattlefieldComm_battlefieldComm_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


