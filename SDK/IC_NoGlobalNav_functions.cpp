#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IC_NoGlobalNav.IC_NoGlobalNav_C
// (None)

class UClass* UIC_NoGlobalNav_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IC_NoGlobalNav_C");

	return Clss;
}


// IC_NoGlobalNav_C IC_NoGlobalNav.Default__IC_NoGlobalNav_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIC_NoGlobalNav_C* UIC_NoGlobalNav_C::GetDefaultObj()
{
	static class UIC_NoGlobalNav_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIC_NoGlobalNav_C*>(UIC_NoGlobalNav_C::StaticClass()->DefaultObject);

	return Default;
}

}


