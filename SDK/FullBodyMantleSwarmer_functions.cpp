#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FullBodyMantleSwarmer.FullBodyMantleSwarmer_C
// (None)

class UClass* UFullBodyMantleSwarmer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FullBodyMantleSwarmer_C");

	return Clss;
}


// FullBodyMantleSwarmer_C FullBodyMantleSwarmer.Default__FullBodyMantleSwarmer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFullBodyMantleSwarmer_C* UFullBodyMantleSwarmer_C::GetDefaultObj()
{
	static class UFullBodyMantleSwarmer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFullBodyMantleSwarmer_C*>(UFullBodyMantleSwarmer_C::StaticClass()->DefaultObject);

	return Default;
}

}


