#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FullBodyMantleNPC.FullBodyMantleNPC_C
// (None)

class UClass* UFullBodyMantleNPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FullBodyMantleNPC_C");

	return Clss;
}


// FullBodyMantleNPC_C FullBodyMantleNPC.Default__FullBodyMantleNPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFullBodyMantleNPC_C* UFullBodyMantleNPC_C::GetDefaultObj()
{
	static class UFullBodyMantleNPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFullBodyMantleNPC_C*>(UFullBodyMantleNPC_C::StaticClass()->DefaultObject);

	return Default;
}

}


