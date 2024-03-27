#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShizaScreemShake.ShizaScreemShake_C
// (None)

class UClass* UShizaScreemShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShizaScreemShake_C");

	return Clss;
}


// ShizaScreemShake_C ShizaScreemShake.Default__ShizaScreemShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShizaScreemShake_C* UShizaScreemShake_C::GetDefaultObj()
{
	static class UShizaScreemShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShizaScreemShake_C*>(UShizaScreemShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


