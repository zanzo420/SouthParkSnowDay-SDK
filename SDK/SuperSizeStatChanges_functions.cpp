#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SuperSizeStatChanges.SuperSizeStatChanges_C
// (None)

class UClass* USuperSizeStatChanges_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SuperSizeStatChanges_C");

	return Clss;
}


// SuperSizeStatChanges_C SuperSizeStatChanges.Default__SuperSizeStatChanges_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USuperSizeStatChanges_C* USuperSizeStatChanges_C::GetDefaultObj()
{
	static class USuperSizeStatChanges_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USuperSizeStatChanges_C*>(USuperSizeStatChanges_C::StaticClass()->DefaultObject);

	return Default;
}

}


