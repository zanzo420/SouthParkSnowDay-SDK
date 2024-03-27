#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArrowHit_Flesh.ArrowHit_Flesh_C
// (Actor)

class UClass* AArrowHit_Flesh_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArrowHit_Flesh_C");

	return Clss;
}


// ArrowHit_Flesh_C ArrowHit_Flesh.Default__ArrowHit_Flesh_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AArrowHit_Flesh_C* AArrowHit_Flesh_C::GetDefaultObj()
{
	static class AArrowHit_Flesh_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AArrowHit_Flesh_C*>(AArrowHit_Flesh_C::StaticClass()->DefaultObject);

	return Default;
}

}


