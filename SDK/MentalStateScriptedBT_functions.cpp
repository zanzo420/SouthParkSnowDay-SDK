#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateScriptedBT.MentalStateScriptedBT_C
// (None)

class UClass* UMentalStateScriptedBT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateScriptedBT_C");

	return Clss;
}


// MentalStateScriptedBT_C MentalStateScriptedBT.Default__MentalStateScriptedBT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateScriptedBT_C* UMentalStateScriptedBT_C::GetDefaultObj()
{
	static class UMentalStateScriptedBT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateScriptedBT_C*>(UMentalStateScriptedBT_C::StaticClass()->DefaultObject);

	return Default;
}

}


