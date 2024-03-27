#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VOManager.VOManager_C
// (None)

class UClass* UVOManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VOManager_C");

	return Clss;
}


// VOManager_C VOManager.Default__VOManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVOManager_C* UVOManager_C::GetDefaultObj()
{
	static class UVOManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVOManager_C*>(UVOManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


