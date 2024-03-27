#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AxeThrowShake.AxeThrowShake_C
// (None)

class UClass* UAxeThrowShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AxeThrowShake_C");

	return Clss;
}


// AxeThrowShake_C AxeThrowShake.Default__AxeThrowShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAxeThrowShake_C* UAxeThrowShake_C::GetDefaultObj()
{
	static class UAxeThrowShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAxeThrowShake_C*>(UAxeThrowShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


