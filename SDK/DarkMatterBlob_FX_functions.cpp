#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DarkMatterBlob_FX.DarkMatterBlob_FX_C
// (Actor)

class UClass* ADarkMatterBlob_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DarkMatterBlob_FX_C");

	return Clss;
}


// DarkMatterBlob_FX_C DarkMatterBlob_FX.Default__DarkMatterBlob_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADarkMatterBlob_FX_C* ADarkMatterBlob_FX_C::GetDefaultObj()
{
	static class ADarkMatterBlob_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADarkMatterBlob_FX_C*>(ADarkMatterBlob_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


