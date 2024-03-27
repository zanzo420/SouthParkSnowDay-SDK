#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FullBodyMantle_Adult.FullBodyMantle_Adult_C
// (None)

class UClass* UFullBodyMantle_Adult_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FullBodyMantle_Adult_C");

	return Clss;
}


// FullBodyMantle_Adult_C FullBodyMantle_Adult.Default__FullBodyMantle_Adult_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFullBodyMantle_Adult_C* UFullBodyMantle_Adult_C::GetDefaultObj()
{
	static class UFullBodyMantle_Adult_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFullBodyMantle_Adult_C*>(UFullBodyMantle_Adult_C::StaticClass()->DefaultObject);

	return Default;
}

}


