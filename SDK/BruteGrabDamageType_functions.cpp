#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BruteGrabDamageType.BruteGrabDamageType_C
// (None)

class UClass* UBruteGrabDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BruteGrabDamageType_C");

	return Clss;
}


// BruteGrabDamageType_C BruteGrabDamageType.Default__BruteGrabDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBruteGrabDamageType_C* UBruteGrabDamageType_C::GetDefaultObj()
{
	static class UBruteGrabDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBruteGrabDamageType_C*>(UBruteGrabDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


