#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Fort_Palisade01_BP.Fort_Palisade01_BP_C
// (Actor)

class UClass* AFort_Palisade01_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Fort_Palisade01_BP_C");

	return Clss;
}


// Fort_Palisade01_BP_C Fort_Palisade01_BP.Default__Fort_Palisade01_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFort_Palisade01_BP_C* AFort_Palisade01_BP_C::GetDefaultObj()
{
	static class AFort_Palisade01_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFort_Palisade01_BP_C*>(AFort_Palisade01_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


