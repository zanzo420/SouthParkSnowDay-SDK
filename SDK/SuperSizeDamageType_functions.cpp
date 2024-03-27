#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SuperSizeDamageType.SuperSizeDamageType_C
// (None)

class UClass* USuperSizeDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SuperSizeDamageType_C");

	return Clss;
}


// SuperSizeDamageType_C SuperSizeDamageType.Default__SuperSizeDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USuperSizeDamageType_C* USuperSizeDamageType_C::GetDefaultObj()
{
	static class USuperSizeDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USuperSizeDamageType_C*>(USuperSizeDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


