#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IC_NoMovement.IC_NoMovement_C
// (None)

class UClass* UIC_NoMovement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IC_NoMovement_C");

	return Clss;
}


// IC_NoMovement_C IC_NoMovement.Default__IC_NoMovement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIC_NoMovement_C* UIC_NoMovement_C::GetDefaultObj()
{
	static class UIC_NoMovement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIC_NoMovement_C*>(UIC_NoMovement_C::StaticClass()->DefaultObject);

	return Default;
}

}


