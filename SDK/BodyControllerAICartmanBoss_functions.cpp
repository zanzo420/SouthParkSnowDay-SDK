#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerAICartmanBoss.BodyControllerAICartmanBoss_C
// (Actor)

class UClass* ABodyControllerAICartmanBoss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerAICartmanBoss_C");

	return Clss;
}


// BodyControllerAICartmanBoss_C BodyControllerAICartmanBoss.Default__BodyControllerAICartmanBoss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerAICartmanBoss_C* ABodyControllerAICartmanBoss_C::GetDefaultObj()
{
	static class ABodyControllerAICartmanBoss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerAICartmanBoss_C*>(ABodyControllerAICartmanBoss_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyControllerAICartmanBoss.BodyControllerAICartmanBoss_C.OnQtnReadyForGameplay
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyControllerAICartmanBoss_C::OnQtnReadyForGameplay(class AQtnBodyPawn* bodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAICartmanBoss_C", "OnQtnReadyForGameplay");

	Params::ABodyControllerAICartmanBoss_C_OnQtnReadyForGameplay_Params Parms{};

	Parms.bodyPawn = bodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyControllerAICartmanBoss.BodyControllerAICartmanBoss_C.ExecuteUbergraph_BodyControllerAICartmanBoss
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRangedFloat             K2Node_MakeStruct_QtnRangedFloat                                 (NoDestructor)
// class AQtnBodyPawn*                K2Node_Event_bodyPawn                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyControllerAICartmanBoss_C::ExecuteUbergraph_BodyControllerAICartmanBoss(int32 EntryPoint, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, class AQtnBodyPawn* K2Node_Event_bodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAICartmanBoss_C", "ExecuteUbergraph_BodyControllerAICartmanBoss");

	Params::ABodyControllerAICartmanBoss_C_ExecuteUbergraph_BodyControllerAICartmanBoss_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_QtnRangedFloat = K2Node_MakeStruct_QtnRangedFloat;
	Parms.K2Node_Event_bodyPawn = K2Node_Event_bodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


