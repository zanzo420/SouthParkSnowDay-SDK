#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FullBodyMantleBrute.FullBodyMantleBrute_C
// (None)

class UClass* UFullBodyMantleBrute_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FullBodyMantleBrute_C");

	return Clss;
}


// FullBodyMantleBrute_C FullBodyMantleBrute.Default__FullBodyMantleBrute_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFullBodyMantleBrute_C* UFullBodyMantleBrute_C::GetDefaultObj()
{
	static class UFullBodyMantleBrute_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFullBodyMantleBrute_C*>(UFullBodyMantleBrute_C::StaticClass()->DefaultObject);

	return Default;
}

}


