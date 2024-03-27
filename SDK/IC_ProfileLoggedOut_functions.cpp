#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IC_ProfileLoggedOut.IC_ProfileLoggedOut_C
// (None)

class UClass* UIC_ProfileLoggedOut_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IC_ProfileLoggedOut_C");

	return Clss;
}


// IC_ProfileLoggedOut_C IC_ProfileLoggedOut.Default__IC_ProfileLoggedOut_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIC_ProfileLoggedOut_C* UIC_ProfileLoggedOut_C::GetDefaultObj()
{
	static class UIC_ProfileLoggedOut_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIC_ProfileLoggedOut_C*>(UIC_ProfileLoggedOut_C::StaticClass()->DefaultObject);

	return Default;
}

}


