#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenSnow_Blob1.GenSnow_Blob1_C
// (Actor)

class UClass* AGenSnow_Blob1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenSnow_Blob1_C");

	return Clss;
}


// GenSnow_Blob1_C GenSnow_Blob1.Default__GenSnow_Blob1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenSnow_Blob1_C* AGenSnow_Blob1_C::GetDefaultObj()
{
	static class AGenSnow_Blob1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenSnow_Blob1_C*>(AGenSnow_Blob1_C::StaticClass()->DefaultObject);

	return Default;
}

}


