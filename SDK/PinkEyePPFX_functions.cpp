#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PinkEyePPFX.PinkEyePPFX_C
// (None)

class UClass* UPinkEyePPFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PinkEyePPFX_C");

	return Clss;
}


// PinkEyePPFX_C PinkEyePPFX.Default__PinkEyePPFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPinkEyePPFX_C* UPinkEyePPFX_C::GetDefaultObj()
{
	static class UPinkEyePPFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPinkEyePPFX_C*>(UPinkEyePPFX_C::StaticClass()->DefaultObject);

	return Default;
}

}


