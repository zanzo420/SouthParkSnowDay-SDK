#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerAICartmanBossGolem.BodyControllerAICartmanBossGolem_C
// (Actor)

class UClass* ABodyControllerAICartmanBossGolem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerAICartmanBossGolem_C");

	return Clss;
}


// BodyControllerAICartmanBossGolem_C BodyControllerAICartmanBossGolem.Default__BodyControllerAICartmanBossGolem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerAICartmanBossGolem_C* ABodyControllerAICartmanBossGolem_C::GetDefaultObj()
{
	static class ABodyControllerAICartmanBossGolem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerAICartmanBossGolem_C*>(ABodyControllerAICartmanBossGolem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyControllerAICartmanBossGolem.BodyControllerAICartmanBossGolem_C.OnQtnReadyForGameplay
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyControllerAICartmanBossGolem_C::OnQtnReadyForGameplay(class AQtnBodyPawn* bodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAICartmanBossGolem_C", "OnQtnReadyForGameplay");

	Params::ABodyControllerAICartmanBossGolem_C_OnQtnReadyForGameplay_Params Parms{};

	Parms.bodyPawn = bodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyControllerAICartmanBossGolem.BodyControllerAICartmanBossGolem_C.ExecuteUbergraph_BodyControllerAICartmanBossGolem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRangedFloat             K2Node_MakeStruct_QtnRangedFloat                                 (NoDestructor)
// class AQtnBodyPawn*                K2Node_Event_bodyPawn                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyControllerAICartmanBossGolem_C::ExecuteUbergraph_BodyControllerAICartmanBossGolem(int32 EntryPoint, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, class AQtnBodyPawn* K2Node_Event_bodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAICartmanBossGolem_C", "ExecuteUbergraph_BodyControllerAICartmanBossGolem");

	Params::ABodyControllerAICartmanBossGolem_C_ExecuteUbergraph_BodyControllerAICartmanBossGolem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_QtnRangedFloat = K2Node_MakeStruct_QtnRangedFloat;
	Parms.K2Node_Event_bodyPawn = K2Node_Event_bodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


