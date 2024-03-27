#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SwarmerBomb.SwarmerBomb_C
// (Actor)

class UClass* ASwarmerBomb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SwarmerBomb_C");

	return Clss;
}


// SwarmerBomb_C SwarmerBomb.Default__SwarmerBomb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASwarmerBomb_C* ASwarmerBomb_C::GetDefaultObj()
{
	static class ASwarmerBomb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASwarmerBomb_C*>(ASwarmerBomb_C::StaticClass()->DefaultObject);

	return Default;
}

}


