#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Nichole_PhoneActor_BP.Nichole_PhoneActor_BP_C
// (Actor)

class UClass* ANichole_PhoneActor_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Nichole_PhoneActor_BP_C");

	return Clss;
}


// Nichole_PhoneActor_BP_C Nichole_PhoneActor_BP.Default__Nichole_PhoneActor_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANichole_PhoneActor_BP_C* ANichole_PhoneActor_BP_C::GetDefaultObj()
{
	static class ANichole_PhoneActor_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANichole_PhoneActor_BP_C*>(ANichole_PhoneActor_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


