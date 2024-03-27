#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TootFartDamageType.TootFartDamageType_C
// (None)

class UClass* UTootFartDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TootFartDamageType_C");

	return Clss;
}


// TootFartDamageType_C TootFartDamageType.Default__TootFartDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTootFartDamageType_C* UTootFartDamageType_C::GetDefaultObj()
{
	static class UTootFartDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTootFartDamageType_C*>(UTootFartDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


