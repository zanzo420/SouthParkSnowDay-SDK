#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BigImpactShake.BigImpactShake_C
// (None)

class UClass* UBigImpactShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BigImpactShake_C");

	return Clss;
}


// BigImpactShake_C BigImpactShake.Default__BigImpactShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBigImpactShake_C* UBigImpactShake_C::GetDefaultObj()
{
	static class UBigImpactShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBigImpactShake_C*>(UBigImpactShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


