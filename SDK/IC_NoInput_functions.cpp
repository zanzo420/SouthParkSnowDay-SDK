#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IC_NoInput.IC_NoInput_C
// (None)

class UClass* UIC_NoInput_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IC_NoInput_C");

	return Clss;
}


// IC_NoInput_C IC_NoInput.Default__IC_NoInput_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIC_NoInput_C* UIC_NoInput_C::GetDefaultObj()
{
	static class UIC_NoInput_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIC_NoInput_C*>(UIC_NoInput_C::StaticClass()->DefaultObject);

	return Default;
}

}


