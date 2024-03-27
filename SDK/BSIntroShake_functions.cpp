#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BSIntroShake.BSIntroShake_C
// (None)

class UClass* UBSIntroShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BSIntroShake_C");

	return Clss;
}


// BSIntroShake_C BSIntroShake.Default__BSIntroShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBSIntroShake_C* UBSIntroShake_C::GetDefaultObj()
{
	static class UBSIntroShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBSIntroShake_C*>(UBSIntroShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


