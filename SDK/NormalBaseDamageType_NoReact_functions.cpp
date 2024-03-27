#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NormalBaseDamageType_NoReact.NormalBaseDamageType_NoReact_C
// (None)

class UClass* UNormalBaseDamageType_NoReact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NormalBaseDamageType_NoReact_C");

	return Clss;
}


// NormalBaseDamageType_NoReact_C NormalBaseDamageType_NoReact.Default__NormalBaseDamageType_NoReact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNormalBaseDamageType_NoReact_C* UNormalBaseDamageType_NoReact_C::GetDefaultObj()
{
	static class UNormalBaseDamageType_NoReact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNormalBaseDamageType_NoReact_C*>(UNormalBaseDamageType_NoReact_C::StaticClass()->DefaultObject);

	return Default;
}

}


