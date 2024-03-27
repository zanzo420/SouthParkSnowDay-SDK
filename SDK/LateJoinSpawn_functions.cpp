#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LateJoinSpawn.LateJoinSpawn_C
// (Actor)

class UClass* ALateJoinSpawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LateJoinSpawn_C");

	return Clss;
}


// LateJoinSpawn_C LateJoinSpawn.Default__LateJoinSpawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALateJoinSpawn_C* ALateJoinSpawn_C::GetDefaultObj()
{
	static class ALateJoinSpawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALateJoinSpawn_C*>(ALateJoinSpawn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LateJoinSpawn.LateJoinSpawn_C.TriggerVis
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALateJoinSpawn_C::TriggerVis(class AQtnBodyPawn* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LateJoinSpawn_C", "TriggerVis");

	Params::ALateJoinSpawn_C_TriggerVis_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LateJoinSpawn.LateJoinSpawn_C.SpawnPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPlayer                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALateJoinSpawn_C::SpawnPlayer(class AQtnBodyPawn* bodyPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LateJoinSpawn_C", "SpawnPlayer");

	Params::ALateJoinSpawn_C_SpawnPlayer_Params Parms{};

	Parms.bodyPlayer = bodyPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LateJoinSpawn.LateJoinSpawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ALateJoinSpawn_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LateJoinSpawn_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LateJoinSpawn.LateJoinSpawn_C.ExecuteUbergraph_LateJoinSpawn
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_player                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_bodyPlayer                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsReadyForGameplay_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)

void ALateJoinSpawn_C::ExecuteUbergraph_LateJoinSpawn(int32 EntryPoint, class AQtnBodyPawn* K2Node_CustomEvent_player, bool CallFunc_IsServer_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnBodyPawn* K2Node_CustomEvent_bodyPlayer, bool CallFunc_IsReadyForGameplay_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LateJoinSpawn_C", "ExecuteUbergraph_LateJoinSpawn");

	Params::ALateJoinSpawn_C_ExecuteUbergraph_LateJoinSpawn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_player = K2Node_CustomEvent_player;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_CustomEvent_bodyPlayer = K2Node_CustomEvent_bodyPlayer;
	Parms.CallFunc_IsReadyForGameplay_ReturnValue = CallFunc_IsReadyForGameplay_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


