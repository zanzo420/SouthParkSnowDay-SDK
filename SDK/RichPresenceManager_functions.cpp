#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RichPresenceManager.RichPresenceManager_C
// (None)

class UClass* URichPresenceManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RichPresenceManager_C");

	return Clss;
}


// RichPresenceManager_C RichPresenceManager.Default__RichPresenceManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URichPresenceManager_C* URichPresenceManager_C::GetDefaultObj()
{
	static class URichPresenceManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URichPresenceManager_C*>(URichPresenceManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


