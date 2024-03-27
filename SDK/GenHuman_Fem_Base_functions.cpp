#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenHuman_Fem_Base.GenHuman_Fem_Base_C
// (None)

class UClass* UGenHuman_Fem_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenHuman_Fem_Base_C");

	return Clss;
}


// GenHuman_Fem_Base_C GenHuman_Fem_Base.Default__GenHuman_Fem_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGenHuman_Fem_Base_C* UGenHuman_Fem_Base_C::GetDefaultObj()
{
	static class UGenHuman_Fem_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGenHuman_Fem_Base_C*>(UGenHuman_Fem_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


