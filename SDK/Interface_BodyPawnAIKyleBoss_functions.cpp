#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interface_BodyPawnAIKyleBoss.Interface_BodyPawnAIKyleBoss_C
// (None)

class UClass* IInterface_BodyPawnAIKyleBoss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface_BodyPawnAIKyleBoss_C");

	return Clss;
}


// Interface_BodyPawnAIKyleBoss_C Interface_BodyPawnAIKyleBoss.Default__Interface_BodyPawnAIKyleBoss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterface_BodyPawnAIKyleBoss_C* IInterface_BodyPawnAIKyleBoss_C::GetDefaultObj()
{
	static class IInterface_BodyPawnAIKyleBoss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface_BodyPawnAIKyleBoss_C*>(IInterface_BodyPawnAIKyleBoss_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Interface_BodyPawnAIKyleBoss.Interface_BodyPawnAIKyleBoss_C.GetUnderEntCooldown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UnderEntCooldown                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterface_BodyPawnAIKyleBoss_C::GetUnderEntCooldown(bool* UnderEntCooldown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_BodyPawnAIKyleBoss_C", "GetUnderEntCooldown");

	Params::IInterface_BodyPawnAIKyleBoss_C_GetUnderEntCooldown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UnderEntCooldown != nullptr)
		*UnderEntCooldown = Parms.UnderEntCooldown;

}

}


