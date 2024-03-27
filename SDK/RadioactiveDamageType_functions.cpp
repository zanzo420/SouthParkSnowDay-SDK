#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RadioactiveDamageType.RadioactiveDamageType_C
// (None)

class UClass* URadioactiveDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadioactiveDamageType_C");

	return Clss;
}


// RadioactiveDamageType_C RadioactiveDamageType.Default__RadioactiveDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URadioactiveDamageType_C* URadioactiveDamageType_C::GetDefaultObj()
{
	static class URadioactiveDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URadioactiveDamageType_C*>(URadioactiveDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


