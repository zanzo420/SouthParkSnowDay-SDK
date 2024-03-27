#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CutsceneManagerActor.CutsceneManagerActor_C
// (Actor)

class UClass* ACutsceneManagerActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CutsceneManagerActor_C");

	return Clss;
}


// CutsceneManagerActor_C CutsceneManagerActor.Default__CutsceneManagerActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACutsceneManagerActor_C* ACutsceneManagerActor_C::GetDefaultObj()
{
	static class ACutsceneManagerActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACutsceneManagerActor_C*>(ACutsceneManagerActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CutsceneManagerActor.CutsceneManagerActor_C.DebugDisplayCutsceneManagerActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnDebugWrapper*            Wrapper                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnDebugWrapper*            LocalDebugWrapper                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void ACutsceneManagerActor_C::DebugDisplayCutsceneManagerActor(class UQtnDebugWrapper*& Wrapper, class UQtnDebugWrapper* LocalDebugWrapper, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneManagerActor_C", "DebugDisplayCutsceneManagerActor");

	Params::ACutsceneManagerActor_C_DebugDisplayCutsceneManagerActor_Params Parms{};

	Parms.Wrapper = Wrapper;
	Parms.LocalDebugWrapper = LocalDebugWrapper;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneManagerActor.CutsceneManagerActor_C.Server_PostCutscene
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACutsceneManagerActor_C::Server_PostCutscene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneManagerActor_C", "Server_PostCutscene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneManagerActor.CutsceneManagerActor_C.OnEndScene
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACutsceneManagerActor_C::OnEndScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneManagerActor_C", "OnEndScene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneManagerActor.CutsceneManagerActor_C.OnStartScene
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACutsceneManagerActor_C::OnStartScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneManagerActor_C", "OnStartScene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneManagerActor.CutsceneManagerActor_C.determineNumberOfPlayers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfPlayers_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneManagerActor_C::DetermineNumberOfPlayers(class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, int32 CallFunc_GetNumberOfPlayers_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneManagerActor_C", "determineNumberOfPlayers");

	Params::ACutsceneManagerActor_C_DetermineNumberOfPlayers_Params Parms{};

	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_GetNumberOfPlayers_ReturnValue = CallFunc_GetNumberOfPlayers_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneManagerActor.CutsceneManagerActor_C.Player Ready To Advance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneManagerActor_C::Player_Ready_To_Advance(int32 Temp_int_Variable, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneManagerActor_C", "Player Ready To Advance");

	Params::ACutsceneManagerActor_C_Player_Ready_To_Advance_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneManagerActor.CutsceneManagerActor_C.Sequence Holding Pattern Prep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACutsceneManagerActor_C::Sequence_Holding_Pattern_Prep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneManagerActor_C", "Sequence Holding Pattern Prep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneManagerActor.CutsceneManagerActor_C.Check Ready to Advance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Ready                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACutsceneManagerActor_C::Check_Ready_to_Advance(bool* Ready, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneManagerActor_C", "Check Ready to Advance");

	Params::ACutsceneManagerActor_C_Check_Ready_to_Advance_Params Parms{};

	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Ready != nullptr)
		*Ready = Parms.Ready;

}


// Function CutsceneManagerActor.CutsceneManagerActor_C.server_AdjustExpectedPlayerCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerPawnSoul                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneManagerActor_C::Server_AdjustExpectedPlayerCount(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneManagerActor_C", "server_AdjustExpectedPlayerCount");

	Params::ACutsceneManagerActor_C_Server_AdjustExpectedPlayerCount_Params Parms{};

	Parms.PlayerPawnSoul = PlayerPawnSoul;
	Parms.OccupiedBodyPawn = OccupiedBodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneManagerActor.CutsceneManagerActor_C.multicast_StartScene
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACinematicSceneArchetype_BP_C*Cinematic_actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneManagerActor_C::Multicast_StartScene(class ACinematicSceneArchetype_BP_C* Cinematic_actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneManagerActor_C", "multicast_StartScene");

	Params::ACutsceneManagerActor_C_Multicast_StartScene_Params Parms{};

	Parms.Cinematic_actor = Cinematic_actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneManagerActor.CutsceneManagerActor_C.server_ForceDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay_time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Delay_ID_Tag                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneManagerActor_C::Server_ForceDelay(float Delay_time, class FName Delay_ID_Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneManagerActor_C", "server_ForceDelay");

	Params::ACutsceneManagerActor_C_Server_ForceDelay_Params Parms{};

	Parms.Delay_time = Delay_time;
	Parms.Delay_ID_Tag = Delay_ID_Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneManagerActor.CutsceneManagerActor_C.multicast_PlayGlobalSFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundCue*                   Cue                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneManagerActor_C::Multicast_PlayGlobalSFX(class USoundCue* Cue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneManagerActor_C", "multicast_PlayGlobalSFX");

	Params::ACutsceneManagerActor_C_Multicast_PlayGlobalSFX_Params Parms{};

	Parms.Cue = Cue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneManagerActor.CutsceneManagerActor_C.PlayFacetime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTribunal_CharacterResponse Cue_struct                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ACutsceneManagerActor_C::PlayFacetime(float Delay, const struct FTribunal_CharacterResponse& Cue_struct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneManagerActor_C", "PlayFacetime");

	Params::ACutsceneManagerActor_C_PlayFacetime_Params Parms{};

	Parms.Delay = Delay;
	Parms.Cue_struct = Cue_struct;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneManagerActor.CutsceneManagerActor_C.multicast_PlayFacetimeVO
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTribunal_CharacterResponse Cue_struct                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneManagerActor_C::Multicast_PlayFacetimeVO(const struct FTribunal_CharacterResponse& Cue_struct, float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneManagerActor_C", "multicast_PlayFacetimeVO");

	Params::ACutsceneManagerActor_C_Multicast_PlayFacetimeVO_Params Parms{};

	Parms.Cue_struct = Cue_struct;
	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneManagerActor.CutsceneManagerActor_C.TriggerReadyCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACutsceneManagerActor_C::TriggerReadyCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneManagerActor_C", "TriggerReadyCheck");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneManagerActor.CutsceneManagerActor_C.Server_AdjustCountUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerPawnSoul                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLocalPlayer                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACutsceneManagerActor_C::Server_AdjustCountUp(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneManagerActor_C", "Server_AdjustCountUp");

	Params::ACutsceneManagerActor_C_Server_AdjustCountUp_Params Parms{};

	Parms.PlayerPawnSoul = PlayerPawnSoul;
	Parms.OccupiedBodyPawn = OccupiedBodyPawn;
	Parms.IsLocalPlayer = IsLocalPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneManagerActor.CutsceneManagerActor_C.Play
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACinematicSceneArchetype_BP_C*CinematicActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Cutscene_ID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Calling_goal_class                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneManagerActor_C::Play(class ACinematicSceneArchetype_BP_C* CinematicActor, int32 Cutscene_ID, class UClass* Calling_goal_class)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneManagerActor_C", "Play");

	Params::ACutsceneManagerActor_C_Play_Params Parms{};

	Parms.CinematicActor = CinematicActor;
	Parms.Cutscene_ID = Cutscene_ID;
	Parms.Calling_goal_class = Calling_goal_class;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneManagerActor.CutsceneManagerActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACutsceneManagerActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneManagerActor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneManagerActor.CutsceneManagerActor_C.multicast_EndScene
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACutsceneManagerActor_C::Multicast_EndScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneManagerActor_C", "multicast_EndScene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneManagerActor.CutsceneManagerActor_C.ExecuteUbergraph_CutsceneManagerActor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerPawnSoul_1                              (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_occupiedBodyPawn_1                            (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACinematicSceneArchetype_BP_C*K2Node_CustomEvent_cinematic_actor                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_delay_time                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Delay_ID_Tag                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundCue*                   K2Node_CustomEvent_cue                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Delay_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTribunal_CharacterResponse K2Node_CustomEvent_cue_struct_1                                  (NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_PickScriptedVOVariant_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTribunal_CharacterResponse K2Node_SetFieldsInStruct_StructOut                               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Check_Ready_to_Advance_ready                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTribunal_CharacterResponse K2Node_CustomEvent_cue_struct                                    (NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Delay                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Check_Ready_to_Advance_ready_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerPawnSoul                                (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_occupiedBodyPawn                              (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isLocalPlayer                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACinematicSceneArchetype_BP_C*K2Node_CustomEvent_cinematicActor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Cutscene_ID                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_calling_goal_class                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACutsceneManagerActor_C::ExecuteUbergraph_CutsceneManagerActor(int32 EntryPoint, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul_1, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class ACinematicSceneArchetype_BP_C* K2Node_CustomEvent_cinematic_actor, float K2Node_CustomEvent_delay_time, class FName K2Node_CustomEvent_Delay_ID_Tag, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class USoundCue* K2Node_CustomEvent_cue, float K2Node_CustomEvent_Delay_1, const struct FTribunal_CharacterResponse& K2Node_CustomEvent_cue_struct_1, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_PickScriptedVOVariant_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, const struct FTribunal_CharacterResponse& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_IsGameplayTagValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Check_Ready_to_Advance_ready, const struct FTribunal_CharacterResponse& K2Node_CustomEvent_cue_struct, float K2Node_CustomEvent_Delay, bool CallFunc_Check_Ready_to_Advance_ready_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, bool K2Node_CustomEvent_isLocalPlayer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsServer_ReturnValue_2, class ACinematicSceneArchetype_BP_C* K2Node_CustomEvent_cinematicActor, int32 K2Node_CustomEvent_Cutscene_ID, class UClass* K2Node_CustomEvent_calling_goal_class, bool CallFunc_IsServer_ReturnValue_3, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneManagerActor_C", "ExecuteUbergraph_CutsceneManagerActor");

	Params::ACutsceneManagerActor_C_ExecuteUbergraph_CutsceneManagerActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_playerPawnSoul_1 = K2Node_CustomEvent_playerPawnSoul_1;
	Parms.K2Node_CustomEvent_occupiedBodyPawn_1 = K2Node_CustomEvent_occupiedBodyPawn_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_cinematic_actor = K2Node_CustomEvent_cinematic_actor;
	Parms.K2Node_CustomEvent_delay_time = K2Node_CustomEvent_delay_time;
	Parms.K2Node_CustomEvent_Delay_ID_Tag = K2Node_CustomEvent_Delay_ID_Tag;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.K2Node_CustomEvent_cue = K2Node_CustomEvent_cue;
	Parms.K2Node_CustomEvent_Delay_1 = K2Node_CustomEvent_Delay_1;
	Parms.K2Node_CustomEvent_cue_struct_1 = K2Node_CustomEvent_cue_struct_1;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_PickScriptedVOVariant_ReturnValue = CallFunc_PickScriptedVOVariant_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_1 = CallFunc_IsGameplayTagValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Check_Ready_to_Advance_ready = CallFunc_Check_Ready_to_Advance_ready;
	Parms.K2Node_CustomEvent_cue_struct = K2Node_CustomEvent_cue_struct;
	Parms.K2Node_CustomEvent_Delay = K2Node_CustomEvent_Delay;
	Parms.CallFunc_Check_Ready_to_Advance_ready_1 = CallFunc_Check_Ready_to_Advance_ready_1;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin = CallFunc_GetLocalPlayerOccupiedBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_playerPawnSoul = K2Node_CustomEvent_playerPawnSoul;
	Parms.K2Node_CustomEvent_occupiedBodyPawn = K2Node_CustomEvent_occupiedBodyPawn;
	Parms.K2Node_CustomEvent_isLocalPlayer = K2Node_CustomEvent_isLocalPlayer;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.K2Node_CustomEvent_cinematicActor = K2Node_CustomEvent_cinematicActor;
	Parms.K2Node_CustomEvent_Cutscene_ID = K2Node_CustomEvent_Cutscene_ID;
	Parms.K2Node_CustomEvent_calling_goal_class = K2Node_CustomEvent_calling_goal_class;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;
	Parms.CallFunc_GetQtnGameState_ReturnValue_1 = CallFunc_GetQtnGameState_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneManagerActor.CutsceneManagerActor_C.FaceTimeFinishedForAllPlayers__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTribunal_CharacterResponse Completed_cue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ACutsceneManagerActor_C::FaceTimeFinishedForAllPlayers__DelegateSignature(const struct FTribunal_CharacterResponse& Completed_cue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneManagerActor_C", "FaceTimeFinishedForAllPlayers__DelegateSignature");

	Params::ACutsceneManagerActor_C_FaceTimeFinishedForAllPlayers__DelegateSignature_Params Parms{};

	Parms.Completed_cue = Completed_cue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneManagerActor.CutsceneManagerActor_C.DelayFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Delay_ID_Tag                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneManagerActor_C::DelayFinished__DelegateSignature(class FName Delay_ID_Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneManagerActor_C", "DelayFinished__DelegateSignature");

	Params::ACutsceneManagerActor_C_DelayFinished__DelegateSignature_Params Parms{};

	Parms.Delay_ID_Tag = Delay_ID_Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneManagerActor.CutsceneManagerActor_C.CutsceneFinishedForAllPlayers__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Calling_goal_class                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Cutscene_ID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACutsceneManagerActor_C::CutsceneFinishedForAllPlayers__DelegateSignature(class UClass* Calling_goal_class, int32 Cutscene_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneManagerActor_C", "CutsceneFinishedForAllPlayers__DelegateSignature");

	Params::ACutsceneManagerActor_C_CutsceneFinishedForAllPlayers__DelegateSignature_Params Parms{};

	Parms.Calling_goal_class = Calling_goal_class;
	Parms.Cutscene_ID = Cutscene_ID;

	UObject::ProcessEvent(Func, &Parms);

}

}


