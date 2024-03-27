#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArrowBounce_Flesh.ArrowBounce_Flesh_C
// (Actor)

class UClass* AArrowBounce_Flesh_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArrowBounce_Flesh_C");

	return Clss;
}


// ArrowBounce_Flesh_C ArrowBounce_Flesh.Default__ArrowBounce_Flesh_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AArrowBounce_Flesh_C* AArrowBounce_Flesh_C::GetDefaultObj()
{
	static class AArrowBounce_Flesh_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AArrowBounce_Flesh_C*>(AArrowBounce_Flesh_C::StaticClass()->DefaultObject);

	return Default;
}

}


