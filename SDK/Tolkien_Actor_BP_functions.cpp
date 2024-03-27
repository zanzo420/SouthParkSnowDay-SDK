#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tolkien_Actor_BP.Tolkien_Actor_BP_C
// (Actor)

class UClass* ATolkien_Actor_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tolkien_Actor_BP_C");

	return Clss;
}


// Tolkien_Actor_BP_C Tolkien_Actor_BP.Default__Tolkien_Actor_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATolkien_Actor_BP_C* ATolkien_Actor_BP_C::GetDefaultObj()
{
	static class ATolkien_Actor_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATolkien_Actor_BP_C*>(ATolkien_Actor_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


