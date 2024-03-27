#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hat_KnitPoof_Blue.Hat_KnitPoof_Blue_C
// (None)

class UClass* UHat_KnitPoof_Blue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hat_KnitPoof_Blue_C");

	return Clss;
}


// Hat_KnitPoof_Blue_C Hat_KnitPoof_Blue.Default__Hat_KnitPoof_Blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHat_KnitPoof_Blue_C* UHat_KnitPoof_Blue_C::GetDefaultObj()
{
	static class UHat_KnitPoof_Blue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHat_KnitPoof_Blue_C*>(UHat_KnitPoof_Blue_C::StaticClass()->DefaultObject);

	return Default;
}

}


