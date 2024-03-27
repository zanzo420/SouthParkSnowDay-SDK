#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InvisibleHelper_Snow_BP.InvisibleHelper_Snow_BP_C
// (Actor)

class UClass* AInvisibleHelper_Snow_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InvisibleHelper_Snow_BP_C");

	return Clss;
}


// InvisibleHelper_Snow_BP_C InvisibleHelper_Snow_BP.Default__InvisibleHelper_Snow_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AInvisibleHelper_Snow_BP_C* AInvisibleHelper_Snow_BP_C::GetDefaultObj()
{
	static class AInvisibleHelper_Snow_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AInvisibleHelper_Snow_BP_C*>(AInvisibleHelper_Snow_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


