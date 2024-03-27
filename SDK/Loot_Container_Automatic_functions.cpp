#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Loot_Container_Automatic.Loot_Container_Automatic_C
// (Actor)

class UClass* ALoot_Container_Automatic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Loot_Container_Automatic_C");

	return Clss;
}


// Loot_Container_Automatic_C Loot_Container_Automatic.Default__Loot_Container_Automatic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALoot_Container_Automatic_C* ALoot_Container_Automatic_C::GetDefaultObj()
{
	static class ALoot_Container_Automatic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALoot_Container_Automatic_C*>(ALoot_Container_Automatic_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Loot_Container_Automatic.Loot_Container_Automatic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALoot_Container_Automatic_C::UserConstructionScript(class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Loot_Container_Automatic_C", "UserConstructionScript");

	Params::ALoot_Container_Automatic_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Loot_Container_Automatic.Loot_Container_Automatic_C.OpenPresentation
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AQtnPlayerPawn*>      PlayersWhoCanGetLoot                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ALoot_Container_Automatic_C::OpenPresentation(TArray<class AQtnPlayerPawn*>& PlayersWhoCanGetLoot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Loot_Container_Automatic_C", "OpenPresentation");

	Params::ALoot_Container_Automatic_C_OpenPresentation_Params Parms{};

	Parms.PlayersWhoCanGetLoot = PlayersWhoCanGetLoot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Loot_Container_Automatic.Loot_Container_Automatic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ALoot_Container_Automatic_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Loot_Container_Automatic_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Loot_Container_Automatic.Loot_Container_Automatic_C.ExecuteUbergraph_Loot_Container_Automatic
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AQtnPlayerPawn*>      K2Node_CustomEvent_playersWhoCanGetLoot                          (ConstParm, ReferenceParm, ContainsInstancedReference)
// float                              CallFunc_SpawnLootForSelectPlayers_ServerOnly_secondsToFinishSpawning(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALoot_Container_Automatic_C::ExecuteUbergraph_Loot_Container_Automatic(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, TArray<class AQtnPlayerPawn*>& K2Node_CustomEvent_playersWhoCanGetLoot, float CallFunc_SpawnLootForSelectPlayers_ServerOnly_secondsToFinishSpawning, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Loot_Container_Automatic_C", "ExecuteUbergraph_Loot_Container_Automatic");

	Params::ALoot_Container_Automatic_C_ExecuteUbergraph_Loot_Container_Automatic_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CustomEvent_playersWhoCanGetLoot = K2Node_CustomEvent_playersWhoCanGetLoot;
	Parms.CallFunc_SpawnLootForSelectPlayers_ServerOnly_secondsToFinishSpawning = CallFunc_SpawnLootForSelectPlayers_ServerOnly_secondsToFinishSpawning;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


