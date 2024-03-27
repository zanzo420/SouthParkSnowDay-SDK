#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interface_QtnGoal_MS_Arc2_PrincessKenny.Interface_QtnGoal_MS_Arc2_PrincessKenny_C
// (None)

class UClass* IInterface_QtnGoal_MS_Arc2_PrincessKenny_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface_QtnGoal_MS_Arc2_PrincessKenny_C");

	return Clss;
}


// Interface_QtnGoal_MS_Arc2_PrincessKenny_C Interface_QtnGoal_MS_Arc2_PrincessKenny.Default__Interface_QtnGoal_MS_Arc2_PrincessKenny_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterface_QtnGoal_MS_Arc2_PrincessKenny_C* IInterface_QtnGoal_MS_Arc2_PrincessKenny_C::GetDefaultObj()
{
	static class IInterface_QtnGoal_MS_Arc2_PrincessKenny_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface_QtnGoal_MS_Arc2_PrincessKenny_C*>(IInterface_QtnGoal_MS_Arc2_PrincessKenny_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Interface_QtnGoal_MS_Arc2_PrincessKenny.Interface_QtnGoal_MS_Arc2_PrincessKenny_C.GetDebugStartLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALocationMarker_BP_C*        DebugStartLocation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_QtnGoal_MS_Arc2_PrincessKenny_C::GetDebugStartLocation(class ALocationMarker_BP_C** DebugStartLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_MS_Arc2_PrincessKenny_C", "GetDebugStartLocation");

	Params::IInterface_QtnGoal_MS_Arc2_PrincessKenny_C_GetDebugStartLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DebugStartLocation != nullptr)
		*DebugStartLocation = Parms.DebugStartLocation;

}

}


