#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cheesed_FX.Cheesed_FX_C
// (Actor)

class UClass* ACheesed_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cheesed_FX_C");

	return Clss;
}


// Cheesed_FX_C Cheesed_FX.Default__Cheesed_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACheesed_FX_C* ACheesed_FX_C::GetDefaultObj()
{
	static class ACheesed_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACheesed_FX_C*>(ACheesed_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


