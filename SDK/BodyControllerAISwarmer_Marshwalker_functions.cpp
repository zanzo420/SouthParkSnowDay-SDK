#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerAISwarmer_Marshwalker.BodyControllerAISwarmer_Marshwalker_C
// (Actor)

class UClass* ABodyControllerAISwarmer_Marshwalker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerAISwarmer_Marshwalker_C");

	return Clss;
}


// BodyControllerAISwarmer_Marshwalker_C BodyControllerAISwarmer_Marshwalker.Default__BodyControllerAISwarmer_Marshwalker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerAISwarmer_Marshwalker_C* ABodyControllerAISwarmer_Marshwalker_C::GetDefaultObj()
{
	static class ABodyControllerAISwarmer_Marshwalker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerAISwarmer_Marshwalker_C*>(ABodyControllerAISwarmer_Marshwalker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyControllerAISwarmer_Marshwalker.BodyControllerAISwarmer_Marshwalker_C.OnQtnReadyForGameplay
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyControllerAISwarmer_Marshwalker_C::OnQtnReadyForGameplay(class AQtnBodyPawn* bodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAISwarmer_Marshwalker_C", "OnQtnReadyForGameplay");

	Params::ABodyControllerAISwarmer_Marshwalker_C_OnQtnReadyForGameplay_Params Parms{};

	Parms.bodyPawn = bodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyControllerAISwarmer_Marshwalker.BodyControllerAISwarmer_Marshwalker_C.ExecuteUbergraph_BodyControllerAISwarmer_Marshwalker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRangedFloat             K2Node_MakeStruct_QtnRangedFloat                                 (NoDestructor)
// class AQtnBodyPawn*                K2Node_Event_bodyPawn                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyControllerAISwarmer_Marshwalker_C::ExecuteUbergraph_BodyControllerAISwarmer_Marshwalker(int32 EntryPoint, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, class AQtnBodyPawn* K2Node_Event_bodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAISwarmer_Marshwalker_C", "ExecuteUbergraph_BodyControllerAISwarmer_Marshwalker");

	Params::ABodyControllerAISwarmer_Marshwalker_C_ExecuteUbergraph_BodyControllerAISwarmer_Marshwalker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_QtnRangedFloat = K2Node_MakeStruct_QtnRangedFloat;
	Parms.K2Node_Event_bodyPawn = K2Node_Event_bodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


