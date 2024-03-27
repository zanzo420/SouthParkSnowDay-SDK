#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FullBodyMantlePooplet.FullBodyMantlePooplet_C
// (None)

class UClass* UFullBodyMantlePooplet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FullBodyMantlePooplet_C");

	return Clss;
}


// FullBodyMantlePooplet_C FullBodyMantlePooplet.Default__FullBodyMantlePooplet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFullBodyMantlePooplet_C* UFullBodyMantlePooplet_C::GetDefaultObj()
{
	static class UFullBodyMantlePooplet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFullBodyMantlePooplet_C*>(UFullBodyMantlePooplet_C::StaticClass()->DefaultObject);

	return Default;
}

}


