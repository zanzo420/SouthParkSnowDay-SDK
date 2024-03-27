#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hair_AfroBraidFade_01.Hair_AfroBraidFade_01_C
// (None)

class UClass* UHair_AfroBraidFade_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hair_AfroBraidFade_01_C");

	return Clss;
}


// Hair_AfroBraidFade_01_C Hair_AfroBraidFade_01.Default__Hair_AfroBraidFade_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHair_AfroBraidFade_01_C* UHair_AfroBraidFade_01_C::GetDefaultObj()
{
	static class UHair_AfroBraidFade_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHair_AfroBraidFade_01_C*>(UHair_AfroBraidFade_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


