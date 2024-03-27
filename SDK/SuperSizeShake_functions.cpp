#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SuperSizeShake.SuperSizeShake_C
// (None)

class UClass* USuperSizeShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SuperSizeShake_C");

	return Clss;
}


// SuperSizeShake_C SuperSizeShake.Default__SuperSizeShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USuperSizeShake_C* USuperSizeShake_C::GetDefaultObj()
{
	static class USuperSizeShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USuperSizeShake_C*>(USuperSizeShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


