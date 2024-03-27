#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HankeyEffigy_BP.HankeyEffigy_BP_C
// (Actor)

class UClass* AHankeyEffigy_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HankeyEffigy_BP_C");

	return Clss;
}


// HankeyEffigy_BP_C HankeyEffigy_BP.Default__HankeyEffigy_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHankeyEffigy_BP_C* AHankeyEffigy_BP_C::GetDefaultObj()
{
	static class AHankeyEffigy_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHankeyEffigy_BP_C*>(AHankeyEffigy_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


