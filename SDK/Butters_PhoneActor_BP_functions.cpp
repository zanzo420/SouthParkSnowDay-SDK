#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Butters_PhoneActor_BP.Butters_PhoneActor_BP_C
// (Actor)

class UClass* AButters_PhoneActor_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Butters_PhoneActor_BP_C");

	return Clss;
}


// Butters_PhoneActor_BP_C Butters_PhoneActor_BP.Default__Butters_PhoneActor_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AButters_PhoneActor_BP_C* AButters_PhoneActor_BP_C::GetDefaultObj()
{
	static class AButters_PhoneActor_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AButters_PhoneActor_BP_C*>(AButters_PhoneActor_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


