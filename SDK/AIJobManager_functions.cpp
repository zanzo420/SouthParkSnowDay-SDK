#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIJobManager.AIJobManager_C
// (None)

class UClass* UAIJobManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIJobManager_C");

	return Clss;
}


// AIJobManager_C AIJobManager.Default__AIJobManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIJobManager_C* UAIJobManager_C::GetDefaultObj()
{
	static class UAIJobManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIJobManager_C*>(UAIJobManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


