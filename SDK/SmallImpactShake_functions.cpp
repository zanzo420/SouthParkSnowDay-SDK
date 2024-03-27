#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SmallImpactShake.SmallImpactShake_C
// (None)

class UClass* USmallImpactShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmallImpactShake_C");

	return Clss;
}


// SmallImpactShake_C SmallImpactShake.Default__SmallImpactShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USmallImpactShake_C* USmallImpactShake_C::GetDefaultObj()
{
	static class USmallImpactShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USmallImpactShake_C*>(USmallImpactShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


