#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interface_CannonTutorial.Interface_CannonTutorial_C
// (None)

class UClass* IInterface_CannonTutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface_CannonTutorial_C");

	return Clss;
}


// Interface_CannonTutorial_C Interface_CannonTutorial.Default__Interface_CannonTutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterface_CannonTutorial_C* IInterface_CannonTutorial_C::GetDefaultObj()
{
	static class IInterface_CannonTutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface_CannonTutorial_C*>(IInterface_CannonTutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Interface_CannonTutorial.Interface_CannonTutorial_C.PlayExplanationVO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterface_CannonTutorial_C::PlayExplanationVO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_CannonTutorial_C", "PlayExplanationVO");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Interface_CannonTutorial.Interface_CannonTutorial_C.PlayFartVO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterface_CannonTutorial_C::PlayFartVO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_CannonTutorial_C", "PlayFartVO");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Interface_CannonTutorial.Interface_CannonTutorial_C.TrackCannonball
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Cannonball_C*            Cannonball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_CannonTutorial_C::TrackCannonball(class ABP_Cannonball_C* Cannonball)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_CannonTutorial_C", "TrackCannonball");

	Params::IInterface_CannonTutorial_C_TrackCannonball_Params Parms{};

	Parms.Cannonball = Cannonball;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Interface_CannonTutorial.Interface_CannonTutorial_C.PlayReminderVO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterface_CannonTutorial_C::PlayReminderVO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_CannonTutorial_C", "PlayReminderVO");



	UObject::ProcessEvent(Func, nullptr);

}

}


