#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interface_QtnPawn_ShizaHulud.Interface_QtnPawn_ShizaHulud_C
// (None)

class UClass* IInterface_QtnPawn_ShizaHulud_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface_QtnPawn_ShizaHulud_C");

	return Clss;
}


// Interface_QtnPawn_ShizaHulud_C Interface_QtnPawn_ShizaHulud.Default__Interface_QtnPawn_ShizaHulud_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterface_QtnPawn_ShizaHulud_C* IInterface_QtnPawn_ShizaHulud_C::GetDefaultObj()
{
	static class IInterface_QtnPawn_ShizaHulud_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface_QtnPawn_ShizaHulud_C*>(IInterface_QtnPawn_ShizaHulud_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Interface_QtnPawn_ShizaHulud.Interface_QtnPawn_ShizaHulud_C.DoRequestShizaVerb
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              VerbIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_QtnPawn_ShizaHulud_C::DoRequestShizaVerb(int32 VerbIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnPawn_ShizaHulud_C", "DoRequestShizaVerb");

	Params::IInterface_QtnPawn_ShizaHulud_C_DoRequestShizaVerb_Params Parms{};

	Parms.VerbIndex = VerbIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Interface_QtnPawn_ShizaHulud.Interface_QtnPawn_ShizaHulud_C.DoExperimentalFightLogic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterface_QtnPawn_ShizaHulud_C::DoExperimentalFightLogic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnPawn_ShizaHulud_C", "DoExperimentalFightLogic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Interface_QtnPawn_ShizaHulud.Interface_QtnPawn_ShizaHulud_C.DoCheatRecovery
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterface_QtnPawn_ShizaHulud_C::DoCheatRecovery()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnPawn_ShizaHulud_C", "DoCheatRecovery");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Interface_QtnPawn_ShizaHulud.Interface_QtnPawn_ShizaHulud_C.DoCheatCannon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterface_QtnPawn_ShizaHulud_C::DoCheatCannon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnPawn_ShizaHulud_C", "DoCheatCannon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Interface_QtnPawn_ShizaHulud.Interface_QtnPawn_ShizaHulud_C.DoCheatNextPhase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterface_QtnPawn_ShizaHulud_C::DoCheatNextPhase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnPawn_ShizaHulud_C", "DoCheatNextPhase");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Interface_QtnPawn_ShizaHulud.Interface_QtnPawn_ShizaHulud_C.DoSkipCannons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterface_QtnPawn_ShizaHulud_C::DoSkipCannons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnPawn_ShizaHulud_C", "DoSkipCannons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Interface_QtnPawn_ShizaHulud.Interface_QtnPawn_ShizaHulud_C.DoCallOnDeathEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterface_QtnPawn_ShizaHulud_C::DoCallOnDeathEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnPawn_ShizaHulud_C", "DoCallOnDeathEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Interface_QtnPawn_ShizaHulud.Interface_QtnPawn_ShizaHulud_C.DoSpawnPoopletAtLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterface_QtnPawn_ShizaHulud_C::DoSpawnPoopletAtLocation(const struct FVector& Location, const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnPawn_ShizaHulud_C", "DoSpawnPoopletAtLocation");

	Params::IInterface_QtnPawn_ShizaHulud_C_DoSpawnPoopletAtLocation_Params Parms{};

	Parms.Location = Location;
	Parms.Rotation = Rotation;

	UObject::ProcessEvent(Func, &Parms);

}

}


