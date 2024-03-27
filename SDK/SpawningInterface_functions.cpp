#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpawningInterface.SpawningInterface_C
// (None)

class UClass* ISpawningInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawningInterface_C");

	return Clss;
}


// SpawningInterface_C SpawningInterface.Default__SpawningInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ISpawningInterface_C* ISpawningInterface_C::GetDefaultObj()
{
	static class ISpawningInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ISpawningInterface_C*>(ISpawningInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpawningInterface.SpawningInterface_C.GetSpawnAnimsFromBody
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      SpawnerClass                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBodySpawnAnimArray         AnimArrayStruct                                                  (Parm, OutParm, HasGetValueTypeHash)

void ISpawningInterface_C::GetSpawnAnimsFromBody(class UClass* SpawnerClass, struct FBodySpawnAnimArray* AnimArrayStruct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawningInterface_C", "GetSpawnAnimsFromBody");

	Params::ISpawningInterface_C_GetSpawnAnimsFromBody_Params Parms{};

	Parms.SpawnerClass = SpawnerClass;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimArrayStruct != nullptr)
		*AnimArrayStruct = std::move(Parms.AnimArrayStruct);

}


// Function SpawningInterface.SpawningInterface_C.PerAISpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                Body                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ISpawningInterface_C::PerAISpawn(class AQtnBodyPawn* Body)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawningInterface_C", "PerAISpawn");

	Params::ISpawningInterface_C_PerAISpawn_Params Parms{};

	Parms.Body = Body;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpawningInterface.SpawningInterface_C.SpawnPresentationStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ISpawningInterface_C::SpawnPresentationStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawningInterface_C", "SpawnPresentationStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpawningInterface.SpawningInterface_C.SpawnPresentationStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ISpawningInterface_C::SpawnPresentationStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawningInterface_C", "SpawnPresentationStart");



	UObject::ProcessEvent(Func, nullptr);

}

}


