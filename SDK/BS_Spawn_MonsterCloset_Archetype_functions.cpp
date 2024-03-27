#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BS_Spawn_MonsterCloset_Archetype.BS_Spawn_MonsterCloset_Archetype_C
// (Actor)

class UClass* ABS_Spawn_MonsterCloset_Archetype_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BS_Spawn_MonsterCloset_Archetype_C");

	return Clss;
}


// BS_Spawn_MonsterCloset_Archetype_C BS_Spawn_MonsterCloset_Archetype.Default__BS_Spawn_MonsterCloset_Archetype_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABS_Spawn_MonsterCloset_Archetype_C* ABS_Spawn_MonsterCloset_Archetype_C::GetDefaultObj()
{
	static class ABS_Spawn_MonsterCloset_Archetype_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABS_Spawn_MonsterCloset_Archetype_C*>(ABS_Spawn_MonsterCloset_Archetype_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BS_Spawn_MonsterCloset_Archetype.BS_Spawn_MonsterCloset_Archetype_C.GetSpawnAnimsFromBody
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      SpawnerClass                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBodySpawnAnimArray         AnimArrayStruct                                                  (Parm, OutParm, HasGetValueTypeHash)

void ABS_Spawn_MonsterCloset_Archetype_C::GetSpawnAnimsFromBody(class UClass* SpawnerClass, struct FBodySpawnAnimArray* AnimArrayStruct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Spawn_MonsterCloset_Archetype_C", "GetSpawnAnimsFromBody");

	Params::ABS_Spawn_MonsterCloset_Archetype_C_GetSpawnAnimsFromBody_Params Parms{};

	Parms.SpawnerClass = SpawnerClass;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimArrayStruct != nullptr)
		*AnimArrayStruct = std::move(Parms.AnimArrayStruct);

}


// Function BS_Spawn_MonsterCloset_Archetype.BS_Spawn_MonsterCloset_Archetype_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class ABS_Spawn_MonsterCloset_Archetype_C>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (InstancedReference, UObjectWrapper, HasGetValueTypeHash)

void ABS_Spawn_MonsterCloset_Archetype_C::UserConstructionScript(TSoftObjectPtr<class ABS_Spawn_MonsterCloset_Archetype_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Spawn_MonsterCloset_Archetype_C", "UserConstructionScript");

	Params::ABS_Spawn_MonsterCloset_Archetype_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BS_Spawn_MonsterCloset_Archetype.BS_Spawn_MonsterCloset_Archetype_C.SpawnPresentationStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABS_Spawn_MonsterCloset_Archetype_C::SpawnPresentationStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Spawn_MonsterCloset_Archetype_C", "SpawnPresentationStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Spawn_MonsterCloset_Archetype.BS_Spawn_MonsterCloset_Archetype_C.SpawnPresentationStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABS_Spawn_MonsterCloset_Archetype_C::SpawnPresentationStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Spawn_MonsterCloset_Archetype_C", "SpawnPresentationStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BS_Spawn_MonsterCloset_Archetype.BS_Spawn_MonsterCloset_Archetype_C.PerAISpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                Body                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABS_Spawn_MonsterCloset_Archetype_C::PerAISpawn(class AQtnBodyPawn* Body)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Spawn_MonsterCloset_Archetype_C", "PerAISpawn");

	Params::ABS_Spawn_MonsterCloset_Archetype_C_PerAISpawn_Params Parms{};

	Parms.Body = Body;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BS_Spawn_MonsterCloset_Archetype.BS_Spawn_MonsterCloset_Archetype_C.ExecuteUbergraph_BS_Spawn_MonsterCloset_Archetype
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_Event_body                                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABS_Spawn_MonsterCloset_Archetype_C::ExecuteUbergraph_BS_Spawn_MonsterCloset_Archetype(int32 EntryPoint, class AQtnBodyPawn* K2Node_Event_body)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BS_Spawn_MonsterCloset_Archetype_C", "ExecuteUbergraph_BS_Spawn_MonsterCloset_Archetype");

	Params::ABS_Spawn_MonsterCloset_Archetype_C_ExecuteUbergraph_BS_Spawn_MonsterCloset_Archetype_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_body = K2Node_Event_body;

	UObject::ProcessEvent(Func, &Parms);

}

}


