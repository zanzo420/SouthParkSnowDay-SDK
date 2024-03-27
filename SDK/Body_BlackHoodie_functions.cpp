#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Body_BlackHoodie.Body_BlackHoodie_C
// (None)

class UClass* UBody_BlackHoodie_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Body_BlackHoodie_C");

	return Clss;
}


// Body_BlackHoodie_C Body_BlackHoodie.Default__Body_BlackHoodie_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBody_BlackHoodie_C* UBody_BlackHoodie_C::GetDefaultObj()
{
	static class UBody_BlackHoodie_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBody_BlackHoodie_C*>(UBody_BlackHoodie_C::StaticClass()->DefaultObject);

	return Default;
}

}


