#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalSubStateSerpentine_Exploder.MentalSubStateSerpentine_Exploder_C
// (None)

class UClass* UMentalSubStateSerpentine_Exploder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalSubStateSerpentine_Exploder_C");

	return Clss;
}


// MentalSubStateSerpentine_Exploder_C MentalSubStateSerpentine_Exploder.Default__MentalSubStateSerpentine_Exploder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalSubStateSerpentine_Exploder_C* UMentalSubStateSerpentine_Exploder_C::GetDefaultObj()
{
	static class UMentalSubStateSerpentine_Exploder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalSubStateSerpentine_Exploder_C*>(UMentalSubStateSerpentine_Exploder_C::StaticClass()->DefaultObject);

	return Default;
}

}


