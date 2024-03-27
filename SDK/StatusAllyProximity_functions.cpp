#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StatusAllyProximity.StatusAllyProximity_C
// (None)

class UClass* UStatusAllyProximity_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StatusAllyProximity_C");

	return Clss;
}


// StatusAllyProximity_C StatusAllyProximity.Default__StatusAllyProximity_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStatusAllyProximity_C* UStatusAllyProximity_C::GetDefaultObj()
{
	static class UStatusAllyProximity_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStatusAllyProximity_C*>(UStatusAllyProximity_C::StaticClass()->DefaultObject);

	return Default;
}

}


