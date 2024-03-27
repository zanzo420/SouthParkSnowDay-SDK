#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpawnerHeuristicRandom.SpawnerHeuristicRandom_C
// (None)

class UClass* USpawnerHeuristicRandom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnerHeuristicRandom_C");

	return Clss;
}


// SpawnerHeuristicRandom_C SpawnerHeuristicRandom.Default__SpawnerHeuristicRandom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpawnerHeuristicRandom_C* USpawnerHeuristicRandom_C::GetDefaultObj()
{
	static class USpawnerHeuristicRandom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnerHeuristicRandom_C*>(USpawnerHeuristicRandom_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpawnerHeuristicRandom.SpawnerHeuristicRandom_C.CalculateHeuristicScore
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AQtnSkirmish*                OwningSkirmish                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnSpawner*                 Spawner                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     PlayerCentroid                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SpawnWaveName                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float USpawnerHeuristicRandom_C::CalculateHeuristicScore(class AQtnSkirmish* OwningSkirmish, class AQtnSpawner* Spawner, struct FVector& PlayerCentroid, class FName& SpawnWaveName, float CallFunc_RandomFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerHeuristicRandom_C", "CalculateHeuristicScore");

	Params::USpawnerHeuristicRandom_C_CalculateHeuristicScore_Params Parms{};

	Parms.OwningSkirmish = OwningSkirmish;
	Parms.Spawner = Spawner;
	Parms.PlayerCentroid = PlayerCentroid;
	Parms.SpawnWaveName = SpawnWaveName;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


