#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NormalAOEDoTDamageType.NormalAOEDoTDamageType_C
// (None)

class UClass* UNormalAOEDoTDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NormalAOEDoTDamageType_C");

	return Clss;
}


// NormalAOEDoTDamageType_C NormalAOEDoTDamageType.Default__NormalAOEDoTDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNormalAOEDoTDamageType_C* UNormalAOEDoTDamageType_C::GetDefaultObj()
{
	static class UNormalAOEDoTDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNormalAOEDoTDamageType_C*>(UNormalAOEDoTDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


