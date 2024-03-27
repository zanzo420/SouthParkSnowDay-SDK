#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InputDataBag.InputDataBag_C
// (None)

class UClass* UInputDataBag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputDataBag_C");

	return Clss;
}


// InputDataBag_C InputDataBag.Default__InputDataBag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInputDataBag_C* UInputDataBag_C::GetDefaultObj()
{
	static class UInputDataBag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputDataBag_C*>(UInputDataBag_C::StaticClass()->DefaultObject);

	return Default;
}

}


