#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SwarmerDagger.SwarmerDagger_C
// (Actor)

class UClass* ASwarmerDagger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SwarmerDagger_C");

	return Clss;
}


// SwarmerDagger_C SwarmerDagger.Default__SwarmerDagger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASwarmerDagger_C* ASwarmerDagger_C::GetDefaultObj()
{
	static class ASwarmerDagger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASwarmerDagger_C*>(ASwarmerDagger_C::StaticClass()->DefaultObject);

	return Default;
}

}


