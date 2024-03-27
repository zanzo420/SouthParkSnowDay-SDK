#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootSmashable_Spawner.LootSmashable_Spawner_C
// (Actor)

class UClass* ALootSmashable_Spawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootSmashable_Spawner_C");

	return Clss;
}


// LootSmashable_Spawner_C LootSmashable_Spawner.Default__LootSmashable_Spawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALootSmashable_Spawner_C* ALootSmashable_Spawner_C::GetDefaultObj()
{
	static class ALootSmashable_Spawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALootSmashable_Spawner_C*>(ALootSmashable_Spawner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LootSmashable_Spawner.LootSmashable_Spawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ALootSmashable_Spawner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootSmashable_Spawner_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LootSmashable_Spawner.LootSmashable_Spawner_C.ExecuteUbergraph_LootSmashable_Spawner
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_SpawnWithTag_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALootSmashable_Spawner_C::ExecuteUbergraph_LootSmashable_Spawner(int32 EntryPoint, class AActor* CallFunc_SpawnWithTag_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootSmashable_Spawner_C", "ExecuteUbergraph_LootSmashable_Spawner");

	Params::ALootSmashable_Spawner_C_ExecuteUbergraph_LootSmashable_Spawner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SpawnWithTag_ReturnValue = CallFunc_SpawnWithTag_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


