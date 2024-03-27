#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShockedFX.ShockedFX_C
// (Actor)

class UClass* AShockedFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShockedFX_C");

	return Clss;
}


// ShockedFX_C ShockedFX.Default__ShockedFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShockedFX_C* AShockedFX_C::GetDefaultObj()
{
	static class AShockedFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShockedFX_C*>(AShockedFX_C::StaticClass()->DefaultObject);

	return Default;
}

}


