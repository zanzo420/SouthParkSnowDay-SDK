#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Body_Swarmer_Barb_E.Body_Swarmer_Barb_E_C
// (None)

class UClass* UBody_Swarmer_Barb_E_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Body_Swarmer_Barb_E_C");

	return Clss;
}


// Body_Swarmer_Barb_E_C Body_Swarmer_Barb_E.Default__Body_Swarmer_Barb_E_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBody_Swarmer_Barb_E_C* UBody_Swarmer_Barb_E_C::GetDefaultObj()
{
	static class UBody_Swarmer_Barb_E_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBody_Swarmer_Barb_E_C*>(UBody_Swarmer_Barb_E_C::StaticClass()->DefaultObject);

	return Default;
}

}


