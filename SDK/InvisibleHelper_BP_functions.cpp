#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InvisibleHelper_BP.InvisibleHelper_BP_C
// (Actor)

class UClass* AInvisibleHelper_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InvisibleHelper_BP_C");

	return Clss;
}


// InvisibleHelper_BP_C InvisibleHelper_BP.Default__InvisibleHelper_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AInvisibleHelper_BP_C* AInvisibleHelper_BP_C::GetDefaultObj()
{
	static class AInvisibleHelper_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AInvisibleHelper_BP_C*>(AInvisibleHelper_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


