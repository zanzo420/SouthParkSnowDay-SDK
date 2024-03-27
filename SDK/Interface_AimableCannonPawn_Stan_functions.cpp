#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interface_AimableCannonPawn_Stan.Interface_AimableCannonPawn_Stan_C
// (None)

class UClass* IInterface_AimableCannonPawn_Stan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface_AimableCannonPawn_Stan_C");

	return Clss;
}


// Interface_AimableCannonPawn_Stan_C Interface_AimableCannonPawn_Stan.Default__Interface_AimableCannonPawn_Stan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterface_AimableCannonPawn_Stan_C* IInterface_AimableCannonPawn_Stan_C::GetDefaultObj()
{
	static class IInterface_AimableCannonPawn_Stan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface_AimableCannonPawn_Stan_C*>(IInterface_AimableCannonPawn_Stan_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Interface_AimableCannonPawn_Stan.Interface_AimableCannonPawn_Stan_C.GetMuzzle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             Muzzle                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_AimableCannonPawn_Stan_C::GetMuzzle(class USceneComponent** Muzzle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_AimableCannonPawn_Stan_C", "GetMuzzle");

	Params::IInterface_AimableCannonPawn_Stan_C_GetMuzzle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Muzzle != nullptr)
		*Muzzle = Parms.Muzzle;

}


// Function Interface_AimableCannonPawn_Stan.Interface_AimableCannonPawn_Stan_C.DoSwarmerLaunch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                Swarmer                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_AimableCannonPawn_Stan_C::DoSwarmerLaunch(class AQtnBodyPawn* Swarmer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_AimableCannonPawn_Stan_C", "DoSwarmerLaunch");

	Params::IInterface_AimableCannonPawn_Stan_C_DoSwarmerLaunch_Params Parms{};

	Parms.Swarmer = Swarmer;

	UObject::ProcessEvent(Func, &Parms);

}

}


