#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StanSlamShake.StanSlamShake_C
// (None)

class UClass* UStanSlamShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StanSlamShake_C");

	return Clss;
}


// StanSlamShake_C StanSlamShake.Default__StanSlamShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStanSlamShake_C* UStanSlamShake_C::GetDefaultObj()
{
	static class UStanSlamShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStanSlamShake_C*>(UStanSlamShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


