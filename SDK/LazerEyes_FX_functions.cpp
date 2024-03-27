#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LazerEyes_FX.LazerEyes_FX_C
// (Actor)

class UClass* ALazerEyes_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LazerEyes_FX_C");

	return Clss;
}


// LazerEyes_FX_C LazerEyes_FX.Default__LazerEyes_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALazerEyes_FX_C* ALazerEyes_FX_C::GetDefaultObj()
{
	static class ALazerEyes_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALazerEyes_FX_C*>(ALazerEyes_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


