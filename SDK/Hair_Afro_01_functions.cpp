#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hair_Afro_01.Hair_Afro_01_C
// (None)

class UClass* UHair_Afro_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hair_Afro_01_C");

	return Clss;
}


// Hair_Afro_01_C Hair_Afro_01.Default__Hair_Afro_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHair_Afro_01_C* UHair_Afro_01_C::GetDefaultObj()
{
	static class UHair_Afro_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHair_Afro_01_C*>(UHair_Afro_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


