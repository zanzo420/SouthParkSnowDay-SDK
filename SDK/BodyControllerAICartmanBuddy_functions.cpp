#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerAICartmanBuddy.BodyControllerAICartmanBuddy_C
// (Actor)

class UClass* ABodyControllerAICartmanBuddy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerAICartmanBuddy_C");

	return Clss;
}


// BodyControllerAICartmanBuddy_C BodyControllerAICartmanBuddy.Default__BodyControllerAICartmanBuddy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerAICartmanBuddy_C* ABodyControllerAICartmanBuddy_C::GetDefaultObj()
{
	static class ABodyControllerAICartmanBuddy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerAICartmanBuddy_C*>(ABodyControllerAICartmanBuddy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyControllerAICartmanBuddy.BodyControllerAICartmanBuddy_C.IsTeleportTargetStable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      TeleportTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsStable                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetBodyPawn_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOnNavMesh_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDead_canBeRevived                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBodyIdle_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyControllerAICartmanBuddy_C::IsTeleportTargetStable(class AActor*& TeleportTarget, bool* IsStable, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsOnNavMesh_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDead_canBeRevived, bool CallFunc_IsDead_ReturnValue, bool CallFunc_IsBodyIdle_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAICartmanBuddy_C", "IsTeleportTargetStable");

	Params::ABodyControllerAICartmanBuddy_C_IsTeleportTargetStable_Params Parms{};

	Parms.TeleportTarget = TeleportTarget;
	Parms.CallFunc_GetBodyPawn_ReturnValue = CallFunc_GetBodyPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsOnNavMesh_ReturnValue = CallFunc_IsOnNavMesh_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn = K2Node_DynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsDead_canBeRevived = CallFunc_IsDead_canBeRevived;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.CallFunc_IsBodyIdle_ReturnValue = CallFunc_IsBodyIdle_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsStable != nullptr)
		*IsStable = Parms.IsStable;

}


// Function BodyControllerAICartmanBuddy.BodyControllerAICartmanBuddy_C.GetTeleportTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      TeleportTarget                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnPathFollowingComponent*  CallFunc_GetQtnPathFollowingComponent_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetFormationTarget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAIDestinationActor_ReturnValue                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyControllerAICartmanBuddy_C::GetTeleportTarget(class AActor** TeleportTarget, class UQtnPathFollowingComponent* CallFunc_GetQtnPathFollowingComponent_ReturnValue, class AActor* CallFunc_GetFormationTarget_ReturnValue, class AActor* CallFunc_GetAIDestinationActor_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAICartmanBuddy_C", "GetTeleportTarget");

	Params::ABodyControllerAICartmanBuddy_C_GetTeleportTarget_Params Parms{};

	Parms.CallFunc_GetQtnPathFollowingComponent_ReturnValue = CallFunc_GetQtnPathFollowingComponent_ReturnValue;
	Parms.CallFunc_GetFormationTarget_ReturnValue = CallFunc_GetFormationTarget_ReturnValue;
	Parms.CallFunc_GetAIDestinationActor_ReturnValue = CallFunc_GetAIDestinationActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TeleportTarget != nullptr)
		*TeleportTarget = Parms.TeleportTarget;

}


// Function BodyControllerAICartmanBuddy.BodyControllerAICartmanBuddy_C.ThinkAboutTeleporting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                CallFunc_GetBodyPawn_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTeleportTarget_teleportTarget                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetBodyPawn_ReturnValue_1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTeleportTargetStable_isStable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasJustTeleported_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAirborne_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBodyIdle_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnVerbRequest             K2Node_MakeStruct_QtnVerbRequest                                 (NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnPathFollowingComponent*  CallFunc_GetQtnPathFollowingComponent_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_IsPathfindingBlocked_elapsedTime                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPathfindingBlocked_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_HasPathfindingFailed_elapsedTime                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasPathfindingFailed_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyControllerAICartmanBuddy_C::ThinkAboutTeleporting(class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, class AActor* CallFunc_GetTeleportTarget_teleportTarget, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue_1, bool CallFunc_IsTeleportTargetStable_isStable, bool CallFunc_HasJustTeleported_ReturnValue, bool CallFunc_IsAirborne_ReturnValue, bool CallFunc_IsBodyIdle_ReturnValue, const struct FQtnVerbRequest& K2Node_MakeStruct_QtnVerbRequest, bool CallFunc_BooleanOR_ReturnValue, class UQtnPathFollowingComponent* CallFunc_GetQtnPathFollowingComponent_ReturnValue, float CallFunc_IsPathfindingBlocked_elapsedTime, bool CallFunc_IsPathfindingBlocked_ReturnValue, float CallFunc_HasPathfindingFailed_elapsedTime, bool CallFunc_HasPathfindingFailed_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAICartmanBuddy_C", "ThinkAboutTeleporting");

	Params::ABodyControllerAICartmanBuddy_C_ThinkAboutTeleporting_Params Parms{};

	Parms.CallFunc_GetBodyPawn_ReturnValue = CallFunc_GetBodyPawn_ReturnValue;
	Parms.CallFunc_GetTeleportTarget_teleportTarget = CallFunc_GetTeleportTarget_teleportTarget;
	Parms.CallFunc_GetBodyPawn_ReturnValue_1 = CallFunc_GetBodyPawn_ReturnValue_1;
	Parms.CallFunc_IsTeleportTargetStable_isStable = CallFunc_IsTeleportTargetStable_isStable;
	Parms.CallFunc_HasJustTeleported_ReturnValue = CallFunc_HasJustTeleported_ReturnValue;
	Parms.CallFunc_IsAirborne_ReturnValue = CallFunc_IsAirborne_ReturnValue;
	Parms.CallFunc_IsBodyIdle_ReturnValue = CallFunc_IsBodyIdle_ReturnValue;
	Parms.K2Node_MakeStruct_QtnVerbRequest = K2Node_MakeStruct_QtnVerbRequest;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetQtnPathFollowingComponent_ReturnValue = CallFunc_GetQtnPathFollowingComponent_ReturnValue;
	Parms.CallFunc_IsPathfindingBlocked_elapsedTime = CallFunc_IsPathfindingBlocked_elapsedTime;
	Parms.CallFunc_IsPathfindingBlocked_ReturnValue = CallFunc_IsPathfindingBlocked_ReturnValue;
	Parms.CallFunc_HasPathfindingFailed_elapsedTime = CallFunc_HasPathfindingFailed_elapsedTime;
	Parms.CallFunc_HasPathfindingFailed_ReturnValue = CallFunc_HasPathfindingFailed_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyControllerAICartmanBuddy.BodyControllerAICartmanBuddy_C.OnThink
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              TimeSinceLastThought                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyControllerAICartmanBuddy_C::OnThink(float TimeSinceLastThought)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAICartmanBuddy_C", "OnThink");

	Params::ABodyControllerAICartmanBuddy_C_OnThink_Params Parms{};

	Parms.TimeSinceLastThought = TimeSinceLastThought;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyControllerAICartmanBuddy.BodyControllerAICartmanBuddy_C.OnQtnReadyForGameplay
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyControllerAICartmanBuddy_C::OnQtnReadyForGameplay(class AQtnBodyPawn* bodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAICartmanBuddy_C", "OnQtnReadyForGameplay");

	Params::ABodyControllerAICartmanBuddy_C_OnQtnReadyForGameplay_Params Parms{};

	Parms.bodyPawn = bodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyControllerAICartmanBuddy.BodyControllerAICartmanBuddy_C.ExecuteUbergraph_BodyControllerAICartmanBuddy
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetFormationTarget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_Event_bodyPawn                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnRangedFloat             K2Node_MakeStruct_QtnRangedFloat                                 (NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_timeSinceLastThought                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOriginalBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyControllerAICartmanBuddy_C::ExecuteUbergraph_BodyControllerAICartmanBuddy(int32 EntryPoint, class AActor* CallFunc_GetFormationTarget_ReturnValue, class AQtnBodyPawn* K2Node_Event_bodyPawn, bool CallFunc_IsValid_ReturnValue, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, float K2Node_Event_timeSinceLastThought, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAICartmanBuddy_C", "ExecuteUbergraph_BodyControllerAICartmanBuddy");

	Params::ABodyControllerAICartmanBuddy_C_ExecuteUbergraph_BodyControllerAICartmanBuddy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetFormationTarget_ReturnValue = CallFunc_GetFormationTarget_ReturnValue;
	Parms.K2Node_Event_bodyPawn = K2Node_Event_bodyPawn;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_QtnRangedFloat = K2Node_MakeStruct_QtnRangedFloat;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_Event_timeSinceLastThought = K2Node_Event_timeSinceLastThought;
	Parms.CallFunc_GetLocalPlayerOriginalBody_ReturnValue = CallFunc_GetLocalPlayerOriginalBody_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


