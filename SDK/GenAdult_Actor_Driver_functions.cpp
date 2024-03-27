#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenAdult_Actor_Driver.GenAdult_Actor_Driver_C
// (Actor)

class UClass* AGenAdult_Actor_Driver_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenAdult_Actor_Driver_C");

	return Clss;
}


// GenAdult_Actor_Driver_C GenAdult_Actor_Driver.Default__GenAdult_Actor_Driver_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenAdult_Actor_Driver_C* AGenAdult_Actor_Driver_C::GetDefaultObj()
{
	static class AGenAdult_Actor_Driver_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenAdult_Actor_Driver_C*>(AGenAdult_Actor_Driver_C::StaticClass()->DefaultObject);

	return Default;
}

}


