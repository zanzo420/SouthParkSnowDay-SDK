#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FullBodyMantleEnt.FullBodyMantleEnt_C
// (None)

class UClass* UFullBodyMantleEnt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FullBodyMantleEnt_C");

	return Clss;
}


// FullBodyMantleEnt_C FullBodyMantleEnt.Default__FullBodyMantleEnt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFullBodyMantleEnt_C* UFullBodyMantleEnt_C::GetDefaultObj()
{
	static class UFullBodyMantleEnt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFullBodyMantleEnt_C*>(UFullBodyMantleEnt_C::StaticClass()->DefaultObject);

	return Default;
}

}


