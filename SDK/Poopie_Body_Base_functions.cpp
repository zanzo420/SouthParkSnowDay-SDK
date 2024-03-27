#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Poopie_Body_Base.Poopie_Body_Base_C
// (None)

class UClass* UPoopie_Body_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Poopie_Body_Base_C");

	return Clss;
}


// Poopie_Body_Base_C Poopie_Body_Base.Default__Poopie_Body_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPoopie_Body_Base_C* UPoopie_Body_Base_C::GetDefaultObj()
{
	static class UPoopie_Body_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPoopie_Body_Base_C*>(UPoopie_Body_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


