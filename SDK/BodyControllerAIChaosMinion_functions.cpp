#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerAIChaosMinion.BodyControllerAIChaosMinion_C
// (Actor)

class UClass* ABodyControllerAIChaosMinion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerAIChaosMinion_C");

	return Clss;
}


// BodyControllerAIChaosMinion_C BodyControllerAIChaosMinion.Default__BodyControllerAIChaosMinion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerAIChaosMinion_C* ABodyControllerAIChaosMinion_C::GetDefaultObj()
{
	static class ABodyControllerAIChaosMinion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerAIChaosMinion_C*>(ABodyControllerAIChaosMinion_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyControllerAIChaosMinion.BodyControllerAIChaosMinion_C.AdoptOwningPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                OwningPlayer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRangedFloat             K2Node_MakeStruct_QtnRangedFloat                                 (NoDestructor)

void ABodyControllerAIChaosMinion_C::AdoptOwningPlayer(class AQtnBodyPawn* OwningPlayer, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAIChaosMinion_C", "AdoptOwningPlayer");

	Params::ABodyControllerAIChaosMinion_C_AdoptOwningPlayer_Params Parms{};

	Parms.OwningPlayer = OwningPlayer;
	Parms.K2Node_MakeStruct_QtnRangedFloat = K2Node_MakeStruct_QtnRangedFloat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyControllerAIChaosMinion.BodyControllerAIChaosMinion_C.ThinkAboutDespawning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TimeSinceLastThought                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetBodyPawn_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_IsUsingScriptedDestination_destinationActor             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingScriptedDestination_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetBodyPawn_ReturnValue_1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnPawnLOD             CallFunc_GetPawnLOD_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAliveAndConscious_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnPathFollowingComponent*  CallFunc_GetQtnPathFollowingComponent_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_IsPathfindingBlocked_elapsedTime                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPathfindingBlocked_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_HasPathfindingFailed_elapsedTime                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasPathfindingFailed_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyControllerAIChaosMinion_C::ThinkAboutDespawning(float TimeSinceLastThought, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, class AActor* CallFunc_IsUsingScriptedDestination_destinationActor, bool CallFunc_IsUsingScriptedDestination_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue_1, enum class EQtnPawnLOD CallFunc_GetPawnLOD_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UQtnPathFollowingComponent* CallFunc_GetQtnPathFollowingComponent_ReturnValue, float CallFunc_IsPathfindingBlocked_elapsedTime, bool CallFunc_IsPathfindingBlocked_ReturnValue, float CallFunc_HasPathfindingFailed_elapsedTime, bool CallFunc_HasPathfindingFailed_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAIChaosMinion_C", "ThinkAboutDespawning");

	Params::ABodyControllerAIChaosMinion_C_ThinkAboutDespawning_Params Parms{};

	Parms.TimeSinceLastThought = TimeSinceLastThought;
	Parms.CallFunc_GetBodyPawn_ReturnValue = CallFunc_GetBodyPawn_ReturnValue;
	Parms.CallFunc_IsUsingScriptedDestination_destinationActor = CallFunc_IsUsingScriptedDestination_destinationActor;
	Parms.CallFunc_IsUsingScriptedDestination_ReturnValue = CallFunc_IsUsingScriptedDestination_ReturnValue;
	Parms.CallFunc_GetBodyPawn_ReturnValue_1 = CallFunc_GetBodyPawn_ReturnValue_1;
	Parms.CallFunc_GetPawnLOD_ReturnValue = CallFunc_GetPawnLOD_ReturnValue;
	Parms.CallFunc_IsAliveAndConscious_ReturnValue = CallFunc_IsAliveAndConscious_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetQtnPathFollowingComponent_ReturnValue = CallFunc_GetQtnPathFollowingComponent_ReturnValue;
	Parms.CallFunc_IsPathfindingBlocked_elapsedTime = CallFunc_IsPathfindingBlocked_elapsedTime;
	Parms.CallFunc_IsPathfindingBlocked_ReturnValue = CallFunc_IsPathfindingBlocked_ReturnValue;
	Parms.CallFunc_HasPathfindingFailed_elapsedTime = CallFunc_HasPathfindingFailed_elapsedTime;
	Parms.CallFunc_HasPathfindingFailed_ReturnValue = CallFunc_HasPathfindingFailed_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyControllerAIChaosMinion.BodyControllerAIChaosMinion_C.OnQtnReadyForGameplay
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyControllerAIChaosMinion_C::OnQtnReadyForGameplay(class AQtnBodyPawn* bodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAIChaosMinion_C", "OnQtnReadyForGameplay");

	Params::ABodyControllerAIChaosMinion_C_OnQtnReadyForGameplay_Params Parms{};

	Parms.bodyPawn = bodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyControllerAIChaosMinion.BodyControllerAIChaosMinion_C.OnThink
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              TimeSinceLastThought                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyControllerAIChaosMinion_C::OnThink(float TimeSinceLastThought)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAIChaosMinion_C", "OnThink");

	Params::ABodyControllerAIChaosMinion_C_OnThink_Params Parms{};

	Parms.TimeSinceLastThought = TimeSinceLastThought;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyControllerAIChaosMinion.BodyControllerAIChaosMinion_C.ExecuteUbergraph_BodyControllerAIChaosMinion
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                K2Node_Event_bodyPawn                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_timeSinceLastThought                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyControllerAIChaosMinion_C::ExecuteUbergraph_BodyControllerAIChaosMinion(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AQtnBodyPawn* K2Node_Event_bodyPawn, float K2Node_Event_timeSinceLastThought)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAIChaosMinion_C", "ExecuteUbergraph_BodyControllerAIChaosMinion");

	Params::ABodyControllerAIChaosMinion_C_ExecuteUbergraph_BodyControllerAIChaosMinion_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_bodyPawn = K2Node_Event_bodyPawn;
	Parms.K2Node_Event_timeSinceLastThought = K2Node_Event_timeSinceLastThought;

	UObject::ProcessEvent(Func, &Parms);

}

}


