#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Camera_Cannon.Camera_Cannon_C
// (None)

class UClass* UCamera_Cannon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Camera_Cannon_C");

	return Clss;
}


// Camera_Cannon_C Camera_Cannon.Default__Camera_Cannon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamera_Cannon_C* UCamera_Cannon_C::GetDefaultObj()
{
	static class UCamera_Cannon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamera_Cannon_C*>(UCamera_Cannon_C::StaticClass()->DefaultObject);

	return Default;
}

}


