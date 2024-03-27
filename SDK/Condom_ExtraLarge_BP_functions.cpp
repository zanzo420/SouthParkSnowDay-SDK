#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Condom_ExtraLarge_BP.Condom_ExtraLarge_BP_C
// (Actor)

class UClass* ACondom_ExtraLarge_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Condom_ExtraLarge_BP_C");

	return Clss;
}


// Condom_ExtraLarge_BP_C Condom_ExtraLarge_BP.Default__Condom_ExtraLarge_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACondom_ExtraLarge_BP_C* ACondom_ExtraLarge_BP_C::GetDefaultObj()
{
	static class ACondom_ExtraLarge_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACondom_ExtraLarge_BP_C*>(ACondom_ExtraLarge_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


