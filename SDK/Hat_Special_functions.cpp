#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hat_Special.Hat_Special_C
// (None)

class UClass* UHat_Special_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hat_Special_C");

	return Clss;
}


// Hat_Special_C Hat_Special.Default__Hat_Special_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHat_Special_C* UHat_Special_C::GetDefaultObj()
{
	static class UHat_Special_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHat_Special_C*>(UHat_Special_C::StaticClass()->DefaultObject);

	return Default;
}

}


