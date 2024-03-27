#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenHuman_Fem_F.GenHuman_Fem_F_C
// (None)

class UClass* UGenHuman_Fem_F_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenHuman_Fem_F_C");

	return Clss;
}


// GenHuman_Fem_F_C GenHuman_Fem_F.Default__GenHuman_Fem_F_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGenHuman_Fem_F_C* UGenHuman_Fem_F_C::GetDefaultObj()
{
	static class UGenHuman_Fem_F_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGenHuman_Fem_F_C*>(UGenHuman_Fem_F_C::StaticClass()->DefaultObject);

	return Default;
}

}


