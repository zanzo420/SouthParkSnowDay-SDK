#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FullBodyMantle.FullBodyMantle_C
// (None)

class UClass* UFullBodyMantle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FullBodyMantle_C");

	return Clss;
}


// FullBodyMantle_C FullBodyMantle.Default__FullBodyMantle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFullBodyMantle_C* UFullBodyMantle_C::GetDefaultObj()
{
	static class UFullBodyMantle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFullBodyMantle_C*>(UFullBodyMantle_C::StaticClass()->DefaultObject);

	return Default;
}

}


