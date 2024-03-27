#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerAIPooplet.BodyControllerAIPooplet_C
// (Actor)

class UClass* ABodyControllerAIPooplet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerAIPooplet_C");

	return Clss;
}


// BodyControllerAIPooplet_C BodyControllerAIPooplet.Default__BodyControllerAIPooplet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerAIPooplet_C* ABodyControllerAIPooplet_C::GetDefaultObj()
{
	static class ABodyControllerAIPooplet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerAIPooplet_C*>(ABodyControllerAIPooplet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyControllerAIPooplet.BodyControllerAIPooplet_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPathFollowingComponent*     CallFunc_GetPathFollowingComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIPerceptionComponent*      CallFunc_GetAIPerceptionComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnUtilitiesSwitchQualityCallFunc_BranchUseSwitchQuality_Branch                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyControllerAIPooplet_C::UserConstructionScript(class UPathFollowingComponent* CallFunc_GetPathFollowingComponent_ReturnValue, class UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue, enum class EQtnUtilitiesSwitchQuality CallFunc_BranchUseSwitchQuality_Branch, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAIPooplet_C", "UserConstructionScript");

	Params::ABodyControllerAIPooplet_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetPathFollowingComponent_ReturnValue = CallFunc_GetPathFollowingComponent_ReturnValue;
	Parms.CallFunc_GetAIPerceptionComponent_ReturnValue = CallFunc_GetAIPerceptionComponent_ReturnValue;
	Parms.CallFunc_BranchUseSwitchQuality_Branch = CallFunc_BranchUseSwitchQuality_Branch;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyControllerAIPooplet.BodyControllerAIPooplet_C.OnQtnReadyForGameplay
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyControllerAIPooplet_C::OnQtnReadyForGameplay(class AQtnBodyPawn* bodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAIPooplet_C", "OnQtnReadyForGameplay");

	Params::ABodyControllerAIPooplet_C_OnQtnReadyForGameplay_Params Parms{};

	Parms.bodyPawn = bodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyControllerAIPooplet.BodyControllerAIPooplet_C.OnThink
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              TimeSinceLastThought                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyControllerAIPooplet_C::OnThink(float TimeSinceLastThought)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAIPooplet_C", "OnThink");

	Params::ABodyControllerAIPooplet_C_OnThink_Params Parms{};

	Parms.TimeSinceLastThought = TimeSinceLastThought;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyControllerAIPooplet.BodyControllerAIPooplet_C.ExecuteUbergraph_BodyControllerAIPooplet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_Event_bodyPawn                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRangedFloat             K2Node_MakeStruct_QtnRangedFloat                                 (NoDestructor)
// float                              K2Node_Event_timeSinceLastThought                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnPathFollowingComponent*  CallFunc_GetQtnPathFollowingComponent_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_HasPathfindingFailed_elapsedTime                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasPathfindingFailed_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetBodyPawn_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealth_health                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealth_maxHealth                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              K2Node_MakeStruct_QtnDamageInfo                                  (ContainsInstancedReference)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetBodyPawn_ReturnValue_1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBodyIdle_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyControllerAIPooplet_C::ExecuteUbergraph_BodyControllerAIPooplet(int32 EntryPoint, class AQtnBodyPawn* K2Node_Event_bodyPawn, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, float K2Node_Event_timeSinceLastThought, class UQtnPathFollowingComponent* CallFunc_GetQtnPathFollowingComponent_ReturnValue, float CallFunc_HasPathfindingFailed_elapsedTime, bool CallFunc_HasPathfindingFailed_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, bool CallFunc_Greater_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue_1, bool CallFunc_IsBodyIdle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAIPooplet_C", "ExecuteUbergraph_BodyControllerAIPooplet");

	Params::ABodyControllerAIPooplet_C_ExecuteUbergraph_BodyControllerAIPooplet_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bodyPawn = K2Node_Event_bodyPawn;
	Parms.K2Node_MakeStruct_QtnRangedFloat = K2Node_MakeStruct_QtnRangedFloat;
	Parms.K2Node_Event_timeSinceLastThought = K2Node_Event_timeSinceLastThought;
	Parms.CallFunc_GetQtnPathFollowingComponent_ReturnValue = CallFunc_GetQtnPathFollowingComponent_ReturnValue;
	Parms.CallFunc_HasPathfindingFailed_elapsedTime = CallFunc_HasPathfindingFailed_elapsedTime;
	Parms.CallFunc_HasPathfindingFailed_ReturnValue = CallFunc_HasPathfindingFailed_ReturnValue;
	Parms.CallFunc_GetBodyPawn_ReturnValue = CallFunc_GetBodyPawn_ReturnValue;
	Parms.CallFunc_GetHealth_health = CallFunc_GetHealth_health;
	Parms.CallFunc_GetHealth_maxHealth = CallFunc_GetHealth_maxHealth;
	Parms.CallFunc_GetDamageReceptor_ReturnValue = CallFunc_GetDamageReceptor_ReturnValue;
	Parms.K2Node_MakeStruct_QtnDamageInfo = K2Node_MakeStruct_QtnDamageInfo;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetBodyPawn_ReturnValue_1 = CallFunc_GetBodyPawn_ReturnValue_1;
	Parms.CallFunc_IsBodyIdle_ReturnValue = CallFunc_IsBodyIdle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


