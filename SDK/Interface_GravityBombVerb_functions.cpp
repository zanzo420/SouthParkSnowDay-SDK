#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interface_GravityBombVerb.Interface_GravityBombVerb_C
// (None)

class UClass* IInterface_GravityBombVerb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface_GravityBombVerb_C");

	return Clss;
}


// Interface_GravityBombVerb_C Interface_GravityBombVerb.Default__Interface_GravityBombVerb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterface_GravityBombVerb_C* IInterface_GravityBombVerb_C::GetDefaultObj()
{
	static class IInterface_GravityBombVerb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface_GravityBombVerb_C*>(IInterface_GravityBombVerb_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Interface_GravityBombVerb.Interface_GravityBombVerb_C.GetAbsoluteZeroDuration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AbsoluteZeroDuration                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_GravityBombVerb_C::GetAbsoluteZeroDuration(float* AbsoluteZeroDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_GravityBombVerb_C", "GetAbsoluteZeroDuration");

	Params::IInterface_GravityBombVerb_C_GetAbsoluteZeroDuration_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AbsoluteZeroDuration != nullptr)
		*AbsoluteZeroDuration = Parms.AbsoluteZeroDuration;

}

}


