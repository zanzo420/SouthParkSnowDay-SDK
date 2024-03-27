#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cartman_PhoneActor_BP.Cartman_PhoneActor_BP_C
// (Actor)

class UClass* ACartman_PhoneActor_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cartman_PhoneActor_BP_C");

	return Clss;
}


// Cartman_PhoneActor_BP_C Cartman_PhoneActor_BP.Default__Cartman_PhoneActor_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACartman_PhoneActor_BP_C* ACartman_PhoneActor_BP_C::GetDefaultObj()
{
	static class ACartman_PhoneActor_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACartman_PhoneActor_BP_C*>(ACartman_PhoneActor_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


