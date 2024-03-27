#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NarrativeDataBag.NarrativeDataBag_C
// (None)

class UClass* UNarrativeDataBag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NarrativeDataBag_C");

	return Clss;
}


// NarrativeDataBag_C NarrativeDataBag.Default__NarrativeDataBag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNarrativeDataBag_C* UNarrativeDataBag_C::GetDefaultObj()
{
	static class UNarrativeDataBag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNarrativeDataBag_C*>(UNarrativeDataBag_C::StaticClass()->DefaultObject);

	return Default;
}

}


