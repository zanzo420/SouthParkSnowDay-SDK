#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericBlockerMist_BP.GenericBlockerMist_BP_C
// (Actor)

class UClass* AGenericBlockerMist_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericBlockerMist_BP_C");

	return Clss;
}


// GenericBlockerMist_BP_C GenericBlockerMist_BP.Default__GenericBlockerMist_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericBlockerMist_BP_C* AGenericBlockerMist_BP_C::GetDefaultObj()
{
	static class AGenericBlockerMist_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericBlockerMist_BP_C*>(AGenericBlockerMist_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GenericBlockerMist_BP.GenericBlockerMist_BP_C.OnRep_isBlocking
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGenericBlockerMist_BP_C::OnRep_isBlocking(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericBlockerMist_BP_C", "OnRep_isBlocking");

	Params::AGenericBlockerMist_BP_C_OnRep_isBlocking_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


