#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageType_Test.DamageType_Test_C
// (None)

class UClass* UDamageType_Test_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageType_Test_C");

	return Clss;
}


// DamageType_Test_C DamageType_Test.Default__DamageType_Test_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageType_Test_C* UDamageType_Test_C::GetDefaultObj()
{
	static class UDamageType_Test_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageType_Test_C*>(UDamageType_Test_C::StaticClass()->DefaultObject);

	return Default;
}

}


