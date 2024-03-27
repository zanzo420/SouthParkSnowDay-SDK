#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenSnow_Long1.GenSnow_Long1_C
// (Actor)

class UClass* AGenSnow_Long1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenSnow_Long1_C");

	return Clss;
}


// GenSnow_Long1_C GenSnow_Long1.Default__GenSnow_Long1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenSnow_Long1_C* AGenSnow_Long1_C::GetDefaultObj()
{
	static class AGenSnow_Long1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenSnow_Long1_C*>(AGenSnow_Long1_C::StaticClass()->DefaultObject);

	return Default;
}

}


