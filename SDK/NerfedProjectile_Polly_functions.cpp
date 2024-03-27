#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NerfedProjectile_Polly.NerfedProjectile_Polly_C
// (Actor)

class UClass* ANerfedProjectile_Polly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NerfedProjectile_Polly_C");

	return Clss;
}


// NerfedProjectile_Polly_C NerfedProjectile_Polly.Default__NerfedProjectile_Polly_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANerfedProjectile_Polly_C* ANerfedProjectile_Polly_C::GetDefaultObj()
{
	static class ANerfedProjectile_Polly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANerfedProjectile_Polly_C*>(ANerfedProjectile_Polly_C::StaticClass()->DefaultObject);

	return Default;
}

}


