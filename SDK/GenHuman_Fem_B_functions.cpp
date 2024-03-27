#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenHuman_Fem_B.GenHuman_Fem_B_C
// (None)

class UClass* UGenHuman_Fem_B_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenHuman_Fem_B_C");

	return Clss;
}


// GenHuman_Fem_B_C GenHuman_Fem_B.Default__GenHuman_Fem_B_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGenHuman_Fem_B_C* UGenHuman_Fem_B_C::GetDefaultObj()
{
	static class UGenHuman_Fem_B_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGenHuman_Fem_B_C*>(UGenHuman_Fem_B_C::StaticClass()->DefaultObject);

	return Default;
}

}


