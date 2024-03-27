#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interface_StanBossBattle.Interface_StanBossBattle_C
// (None)

class UClass* IInterface_StanBossBattle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface_StanBossBattle_C");

	return Clss;
}


// Interface_StanBossBattle_C Interface_StanBossBattle.Default__Interface_StanBossBattle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterface_StanBossBattle_C* IInterface_StanBossBattle_C::GetDefaultObj()
{
	static class IInterface_StanBossBattle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface_StanBossBattle_C*>(IInterface_StanBossBattle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Interface_StanBossBattle.Interface_StanBossBattle_C.DoTrackThisCannonball
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CannonballAsActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_StanBossBattle_C::DoTrackThisCannonball(class AActor* CannonballAsActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_StanBossBattle_C", "DoTrackThisCannonball");

	Params::IInterface_StanBossBattle_C_DoTrackThisCannonball_Params Parms{};

	Parms.CannonballAsActor = CannonballAsActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Interface_StanBossBattle.Interface_StanBossBattle_C.DoCannonFiredEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterface_StanBossBattle_C::DoCannonFiredEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_StanBossBattle_C", "DoCannonFiredEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Interface_StanBossBattle.Interface_StanBossBattle_C.DEBUGONLY_SetCheckForStanDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CheckForStanDamage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterface_StanBossBattle_C::DEBUGONLY_SetCheckForStanDamage(bool CheckForStanDamage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_StanBossBattle_C", "DEBUGONLY_SetCheckForStanDamage");

	Params::IInterface_StanBossBattle_C_DEBUGONLY_SetCheckForStanDamage_Params Parms{};

	Parms.CheckForStanDamage = CheckForStanDamage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Interface_StanBossBattle.Interface_StanBossBattle_C.DEBUGONLY_EndDragonPhase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterface_StanBossBattle_C::DEBUGONLY_EndDragonPhase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_StanBossBattle_C", "DEBUGONLY_EndDragonPhase");



	UObject::ProcessEvent(Func, nullptr);

}

}


