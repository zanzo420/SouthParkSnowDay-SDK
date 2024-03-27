#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalSubstateBTPawnAction.MentalSubstateBTPawnAction_C
// (None)

class UClass* UMentalSubstateBTPawnAction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalSubstateBTPawnAction_C");

	return Clss;
}


// MentalSubstateBTPawnAction_C MentalSubstateBTPawnAction.Default__MentalSubstateBTPawnAction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalSubstateBTPawnAction_C* UMentalSubstateBTPawnAction_C::GetDefaultObj()
{
	static class UMentalSubstateBTPawnAction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalSubstateBTPawnAction_C*>(UMentalSubstateBTPawnAction_C::StaticClass()->DefaultObject);

	return Default;
}

}


