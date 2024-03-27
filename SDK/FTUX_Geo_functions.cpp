#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FTUX_Geo.FTUX_Geo_C
// (Actor)

class UClass* AFTUX_Geo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FTUX_Geo_C");

	return Clss;
}


// FTUX_Geo_C FTUX_Geo.Default__FTUX_Geo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFTUX_Geo_C* AFTUX_Geo_C::GetDefaultObj()
{
	static class AFTUX_Geo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFTUX_Geo_C*>(AFTUX_Geo_C::StaticClass()->DefaultObject);

	return Default;
}

}


