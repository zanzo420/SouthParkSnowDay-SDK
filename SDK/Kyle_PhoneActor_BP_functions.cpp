#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Kyle_PhoneActor_BP.Kyle_PhoneActor_BP_C
// (Actor)

class UClass* AKyle_PhoneActor_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Kyle_PhoneActor_BP_C");

	return Clss;
}


// Kyle_PhoneActor_BP_C Kyle_PhoneActor_BP.Default__Kyle_PhoneActor_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKyle_PhoneActor_BP_C* AKyle_PhoneActor_BP_C::GetDefaultObj()
{
	static class AKyle_PhoneActor_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKyle_PhoneActor_BP_C*>(AKyle_PhoneActor_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


