#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerAICartmanSnowTurret.BodyControllerAICartmanSnowTurret_C
// (Actor)

class UClass* ABodyControllerAICartmanSnowTurret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerAICartmanSnowTurret_C");

	return Clss;
}


// BodyControllerAICartmanSnowTurret_C BodyControllerAICartmanSnowTurret.Default__BodyControllerAICartmanSnowTurret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerAICartmanSnowTurret_C* ABodyControllerAICartmanSnowTurret_C::GetDefaultObj()
{
	static class ABodyControllerAICartmanSnowTurret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerAICartmanSnowTurret_C*>(ABodyControllerAICartmanSnowTurret_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyControllerAICartmanSnowTurret.BodyControllerAICartmanSnowTurret_C.OnQtnReadyForGameplay
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyControllerAICartmanSnowTurret_C::OnQtnReadyForGameplay(class AQtnBodyPawn* bodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAICartmanSnowTurret_C", "OnQtnReadyForGameplay");

	Params::ABodyControllerAICartmanSnowTurret_C_OnQtnReadyForGameplay_Params Parms{};

	Parms.bodyPawn = bodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyControllerAICartmanSnowTurret.BodyControllerAICartmanSnowTurret_C.ExecuteUbergraph_BodyControllerAICartmanSnowTurret
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRangedFloat             K2Node_MakeStruct_QtnRangedFloat                                 (NoDestructor)
// class AQtnBodyPawn*                K2Node_Event_bodyPawn                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyControllerAICartmanSnowTurret_C::ExecuteUbergraph_BodyControllerAICartmanSnowTurret(int32 EntryPoint, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, class AQtnBodyPawn* K2Node_Event_bodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAICartmanSnowTurret_C", "ExecuteUbergraph_BodyControllerAICartmanSnowTurret");

	Params::ABodyControllerAICartmanSnowTurret_C_ExecuteUbergraph_BodyControllerAICartmanSnowTurret_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_QtnRangedFloat = K2Node_MakeStruct_QtnRangedFloat;
	Parms.K2Node_Event_bodyPawn = K2Node_Event_bodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


