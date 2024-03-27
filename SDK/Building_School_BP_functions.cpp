#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Building_School_BP.Building_School_BP_C
// (Actor)

class UClass* ABuilding_School_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Building_School_BP_C");

	return Clss;
}


// Building_School_BP_C Building_School_BP.Default__Building_School_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuilding_School_BP_C* ABuilding_School_BP_C::GetDefaultObj()
{
	static class ABuilding_School_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuilding_School_BP_C*>(ABuilding_School_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Building_School_BP.Building_School_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuilding_School_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Building_School_BP_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


