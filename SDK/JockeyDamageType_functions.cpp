#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass JockeyDamageType.JockeyDamageType_C
// (None)

class UClass* UJockeyDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JockeyDamageType_C");

	return Clss;
}


// JockeyDamageType_C JockeyDamageType.Default__JockeyDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJockeyDamageType_C* UJockeyDamageType_C::GetDefaultObj()
{
	static class UJockeyDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJockeyDamageType_C*>(UJockeyDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


