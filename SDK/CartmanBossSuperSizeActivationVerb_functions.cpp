#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CartmanBossSuperSizeActivationVerb.CartmanBossSuperSizeActivationVerb_C
// (None)

class UClass* UCartmanBossSuperSizeActivationVerb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CartmanBossSuperSizeActivationVerb_C");

	return Clss;
}


// CartmanBossSuperSizeActivationVerb_C CartmanBossSuperSizeActivationVerb.Default__CartmanBossSuperSizeActivationVerb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCartmanBossSuperSizeActivationVerb_C* UCartmanBossSuperSizeActivationVerb_C::GetDefaultObj()
{
	static class UCartmanBossSuperSizeActivationVerb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCartmanBossSuperSizeActivationVerb_C*>(UCartmanBossSuperSizeActivationVerb_C::StaticClass()->DefaultObject);

	return Default;
}

}


