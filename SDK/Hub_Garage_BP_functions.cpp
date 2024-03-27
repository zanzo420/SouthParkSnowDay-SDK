#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hub_Garage_BP.Hub_Garage_BP_C
// (Actor)

class UClass* AHub_Garage_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hub_Garage_BP_C");

	return Clss;
}


// Hub_Garage_BP_C Hub_Garage_BP.Default__Hub_Garage_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHub_Garage_BP_C* AHub_Garage_BP_C::GetDefaultObj()
{
	static class AHub_Garage_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHub_Garage_BP_C*>(AHub_Garage_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Hub_Garage_BP.Hub_Garage_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHub_Garage_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hub_Garage_BP_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


