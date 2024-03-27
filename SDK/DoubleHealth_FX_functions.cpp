#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoubleHealth_FX.DoubleHealth_FX_C
// (Actor)

class UClass* ADoubleHealth_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoubleHealth_FX_C");

	return Clss;
}


// DoubleHealth_FX_C DoubleHealth_FX.Default__DoubleHealth_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADoubleHealth_FX_C* ADoubleHealth_FX_C::GetDefaultObj()
{
	static class ADoubleHealth_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADoubleHealth_FX_C*>(ADoubleHealth_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


