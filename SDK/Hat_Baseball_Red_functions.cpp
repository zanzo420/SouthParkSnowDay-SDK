#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hat_Baseball_Red.Hat_Baseball_Red_C
// (None)

class UClass* UHat_Baseball_Red_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hat_Baseball_Red_C");

	return Clss;
}


// Hat_Baseball_Red_C Hat_Baseball_Red.Default__Hat_Baseball_Red_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHat_Baseball_Red_C* UHat_Baseball_Red_C::GetDefaultObj()
{
	static class UHat_Baseball_Red_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHat_Baseball_Red_C*>(UHat_Baseball_Red_C::StaticClass()->DefaultObject);

	return Default;
}

}


