#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Jimmy_PhoneActor_BP.Jimmy_PhoneActor_BP_C
// (Actor)

class UClass* AJimmy_PhoneActor_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Jimmy_PhoneActor_BP_C");

	return Clss;
}


// Jimmy_PhoneActor_BP_C Jimmy_PhoneActor_BP.Default__Jimmy_PhoneActor_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AJimmy_PhoneActor_BP_C* AJimmy_PhoneActor_BP_C::GetDefaultObj()
{
	static class AJimmy_PhoneActor_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AJimmy_PhoneActor_BP_C*>(AJimmy_PhoneActor_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


