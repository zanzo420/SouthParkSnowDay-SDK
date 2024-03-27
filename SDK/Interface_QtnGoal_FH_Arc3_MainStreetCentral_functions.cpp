#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interface_QtnGoal_FH_Arc3_MainStreetCentral.Interface_QtnGoal_FH_Arc3_MainStreetCentral_C
// (None)

class UClass* IInterface_QtnGoal_FH_Arc3_MainStreetCentral_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface_QtnGoal_FH_Arc3_MainStreetCentral_C");

	return Clss;
}


// Interface_QtnGoal_FH_Arc3_MainStreetCentral_C Interface_QtnGoal_FH_Arc3_MainStreetCentral.Default__Interface_QtnGoal_FH_Arc3_MainStreetCentral_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterface_QtnGoal_FH_Arc3_MainStreetCentral_C* IInterface_QtnGoal_FH_Arc3_MainStreetCentral_C::GetDefaultObj()
{
	static class IInterface_QtnGoal_FH_Arc3_MainStreetCentral_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface_QtnGoal_FH_Arc3_MainStreetCentral_C*>(IInterface_QtnGoal_FH_Arc3_MainStreetCentral_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Interface_QtnGoal_FH_Arc3_MainStreetCentral.Interface_QtnGoal_FH_Arc3_MainStreetCentral_C.DoGetExitGate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATravelVolume_BP_C*          ExitGate                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_QtnGoal_FH_Arc3_MainStreetCentral_C::DoGetExitGate(class ATravelVolume_BP_C** ExitGate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_FH_Arc3_MainStreetCentral_C", "DoGetExitGate");

	Params::IInterface_QtnGoal_FH_Arc3_MainStreetCentral_C_DoGetExitGate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ExitGate != nullptr)
		*ExitGate = Parms.ExitGate;

}

}


