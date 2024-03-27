#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SuperStrengthSmash_FX.SuperStrengthSmash_FX_C
// (Actor)

class UClass* ASuperStrengthSmash_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SuperStrengthSmash_FX_C");

	return Clss;
}


// SuperStrengthSmash_FX_C SuperStrengthSmash_FX.Default__SuperStrengthSmash_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASuperStrengthSmash_FX_C* ASuperStrengthSmash_FX_C::GetDefaultObj()
{
	static class ASuperStrengthSmash_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASuperStrengthSmash_FX_C*>(ASuperStrengthSmash_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


