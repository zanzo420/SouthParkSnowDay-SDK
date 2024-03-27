#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tutorial_RarityReshuffle.Tutorial_RarityReshuffle_C
// (None)

class UClass* UTutorial_RarityReshuffle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tutorial_RarityReshuffle_C");

	return Clss;
}


// Tutorial_RarityReshuffle_C Tutorial_RarityReshuffle.Default__Tutorial_RarityReshuffle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTutorial_RarityReshuffle_C* UTutorial_RarityReshuffle_C::GetDefaultObj()
{
	static class UTutorial_RarityReshuffle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTutorial_RarityReshuffle_C*>(UTutorial_RarityReshuffle_C::StaticClass()->DefaultObject);

	return Default;
}

}


