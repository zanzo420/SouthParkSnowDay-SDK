#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TestMeta.TestMeta_C
// (None)

class UClass* UTestMeta_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestMeta_C");

	return Clss;
}


// TestMeta_C TestMeta.Default__TestMeta_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTestMeta_C* UTestMeta_C::GetDefaultObj()
{
	static class UTestMeta_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestMeta_C*>(UTestMeta_C::StaticClass()->DefaultObject);

	return Default;
}

}


