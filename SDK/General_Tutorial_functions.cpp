#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass General_Tutorial.General_Tutorial_C
// (None)

class UClass* UGeneral_Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("General_Tutorial_C");

	return Clss;
}


// General_Tutorial_C General_Tutorial.Default__General_Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGeneral_Tutorial_C* UGeneral_Tutorial_C::GetDefaultObj()
{
	static class UGeneral_Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeneral_Tutorial_C*>(UGeneral_Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}

}


