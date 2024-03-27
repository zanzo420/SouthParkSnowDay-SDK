#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerAISniperMage.BodyControllerAISniperMage_C
// (Actor)

class UClass* ABodyControllerAISniperMage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerAISniperMage_C");

	return Clss;
}


// BodyControllerAISniperMage_C BodyControllerAISniperMage.Default__BodyControllerAISniperMage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerAISniperMage_C* ABodyControllerAISniperMage_C::GetDefaultObj()
{
	static class ABodyControllerAISniperMage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerAISniperMage_C*>(ABodyControllerAISniperMage_C::StaticClass()->DefaultObject);

	return Default;
}

}


