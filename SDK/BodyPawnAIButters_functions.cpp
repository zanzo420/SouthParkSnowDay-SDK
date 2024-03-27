#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawnAIButters.BodyPawnAIButters_C
// (Actor, Pawn)

class UClass* ABodyPawnAIButters_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawnAIButters_C");

	return Clss;
}


// BodyPawnAIButters_C BodyPawnAIButters.Default__BodyPawnAIButters_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawnAIButters_C* ABodyPawnAIButters_C::GetDefaultObj()
{
	static class ABodyPawnAIButters_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawnAIButters_C*>(ABodyPawnAIButters_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyPawnAIButters.BodyPawnAIButters_C.CanAcceptEnemyUpgrades
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Accept                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawnAIButters_C::CanAcceptEnemyUpgrades(bool* Accept)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIButters_C", "CanAcceptEnemyUpgrades");

	Params::ABodyPawnAIButters_C_CanAcceptEnemyUpgrades_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Accept != nullptr)
		*Accept = Parms.Accept;

}


// Function BodyPawnAIButters.BodyPawnAIButters_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABodyPawnAIButters_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIButters_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawnAIButters.BodyPawnAIButters_C.ExecuteUbergraph_BodyPawnAIButters
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyPawnAIButters_C::ExecuteUbergraph_BodyPawnAIButters(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIButters_C", "ExecuteUbergraph_BodyPawnAIButters");

	Params::ABodyPawnAIButters_C_ExecuteUbergraph_BodyPawnAIButters_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


