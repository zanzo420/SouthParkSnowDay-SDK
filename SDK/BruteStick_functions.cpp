#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BruteStick.BruteStick_C
// (Actor)

class UClass* ABruteStick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BruteStick_C");

	return Clss;
}


// BruteStick_C BruteStick.Default__BruteStick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABruteStick_C* ABruteStick_C::GetDefaultObj()
{
	static class ABruteStick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABruteStick_C*>(ABruteStick_C::StaticClass()->DefaultObject);

	return Default;
}

}


